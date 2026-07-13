#include "recomp.h"

/* FUN_10009285 @ 0x101a9285 (53 bytes, 25 insns) */
void f_101a9285(void) {
  FTRACE(0x101a9285u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a9285 push ebp */
  push32((uint32_t)(EBP));
  /* 101a9286 mov ebp, esp */
  EBP = (ESP);
  /* 101a9288 push ecx */
  push32((uint32_t)(ECX));
  /* 101a9289 push esi */
  push32((uint32_t)(ESI));
  /* 101a928a wait  */
  /* wait (no observable integer/reg state) */
  /* 101a928b fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 101a928e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 101a9291 call 0x101a92d0 */
  push32(0x101a9296u); f_101a92d0();
  /* 101a9296 mov esi, eax */
  ESI = (EAX);
  /* 101a9298 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101a929b not eax */
  EAX = (~(EAX));
  /* 101a929d and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 101a929f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a92a2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 101a92a5 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 101a92a7 push esi */
  push32((uint32_t)(ESI));
  /* 101a92a8 call 0x101a9362 */
  push32(0x101a92adu); f_101a9362();
  /* 101a92ad pop ecx */
  ECX = (pop32());
  /* 101a92ae mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101a92b1 pop ecx */
  ECX = (pop32());
  /* 101a92b2 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 101a92b5 mov eax, esi */
  EAX = (ESI);
  /* 101a92b7 pop esi */
  ESI = (pop32());
  /* 101a92b8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a92b9 ret  */
  ESPCHK(0x101a9285u, _esp0);
  ESP += 4; return;
}

/* FUN_100092ba @ 0x101a92ba (22 bytes, 8 insns) */
void f_101a92ba(void) {
  FTRACE(0x101a92bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a92ba mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a92be and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101a92c3 push eax */
  push32((uint32_t)(EAX));
  /* 101a92c4 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 101a92c8 call 0x101a9285 */
  push32(0x101a92cdu); f_101a9285();
  /* 101a92cd pop ecx */
  ECX = (pop32());
  /* 101a92ce pop ecx */
  ECX = (pop32());
  /* 101a92cf ret  */
  ESPCHK(0x101a92bau, _esp0);
  ESP += 4; return;
}

/* FUN_100092d0 @ 0x101a92d0 (146 bytes, 58 insns) */
void f_101a92d0(void) {
  FTRACE(0x101a92d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a92d0 push ebx */
  push32((uint32_t)(EBX));
  /* 101a92d1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a92d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a92d7 push ebp */
  push32((uint32_t)(EBP));
  /* 101a92d8 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 101a92db push edi */
  push32((uint32_t)(EDI));
  /* 101a92dc je 0x101a92e1 */
  if (C.zf) goto L_101a92e1;
  /* 101a92de push 0x10 */
  push32((uint32_t)(0x10u));
  /* 101a92e0 pop eax */
  EAX = (pop32());
L_101a92e1:;
  /* 101a92e1 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 101a92e4 je 0x101a92e8 */
  if (C.zf) goto L_101a92e8;
  /* 101a92e6 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_101a92e8:;
  /* 101a92e8 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 101a92eb je 0x101a92ef */
  if (C.zf) goto L_101a92ef;
  /* 101a92ed or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_101a92ef:;
  /* 101a92ef test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 101a92f2 je 0x101a92f6 */
  if (C.zf) goto L_101a92f6;
  /* 101a92f4 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_101a92f6:;
  /* 101a92f6 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 101a92f9 je 0x101a92fd */
  if (C.zf) goto L_101a92fd;
  /* 101a92fb or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_101a92fd:;
  /* 101a92fd test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 101a9300 je 0x101a9307 */
  if (C.zf) goto L_101a9307;
  /* 101a9302 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_101a9307:;
  /* 101a9307 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 101a930a push esi */
  push32((uint32_t)(ESI));
  /* 101a930b mov edx, ecx */
  EDX = (ECX);
  /* 101a930d mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 101a9312 mov edi, 0x300 */
  EDI = (0x300u);
  /* 101a9317 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 101a9319 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 101a931e je 0x101a933f */
  if (C.zf) goto L_101a933f;
  /* 101a9320 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9326 je 0x101a933c */
  if (C.zf) goto L_101a933c;
  /* 101a9328 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a932e je 0x101a9338 */
  if (C.zf) goto L_101a9338;
  /* 101a9330 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9332 jne 0x101a933f */
  if (!C.zf) goto L_101a933f;
  /* 101a9334 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 101a9336 jmp 0x101a933f */
  goto L_101a933f;
L_101a9338:;
  /* 101a9338 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 101a933a jmp 0x101a933f */
  goto L_101a933f;
L_101a933c:;
  /* 101a933c or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_101a933f:;
  /* 101a933f and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 101a9341 pop esi */
  ESI = (pop32());
  /* 101a9342 je 0x101a934f */
  if (C.zf) goto L_101a934f;
  /* 101a9344 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9346 jne 0x101a9354 */
  if (!C.zf) goto L_101a9354;
  /* 101a9348 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 101a934d jmp 0x101a9354 */
  goto L_101a9354;
L_101a934f:;
  /* 101a934f or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_101a9354:;
  /* 101a9354 pop edi */
  EDI = (pop32());
  /* 101a9355 pop ebp */
  EBP = (pop32());
  /* 101a9356 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 101a9359 pop ebx */
  EBX = (pop32());
  /* 101a935a je 0x101a9361 */
  if (C.zf) goto L_101a9361;
  /* 101a935c or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_101a9361:;
  /* 101a9361 ret  */
  ESPCHK(0x101a92d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009362 @ 0x101a9362 (137 bytes, 53 insns) */
void f_101a9362(void) {
  FTRACE(0x101a9362u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a9362 push ebx */
  push32((uint32_t)(EBX));
  /* 101a9363 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a9367 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a9369 push esi */
  push32((uint32_t)(ESI));
  /* 101a936a test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 101a936d je 0x101a9372 */
  if (C.zf) goto L_101a9372;
  /* 101a936f push 1 */
  push32((uint32_t)(0x1u));
  /* 101a9371 pop eax */
  EAX = (pop32());
L_101a9372:;
  /* 101a9372 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 101a9375 je 0x101a9379 */
  if (C.zf) goto L_101a9379;
  /* 101a9377 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_101a9379:;
  /* 101a9379 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 101a937c je 0x101a9380 */
  if (C.zf) goto L_101a9380;
  /* 101a937e or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_101a9380:;
  /* 101a9380 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 101a9383 je 0x101a9387 */
  if (C.zf) goto L_101a9387;
  /* 101a9385 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_101a9387:;
  /* 101a9387 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 101a938a je 0x101a938e */
  if (C.zf) goto L_101a938e;
  /* 101a938c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_101a938e:;
  /* 101a938e test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 101a9394 je 0x101a9398 */
  if (C.zf) goto L_101a9398;
  /* 101a9396 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_101a9398:;
  /* 101a9398 mov ecx, ebx */
  ECX = (EBX);
  /* 101a939a mov edx, 0x300 */
  EDX = (0x300u);
  /* 101a939f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 101a93a1 mov esi, 0x200 */
  ESI = (0x200u);
  /* 101a93a6 je 0x101a93c5 */
  if (C.zf) goto L_101a93c5;
  /* 101a93a8 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a93ae je 0x101a93c2 */
  if (C.zf) goto L_101a93c2;
  /* 101a93b0 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a93b2 je 0x101a93bd */
  if (C.zf) goto L_101a93bd;
  /* 101a93b4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a93b6 jne 0x101a93c5 */
  if (!C.zf) goto L_101a93c5;
  /* 101a93b8 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 101a93bb jmp 0x101a93c5 */
  goto L_101a93c5;
L_101a93bd:;
  /* 101a93bd or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 101a93c0 jmp 0x101a93c5 */
  goto L_101a93c5;
L_101a93c2:;
  /* 101a93c2 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_101a93c5:;
  /* 101a93c5 mov ecx, ebx */
  ECX = (EBX);
  /* 101a93c7 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 101a93cd je 0x101a93db */
  if (C.zf) goto L_101a93db;
  /* 101a93cf cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a93d5 jne 0x101a93dd */
  if (!C.zf) goto L_101a93dd;
  /* 101a93d7 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 101a93d9 jmp 0x101a93dd */
  goto L_101a93dd;
L_101a93db:;
  /* 101a93db or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_101a93dd:;
  /* 101a93dd pop esi */
  ESI = (pop32());
  /* 101a93de test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 101a93e4 pop ebx */
  EBX = (pop32());
  /* 101a93e5 je 0x101a93ea */
  if (C.zf) goto L_101a93ea;
  /* 101a93e7 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_101a93ea:;
  /* 101a93ea ret  */
  ESPCHK(0x101a9362u, _esp0);
  ESP += 4; return;
}

/* FUN_100093eb @ 0x101a93eb (117 bytes, 46 insns) */
void f_101a93eb(void) {
  FTRACE(0x101a93ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a93eb push ebp */
  push32((uint32_t)(EBP));
  /* 101a93ec mov ebp, esp */
  EBP = (ESP);
  /* 101a93ee push ecx */
  push32((uint32_t)(ECX));
  /* 101a93ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a93f2 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 101a93f5 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a93fb ja 0x101a9409 */
  if ((!C.cf&&!C.zf)) goto L_101a9409;
  /* 101a93fd mov ecx, dword ptr [0x101b09d0] */
  ECX = (r32((uint32_t)(0x101b09d0)));
  /* 101a9403 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 101a9407 jmp 0x101a945b */
  goto L_101a945b;
L_101a9409:;
  /* 101a9409 mov ecx, eax */
  ECX = (EAX);
  /* 101a940b push esi */
  push32((uint32_t)(ESI));
  /* 101a940c mov esi, dword ptr [0x101b09d0] */
  ESI = (r32((uint32_t)(0x101b09d0)));
  /* 101a9412 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 101a9415 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 101a9418 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 101a941d pop esi */
  ESI = (pop32());
  /* 101a941e je 0x101a942e */
  if (C.zf) goto L_101a942e;
  /* 101a9420 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 101a9424 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 101a9427 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 101a942a push 2 */
  push32((uint32_t)(0x2u));
  /* 101a942c jmp 0x101a9437 */
  goto L_101a9437;
L_101a942e:;
  /* 101a942e and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101a9432 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 101a9435 push 1 */
  push32((uint32_t)(0x1u));
L_101a9437:;
  /* 101a9437 pop eax */
  EAX = (pop32());
  /* 101a9438 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 101a943b push 1 */
  push32((uint32_t)(0x1u));
  /* 101a943d push 0 */
  push32((uint32_t)(0x0u));
  /* 101a943f push 0 */
  push32((uint32_t)(0x0u));
  /* 101a9441 push ecx */
  push32((uint32_t)(ECX));
  /* 101a9442 push eax */
  push32((uint32_t)(EAX));
  /* 101a9443 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 101a9446 push eax */
  push32((uint32_t)(EAX));
  /* 101a9447 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a9449 call 0x101ac29d */
  push32(0x101a944eu); f_101ac29d();
  /* 101a944e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9451 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a9453 jne 0x101a9457 */
  if (!C.zf) goto L_101a9457;
  /* 101a9455 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a9456 ret  */
  ESPCHK(0x101a93ebu, _esp0);
  ESP += 4; return;
L_101a9457:;
  /* 101a9457 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_101a945b:;
  /* 101a945b and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 101a945e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a945f ret  */
  ESPCHK(0x101a93ebu, _esp0);
  ESP += 4; return;
}

/* FUN_10009460 @ 0x101a9460 (111 bytes, 44 insns) */
void f_101a9460(void) {
  FTRACE(0x101a9460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a9460 push ebx */
  push32((uint32_t)(EBX));
  /* 101a9461 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101a9463 cmp dword ptr [0x101b6838], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101b6838))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9469 jne 0x101a947e */
  if (!C.zf) goto L_101a947e;
  /* 101a946b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a946f cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9472 jl 0x101a94cd */
  if ((C.sf!=C.of)) goto L_101a94cd;
  /* 101a9474 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9477 jg 0x101a94cd */
  if ((!C.zf&&C.sf==C.of)) goto L_101a94cd;
  /* 101a9479 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a947c pop ebx */
  EBX = (pop32());
  /* 101a947d ret  */
  ESPCHK(0x101a9460u, _esp0);
  ESP += 4; return;
L_101a947e:;
  /* 101a947e push esi */
  push32((uint32_t)(ESI));
  /* 101a947f mov esi, 0x101b69b4 */
  ESI = (0x101b69b4u);
  /* 101a9484 push edi */
  push32((uint32_t)(EDI));
  /* 101a9485 push esi */
  push32((uint32_t)(ESI));
  /* 101a9486 call dword ptr [0x101ae090] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae090))), 0x101a948cu);
  /* 101a948c cmp dword ptr [0x101b69b0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101b69b0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9492 mov edi, dword ptr [0x101ae08c] */
  EDI = (r32((uint32_t)(0x101ae08c)));
  /* 101a9498 je 0x101a94a8 */
  if (C.zf) goto L_101a94a8;
  /* 101a949a push esi */
  push32((uint32_t)(ESI));
  /* 101a949b call edi */
  call_ind((uint32_t)(EDI), 0x101a949du);
  /* 101a949d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101a949f call 0x101aa033 */
  push32(0x101a94a4u); f_101aa033();
  /* 101a94a4 pop ecx */
  ECX = (pop32());
  /* 101a94a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a94a7 pop ebx */
  EBX = (pop32());
L_101a94a8:;
  /* 101a94a8 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 101a94ac call 0x101a94cf */
  push32(0x101a94b1u); f_101a94cf();
  /* 101a94b1 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101a94b3 pop ecx */
  ECX = (pop32());
  /* 101a94b4 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 101a94b8 je 0x101a94c4 */
  if (C.zf) goto L_101a94c4;
  /* 101a94ba push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101a94bc call 0x101aa094 */
  push32(0x101a94c1u); f_101aa094();
  /* 101a94c1 pop ecx */
  ECX = (pop32());
  /* 101a94c2 jmp 0x101a94c7 */
  goto L_101a94c7;
L_101a94c4:;
  /* 101a94c4 push esi */
  push32((uint32_t)(ESI));
  /* 101a94c5 call edi */
  call_ind((uint32_t)(EDI), 0x101a94c7u);
L_101a94c7:;
  /* 101a94c7 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101a94cb pop edi */
  EDI = (pop32());
  /* 101a94cc pop esi */
  ESI = (pop32());
L_101a94cd:;
  /* 101a94cd pop ebx */
  EBX = (pop32());
  /* 101a94ce ret  */
  ESPCHK(0x101a9460u, _esp0);
  ESP += 4; return;
}

/* FUN_100094cf @ 0x101a94cf (203 bytes, 78 insns) */
void f_101a94cf(void) {
  FTRACE(0x101a94cfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a94cf push ebp */
  push32((uint32_t)(EBP));
  /* 101a94d0 mov ebp, esp */
  EBP = (ESP);
  /* 101a94d2 push ecx */
  push32((uint32_t)(ECX));
  /* 101a94d3 cmp dword ptr [0x101b6838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101b6838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a94da push ebx */
  push32((uint32_t)(EBX));
  /* 101a94db push esi */
  push32((uint32_t)(ESI));
  /* 101a94dc push edi */
  push32((uint32_t)(EDI));
  /* 101a94dd jne 0x101a94fc */
  if (!C.zf) goto L_101a94fc;
  /* 101a94df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a94e2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a94e5 jl 0x101a9595 */
  if ((C.sf!=C.of)) goto L_101a9595;
  /* 101a94eb cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a94ee jg 0x101a9595 */
  if ((!C.zf&&C.sf==C.of)) goto L_101a9595;
  /* 101a94f4 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a94f7 jmp 0x101a9595 */
  goto L_101a9595;
L_101a94fc:;
  /* 101a94fc mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a94ff mov edi, 0x100 */
  EDI = (0x100u);
  /* 101a9504 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a9506 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9508 pop esi */
  ESI = (pop32());
  /* 101a9509 jge 0x101a9530 */
  if ((C.sf==C.of)) goto L_101a9530;
  /* 101a950b cmp dword ptr [0x101b0be0], esi */
  { uint32_t _a=(r32((uint32_t)(0x101b0be0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9511 jle 0x101a951e */
  if ((C.zf||C.sf!=C.of)) goto L_101a951e;
  /* 101a9513 push esi */
  push32((uint32_t)(ESI));
  /* 101a9514 push ebx */
  push32((uint32_t)(EBX));
  /* 101a9515 call 0x101a93eb */
  push32(0x101a951au); f_101a93eb();
  /* 101a951a pop ecx */
  ECX = (pop32());
  /* 101a951b pop ecx */
  ECX = (pop32());
  /* 101a951c jmp 0x101a9528 */
  goto L_101a9528;
L_101a951e:;
  /* 101a951e mov eax, dword ptr [0x101b09d0] */
  EAX = (r32((uint32_t)(0x101b09d0)));
  /* 101a9523 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 101a9526 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_101a9528:;
  /* 101a9528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a952a jne 0x101a9530 */
  if (!C.zf) goto L_101a9530;
L_101a952c:;
  /* 101a952c mov eax, ebx */
  EAX = (EBX);
  /* 101a952e jmp 0x101a9595 */
  goto L_101a9595;
L_101a9530:;
  /* 101a9530 mov edx, dword ptr [0x101b09d0] */
  EDX = (r32((uint32_t)(0x101b09d0)));
  /* 101a9536 mov eax, ebx */
  EAX = (EBX);
  /* 101a9538 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 101a953b movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 101a953e test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 101a9543 je 0x101a9554 */
  if (C.zf) goto L_101a9554;
  /* 101a9545 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 101a9549 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a954b mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 101a954e mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 101a9551 pop eax */
  EAX = (pop32());
  /* 101a9552 jmp 0x101a955d */
  goto L_101a955d;
L_101a9554:;
  /* 101a9554 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 101a9558 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 101a955b mov eax, esi */
  EAX = (ESI);
L_101a955d:;
  /* 101a955d push esi */
  push32((uint32_t)(ESI));
  /* 101a955e push 0 */
  push32((uint32_t)(0x0u));
  /* 101a9560 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 101a9563 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a9565 push ecx */
  push32((uint32_t)(ECX));
  /* 101a9566 push eax */
  push32((uint32_t)(EAX));
  /* 101a9567 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101a956a push eax */
  push32((uint32_t)(EAX));
  /* 101a956b push edi */
  push32((uint32_t)(EDI));
  /* 101a956c push dword ptr [0x101b6838] */
  push32((uint32_t)(r32((uint32_t)(0x101b6838))));
  /* 101a9572 call 0x101ac3e6 */
  push32(0x101a9577u); f_101ac3e6();
  /* 101a9577 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a957a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a957c je 0x101a952c */
  if (C.zf) goto L_101a952c;
  /* 101a957e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9580 jne 0x101a9588 */
  if (!C.zf) goto L_101a9588;
  /* 101a9582 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 101a9586 jmp 0x101a9595 */
  goto L_101a9595;
L_101a9588:;
  /* 101a9588 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 101a958c movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 101a9590 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 101a9593 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_101a9595:;
  /* 101a9595 pop edi */
  EDI = (pop32());
  /* 101a9596 pop esi */
  ESI = (pop32());
  /* 101a9597 pop ebx */
  EBX = (pop32());
  /* 101a9598 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a9599 ret  */
  ESPCHK(0x101a94cfu, _esp0);
  ESP += 4; return;
}

/* FUN_1000959a @ 0x101a959a (73 bytes, 36 insns) */
void f_101a959a(void) {
  FTRACE(0x101a959au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a959a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a959e push esi */
  push32((uint32_t)(ESI));
  /* 101a959f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101a95a1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101a95a2 pop ecx */
  ECX = (pop32());
  /* 101a95a3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101a95a5 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101a95a7 mov esi, eax */
  ESI = (EAX);
  /* 101a95a9 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101a95ad cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101a95ae idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101a95b0 pop ecx */
  ECX = (pop32());
  /* 101a95b1 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a95b5 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a95b7 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 101a95ba shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 101a95bc not edx */
  EDX = (~(EDX));
  /* 101a95be test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 101a95c1 jne 0x101a95df */
  if (!C.zf) goto L_101a95df;
  /* 101a95c3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101a95c4 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a95c7 jge 0x101a95da */
  if ((C.sf==C.of)) goto L_101a95da;
  /* 101a95c9 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_101a95cc:;
  /* 101a95cc cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a95cf jne 0x101a95df */
  if (!C.zf) goto L_101a95df;
  /* 101a95d1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101a95d2 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a95d5 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a95d8 jl 0x101a95cc */
  if ((C.sf!=C.of)) goto L_101a95cc;
L_101a95da:;
  /* 101a95da push 1 */
  push32((uint32_t)(0x1u));
  /* 101a95dc pop eax */
  EAX = (pop32());
  /* 101a95dd pop esi */
  ESI = (pop32());
  /* 101a95de ret  */
  ESPCHK(0x101a959au, _esp0);
  ESP += 4; return;
L_101a95df:;
  /* 101a95df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a95e1 pop esi */
  ESI = (pop32());
  /* 101a95e2 ret  */
  ESPCHK(0x101a959au, _esp0);
  ESP += 4; return;
}

/* FUN_100095e3 @ 0x101a95e3 (86 bytes, 43 insns) */
void f_101a95e3(void) {
  FTRACE(0x101a95e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a95e3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a95e7 push ebx */
  push32((uint32_t)(EBX));
  /* 101a95e8 push esi */
  push32((uint32_t)(ESI));
  /* 101a95e9 push edi */
  push32((uint32_t)(EDI));
  /* 101a95ea push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101a95ec mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 101a95f0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101a95f1 pop ecx */
  ECX = (pop32());
  /* 101a95f2 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101a95f4 mov esi, eax */
  ESI = (EAX);
  /* 101a95f6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 101a95fa cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101a95fb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101a95fd lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 101a9600 push edi */
  push32((uint32_t)(EDI));
  /* 101a9601 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101a9603 pop ecx */
  ECX = (pop32());
  /* 101a9604 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a9606 pop eax */
  EAX = (pop32());
  /* 101a9607 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a9609 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 101a960b push eax */
  push32((uint32_t)(EAX));
  /* 101a960c push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 101a960e call 0x101ac635 */
  push32(0x101a9613u); f_101ac635();
  /* 101a9613 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9616 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101a9617 js 0x101a9635 */
  if (C.sf) goto L_101a9635;
  /* 101a9619 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_101a961c:;
  /* 101a961c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a961e je 0x101a9635 */
  if (C.zf) goto L_101a9635;
  /* 101a9620 push edi */
  push32((uint32_t)(EDI));
  /* 101a9621 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a9623 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 101a9625 call 0x101ac635 */
  push32(0x101a962au); f_101ac635();
  /* 101a962a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a962d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101a962e sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a9631 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a9633 jge 0x101a961c */
  if ((C.sf==C.of)) goto L_101a961c;
L_101a9635:;
  /* 101a9635 pop edi */
  EDI = (pop32());
  /* 101a9636 pop esi */
  ESI = (pop32());
  /* 101a9637 pop ebx */
  EBX = (pop32());
  /* 101a9638 ret  */
  ESPCHK(0x101a95e3u, _esp0);
  ESP += 4; return;
}

/* FUN_10009639 @ 0x101a9639 (140 bytes, 71 insns) */
void f_101a9639(void) {
  FTRACE(0x101a9639u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a9639 push ebp */
  push32((uint32_t)(EBP));
  /* 101a963a mov ebp, esp */
  EBP = (ESP);
  /* 101a963c push ecx */
  push32((uint32_t)(ECX));
  /* 101a963d push ecx */
  push32((uint32_t)(ECX));
  /* 101a963e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101a9641 push ebx */
  push32((uint32_t)(EBX));
  /* 101a9642 push esi */
  push32((uint32_t)(ESI));
  /* 101a9643 push edi */
  push32((uint32_t)(EDI));
  /* 101a9644 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 101a9647 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101a9649 pop ecx */
  ECX = (pop32());
  /* 101a964a and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101a964e lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 101a9651 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101a9653 mov eax, ebx */
  EAX = (EBX);
  /* 101a9655 pop esi */
  ESI = (pop32());
  /* 101a9656 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101a9657 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101a9659 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101a965b mov ecx, eax */
  ECX = (EAX);
  /* 101a965d mov eax, ebx */
  EAX = (EBX);
  /* 101a965f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101a9660 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101a9662 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a9665 pop esi */
  ESI = (pop32());
  /* 101a9666 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a9668 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101a966b lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 101a966e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101a9671 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a9673 pop edx */
  EDX = (pop32());
  /* 101a9674 mov ecx, esi */
  ECX = (ESI);
  /* 101a9676 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 101a9678 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 101a967a je 0x101a969d */
  if (C.zf) goto L_101a969d;
  /* 101a967c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101a967d push ebx */
  push32((uint32_t)(EBX));
  /* 101a967e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101a9681 call 0x101a959a */
  push32(0x101a9686u); f_101a959a();
  /* 101a9686 pop ecx */
  ECX = (pop32());
  /* 101a9687 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a9689 pop ecx */
  ECX = (pop32());
  /* 101a968a jne 0x101a969a */
  if (!C.zf) goto L_101a969a;
  /* 101a968c push edi */
  push32((uint32_t)(EDI));
  /* 101a968d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101a9690 call 0x101a95e3 */
  push32(0x101a9695u); f_101a95e3();
  /* 101a9695 pop ecx */
  ECX = (pop32());
  /* 101a9696 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101a9699 pop ecx */
  ECX = (pop32());
L_101a969a:;
  /* 101a969a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_101a969d:;
  /* 101a969d or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 101a96a0 mov ecx, esi */
  ECX = (ESI);
  /* 101a96a2 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 101a96a4 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a96a6 pop ecx */
  ECX = (pop32());
  /* 101a96a7 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101a96a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101a96ac inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a96ad cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a96af jge 0x101a96bd */
  if ((C.sf==C.of)) goto L_101a96bd;
  /* 101a96b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a96b4 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a96b6 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 101a96b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a96bb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_101a96bd:;
  /* 101a96bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101a96c0 pop edi */
  EDI = (pop32());
  /* 101a96c1 pop esi */
  ESI = (pop32());
  /* 101a96c2 pop ebx */
  EBX = (pop32());
  /* 101a96c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a96c4 ret  */
  ESPCHK(0x101a9639u, _esp0);
  ESP += 4; return;
}

/* FUN_100096c5 @ 0x101a96c5 (27 bytes, 13 insns) */
void f_101a96c5(void) {
  FTRACE(0x101a96c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a96c5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a96c9 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a96cd push esi */
  push32((uint32_t)(ESI));
  /* 101a96ce push 3 */
  push32((uint32_t)(0x3u));
  /* 101a96d0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a96d2 pop edx */
  EDX = (pop32());
L_101a96d3:;
  /* 101a96d3 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 101a96d5 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 101a96d8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a96db dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 101a96dc jne 0x101a96d3 */
  if (!C.zf) goto L_101a96d3;
  /* 101a96de pop esi */
  ESI = (pop32());
  /* 101a96df ret  */
  ESPCHK(0x101a96c5u, _esp0);
  ESP += 4; return;
}

/* FUN_100096e0 @ 0x101a96e0 (12 bytes, 8 insns) */
void f_101a96e0(void) {
  FTRACE(0x101a96e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a96e0 push edi */
  push32((uint32_t)(EDI));
  /* 101a96e1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 101a96e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a96e7 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101a96e8 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101a96e9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101a96ea pop edi */
  EDI = (pop32());
  /* 101a96eb ret  */
  ESPCHK(0x101a96e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096ec @ 0x101a96ec (27 bytes, 13 insns) */
void f_101a96ec(void) {
  FTRACE(0x101a96ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a96ec mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a96f0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_101a96f2:;
  /* 101a96f2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a96f5 jne 0x101a9704 */
  if (!C.zf) goto L_101a9704;
  /* 101a96f7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101a96f8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a96fb cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a96fe jl 0x101a96f2 */
  if ((C.sf!=C.of)) goto L_101a96f2;
  /* 101a9700 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a9702 pop eax */
  EAX = (pop32());
  /* 101a9703 ret  */
  ESPCHK(0x101a96ecu, _esp0);
  ESP += 4; return;
L_101a9704:;
  /* 101a9704 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a9706 ret  */
  ESPCHK(0x101a96ecu, _esp0);
  ESP += 4; return;
}

/* FUN_10009707 @ 0x101a9707 (141 bytes, 64 insns) */
void f_101a9707(void) {
  FTRACE(0x101a9707u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a9707 push ebp */
  push32((uint32_t)(EBP));
  /* 101a9708 mov ebp, esp */
  EBP = (ESP);
  /* 101a970a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a970d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101a9710 push ebx */
  push32((uint32_t)(EBX));
  /* 101a9711 push esi */
  push32((uint32_t)(ESI));
  /* 101a9712 push edi */
  push32((uint32_t)(EDI));
  /* 101a9713 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101a9715 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 101a9718 pop ebx */
  EBX = (pop32());
  /* 101a9719 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 101a971c cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101a971d mov ecx, ebx */
  ECX = (EBX);
  /* 101a971f mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 101a9726 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101a9728 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 101a972b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101a972e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101a972f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101a9731 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 101a9735 mov ecx, edx */
  ECX = (EDX);
  /* 101a9737 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 101a9739 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a973b not esi */
  ESI = (~(ESI));
L_101a973d:;
  /* 101a973d mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 101a973f mov ecx, eax */
  ECX = (EAX);
  /* 101a9741 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 101a9743 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101a9746 mov ecx, edx */
  ECX = (EDX);
  /* 101a9748 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 101a974a or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 101a974d mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 101a974f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101a9752 mov ecx, ebx */
  ECX = (EBX);
  /* 101a9754 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9757 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 101a9759 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 101a975c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101a975f jne 0x101a973d */
  if (!C.zf) goto L_101a973d;
  /* 101a9761 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 101a9764 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a9766 pop ebx */
  EBX = (pop32());
  /* 101a9767 mov esi, edi */
  ESI = (EDI);
  /* 101a9769 push 8 */
  push32((uint32_t)(0x8u));
  /* 101a976b pop ecx */
  ECX = (pop32());
  /* 101a976c shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_101a976f:;
  /* 101a976f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9771 jl 0x101a9782 */
  if ((C.sf!=C.of)) goto L_101a9782;
  /* 101a9773 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a9776 mov eax, ecx */
  EAX = (ECX);
  /* 101a9778 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a977a mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 101a977d mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 101a9780 jmp 0x101a9789 */
  goto L_101a9789;
L_101a9782:;
  /* 101a9782 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a9785 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_101a9789:;
  /* 101a9789 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101a978a sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a978d jns 0x101a976f */
  if (!C.sf) goto L_101a976f;
  /* 101a978f pop edi */
  EDI = (pop32());
  /* 101a9790 pop esi */
  ESI = (pop32());
  /* 101a9791 pop ebx */
  EBX = (pop32());
  /* 101a9792 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a9793 ret  */
  ESPCHK(0x101a9707u, _esp0);
  ESP += 4; return;
}

/* FUN_10009794 @ 0x101a9794 (364 bytes, 138 insns) */
void f_101a9794(void) {
  FTRACE(0x101a9794u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a9794 push ebp */
  push32((uint32_t)(EBP));
  /* 101a9795 mov ebp, esp */
  EBP = (ESP);
  /* 101a9797 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a979a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a979d push ebx */
  push32((uint32_t)(EBX));
  /* 101a979e push esi */
  push32((uint32_t)(ESI));
  /* 101a979f push edi */
  push32((uint32_t)(EDI));
  /* 101a97a0 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 101a97a4 mov ebx, ecx */
  EBX = (ECX);
  /* 101a97a6 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 101a97ac mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 101a97af mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 101a97b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 101a97b5 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 101a97b8 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 101a97bb mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 101a97be and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 101a97c4 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a97ca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101a97cd shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 101a97d0 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a97d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101a97d9 jne 0x101a9801 */
  if (!C.zf) goto L_101a9801;
  /* 101a97db lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101a97de xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101a97e0 push eax */
  push32((uint32_t)(EAX));
  /* 101a97e1 call 0x101a96ec */
  push32(0x101a97e6u); f_101a96ec();
  /* 101a97e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a97e8 pop ecx */
  ECX = (pop32());
  /* 101a97e9 jne 0x101a98c0 */
  if (!C.zf) goto L_101a98c0;
  /* 101a97ef lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101a97f2 push eax */
  push32((uint32_t)(EAX));
  /* 101a97f3 call 0x101a96e0 */
  push32(0x101a97f8u); f_101a96e0();
  /* 101a97f8 pop ecx */
  ECX = (pop32());
L_101a97f9:;
  /* 101a97f9 push 2 */
  push32((uint32_t)(0x2u));
L_101a97fb:;
  /* 101a97fb pop eax */
  EAX = (pop32());
  /* 101a97fc jmp 0x101a98c2 */
  goto L_101a98c2;
L_101a9801:;
  /* 101a9801 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101a9804 push eax */
  push32((uint32_t)(EAX));
  /* 101a9805 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 101a9808 push eax */
  push32((uint32_t)(EAX));
  /* 101a9809 call 0x101a96c5 */
  push32(0x101a980eu); f_101a96c5();
  /* 101a980e push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 101a9811 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101a9814 push eax */
  push32((uint32_t)(EAX));
  /* 101a9815 call 0x101a9639 */
  push32(0x101a981au); f_101a9639();
  /* 101a981a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a981d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a981f je 0x101a9822 */
  if (C.zf) goto L_101a9822;
  /* 101a9821 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_101a9822:;
  /* 101a9822 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 101a9825 mov ecx, eax */
  ECX = (EAX);
  /* 101a9827 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a982a cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a982c jge 0x101a983a */
  if ((C.sf==C.of)) goto L_101a983a;
  /* 101a982e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101a9831 push eax */
  push32((uint32_t)(EAX));
  /* 101a9832 call 0x101a96e0 */
  push32(0x101a9837u); f_101a96e0();
  /* 101a9837 pop ecx */
  ECX = (pop32());
  /* 101a9838 jmp 0x101a9876 */
  goto L_101a9876;
L_101a983a:;
  /* 101a983a cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a983c jg 0x101a987d */
  if ((!C.zf&&C.sf==C.of)) goto L_101a987d;
  /* 101a983e sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a9840 mov esi, eax */
  ESI = (EAX);
  /* 101a9842 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 101a9845 push eax */
  push32((uint32_t)(EAX));
  /* 101a9846 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101a9849 push eax */
  push32((uint32_t)(EAX));
  /* 101a984a call 0x101a96c5 */
  push32(0x101a984fu); f_101a96c5();
  /* 101a984f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101a9852 push esi */
  push32((uint32_t)(ESI));
  /* 101a9853 push eax */
  push32((uint32_t)(EAX));
  /* 101a9854 call 0x101a9707 */
  push32(0x101a9859u); f_101a9707();
  /* 101a9859 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 101a985c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101a985f push eax */
  push32((uint32_t)(EAX));
  /* 101a9860 call 0x101a9639 */
  push32(0x101a9865u); f_101a9639();
  /* 101a9865 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 101a9868 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a9869 push eax */
  push32((uint32_t)(EAX));
  /* 101a986a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101a986d push eax */
  push32((uint32_t)(EAX));
  /* 101a986e call 0x101a9707 */
  push32(0x101a9873u); f_101a9707();
  /* 101a9873 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a9876:;
  /* 101a9876 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101a9878 jmp 0x101a97f9 */
  goto L_101a97f9;
L_101a987d:;
  /* 101a987d cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a987f jl 0x101a98a9 */
  if ((C.sf!=C.of)) goto L_101a98a9;
  /* 101a9881 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101a9884 push eax */
  push32((uint32_t)(EAX));
  /* 101a9885 call 0x101a96e0 */
  push32(0x101a988au); f_101a96e0();
  /* 101a988a push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 101a988d or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 101a9891 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101a9894 push eax */
  push32((uint32_t)(EAX));
  /* 101a9895 call 0x101a9707 */
  push32(0x101a989au); f_101a9707();
  /* 101a989a mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 101a989d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a98a0 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a98a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a98a4 jmp 0x101a97fb */
  goto L_101a97fb;
L_101a98a9:;
  /* 101a98a9 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 101a98ac mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 101a98af and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 101a98b3 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101a98b6 push eax */
  push32((uint32_t)(EAX));
  /* 101a98b7 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a98b9 call 0x101a9707 */
  push32(0x101a98beu); f_101a9707();
  /* 101a98be pop ecx */
  ECX = (pop32());
  /* 101a98bf pop ecx */
  ECX = (pop32());
L_101a98c0:;
  /* 101a98c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101a98c2:;
  /* 101a98c2 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101a98c4 pop ecx */
  ECX = (pop32());
  /* 101a98c5 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a98c8 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 101a98cb shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 101a98cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a98d0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 101a98d2 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a98d4 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 101a98da or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 101a98dc or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 101a98df cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a98e2 jne 0x101a98f1 */
  if (!C.zf) goto L_101a98f1;
  /* 101a98e4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101a98e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 101a98ea mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 101a98ed mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 101a98ef jmp 0x101a98fb */
  goto L_101a98fb;
L_101a98f1:;
  /* 101a98f1 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a98f4 jne 0x101a98fb */
  if (!C.zf) goto L_101a98fb;
  /* 101a98f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101a98f9 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_101a98fb:;
  /* 101a98fb pop edi */
  EDI = (pop32());
  /* 101a98fc pop esi */
  ESI = (pop32());
  /* 101a98fd pop ebx */
  EBX = (pop32());
  /* 101a98fe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a98ff ret  */
  ESPCHK(0x101a9794u, _esp0);
  ESP += 4; return;
}

/* FUN_10009900 @ 0x101a9900 (22 bytes, 6 insns) */
void f_101a9900(void) {
  FTRACE(0x101a9900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a9900 push 0x101b0bf0 */
  push32((uint32_t)(0x101b0bf0u));
  /* 101a9905 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101a9909 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101a990d call 0x101a9794 */
  push32(0x101a9912u); f_101a9794();
  /* 101a9912 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9915 ret  */
  ESPCHK(0x101a9900u, _esp0);
  ESP += 4; return;
}

/* FUN_10009916 @ 0x101a9916 (22 bytes, 6 insns) */
void f_101a9916(void) {
  FTRACE(0x101a9916u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a9916 push 0x101b0c08 */
  push32((uint32_t)(0x101b0c08u));
  /* 101a991b push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101a991f push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101a9923 call 0x101a9794 */
  push32(0x101a9928u); f_101a9794();
  /* 101a9928 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a992b ret  */
  ESPCHK(0x101a9916u, _esp0);
  ESP += 4; return;
}

/* FUN_1000992c @ 0x101a992c (45 bytes, 21 insns) */
void f_101a992c(void) {
  FTRACE(0x101a992cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a992c push ebp */
  push32((uint32_t)(EBP));
  /* 101a992d mov ebp, esp */
  EBP = (ESP);
  /* 101a992f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a9932 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a9934 push eax */
  push32((uint32_t)(EAX));
  /* 101a9935 push eax */
  push32((uint32_t)(EAX));
  /* 101a9936 push eax */
  push32((uint32_t)(EAX));
  /* 101a9937 push eax */
  push32((uint32_t)(EAX));
  /* 101a9938 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101a993b lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 101a993e push eax */
  push32((uint32_t)(EAX));
  /* 101a993f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101a9942 push eax */
  push32((uint32_t)(EAX));
  /* 101a9943 call 0x101ac7d6 */
  push32(0x101a9948u); f_101ac7d6();
  /* 101a9948 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101a994b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101a994e push eax */
  push32((uint32_t)(EAX));
  /* 101a994f call 0x101a9900 */
  push32(0x101a9954u); f_101a9900();
  /* 101a9954 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9957 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a9958 ret  */
  ESPCHK(0x101a992cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009959 @ 0x101a9959 (45 bytes, 21 insns) */
void f_101a9959(void) {
  FTRACE(0x101a9959u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a9959 push ebp */
  push32((uint32_t)(EBP));
  /* 101a995a mov ebp, esp */
  EBP = (ESP);
  /* 101a995c sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a995f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a9961 push eax */
  push32((uint32_t)(EAX));
  /* 101a9962 push eax */
  push32((uint32_t)(EAX));
  /* 101a9963 push eax */
  push32((uint32_t)(EAX));
  /* 101a9964 push eax */
  push32((uint32_t)(EAX));
  /* 101a9965 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101a9968 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 101a996b push eax */
  push32((uint32_t)(EAX));
  /* 101a996c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101a996f push eax */
  push32((uint32_t)(EAX));
  /* 101a9970 call 0x101ac7d6 */
  push32(0x101a9975u); f_101ac7d6();
  /* 101a9975 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101a9978 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101a997b push eax */
  push32((uint32_t)(EAX));
  /* 101a997c call 0x101a9916 */
  push32(0x101a9981u); f_101a9916();
  /* 101a9981 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9984 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a9985 ret  */
  ESPCHK(0x101a9959u, _esp0);
  ESP += 4; return;
}

/* FUN_10009986 @ 0x101a9986 (119 bytes, 57 insns) */
void f_101a9986(void) {
  FTRACE(0x101a9986u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a9986 push ebp */
  push32((uint32_t)(EBP));
  /* 101a9987 mov ebp, esp */
  EBP = (ESP);
  /* 101a9989 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 101a998c push ebx */
  push32((uint32_t)(EBX));
  /* 101a998d mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 101a9990 push esi */
  push32((uint32_t)(ESI));
  /* 101a9991 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 101a9994 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 101a9997 push edi */
  push32((uint32_t)(EDI));
  /* 101a9998 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 101a999b mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 101a999e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101a99a0 mov eax, edi */
  EAX = (EDI);
  /* 101a99a2 jle 0x101a99c3 */
  if ((C.zf||C.sf!=C.of)) goto L_101a99c3;
  /* 101a99a4 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101a99a7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_101a99a9:;
  /* 101a99a9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 101a99ab test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101a99ad je 0x101a99b5 */
  if (C.zf) goto L_101a99b5;
  /* 101a99af movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 101a99b2 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101a99b3 jmp 0x101a99b8 */
  goto L_101a99b8;
L_101a99b5:;
  /* 101a99b5 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 101a99b7 pop edx */
  EDX = (pop32());
L_101a99b8:;
  /* 101a99b8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 101a99ba inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a99bb dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 101a99be jne 0x101a99a9 */
  if (!C.zf) goto L_101a99a9;
  /* 101a99c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_101a99c3:;
  /* 101a99c3 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 101a99c6 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101a99c8 jl 0x101a99dc */
  if ((C.sf!=C.of)) goto L_101a99dc;
  /* 101a99ca cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a99cd jl 0x101a99dc */
  if ((C.sf!=C.of)) goto L_101a99dc;
L_101a99cf:;
  /* 101a99cf dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101a99d0 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a99d3 jne 0x101a99da */
  if (!C.zf) goto L_101a99da;
  /* 101a99d5 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 101a99d8 jmp 0x101a99cf */
  goto L_101a99cf;
L_101a99da:;
  /* 101a99da inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_101a99dc:;
  /* 101a99dc cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a99df jne 0x101a99e6 */
  if (!C.zf) goto L_101a99e6;
  /* 101a99e1 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 101a99e4 jmp 0x101a99f8 */
  goto L_101a99f8;
L_101a99e6:;
  /* 101a99e6 push edi */
  push32((uint32_t)(EDI));
  /* 101a99e7 call 0x101a9060 */
  push32(0x101a99ecu); f_101a9060();
  /* 101a99ec inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a99ed push eax */
  push32((uint32_t)(EAX));
  /* 101a99ee push edi */
  push32((uint32_t)(EDI));
  /* 101a99ef push esi */
  push32((uint32_t)(ESI));
  /* 101a99f0 call 0x101a9c60 */
  push32(0x101a99f5u); f_101a9c60();
  /* 101a99f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a99f8:;
  /* 101a99f8 pop edi */
  EDI = (pop32());
  /* 101a99f9 pop esi */
  ESI = (pop32());
  /* 101a99fa pop ebx */
  EBX = (pop32());
  /* 101a99fb pop ebp */
  EBP = (pop32());
  /* 101a99fc ret  */
  ESPCHK(0x101a9986u, _esp0);
  ESP += 4; return;
}

/* FUN_100099fd @ 0x101a99fd (92 bytes, 41 insns) */
void f_101a99fd(void) {
  FTRACE(0x101a99fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a99fd push ebp */
  push32((uint32_t)(EBP));
  /* 101a99fe mov ebp, esp */
  EBP = (ESP);
  /* 101a9a00 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a9a03 push esi */
  push32((uint32_t)(ESI));
  /* 101a9a04 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101a9a07 push edi */
  push32((uint32_t)(EDI));
  /* 101a9a08 push eax */
  push32((uint32_t)(EAX));
  /* 101a9a09 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101a9a0c push eax */
  push32((uint32_t)(EAX));
  /* 101a9a0d call 0x101a9a59 */
  push32(0x101a9a12u); f_101a9a59();
  /* 101a9a12 pop ecx */
  ECX = (pop32());
  /* 101a9a13 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 101a9a16 pop ecx */
  ECX = (pop32());
  /* 101a9a17 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 101a9a1a push eax */
  push32((uint32_t)(EAX));
  /* 101a9a1b push 0 */
  push32((uint32_t)(0x0u));
  /* 101a9a1d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 101a9a1f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a9a22 mov edi, esp */
  EDI = (ESP);
  /* 101a9a24 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101a9a25 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101a9a26 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 101a9a28 call 0x101acca7 */
  push32(0x101a9a2du); f_101acca7();
  /* 101a9a2d mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 101a9a30 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 101a9a33 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 101a9a36 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 101a9a3a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101a9a3c movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 101a9a40 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 101a9a43 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 101a9a46 push eax */
  push32((uint32_t)(EAX));
  /* 101a9a47 push edi */
  push32((uint32_t)(EDI));
  /* 101a9a48 call 0x101a9b10 */
  push32(0x101a9a4du); f_101a9b10();
  /* 101a9a4d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9a50 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 101a9a53 mov eax, esi */
  EAX = (ESI);
  /* 101a9a55 pop edi */
  EDI = (pop32());
  /* 101a9a56 pop esi */
  ESI = (pop32());
  /* 101a9a57 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a9a58 ret  */
  ESPCHK(0x101a99fdu, _esp0);
  ESP += 4; return;
}

/* FUN_10009a59 @ 0x101a9a59 (182 bytes, 70 insns) */
void f_101a9a59(void) {
  FTRACE(0x101a9a59u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a9a59 push ebp */
  push32((uint32_t)(EBP));
  /* 101a9a5a mov ebp, esp */
  EBP = (ESP);
  /* 101a9a5c push ecx */
  push32((uint32_t)(ECX));
  /* 101a9a5d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 101a9a60 push ebx */
  push32((uint32_t)(EBX));
  /* 101a9a61 push esi */
  push32((uint32_t)(ESI));
  /* 101a9a62 push edi */
  push32((uint32_t)(EDI));
  /* 101a9a63 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 101a9a67 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 101a9a6c mov ecx, eax */
  ECX = (EAX);
  /* 101a9a6e and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 101a9a73 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 101a9a76 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 101a9a78 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101a9a7b mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 101a9a7e mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 101a9a80 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 101a9a83 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 101a9a88 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101a9a8d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101a9a8f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 101a9a92 je 0x101a9aa7 */
  if (C.zf) goto L_101a9aa7;
  /* 101a9a94 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9a96 je 0x101a9aa0 */
  if (C.zf) goto L_101a9aa0;
  /* 101a9a98 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 101a9a9e jmp 0x101a9ac8 */
  goto L_101a9ac8;
L_101a9aa0:;
  /* 101a9aa0 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 101a9aa5 jmp 0x101a9ac8 */
  goto L_101a9ac8;
L_101a9aa7:;
  /* 101a9aa7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101a9aa9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9aab jne 0x101a9abf */
  if (!C.zf) goto L_101a9abf;
  /* 101a9aad cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9aaf jne 0x101a9abf */
  if (!C.zf) goto L_101a9abf;
  /* 101a9ab1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a9ab4 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 101a9ab7 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 101a9ab9 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 101a9abd jmp 0x101a9b0a */
  goto L_101a9b0a;
L_101a9abf:;
  /* 101a9abf lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 101a9ac5 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_101a9ac8:;
  /* 101a9ac8 mov ecx, edx */
  ECX = (EDX);
  /* 101a9aca shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 101a9acd shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 101a9ad0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 101a9ad2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a9ad5 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 101a9ad8 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 101a9adb mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 101a9ade mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_101a9ae0:;
  /* 101a9ae0 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 101a9ae2 jne 0x101a9b01 */
  if (!C.zf) goto L_101a9b01;
  /* 101a9ae4 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 101a9ae6 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9ae8 mov ebx, edx */
  EBX = (EDX);
  /* 101a9aea shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 101a9aed or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 101a9aef lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 101a9af2 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101a9af4 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 101a9af7 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9afd mov ecx, ebx */
  ECX = (EBX);
  /* 101a9aff jmp 0x101a9ae0 */
  goto L_101a9ae0;
L_101a9b01:;
  /* 101a9b01 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101a9b04 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 101a9b06 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_101a9b0a:;
  /* 101a9b0a pop edi */
  EDI = (pop32());
  /* 101a9b0b pop esi */
  ESI = (pop32());
  /* 101a9b0c pop ebx */
  EBX = (pop32());
  /* 101a9b0d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a9b0e ret  */
  ESPCHK(0x101a9a59u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b10 @ 0x101a9b10 (7 bytes, 3 insns) */
void f_101a9b10(void) {
  FTRACE(0x101a9b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a9b10 push edi */
  push32((uint32_t)(EDI));
  /* 101a9b11 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 101a9b15 jmp 0x101a9b81 */
  jmp_ind(0x101a9b81u); return;
}

/* FUN_10009b20 @ 0x101a9b20 (224 bytes, 84 insns) */
void f_101a9b20(void) {
  FTRACE(0x101a9b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a9b20 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a9b24 push edi */
  push32((uint32_t)(EDI));
  /* 101a9b25 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 101a9b2b je 0x101a9b3c */
  if (C.zf) goto L_101a9b3c;
L_101a9b2d:;
  /* 101a9b2d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 101a9b2f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101a9b30 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a9b32 je 0x101a9b6f */
  if (C.zf) goto L_101a9b6f;
  /* 101a9b34 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 101a9b3a jne 0x101a9b2d */
  if (!C.zf) goto L_101a9b2d;
L_101a9b3c:;
  /* 101a9b3c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 101a9b3e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 101a9b43 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9b45 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101a9b48 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 101a9b4a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9b4d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 101a9b52 je 0x101a9b3c */
  if (C.zf) goto L_101a9b3c;
  /* 101a9b54 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 101a9b57 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a9b59 je 0x101a9b7e */
  if (C.zf) goto L_101a9b7e;
  /* 101a9b5b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 101a9b5d je 0x101a9b79 */
  if (C.zf) goto L_101a9b79;
  /* 101a9b5f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 101a9b64 je 0x101a9b74 */
  if (C.zf) goto L_101a9b74;
  /* 101a9b66 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 101a9b6b je 0x101a9b6f */
  if (C.zf) goto L_101a9b6f;
  /* 101a9b6d jmp 0x101a9b3c */
  goto L_101a9b3c;
L_101a9b6f:;
  /* 101a9b6f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 101a9b72 jmp 0x101a9b81 */
  goto L_101a9b81;
L_101a9b74:;
  /* 101a9b74 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 101a9b77 jmp 0x101a9b81 */
  goto L_101a9b81;
L_101a9b79:;
  /* 101a9b79 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 101a9b7c jmp 0x101a9b81 */
  goto L_101a9b81;
L_101a9b7e:;
  /* 101a9b7e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_101a9b81:;
  /* 101a9b81 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 101a9b85 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 101a9b8b je 0x101a9ba6 */
  if (C.zf) goto L_101a9ba6;
L_101a9b8d:;
  /* 101a9b8d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 101a9b8f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101a9b90 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101a9b92 je 0x101a9bf8 */
  if (C.zf) goto L_101a9bf8;
  /* 101a9b94 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 101a9b96 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101a9b97 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 101a9b9d jne 0x101a9b8d */
  if (!C.zf) goto L_101a9b8d;
  /* 101a9b9f jmp 0x101a9ba6 */
  goto L_101a9ba6;
L_101a9ba1:;
  /* 101a9ba1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 101a9ba3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_101a9ba6:;
  /* 101a9ba6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 101a9bab mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 101a9bad add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9baf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101a9bb2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 101a9bb4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 101a9bb6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9bb9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 101a9bbe je 0x101a9ba1 */
  if (C.zf) goto L_101a9ba1;
  /* 101a9bc0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101a9bc2 je 0x101a9bf8 */
  if (C.zf) goto L_101a9bf8;
  /* 101a9bc4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 101a9bc6 je 0x101a9bef */
  if (C.zf) goto L_101a9bef;
  /* 101a9bc8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 101a9bce je 0x101a9be2 */
  if (C.zf) goto L_101a9be2;
  /* 101a9bd0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 101a9bd6 je 0x101a9bda */
  if (C.zf) goto L_101a9bda;
  /* 101a9bd8 jmp 0x101a9ba1 */
  goto L_101a9ba1;
L_101a9bda:;
  /* 101a9bda mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 101a9bdc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a9be0 pop edi */
  EDI = (pop32());
  /* 101a9be1 ret  */
  ESPCHK(0x101a9b20u, _esp0);
  ESP += 4; return;
L_101a9be2:;
  /* 101a9be2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 101a9be5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a9be9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 101a9bed pop edi */
  EDI = (pop32());
  /* 101a9bee ret  */
  ESPCHK(0x101a9b20u, _esp0);
  ESP += 4; return;
L_101a9bef:;
  /* 101a9bef mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 101a9bf2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a9bf6 pop edi */
  EDI = (pop32());
  /* 101a9bf7 ret  */
  ESPCHK(0x101a9b20u, _esp0);
  ESP += 4; return;
L_101a9bf8:;
  /* 101a9bf8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 101a9bfa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a9bfe pop edi */
  EDI = (pop32());
  /* 101a9bff ret  */
  ESPCHK(0x101a9b20u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x101a9c00 (88 bytes, 40 insns) */
void f_101a9c00(void) {
  FTRACE(0x101a9c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a9c00 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 101a9c04 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a9c08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101a9c0a je 0x101a9c53 */
  if (C.zf) goto L_101a9c53;
  /* 101a9c0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a9c0e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 101a9c12 push edi */
  push32((uint32_t)(EDI));
  /* 101a9c13 mov edi, ecx */
  EDI = (ECX);
  /* 101a9c15 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9c18 jb 0x101a9c47 */
  if (C.cf) goto L_101a9c47;
  /* 101a9c1a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 101a9c1c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 101a9c1f je 0x101a9c29 */
  if (C.zf) goto L_101a9c29;
  /* 101a9c21 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_101a9c23:;
  /* 101a9c23 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101a9c25 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101a9c26 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101a9c27 jne 0x101a9c23 */
  if (!C.zf) goto L_101a9c23;
L_101a9c29:;
  /* 101a9c29 mov ecx, eax */
  ECX = (EAX);
  /* 101a9c2b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 101a9c2e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9c30 mov ecx, eax */
  ECX = (EAX);
  /* 101a9c32 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 101a9c35 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9c37 mov ecx, edx */
  ECX = (EDX);
  /* 101a9c39 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 101a9c3c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101a9c3f je 0x101a9c47 */
  if (C.zf) goto L_101a9c47;
  /* 101a9c41 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 101a9c43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101a9c45 je 0x101a9c4d */
  if (C.zf) goto L_101a9c4d;
L_101a9c47:;
  /* 101a9c47 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101a9c49 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101a9c4a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 101a9c4b jne 0x101a9c47 */
  if (!C.zf) goto L_101a9c47;
L_101a9c4d:;
  /* 101a9c4d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a9c51 pop edi */
  EDI = (pop32());
  /* 101a9c52 ret  */
  ESPCHK(0x101a9c00u, _esp0);
  ESP += 4; return;
L_101a9c53:;
  /* 101a9c53 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a9c57 ret  */
  ESPCHK(0x101a9c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c60 @ 0x101a9c60 (664 bytes, 267 insns) [15 switch table(s)] */
void f_101a9c60(void) {
  FTRACE(0x101a9c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a9c60 push ebp */
  push32((uint32_t)(EBP));
  /* 101a9c61 mov ebp, esp */
  EBP = (ESP);
  /* 101a9c63 push edi */
  push32((uint32_t)(EDI));
  /* 101a9c64 push esi */
  push32((uint32_t)(ESI));
  /* 101a9c65 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101a9c68 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 101a9c6b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 101a9c6e mov eax, ecx */
  EAX = (ECX);
  /* 101a9c70 mov edx, ecx */
  EDX = (ECX);
  /* 101a9c72 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9c74 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9c76 jbe 0x101a9c80 */
  if ((C.cf||C.zf)) goto L_101a9c80;
  /* 101a9c78 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9c7a jb 0x101a9df8 */
  if (C.cf) goto L_101a9df8;
L_101a9c80:;
  /* 101a9c80 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 101a9c86 jne 0x101a9c9c */
  if (!C.zf) goto L_101a9c9c;
  /* 101a9c88 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101a9c8b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 101a9c8e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9c91 jb 0x101a9cbc */
  if (C.cf) goto L_101a9cbc;
  /* 101a9c93 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101a9c95 jmp dword ptr [edx*4 + 0x101a9da8] */
  switch (EDX) {
    case 0: goto L_101a9db8;
    case 1: goto L_101a9dc0;
    case 2: goto L_101a9dcc;
    case 3: goto L_101a9de0;
    default: x86_unimpl("switch@0x101a9c95 out of table"); return;
  }
L_101a9c9c:;
  /* 101a9c9c mov eax, edi */
  EAX = (EDI);
  /* 101a9c9e mov edx, 3 */
  EDX = (0x3u);
  /* 101a9ca3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a9ca6 jb 0x101a9cb4 */
  if (C.cf) goto L_101a9cb4;
  /* 101a9ca8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 101a9cab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9cad jmp dword ptr [eax*4 + 0x101a9cc0] */
  switch (EAX) {
    case 1: goto L_101a9cd0;
    case 2: goto L_101a9cfc;
    case 3: goto L_101a9d20;
    default: x86_unimpl("switch@0x101a9cad out of table"); return;
  }
L_101a9cb4:;
  /* 101a9cb4 jmp dword ptr [ecx*4 + 0x101a9db8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x101a9db8)))); return;
  /* 101a9cbb nop  */
  /* nop */
L_101a9cbc:;
  /* 101a9cbc jmp dword ptr [ecx*4 + 0x101a9d3c] */
  switch (ECX) {
    case 0: goto L_101a9d9f;
    case 1: goto L_101a9d8c;
    case 2: goto L_101a9d84;
    case 3: goto L_101a9d7c;
    case 4: goto L_101a9d74;
    case 5: goto L_101a9d6c;
    case 6: goto L_101a9d64;
    case 7: goto L_101a9d5c;
    default: x86_unimpl("switch@0x101a9cbc out of table"); return;
  }
  /* 101a9cc3 nop  */
  /* nop */
L_101a9cd0:;
  /* 101a9cd0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101a9cd2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101a9cd4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101a9cd6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101a9cd9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101a9cdc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101a9cdf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101a9ce2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101a9ce5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9ce8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9ceb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9cee jb 0x101a9cbc */
  if (C.cf) goto L_101a9cbc;
  /* 101a9cf0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101a9cf2 jmp dword ptr [edx*4 + 0x101a9da8] */
  switch (EDX) {
    case 0: goto L_101a9db8;
    case 1: goto L_101a9dc0;
    case 2: goto L_101a9dcc;
    case 3: goto L_101a9de0;
    default: x86_unimpl("switch@0x101a9cf2 out of table"); return;
  }
  /* 101a9cf9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101a9cfc:;
  /* 101a9cfc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101a9cfe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101a9d00 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101a9d02 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101a9d05 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101a9d08 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101a9d0b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9d0e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9d11 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9d14 jb 0x101a9cbc */
  if (C.cf) goto L_101a9cbc;
  /* 101a9d16 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101a9d18 jmp dword ptr [edx*4 + 0x101a9da8] */
  switch (EDX) {
    case 0: goto L_101a9db8;
    case 1: goto L_101a9dc0;
    case 2: goto L_101a9dcc;
    case 3: goto L_101a9de0;
    default: x86_unimpl("switch@0x101a9d18 out of table"); return;
  }
  /* 101a9d1f nop  */
  /* nop */
L_101a9d20:;
  /* 101a9d20 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101a9d22 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101a9d24 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101a9d26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101a9d27 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101a9d2a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101a9d2b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9d2e jb 0x101a9cbc */
  if (C.cf) goto L_101a9cbc;
  /* 101a9d30 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101a9d32 jmp dword ptr [edx*4 + 0x101a9da8] */
  switch (EDX) {
    case 0: goto L_101a9db8;
    case 1: goto L_101a9dc0;
    case 2: goto L_101a9dcc;
    case 3: goto L_101a9de0;
    default: x86_unimpl("switch@0x101a9d32 out of table"); return;
  }
  /* 101a9d39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101a9d5c:;
  /* 101a9d5c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 101a9d60 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_101a9d64:;
  /* 101a9d64 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 101a9d68 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_101a9d6c:;
  /* 101a9d6c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 101a9d70 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_101a9d74:;
  /* 101a9d74 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 101a9d78 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_101a9d7c:;
  /* 101a9d7c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 101a9d80 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_101a9d84:;
  /* 101a9d84 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 101a9d88 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_101a9d8c:;
  /* 101a9d8c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 101a9d90 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 101a9d94 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 101a9d9b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9d9d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_101a9d9f:;
  /* 101a9d9f jmp dword ptr [edx*4 + 0x101a9da8] */
  switch (EDX) {
    case 0: goto L_101a9db8;
    case 1: goto L_101a9dc0;
    case 2: goto L_101a9dcc;
    case 3: goto L_101a9de0;
    default: x86_unimpl("switch@0x101a9d9f out of table"); return;
  }
  /* 101a9da6 mov edi, edi */
  EDI = (EDI);
L_101a9db8:;
  /* 101a9db8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a9dbb pop esi */
  ESI = (pop32());
  /* 101a9dbc pop edi */
  EDI = (pop32());
  /* 101a9dbd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a9dbe ret  */
  ESPCHK(0x101a9c60u, _esp0);
  ESP += 4; return;
  /* 101a9dbf nop  */
  /* nop */
L_101a9dc0:;
  /* 101a9dc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101a9dc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101a9dc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a9dc7 pop esi */
  ESI = (pop32());
  /* 101a9dc8 pop edi */
  EDI = (pop32());
  /* 101a9dc9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a9dca ret  */
  ESPCHK(0x101a9c60u, _esp0);
  ESP += 4; return;
  /* 101a9dcb nop  */
  /* nop */
L_101a9dcc:;
  /* 101a9dcc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101a9dce mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101a9dd0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101a9dd3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101a9dd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a9dd9 pop esi */
  ESI = (pop32());
  /* 101a9dda pop edi */
  EDI = (pop32());
  /* 101a9ddb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a9ddc ret  */
  ESPCHK(0x101a9c60u, _esp0);
  ESP += 4; return;
  /* 101a9ddd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101a9de0:;
  /* 101a9de0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101a9de2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101a9de4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101a9de7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101a9dea mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101a9ded mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101a9df0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a9df3 pop esi */
  ESI = (pop32());
  /* 101a9df4 pop edi */
  EDI = (pop32());
  /* 101a9df5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a9df6 ret  */
  ESPCHK(0x101a9c60u, _esp0);
  ESP += 4; return;
  /* 101a9df7 nop  */
  /* nop */
L_101a9df8:;
  /* 101a9df8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 101a9dfc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 101a9e00 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 101a9e06 jne 0x101a9e2c */
  if (!C.zf) goto L_101a9e2c;
  /* 101a9e08 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101a9e0b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 101a9e0e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9e11 jb 0x101a9e20 */
  if (C.cf) goto L_101a9e20;
  /* 101a9e13 std  */
  C.df=1;
  /* 101a9e14 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101a9e16 cld  */
  C.df=0;
  /* 101a9e17 jmp dword ptr [edx*4 + 0x101a9f40] */
  switch (EDX) {
    case 0: goto L_101a9f50;
    case 1: goto L_101a9f58;
    case 2: goto L_101a9f68;
    case 3: goto L_101a9f7c;
    default: x86_unimpl("switch@0x101a9e17 out of table"); return;
  }
  /* 101a9e1e mov edi, edi */
  EDI = (EDI);
L_101a9e20:;
  /* 101a9e20 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 101a9e22 jmp dword ptr [ecx*4 + 0x101a9ef0] */
  switch (ECX) {
    case 0: goto L_101a9f37;
    default: x86_unimpl("switch@0x101a9e22 out of table"); return;
  }
  /* 101a9e29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101a9e2c:;
  /* 101a9e2c mov eax, edi */
  EAX = (EDI);
  /* 101a9e2e mov edx, 3 */
  EDX = (0x3u);
  /* 101a9e33 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9e36 jb 0x101a9e44 */
  if (C.cf) goto L_101a9e44;
  /* 101a9e38 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 101a9e3b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a9e3d jmp dword ptr [eax*4 + 0x101a9e48] */
  switch (EAX) {
    case 1: goto L_101a9e58;
    case 2: goto L_101a9e78;
    case 3: goto L_101a9ea0;
    default: x86_unimpl("switch@0x101a9e3d out of table"); return;
  }
L_101a9e44:;
  /* 101a9e44 jmp dword ptr [ecx*4 + 0x101a9f40] */
  switch (ECX) {
    case 0: goto L_101a9f50;
    case 1: goto L_101a9f58;
    case 2: goto L_101a9f68;
    case 3: goto L_101a9f7c;
    default: x86_unimpl("switch@0x101a9e44 out of table"); return;
  }
  /* 101a9e4b nop  */
  /* nop */
L_101a9e58:;
  /* 101a9e58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101a9e5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101a9e5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101a9e60 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101a9e61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101a9e64 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101a9e65 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9e68 jb 0x101a9e20 */
  if (C.cf) goto L_101a9e20;
  /* 101a9e6a std  */
  C.df=1;
  /* 101a9e6b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101a9e6d cld  */
  C.df=0;
  /* 101a9e6e jmp dword ptr [edx*4 + 0x101a9f40] */
  switch (EDX) {
    case 0: goto L_101a9f50;
    case 1: goto L_101a9f58;
    case 2: goto L_101a9f68;
    case 3: goto L_101a9f7c;
    default: x86_unimpl("switch@0x101a9e6e out of table"); return;
  }
  /* 101a9e75 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101a9e78:;
  /* 101a9e78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101a9e7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101a9e7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101a9e80 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101a9e83 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101a9e86 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101a9e89 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a9e8c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a9e8f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9e92 jb 0x101a9e20 */
  if (C.cf) goto L_101a9e20;
  /* 101a9e94 std  */
  C.df=1;
  /* 101a9e95 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101a9e97 cld  */
  C.df=0;
  /* 101a9e98 jmp dword ptr [edx*4 + 0x101a9f40] */
  switch (EDX) {
    case 0: goto L_101a9f50;
    case 1: goto L_101a9f58;
    case 2: goto L_101a9f68;
    case 3: goto L_101a9f7c;
    default: x86_unimpl("switch@0x101a9e98 out of table"); return;
  }
  /* 101a9e9f nop  */
  /* nop */
L_101a9ea0:;
  /* 101a9ea0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101a9ea3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101a9ea5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101a9ea8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101a9eab mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101a9eae mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101a9eb1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101a9eb4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101a9eb7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a9eba sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a9ebd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9ec0 jb 0x101a9e20 */
  if (C.cf) goto L_101a9e20;
  /* 101a9ec6 std  */
  C.df=1;
  /* 101a9ec7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101a9ec9 cld  */
  C.df=0;
  /* 101a9eca jmp dword ptr [edx*4 + 0x101a9f40] */
  switch (EDX) {
    case 0: goto L_101a9f50;
    case 1: goto L_101a9f58;
    case 2: goto L_101a9f68;
    case 3: goto L_101a9f7c;
    default: x86_unimpl("switch@0x101a9eca out of table"); return;
  }
  /* 101a9ed1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 101a9ed4 hlt  */
  x86_unimpl("hlt @ 0x101a9ed4");
  /* 101a9ed5 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 101a9ed6 sbb dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a-_b-C.cf; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101a9ed8 cld  */
  C.df=0;
  /* 101a9ed9 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 101a9eda sbb dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a-_b-C.cf; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101a9edc add al, 0x9f */
  { uint32_t _a=(AL),_b=(0x9fu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 101a9ede sbb dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a-_b-C.cf; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101a9ee0 or al, 0x9f */
  { uint32_t _r=(AL)|(0x9fu); AL = (_r); fl_logic(_r,8); }
  /* 101a9ee2 sbb dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a-_b-C.cf; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101a9ee4 adc al, 0x9f */
  { uint32_t _a=(AL),_b=(0x9fu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 101a9ee6 sbb dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a-_b-C.cf; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101a9ee8 sbb al, 0x9f */
  { uint32_t _a=(AL),_b=(0x9fu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101a9eea sbb dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a-_b-C.cf; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101a9eec and al, 0x9f */
  { uint32_t _r=(AL)&(0x9fu); AL = (_r); fl_logic(_r,8); }
  /* 101a9eee sbb dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a-_b-C.cf; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101a9ef4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 101a9ef8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 101a9efc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 101a9f00 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 101a9f04 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 101a9f08 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 101a9f0c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 101a9f10 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 101a9f14 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 101a9f18 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 101a9f1c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 101a9f20 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 101a9f24 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 101a9f28 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 101a9f2c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 101a9f33 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9f35 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_101a9f37:;
  /* 101a9f37 jmp dword ptr [edx*4 + 0x101a9f40] */
  switch (EDX) {
    case 0: goto L_101a9f50;
    case 1: goto L_101a9f58;
    case 2: goto L_101a9f68;
    case 3: goto L_101a9f7c;
    default: x86_unimpl("switch@0x101a9f37 out of table"); return;
  }
  /* 101a9f3e mov edi, edi */
  EDI = (EDI);
L_101a9f50:;
  /* 101a9f50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a9f53 pop esi */
  ESI = (pop32());
  /* 101a9f54 pop edi */
  EDI = (pop32());
  /* 101a9f55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a9f56 ret  */
  ESPCHK(0x101a9c60u, _esp0);
  ESP += 4; return;
  /* 101a9f57 nop  */
  /* nop */
L_101a9f58:;
  /* 101a9f58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101a9f5b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101a9f5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a9f61 pop esi */
  ESI = (pop32());
  /* 101a9f62 pop edi */
  EDI = (pop32());
  /* 101a9f63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a9f64 ret  */
  ESPCHK(0x101a9c60u, _esp0);
  ESP += 4; return;
  /* 101a9f65 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101a9f68:;
  /* 101a9f68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101a9f6b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101a9f6e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101a9f71 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101a9f74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a9f77 pop esi */
  ESI = (pop32());
  /* 101a9f78 pop edi */
  EDI = (pop32());
  /* 101a9f79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a9f7a ret  */
  ESPCHK(0x101a9c60u, _esp0);
  ESP += 4; return;
  /* 101a9f7b nop  */
  /* nop */
L_101a9f7c:;
  /* 101a9f7c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101a9f7f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101a9f82 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101a9f85 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101a9f88 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101a9f8b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101a9f8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a9f91 pop esi */
  ESI = (pop32());
  /* 101a9f92 pop edi */
  EDI = (pop32());
  /* 101a9f93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a9f94 ret  */
  ESPCHK(0x101a9c60u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x101a9f95 (9 bytes, 4 insns) */
void f_101a9f95(void) {
  FTRACE(0x101a9f95u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a9f95 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a9f97 call 0x101a70d1 */
  push32(0x101a9f9cu); f_101a70d1();
  /* 101a9f9c pop ecx */
  ECX = (pop32());
  /* 101a9f9d ret  */
  ESPCHK(0x101a9f95u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f9e @ 0x101a9f9e (41 bytes, 12 insns) */
void f_101a9f9e(void) {
  FTRACE(0x101a9f9eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a9f9e push esi */
  push32((uint32_t)(ESI));
  /* 101a9f9f mov esi, dword ptr [0x101ae094] */
  ESI = (r32((uint32_t)(0x101ae094)));
  /* 101a9fa5 push dword ptr [0x101b0c64] */
  push32((uint32_t)(r32((uint32_t)(0x101b0c64))));
  /* 101a9fab call esi */
  call_ind((uint32_t)(ESI), 0x101a9fadu);
  /* 101a9fad push dword ptr [0x101b0c54] */
  push32((uint32_t)(r32((uint32_t)(0x101b0c54))));
  /* 101a9fb3 call esi */
  call_ind((uint32_t)(ESI), 0x101a9fb5u);
  /* 101a9fb5 push dword ptr [0x101b0c44] */
  push32((uint32_t)(r32((uint32_t)(0x101b0c44))));
  /* 101a9fbb call esi */
  call_ind((uint32_t)(ESI), 0x101a9fbdu);
  /* 101a9fbd push dword ptr [0x101b0c24] */
  push32((uint32_t)(r32((uint32_t)(0x101b0c24))));
  /* 101a9fc3 call esi */
  call_ind((uint32_t)(ESI), 0x101a9fc5u);
  /* 101a9fc5 pop esi */
  ESI = (pop32());
  /* 101a9fc6 ret  */
  ESPCHK(0x101a9f9eu, _esp0);
  ESP += 4; return;
}

/* FUN_10009fc7 @ 0x101a9fc7 (108 bytes, 34 insns) */
void f_101a9fc7(void) {
  FTRACE(0x101a9fc7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a9fc7 push esi */
  push32((uint32_t)(ESI));
  /* 101a9fc8 push edi */
  push32((uint32_t)(EDI));
  /* 101a9fc9 mov edi, dword ptr [0x101ae050] */
  EDI = (r32((uint32_t)(0x101ae050)));
  /* 101a9fcf mov esi, 0x101b0c20 */
  ESI = (0x101b0c20u);
L_101a9fd4:;
  /* 101a9fd4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 101a9fd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a9fd8 je 0x101aa005 */
  if (C.zf) goto L_101aa005;
  /* 101a9fda cmp esi, 0x101b0c64 */
  { uint32_t _a=(ESI),_b=(0x101b0c64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9fe0 je 0x101aa005 */
  if (C.zf) goto L_101aa005;
  /* 101a9fe2 cmp esi, 0x101b0c54 */
  { uint32_t _a=(ESI),_b=(0x101b0c54u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9fe8 je 0x101aa005 */
  if (C.zf) goto L_101aa005;
  /* 101a9fea cmp esi, 0x101b0c44 */
  { uint32_t _a=(ESI),_b=(0x101b0c44u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9ff0 je 0x101aa005 */
  if (C.zf) goto L_101aa005;
  /* 101a9ff2 cmp esi, 0x101b0c24 */
  { uint32_t _a=(ESI),_b=(0x101b0c24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9ff8 je 0x101aa005 */
  if (C.zf) goto L_101aa005;
  /* 101a9ffa push eax */
  push32((uint32_t)(EAX));
  /* 101a9ffb call edi */
  call_ind((uint32_t)(EDI), 0x101a9ffdu);
  /* 101a9ffd push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101a9fff call 0x101aa1e6 */
  push32(0x101aa004u); f_101aa1e6();
  /* 101aa004 pop ecx */
  ECX = (pop32());
L_101aa005:;
  /* 101aa005 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101aa008 cmp esi, 0x101b0ce0 */
  { uint32_t _a=(ESI),_b=(0x101b0ce0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa00e jl 0x101a9fd4 */
  if ((C.sf!=C.of)) goto L_101a9fd4;
  /* 101aa010 push dword ptr [0x101b0c44] */
  push32((uint32_t)(r32((uint32_t)(0x101b0c44))));
  /* 101aa016 call edi */
  call_ind((uint32_t)(EDI), 0x101aa018u);
  /* 101aa018 push dword ptr [0x101b0c54] */
  push32((uint32_t)(r32((uint32_t)(0x101b0c54))));
  /* 101aa01e call edi */
  call_ind((uint32_t)(EDI), 0x101aa020u);
  /* 101aa020 push dword ptr [0x101b0c64] */
  push32((uint32_t)(r32((uint32_t)(0x101b0c64))));
  /* 101aa026 call edi */
  call_ind((uint32_t)(EDI), 0x101aa028u);
  /* 101aa028 push dword ptr [0x101b0c24] */
  push32((uint32_t)(r32((uint32_t)(0x101b0c24))));
  /* 101aa02e call edi */
  call_ind((uint32_t)(EDI), 0x101aa030u);
  /* 101aa030 pop edi */
  EDI = (pop32());
  /* 101aa031 pop esi */
  ESI = (pop32());
  /* 101aa032 ret  */
  ESPCHK(0x101a9fc7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a033 @ 0x101aa033 (97 bytes, 37 insns) */
void f_101aa033(void) {
  FTRACE(0x101aa033u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aa033 push ebp */
  push32((uint32_t)(EBP));
  /* 101aa034 mov ebp, esp */
  EBP = (ESP);
  /* 101aa036 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101aa039 push esi */
  push32((uint32_t)(ESI));
  /* 101aa03a cmp dword ptr [eax*4 + 0x101b0c20], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x101b0c20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa042 lea esi, [eax*4 + 0x101b0c20] */
  ESI = ((uint32_t)(EAX*4 + 0x101b0c20));
  /* 101aa049 jne 0x101aa089 */
  if (!C.zf) goto L_101aa089;
  /* 101aa04b push edi */
  push32((uint32_t)(EDI));
  /* 101aa04c push 0x18 */
  push32((uint32_t)(0x18u));
  /* 101aa04e call 0x101aa2cf */
  push32(0x101aa053u); f_101aa2cf();
  /* 101aa053 mov edi, eax */
  EDI = (EAX);
  /* 101aa055 pop ecx */
  ECX = (pop32());
  /* 101aa056 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101aa058 jne 0x101aa062 */
  if (!C.zf) goto L_101aa062;
  /* 101aa05a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 101aa05c call 0x101a70d1 */
  push32(0x101aa061u); f_101a70d1();
  /* 101aa061 pop ecx */
  ECX = (pop32());
L_101aa062:;
  /* 101aa062 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 101aa064 call 0x101aa033 */
  push32(0x101aa069u); f_101aa033();
  /* 101aa069 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa06c pop ecx */
  ECX = (pop32());
  /* 101aa06d push edi */
  push32((uint32_t)(EDI));
  /* 101aa06e jne 0x101aa07a */
  if (!C.zf) goto L_101aa07a;
  /* 101aa070 call dword ptr [0x101ae094] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae094))), 0x101aa076u);
  /* 101aa076 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 101aa078 jmp 0x101aa080 */
  goto L_101aa080;
L_101aa07a:;
  /* 101aa07a call 0x101aa1e6 */
  push32(0x101aa07fu); f_101aa1e6();
  /* 101aa07f pop ecx */
  ECX = (pop32());
L_101aa080:;
  /* 101aa080 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 101aa082 call 0x101aa094 */
  push32(0x101aa087u); f_101aa094();
  /* 101aa087 pop ecx */
  ECX = (pop32());
  /* 101aa088 pop edi */
  EDI = (pop32());
L_101aa089:;
  /* 101aa089 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101aa08b call dword ptr [0x101ae00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae00c))), 0x101aa091u);
  /* 101aa091 pop esi */
  ESI = (pop32());
  /* 101aa092 pop ebp */
  EBP = (pop32());
  /* 101aa093 ret  */
  ESPCHK(0x101aa033u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a094 @ 0x101aa094 (21 bytes, 7 insns) */
void f_101aa094(void) {
  FTRACE(0x101aa094u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aa094 push ebp */
  push32((uint32_t)(EBP));
  /* 101aa095 mov ebp, esp */
  EBP = (ESP);
  /* 101aa097 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101aa09a push dword ptr [eax*4 + 0x101b0c20] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x101b0c20))));
  /* 101aa0a1 call dword ptr [0x101ae008] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae008))), 0x101aa0a7u);
  /* 101aa0a7 pop ebp */
  EBP = (pop32());
  /* 101aa0a8 ret  */
  ESPCHK(0x101aa094u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0a9 @ 0x101aa0a9 (289 bytes, 98 insns) */
void f_101aa0a9(void) {
  FTRACE(0x101aa0a9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aa0a9 push ebp */
  push32((uint32_t)(EBP));
  /* 101aa0aa mov ebp, esp */
  EBP = (ESP);
  /* 101aa0ac push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 101aa0ae push 0x101ae4d0 */
  push32((uint32_t)(0x101ae4d0u));
  /* 101aa0b3 push 0x101ad050 */
  push32((uint32_t)(0x101ad050u));
  /* 101aa0b8 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 101aa0be push eax */
  push32((uint32_t)(EAX));
  /* 101aa0bf mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 101aa0c6 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aa0c9 push ebx */
  push32((uint32_t)(EBX));
  /* 101aa0ca push esi */
  push32((uint32_t)(ESI));
  /* 101aa0cb push edi */
  push32((uint32_t)(EDI));
  /* 101aa0cc mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 101aa0cf imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101aa0d3 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 101aa0d6 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 101aa0d9 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa0dc ja 0x101aa0f2 */
  if ((!C.cf&&!C.zf)) goto L_101aa0f2;
  /* 101aa0de xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101aa0e0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa0e2 jne 0x101aa0e7 */
  if (!C.zf) goto L_101aa0e7;
  /* 101aa0e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101aa0e6 pop esi */
  ESI = (pop32());
L_101aa0e7:;
  /* 101aa0e7 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101aa0ea and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 101aa0ed mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 101aa0f0 jmp 0x101aa0f4 */
  goto L_101aa0f4;
L_101aa0f2:;
  /* 101aa0f2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_101aa0f4:;
  /* 101aa0f4 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 101aa0f7 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa0fa ja 0x101aa1a8 */
  if ((!C.cf&&!C.zf)) goto L_101aa1a8;
  /* 101aa100 mov eax, dword ptr [0x101b7c28] */
  EAX = (r32((uint32_t)(0x101b7c28)));
  /* 101aa105 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa108 jne 0x101aa14b */
  if (!C.zf) goto L_101aa14b;
  /* 101aa10a mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 101aa10d cmp edi, dword ptr [0x101b69d0] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x101b69d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa113 ja 0x101aa191 */
  if ((!C.cf&&!C.zf)) goto L_101aa191;
  /* 101aa115 push 9 */
  push32((uint32_t)(0x9u));
  /* 101aa117 call 0x101aa033 */
  push32(0x101aa11cu); f_101aa033();
  /* 101aa11c pop ecx */
  ECX = (pop32());
  /* 101aa11d mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 101aa120 push edi */
  push32((uint32_t)(EDI));
  /* 101aa121 call 0x101ab2bb */
  push32(0x101aa126u); f_101ab2bb();
  /* 101aa126 pop ecx */
  ECX = (pop32());
  /* 101aa127 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101aa12a or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101aa12e call 0x101aa142 */
  push32(0x101aa133u); f_101aa142();
  /* 101aa133 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa136 je 0x101aa196 */
  if (C.zf) goto L_101aa196;
  /* 101aa138 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 101aa13b jmp 0x101aa185 */
  goto L_101aa185;
  /* 101aa13d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101aa13f mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101aa142 push 9 */
  push32((uint32_t)(0x9u));
  /* 101aa144 call 0x101aa094 */
  push32(0x101aa149u); f_101aa094();
  /* 101aa149 pop ecx */
  ECX = (pop32());
  /* 101aa14a ret  */
  ESPCHK(0x101aa0a9u, _esp0);
  ESP += 4; return;
L_101aa14b:;
  /* 101aa14b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa14e jne 0x101aa191 */
  if (!C.zf) goto L_101aa191;
  /* 101aa150 cmp esi, dword ptr [0x101b2e84] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101b2e84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa156 ja 0x101aa191 */
  if ((!C.cf&&!C.zf)) goto L_101aa191;
  /* 101aa158 push 9 */
  push32((uint32_t)(0x9u));
  /* 101aa15a call 0x101aa033 */
  push32(0x101aa15fu); f_101aa033();
  /* 101aa15f pop ecx */
  ECX = (pop32());
  /* 101aa160 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 101aa167 mov eax, esi */
  EAX = (ESI);
  /* 101aa169 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 101aa16c push eax */
  push32((uint32_t)(EAX));
  /* 101aa16d call 0x101aba68 */
  push32(0x101aa172u); f_101aba68();
  /* 101aa172 pop ecx */
  ECX = (pop32());
  /* 101aa173 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101aa176 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101aa17a call 0x101aa1cb */
  push32(0x101aa17fu); f_101aa1cb();
  /* 101aa17f cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa182 je 0x101aa196 */
  if (C.zf) goto L_101aa196;
  /* 101aa184 push esi */
  push32((uint32_t)(ESI));
L_101aa185:;
  /* 101aa185 push ebx */
  push32((uint32_t)(EBX));
  /* 101aa186 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 101aa189 call 0x101a9c00 */
  push32(0x101aa18eu); f_101a9c00();
  /* 101aa18e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101aa191:;
  /* 101aa191 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa194 jne 0x101aa1d4 */
  if (!C.zf) { jmp_ind(0x101aa1d4u); return; }
L_101aa196:;
  /* 101aa196 push esi */
  push32((uint32_t)(ESI));
  /* 101aa197 push 8 */
  push32((uint32_t)(0x8u));
  /* 101aa199 push dword ptr [0x101b7c24] */
  push32((uint32_t)(r32((uint32_t)(0x101b7c24))));
  /* 101aa19f call dword ptr [0x101ae098] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae098))), 0x101aa1a5u);
  /* 101aa1a5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_101aa1a8:;
  /* 101aa1a8 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa1ab jne 0x101aa1d4 */
  if (!C.zf) { jmp_ind(0x101aa1d4u); return; }
  /* 101aa1ad cmp dword ptr [0x101b6870], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101b6870))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa1b3 je 0x101aa1d4 */
  if (C.zf) { jmp_ind(0x101aa1d4u); return; }
  /* 101aa1b5 push esi */
  push32((uint32_t)(ESI));
  /* 101aa1b6 call 0x101acf3a */
  push32(0x101aa1bbu); f_101acf3a();
  /* 101aa1bb pop ecx */
  ECX = (pop32());
  /* 101aa1bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101aa1be jne 0x101aa0f4 */
  if (!C.zf) goto L_101aa0f4;
  /* 101aa1c4 jmp 0x101aa1d7 */
  jmp_ind(0x101aa1d7u); return;
  /* 101aa1c6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_1000a142 @ 0x101aa142 (9 bytes, 4 insns) */
void f_101aa142(void) {
  FTRACE(0x101aa142u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aa142 push 9 */
  push32((uint32_t)(0x9u));
  /* 101aa144 call 0x101aa094 */
  push32(0x101aa149u); f_101aa094();
  /* 101aa149 pop ecx */
  ECX = (pop32());
  /* 101aa14a ret  */
  ESPCHK(0x101aa142u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1cb @ 0x101aa1cb (9 bytes, 4 insns) */
void f_101aa1cb(void) {
  FTRACE(0x101aa1cbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aa1cb push 9 */
  push32((uint32_t)(0x9u));
  /* 101aa1cd call 0x101aa094 */
  push32(0x101aa1d2u); f_101aa094();
  /* 101aa1d2 pop ecx */
  ECX = (pop32());
  /* 101aa1d3 ret  */
  ESPCHK(0x101aa1cbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1e6 @ 0x101aa1e6 (215 bytes, 75 insns) */
void f_101aa1e6(void) {
  FTRACE(0x101aa1e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aa1e6 push ebp */
  push32((uint32_t)(EBP));
  /* 101aa1e7 mov ebp, esp */
  EBP = (ESP);
  /* 101aa1e9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 101aa1eb push 0x101ae4e8 */
  push32((uint32_t)(0x101ae4e8u));
  /* 101aa1f0 push 0x101ad050 */
  push32((uint32_t)(0x101ad050u));
  /* 101aa1f5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 101aa1fb push eax */
  push32((uint32_t)(EAX));
  /* 101aa1fc mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 101aa203 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aa206 push ebx */
  push32((uint32_t)(EBX));
  /* 101aa207 push esi */
  push32((uint32_t)(ESI));
  /* 101aa208 push edi */
  push32((uint32_t)(EDI));
  /* 101aa209 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 101aa20c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101aa20e je 0x101aa2c0 */
  if (C.zf) { jmp_ind(0x101aa2c0u); return; }
  /* 101aa214 mov eax, dword ptr [0x101b7c28] */
  EAX = (r32((uint32_t)(0x101b7c28)));
  /* 101aa219 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa21c jne 0x101aa259 */
  if (!C.zf) goto L_101aa259;
  /* 101aa21e push 9 */
  push32((uint32_t)(0x9u));
  /* 101aa220 call 0x101aa033 */
  push32(0x101aa225u); f_101aa033();
  /* 101aa225 pop ecx */
  ECX = (pop32());
  /* 101aa226 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101aa22a push esi */
  push32((uint32_t)(ESI));
  /* 101aa22b call 0x101aaf67 */
  push32(0x101aa230u); f_101aaf67();
  /* 101aa230 pop ecx */
  ECX = (pop32());
  /* 101aa231 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 101aa234 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101aa236 je 0x101aa241 */
  if (C.zf) goto L_101aa241;
  /* 101aa238 push esi */
  push32((uint32_t)(ESI));
  /* 101aa239 push eax */
  push32((uint32_t)(EAX));
  /* 101aa23a call 0x101aaf92 */
  push32(0x101aa23fu); f_101aaf92();
  /* 101aa23f pop ecx */
  ECX = (pop32());
  /* 101aa240 pop ecx */
  ECX = (pop32());
L_101aa241:;
  /* 101aa241 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101aa245 call 0x101aa250 */
  push32(0x101aa24au); f_101aa250();
  /* 101aa24a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa24e jmp 0x101aa2a1 */
  goto L_101aa2a1;
  /* 101aa250 push 9 */
  push32((uint32_t)(0x9u));
  /* 101aa252 call 0x101aa094 */
  push32(0x101aa257u); f_101aa094();
  /* 101aa257 pop ecx */
  ECX = (pop32());
  /* 101aa258 ret  */
  ESPCHK(0x101aa1e6u, _esp0);
  ESP += 4; return;
L_101aa259:;
  /* 101aa259 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa25c jne 0x101aa2b1 */
  if (!C.zf) goto L_101aa2b1;
  /* 101aa25e push 9 */
  push32((uint32_t)(0x9u));
  /* 101aa260 call 0x101aa033 */
  push32(0x101aa265u); f_101aa033();
  /* 101aa265 pop ecx */
  ECX = (pop32());
  /* 101aa266 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 101aa26d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 101aa270 push eax */
  push32((uint32_t)(EAX));
  /* 101aa271 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 101aa274 push eax */
  push32((uint32_t)(EAX));
  /* 101aa275 push esi */
  push32((uint32_t)(ESI));
  /* 101aa276 call 0x101ab9cc */
  push32(0x101aa27bu); f_101ab9cc();
  /* 101aa27b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101aa27e mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 101aa281 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101aa283 je 0x101aa294 */
  if (C.zf) goto L_101aa294;
  /* 101aa285 push eax */
  push32((uint32_t)(EAX));
  /* 101aa286 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 101aa289 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 101aa28c call 0x101aba23 */
  push32(0x101aa291u); f_101aba23();
  /* 101aa291 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101aa294:;
  /* 101aa294 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101aa298 call 0x101aa2a8 */
  push32(0x101aa29du); f_101aa2a8();
  /* 101aa29d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_101aa2a1:;
  /* 101aa2a1 jne 0x101aa2c0 */
  if (!C.zf) { jmp_ind(0x101aa2c0u); return; }
  /* 101aa2a3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101aa2a6 jmp 0x101aa2b2 */
  goto L_101aa2b2;
  /* 101aa2a8 push 9 */
  push32((uint32_t)(0x9u));
  /* 101aa2aa call 0x101aa094 */
  push32(0x101aa2afu); f_101aa094();
  /* 101aa2af pop ecx */
  ECX = (pop32());
  /* 101aa2b0 ret  */
  ESPCHK(0x101aa1e6u, _esp0);
  ESP += 4; return;
L_101aa2b1:;
  /* 101aa2b1 push esi */
  push32((uint32_t)(ESI));
L_101aa2b2:;
  /* 101aa2b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 101aa2b4 push dword ptr [0x101b7c24] */
  push32((uint32_t)(r32((uint32_t)(0x101b7c24))));
}

/* FUN_1000a250 @ 0x101aa250 (9 bytes, 4 insns) */
void f_101aa250(void) {
  FTRACE(0x101aa250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aa250 push 9 */
  push32((uint32_t)(0x9u));
  /* 101aa252 call 0x101aa094 */
  push32(0x101aa257u); f_101aa094();
  /* 101aa257 pop ecx */
  ECX = (pop32());
  /* 101aa258 ret  */
  ESPCHK(0x101aa250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2a8 @ 0x101aa2a8 (9 bytes, 4 insns) */
void f_101aa2a8(void) {
  FTRACE(0x101aa2a8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aa2a8 push 9 */
  push32((uint32_t)(0x9u));
  /* 101aa2aa call 0x101aa094 */
  push32(0x101aa2afu); f_101aa094();
  /* 101aa2af pop ecx */
  ECX = (pop32());
  /* 101aa2b0 ret  */
  ESPCHK(0x101aa2a8u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x101aa2cf (18 bytes, 6 insns) */
void f_101aa2cf(void) {
  FTRACE(0x101aa2cfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aa2cf push dword ptr [0x101b6870] */
  push32((uint32_t)(r32((uint32_t)(0x101b6870))));
  /* 101aa2d5 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 101aa2d9 call 0x101aa2e1 */
  push32(0x101aa2deu); f_101aa2e1();
  /* 101aa2de pop ecx */
  ECX = (pop32());
  /* 101aa2df pop ecx */
  ECX = (pop32());
  /* 101aa2e0 ret  */
  ESPCHK(0x101aa2cfu, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x101aa2e1 (44 bytes, 16 insns) */
void f_101aa2e1(void) {
  FTRACE(0x101aa2e1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aa2e1 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa2e6 ja 0x101aa30a */
  if ((!C.cf&&!C.zf)) goto L_101aa30a;
L_101aa2e8:;
  /* 101aa2e8 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 101aa2ec call 0x101aa30d */
  push32(0x101aa2f1u); f_101aa30d();
  /* 101aa2f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101aa2f3 pop ecx */
  ECX = (pop32());
  /* 101aa2f4 jne 0x101aa30c */
  if (!C.zf) goto L_101aa30c;
  /* 101aa2f6 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa2fa je 0x101aa30c */
  if (C.zf) goto L_101aa30c;
  /* 101aa2fc push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 101aa300 call 0x101acf3a */
  push32(0x101aa305u); f_101acf3a();
  /* 101aa305 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101aa307 pop ecx */
  ECX = (pop32());
  /* 101aa308 jne 0x101aa2e8 */
  if (!C.zf) goto L_101aa2e8;
L_101aa30a:;
  /* 101aa30a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101aa30c:;
  /* 101aa30c ret  */
  ESPCHK(0x101aa2e1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a30d @ 0x101aa30d (231 bytes, 81 insns) */
void f_101aa30d(void) {
  FTRACE(0x101aa30du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aa30d push ebp */
  push32((uint32_t)(EBP));
  /* 101aa30e mov ebp, esp */
  EBP = (ESP);
  /* 101aa310 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 101aa312 push 0x101ae500 */
  push32((uint32_t)(0x101ae500u));
  /* 101aa317 push 0x101ad050 */
  push32((uint32_t)(0x101ad050u));
  /* 101aa31c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 101aa322 push eax */
  push32((uint32_t)(EAX));
  /* 101aa323 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 101aa32a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aa32d push ebx */
  push32((uint32_t)(EBX));
  /* 101aa32e push esi */
  push32((uint32_t)(ESI));
  /* 101aa32f push edi */
  push32((uint32_t)(EDI));
  /* 101aa330 mov eax, dword ptr [0x101b7c28] */
  EAX = (r32((uint32_t)(0x101b7c28)));
  /* 101aa335 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa338 jne 0x101aa37d */
  if (!C.zf) goto L_101aa37d;
  /* 101aa33a mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 101aa33d cmp esi, dword ptr [0x101b69d0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101b69d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa343 ja 0x101aa3dc */
  if ((!C.cf&&!C.zf)) goto L_101aa3dc;
  /* 101aa349 push 9 */
  push32((uint32_t)(0x9u));
  /* 101aa34b call 0x101aa033 */
  push32(0x101aa350u); f_101aa033();
  /* 101aa350 pop ecx */
  ECX = (pop32());
  /* 101aa351 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101aa355 push esi */
  push32((uint32_t)(ESI));
  /* 101aa356 call 0x101ab2bb */
  push32(0x101aa35bu); f_101ab2bb();
  /* 101aa35b pop ecx */
  ECX = (pop32());
  /* 101aa35c mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 101aa35f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101aa363 call 0x101aa374 */
  push32(0x101aa368u); f_101aa374();
  /* 101aa368 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 101aa36b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101aa36d je 0x101aa3dc */
  if (C.zf) goto L_101aa3dc;
  /* 101aa36f jmp 0x101aa3fa */
  jmp_ind(0x101aa3fau); return;
  /* 101aa374 push 9 */
  push32((uint32_t)(0x9u));
  /* 101aa376 call 0x101aa094 */
  push32(0x101aa37bu); f_101aa094();
  /* 101aa37b pop ecx */
  ECX = (pop32());
  /* 101aa37c ret  */
  ESPCHK(0x101aa30du, _esp0);
  ESP += 4; return;
L_101aa37d:;
  /* 101aa37d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa380 jne 0x101aa3dc */
  if (!C.zf) goto L_101aa3dc;
  /* 101aa382 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101aa385 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101aa387 je 0x101aa391 */
  if (C.zf) goto L_101aa391;
  /* 101aa389 lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 101aa38c and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 101aa38f jmp 0x101aa394 */
  goto L_101aa394;
L_101aa391:;
  /* 101aa391 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 101aa393 pop esi */
  ESI = (pop32());
L_101aa394:;
  /* 101aa394 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 101aa397 cmp esi, dword ptr [0x101b2e84] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101b2e84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa39d ja 0x101aa3cd */
  if ((!C.cf&&!C.zf)) goto L_101aa3cd;
  /* 101aa39f push 9 */
  push32((uint32_t)(0x9u));
  /* 101aa3a1 call 0x101aa033 */
  push32(0x101aa3a6u); f_101aa033();
  /* 101aa3a6 pop ecx */
  ECX = (pop32());
  /* 101aa3a7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 101aa3ae mov eax, esi */
  EAX = (ESI);
  /* 101aa3b0 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 101aa3b3 push eax */
  push32((uint32_t)(EAX));
  /* 101aa3b4 call 0x101aba68 */
  push32(0x101aa3b9u); f_101aba68();
  /* 101aa3b9 pop ecx */
  ECX = (pop32());
  /* 101aa3ba mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 101aa3bd or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101aa3c1 call 0x101aa3d3 */
  push32(0x101aa3c6u); f_101aa3d3();
  /* 101aa3c6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 101aa3c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101aa3cb jne 0x101aa3fa */
  if (!C.zf) { jmp_ind(0x101aa3fau); return; }
L_101aa3cd:;
  /* 101aa3cd push esi */
  push32((uint32_t)(ESI));
  /* 101aa3ce jmp 0x101aa3ec */
  goto L_101aa3ec;
  /* 101aa3d0 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 101aa3d3 push 9 */
  push32((uint32_t)(0x9u));
  /* 101aa3d5 call 0x101aa094 */
  push32(0x101aa3dau); f_101aa094();
  /* 101aa3da pop ecx */
  ECX = (pop32());
  /* 101aa3db ret  */
  ESPCHK(0x101aa30du, _esp0);
  ESP += 4; return;
L_101aa3dc:;
  /* 101aa3dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101aa3df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101aa3e1 jne 0x101aa3e6 */
  if (!C.zf) goto L_101aa3e6;
  /* 101aa3e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 101aa3e5 pop eax */
  EAX = (pop32());
L_101aa3e6:;
  /* 101aa3e6 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101aa3e9 and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 101aa3eb push eax */
  push32((uint32_t)(EAX));
L_101aa3ec:;
  /* 101aa3ec push 0 */
  push32((uint32_t)(0x0u));
  /* 101aa3ee push dword ptr [0x101b7c24] */
  push32((uint32_t)(r32((uint32_t)(0x101b7c24))));
}

/* FUN_1000a374 @ 0x101aa374 (9 bytes, 4 insns) */
void f_101aa374(void) {
  FTRACE(0x101aa374u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aa374 push 9 */
  push32((uint32_t)(0x9u));
  /* 101aa376 call 0x101aa094 */
  push32(0x101aa37bu); f_101aa094();
  /* 101aa37b pop ecx */
  ECX = (pop32());
  /* 101aa37c ret  */
  ESPCHK(0x101aa374u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3d3 @ 0x101aa3d3 (9 bytes, 4 insns) */
void f_101aa3d3(void) {
  FTRACE(0x101aa3d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aa3d3 push 9 */
  push32((uint32_t)(0x9u));
  /* 101aa3d5 call 0x101aa094 */
  push32(0x101aa3dau); f_101aa094();
  /* 101aa3da pop ecx */
  ECX = (pop32());
  /* 101aa3db ret  */
  ESPCHK(0x101aa3d3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a409 @ 0x101aa409 (429 bytes, 143 insns) */
void f_101aa409(void) {
  FTRACE(0x101aa409u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aa409 push ebp */
  push32((uint32_t)(EBP));
  /* 101aa40a mov ebp, esp */
  EBP = (ESP);
  /* 101aa40c sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aa40f push ebx */
  push32((uint32_t)(EBX));
  /* 101aa410 push esi */
  push32((uint32_t)(ESI));
  /* 101aa411 push edi */
  push32((uint32_t)(EDI));
  /* 101aa412 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101aa414 call 0x101aa033 */
  push32(0x101aa419u); f_101aa033();
  /* 101aa419 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101aa41c call 0x101aa5b6 */
  push32(0x101aa421u); f_101aa5b6();
  /* 101aa421 mov ebx, eax */
  EBX = (EAX);
  /* 101aa423 pop ecx */
  ECX = (pop32());
  /* 101aa424 cmp ebx, dword ptr [0x101b69d4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x101b69d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa42a pop ecx */
  ECX = (pop32());
  /* 101aa42b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101aa42e jne 0x101aa437 */
  if (!C.zf) goto L_101aa437;
L_101aa430:;
  /* 101aa430 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101aa432 jmp 0x101aa5a7 */
  goto L_101aa5a7;
L_101aa437:;
  /* 101aa437 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101aa439 je 0x101aa595 */
  if (C.zf) goto L_101aa595;
  /* 101aa43f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101aa441 mov eax, 0x101b0d70 */
  EAX = (0x101b0d70u);
L_101aa446:;
  /* 101aa446 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa448 je 0x101aa4be */
  if (C.zf) goto L_101aa4be;
  /* 101aa44a add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101aa44d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 101aa44e cmp eax, 0x101b0e60 */
  { uint32_t _a=(EAX),_b=(0x101b0e60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa453 jl 0x101aa446 */
  if ((C.sf!=C.of)) goto L_101aa446;
  /* 101aa455 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 101aa458 push eax */
  push32((uint32_t)(EAX));
  /* 101aa459 push ebx */
  push32((uint32_t)(EBX));
  /* 101aa45a call dword ptr [0x101ae09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae09c))), 0x101aa460u);
  /* 101aa460 push 1 */
  push32((uint32_t)(0x1u));
  /* 101aa462 pop esi */
  ESI = (pop32());
  /* 101aa463 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa465 jne 0x101aa58c */
  if (!C.zf) goto L_101aa58c;
  /* 101aa46b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 101aa46d and dword ptr [0x101b6c04], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101b6c04)))&(0x0u); w32((uint32_t)(0x101b6c04), (_r)); fl_logic(_r,32); }
  /* 101aa474 pop ecx */
  ECX = (pop32());
  /* 101aa475 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101aa477 mov edi, 0x101b6b00 */
  EDI = (0x101b6b00u);
  /* 101aa47c cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa47f rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 101aa481 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 101aa482 mov dword ptr [0x101b69d4], ebx */
  w32((uint32_t)(0x101b69d4), (EBX));
  /* 101aa488 jbe 0x101aa579 */
  if ((C.cf||C.zf)) goto L_101aa579;
  /* 101aa48e cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aa492 je 0x101aa554 */
  if (C.zf) goto L_101aa554;
  /* 101aa498 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_101aa49b:;
  /* 101aa49b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 101aa49d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101aa49f je 0x101aa554 */
  if (C.zf) goto L_101aa554;
  /* 101aa4a5 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 101aa4a9 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_101aa4ac:;
  /* 101aa4ac cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa4ae ja 0x101aa548 */
  if ((!C.cf&&!C.zf)) goto L_101aa548;
  /* 101aa4b4 or byte ptr [eax + 0x101b6b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101b6b01)))|(0x4u); w8((uint32_t)(EAX + 0x101b6b01), (_r)); fl_logic(_r,8); }
  /* 101aa4bb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101aa4bc jmp 0x101aa4ac */
  goto L_101aa4ac;
L_101aa4be:;
  /* 101aa4be and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101aa4c2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 101aa4c4 pop ecx */
  ECX = (pop32());
  /* 101aa4c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101aa4c7 mov edi, 0x101b6b00 */
  EDI = (0x101b6b00u);
  /* 101aa4cc lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 101aa4cf rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 101aa4d1 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 101aa4d4 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 101aa4d5 lea ebx, [esi + 0x101b0d80] */
  EBX = ((uint32_t)(ESI + 0x101b0d80));
L_101aa4db:;
  /* 101aa4db cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aa4de mov ecx, ebx */
  ECX = (EBX);
  /* 101aa4e0 je 0x101aa50e */
  if (C.zf) goto L_101aa50e;
L_101aa4e2:;
  /* 101aa4e2 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 101aa4e5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101aa4e7 je 0x101aa50e */
  if (C.zf) goto L_101aa50e;
  /* 101aa4e9 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 101aa4ec movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 101aa4ef cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa4f1 ja 0x101aa507 */
  if ((!C.cf&&!C.zf)) goto L_101aa507;
  /* 101aa4f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 101aa4f6 mov dl, byte ptr [edx + 0x101b0d68] */
  DL = (r8((uint32_t)(EDX + 0x101b0d68)));
L_101aa4fc:;
  /* 101aa4fc or byte ptr [eax + 0x101b6b01], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101b6b01)))|(DL); w8((uint32_t)(EAX + 0x101b6b01), (_r)); fl_logic(_r,8); }
  /* 101aa502 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101aa503 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa505 jbe 0x101aa4fc */
  if ((C.cf||C.zf)) goto L_101aa4fc;
L_101aa507:;
  /* 101aa507 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101aa508 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101aa509 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aa50c jne 0x101aa4e2 */
  if (!C.zf) goto L_101aa4e2;
L_101aa50e:;
  /* 101aa50e inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 101aa511 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101aa514 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa518 jb 0x101aa4db */
  if (C.cf) goto L_101aa4db;
  /* 101aa51a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101aa51d mov dword ptr [0x101b69ec], 1 */
  w32((uint32_t)(0x101b69ec), (0x1u));
  /* 101aa527 push eax */
  push32((uint32_t)(EAX));
  /* 101aa528 mov dword ptr [0x101b69d4], eax */
  w32((uint32_t)(0x101b69d4), (EAX));
  /* 101aa52d call 0x101aa600 */
  push32(0x101aa532u); f_101aa600();
  /* 101aa532 lea esi, [esi + 0x101b0d74] */
  ESI = ((uint32_t)(ESI + 0x101b0d74));
  /* 101aa538 mov edi, 0x101b69e0 */
  EDI = (0x101b69e0u);
  /* 101aa53d movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101aa53e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101aa53f pop ecx */
  ECX = (pop32());
  /* 101aa540 mov dword ptr [0x101b6c04], eax */
  w32((uint32_t)(0x101b6c04), (EAX));
  /* 101aa545 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101aa546 jmp 0x101aa59a */
  goto L_101aa59a;
L_101aa548:;
  /* 101aa548 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101aa549 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101aa54a cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aa54e jne 0x101aa49b */
  if (!C.zf) goto L_101aa49b;
L_101aa554:;
  /* 101aa554 mov eax, esi */
  EAX = (ESI);
L_101aa556:;
  /* 101aa556 or byte ptr [eax + 0x101b6b01], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101b6b01)))|(0x8u); w8((uint32_t)(EAX + 0x101b6b01), (_r)); fl_logic(_r,8); }
  /* 101aa55d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101aa55e cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa563 jb 0x101aa556 */
  if (C.cf) goto L_101aa556;
  /* 101aa565 push ebx */
  push32((uint32_t)(EBX));
  /* 101aa566 call 0x101aa600 */
  push32(0x101aa56bu); f_101aa600();
  /* 101aa56b pop ecx */
  ECX = (pop32());
  /* 101aa56c mov dword ptr [0x101b6c04], eax */
  w32((uint32_t)(0x101b6c04), (EAX));
  /* 101aa571 mov dword ptr [0x101b69ec], esi */
  w32((uint32_t)(0x101b69ec), (ESI));
  /* 101aa577 jmp 0x101aa580 */
  goto L_101aa580;
L_101aa579:;
  /* 101aa579 and dword ptr [0x101b69ec], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101b69ec)))&(0x0u); w32((uint32_t)(0x101b69ec), (_r)); fl_logic(_r,32); }
L_101aa580:;
  /* 101aa580 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101aa582 mov edi, 0x101b69e0 */
  EDI = (0x101b69e0u);
  /* 101aa587 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101aa588 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101aa589 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101aa58a jmp 0x101aa59a */
  goto L_101aa59a;
L_101aa58c:;
  /* 101aa58c cmp dword ptr [0x101b6810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101b6810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa593 je 0x101aa5a4 */
  if (C.zf) goto L_101aa5a4;
L_101aa595:;
  /* 101aa595 call 0x101aa633 */
  push32(0x101aa59au); f_101aa633();
L_101aa59a:;
  /* 101aa59a call 0x101aa65c */
  push32(0x101aa59fu); f_101aa65c();
  /* 101aa59f jmp 0x101aa430 */
  goto L_101aa430;
L_101aa5a4:;
  /* 101aa5a4 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_101aa5a7:;
  /* 101aa5a7 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101aa5a9 call 0x101aa094 */
  push32(0x101aa5aeu); f_101aa094();
  /* 101aa5ae pop ecx */
  ECX = (pop32());
  /* 101aa5af mov eax, esi */
  EAX = (ESI);
  /* 101aa5b1 pop edi */
  EDI = (pop32());
  /* 101aa5b2 pop esi */
  ESI = (pop32());
  /* 101aa5b3 pop ebx */
  EBX = (pop32());
  /* 101aa5b4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101aa5b5 ret  */
  ESPCHK(0x101aa409u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5b6 @ 0x101aa5b6 (74 bytes, 15 insns) */
void f_101aa5b6(void) {
  FTRACE(0x101aa5b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aa5b6 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101aa5ba and dword ptr [0x101b6810], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101b6810)))&(0x0u); w32((uint32_t)(0x101b6810), (_r)); fl_logic(_r,32); }
  /* 101aa5c1 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa5c4 jne 0x101aa5d6 */
  if (!C.zf) goto L_101aa5d6;
  /* 101aa5c6 mov dword ptr [0x101b6810], 1 */
  w32((uint32_t)(0x101b6810), (0x1u));
  /* 101aa5d0 jmp dword ptr [0x101ae0a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101ae0a4)))); return;
L_101aa5d6:;
  /* 101aa5d6 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa5d9 jne 0x101aa5eb */
  if (!C.zf) goto L_101aa5eb;
  /* 101aa5db mov dword ptr [0x101b6810], 1 */
  w32((uint32_t)(0x101b6810), (0x1u));
  /* 101aa5e5 jmp dword ptr [0x101ae0a0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101ae0a0)))); return;
L_101aa5eb:;
  /* 101aa5eb cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa5ee jne 0x101aa5ff */
  if (!C.zf) goto L_101aa5ff;
  /* 101aa5f0 mov eax, dword ptr [0x101b6848] */
  EAX = (r32((uint32_t)(0x101b6848)));
  /* 101aa5f5 mov dword ptr [0x101b6810], 1 */
  w32((uint32_t)(0x101b6810), (0x1u));
L_101aa5ff:;
  /* 101aa5ff ret  */
  ESPCHK(0x101aa5b6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a600 @ 0x101aa600 (51 bytes, 19 insns) */
void f_101aa600(void) {
  FTRACE(0x101aa600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aa600 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101aa604 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aa609 je 0x101aa62d */
  if (C.zf) goto L_101aa62d;
  /* 101aa60b sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aa60e je 0x101aa627 */
  if (C.zf) goto L_101aa627;
  /* 101aa610 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aa613 je 0x101aa621 */
  if (C.zf) goto L_101aa621;
  /* 101aa615 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101aa616 je 0x101aa61b */
  if (C.zf) goto L_101aa61b;
  /* 101aa618 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101aa61a ret  */
  ESPCHK(0x101aa600u, _esp0);
  ESP += 4; return;
L_101aa61b:;
  /* 101aa61b mov eax, 0x404 */
  EAX = (0x404u);
  /* 101aa620 ret  */
  ESPCHK(0x101aa600u, _esp0);
  ESP += 4; return;
L_101aa621:;
  /* 101aa621 mov eax, 0x412 */
  EAX = (0x412u);
  /* 101aa626 ret  */
  ESPCHK(0x101aa600u, _esp0);
  ESP += 4; return;
L_101aa627:;
  /* 101aa627 mov eax, 0x804 */
  EAX = (0x804u);
  /* 101aa62c ret  */
  ESPCHK(0x101aa600u, _esp0);
  ESP += 4; return;
L_101aa62d:;
  /* 101aa62d mov eax, 0x411 */
  EAX = (0x411u);
  /* 101aa632 ret  */
  ESPCHK(0x101aa600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a633 @ 0x101aa633 (41 bytes, 17 insns) */
void f_101aa633(void) {
  FTRACE(0x101aa633u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aa633 push edi */
  push32((uint32_t)(EDI));
  /* 101aa634 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 101aa636 pop ecx */
  ECX = (pop32());
  /* 101aa637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101aa639 mov edi, 0x101b6b00 */
  EDI = (0x101b6b00u);
  /* 101aa63e rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 101aa640 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 101aa641 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101aa643 mov edi, 0x101b69e0 */
  EDI = (0x101b69e0u);
  /* 101aa648 mov dword ptr [0x101b69d4], eax */
  w32((uint32_t)(0x101b69d4), (EAX));
  /* 101aa64d mov dword ptr [0x101b69ec], eax */
  w32((uint32_t)(0x101b69ec), (EAX));
  /* 101aa652 mov dword ptr [0x101b6c04], eax */
  w32((uint32_t)(0x101b6c04), (EAX));
  /* 101aa657 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101aa658 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101aa659 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101aa65a pop edi */
  EDI = (pop32());
  /* 101aa65b ret  */
  ESPCHK(0x101aa633u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a65c @ 0x101aa65c (389 bytes, 124 insns) */
void f_101aa65c(void) {
  FTRACE(0x101aa65cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aa65c push ebp */
  push32((uint32_t)(EBP));
  /* 101aa65d mov ebp, esp */
  EBP = (ESP);
  /* 101aa65f sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aa665 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101aa668 push esi */
  push32((uint32_t)(ESI));
  /* 101aa669 push eax */
  push32((uint32_t)(EAX));
  /* 101aa66a push dword ptr [0x101b69d4] */
  push32((uint32_t)(r32((uint32_t)(0x101b69d4))));
  /* 101aa670 call dword ptr [0x101ae09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae09c))), 0x101aa676u);
  /* 101aa676 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa679 jne 0x101aa795 */
  if (!C.zf) goto L_101aa795;
  /* 101aa67f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101aa681 mov esi, 0x100 */
  ESI = (0x100u);
L_101aa686:;
  /* 101aa686 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 101aa68d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101aa68e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa690 jb 0x101aa686 */
  if (C.cf) goto L_101aa686;
  /* 101aa692 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 101aa695 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 101aa69c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101aa69e je 0x101aa6d7 */
  if (C.zf) goto L_101aa6d7;
  /* 101aa6a0 push ebx */
  push32((uint32_t)(EBX));
  /* 101aa6a1 push edi */
  push32((uint32_t)(EDI));
  /* 101aa6a2 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_101aa6a5:;
  /* 101aa6a5 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 101aa6a8 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 101aa6ab cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa6ad ja 0x101aa6cc */
  if ((!C.cf&&!C.zf)) goto L_101aa6cc;
  /* 101aa6af sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aa6b1 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 101aa6b8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101aa6b9 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 101aa6be mov ebx, ecx */
  EBX = (ECX);
  /* 101aa6c0 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101aa6c3 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 101aa6c5 mov ecx, ebx */
  ECX = (EBX);
  /* 101aa6c7 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 101aa6ca rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_101aa6cc:;
  /* 101aa6cc inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 101aa6cd inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 101aa6ce mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 101aa6d1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101aa6d3 jne 0x101aa6a5 */
  if (!C.zf) goto L_101aa6a5;
  /* 101aa6d5 pop edi */
  EDI = (pop32());
  /* 101aa6d6 pop ebx */
  EBX = (pop32());
L_101aa6d7:;
  /* 101aa6d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 101aa6d9 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 101aa6df push dword ptr [0x101b6c04] */
  push32((uint32_t)(r32((uint32_t)(0x101b6c04))));
  /* 101aa6e5 push dword ptr [0x101b69d4] */
  push32((uint32_t)(r32((uint32_t)(0x101b69d4))));
  /* 101aa6eb push eax */
  push32((uint32_t)(EAX));
  /* 101aa6ec lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 101aa6f2 push esi */
  push32((uint32_t)(ESI));
  /* 101aa6f3 push eax */
  push32((uint32_t)(EAX));
  /* 101aa6f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101aa6f6 call 0x101ac29d */
  push32(0x101aa6fbu); f_101ac29d();
  /* 101aa6fb push 0 */
  push32((uint32_t)(0x0u));
  /* 101aa6fd lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 101aa703 push dword ptr [0x101b69d4] */
  push32((uint32_t)(r32((uint32_t)(0x101b69d4))));
  /* 101aa709 push esi */
  push32((uint32_t)(ESI));
  /* 101aa70a push eax */
  push32((uint32_t)(EAX));
  /* 101aa70b lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 101aa711 push esi */
  push32((uint32_t)(ESI));
  /* 101aa712 push eax */
  push32((uint32_t)(EAX));
  /* 101aa713 push esi */
  push32((uint32_t)(ESI));
  /* 101aa714 push dword ptr [0x101b6c04] */
  push32((uint32_t)(r32((uint32_t)(0x101b6c04))));
  /* 101aa71a call 0x101ac3e6 */
  push32(0x101aa71fu); f_101ac3e6();
  /* 101aa71f push 0 */
  push32((uint32_t)(0x0u));
  /* 101aa721 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 101aa727 push dword ptr [0x101b69d4] */
  push32((uint32_t)(r32((uint32_t)(0x101b69d4))));
  /* 101aa72d push esi */
  push32((uint32_t)(ESI));
  /* 101aa72e push eax */
  push32((uint32_t)(EAX));
  /* 101aa72f lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 101aa735 push esi */
  push32((uint32_t)(ESI));
  /* 101aa736 push eax */
  push32((uint32_t)(EAX));
  /* 101aa737 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 101aa73c push dword ptr [0x101b6c04] */
  push32((uint32_t)(r32((uint32_t)(0x101b6c04))));
  /* 101aa742 call 0x101ac3e6 */
  push32(0x101aa747u); f_101ac3e6();
  /* 101aa747 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101aa74a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101aa74c lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_101aa752:;
  /* 101aa752 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 101aa755 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 101aa758 je 0x101aa770 */
  if (C.zf) goto L_101aa770;
  /* 101aa75a or byte ptr [eax + 0x101b6b01], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101b6b01)))|(0x10u); w8((uint32_t)(EAX + 0x101b6b01), (_r)); fl_logic(_r,8); }
  /* 101aa761 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_101aa768:;
  /* 101aa768 mov byte ptr [eax + 0x101b6a00], dl */
  w8((uint32_t)(EAX + 0x101b6a00), (DL));
  /* 101aa76e jmp 0x101aa78c */
  goto L_101aa78c;
L_101aa770:;
  /* 101aa770 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 101aa773 je 0x101aa785 */
  if (C.zf) goto L_101aa785;
  /* 101aa775 or byte ptr [eax + 0x101b6b01], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101b6b01)))|(0x20u); w8((uint32_t)(EAX + 0x101b6b01), (_r)); fl_logic(_r,8); }
  /* 101aa77c mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 101aa783 jmp 0x101aa768 */
  goto L_101aa768;
L_101aa785:;
  /* 101aa785 and byte ptr [eax + 0x101b6a00], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101b6a00)))&(0x0u); w8((uint32_t)(EAX + 0x101b6a00), (_r)); fl_logic(_r,8); }
L_101aa78c:;
  /* 101aa78c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101aa78d inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101aa78e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101aa78f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa791 jb 0x101aa752 */
  if (C.cf) goto L_101aa752;
  /* 101aa793 jmp 0x101aa7de */
  goto L_101aa7de;
L_101aa795:;
  /* 101aa795 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101aa797 mov esi, 0x100 */
  ESI = (0x100u);
L_101aa79c:;
  /* 101aa79c cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa79f jb 0x101aa7ba */
  if (C.cf) goto L_101aa7ba;
  /* 101aa7a1 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa7a4 ja 0x101aa7ba */
  if ((!C.cf&&!C.zf)) goto L_101aa7ba;
  /* 101aa7a6 or byte ptr [eax + 0x101b6b01], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101b6b01)))|(0x10u); w8((uint32_t)(EAX + 0x101b6b01), (_r)); fl_logic(_r,8); }
  /* 101aa7ad mov cl, al */
  CL = (AL);
  /* 101aa7af add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_101aa7b2:;
  /* 101aa7b2 mov byte ptr [eax + 0x101b6a00], cl */
  w8((uint32_t)(EAX + 0x101b6a00), (CL));
  /* 101aa7b8 jmp 0x101aa7d9 */
  goto L_101aa7d9;
L_101aa7ba:;
  /* 101aa7ba cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa7bd jb 0x101aa7d2 */
  if (C.cf) goto L_101aa7d2;
  /* 101aa7bf cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa7c2 ja 0x101aa7d2 */
  if ((!C.cf&&!C.zf)) goto L_101aa7d2;
  /* 101aa7c4 or byte ptr [eax + 0x101b6b01], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101b6b01)))|(0x20u); w8((uint32_t)(EAX + 0x101b6b01), (_r)); fl_logic(_r,8); }
  /* 101aa7cb mov cl, al */
  CL = (AL);
  /* 101aa7cd sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101aa7d0 jmp 0x101aa7b2 */
  goto L_101aa7b2;
L_101aa7d2:;
  /* 101aa7d2 and byte ptr [eax + 0x101b6a00], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101b6a00)))&(0x0u); w8((uint32_t)(EAX + 0x101b6a00), (_r)); fl_logic(_r,8); }
L_101aa7d9:;
  /* 101aa7d9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101aa7da cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa7dc jb 0x101aa79c */
  if (C.cf) goto L_101aa79c;
L_101aa7de:;
  /* 101aa7de pop esi */
  ESI = (pop32());
  /* 101aa7df leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101aa7e0 ret  */
  ESPCHK(0x101aa65cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7e1 @ 0x101aa7e1 (28 bytes, 7 insns) */
void f_101aa7e1(void) {
  FTRACE(0x101aa7e1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aa7e1 cmp dword ptr [0x101b7d48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101b7d48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa7e8 jne 0x101aa7fc */
  if (!C.zf) goto L_101aa7fc;
  /* 101aa7ea push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 101aa7ec call 0x101aa409 */
  push32(0x101aa7f1u); f_101aa409();
  /* 101aa7f1 pop ecx */
  ECX = (pop32());
  /* 101aa7f2 mov dword ptr [0x101b7d48], 1 */
  w32((uint32_t)(0x101b7d48), (0x1u));
L_101aa7fc:;
  /* 101aa7fc ret  */
  ESPCHK(0x101aa7e1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a800 @ 0x101aa800 (664 bytes, 268 insns) [15 switch table(s)] */
void f_101aa800(void) {
  FTRACE(0x101aa800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aa800 push ebp */
  push32((uint32_t)(EBP));
  /* 101aa801 mov ebp, esp */
  EBP = (ESP);
  /* 101aa803 push edi */
  push32((uint32_t)(EDI));
  /* 101aa804 push esi */
  push32((uint32_t)(ESI));
  /* 101aa805 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101aa808 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 101aa80b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 101aa80e mov eax, ecx */
  EAX = (ECX);
  /* 101aa810 mov edx, ecx */
  EDX = (ECX);
  /* 101aa812 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101aa814 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa816 jbe 0x101aa820 */
  if ((C.cf||C.zf)) goto L_101aa820;
  /* 101aa818 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa81a jb 0x101aa998 */
  if (C.cf) goto L_101aa998;
L_101aa820:;
  /* 101aa820 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 101aa826 jne 0x101aa83c */
  if (!C.zf) goto L_101aa83c;
  /* 101aa828 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101aa82b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 101aa82e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa831 jb 0x101aa85c */
  if (C.cf) goto L_101aa85c;
  /* 101aa833 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101aa835 jmp dword ptr [edx*4 + 0x101aa948] */
  switch (EDX) {
    case 0: goto L_101aa958;
    case 1: goto L_101aa960;
    case 2: goto L_101aa96c;
    case 3: goto L_101aa980;
    default: x86_unimpl("switch@0x101aa835 out of table"); return;
  }
L_101aa83c:;
  /* 101aa83c mov eax, edi */
  EAX = (EDI);
  /* 101aa83e mov edx, 3 */
  EDX = (0x3u);
  /* 101aa843 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aa846 jb 0x101aa854 */
  if (C.cf) goto L_101aa854;
  /* 101aa848 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 101aa84b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101aa84d jmp dword ptr [eax*4 + 0x101aa860] */
  switch (EAX) {
    case 1: goto L_101aa870;
    case 2: goto L_101aa89c;
    case 3: goto L_101aa8c0;
    default: x86_unimpl("switch@0x101aa84d out of table"); return;
  }
L_101aa854:;
  /* 101aa854 jmp dword ptr [ecx*4 + 0x101aa958] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x101aa958)))); return;
  /* 101aa85b nop  */
  /* nop */
L_101aa85c:;
  /* 101aa85c jmp dword ptr [ecx*4 + 0x101aa8dc] */
  switch (ECX) {
    case 0: goto L_101aa93f;
    case 1: goto L_101aa92c;
    case 2: goto L_101aa924;
    case 3: goto L_101aa91c;
    case 4: goto L_101aa914;
    case 5: goto L_101aa90c;
    case 6: goto L_101aa904;
    case 7: goto L_101aa8fc;
    default: x86_unimpl("switch@0x101aa85c out of table"); return;
  }
  /* 101aa863 nop  */
  /* nop */
L_101aa870:;
  /* 101aa870 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101aa872 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101aa874 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101aa876 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101aa879 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101aa87c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101aa87f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101aa882 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101aa885 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101aa888 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101aa88b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa88e jb 0x101aa85c */
  if (C.cf) goto L_101aa85c;
  /* 101aa890 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101aa892 jmp dword ptr [edx*4 + 0x101aa948] */
  switch (EDX) {
    case 0: goto L_101aa958;
    case 1: goto L_101aa960;
    case 2: goto L_101aa96c;
    case 3: goto L_101aa980;
    default: x86_unimpl("switch@0x101aa892 out of table"); return;
  }
  /* 101aa899 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101aa89c:;
  /* 101aa89c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101aa89e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101aa8a0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101aa8a2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101aa8a5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101aa8a8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101aa8ab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101aa8ae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101aa8b1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa8b4 jb 0x101aa85c */
  if (C.cf) goto L_101aa85c;
  /* 101aa8b6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101aa8b8 jmp dword ptr [edx*4 + 0x101aa948] */
  switch (EDX) {
    case 0: goto L_101aa958;
    case 1: goto L_101aa960;
    case 2: goto L_101aa96c;
    case 3: goto L_101aa980;
    default: x86_unimpl("switch@0x101aa8b8 out of table"); return;
  }
  /* 101aa8bf nop  */
  /* nop */
L_101aa8c0:;
  /* 101aa8c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101aa8c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101aa8c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101aa8c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101aa8c7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101aa8ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101aa8cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa8ce jb 0x101aa85c */
  if (C.cf) goto L_101aa85c;
  /* 101aa8d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101aa8d2 jmp dword ptr [edx*4 + 0x101aa948] */
  switch (EDX) {
    case 0: goto L_101aa958;
    case 1: goto L_101aa960;
    case 2: goto L_101aa96c;
    case 3: goto L_101aa980;
    default: x86_unimpl("switch@0x101aa8d2 out of table"); return;
  }
  /* 101aa8d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101aa8fc:;
  /* 101aa8fc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 101aa900 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_101aa904:;
  /* 101aa904 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 101aa908 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_101aa90c:;
  /* 101aa90c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 101aa910 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_101aa914:;
  /* 101aa914 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 101aa918 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_101aa91c:;
  /* 101aa91c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 101aa920 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_101aa924:;
  /* 101aa924 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 101aa928 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_101aa92c:;
  /* 101aa92c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 101aa930 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 101aa934 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 101aa93b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101aa93d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_101aa93f:;
  /* 101aa93f jmp dword ptr [edx*4 + 0x101aa948] */
  switch (EDX) {
    case 0: goto L_101aa958;
    case 1: goto L_101aa960;
    case 2: goto L_101aa96c;
    case 3: goto L_101aa980;
    default: x86_unimpl("switch@0x101aa93f out of table"); return;
  }
  /* 101aa946 mov edi, edi */
  EDI = (EDI);
L_101aa958:;
  /* 101aa958 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101aa95b pop esi */
  ESI = (pop32());
  /* 101aa95c pop edi */
  EDI = (pop32());
  /* 101aa95d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101aa95e ret  */
  ESPCHK(0x101aa800u, _esp0);
  ESP += 4; return;
  /* 101aa95f nop  */
  /* nop */
L_101aa960:;
  /* 101aa960 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101aa962 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101aa964 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101aa967 pop esi */
  ESI = (pop32());
  /* 101aa968 pop edi */
  EDI = (pop32());
  /* 101aa969 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101aa96a ret  */
  ESPCHK(0x101aa800u, _esp0);
  ESP += 4; return;
  /* 101aa96b nop  */
  /* nop */
L_101aa96c:;
  /* 101aa96c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101aa96e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101aa970 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101aa973 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101aa976 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101aa979 pop esi */
  ESI = (pop32());
  /* 101aa97a pop edi */
  EDI = (pop32());
  /* 101aa97b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101aa97c ret  */
  ESPCHK(0x101aa800u, _esp0);
  ESP += 4; return;
  /* 101aa97d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101aa980:;
  /* 101aa980 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101aa982 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101aa984 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101aa987 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101aa98a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101aa98d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101aa990 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101aa993 pop esi */
  ESI = (pop32());
  /* 101aa994 pop edi */
  EDI = (pop32());
  /* 101aa995 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101aa996 ret  */
  ESPCHK(0x101aa800u, _esp0);
  ESP += 4; return;
  /* 101aa997 nop  */
  /* nop */
L_101aa998:;
  /* 101aa998 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 101aa99c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 101aa9a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 101aa9a6 jne 0x101aa9cc */
  if (!C.zf) goto L_101aa9cc;
  /* 101aa9a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101aa9ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 101aa9ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa9b1 jb 0x101aa9c0 */
  if (C.cf) goto L_101aa9c0;
  /* 101aa9b3 std  */
  C.df=1;
  /* 101aa9b4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101aa9b6 cld  */
  C.df=0;
  /* 101aa9b7 jmp dword ptr [edx*4 + 0x101aaae0] */
  switch (EDX) {
    case 0: goto L_101aaaf0;
    case 1: goto L_101aaaf8;
    case 2: goto L_101aab08;
    case 3: goto L_101aab1c;
    default: x86_unimpl("switch@0x101aa9b7 out of table"); return;
  }
  /* 101aa9be mov edi, edi */
  EDI = (EDI);
L_101aa9c0:;
  /* 101aa9c0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 101aa9c2 jmp dword ptr [ecx*4 + 0x101aaa90] */
  switch (ECX) {
    case 0: goto L_101aaad7;
    default: x86_unimpl("switch@0x101aa9c2 out of table"); return;
  }
  /* 101aa9c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101aa9cc:;
  /* 101aa9cc mov eax, edi */
  EAX = (EDI);
  /* 101aa9ce mov edx, 3 */
  EDX = (0x3u);
  /* 101aa9d3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aa9d6 jb 0x101aa9e4 */
  if (C.cf) goto L_101aa9e4;
  /* 101aa9d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 101aa9db sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aa9dd jmp dword ptr [eax*4 + 0x101aa9e8] */
  switch (EAX) {
    case 1: goto L_101aa9f8;
    case 2: goto L_101aaa18;
    case 3: goto L_101aaa40;
    default: x86_unimpl("switch@0x101aa9dd out of table"); return;
  }
L_101aa9e4:;
  /* 101aa9e4 jmp dword ptr [ecx*4 + 0x101aaae0] */
  switch (ECX) {
    case 0: goto L_101aaaf0;
    case 1: goto L_101aaaf8;
    case 2: goto L_101aab08;
    case 3: goto L_101aab1c;
    default: x86_unimpl("switch@0x101aa9e4 out of table"); return;
  }
  /* 101aa9eb nop  */
  /* nop */
L_101aa9f8:;
  /* 101aa9f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101aa9fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101aa9fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101aaa00 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101aaa01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101aaa04 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101aaa05 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aaa08 jb 0x101aa9c0 */
  if (C.cf) goto L_101aa9c0;
  /* 101aaa0a std  */
  C.df=1;
  /* 101aaa0b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101aaa0d cld  */
  C.df=0;
  /* 101aaa0e jmp dword ptr [edx*4 + 0x101aaae0] */
  switch (EDX) {
    case 0: goto L_101aaaf0;
    case 1: goto L_101aaaf8;
    case 2: goto L_101aab08;
    case 3: goto L_101aab1c;
    default: x86_unimpl("switch@0x101aaa0e out of table"); return;
  }
  /* 101aaa15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101aaa18:;
  /* 101aaa18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101aaa1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101aaa1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101aaa20 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101aaa23 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101aaa26 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101aaa29 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aaa2c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aaa2f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aaa32 jb 0x101aa9c0 */
  if (C.cf) goto L_101aa9c0;
  /* 101aaa34 std  */
  C.df=1;
  /* 101aaa35 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101aaa37 cld  */
  C.df=0;
  /* 101aaa38 jmp dword ptr [edx*4 + 0x101aaae0] */
  switch (EDX) {
    case 0: goto L_101aaaf0;
    case 1: goto L_101aaaf8;
    case 2: goto L_101aab08;
    case 3: goto L_101aab1c;
    default: x86_unimpl("switch@0x101aaa38 out of table"); return;
  }
  /* 101aaa3f nop  */
  /* nop */
L_101aaa40:;
  /* 101aaa40 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101aaa43 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101aaa45 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101aaa48 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101aaa4b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101aaa4e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101aaa51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101aaa54 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101aaa57 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aaa5a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aaa5d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aaa60 jb 0x101aa9c0 */
  if (C.cf) goto L_101aa9c0;
  /* 101aaa66 std  */
  C.df=1;
  /* 101aaa67 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101aaa69 cld  */
  C.df=0;
  /* 101aaa6a jmp dword ptr [edx*4 + 0x101aaae0] */
  switch (EDX) {
    case 0: goto L_101aaaf0;
    case 1: goto L_101aaaf8;
    case 2: goto L_101aab08;
    case 3: goto L_101aab1c;
    default: x86_unimpl("switch@0x101aaa6a out of table"); return;
  }
  /* 101aaa71 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 101aaa74 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 101aaa75 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 101aaa76 sbb dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a-_b-C.cf; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101aaa78 pushfd  */
  x86_unimpl("pushfd @ 0x101aaa78");
  /* 101aaa79 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 101aaa7a sbb dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a-_b-C.cf; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101aaa7c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 101aaa7d stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 101aaa7e sbb dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a-_b-C.cf; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101aaa80 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 101aaa81 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 101aaa82 sbb dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a-_b-C.cf; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101aaa84 mov ah, 0xaa */
  AH = (0xaau);
  /* 101aaa86 sbb dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a-_b-C.cf; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101aaa88 mov esp, 0xc4101aaa */
  ESP = (0xc4101aaau);
  /* 101aaa8d stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 101aaa8e sbb dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a-_b-C.cf; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101aaa94 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 101aaa98 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 101aaa9c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 101aaaa0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 101aaaa4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 101aaaa8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 101aaaac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 101aaab0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 101aaab4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 101aaab8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 101aaabc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 101aaac0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 101aaac4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 101aaac8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 101aaacc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 101aaad3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101aaad5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_101aaad7:;
  /* 101aaad7 jmp dword ptr [edx*4 + 0x101aaae0] */
  switch (EDX) {
    case 0: goto L_101aaaf0;
    case 1: goto L_101aaaf8;
    case 2: goto L_101aab08;
    case 3: goto L_101aab1c;
    default: x86_unimpl("switch@0x101aaad7 out of table"); return;
  }
  /* 101aaade mov edi, edi */
  EDI = (EDI);
L_101aaaf0:;
  /* 101aaaf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101aaaf3 pop esi */
  ESI = (pop32());
  /* 101aaaf4 pop edi */
  EDI = (pop32());
  /* 101aaaf5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101aaaf6 ret  */
  ESPCHK(0x101aa800u, _esp0);
  ESP += 4; return;
  /* 101aaaf7 nop  */
  /* nop */
L_101aaaf8:;
  /* 101aaaf8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101aaafb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101aaafe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101aab01 pop esi */
  ESI = (pop32());
  /* 101aab02 pop edi */
  EDI = (pop32());
  /* 101aab03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101aab04 ret  */
  ESPCHK(0x101aa800u, _esp0);
  ESP += 4; return;
  /* 101aab05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101aab08:;
  /* 101aab08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101aab0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101aab0e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101aab11 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101aab14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101aab17 pop esi */
  ESI = (pop32());
  /* 101aab18 pop edi */
  EDI = (pop32());
  /* 101aab19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101aab1a ret  */
  ESPCHK(0x101aa800u, _esp0);
  ESP += 4; return;
  /* 101aab1b nop  */
  /* nop */
L_101aab1c:;
  /* 101aab1c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101aab1f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101aab22 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101aab25 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101aab28 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101aab2b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101aab2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101aab31 pop esi */
  ESI = (pop32());
  /* 101aab32 pop edi */
  EDI = (pop32());
  /* 101aab33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101aab34 ret  */
  ESPCHK(0x101aa800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab35 @ 0x101aab35 (23 bytes, 7 insns) */
void f_101aab35(void) {
  FTRACE(0x101aab35u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aab35 push 0 */
  push32((uint32_t)(0x0u));
  /* 101aab37 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 101aab3b push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 101aab3f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 101aab43 call 0x101aab4c */
  push32(0x101aab48u); f_101aab4c();
  /* 101aab48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101aab4b ret  */
  ESPCHK(0x101aab35u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab4c @ 0x101aab4c (517 bytes, 195 insns) */
void f_101aab4c(void) {
  FTRACE(0x101aab4cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aab4c push ebp */
  push32((uint32_t)(EBP));
  /* 101aab4d mov ebp, esp */
  EBP = (ESP);
  /* 101aab4f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aab52 push ebx */
  push32((uint32_t)(EBX));
  /* 101aab53 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 101aab57 push esi */
  push32((uint32_t)(ESI));
  /* 101aab58 push edi */
  push32((uint32_t)(EDI));
  /* 101aab59 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 101aab5c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101aab5e lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 101aab61 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_101aab64:;
  /* 101aab64 cmp dword ptr [0x101b0be0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101b0be0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aab6b jle 0x101aab7c */
  if ((C.zf||C.sf!=C.of)) goto L_101aab7c;
  /* 101aab6d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101aab70 push 8 */
  push32((uint32_t)(0x8u));
  /* 101aab72 push eax */
  push32((uint32_t)(EAX));
  /* 101aab73 call 0x101a93eb */
  push32(0x101aab78u); f_101a93eb();
  /* 101aab78 pop ecx */
  ECX = (pop32());
  /* 101aab79 pop ecx */
  ECX = (pop32());
  /* 101aab7a jmp 0x101aab8b */
  goto L_101aab8b;
L_101aab7c:;
  /* 101aab7c mov ecx, dword ptr [0x101b09d0] */
  ECX = (r32((uint32_t)(0x101b09d0)));
  /* 101aab82 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101aab85 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 101aab88 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_101aab8b:;
  /* 101aab8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101aab8d je 0x101aab94 */
  if (C.zf) goto L_101aab94;
  /* 101aab8f mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 101aab91 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101aab92 jmp 0x101aab64 */
  goto L_101aab64;
L_101aab94:;
  /* 101aab94 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aab97 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 101aab9a jne 0x101aaba2 */
  if (!C.zf) goto L_101aaba2;
  /* 101aab9c or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 101aaba0 jmp 0x101aaba7 */
  goto L_101aaba7;
L_101aaba2:;
  /* 101aaba2 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aaba5 jne 0x101aabad */
  if (!C.zf) goto L_101aabad;
L_101aaba7:;
  /* 101aaba7 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 101aaba9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101aabaa mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_101aabad:;
  /* 101aabad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 101aabb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101aabb2 jl 0x101aad41 */
  if ((C.sf!=C.of)) goto L_101aad41;
  /* 101aabb8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aabbb je 0x101aad41 */
  if (C.zf) goto L_101aad41;
  /* 101aabc1 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aabc4 jg 0x101aad41 */
  if ((!C.zf&&C.sf==C.of)) goto L_101aad41;
  /* 101aabca push 0x10 */
  push32((uint32_t)(0x10u));
  /* 101aabcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101aabce pop ecx */
  ECX = (pop32());
  /* 101aabcf jne 0x101aabf5 */
  if (!C.zf) goto L_101aabf5;
  /* 101aabd1 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aabd4 je 0x101aabdf */
  if (C.zf) goto L_101aabdf;
  /* 101aabd6 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 101aabdd jmp 0x101aac11 */
  goto L_101aac11;
L_101aabdf:;
  /* 101aabdf mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101aabe1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aabe3 je 0x101aabf2 */
  if (C.zf) goto L_101aabf2;
  /* 101aabe5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aabe7 je 0x101aabf2 */
  if (C.zf) goto L_101aabf2;
  /* 101aabe9 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 101aabf0 jmp 0x101aac11 */
  goto L_101aac11;
L_101aabf2:;
  /* 101aabf2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_101aabf5:;
  /* 101aabf5 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aabf8 jne 0x101aac11 */
  if (!C.zf) goto L_101aac11;
  /* 101aabfa cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aabfd jne 0x101aac11 */
  if (!C.zf) goto L_101aac11;
  /* 101aabff mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101aac01 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aac03 je 0x101aac09 */
  if (C.zf) goto L_101aac09;
  /* 101aac05 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aac07 jne 0x101aac11 */
  if (!C.zf) goto L_101aac11;
L_101aac09:;
  /* 101aac09 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 101aac0c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101aac0d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101aac0e mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_101aac11:;
  /* 101aac11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101aac14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101aac16 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101aac19 mov edi, 0x103 */
  EDI = (0x103u);
  /* 101aac1e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_101aac21:;
  /* 101aac21 cmp dword ptr [0x101b0be0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101b0be0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aac28 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 101aac2b jle 0x101aac39 */
  if ((C.zf||C.sf!=C.of)) goto L_101aac39;
  /* 101aac2d push 4 */
  push32((uint32_t)(0x4u));
  /* 101aac2f push esi */
  push32((uint32_t)(ESI));
  /* 101aac30 call 0x101a93eb */
  push32(0x101aac35u); f_101a93eb();
  /* 101aac35 pop ecx */
  ECX = (pop32());
  /* 101aac36 pop ecx */
  ECX = (pop32());
  /* 101aac37 jmp 0x101aac44 */
  goto L_101aac44;
L_101aac39:;
  /* 101aac39 mov eax, dword ptr [0x101b09d0] */
  EAX = (r32((uint32_t)(0x101b09d0)));
  /* 101aac3e mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 101aac41 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_101aac44:;
  /* 101aac44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101aac46 je 0x101aac50 */
  if (C.zf) goto L_101aac50;
  /* 101aac48 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101aac4b sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aac4e jmp 0x101aac82 */
  goto L_101aac82;
L_101aac50:;
  /* 101aac50 cmp dword ptr [0x101b0be0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101b0be0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aac57 jle 0x101aac64 */
  if ((C.zf||C.sf!=C.of)) goto L_101aac64;
  /* 101aac59 push edi */
  push32((uint32_t)(EDI));
  /* 101aac5a push esi */
  push32((uint32_t)(ESI));
  /* 101aac5b call 0x101a93eb */
  push32(0x101aac60u); f_101a93eb();
  /* 101aac60 pop ecx */
  ECX = (pop32());
  /* 101aac61 pop ecx */
  ECX = (pop32());
  /* 101aac62 jmp 0x101aac6f */
  goto L_101aac6f;
L_101aac64:;
  /* 101aac64 mov eax, dword ptr [0x101b09d0] */
  EAX = (r32((uint32_t)(0x101b09d0)));
  /* 101aac69 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 101aac6d and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_101aac6f:;
  /* 101aac6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101aac71 je 0x101aacbd */
  if (C.zf) goto L_101aacbd;
  /* 101aac73 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101aac76 push eax */
  push32((uint32_t)(EAX));
  /* 101aac77 call 0x101ad128 */
  push32(0x101aac7cu); f_101ad128();
  /* 101aac7c pop ecx */
  ECX = (pop32());
  /* 101aac7d mov ecx, eax */
  ECX = (EAX);
  /* 101aac7f sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_101aac82:;
  /* 101aac82 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aac85 jae 0x101aacbd */
  if (!C.cf) goto L_101aacbd;
  /* 101aac87 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 101aac8a or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 101aac8e cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aac91 jb 0x101aaca7 */
  if (C.cf) goto L_101aaca7;
  /* 101aac93 jne 0x101aaca1 */
  if (!C.zf) goto L_101aaca1;
  /* 101aac95 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101aac98 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101aac9a div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101aac9d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aac9f jbe 0x101aaca7 */
  if ((C.cf||C.zf)) goto L_101aaca7;
L_101aaca1:;
  /* 101aaca1 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 101aaca5 jmp 0x101aacb0 */
  goto L_101aacb0;
L_101aaca7:;
  /* 101aaca7 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101aacab add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101aacad mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_101aacb0:;
  /* 101aacb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101aacb3 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 101aacb6 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 101aacb8 jmp 0x101aac21 */
  goto L_101aac21;
L_101aacbd:;
  /* 101aacbd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 101aacc0 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 101aacc3 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 101aacc6 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 101aacc8 jne 0x101aacda */
  if (!C.zf) goto L_101aacda;
  /* 101aacca test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101aaccc je 0x101aacd4 */
  if (C.zf) goto L_101aacd4;
  /* 101aacce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101aacd1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_101aacd4:;
  /* 101aacd4 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 101aacd8 jmp 0x101aad25 */
  goto L_101aad25;
L_101aacda:;
  /* 101aacda test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 101aacdc mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 101aace1 jne 0x101aacfe */
  if (!C.zf) goto L_101aacfe;
  /* 101aace3 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 101aace5 jne 0x101aad25 */
  if (!C.zf) goto L_101aad25;
  /* 101aace7 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 101aacea je 0x101aacf5 */
  if (C.zf) goto L_101aacf5;
  /* 101aacec cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aacf3 ja 0x101aacfe */
  if ((!C.cf&&!C.zf)) goto L_101aacfe;
L_101aacf5:;
  /* 101aacf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101aacf7 jne 0x101aad25 */
  if (!C.zf) goto L_101aad25;
  /* 101aacf9 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aacfc jbe 0x101aad25 */
  if ((C.cf||C.zf)) goto L_101aad25;
L_101aacfe:;
  /* 101aacfe call 0x101abf91 */
  push32(0x101aad03u); f_101abf91();
  /* 101aad03 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 101aad07 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 101aad0d je 0x101aad15 */
  if (C.zf) goto L_101aad15;
  /* 101aad0f or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 101aad13 jmp 0x101aad25 */
  goto L_101aad25;
L_101aad15:;
  /* 101aad15 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 101aad18 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 101aad1a neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 101aad1c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aad1e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101aad20 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101aad22 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_101aad25:;
  /* 101aad25 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101aad27 je 0x101aad2e */
  if (C.zf) goto L_101aad2e;
  /* 101aad29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101aad2c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_101aad2e:;
  /* 101aad2e test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 101aad32 je 0x101aad3c */
  if (C.zf) goto L_101aad3c;
  /* 101aad34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101aad37 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101aad39 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_101aad3c:;
  /* 101aad3c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101aad3f jmp 0x101aad4c */
  goto L_101aad4c;
L_101aad41:;
  /* 101aad41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101aad44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101aad46 je 0x101aad4a */
  if (C.zf) goto L_101aad4a;
  /* 101aad48 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_101aad4a:;
  /* 101aad4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101aad4c:;
  /* 101aad4c pop edi */
  EDI = (pop32());
  /* 101aad4d pop esi */
  ESI = (pop32());
  /* 101aad4e pop ebx */
  EBX = (pop32());
  /* 101aad4f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101aad50 ret  */
  ESPCHK(0x101aab4cu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x101aad70 (193 bytes, 90 insns) */
void f_101aad70(void) {
  FTRACE(0x101aad70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aad70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101aad72 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 101aad76 push ebx */
  push32((uint32_t)(EBX));
  /* 101aad77 mov ebx, eax */
  EBX = (EAX);
  /* 101aad79 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 101aad7c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 101aad80 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 101aad86 je 0x101aad9b */
  if (C.zf) goto L_101aad9b;
L_101aad88:;
  /* 101aad88 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 101aad8a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 101aad8b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aad8d je 0x101aad60 */
  if (C.zf) { jmp_ind(0x101aad60u); return; }
  /* 101aad8f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 101aad91 je 0x101aade4 */
  if (C.zf) goto L_101aade4;
  /* 101aad93 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 101aad99 jne 0x101aad88 */
  if (!C.zf) goto L_101aad88;
L_101aad9b:;
  /* 101aad9b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 101aad9d push edi */
  push32((uint32_t)(EDI));
  /* 101aad9e mov eax, ebx */
  EAX = (EBX);
  /* 101aada0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 101aada3 push esi */
  push32((uint32_t)(ESI));
  /* 101aada4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_101aada6:;
  /* 101aada6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 101aada8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 101aadad mov eax, ecx */
  EAX = (ECX);
  /* 101aadaf mov esi, edi */
  ESI = (EDI);
  /* 101aadb1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 101aadb3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101aadb5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101aadb7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 101aadba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101aadbd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 101aadbf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 101aadc1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101aadc4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 101aadca jne 0x101aade8 */
  if (!C.zf) goto L_101aade8;
  /* 101aadcc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 101aadd1 je 0x101aada6 */
  if (C.zf) goto L_101aada6;
  /* 101aadd3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 101aadd8 jne 0x101aade2 */
  if (!C.zf) goto L_101aade2;
  /* 101aadda and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 101aade0 jne 0x101aada6 */
  if (!C.zf) goto L_101aada6;
L_101aade2:;
  /* 101aade2 pop esi */
  ESI = (pop32());
  /* 101aade3 pop edi */
  EDI = (pop32());
L_101aade4:;
  /* 101aade4 pop ebx */
  EBX = (pop32());
  /* 101aade5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101aade7 ret  */
  ESPCHK(0x101aad70u, _esp0);
  ESP += 4; return;
L_101aade8:;
  /* 101aade8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 101aadeb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aaded je 0x101aae25 */
  if (C.zf) goto L_101aae25;
  /* 101aadef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101aadf1 je 0x101aade2 */
  if (C.zf) goto L_101aade2;
  /* 101aadf3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aadf5 je 0x101aae1e */
  if (C.zf) goto L_101aae1e;
  /* 101aadf7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 101aadf9 je 0x101aade2 */
  if (C.zf) goto L_101aade2;
  /* 101aadfb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 101aadfe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aae00 je 0x101aae17 */
  if (C.zf) goto L_101aae17;
  /* 101aae02 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101aae04 je 0x101aade2 */
  if (C.zf) goto L_101aade2;
  /* 101aae06 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aae08 je 0x101aae10 */
  if (C.zf) goto L_101aae10;
  /* 101aae0a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 101aae0c je 0x101aade2 */
  if (C.zf) goto L_101aade2;
  /* 101aae0e jmp 0x101aada6 */
  goto L_101aada6;
L_101aae10:;
  /* 101aae10 pop esi */
  ESI = (pop32());
  /* 101aae11 pop edi */
  EDI = (pop32());
  /* 101aae12 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 101aae15 pop ebx */
  EBX = (pop32());
  /* 101aae16 ret  */
  ESPCHK(0x101aad70u, _esp0);
  ESP += 4; return;
L_101aae17:;
  /* 101aae17 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 101aae1a pop esi */
  ESI = (pop32());
  /* 101aae1b pop edi */
  EDI = (pop32());
  /* 101aae1c pop ebx */
  EBX = (pop32());
  /* 101aae1d ret  */
  ESPCHK(0x101aad70u, _esp0);
  ESP += 4; return;
L_101aae1e:;
  /* 101aae1e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 101aae21 pop esi */
  ESI = (pop32());
  /* 101aae22 pop edi */
  EDI = (pop32());
  /* 101aae23 pop ebx */
  EBX = (pop32());
  /* 101aae24 ret  */
  ESPCHK(0x101aad70u, _esp0);
  ESP += 4; return;
L_101aae25:;
  /* 101aae25 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 101aae28 pop esi */
  ESI = (pop32());
  /* 101aae29 pop edi */
  EDI = (pop32());
  /* 101aae2a pop ebx */
  EBX = (pop32());
  /* 101aae2b ret  */
  ESPCHK(0x101aad70u, _esp0);
  ESP += 4; return;
  /* 101aae2c int3  */
  x86_unimpl("int3 @ 0x101aae2c");
  /* 101aae2d int3  */
  x86_unimpl("int3 @ 0x101aae2d");
  /* 101aae2e int3  */
  x86_unimpl("int3 @ 0x101aae2e");
  /* 101aae2f int3  */
  x86_unimpl("int3 @ 0x101aae2f");
}

/* _strstr @ 0x101aae30 (128 bytes, 66 insns) */
void f_101aae30(void) {
  FTRACE(0x101aae30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aae30 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 101aae34 push edi */
  push32((uint32_t)(EDI));
  /* 101aae35 push ebx */
  push32((uint32_t)(EBX));
  /* 101aae36 push esi */
  push32((uint32_t)(ESI));
  /* 101aae37 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 101aae39 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 101aae3d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101aae3f je 0x101aaeaa */
  if (C.zf) goto L_101aaeaa;
  /* 101aae41 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 101aae44 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 101aae46 je 0x101aae97 */
  if (C.zf) goto L_101aae97;
L_101aae48:;
  /* 101aae48 mov esi, edi */
  ESI = (EDI);
  /* 101aae4a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 101aae4e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 101aae50 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101aae51 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aae53 je 0x101aae6a */
  if (C.zf) goto L_101aae6a;
  /* 101aae55 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101aae57 je 0x101aae64 */
  if (C.zf) goto L_101aae64;
L_101aae59:;
  /* 101aae59 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101aae5b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_101aae5c:;
  /* 101aae5c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aae5e je 0x101aae6a */
  if (C.zf) goto L_101aae6a;
  /* 101aae60 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101aae62 jne 0x101aae59 */
  if (!C.zf) goto L_101aae59;
L_101aae64:;
  /* 101aae64 pop esi */
  ESI = (pop32());
  /* 101aae65 pop ebx */
  EBX = (pop32());
  /* 101aae66 pop edi */
  EDI = (pop32());
  /* 101aae67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101aae69 ret  */
  ESPCHK(0x101aae30u, _esp0);
  ESP += 4; return;
L_101aae6a:;
  /* 101aae6a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101aae6c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101aae6d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aae6f jne 0x101aae5c */
  if (!C.zf) goto L_101aae5c;
  /* 101aae71 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_101aae74:;
  /* 101aae74 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 101aae77 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 101aae79 je 0x101aaea3 */
  if (C.zf) goto L_101aaea3;
  /* 101aae7b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101aae7d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101aae80 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aae82 jne 0x101aae48 */
  if (!C.zf) goto L_101aae48;
  /* 101aae84 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 101aae87 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101aae89 je 0x101aaea3 */
  if (C.zf) goto L_101aaea3;
  /* 101aae8b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 101aae8e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101aae91 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aae93 je 0x101aae74 */
  if (C.zf) goto L_101aae74;
  /* 101aae95 jmp 0x101aae48 */
  goto L_101aae48;
L_101aae97:;
  /* 101aae97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101aae99 pop esi */
  ESI = (pop32());
  /* 101aae9a pop ebx */
  EBX = (pop32());
  /* 101aae9b pop edi */
  EDI = (pop32());
  /* 101aae9c mov al, dl */
  AL = (DL);
  /* 101aae9e jmp 0x101aad76 */
  jmp_ind(0x101aad76u); return;
L_101aaea3:;
  /* 101aaea3 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 101aaea6 pop esi */
  ESI = (pop32());
  /* 101aaea7 pop ebx */
  EBX = (pop32());
  /* 101aaea8 pop edi */
  EDI = (pop32());
  /* 101aaea9 ret  */
  ESPCHK(0x101aae30u, _esp0);
  ESP += 4; return;
L_101aaeaa:;
  /* 101aaeaa mov eax, edi */
  EAX = (EDI);
  /* 101aaeac pop esi */
  ESI = (pop32());
  /* 101aaead pop ebx */
  EBX = (pop32());
  /* 101aaeae pop edi */
  EDI = (pop32());
  /* 101aaeaf ret  */
  ESPCHK(0x101aae30u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x101aaeb0 (56 bytes, 31 insns) */
void f_101aaeb0(void) {
  FTRACE(0x101aaeb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aaeb0 push ebp */
  push32((uint32_t)(EBP));
  /* 101aaeb1 mov ebp, esp */
  EBP = (ESP);
  /* 101aaeb3 push edi */
  push32((uint32_t)(EDI));
  /* 101aaeb4 push esi */
  push32((uint32_t)(ESI));
  /* 101aaeb5 push ebx */
  push32((uint32_t)(EBX));
  /* 101aaeb6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 101aaeb9 jecxz 0x101aaee1 */
  x86_unimpl("jecxz @ 0x101aaeb9");
  /* 101aaebb mov ebx, ecx */
  EBX = (ECX);
  /* 101aaebd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 101aaec0 mov esi, edi */
  ESI = (EDI);
  /* 101aaec2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101aaec4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 101aaec6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 101aaec8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101aaeca mov edi, esi */
  EDI = (ESI);
  /* 101aaecc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101aaecf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 101aaed1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 101aaed4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101aaed6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aaed9 ja 0x101aaedf */
  if ((!C.cf&&!C.zf)) goto L_101aaedf;
  /* 101aaedb je 0x101aaee1 */
  if (C.zf) goto L_101aaee1;
  /* 101aaedd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101aaede dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_101aaedf:;
  /* 101aaedf not ecx */
  ECX = (~(ECX));
L_101aaee1:;
  /* 101aaee1 mov eax, ecx */
  EAX = (ECX);
  /* 101aaee3 pop ebx */
  EBX = (pop32());
  /* 101aaee4 pop esi */
  ESI = (pop32());
  /* 101aaee5 pop edi */
  EDI = (pop32());
  /* 101aaee6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101aaee7 ret  */
  ESPCHK(0x101aaeb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aef0 @ 0x101aaef0 (47 bytes, 17 insns) */
void f_101aaef0(void) {
  FTRACE(0x101aaef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aaef0 push ecx */
  push32((uint32_t)(ECX));
  /* 101aaef1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aaef6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 101aaefa jb 0x101aaf10 */
  if (C.cf) goto L_101aaf10;
L_101aaefc:;
  /* 101aaefc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aaf02 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aaf07 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 101aaf09 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aaf0e jae 0x101aaefc */
  if (!C.cf) goto L_101aaefc;
L_101aaf10:;
  /* 101aaf10 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aaf12 mov eax, esp */
  EAX = (ESP);
  /* 101aaf14 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 101aaf16 mov esp, ecx */
  ESP = (ECX);
  /* 101aaf18 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 101aaf1a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 101aaf1d push eax */
  push32((uint32_t)(EAX));
  /* 101aaf1e ret  */
  ESPCHK(0x101aaef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af1f @ 0x101aaf1f (72 bytes, 17 insns) */
void f_101aaf1f(void) {
  FTRACE(0x101aaf1fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aaf1f push 0x140 */
  push32((uint32_t)(0x140u));
  /* 101aaf24 push 0 */
  push32((uint32_t)(0x0u));
  /* 101aaf26 push dword ptr [0x101b7c24] */
  push32((uint32_t)(r32((uint32_t)(0x101b7c24))));
  /* 101aaf2c call dword ptr [0x101ae098] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae098))), 0x101aaf32u);
  /* 101aaf32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101aaf34 mov dword ptr [0x101b69cc], eax */
  w32((uint32_t)(0x101b69cc), (EAX));
  /* 101aaf39 jne 0x101aaf3c */
  if (!C.zf) goto L_101aaf3c;
  /* 101aaf3b ret  */
  ESPCHK(0x101aaf1fu, _esp0);
  ESP += 4; return;
L_101aaf3c:;
  /* 101aaf3c mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101aaf40 and dword ptr [0x101b69c4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101b69c4)))&(0x0u); w32((uint32_t)(0x101b69c4), (_r)); fl_logic(_r,32); }
  /* 101aaf47 and dword ptr [0x101b69c8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101b69c8)))&(0x0u); w32((uint32_t)(0x101b69c8), (_r)); fl_logic(_r,32); }
  /* 101aaf4e push 1 */
  push32((uint32_t)(0x1u));
  /* 101aaf50 mov dword ptr [0x101b69c0], eax */
  w32((uint32_t)(0x101b69c0), (EAX));
  /* 101aaf55 mov dword ptr [0x101b69d0], ecx */
  w32((uint32_t)(0x101b69d0), (ECX));
  /* 101aaf5b mov dword ptr [0x101b69b8], 0x10 */
  w32((uint32_t)(0x101b69b8), (0x10u));
  /* 101aaf65 pop eax */
  EAX = (pop32());
  /* 101aaf66 ret  */
  ESPCHK(0x101aaf1fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000af67 @ 0x101aaf67 (43 bytes, 14 insns) */
void f_101aaf67(void) {
  FTRACE(0x101aaf67u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aaf67 mov eax, dword ptr [0x101b69c8] */
  EAX = (r32((uint32_t)(0x101b69c8)));
  /* 101aaf6c lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 101aaf6f mov eax, dword ptr [0x101b69cc] */
  EAX = (r32((uint32_t)(0x101b69cc)));
  /* 101aaf74 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_101aaf77:;
  /* 101aaf77 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aaf79 jae 0x101aaf8f */
  if (!C.cf) goto L_101aaf8f;
  /* 101aaf7b mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 101aaf7f sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aaf82 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aaf88 jb 0x101aaf91 */
  if (C.cf) goto L_101aaf91;
  /* 101aaf8a add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101aaf8d jmp 0x101aaf77 */
  goto L_101aaf77;
L_101aaf8f:;
  /* 101aaf8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101aaf91:;
  /* 101aaf91 ret  */
  ESPCHK(0x101aaf67u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af92 @ 0x101aaf92 (809 bytes, 265 insns) */
void f_101aaf92(void) {
  FTRACE(0x101aaf92u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aaf92 push ebp */
  push32((uint32_t)(EBP));
  /* 101aaf93 mov ebp, esp */
  EBP = (ESP);
  /* 101aaf95 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aaf98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101aaf9b push ebx */
  push32((uint32_t)(EBX));
  /* 101aaf9c push esi */
  push32((uint32_t)(ESI));
  /* 101aaf9d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101aafa0 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 101aafa3 push edi */
  push32((uint32_t)(EDI));
  /* 101aafa4 mov edi, esi */
  EDI = (ESI);
  /* 101aafa6 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101aafa9 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aafac shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 101aafaf mov ecx, edi */
  ECX = (EDI);
  /* 101aafb1 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101aafb7 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 101aafbe mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 101aafc1 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 101aafc3 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101aafc4 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 101aafc7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 101aafca jne 0x101ab2b6 */
  if (!C.zf) goto L_101ab2b6;
  /* 101aafd0 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 101aafd3 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 101aafd6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 101aafd9 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 101aafdc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 101aafdf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 101aafe2 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 101aafe5 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 101aafe8 jne 0x101ab068 */
  if (!C.zf) goto L_101ab068;
  /* 101aafea sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 101aafed dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 101aafee cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aaff1 jbe 0x101aaff6 */
  if ((C.cf||C.zf)) goto L_101aaff6;
  /* 101aaff3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 101aaff5 pop edx */
  EDX = (pop32());
L_101aaff6:;
  /* 101aaff6 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 101aaff9 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aaffc jne 0x101ab04a */
  if (!C.zf) goto L_101ab04a;
  /* 101aaffe cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab001 jae 0x101ab021 */
  if (!C.cf) goto L_101ab021;
  /* 101ab003 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 101ab008 mov ecx, edx */
  ECX = (EDX);
  /* 101ab00a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 101ab00c lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 101ab010 not ebx */
  EBX = (~(EBX));
  /* 101ab012 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 101ab016 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 101ab018 jne 0x101ab042 */
  if (!C.zf) goto L_101ab042;
  /* 101ab01a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ab01d and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 101ab01f jmp 0x101ab042 */
  goto L_101ab042;
L_101ab021:;
  /* 101ab021 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 101ab024 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 101ab029 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 101ab02b lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 101ab02f not ebx */
  EBX = (~(EBX));
  /* 101ab031 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 101ab038 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 101ab03a jne 0x101ab042 */
  if (!C.zf) goto L_101ab042;
  /* 101ab03c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ab03f and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_101ab042:;
  /* 101ab042 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101ab045 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 101ab048 jmp 0x101ab04d */
  goto L_101ab04d;
L_101ab04a:;
  /* 101ab04a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_101ab04d:;
  /* 101ab04d mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 101ab050 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 101ab053 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ab056 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 101ab059 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 101ab05c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 101ab05f mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 101ab062 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 101ab065 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_101ab068:;
  /* 101ab068 mov edx, ecx */
  EDX = (ECX);
  /* 101ab06a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 101ab06d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 101ab06e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab071 jbe 0x101ab076 */
  if ((C.cf||C.zf)) goto L_101ab076;
  /* 101ab073 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 101ab075 pop edx */
  EDX = (pop32());
L_101ab076:;
  /* 101ab076 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 101ab079 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 101ab07c mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 101ab07f jne 0x101ab119 */
  if (!C.zf) goto L_101ab119;
  /* 101ab085 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ab088 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 101ab08b sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 101ab08e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 101ab090 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 101ab093 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101ab094 pop esi */
  ESI = (pop32());
  /* 101ab095 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab097 jbe 0x101ab09b */
  if ((C.cf||C.zf)) goto L_101ab09b;
  /* 101ab099 mov ebx, esi */
  EBX = (ESI);
L_101ab09b:;
  /* 101ab09b add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ab09e mov edx, ecx */
  EDX = (ECX);
  /* 101ab0a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 101ab0a3 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 101ab0a6 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 101ab0a7 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab0a9 jbe 0x101ab0ad */
  if ((C.cf||C.zf)) goto L_101ab0ad;
  /* 101ab0ab mov edx, esi */
  EDX = (ESI);
L_101ab0ad:;
  /* 101ab0ad cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab0af je 0x101ab114 */
  if (C.zf) goto L_101ab114;
  /* 101ab0b1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101ab0b4 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 101ab0b7 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab0ba jne 0x101ab0fc */
  if (!C.zf) goto L_101ab0fc;
  /* 101ab0bc cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab0bf jae 0x101ab0dd */
  if (!C.cf) goto L_101ab0dd;
  /* 101ab0c1 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 101ab0c6 mov ecx, ebx */
  ECX = (EBX);
  /* 101ab0c8 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 101ab0ca not esi */
  ESI = (~(ESI));
  /* 101ab0cc and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 101ab0d0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 101ab0d4 jne 0x101ab0fc */
  if (!C.zf) goto L_101ab0fc;
  /* 101ab0d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ab0d9 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 101ab0db jmp 0x101ab0fc */
  goto L_101ab0fc;
L_101ab0dd:;
  /* 101ab0dd lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 101ab0e0 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 101ab0e5 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 101ab0e7 not esi */
  ESI = (~(ESI));
  /* 101ab0e9 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 101ab0f0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 101ab0f4 jne 0x101ab0fc */
  if (!C.zf) goto L_101ab0fc;
  /* 101ab0f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ab0f9 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_101ab0fc:;
  /* 101ab0fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101ab0ff mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 101ab102 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 101ab105 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 101ab108 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101ab10b mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 101ab10e mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 101ab111 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_101ab114:;
  /* 101ab114 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101ab117 jmp 0x101ab11c */
  goto L_101ab11c;
L_101ab119:;
  /* 101ab119 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_101ab11c:;
  /* 101ab11c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab120 jne 0x101ab12a */
  if (!C.zf) goto L_101ab12a;
  /* 101ab122 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab124 je 0x101ab1ab */
  if (C.zf) goto L_101ab1ab;
L_101ab12a:;
  /* 101ab12a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 101ab12d mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 101ab131 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 101ab134 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 101ab137 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 101ab13a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 101ab13d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 101ab140 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 101ab143 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 101ab146 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab149 jne 0x101ab1ab */
  if (!C.zf) goto L_101ab1ab;
  /* 101ab14b mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 101ab14f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab152 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 101ab155 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 101ab157 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 101ab15b jae 0x101ab182 */
  if (!C.cf) goto L_101ab182;
  /* 101ab15d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ab161 jne 0x101ab171 */
  if (!C.zf) goto L_101ab171;
  /* 101ab163 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 101ab168 mov ecx, edx */
  ECX = (EDX);
  /* 101ab16a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 101ab16c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ab16f or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_101ab171:;
  /* 101ab171 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 101ab176 mov ecx, edx */
  ECX = (EDX);
  /* 101ab178 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 101ab17a lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 101ab17e or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101ab180 jmp 0x101ab1ab */
  goto L_101ab1ab;
L_101ab182:;
  /* 101ab182 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ab186 jne 0x101ab198 */
  if (!C.zf) goto L_101ab198;
  /* 101ab188 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 101ab18b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 101ab190 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 101ab192 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ab195 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_101ab198:;
  /* 101ab198 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 101ab19b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 101ab1a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 101ab1a2 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 101ab1a9 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_101ab1ab:;
  /* 101ab1ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101ab1ae mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101ab1b0 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 101ab1b4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 101ab1b7 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 101ab1b9 jne 0x101ab2b6 */
  if (!C.zf) goto L_101ab2b6;
  /* 101ab1bf mov eax, dword ptr [0x101b69c4] */
  EAX = (r32((uint32_t)(0x101b69c4)));
  /* 101ab1c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ab1c6 je 0x101ab2a8 */
  if (C.zf) goto L_101ab2a8;
  /* 101ab1cc mov ecx, dword ptr [0x101b69bc] */
  ECX = (r32((uint32_t)(0x101b69bc)));
  /* 101ab1d2 mov esi, dword ptr [0x101ae07c] */
  ESI = (r32((uint32_t)(0x101ae07c)));
  /* 101ab1d8 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 101ab1db add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ab1de mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 101ab1e3 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 101ab1e8 push ebx */
  push32((uint32_t)(EBX));
  /* 101ab1e9 push ecx */
  push32((uint32_t)(ECX));
  /* 101ab1ea call esi */
  call_ind((uint32_t)(ESI), 0x101ab1ecu);
  /* 101ab1ec mov ecx, dword ptr [0x101b69bc] */
  ECX = (r32((uint32_t)(0x101b69bc)));
  /* 101ab1f2 mov eax, dword ptr [0x101b69c4] */
  EAX = (r32((uint32_t)(0x101b69c4)));
  /* 101ab1f7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 101ab1fc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 101ab1fe or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 101ab201 mov eax, dword ptr [0x101b69c4] */
  EAX = (r32((uint32_t)(0x101b69c4)));
  /* 101ab206 mov ecx, dword ptr [0x101b69bc] */
  ECX = (r32((uint32_t)(0x101b69bc)));
  /* 101ab20c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 101ab20f and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 101ab217 mov eax, dword ptr [0x101b69c4] */
  EAX = (r32((uint32_t)(0x101b69c4)));
  /* 101ab21c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 101ab21f dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 101ab222 mov eax, dword ptr [0x101b69c4] */
  EAX = (r32((uint32_t)(0x101b69c4)));
  /* 101ab227 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 101ab22a cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ab22e jne 0x101ab239 */
  if (!C.zf) goto L_101ab239;
  /* 101ab230 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 101ab234 mov eax, dword ptr [0x101b69c4] */
  EAX = (r32((uint32_t)(0x101b69c4)));
L_101ab239:;
  /* 101ab239 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab23d jne 0x101ab2a8 */
  if (!C.zf) goto L_101ab2a8;
  /* 101ab23f push ebx */
  push32((uint32_t)(EBX));
  /* 101ab240 push 0 */
  push32((uint32_t)(0x0u));
  /* 101ab242 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 101ab245 call esi */
  call_ind((uint32_t)(ESI), 0x101ab247u);
  /* 101ab247 mov eax, dword ptr [0x101b69c4] */
  EAX = (r32((uint32_t)(0x101b69c4)));
  /* 101ab24c push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 101ab24f push 0 */
  push32((uint32_t)(0x0u));
  /* 101ab251 push dword ptr [0x101b7c24] */
  push32((uint32_t)(r32((uint32_t)(0x101b7c24))));
  /* 101ab257 call dword ptr [0x101ae080] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae080))), 0x101ab25du);
  /* 101ab25d mov eax, dword ptr [0x101b69c8] */
  EAX = (r32((uint32_t)(0x101b69c8)));
  /* 101ab262 mov edx, dword ptr [0x101b69cc] */
  EDX = (r32((uint32_t)(0x101b69cc)));
  /* 101ab268 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 101ab26b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 101ab26e mov ecx, eax */
  ECX = (EAX);
  /* 101ab270 mov eax, dword ptr [0x101b69c4] */
  EAX = (r32((uint32_t)(0x101b69c4)));
  /* 101ab275 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ab277 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 101ab27b push ecx */
  push32((uint32_t)(ECX));
  /* 101ab27c lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 101ab27f push ecx */
  push32((uint32_t)(ECX));
  /* 101ab280 push eax */
  push32((uint32_t)(EAX));
  /* 101ab281 call 0x101a9c60 */
  push32(0x101ab286u); f_101a9c60();
  /* 101ab286 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ab289 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ab28c dec dword ptr [0x101b69c8] */
  { uint32_t _r=(r32((uint32_t)(0x101b69c8)))-1; w32((uint32_t)(0x101b69c8), (_r)); fl_dec(_r,32); }
  /* 101ab292 cmp eax, dword ptr [0x101b69c4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x101b69c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab298 jbe 0x101ab29e */
  if ((C.cf||C.zf)) goto L_101ab29e;
  /* 101ab29a sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_101ab29e:;
  /* 101ab29e mov eax, dword ptr [0x101b69cc] */
  EAX = (r32((uint32_t)(0x101b69cc)));
  /* 101ab2a3 mov dword ptr [0x101b69c0], eax */
  w32((uint32_t)(0x101b69c0), (EAX));
L_101ab2a8:;
  /* 101ab2a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ab2ab mov dword ptr [0x101b69bc], edi */
  w32((uint32_t)(0x101b69bc), (EDI));
  /* 101ab2b1 mov dword ptr [0x101b69c4], eax */
  w32((uint32_t)(0x101b69c4), (EAX));
L_101ab2b6:;
  /* 101ab2b6 pop edi */
  EDI = (pop32());
  /* 101ab2b7 pop esi */
  ESI = (pop32());
  /* 101ab2b8 pop ebx */
  EBX = (pop32());
  /* 101ab2b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101ab2ba ret  */
  ESPCHK(0x101aaf92u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2bb @ 0x101ab2bb (777 bytes, 275 insns) */
void f_101ab2bb(void) {
  FTRACE(0x101ab2bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ab2bb push ebp */
  push32((uint32_t)(EBP));
  /* 101ab2bc mov ebp, esp */
  EBP = (ESP);
  /* 101ab2be sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ab2c1 mov eax, dword ptr [0x101b69c8] */
  EAX = (r32((uint32_t)(0x101b69c8)));
  /* 101ab2c6 mov edx, dword ptr [0x101b69cc] */
  EDX = (r32((uint32_t)(0x101b69cc)));
  /* 101ab2cc push ebx */
  push32((uint32_t)(EBX));
  /* 101ab2cd push esi */
  push32((uint32_t)(ESI));
  /* 101ab2ce lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 101ab2d1 push edi */
  push32((uint32_t)(EDI));
  /* 101ab2d2 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 101ab2d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ab2d8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 101ab2db lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 101ab2de and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 101ab2e1 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 101ab2e4 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 101ab2e7 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101ab2e8 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab2eb jge 0x101ab2fb */
  if ((C.sf==C.of)) goto L_101ab2fb;
  /* 101ab2ed or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 101ab2f0 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 101ab2f2 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 101ab2f6 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 101ab2f9 jmp 0x101ab30b */
  goto L_101ab30b;
L_101ab2fb:;
  /* 101ab2fb add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ab2fe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101ab301 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101ab303 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 101ab305 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 101ab308 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_101ab30b:;
  /* 101ab30b mov eax, dword ptr [0x101b69c0] */
  EAX = (r32((uint32_t)(0x101b69c0)));
  /* 101ab310 mov ebx, eax */
  EBX = (EAX);
  /* 101ab312 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab314 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101ab317 jae 0x101ab332 */
  if (!C.cf) goto L_101ab332;
L_101ab319:;
  /* 101ab319 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 101ab31c mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 101ab31e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 101ab321 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 101ab323 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 101ab325 jne 0x101ab332 */
  if (!C.zf) goto L_101ab332;
  /* 101ab327 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ab32a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab32d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101ab330 jb 0x101ab319 */
  if (C.cf) goto L_101ab319;
L_101ab332:;
  /* 101ab332 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab335 jne 0x101ab3b0 */
  if (!C.zf) goto L_101ab3b0;
  /* 101ab337 mov ebx, edx */
  EBX = (EDX);
L_101ab339:;
  /* 101ab339 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab33b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101ab33e jae 0x101ab355 */
  if (!C.cf) goto L_101ab355;
  /* 101ab340 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 101ab343 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 101ab345 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 101ab348 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 101ab34a or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 101ab34c jne 0x101ab353 */
  if (!C.zf) goto L_101ab353;
  /* 101ab34e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ab351 jmp 0x101ab339 */
  goto L_101ab339;
L_101ab353:;
  /* 101ab353 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_101ab355:;
  /* 101ab355 jne 0x101ab3b0 */
  if (!C.zf) goto L_101ab3b0;
L_101ab357:;
  /* 101ab357 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab35a jae 0x101ab36d */
  if (!C.cf) goto L_101ab36d;
  /* 101ab35c cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab360 jne 0x101ab36a */
  if (!C.zf) goto L_101ab36a;
  /* 101ab362 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ab365 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101ab368 jmp 0x101ab357 */
  goto L_101ab357;
L_101ab36a:;
  /* 101ab36a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_101ab36d:;
  /* 101ab36d jne 0x101ab395 */
  if (!C.zf) goto L_101ab395;
  /* 101ab36f mov ebx, edx */
  EBX = (EDX);
L_101ab371:;
  /* 101ab371 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab373 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101ab376 jae 0x101ab385 */
  if (!C.cf) goto L_101ab385;
  /* 101ab378 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab37c jne 0x101ab383 */
  if (!C.zf) goto L_101ab383;
  /* 101ab37e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ab381 jmp 0x101ab371 */
  goto L_101ab371;
L_101ab383:;
  /* 101ab383 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_101ab385:;
  /* 101ab385 jne 0x101ab395 */
  if (!C.zf) goto L_101ab395;
  /* 101ab387 call 0x101ab5c4 */
  push32(0x101ab38cu); f_101ab5c4();
  /* 101ab38c mov ebx, eax */
  EBX = (EAX);
  /* 101ab38e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101ab390 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101ab393 je 0x101ab3a9 */
  if (C.zf) goto L_101ab3a9;
L_101ab395:;
  /* 101ab395 push ebx */
  push32((uint32_t)(EBX));
  /* 101ab396 call 0x101ab675 */
  push32(0x101ab39bu); f_101ab675();
  /* 101ab39b pop ecx */
  ECX = (pop32());
  /* 101ab39c mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 101ab39f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 101ab3a1 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 101ab3a4 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab3a7 jne 0x101ab3b0 */
  if (!C.zf) goto L_101ab3b0;
L_101ab3a9:;
  /* 101ab3a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ab3ab jmp 0x101ab5bf */
  goto L_101ab5bf;
L_101ab3b0:;
  /* 101ab3b0 mov dword ptr [0x101b69c0], ebx */
  w32((uint32_t)(0x101b69c0), (EBX));
  /* 101ab3b6 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 101ab3b9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 101ab3bb cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab3be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 101ab3c1 je 0x101ab3d7 */
  if (C.zf) goto L_101ab3d7;
  /* 101ab3c3 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 101ab3ca mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 101ab3ce and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 101ab3d1 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 101ab3d3 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 101ab3d5 jne 0x101ab40e */
  if (!C.zf) goto L_101ab40e;
L_101ab3d7:;
  /* 101ab3d7 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 101ab3dd mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 101ab3e0 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 101ab3e3 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 101ab3e6 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101ab3ea lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 101ab3ed or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 101ab3ef mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 101ab3f2 jne 0x101ab40b */
  if (!C.zf) goto L_101ab40b;
L_101ab3f4:;
  /* 101ab3f4 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 101ab3fa inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 101ab3fd and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 101ab400 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ab403 mov edi, esi */
  EDI = (ESI);
  /* 101ab405 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 101ab407 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 101ab409 je 0x101ab3f4 */
  if (C.zf) goto L_101ab3f4;
L_101ab40b:;
  /* 101ab40b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_101ab40e:;
  /* 101ab40e mov ecx, edx */
  ECX = (EDX);
  /* 101ab410 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101ab412 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101ab418 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 101ab41f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 101ab422 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 101ab426 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 101ab428 jne 0x101ab437 */
  if (!C.zf) goto L_101ab437;
  /* 101ab42a mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 101ab431 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101ab433 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 101ab436 pop edi */
  EDI = (pop32());
L_101ab437:;
  /* 101ab437 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101ab439 jl 0x101ab440 */
  if ((C.sf!=C.of)) goto L_101ab440;
  /* 101ab43b shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 101ab43d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101ab43e jmp 0x101ab437 */
  goto L_101ab437;
L_101ab440:;
  /* 101ab440 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 101ab443 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 101ab447 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 101ab449 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ab44c mov esi, ecx */
  ESI = (ECX);
  /* 101ab44e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101ab451 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 101ab454 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101ab455 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab458 jle 0x101ab45d */
  if ((C.zf||C.sf!=C.of)) goto L_101ab45d;
  /* 101ab45a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 101ab45c pop esi */
  ESI = (pop32());
L_101ab45d:;
  /* 101ab45d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab45f je 0x101ab572 */
  if (C.zf) goto L_101ab572;
  /* 101ab465 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 101ab468 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab46b jne 0x101ab4ce */
  if (!C.zf) goto L_101ab4ce;
  /* 101ab46d cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab470 jge 0x101ab49d */
  if ((C.sf==C.of)) goto L_101ab49d;
  /* 101ab472 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 101ab477 mov ecx, edi */
  ECX = (EDI);
  /* 101ab479 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 101ab47b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101ab47e lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 101ab482 not ebx */
  EBX = (~(EBX));
  /* 101ab484 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 101ab487 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 101ab48b mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 101ab48f dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 101ab491 jne 0x101ab4cb */
  if (!C.zf) goto L_101ab4cb;
  /* 101ab493 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ab496 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 101ab499 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 101ab49b jmp 0x101ab4ce */
  goto L_101ab4ce;
L_101ab49d:;
  /* 101ab49d lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 101ab4a0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 101ab4a5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 101ab4a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101ab4aa lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 101ab4ae lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 101ab4b5 not ebx */
  EBX = (~(EBX));
  /* 101ab4b7 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 101ab4b9 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 101ab4bb mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 101ab4be jne 0x101ab4cb */
  if (!C.zf) goto L_101ab4cb;
  /* 101ab4c0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ab4c3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 101ab4c6 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 101ab4c9 jmp 0x101ab4ce */
  goto L_101ab4ce;
L_101ab4cb:;
  /* 101ab4cb mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_101ab4ce:;
  /* 101ab4ce mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 101ab4d1 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 101ab4d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab4d8 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 101ab4db mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 101ab4de mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 101ab4e1 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 101ab4e4 je 0x101ab57e */
  if (C.zf) goto L_101ab57e;
  /* 101ab4ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 101ab4ed mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 101ab4f1 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 101ab4f4 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 101ab4f7 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 101ab4fa mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 101ab4fd mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 101ab500 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 101ab503 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 101ab506 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab509 jne 0x101ab56f */
  if (!C.zf) goto L_101ab56f;
  /* 101ab50b mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 101ab50f cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab512 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 101ab515 jge 0x101ab540 */
  if ((C.sf==C.of)) goto L_101ab540;
  /* 101ab517 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 101ab519 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ab51d mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 101ab521 jne 0x101ab52e */
  if (!C.zf) goto L_101ab52e;
  /* 101ab523 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 101ab528 mov ecx, esi */
  ECX = (ESI);
  /* 101ab52a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 101ab52c or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_101ab52e:;
  /* 101ab52e mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 101ab533 mov ecx, esi */
  ECX = (ESI);
  /* 101ab535 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 101ab537 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101ab53a or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 101ab53e jmp 0x101ab56f */
  goto L_101ab56f;
L_101ab540:;
  /* 101ab540 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 101ab542 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ab546 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 101ab54a jne 0x101ab559 */
  if (!C.zf) goto L_101ab559;
  /* 101ab54c lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 101ab54f mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 101ab554 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 101ab556 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_101ab559:;
  /* 101ab559 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101ab55c lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 101ab563 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 101ab566 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 101ab56b shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 101ab56d or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_101ab56f:;
  /* 101ab56f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_101ab572:;
  /* 101ab572 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101ab574 je 0x101ab581 */
  if (C.zf) goto L_101ab581;
  /* 101ab576 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 101ab578 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 101ab57c jmp 0x101ab581 */
  goto L_101ab581;
L_101ab57e:;
  /* 101ab57e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_101ab581:;
  /* 101ab581 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 101ab584 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ab586 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 101ab589 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 101ab58b mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 101ab58f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 101ab592 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 101ab594 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101ab596 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 101ab599 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 101ab59b jne 0x101ab5b7 */
  if (!C.zf) goto L_101ab5b7;
  /* 101ab59d cmp ebx, dword ptr [0x101b69c4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x101b69c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab5a3 jne 0x101ab5b7 */
  if (!C.zf) goto L_101ab5b7;
  /* 101ab5a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101ab5a8 cmp ecx, dword ptr [0x101b69bc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x101b69bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab5ae jne 0x101ab5b7 */
  if (!C.zf) goto L_101ab5b7;
  /* 101ab5b0 and dword ptr [0x101b69c4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101b69c4)))&(0x0u); w32((uint32_t)(0x101b69c4), (_r)); fl_logic(_r,32); }
L_101ab5b7:;
  /* 101ab5b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101ab5ba mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101ab5bc lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_101ab5bf:;
  /* 101ab5bf pop edi */
  EDI = (pop32());
  /* 101ab5c0 pop esi */
  ESI = (pop32());
  /* 101ab5c1 pop ebx */
  EBX = (pop32());
  /* 101ab5c2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101ab5c3 ret  */
  ESPCHK(0x101ab2bbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5c4 @ 0x101ab5c4 (177 bytes, 53 insns) */
void f_101ab5c4(void) {
  FTRACE(0x101ab5c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ab5c4 mov eax, dword ptr [0x101b69c8] */
  EAX = (r32((uint32_t)(0x101b69c8)));
  /* 101ab5c9 mov ecx, dword ptr [0x101b69b8] */
  ECX = (r32((uint32_t)(0x101b69b8)));
  /* 101ab5cf push esi */
  push32((uint32_t)(ESI));
  /* 101ab5d0 push edi */
  push32((uint32_t)(EDI));
  /* 101ab5d1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101ab5d3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab5d5 jne 0x101ab607 */
  if (!C.zf) goto L_101ab607;
  /* 101ab5d7 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 101ab5db shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 101ab5de push eax */
  push32((uint32_t)(EAX));
  /* 101ab5df push dword ptr [0x101b69cc] */
  push32((uint32_t)(r32((uint32_t)(0x101b69cc))));
  /* 101ab5e5 push edi */
  push32((uint32_t)(EDI));
  /* 101ab5e6 push dword ptr [0x101b7c24] */
  push32((uint32_t)(r32((uint32_t)(0x101b7c24))));
  /* 101ab5ec call dword ptr [0x101ae0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae0ac))), 0x101ab5f2u);
  /* 101ab5f2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab5f4 je 0x101ab657 */
  if (C.zf) goto L_101ab657;
  /* 101ab5f6 add dword ptr [0x101b69b8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x101b69b8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x101b69b8), (_r)); fl_add(_a,_b,_r,32); }
  /* 101ab5fd mov dword ptr [0x101b69cc], eax */
  w32((uint32_t)(0x101b69cc), (EAX));
  /* 101ab602 mov eax, dword ptr [0x101b69c8] */
  EAX = (r32((uint32_t)(0x101b69c8)));
L_101ab607:;
  /* 101ab607 mov ecx, dword ptr [0x101b69cc] */
  ECX = (r32((uint32_t)(0x101b69cc)));
  /* 101ab60d push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 101ab612 push 8 */
  push32((uint32_t)(0x8u));
  /* 101ab614 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 101ab617 push dword ptr [0x101b7c24] */
  push32((uint32_t)(r32((uint32_t)(0x101b7c24))));
  /* 101ab61d lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 101ab620 call dword ptr [0x101ae098] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae098))), 0x101ab626u);
  /* 101ab626 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab628 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 101ab62b je 0x101ab657 */
  if (C.zf) goto L_101ab657;
  /* 101ab62d push 4 */
  push32((uint32_t)(0x4u));
  /* 101ab62f push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 101ab634 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 101ab639 push edi */
  push32((uint32_t)(EDI));
  /* 101ab63a call dword ptr [0x101ae0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae0a8))), 0x101ab640u);
  /* 101ab640 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab642 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 101ab645 jne 0x101ab65b */
  if (!C.zf) goto L_101ab65b;
  /* 101ab647 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 101ab64a push edi */
  push32((uint32_t)(EDI));
  /* 101ab64b push dword ptr [0x101b7c24] */
  push32((uint32_t)(r32((uint32_t)(0x101b7c24))));
  /* 101ab651 call dword ptr [0x101ae080] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae080))), 0x101ab657u);
L_101ab657:;
  /* 101ab657 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ab659 jmp 0x101ab672 */
  goto L_101ab672;
L_101ab65b:;
  /* 101ab65b or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 101ab65f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 101ab661 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 101ab664 inc dword ptr [0x101b69c8] */
  { uint32_t _r=(r32((uint32_t)(0x101b69c8)))+1; w32((uint32_t)(0x101b69c8), (_r)); fl_inc(_r,32); }
  /* 101ab66a mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 101ab66d or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101ab670 mov eax, esi */
  EAX = (ESI);
L_101ab672:;
  /* 101ab672 pop edi */
  EDI = (pop32());
  /* 101ab673 pop esi */
  ESI = (pop32());
  /* 101ab674 ret  */
  ESPCHK(0x101ab5c4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b675 @ 0x101ab675 (251 bytes, 85 insns) */
void f_101ab675(void) {
  FTRACE(0x101ab675u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ab675 push ebp */
  push32((uint32_t)(EBP));
  /* 101ab676 mov ebp, esp */
  EBP = (ESP);
  /* 101ab678 push ecx */
  push32((uint32_t)(ECX));
  /* 101ab679 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ab67c push ebx */
  push32((uint32_t)(EBX));
  /* 101ab67d push esi */
  push32((uint32_t)(ESI));
  /* 101ab67e push edi */
  push32((uint32_t)(EDI));
  /* 101ab67f mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 101ab682 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 101ab685 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_101ab687:;
  /* 101ab687 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ab689 jl 0x101ab690 */
  if ((C.sf!=C.of)) goto L_101ab690;
  /* 101ab68b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 101ab68d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101ab68e jmp 0x101ab687 */
  goto L_101ab687;
L_101ab690:;
  /* 101ab690 mov eax, ebx */
  EAX = (EBX);
  /* 101ab692 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 101ab694 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101ab69a pop edx */
  EDX = (pop32());
  /* 101ab69b lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 101ab6a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_101ab6a5:;
  /* 101ab6a5 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 101ab6a8 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 101ab6ab add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ab6ae dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 101ab6af jne 0x101ab6a5 */
  if (!C.zf) goto L_101ab6a5;
  /* 101ab6b1 mov edi, ebx */
  EDI = (EBX);
  /* 101ab6b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 101ab6b5 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 101ab6b8 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101ab6bb push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 101ab6c0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 101ab6c5 push edi */
  push32((uint32_t)(EDI));
  /* 101ab6c6 call dword ptr [0x101ae0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae0a8))), 0x101ab6ccu);
  /* 101ab6cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ab6ce jne 0x101ab6d8 */
  if (!C.zf) goto L_101ab6d8;
  /* 101ab6d0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101ab6d3 jmp 0x101ab76b */
  goto L_101ab76b;
L_101ab6d8:;
  /* 101ab6d8 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 101ab6de cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab6e0 ja 0x101ab71e */
  if ((!C.cf&&!C.zf)) goto L_101ab71e;
  /* 101ab6e2 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_101ab6e5:;
  /* 101ab6e5 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 101ab6e9 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 101ab6f0 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 101ab6f6 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 101ab6fd mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101ab6ff lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 101ab705 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 101ab708 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 101ab712 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ab717 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 101ab71a cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab71c jbe 0x101ab6e5 */
  if ((C.cf||C.zf)) goto L_101ab6e5;
L_101ab71e:;
  /* 101ab71e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101ab721 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 101ab724 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ab729 push 1 */
  push32((uint32_t)(0x1u));
  /* 101ab72b pop edi */
  EDI = (pop32());
  /* 101ab72c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 101ab72f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 101ab732 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 101ab735 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 101ab738 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 101ab73b and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 101ab740 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 101ab747 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 101ab74a mov cl, al */
  CL = (AL);
  /* 101ab74c inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 101ab74e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101ab750 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ab753 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 101ab756 jne 0x101ab75b */
  if (!C.zf) goto L_101ab75b;
  /* 101ab758 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_101ab75b:;
  /* 101ab75b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 101ab760 mov ecx, ebx */
  ECX = (EBX);
  /* 101ab762 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 101ab764 not edx */
  EDX = (~(EDX));
  /* 101ab766 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 101ab769 mov eax, ebx */
  EAX = (EBX);
L_101ab76b:;
  /* 101ab76b pop edi */
  EDI = (pop32());
  /* 101ab76c pop esi */
  ESI = (pop32());
  /* 101ab76d pop ebx */
  EBX = (pop32());
  /* 101ab76e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101ab76f ret  */
  ESPCHK(0x101ab675u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b770 @ 0x101ab770 (324 bytes, 102 insns) */
void f_101ab770(void) {
  FTRACE(0x101ab770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ab770 cmp dword ptr [0x101b0e70], -1 */
  { uint32_t _a=(r32((uint32_t)(0x101b0e70))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab777 push ebx */
  push32((uint32_t)(EBX));
  /* 101ab778 push ebp */
  push32((uint32_t)(EBP));
  /* 101ab779 push esi */
  push32((uint32_t)(ESI));
  /* 101ab77a push edi */
  push32((uint32_t)(EDI));
  /* 101ab77b jne 0x101ab784 */
  if (!C.zf) goto L_101ab784;
  /* 101ab77d mov esi, 0x101b0e60 */
  ESI = (0x101b0e60u);
  /* 101ab782 jmp 0x101ab7a1 */
  goto L_101ab7a1;
L_101ab784:;
  /* 101ab784 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 101ab789 push 0 */
  push32((uint32_t)(0x0u));
  /* 101ab78b push dword ptr [0x101b7c24] */
  push32((uint32_t)(r32((uint32_t)(0x101b7c24))));
  /* 101ab791 call dword ptr [0x101ae098] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae098))), 0x101ab797u);
  /* 101ab797 mov esi, eax */
  ESI = (EAX);
  /* 101ab799 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101ab79b je 0x101ab8ad */
  if (C.zf) goto L_101ab8ad;
L_101ab7a1:;
  /* 101ab7a1 mov ebp, dword ptr [0x101ae0a8] */
  EBP = (r32((uint32_t)(0x101ae0a8)));
  /* 101ab7a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 101ab7a9 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 101ab7ae push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 101ab7b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 101ab7b5 call ebp */
  call_ind((uint32_t)(EBP), 0x101ab7b7u);
  /* 101ab7b7 mov edi, eax */
  EDI = (EAX);
  /* 101ab7b9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101ab7bb je 0x101ab896 */
  if (C.zf) goto L_101ab896;
  /* 101ab7c1 push 4 */
  push32((uint32_t)(0x4u));
  /* 101ab7c3 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 101ab7c8 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 101ab7cd push ebx */
  push32((uint32_t)(EBX));
  /* 101ab7ce push edi */
  push32((uint32_t)(EDI));
  /* 101ab7cf call ebp */
  call_ind((uint32_t)(EBP), 0x101ab7d1u);
  /* 101ab7d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ab7d3 je 0x101ab888 */
  if (C.zf) goto L_101ab888;
  /* 101ab7d9 mov eax, 0x101b0e60 */
  EAX = (0x101b0e60u);
  /* 101ab7de cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab7e0 jne 0x101ab800 */
  if (!C.zf) goto L_101ab800;
  /* 101ab7e2 cmp dword ptr [0x101b0e60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101b0e60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab7e9 jne 0x101ab7f0 */
  if (!C.zf) goto L_101ab7f0;
  /* 101ab7eb mov dword ptr [0x101b0e60], eax */
  w32((uint32_t)(0x101b0e60), (EAX));
L_101ab7f0:;
  /* 101ab7f0 cmp dword ptr [0x101b0e64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101b0e64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab7f7 jne 0x101ab815 */
  if (!C.zf) goto L_101ab815;
  /* 101ab7f9 mov dword ptr [0x101b0e64], eax */
  w32((uint32_t)(0x101b0e64), (EAX));
  /* 101ab7fe jmp 0x101ab815 */
  goto L_101ab815;
L_101ab800:;
  /* 101ab800 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101ab802 mov eax, dword ptr [0x101b0e64] */
  EAX = (r32((uint32_t)(0x101b0e64)));
  /* 101ab807 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 101ab80a mov dword ptr [0x101b0e64], esi */
  w32((uint32_t)(0x101b0e64), (ESI));
  /* 101ab810 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 101ab813 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_101ab815:;
  /* 101ab815 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 101ab81b lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 101ab821 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 101ab824 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 101ab827 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 101ab82a mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 101ab82d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 101ab830 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 101ab832 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_101ab837:;
  /* 101ab837 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101ab839 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab83c setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 101ab83f dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 101ab840 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101ab842 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 101ab843 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 101ab844 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 101ab846 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 101ab849 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ab84c cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab852 jl 0x101ab837 */
  if ((C.sf!=C.of)) goto L_101ab837;
  /* 101ab854 push ebx */
  push32((uint32_t)(EBX));
  /* 101ab855 push 0 */
  push32((uint32_t)(0x0u));
  /* 101ab857 push edi */
  push32((uint32_t)(EDI));
  /* 101ab858 call 0x101a9c00 */
  push32(0x101ab85du); f_101a9c00();
  /* 101ab85d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101ab860:;
  /* 101ab860 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 101ab863 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ab865 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab867 jae 0x101ab884 */
  if (!C.cf) goto L_101ab884;
  /* 101ab869 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 101ab870 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 101ab873 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 101ab875 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 101ab87c add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101ab882 jmp 0x101ab860 */
  goto L_101ab860;
L_101ab884:;
  /* 101ab884 mov eax, esi */
  EAX = (ESI);
  /* 101ab886 jmp 0x101ab8af */
  goto L_101ab8af;
L_101ab888:;
  /* 101ab888 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 101ab88d push 0 */
  push32((uint32_t)(0x0u));
  /* 101ab88f push edi */
  push32((uint32_t)(EDI));
  /* 101ab890 call dword ptr [0x101ae07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae07c))), 0x101ab896u);
L_101ab896:;
  /* 101ab896 cmp esi, 0x101b0e60 */
  { uint32_t _a=(ESI),_b=(0x101b0e60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab89c je 0x101ab8ad */
  if (C.zf) goto L_101ab8ad;
  /* 101ab89e push esi */
  push32((uint32_t)(ESI));
  /* 101ab89f push 0 */
  push32((uint32_t)(0x0u));
  /* 101ab8a1 push dword ptr [0x101b7c24] */
  push32((uint32_t)(r32((uint32_t)(0x101b7c24))));
  /* 101ab8a7 call dword ptr [0x101ae080] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae080))), 0x101ab8adu);
L_101ab8ad:;
  /* 101ab8ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101ab8af:;
  /* 101ab8af pop edi */
  EDI = (pop32());
  /* 101ab8b0 pop esi */
  ESI = (pop32());
  /* 101ab8b1 pop ebp */
  EBP = (pop32());
  /* 101ab8b2 pop ebx */
  EBX = (pop32());
  /* 101ab8b3 ret  */
  ESPCHK(0x101ab770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8b4 @ 0x101ab8b4 (86 bytes, 27 insns) */
void f_101ab8b4(void) {
  FTRACE(0x101ab8b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ab8b4 push esi */
  push32((uint32_t)(ESI));
  /* 101ab8b5 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101ab8b9 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 101ab8be push 0 */
  push32((uint32_t)(0x0u));
  /* 101ab8c0 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 101ab8c3 call dword ptr [0x101ae07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae07c))), 0x101ab8c9u);
  /* 101ab8c9 cmp dword ptr [0x101b2e80], esi */
  { uint32_t _a=(r32((uint32_t)(0x101b2e80))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab8cf jne 0x101ab8d9 */
  if (!C.zf) goto L_101ab8d9;
  /* 101ab8d1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 101ab8d4 mov dword ptr [0x101b2e80], eax */
  w32((uint32_t)(0x101b2e80), (EAX));
L_101ab8d9:;
  /* 101ab8d9 cmp esi, 0x101b0e60 */
  { uint32_t _a=(ESI),_b=(0x101b0e60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab8df je 0x101ab901 */
  if (C.zf) goto L_101ab901;
  /* 101ab8e1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 101ab8e4 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 101ab8e6 push esi */
  push32((uint32_t)(ESI));
  /* 101ab8e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 101ab8e9 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101ab8eb mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 101ab8ed mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 101ab8f0 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 101ab8f3 push dword ptr [0x101b7c24] */
  push32((uint32_t)(r32((uint32_t)(0x101b7c24))));
  /* 101ab8f9 call dword ptr [0x101ae080] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae080))), 0x101ab8ffu);
  /* 101ab8ff pop esi */
  ESI = (pop32());
  /* 101ab900 ret  */
  ESPCHK(0x101ab8b4u, _esp0);
  ESP += 4; return;
L_101ab901:;
  /* 101ab901 or dword ptr [0x101b0e70], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x101b0e70)))|(0xffffffffu); w32((uint32_t)(0x101b0e70), (_r)); fl_logic(_r,32); }
  /* 101ab908 pop esi */
  ESI = (pop32());
  /* 101ab909 ret  */
  ESPCHK(0x101ab8b4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b90a @ 0x101ab90a (194 bytes, 66 insns) */
void f_101ab90a(void) {
  FTRACE(0x101ab90au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ab90a push ebp */
  push32((uint32_t)(EBP));
  /* 101ab90b mov ebp, esp */
  EBP = (ESP);
  /* 101ab90d push ecx */
  push32((uint32_t)(ECX));
  /* 101ab90e push ebx */
  push32((uint32_t)(EBX));
  /* 101ab90f push esi */
  push32((uint32_t)(ESI));
  /* 101ab910 mov esi, dword ptr [0x101b0e64] */
  ESI = (r32((uint32_t)(0x101b0e64)));
  /* 101ab916 push edi */
  push32((uint32_t)(EDI));
L_101ab917:;
  /* 101ab917 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab91b je 0x101ab9b5 */
  if (C.zf) goto L_101ab9b5;
  /* 101ab921 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101ab925 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 101ab92b mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_101ab930:;
  /* 101ab930 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab936 jne 0x101ab971 */
  if (!C.zf) goto L_101ab971;
  /* 101ab938 mov eax, ebx */
  EAX = (EBX);
  /* 101ab93a push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 101ab93f add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ab942 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 101ab947 push eax */
  push32((uint32_t)(EAX));
  /* 101ab948 call dword ptr [0x101ae07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae07c))), 0x101ab94eu);
  /* 101ab94e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ab950 je 0x101ab971 */
  if (C.zf) goto L_101ab971;
  /* 101ab952 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 101ab955 dec dword ptr [0x101b6814] */
  { uint32_t _r=(r32((uint32_t)(0x101b6814)))-1; w32((uint32_t)(0x101b6814), (_r)); fl_dec(_r,32); }
  /* 101ab95b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 101ab95e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ab960 je 0x101ab966 */
  if (C.zf) goto L_101ab966;
  /* 101ab962 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab964 jbe 0x101ab969 */
  if ((C.cf||C.zf)) goto L_101ab969;
L_101ab966:;
  /* 101ab966 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_101ab969:;
  /* 101ab969 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 101ab96c dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 101ab96f je 0x101ab97e */
  if (C.zf) goto L_101ab97e;
L_101ab971:;
  /* 101ab971 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ab977 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ab97a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101ab97c jge 0x101ab930 */
  if ((C.sf==C.of)) goto L_101ab930;
L_101ab97e:;
  /* 101ab97e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab982 mov ecx, esi */
  ECX = (ESI);
  /* 101ab984 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 101ab987 je 0x101ab9b5 */
  if (C.zf) goto L_101ab9b5;
  /* 101ab989 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab98d jne 0x101ab9b5 */
  if (!C.zf) goto L_101ab9b5;
  /* 101ab98f push 1 */
  push32((uint32_t)(0x1u));
  /* 101ab991 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 101ab994 pop edx */
  EDX = (pop32());
L_101ab995:;
  /* 101ab995 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab998 jne 0x101ab9a6 */
  if (!C.zf) goto L_101ab9a6;
  /* 101ab99a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 101ab99b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ab99e cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab9a4 jl 0x101ab995 */
  if ((C.sf!=C.of)) goto L_101ab995;
L_101ab9a6:;
  /* 101ab9a6 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab9ac jne 0x101ab9b5 */
  if (!C.zf) goto L_101ab9b5;
  /* 101ab9ae push ecx */
  push32((uint32_t)(ECX));
  /* 101ab9af call 0x101ab8b4 */
  push32(0x101ab9b4u); f_101ab8b4();
  /* 101ab9b4 pop ecx */
  ECX = (pop32());
L_101ab9b5:;
  /* 101ab9b5 cmp esi, dword ptr [0x101b0e64] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101b0e64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab9bb je 0x101ab9c7 */
  if (C.zf) goto L_101ab9c7;
  /* 101ab9bd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab9c1 jg 0x101ab917 */
  if ((!C.zf&&C.sf==C.of)) goto L_101ab917;
L_101ab9c7:;
  /* 101ab9c7 pop edi */
  EDI = (pop32());
  /* 101ab9c8 pop esi */
  ESI = (pop32());
  /* 101ab9c9 pop ebx */
  EBX = (pop32());
  /* 101ab9ca leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101ab9cb ret  */
  ESPCHK(0x101ab90au, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9cc @ 0x101ab9cc (87 bytes, 34 insns) */
void f_101ab9cc(void) {
  FTRACE(0x101ab9ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ab9cc mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101ab9d0 mov edx, 0x101b0e60 */
  EDX = (0x101b0e60u);
  /* 101ab9d5 push esi */
  push32((uint32_t)(ESI));
  /* 101ab9d6 mov ecx, edx */
  ECX = (EDX);
L_101ab9d8:;
  /* 101ab9d8 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab9db jbe 0x101ab9e2 */
  if ((C.cf||C.zf)) goto L_101ab9e2;
  /* 101ab9dd cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab9e0 jb 0x101ab9ea */
  if (C.cf) goto L_101ab9ea;
L_101ab9e2:;
  /* 101ab9e2 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 101ab9e4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab9e6 je 0x101aba1f */
  if (C.zf) goto L_101aba1f;
  /* 101ab9e8 jmp 0x101ab9d8 */
  goto L_101ab9d8;
L_101ab9ea:;
  /* 101ab9ea test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 101ab9ec jne 0x101aba1f */
  if (!C.zf) goto L_101aba1f;
  /* 101ab9ee mov esi, eax */
  ESI = (EAX);
  /* 101ab9f0 mov edx, 0x100 */
  EDX = (0x100u);
  /* 101ab9f5 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 101ab9fb cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ab9fd jb 0x101aba1f */
  if (C.cf) goto L_101aba1f;
  /* 101ab9ff mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 101aba03 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 101aba05 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 101aba09 mov ecx, eax */
  ECX = (EAX);
  /* 101aba0b and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 101aba10 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aba12 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 101aba14 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aba16 pop esi */
  ESI = (pop32());
  /* 101aba17 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 101aba1a lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 101aba1e ret  */
  ESPCHK(0x101ab9ccu, _esp0);
  ESP += 4; return;
L_101aba1f:;
  /* 101aba1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101aba21 pop esi */
  ESI = (pop32());
  /* 101aba22 ret  */
  ESPCHK(0x101ab9ccu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba23 @ 0x101aba23 (69 bytes, 19 insns) */
void f_101aba23(void) {
  FTRACE(0x101aba23u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aba23 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101aba27 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 101aba2b sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aba2e sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 101aba31 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 101aba35 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 101aba39 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 101aba3c add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 101aba3e and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 101aba41 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aba47 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 101aba4e jne 0x101aba67 */
  if (!C.zf) goto L_101aba67;
  /* 101aba50 inc dword ptr [0x101b6814] */
  { uint32_t _r=(r32((uint32_t)(0x101b6814)))+1; w32((uint32_t)(0x101b6814), (_r)); fl_inc(_r,32); }
  /* 101aba56 cmp dword ptr [0x101b6814], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x101b6814))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aba5d jne 0x101aba67 */
  if (!C.zf) goto L_101aba67;
  /* 101aba5f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 101aba61 call 0x101ab90a */
  push32(0x101aba66u); f_101ab90a();
  /* 101aba66 pop ecx */
  ECX = (pop32());
L_101aba67:;
  /* 101aba67 ret  */
  ESPCHK(0x101aba23u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba68 @ 0x101aba68 (520 bytes, 180 insns) */
void f_101aba68(void) {
  FTRACE(0x101aba68u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101aba68 push ebp */
  push32((uint32_t)(EBP));
  /* 101aba69 mov ebp, esp */
  EBP = (ESP);
  /* 101aba6b push ecx */
  push32((uint32_t)(ECX));
  /* 101aba6c push ecx */
  push32((uint32_t)(ECX));
  /* 101aba6d push ebx */
  push32((uint32_t)(EBX));
  /* 101aba6e push esi */
  push32((uint32_t)(ESI));
  /* 101aba6f mov esi, dword ptr [0x101b2e80] */
  ESI = (r32((uint32_t)(0x101b2e80)));
  /* 101aba75 push edi */
  push32((uint32_t)(EDI));
L_101aba76:;
  /* 101aba76 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 101aba79 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aba7c je 0x101abb21 */
  if (C.zf) goto L_101abb21;
  /* 101aba82 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 101aba85 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 101aba8b mov eax, edi */
  EAX = (EDI);
  /* 101aba8d sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aba8f sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aba92 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 101aba95 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 101aba98 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101aba9a cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aba9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101aba9f jae 0x101abadb */
  if (!C.cf) goto L_101abadb;
L_101abaa1:;
  /* 101abaa1 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 101abaa3 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 101abaa6 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abaa8 jl 0x101abac4 */
  if ((C.sf!=C.of)) goto L_101abac4;
  /* 101abaaa cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abaad jbe 0x101abac4 */
  if ((C.cf||C.zf)) goto L_101abac4;
  /* 101abaaf push ebx */
  push32((uint32_t)(EBX));
  /* 101abab0 push ecx */
  push32((uint32_t)(ECX));
  /* 101abab1 push eax */
  push32((uint32_t)(EAX));
  /* 101abab2 call 0x101abc70 */
  push32(0x101abab7u); f_101abc70();
  /* 101abab7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ababa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ababc jne 0x101abb33 */
  if (!C.zf) goto L_101abb33;
  /* 101ababe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101abac1 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_101abac4:;
  /* 101abac4 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101abac7 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 101abacd add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101abad2 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abad4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101abad7 jb 0x101abaa1 */
  if (C.cf) goto L_101abaa1;
  /* 101abad9 jmp 0x101abade */
  goto L_101abade;
L_101abadb:;
  /* 101abadb mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_101abade:;
  /* 101abade mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 101abae1 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 101abae4 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 101abae7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 101abaea cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abaec mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 101abaef jae 0x101abb24 */
  if (!C.cf) goto L_101abb24;
L_101abaf1:;
  /* 101abaf1 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 101abaf3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abaf5 jl 0x101abb10 */
  if ((C.sf!=C.of)) goto L_101abb10;
  /* 101abaf7 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abafa jbe 0x101abb10 */
  if ((C.cf||C.zf)) goto L_101abb10;
  /* 101abafc push ebx */
  push32((uint32_t)(EBX));
  /* 101abafd push eax */
  push32((uint32_t)(EAX));
  /* 101abafe push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 101abb01 call 0x101abc70 */
  push32(0x101abb06u); f_101abc70();
  /* 101abb06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101abb09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101abb0b jne 0x101abb33 */
  if (!C.zf) goto L_101abb33;
  /* 101abb0d mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_101abb10:;
  /* 101abb10 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 101abb17 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101abb1a cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abb1d jb 0x101abaf1 */
  if (C.cf) goto L_101abaf1;
  /* 101abb1f jmp 0x101abb24 */
  goto L_101abb24;
L_101abb21:;
  /* 101abb21 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_101abb24:;
  /* 101abb24 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 101abb26 cmp esi, dword ptr [0x101b2e80] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101b2e80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abb2c je 0x101abb43 */
  if (C.zf) goto L_101abb43;
  /* 101abb2e jmp 0x101aba76 */
  goto L_101aba76;
L_101abb33:;
  /* 101abb33 mov dword ptr [0x101b2e80], esi */
  w32((uint32_t)(0x101b2e80), (ESI));
  /* 101abb39 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 101abb3b mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 101abb3e jmp 0x101abc6b */
  goto L_101abc6b;
L_101abb43:;
  /* 101abb43 mov eax, 0x101b0e60 */
  EAX = (0x101b0e60u);
  /* 101abb48 mov edi, eax */
  EDI = (EAX);
L_101abb4a:;
  /* 101abb4a cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abb4e je 0x101abb56 */
  if (C.zf) goto L_101abb56;
  /* 101abb50 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abb54 jne 0x101abb62 */
  if (!C.zf) goto L_101abb62;
L_101abb56:;
  /* 101abb56 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 101abb58 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abb5a je 0x101abc37 */
  if (C.zf) goto L_101abc37;
  /* 101abb60 jmp 0x101abb4a */
  goto L_101abb4a;
L_101abb62:;
  /* 101abb62 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 101abb65 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101abb69 mov esi, ebx */
  ESI = (EBX);
  /* 101abb6b mov eax, ebx */
  EAX = (EBX);
  /* 101abb6d sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101abb6f sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101abb72 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 101abb75 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 101abb78 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101abb7b cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abb7e jne 0x101abb91 */
  if (!C.zf) goto L_101abb91;
L_101abb80:;
  /* 101abb80 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abb84 jge 0x101abb91 */
  if ((C.sf==C.of)) goto L_101abb91;
  /* 101abb86 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101abb89 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 101abb8c cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abb8f je 0x101abb80 */
  if (C.zf) goto L_101abb80;
L_101abb91:;
  /* 101abb91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101abb94 push 4 */
  push32((uint32_t)(0x4u));
  /* 101abb96 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 101abb99 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 101abb9e push eax */
  push32((uint32_t)(EAX));
  /* 101abb9f push esi */
  push32((uint32_t)(ESI));
  /* 101abba0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 101abba3 call dword ptr [0x101ae0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae0a8))), 0x101abba9u);
  /* 101abba9 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abbab jne 0x101abc69 */
  if (!C.zf) goto L_101abc69;
  /* 101abbb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101abbb3 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 101abbb6 push esi */
  push32((uint32_t)(ESI));
  /* 101abbb7 call 0x101a9c00 */
  push32(0x101abbbcu); f_101a9c00();
  /* 101abbbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 101abbbf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101abbc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101abbc4 mov ecx, ebx */
  ECX = (EBX);
  /* 101abbc6 jle 0x101abbf8 */
  if ((C.zf||C.sf!=C.of)) goto L_101abbf8;
  /* 101abbc8 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 101abbcb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_101abbce:;
  /* 101abbce or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 101abbd5 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 101abbd8 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 101abbdb mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 101abbe0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 101abbe2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 101abbe4 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 101abbeb add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101abbf0 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101abbf3 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 101abbf6 jne 0x101abbce */
  if (!C.zf) goto L_101abbce;
L_101abbf8:;
  /* 101abbf8 mov dword ptr [0x101b2e80], edi */
  w32((uint32_t)(0x101b2e80), (EDI));
  /* 101abbfe lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_101abc04:;
  /* 101abc04 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abc06 jae 0x101abc14 */
  if (!C.cf) goto L_101abc14;
  /* 101abc08 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abc0b je 0x101abc12 */
  if (C.zf) goto L_101abc12;
  /* 101abc0d add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101abc10 jmp 0x101abc04 */
  goto L_101abc04;
L_101abc12:;
  /* 101abc12 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_101abc14:;
  /* 101abc14 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101abc16 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 101abc18 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 101abc1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101abc1e mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 101abc21 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 101abc24 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 101abc26 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 101abc29 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 101abc2d lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 101abc33 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 101abc35 jmp 0x101abc6b */
  goto L_101abc6b;
L_101abc37:;
  /* 101abc37 call 0x101ab770 */
  push32(0x101abc3cu); f_101ab770();
  /* 101abc3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101abc3e je 0x101abc69 */
  if (C.zf) goto L_101abc69;
  /* 101abc40 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 101abc43 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 101abc46 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 101abc4a mov dword ptr [0x101b2e80], eax */
  w32((uint32_t)(0x101b2e80), (EAX));
  /* 101abc4f mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 101abc51 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 101abc56 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101abc58 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 101abc5b movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 101abc5e sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 101abc61 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 101abc67 jmp 0x101abc6b */
  goto L_101abc6b;
L_101abc69:;
  /* 101abc69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101abc6b:;
  /* 101abc6b pop edi */
  EDI = (pop32());
  /* 101abc6c pop esi */
  ESI = (pop32());
  /* 101abc6d pop ebx */
  EBX = (pop32());
  /* 101abc6e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101abc6f ret  */
  ESPCHK(0x101aba68u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc70 @ 0x101abc70 (292 bytes, 125 insns) */
void f_101abc70(void) {
  FTRACE(0x101abc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101abc70 push ebp */
  push32((uint32_t)(EBP));
  /* 101abc71 mov ebp, esp */
  EBP = (ESP);
  /* 101abc73 push ecx */
  push32((uint32_t)(ECX));
  /* 101abc74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101abc77 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 101abc7a push ebx */
  push32((uint32_t)(EBX));
  /* 101abc7b push esi */
  push32((uint32_t)(ESI));
  /* 101abc7c mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 101abc7f push edi */
  push32((uint32_t)(EDI));
  /* 101abc80 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 101abc82 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 101abc88 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abc8a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 101abc8d mov eax, edi */
  EAX = (EDI);
  /* 101abc8f mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101abc92 jb 0x101abcb5 */
  if (C.cf) goto L_101abcb5;
  /* 101abc94 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 101abc97 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 101abc99 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abc9b jae 0x101abca4 */
  if (!C.cf) goto L_101abca4;
  /* 101abc9d add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 101abc9f sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 101abca2 jmp 0x101abcad */
  goto L_101abcad;
L_101abca4:;
  /* 101abca4 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 101abca8 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 101abcab mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_101abcad:;
  /* 101abcad lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 101abcb0 jmp 0x101abd83 */
  goto L_101abd83;
L_101abcb5:;
  /* 101abcb5 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101abcb7 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101abcba je 0x101abcbe */
  if (C.zf) goto L_101abcbe;
  /* 101abcbc mov eax, esi */
  EAX = (ESI);
L_101abcbe:;
  /* 101abcbe lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 101abcc1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abcc3 jae 0x101abd08 */
  if (!C.cf) goto L_101abd08;
L_101abcc5:;
  /* 101abcc5 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 101abcc7 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 101abcc9 jne 0x101abcfb */
  if (!C.zf) goto L_101abcfb;
  /* 101abccb push 1 */
  push32((uint32_t)(0x1u));
  /* 101abccd lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 101abcd0 pop esi */
  ESI = (pop32());
L_101abcd1:;
  /* 101abcd1 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101abcd4 jne 0x101abcda */
  if (!C.zf) goto L_101abcda;
  /* 101abcd6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101abcd7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101abcd8 jmp 0x101abcd1 */
  goto L_101abcd1;
L_101abcda:;
  /* 101abcda cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abcdc jae 0x101abd2c */
  if (!C.cf) goto L_101abd2c;
  /* 101abcde cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abce1 jne 0x101abce8 */
  if (!C.zf) goto L_101abce8;
  /* 101abce3 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 101abce6 jmp 0x101abcf4 */
  goto L_101abcf4;
L_101abce8:;
  /* 101abce8 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 101abceb cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abcee jb 0x101abd8d */
  if (C.cf) goto L_101abd8d;
L_101abcf4:;
  /* 101abcf4 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 101abcf7 mov eax, ebx */
  EAX = (EBX);
  /* 101abcf9 jmp 0x101abd00 */
  goto L_101abd00;
L_101abcfb:;
  /* 101abcfb movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 101abcfe add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_101abd00:;
  /* 101abd00 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 101abd03 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abd06 jb 0x101abcc5 */
  if (C.cf) goto L_101abcc5;
L_101abd08:;
  /* 101abd08 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_101abd0b:;
  /* 101abd0b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abd0d jae 0x101abd8d */
  if (!C.cf) goto L_101abd8d;
  /* 101abd0f lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 101abd12 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abd15 jae 0x101abd8d */
  if (!C.cf) goto L_101abd8d;
  /* 101abd17 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101abd19 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101abd1b jne 0x101abd5d */
  if (!C.zf) goto L_101abd5d;
  /* 101abd1d push 1 */
  push32((uint32_t)(0x1u));
  /* 101abd1f lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 101abd22 pop eax */
  EAX = (pop32());
L_101abd23:;
  /* 101abd23 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101abd26 jne 0x101abd4d */
  if (!C.zf) goto L_101abd4d;
  /* 101abd28 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101abd29 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101abd2a jmp 0x101abd23 */
  goto L_101abd23;
L_101abd2c:;
  /* 101abd2c lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 101abd2f cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abd32 jae 0x101abd3d */
  if (!C.cf) goto L_101abd3d;
  /* 101abd34 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101abd36 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 101abd38 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 101abd3b jmp 0x101abd46 */
  goto L_101abd46;
L_101abd3d:;
  /* 101abd3d and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 101abd41 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 101abd44 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_101abd46:;
  /* 101abd46 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 101abd48 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101abd4b jmp 0x101abd83 */
  goto L_101abd83;
L_101abd4d:;
  /* 101abd4d cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abd4f jae 0x101abd64 */
  if (!C.cf) goto L_101abd64;
  /* 101abd51 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 101abd54 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abd57 jb 0x101abd8d */
  if (C.cf) goto L_101abd8d;
  /* 101abd59 mov esi, ebx */
  ESI = (EBX);
  /* 101abd5b jmp 0x101abd0b */
  goto L_101abd0b;
L_101abd5d:;
  /* 101abd5d movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 101abd60 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101abd62 jmp 0x101abd0b */
  goto L_101abd0b;
L_101abd64:;
  /* 101abd64 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 101abd67 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abd6a jae 0x101abd75 */
  if (!C.cf) goto L_101abd75;
  /* 101abd6c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101abd6e mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 101abd70 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 101abd73 jmp 0x101abd7e */
  goto L_101abd7e;
L_101abd75:;
  /* 101abd75 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 101abd79 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 101abd7c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_101abd7e:;
  /* 101abd7e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 101abd80 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_101abd83:;
  /* 101abd83 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101abd86 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 101abd89 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101abd8b jmp 0x101abd8f */
  goto L_101abd8f;
L_101abd8d:;
  /* 101abd8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101abd8f:;
  /* 101abd8f pop edi */
  EDI = (pop32());
  /* 101abd90 pop esi */
  ESI = (pop32());
  /* 101abd91 pop ebx */
  EBX = (pop32());
  /* 101abd92 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101abd93 ret  */
  ESPCHK(0x101abc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd94 @ 0x101abd94 (137 bytes, 50 insns) */
void f_101abd94(void) {
  FTRACE(0x101abd94u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101abd94 push ebx */
  push32((uint32_t)(EBX));
  /* 101abd95 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101abd97 cmp dword ptr [0x101b6818], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101b6818))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abd9d push esi */
  push32((uint32_t)(ESI));
  /* 101abd9e push edi */
  push32((uint32_t)(EDI));
  /* 101abd9f jne 0x101abde3 */
  if (!C.zf) goto L_101abde3;
  /* 101abda1 push 0x101ae548 */
  push32((uint32_t)(0x101ae548u));
  /* 101abda6 call dword ptr [0x101ae0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae0b0))), 0x101abdacu);
  /* 101abdac mov edi, eax */
  EDI = (EAX);
  /* 101abdae cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abdb0 je 0x101abe19 */
  if (C.zf) goto L_101abe19;
  /* 101abdb2 mov esi, dword ptr [0x101ae088] */
  ESI = (r32((uint32_t)(0x101ae088)));
  /* 101abdb8 push 0x101ae53c */
  push32((uint32_t)(0x101ae53cu));
  /* 101abdbd push edi */
  push32((uint32_t)(EDI));
  /* 101abdbe call esi */
  call_ind((uint32_t)(ESI), 0x101abdc0u);
  /* 101abdc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101abdc2 mov dword ptr [0x101b6818], eax */
  w32((uint32_t)(0x101b6818), (EAX));
  /* 101abdc7 je 0x101abe19 */
  if (C.zf) goto L_101abe19;
  /* 101abdc9 push 0x101ae52c */
  push32((uint32_t)(0x101ae52cu));
  /* 101abdce push edi */
  push32((uint32_t)(EDI));
  /* 101abdcf call esi */
  call_ind((uint32_t)(ESI), 0x101abdd1u);
  /* 101abdd1 push 0x101ae518 */
  push32((uint32_t)(0x101ae518u));
  /* 101abdd6 push edi */
  push32((uint32_t)(EDI));
  /* 101abdd7 mov dword ptr [0x101b681c], eax */
  w32((uint32_t)(0x101b681c), (EAX));
  /* 101abddc call esi */
  call_ind((uint32_t)(ESI), 0x101abddeu);
  /* 101abdde mov dword ptr [0x101b6820], eax */
  w32((uint32_t)(0x101b6820), (EAX));
L_101abde3:;
  /* 101abde3 mov eax, dword ptr [0x101b681c] */
  EAX = (r32((uint32_t)(0x101b681c)));
  /* 101abde8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101abdea je 0x101abe02 */
  if (C.zf) goto L_101abe02;
  /* 101abdec call eax */
  call_ind((uint32_t)(EAX), 0x101abdeeu);
  /* 101abdee mov ebx, eax */
  EBX = (EAX);
  /* 101abdf0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101abdf2 je 0x101abe02 */
  if (C.zf) goto L_101abe02;
  /* 101abdf4 mov eax, dword ptr [0x101b6820] */
  EAX = (r32((uint32_t)(0x101b6820)));
  /* 101abdf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101abdfb je 0x101abe02 */
  if (C.zf) goto L_101abe02;
  /* 101abdfd push ebx */
  push32((uint32_t)(EBX));
  /* 101abdfe call eax */
  call_ind((uint32_t)(EAX), 0x101abe00u);
  /* 101abe00 mov ebx, eax */
  EBX = (EAX);
L_101abe02:;
  /* 101abe02 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101abe06 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101abe0a push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101abe0e push ebx */
  push32((uint32_t)(EBX));
  /* 101abe0f call dword ptr [0x101b6818] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6818))), 0x101abe15u);
L_101abe15:;
  /* 101abe15 pop edi */
  EDI = (pop32());
  /* 101abe16 pop esi */
  ESI = (pop32());
  /* 101abe17 pop ebx */
  EBX = (pop32());
  /* 101abe18 ret  */
  ESPCHK(0x101abd94u, _esp0);
  ESP += 4; return;
L_101abe19:;
  /* 101abe19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101abe1b jmp 0x101abe15 */
  goto L_101abe15;
}

/* _strncpy @ 0x101abe20 (254 bytes, 109 insns) */
void f_101abe20(void) {
  FTRACE(0x101abe20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101abe20 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 101abe24 push edi */
  push32((uint32_t)(EDI));
  /* 101abe25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101abe27 je 0x101abea3 */
  if (C.zf) goto L_101abea3;
  /* 101abe29 push esi */
  push32((uint32_t)(ESI));
  /* 101abe2a push ebx */
  push32((uint32_t)(EBX));
  /* 101abe2b mov ebx, ecx */
  EBX = (ECX);
  /* 101abe2d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 101abe31 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 101abe37 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 101abe3b jne 0x101abe44 */
  if (!C.zf) goto L_101abe44;
  /* 101abe3d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101abe40 jne 0x101abeb1 */
  if (!C.zf) goto L_101abeb1;
  /* 101abe42 jmp 0x101abe65 */
  goto L_101abe65;
L_101abe44:;
  /* 101abe44 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101abe46 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101abe47 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101abe49 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101abe4a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101abe4b je 0x101abe72 */
  if (C.zf) goto L_101abe72;
  /* 101abe4d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101abe4f je 0x101abe7a */
  if (C.zf) goto L_101abe7a;
  /* 101abe51 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 101abe57 jne 0x101abe44 */
  if (!C.zf) goto L_101abe44;
  /* 101abe59 mov ebx, ecx */
  EBX = (ECX);
  /* 101abe5b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101abe5e jne 0x101abeb1 */
  if (!C.zf) goto L_101abeb1;
L_101abe60:;
  /* 101abe60 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 101abe63 je 0x101abe72 */
  if (C.zf) goto L_101abe72;
L_101abe65:;
  /* 101abe65 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101abe67 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101abe68 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101abe6a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101abe6b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101abe6d je 0x101abe9e */
  if (C.zf) goto L_101abe9e;
  /* 101abe6f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101abe70 jne 0x101abe65 */
  if (!C.zf) goto L_101abe65;
L_101abe72:;
  /* 101abe72 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101abe76 pop ebx */
  EBX = (pop32());
  /* 101abe77 pop esi */
  ESI = (pop32());
  /* 101abe78 pop edi */
  EDI = (pop32());
  /* 101abe79 ret  */
  ESPCHK(0x101abe20u, _esp0);
  ESP += 4; return;
L_101abe7a:;
  /* 101abe7a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 101abe80 je 0x101abe94 */
  if (C.zf) goto L_101abe94;
L_101abe82:;
  /* 101abe82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101abe84 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101abe85 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101abe86 je 0x101abf16 */
  if (C.zf) goto L_101abf16;
  /* 101abe8c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 101abe92 jne 0x101abe82 */
  if (!C.zf) goto L_101abe82;
L_101abe94:;
  /* 101abe94 mov ebx, ecx */
  EBX = (ECX);
  /* 101abe96 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101abe99 jne 0x101abf07 */
  if (!C.zf) goto L_101abf07;
L_101abe9b:;
  /* 101abe9b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101abe9d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_101abe9e:;
  /* 101abe9e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101abe9f jne 0x101abe9b */
  if (!C.zf) goto L_101abe9b;
  /* 101abea1 pop ebx */
  EBX = (pop32());
  /* 101abea2 pop esi */
  ESI = (pop32());
L_101abea3:;
  /* 101abea3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101abea7 pop edi */
  EDI = (pop32());
  /* 101abea8 ret  */
  ESPCHK(0x101abe20u, _esp0);
  ESP += 4; return;
L_101abea9:;
  /* 101abea9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 101abeab add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101abeae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101abeaf je 0x101abe60 */
  if (C.zf) goto L_101abe60;
L_101abeb1:;
  /* 101abeb1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 101abeb6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 101abeb8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101abeba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101abebd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 101abebf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 101abec1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101abec4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 101abec9 je 0x101abea9 */
  if (C.zf) goto L_101abea9;
  /* 101abecb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101abecd je 0x101abefb */
  if (C.zf) goto L_101abefb;
  /* 101abecf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 101abed1 je 0x101abef1 */
  if (C.zf) goto L_101abef1;
  /* 101abed3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 101abed9 je 0x101abee7 */
  if (C.zf) goto L_101abee7;
  /* 101abedb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 101abee1 jne 0x101abea9 */
  if (!C.zf) goto L_101abea9;
  /* 101abee3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 101abee5 jmp 0x101abeff */
  goto L_101abeff;
L_101abee7:;
  /* 101abee7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 101abeed mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 101abeef jmp 0x101abeff */
  goto L_101abeff;
L_101abef1:;
  /* 101abef1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 101abef7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 101abef9 jmp 0x101abeff */
  goto L_101abeff;
L_101abefb:;
  /* 101abefb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101abefd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_101abeff:;
  /* 101abeff add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101abf02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101abf04 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101abf05 je 0x101abf11 */
  if (C.zf) goto L_101abf11;
L_101abf07:;
  /* 101abf07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101abf09:;
  /* 101abf09 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 101abf0b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101abf0e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101abf0f jne 0x101abf09 */
  if (!C.zf) goto L_101abf09;
L_101abf11:;
  /* 101abf11 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 101abf14 jne 0x101abe9b */
  if (!C.zf) goto L_101abe9b;
L_101abf16:;
  /* 101abf16 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101abf1a pop ebx */
  EBX = (pop32());
  /* 101abf1b pop esi */
  ESI = (pop32());
  /* 101abf1c pop edi */
  EDI = (pop32());
  /* 101abf1d ret  */
  ESPCHK(0x101abe20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf1e @ 0x101abf1e (115 bytes, 37 insns) */
void f_101abf1e(void) {
  FTRACE(0x101abf1eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101abf1e push esi */
  push32((uint32_t)(ESI));
  /* 101abf1f call 0x101abf9a */
  push32(0x101abf24u); f_101abf9a();
  /* 101abf24 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 101abf28 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101abf2a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101abf2c mov eax, 0x101b2e90 */
  EAX = (0x101b2e90u);
L_101abf31:;
  /* 101abf31 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abf33 je 0x101abf57 */
  if (C.zf) goto L_101abf57;
  /* 101abf35 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101abf38 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101abf39 cmp eax, 0x101b2ff8 */
  { uint32_t _a=(EAX),_b=(0x101b2ff8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abf3e jl 0x101abf31 */
  if ((C.sf!=C.of)) goto L_101abf31;
  /* 101abf40 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abf43 jb 0x101abf67 */
  if (C.cf) goto L_101abf67;
  /* 101abf45 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abf48 ja 0x101abf67 */
  if ((!C.cf&&!C.zf)) goto L_101abf67;
  /* 101abf4a call 0x101abf91 */
  push32(0x101abf4fu); f_101abf91();
  /* 101abf4f mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 101abf55 pop esi */
  ESI = (pop32());
  /* 101abf56 ret  */
  ESPCHK(0x101abf1eu, _esp0);
  ESP += 4; return;
L_101abf57:;
  /* 101abf57 call 0x101abf91 */
  push32(0x101abf5cu); f_101abf91();
  /* 101abf5c mov ecx, dword ptr [esi*8 + 0x101b2e94] */
  ECX = (r32((uint32_t)(ESI*8 + 0x101b2e94)));
  /* 101abf63 pop esi */
  ESI = (pop32());
  /* 101abf64 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101abf66 ret  */
  ESPCHK(0x101abf1eu, _esp0);
  ESP += 4; return;
L_101abf67:;
  /* 101abf67 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abf6d jb 0x101abf84 */
  if (C.cf) goto L_101abf84;
  /* 101abf6f cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abf75 ja 0x101abf84 */
  if ((!C.cf&&!C.zf)) goto L_101abf84;
  /* 101abf77 call 0x101abf91 */
  push32(0x101abf7cu); f_101abf91();
  /* 101abf7c mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 101abf82 pop esi */
  ESI = (pop32());
  /* 101abf83 ret  */
  ESPCHK(0x101abf1eu, _esp0);
  ESP += 4; return;
L_101abf84:;
  /* 101abf84 call 0x101abf91 */
  push32(0x101abf89u); f_101abf91();
  /* 101abf89 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 101abf8f pop esi */
  ESI = (pop32());
  /* 101abf90 ret  */
  ESPCHK(0x101abf1eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf91 @ 0x101abf91 (9 bytes, 3 insns) */
void f_101abf91(void) {
  FTRACE(0x101abf91u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101abf91 call 0x101a8068 */
  push32(0x101abf96u); f_101a8068();
  /* 101abf96 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101abf99 ret  */
  ESPCHK(0x101abf91u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf9a @ 0x101abf9a (9 bytes, 3 insns) */
void f_101abf9a(void) {
  FTRACE(0x101abf9au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101abf9a call 0x101a8068 */
  push32(0x101abf9fu); f_101a8068();
  /* 101abf9f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101abfa2 ret  */
  ESPCHK(0x101abf9au, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfa3 @ 0x101abfa3 (127 bytes, 48 insns) */
void f_101abfa3(void) {
  FTRACE(0x101abfa3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101abfa3 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101abfa7 push esi */
  push32((uint32_t)(ESI));
  /* 101abfa8 cmp ecx, dword ptr [0x101b7d40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x101b7d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abfae push edi */
  push32((uint32_t)(EDI));
  /* 101abfaf jae 0x101ac009 */
  if (!C.cf) goto L_101ac009;
  /* 101abfb1 mov eax, ecx */
  EAX = (ECX);
  /* 101abfb3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 101abfb6 lea edi, [eax*4 + 0x101b7c40] */
  EDI = ((uint32_t)(EAX*4 + 0x101b7c40));
  /* 101abfbd mov eax, ecx */
  EAX = (ECX);
  /* 101abfbf and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101abfc2 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 101abfc5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 101abfc7 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 101abfca add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101abfcc test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 101abfd0 je 0x101ac009 */
  if (C.zf) goto L_101ac009;
  /* 101abfd2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abfd5 je 0x101ac009 */
  if (C.zf) goto L_101ac009;
  /* 101abfd7 cmp dword ptr [0x101b6654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101b6654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101abfde jne 0x101abfff */
  if (!C.zf) goto L_101abfff;
  /* 101abfe0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101abfe2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101abfe4 je 0x101abff6 */
  if (C.zf) goto L_101abff6;
  /* 101abfe6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101abfe7 je 0x101abff1 */
  if (C.zf) goto L_101abff1;
  /* 101abfe9 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101abfea jne 0x101abfff */
  if (!C.zf) goto L_101abfff;
  /* 101abfec push eax */
  push32((uint32_t)(EAX));
  /* 101abfed push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 101abfef jmp 0x101abff9 */
  goto L_101abff9;
L_101abff1:;
  /* 101abff1 push eax */
  push32((uint32_t)(EAX));
  /* 101abff2 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 101abff4 jmp 0x101abff9 */
  goto L_101abff9;
L_101abff6:;
  /* 101abff6 push eax */
  push32((uint32_t)(EAX));
  /* 101abff7 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_101abff9:;
  /* 101abff9 call dword ptr [0x101ae0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae0b4))), 0x101abfffu);
L_101abfff:;
  /* 101abfff mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 101ac001 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 101ac005 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ac007 jmp 0x101ac01f */
  goto L_101ac01f;
L_101ac009:;
  /* 101ac009 call 0x101abf91 */
  push32(0x101ac00eu); f_101abf91();
  /* 101ac00e mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101ac014 call 0x101abf9a */
  push32(0x101ac019u); f_101abf9a();
  /* 101ac019 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101ac01c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_101ac01f:;
  /* 101ac01f pop edi */
  EDI = (pop32());
  /* 101ac020 pop esi */
  ESI = (pop32());
  /* 101ac021 ret  */
  ESPCHK(0x101abfa3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c022 @ 0x101ac022 (66 bytes, 19 insns) */
void f_101ac022(void) {
  FTRACE(0x101ac022u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ac022 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101ac026 cmp eax, dword ptr [0x101b7d40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x101b7d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac02c jae 0x101ac04d */
  if (!C.cf) goto L_101ac04d;
  /* 101ac02e mov ecx, eax */
  ECX = (EAX);
  /* 101ac030 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101ac033 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101ac036 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101ac039 mov ecx, dword ptr [ecx*4 + 0x101b7c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101b7c40)));
  /* 101ac040 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 101ac045 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 101ac048 je 0x101ac04d */
  if (C.zf) goto L_101ac04d;
  /* 101ac04a mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 101ac04c ret  */
  ESPCHK(0x101ac022u, _esp0);
  ESP += 4; return;
L_101ac04d:;
  /* 101ac04d call 0x101abf91 */
  push32(0x101ac052u); f_101abf91();
  /* 101ac052 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101ac058 call 0x101abf9a */
  push32(0x101ac05du); f_101abf9a();
  /* 101ac05d and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101ac060 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101ac063 ret  */
  ESPCHK(0x101ac022u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c064 @ 0x101ac064 (95 bytes, 34 insns) */
void f_101ac064(void) {
  FTRACE(0x101ac064u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ac064 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101ac068 push ebx */
  push32((uint32_t)(EBX));
  /* 101ac069 mov ecx, eax */
  ECX = (EAX);
  /* 101ac06b and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101ac06e sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101ac071 push esi */
  push32((uint32_t)(ESI));
  /* 101ac072 push edi */
  push32((uint32_t)(EDI));
  /* 101ac073 mov esi, dword ptr [ecx*4 + 0x101b7c40] */
  ESI = (r32((uint32_t)(ECX*4 + 0x101b7c40)));
  /* 101ac07a lea ebx, [ecx*4 + 0x101b7c40] */
  EBX = ((uint32_t)(ECX*4 + 0x101b7c40));
  /* 101ac081 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 101ac084 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 101ac087 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101ac089 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac08d jne 0x101ac0b2 */
  if (!C.zf) goto L_101ac0b2;
  /* 101ac08f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 101ac091 call 0x101aa033 */
  push32(0x101ac096u); f_101aa033();
  /* 101ac096 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac09a pop ecx */
  ECX = (pop32());
  /* 101ac09b jne 0x101ac0aa */
  if (!C.zf) goto L_101ac0aa;
  /* 101ac09d lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 101ac0a0 push eax */
  push32((uint32_t)(EAX));
  /* 101ac0a1 call dword ptr [0x101ae094] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae094))), 0x101ac0a7u);
  /* 101ac0a7 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_101ac0aa:;
  /* 101ac0aa push 0x11 */
  push32((uint32_t)(0x11u));
  /* 101ac0ac call 0x101aa094 */
  push32(0x101ac0b1u); f_101aa094();
  /* 101ac0b1 pop ecx */
  ECX = (pop32());
L_101ac0b2:;
  /* 101ac0b2 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 101ac0b4 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 101ac0b8 push eax */
  push32((uint32_t)(EAX));
  /* 101ac0b9 call dword ptr [0x101ae00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae00c))), 0x101ac0bfu);
  /* 101ac0bf pop edi */
  EDI = (pop32());
  /* 101ac0c0 pop esi */
  ESI = (pop32());
  /* 101ac0c1 pop ebx */
  EBX = (pop32());
  /* 101ac0c2 ret  */
  ESPCHK(0x101ac064u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0c3 @ 0x101ac0c3 (34 bytes, 10 insns) */
void f_101ac0c3(void) {
  FTRACE(0x101ac0c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ac0c3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101ac0c7 mov ecx, eax */
  ECX = (EAX);
  /* 101ac0c9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101ac0cc sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101ac0cf lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101ac0d2 mov ecx, dword ptr [ecx*4 + 0x101b7c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101b7c40)));
  /* 101ac0d9 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 101ac0dd push eax */
  push32((uint32_t)(EAX));
  /* 101ac0de call dword ptr [0x101ae008] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae008))), 0x101ac0e4u);
  /* 101ac0e4 ret  */
  ESPCHK(0x101ac0c3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c166 @ 0x101ac166 (46 bytes, 22 insns) */
void f_101ac166(void) {
  FTRACE(0x101ac166u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ac166 push esi */
  push32((uint32_t)(ESI));
  /* 101ac167 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101ac16b push esi */
  push32((uint32_t)(ESI));
  /* 101ac16c call 0x101ac194 */
  push32(0x101ac171u); f_101ac194();
  /* 101ac171 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ac173 pop ecx */
  ECX = (pop32());
  /* 101ac174 je 0x101ac17b */
  if (C.zf) goto L_101ac17b;
  /* 101ac176 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101ac179 pop esi */
  ESI = (pop32());
  /* 101ac17a ret  */
  ESPCHK(0x101ac166u, _esp0);
  ESP += 4; return;
L_101ac17b:;
  /* 101ac17b test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 101ac17f je 0x101ac190 */
  if (C.zf) goto L_101ac190;
  /* 101ac181 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 101ac184 call 0x101ad2e0 */
  push32(0x101ac189u); f_101ad2e0();
  /* 101ac189 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101ac18b pop ecx */
  ECX = (pop32());
  /* 101ac18c pop esi */
  ESI = (pop32());
  /* 101ac18d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ac18f ret  */
  ESPCHK(0x101ac166u, _esp0);
  ESP += 4; return;
L_101ac190:;
  /* 101ac190 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ac192 pop esi */
  ESI = (pop32());
  /* 101ac193 ret  */
  ESPCHK(0x101ac166u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c194 @ 0x101ac194 (92 bytes, 40 insns) */
void f_101ac194(void) {
  FTRACE(0x101ac194u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ac194 push ebx */
  push32((uint32_t)(EBX));
  /* 101ac195 push esi */
  push32((uint32_t)(ESI));
  /* 101ac196 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 101ac19a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101ac19c push edi */
  push32((uint32_t)(EDI));
  /* 101ac19d mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 101ac1a0 mov ecx, eax */
  ECX = (EAX);
  /* 101ac1a2 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 101ac1a5 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac1a8 jne 0x101ac1e1 */
  if (!C.zf) goto L_101ac1e1;
  /* 101ac1aa test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 101ac1ae je 0x101ac1e1 */
  if (C.zf) goto L_101ac1e1;
  /* 101ac1b0 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 101ac1b3 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 101ac1b5 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ac1b7 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101ac1b9 jle 0x101ac1e1 */
  if ((C.zf||C.sf!=C.of)) goto L_101ac1e1;
  /* 101ac1bb push edi */
  push32((uint32_t)(EDI));
  /* 101ac1bc push eax */
  push32((uint32_t)(EAX));
  /* 101ac1bd push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 101ac1c0 call 0x101a8c95 */
  push32(0x101ac1c5u); f_101a8c95();
  /* 101ac1c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ac1c8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac1ca jne 0x101ac1da */
  if (!C.zf) goto L_101ac1da;
  /* 101ac1cc mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 101ac1cf test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 101ac1d1 je 0x101ac1e1 */
  if (C.zf) goto L_101ac1e1;
  /* 101ac1d3 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 101ac1d5 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 101ac1d8 jmp 0x101ac1e1 */
  goto L_101ac1e1;
L_101ac1da:;
  /* 101ac1da or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 101ac1de or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_101ac1e1:;
  /* 101ac1e1 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 101ac1e4 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 101ac1e8 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101ac1ea pop edi */
  EDI = (pop32());
  /* 101ac1eb mov eax, ebx */
  EAX = (EBX);
  /* 101ac1ed pop esi */
  ESI = (pop32());
  /* 101ac1ee pop ebx */
  EBX = (pop32());
  /* 101ac1ef ret  */
  ESPCHK(0x101ac194u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1f9 @ 0x101ac1f9 (164 bytes, 66 insns) */
void f_101ac1f9(void) {
  FTRACE(0x101ac1f9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ac1f9 push ebx */
  push32((uint32_t)(EBX));
  /* 101ac1fa push esi */
  push32((uint32_t)(ESI));
  /* 101ac1fb push edi */
  push32((uint32_t)(EDI));
  /* 101ac1fc push 2 */
  push32((uint32_t)(0x2u));
  /* 101ac1fe xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101ac200 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101ac202 call 0x101aa033 */
  push32(0x101ac207u); f_101aa033();
  /* 101ac207 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101ac209 pop ecx */
  ECX = (pop32());
  /* 101ac20a cmp dword ptr [0x101b7c20], esi */
  { uint32_t _a=(r32((uint32_t)(0x101b7c20))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac210 jle 0x101ac286 */
  if ((C.zf||C.sf!=C.of)) goto L_101ac286;
L_101ac212:;
  /* 101ac212 mov eax, dword ptr [0x101b6c08] */
  EAX = (r32((uint32_t)(0x101b6c08)));
  /* 101ac217 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 101ac21a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ac21c je 0x101ac27d */
  if (C.zf) goto L_101ac27d;
  /* 101ac21e test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 101ac222 je 0x101ac27d */
  if (C.zf) goto L_101ac27d;
  /* 101ac224 push eax */
  push32((uint32_t)(EAX));
  /* 101ac225 push esi */
  push32((uint32_t)(ESI));
  /* 101ac226 call 0x101a8fdd */
  push32(0x101ac22bu); f_101a8fdd();
  /* 101ac22b mov eax, dword ptr [0x101b6c08] */
  EAX = (r32((uint32_t)(0x101b6c08)));
  /* 101ac230 pop ecx */
  ECX = (pop32());
  /* 101ac231 pop ecx */
  ECX = (pop32());
  /* 101ac232 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 101ac235 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 101ac238 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 101ac23b je 0x101ac26d */
  if (C.zf) goto L_101ac26d;
  /* 101ac23d cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac242 jne 0x101ac253 */
  if (!C.zf) goto L_101ac253;
  /* 101ac244 push eax */
  push32((uint32_t)(EAX));
  /* 101ac245 call 0x101ac166 */
  push32(0x101ac24au); f_101ac166();
  /* 101ac24a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac24d pop ecx */
  ECX = (pop32());
  /* 101ac24e je 0x101ac26d */
  if (C.zf) goto L_101ac26d;
  /* 101ac250 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101ac251 jmp 0x101ac26d */
  goto L_101ac26d;
L_101ac253:;
  /* 101ac253 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac258 jne 0x101ac26d */
  if (!C.zf) goto L_101ac26d;
  /* 101ac25a test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 101ac25d je 0x101ac26d */
  if (C.zf) goto L_101ac26d;
  /* 101ac25f push eax */
  push32((uint32_t)(EAX));
  /* 101ac260 call 0x101ac166 */
  push32(0x101ac265u); f_101ac166();
  /* 101ac265 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac268 pop ecx */
  ECX = (pop32());
  /* 101ac269 jne 0x101ac26d */
  if (!C.zf) goto L_101ac26d;
  /* 101ac26b or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_101ac26d:;
  /* 101ac26d mov eax, dword ptr [0x101b6c08] */
  EAX = (r32((uint32_t)(0x101b6c08)));
  /* 101ac272 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 101ac275 push esi */
  push32((uint32_t)(ESI));
  /* 101ac276 call 0x101a902f */
  push32(0x101ac27bu); f_101a902f();
  /* 101ac27b pop ecx */
  ECX = (pop32());
  /* 101ac27c pop ecx */
  ECX = (pop32());
L_101ac27d:;
  /* 101ac27d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101ac27e cmp esi, dword ptr [0x101b7c20] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101b7c20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac284 jl 0x101ac212 */
  if ((C.sf!=C.of)) goto L_101ac212;
L_101ac286:;
  /* 101ac286 push 2 */
  push32((uint32_t)(0x2u));
  /* 101ac288 call 0x101aa094 */
  push32(0x101ac28du); f_101aa094();
  /* 101ac28d cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac292 pop ecx */
  ECX = (pop32());
  /* 101ac293 mov eax, ebx */
  EAX = (EBX);
  /* 101ac295 je 0x101ac299 */
  if (C.zf) goto L_101ac299;
  /* 101ac297 mov eax, edi */
  EAX = (EDI);
L_101ac299:;
  /* 101ac299 pop edi */
  EDI = (pop32());
  /* 101ac29a pop esi */
  ESI = (pop32());
  /* 101ac29b pop ebx */
  EBX = (pop32());
  /* 101ac29c ret  */
  ESPCHK(0x101ac1f9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c29d @ 0x101ac29d (318 bytes, 123 insns) */
void f_101ac29d(void) {
  FTRACE(0x101ac29du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ac29d push ebp */
  push32((uint32_t)(EBP));
  /* 101ac29e mov ebp, esp */
  EBP = (ESP);
  /* 101ac2a0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 101ac2a2 push 0x101ae560 */
  push32((uint32_t)(0x101ae560u));
  /* 101ac2a7 push 0x101ad050 */
  push32((uint32_t)(0x101ad050u));
  /* 101ac2ac mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 101ac2b2 push eax */
  push32((uint32_t)(EAX));
  /* 101ac2b3 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 101ac2ba sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ac2bd push ebx */
  push32((uint32_t)(EBX));
  /* 101ac2be push esi */
  push32((uint32_t)(ESI));
  /* 101ac2bf push edi */
  push32((uint32_t)(EDI));
  /* 101ac2c0 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 101ac2c3 mov eax, dword ptr [0x101b6864] */
  EAX = (r32((uint32_t)(0x101b6864)));
  /* 101ac2c8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101ac2ca cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac2cc jne 0x101ac30c */
  if (!C.zf) goto L_101ac30c;
  /* 101ac2ce lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 101ac2d1 push eax */
  push32((uint32_t)(EAX));
  /* 101ac2d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 101ac2d4 pop esi */
  ESI = (pop32());
  /* 101ac2d5 push esi */
  push32((uint32_t)(ESI));
  /* 101ac2d6 push 0x101ae558 */
  push32((uint32_t)(0x101ae558u));
  /* 101ac2db push esi */
  push32((uint32_t)(ESI));
  /* 101ac2dc call dword ptr [0x101ae0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae0c0))), 0x101ac2e2u);
  /* 101ac2e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ac2e4 je 0x101ac2ea */
  if (C.zf) goto L_101ac2ea;
  /* 101ac2e6 mov eax, esi */
  EAX = (ESI);
  /* 101ac2e8 jmp 0x101ac307 */
  goto L_101ac307;
L_101ac2ea:;
  /* 101ac2ea lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 101ac2ed push eax */
  push32((uint32_t)(EAX));
  /* 101ac2ee push esi */
  push32((uint32_t)(ESI));
  /* 101ac2ef push 0x101ae554 */
  push32((uint32_t)(0x101ae554u));
  /* 101ac2f4 push esi */
  push32((uint32_t)(ESI));
  /* 101ac2f5 push ebx */
  push32((uint32_t)(EBX));
  /* 101ac2f6 call dword ptr [0x101ae0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae0bc))), 0x101ac2fcu);
  /* 101ac2fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ac2fe je 0x101ac3d2 */
  if (C.zf) goto L_101ac3d2;
  /* 101ac304 push 2 */
  push32((uint32_t)(0x2u));
  /* 101ac306 pop eax */
  EAX = (pop32());
L_101ac307:;
  /* 101ac307 mov dword ptr [0x101b6864], eax */
  w32((uint32_t)(0x101b6864), (EAX));
L_101ac30c:;
  /* 101ac30c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac30f jne 0x101ac335 */
  if (!C.zf) goto L_101ac335;
  /* 101ac311 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 101ac314 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac316 jne 0x101ac31d */
  if (!C.zf) goto L_101ac31d;
  /* 101ac318 mov eax, dword ptr [0x101b6838] */
  EAX = (r32((uint32_t)(0x101b6838)));
L_101ac31d:;
  /* 101ac31d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101ac320 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101ac323 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101ac326 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101ac329 push eax */
  push32((uint32_t)(EAX));
  /* 101ac32a call dword ptr [0x101ae0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae0bc))), 0x101ac330u);
  /* 101ac330 jmp 0x101ac3d4 */
  goto L_101ac3d4;
L_101ac335:;
  /* 101ac335 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac338 jne 0x101ac3d2 */
  if (!C.zf) goto L_101ac3d2;
  /* 101ac33e cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac341 jne 0x101ac34b */
  if (!C.zf) goto L_101ac34b;
  /* 101ac343 mov eax, dword ptr [0x101b6848] */
  EAX = (r32((uint32_t)(0x101b6848)));
  /* 101ac348 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_101ac34b:;
  /* 101ac34b push ebx */
  push32((uint32_t)(EBX));
  /* 101ac34c push ebx */
  push32((uint32_t)(EBX));
  /* 101ac34d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101ac350 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101ac353 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 101ac356 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101ac358 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ac35a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 101ac35d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101ac35e push eax */
  push32((uint32_t)(EAX));
  /* 101ac35f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 101ac362 call dword ptr [0x101ae0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae0b8))), 0x101ac368u);
  /* 101ac368 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101ac36b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac36d je 0x101ac3d2 */
  if (C.zf) goto L_101ac3d2;
  /* 101ac36f mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 101ac372 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 101ac375 mov eax, edi */
  EAX = (EDI);
  /* 101ac377 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ac37a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 101ac37c call 0x101aaef0 */
  push32(0x101ac381u); f_101aaef0();
  /* 101ac381 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 101ac384 mov esi, esp */
  ESI = (ESP);
  /* 101ac386 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 101ac389 push edi */
  push32((uint32_t)(EDI));
  /* 101ac38a push ebx */
  push32((uint32_t)(EBX));
  /* 101ac38b push esi */
  push32((uint32_t)(ESI));
  /* 101ac38c call 0x101a9c00 */
  push32(0x101ac391u); f_101a9c00();
  /* 101ac391 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ac394 jmp 0x101ac3a1 */
  goto L_101ac3a1;
  /* 101ac396 push 1 */
  push32((uint32_t)(0x1u));
  /* 101ac398 pop eax */
  EAX = (pop32());
  /* 101ac399 ret  */
  ESPCHK(0x101ac29du, _esp0);
  ESP += 4; return;
  /* 101ac39a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 101ac39d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101ac39f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_101ac3a1:;
  /* 101ac3a1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101ac3a5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac3a7 je 0x101ac3d2 */
  if (C.zf) goto L_101ac3d2;
  /* 101ac3a9 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 101ac3ac push esi */
  push32((uint32_t)(ESI));
  /* 101ac3ad push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101ac3b0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101ac3b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 101ac3b5 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 101ac3b8 call dword ptr [0x101ae0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae0b8))), 0x101ac3beu);
  /* 101ac3be cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac3c0 je 0x101ac3d2 */
  if (C.zf) goto L_101ac3d2;
  /* 101ac3c2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101ac3c5 push eax */
  push32((uint32_t)(EAX));
  /* 101ac3c6 push esi */
  push32((uint32_t)(ESI));
  /* 101ac3c7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101ac3ca call dword ptr [0x101ae0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae0c0))), 0x101ac3d0u);
  /* 101ac3d0 jmp 0x101ac3d4 */
  goto L_101ac3d4;
L_101ac3d2:;
  /* 101ac3d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101ac3d4:;
  /* 101ac3d4 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 101ac3d7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 101ac3da mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 101ac3e1 pop edi */
  EDI = (pop32());
  /* 101ac3e2 pop esi */
  ESI = (pop32());
  /* 101ac3e3 pop ebx */
  EBX = (pop32());
  /* 101ac3e4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101ac3e5 ret  */
  ESPCHK(0x101ac29du, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3e6 @ 0x101ac3e6 (511 bytes, 193 insns) */
void f_101ac3e6(void) {
  FTRACE(0x101ac3e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ac3e6 push ebp */
  push32((uint32_t)(EBP));
  /* 101ac3e7 mov ebp, esp */
  EBP = (ESP);
  /* 101ac3e9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 101ac3eb push 0x101ae570 */
  push32((uint32_t)(0x101ae570u));
  /* 101ac3f0 push 0x101ad050 */
  push32((uint32_t)(0x101ad050u));
  /* 101ac3f5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 101ac3fb push eax */
  push32((uint32_t)(EAX));
  /* 101ac3fc mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 101ac403 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ac406 push ebx */
  push32((uint32_t)(EBX));
  /* 101ac407 push esi */
  push32((uint32_t)(ESI));
  /* 101ac408 push edi */
  push32((uint32_t)(EDI));
  /* 101ac409 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 101ac40c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101ac40e cmp dword ptr [0x101b6868], edi */
  { uint32_t _a=(r32((uint32_t)(0x101b6868))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac414 jne 0x101ac45c */
  if (!C.zf) goto L_101ac45c;
  /* 101ac416 push edi */
  push32((uint32_t)(EDI));
  /* 101ac417 push edi */
  push32((uint32_t)(EDI));
  /* 101ac418 push 1 */
  push32((uint32_t)(0x1u));
  /* 101ac41a pop ebx */
  EBX = (pop32());
  /* 101ac41b push ebx */
  push32((uint32_t)(EBX));
  /* 101ac41c push 0x101ae558 */
  push32((uint32_t)(0x101ae558u));
  /* 101ac421 mov esi, 0x100 */
  ESI = (0x100u);
  /* 101ac426 push esi */
  push32((uint32_t)(ESI));
  /* 101ac427 push edi */
  push32((uint32_t)(EDI));
  /* 101ac428 call dword ptr [0x101ae0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae0c8))), 0x101ac42eu);
  /* 101ac42e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ac430 je 0x101ac43a */
  if (C.zf) goto L_101ac43a;
  /* 101ac432 mov dword ptr [0x101b6868], ebx */
  w32((uint32_t)(0x101b6868), (EBX));
  /* 101ac438 jmp 0x101ac45c */
  goto L_101ac45c;
L_101ac43a:;
  /* 101ac43a push edi */
  push32((uint32_t)(EDI));
  /* 101ac43b push edi */
  push32((uint32_t)(EDI));
  /* 101ac43c push ebx */
  push32((uint32_t)(EBX));
  /* 101ac43d push 0x101ae554 */
  push32((uint32_t)(0x101ae554u));
  /* 101ac442 push esi */
  push32((uint32_t)(ESI));
  /* 101ac443 push edi */
  push32((uint32_t)(EDI));
  /* 101ac444 call dword ptr [0x101ae0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae0c4))), 0x101ac44au);
  /* 101ac44a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ac44c je 0x101ac574 */
  if (C.zf) goto L_101ac574;
  /* 101ac452 mov dword ptr [0x101b6868], 2 */
  w32((uint32_t)(0x101b6868), (0x2u));
L_101ac45c:;
  /* 101ac45c cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac45f jle 0x101ac471 */
  if ((C.zf||C.sf!=C.of)) goto L_101ac471;
  /* 101ac461 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101ac464 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101ac467 call 0x101ac60a */
  push32(0x101ac46cu); f_101ac60a();
  /* 101ac46c pop ecx */
  ECX = (pop32());
  /* 101ac46d pop ecx */
  ECX = (pop32());
  /* 101ac46e mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_101ac471:;
  /* 101ac471 mov eax, dword ptr [0x101b6868] */
  EAX = (r32((uint32_t)(0x101b6868)));
  /* 101ac476 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac479 jne 0x101ac498 */
  if (!C.zf) goto L_101ac498;
  /* 101ac47b push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 101ac47e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 101ac481 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101ac484 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101ac487 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101ac48a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101ac48d call dword ptr [0x101ae0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae0c4))), 0x101ac493u);
  /* 101ac493 jmp 0x101ac576 */
  goto L_101ac576;
L_101ac498:;
  /* 101ac498 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac49b jne 0x101ac574 */
  if (!C.zf) goto L_101ac574;
  /* 101ac4a1 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac4a4 jne 0x101ac4ae */
  if (!C.zf) goto L_101ac4ae;
  /* 101ac4a6 mov eax, dword ptr [0x101b6848] */
  EAX = (r32((uint32_t)(0x101b6848)));
  /* 101ac4ab mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_101ac4ae:;
  /* 101ac4ae push edi */
  push32((uint32_t)(EDI));
  /* 101ac4af push edi */
  push32((uint32_t)(EDI));
  /* 101ac4b0 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101ac4b3 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101ac4b6 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 101ac4b9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101ac4bb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ac4bd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 101ac4c0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101ac4c1 push eax */
  push32((uint32_t)(EAX));
  /* 101ac4c2 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 101ac4c5 call dword ptr [0x101ae0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae0b8))), 0x101ac4cbu);
  /* 101ac4cb mov ebx, eax */
  EBX = (EAX);
  /* 101ac4cd mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 101ac4d0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac4d2 je 0x101ac574 */
  if (C.zf) goto L_101ac574;
  /* 101ac4d8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 101ac4db lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 101ac4de add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ac4e1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 101ac4e3 call 0x101aaef0 */
  push32(0x101ac4e8u); f_101aaef0();
  /* 101ac4e8 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 101ac4eb mov eax, esp */
  EAX = (ESP);
  /* 101ac4ed mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 101ac4f0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101ac4f4 jmp 0x101ac509 */
  goto L_101ac509;
  /* 101ac4f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101ac4f8 pop eax */
  EAX = (pop32());
  /* 101ac4f9 ret  */
  ESPCHK(0x101ac3e6u, _esp0);
  ESP += 4; return;
  /* 101ac4fa mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 101ac4fd xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101ac4ff mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 101ac502 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101ac506 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_101ac509:;
  /* 101ac509 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac50c je 0x101ac574 */
  if (C.zf) goto L_101ac574;
  /* 101ac50e push ebx */
  push32((uint32_t)(EBX));
  /* 101ac50f push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 101ac512 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101ac515 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101ac518 push 1 */
  push32((uint32_t)(0x1u));
  /* 101ac51a push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 101ac51d call dword ptr [0x101ae0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae0b8))), 0x101ac523u);
  /* 101ac523 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ac525 je 0x101ac574 */
  if (C.zf) goto L_101ac574;
  /* 101ac527 push edi */
  push32((uint32_t)(EDI));
  /* 101ac528 push edi */
  push32((uint32_t)(EDI));
  /* 101ac529 push ebx */
  push32((uint32_t)(EBX));
  /* 101ac52a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 101ac52d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101ac530 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101ac533 call dword ptr [0x101ae0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae0c8))), 0x101ac539u);
  /* 101ac539 mov esi, eax */
  ESI = (EAX);
  /* 101ac53b mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 101ac53e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac540 je 0x101ac574 */
  if (C.zf) goto L_101ac574;
  /* 101ac542 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 101ac546 je 0x101ac588 */
  if (C.zf) goto L_101ac588;
  /* 101ac548 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac54b je 0x101ac603 */
  if (C.zf) goto L_101ac603;
  /* 101ac551 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac554 jg 0x101ac574 */
  if ((!C.zf&&C.sf==C.of)) goto L_101ac574;
  /* 101ac556 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 101ac559 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 101ac55c push ebx */
  push32((uint32_t)(EBX));
  /* 101ac55d push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 101ac560 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101ac563 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101ac566 call dword ptr [0x101ae0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae0c8))), 0x101ac56cu);
  /* 101ac56c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ac56e jne 0x101ac603 */
  if (!C.zf) goto L_101ac603;
L_101ac574:;
  /* 101ac574 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101ac576:;
  /* 101ac576 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 101ac579 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 101ac57c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 101ac583 pop edi */
  EDI = (pop32());
  /* 101ac584 pop esi */
  ESI = (pop32());
  /* 101ac585 pop ebx */
  EBX = (pop32());
  /* 101ac586 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101ac587 ret  */
  ESPCHK(0x101ac3e6u, _esp0);
  ESP += 4; return;
L_101ac588:;
  /* 101ac588 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 101ac58f lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 101ac592 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ac595 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 101ac597 call 0x101aaef0 */
  push32(0x101ac59cu); f_101aaef0();
  /* 101ac59c mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 101ac59f mov ebx, esp */
  EBX = (ESP);
  /* 101ac5a1 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 101ac5a4 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101ac5a8 jmp 0x101ac5bc */
  goto L_101ac5bc;
  /* 101ac5aa push 1 */
  push32((uint32_t)(0x1u));
  /* 101ac5ac pop eax */
  EAX = (pop32());
  /* 101ac5ad ret  */
  ESPCHK(0x101ac3e6u, _esp0);
  ESP += 4; return;
  /* 101ac5ae mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 101ac5b1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101ac5b3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101ac5b5 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101ac5b9 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_101ac5bc:;
  /* 101ac5bc cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac5be je 0x101ac574 */
  if (C.zf) goto L_101ac574;
  /* 101ac5c0 push esi */
  push32((uint32_t)(ESI));
  /* 101ac5c1 push ebx */
  push32((uint32_t)(EBX));
  /* 101ac5c2 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 101ac5c5 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 101ac5c8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101ac5cb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101ac5ce call dword ptr [0x101ae0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae0c8))), 0x101ac5d4u);
  /* 101ac5d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ac5d6 je 0x101ac574 */
  if (C.zf) goto L_101ac574;
  /* 101ac5d8 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac5db push edi */
  push32((uint32_t)(EDI));
  /* 101ac5dc push edi */
  push32((uint32_t)(EDI));
  /* 101ac5dd jne 0x101ac5e3 */
  if (!C.zf) goto L_101ac5e3;
  /* 101ac5df push edi */
  push32((uint32_t)(EDI));
  /* 101ac5e0 push edi */
  push32((uint32_t)(EDI));
  /* 101ac5e1 jmp 0x101ac5e9 */
  goto L_101ac5e9;
L_101ac5e3:;
  /* 101ac5e3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 101ac5e6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_101ac5e9:;
  /* 101ac5e9 push esi */
  push32((uint32_t)(ESI));
  /* 101ac5ea push ebx */
  push32((uint32_t)(EBX));
  /* 101ac5eb push 0x220 */
  push32((uint32_t)(0x220u));
  /* 101ac5f0 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 101ac5f3 call dword ptr [0x101ae060] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae060))), 0x101ac5f9u);
  /* 101ac5f9 mov esi, eax */
  ESI = (EAX);
  /* 101ac5fb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac5fd je 0x101ac574 */
  if (C.zf) goto L_101ac574;
L_101ac603:;
  /* 101ac603 mov eax, esi */
  EAX = (ESI);
  /* 101ac605 jmp 0x101ac576 */
  goto L_101ac576;
}

/* FUN_1000c60a @ 0x101ac60a (43 bytes, 20 insns) */
void f_101ac60a(void) {
  FTRACE(0x101ac60au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ac60a mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 101ac60e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101ac612 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101ac614 push esi */
  push32((uint32_t)(ESI));
  /* 101ac615 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 101ac618 je 0x101ac627 */
  if (C.zf) goto L_101ac627;
L_101ac61a:;
  /* 101ac61a cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac61d je 0x101ac627 */
  if (C.zf) goto L_101ac627;
  /* 101ac61f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101ac620 mov esi, ecx */
  ESI = (ECX);
  /* 101ac622 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101ac623 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101ac625 jne 0x101ac61a */
  if (!C.zf) goto L_101ac61a;
L_101ac627:;
  /* 101ac627 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac62a pop esi */
  ESI = (pop32());
  /* 101ac62b jne 0x101ac632 */
  if (!C.zf) goto L_101ac632;
  /* 101ac62d sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ac631 ret  */
  ESPCHK(0x101ac60au, _esp0);
  ESP += 4; return;
L_101ac632:;
  /* 101ac632 mov eax, edx */
  EAX = (EDX);
  /* 101ac634 ret  */
  ESPCHK(0x101ac60au, _esp0);
  ESP += 4; return;
}

/* FUN_1000c635 @ 0x101ac635 (33 bytes, 15 insns) */
void f_101ac635(void) {
  FTRACE(0x101ac635u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ac635 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 101ac639 push esi */
  push32((uint32_t)(ESI));
  /* 101ac63a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 101ac63e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ac640 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 101ac643 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac645 jb 0x101ac64b */
  if (C.cf) goto L_101ac64b;
  /* 101ac647 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac649 jae 0x101ac64e */
  if (!C.cf) goto L_101ac64e;
L_101ac64b:;
  /* 101ac64b push 1 */
  push32((uint32_t)(0x1u));
  /* 101ac64d pop eax */
  EAX = (pop32());
L_101ac64e:;
  /* 101ac64e mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 101ac652 pop esi */
  ESI = (pop32());
  /* 101ac653 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 101ac655 ret  */
  ESPCHK(0x101ac635u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x101ac656 (94 bytes, 38 insns) */
void f_101ac656(void) {
  FTRACE(0x101ac656u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ac656 push esi */
  push32((uint32_t)(ESI));
  /* 101ac657 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101ac65b push edi */
  push32((uint32_t)(EDI));
  /* 101ac65c mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 101ac660 push esi */
  push32((uint32_t)(ESI));
  /* 101ac661 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 101ac663 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101ac665 call 0x101ac635 */
  push32(0x101ac66au); f_101ac635();
  /* 101ac66a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ac66d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ac66f je 0x101ac688 */
  if (C.zf) goto L_101ac688;
  /* 101ac671 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 101ac674 push eax */
  push32((uint32_t)(EAX));
  /* 101ac675 push 1 */
  push32((uint32_t)(0x1u));
  /* 101ac677 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 101ac679 call 0x101ac635 */
  push32(0x101ac67eu); f_101ac635();
  /* 101ac67e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ac681 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ac683 je 0x101ac688 */
  if (C.zf) goto L_101ac688;
  /* 101ac685 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_101ac688:;
  /* 101ac688 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 101ac68b push eax */
  push32((uint32_t)(EAX));
  /* 101ac68c push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 101ac68f push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 101ac691 call 0x101ac635 */
  push32(0x101ac696u); f_101ac635();
  /* 101ac696 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ac699 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ac69b je 0x101ac6a0 */
  if (C.zf) goto L_101ac6a0;
  /* 101ac69d inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_101ac6a0:;
  /* 101ac6a0 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 101ac6a3 push eax */
  push32((uint32_t)(EAX));
  /* 101ac6a4 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 101ac6a7 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 101ac6a9 call 0x101ac635 */
  push32(0x101ac6aeu); f_101ac635();
  /* 101ac6ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ac6b1 pop edi */
  EDI = (pop32());
  /* 101ac6b2 pop esi */
  ESI = (pop32());
  /* 101ac6b3 ret  */
  ESPCHK(0x101ac656u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6b4 @ 0x101ac6b4 (46 bytes, 21 insns) */
void f_101ac6b4(void) {
  FTRACE(0x101ac6b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ac6b4 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101ac6b8 push esi */
  push32((uint32_t)(ESI));
  /* 101ac6b9 push edi */
  push32((uint32_t)(EDI));
  /* 101ac6ba mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 101ac6bc mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 101ac6bf mov ecx, esi */
  ECX = (ESI);
  /* 101ac6c1 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101ac6c3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 101ac6c5 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 101ac6c8 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 101ac6cb or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 101ac6cd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 101ac6d0 mov edx, edi */
  EDX = (EDI);
  /* 101ac6d2 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 101ac6d5 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 101ac6d8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 101ac6da or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 101ac6dc pop edi */
  EDI = (pop32());
  /* 101ac6dd mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 101ac6e0 pop esi */
  ESI = (pop32());
  /* 101ac6e1 ret  */
  ESPCHK(0x101ac6b4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6e2 @ 0x101ac6e2 (45 bytes, 21 insns) */
void f_101ac6e2(void) {
  FTRACE(0x101ac6e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ac6e2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101ac6e6 push esi */
  push32((uint32_t)(ESI));
  /* 101ac6e7 push edi */
  push32((uint32_t)(EDI));
  /* 101ac6e8 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 101ac6eb mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 101ac6ee mov esi, edx */
  ESI = (EDX);
  /* 101ac6f0 mov edi, ecx */
  EDI = (ECX);
  /* 101ac6f2 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 101ac6f5 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 101ac6f7 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 101ac6f9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 101ac6fc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 101ac6fe shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 101ac701 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 101ac703 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 101ac705 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 101ac707 pop edi */
  EDI = (pop32());
  /* 101ac708 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 101ac70b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101ac70d pop esi */
  ESI = (pop32());
  /* 101ac70e ret  */
  ESPCHK(0x101ac6e2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c70f @ 0x101ac70f (199 bytes, 76 insns) */
void f_101ac70f(void) {
  FTRACE(0x101ac70fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ac70f push ebp */
  push32((uint32_t)(EBP));
  /* 101ac710 mov ebp, esp */
  EBP = (ESP);
  /* 101ac712 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ac715 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101ac718 push ebx */
  push32((uint32_t)(EBX));
  /* 101ac719 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 101ac71c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101ac71e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac720 push esi */
  push32((uint32_t)(ESI));
  /* 101ac721 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 101ac728 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 101ac72a mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 101ac72d mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 101ac730 jbe 0x101ac783 */
  if ((C.cf||C.zf)) goto L_101ac783;
  /* 101ac732 push edi */
  push32((uint32_t)(EDI));
  /* 101ac733 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_101ac736:;
  /* 101ac736 mov esi, ebx */
  ESI = (EBX);
  /* 101ac738 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 101ac73b movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101ac73c movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101ac73d push ebx */
  push32((uint32_t)(EBX));
  /* 101ac73e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101ac73f call 0x101ac6b4 */
  push32(0x101ac744u); f_101ac6b4();
  /* 101ac744 push ebx */
  push32((uint32_t)(EBX));
  /* 101ac745 call 0x101ac6b4 */
  push32(0x101ac74au); f_101ac6b4();
  /* 101ac74a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101ac74d push eax */
  push32((uint32_t)(EAX));
  /* 101ac74e push ebx */
  push32((uint32_t)(EBX));
  /* 101ac74f call 0x101ac656 */
  push32(0x101ac754u); f_101ac656();
  /* 101ac754 push ebx */
  push32((uint32_t)(EBX));
  /* 101ac755 call 0x101ac6b4 */
  push32(0x101ac75au); f_101ac6b4();
  /* 101ac75a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ac75d and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 101ac761 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 101ac765 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 101ac768 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 101ac76b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101ac76e push eax */
  push32((uint32_t)(EAX));
  /* 101ac76f push ebx */
  push32((uint32_t)(EBX));
  /* 101ac770 call 0x101ac656 */
  push32(0x101ac775u); f_101ac656();
  /* 101ac775 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ac778 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 101ac77b dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 101ac77e jne 0x101ac736 */
  if (!C.zf) goto L_101ac736;
  /* 101ac780 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101ac782 pop edi */
  EDI = (pop32());
L_101ac783:;
  /* 101ac783 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac786 jne 0x101ac7b0 */
  if (!C.zf) goto L_101ac7b0;
  /* 101ac788 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 101ac78b mov eax, ecx */
  EAX = (ECX);
  /* 101ac78d shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 101ac790 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 101ac793 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 101ac795 mov esi, eax */
  ESI = (EAX);
  /* 101ac797 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 101ac79a shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 101ac79d or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 101ac79f shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 101ac7a2 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 101ac7a9 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 101ac7ac mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 101ac7ae jmp 0x101ac783 */
  goto L_101ac783;
L_101ac7b0:;
  /* 101ac7b0 mov esi, 0x8000 */
  ESI = (0x8000u);
L_101ac7b5:;
  /* 101ac7b5 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 101ac7b8 jne 0x101ac7ca */
  if (!C.zf) goto L_101ac7ca;
  /* 101ac7ba push ebx */
  push32((uint32_t)(EBX));
  /* 101ac7bb call 0x101ac6b4 */
  push32(0x101ac7c0u); f_101ac6b4();
  /* 101ac7c0 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 101ac7c7 pop ecx */
  ECX = (pop32());
  /* 101ac7c8 jmp 0x101ac7b5 */
  goto L_101ac7b5;
L_101ac7ca:;
  /* 101ac7ca mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 101ac7ce pop esi */
  ESI = (pop32());
  /* 101ac7cf mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 101ac7d3 pop ebx */
  EBX = (pop32());
  /* 101ac7d4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101ac7d5 ret  */
  ESPCHK(0x101ac70fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7d6 @ 0x101ac7d6 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_101ac7d6(void) {
  FTRACE(0x101ac7d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ac7d6 push ebp */
  push32((uint32_t)(EBP));
  /* 101ac7d7 mov ebp, esp */
  EBP = (ESP);
  /* 101ac7d9 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ac7dc push ebx */
  push32((uint32_t)(EBX));
  /* 101ac7dd push esi */
  push32((uint32_t)(ESI));
  /* 101ac7de push edi */
  push32((uint32_t)(EDI));
  /* 101ac7df mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 101ac7e2 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 101ac7e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 101ac7e7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 101ac7ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ac7ec pop edx */
  EDX = (pop32());
  /* 101ac7ed mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 101ac7f0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 101ac7f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101ac7f6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 101ac7f9 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 101ac7fc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101ac7ff mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 101ac802 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 101ac805 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 101ac808 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 101ac80b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 101ac80e mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_101ac811:;
  /* 101ac811 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 101ac813 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac816 je 0x101ac827 */
  if (C.zf) goto L_101ac827;
  /* 101ac818 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac81b je 0x101ac827 */
  if (C.zf) goto L_101ac827;
  /* 101ac81d cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac820 je 0x101ac827 */
  if (C.zf) goto L_101ac827;
  /* 101ac822 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac825 jne 0x101ac82a */
  if (!C.zf) goto L_101ac82a;
L_101ac827:;
  /* 101ac827 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101ac828 jmp 0x101ac811 */
  goto L_101ac811;
L_101ac82a:;
  /* 101ac82a push 4 */
  push32((uint32_t)(0x4u));
  /* 101ac82c pop esi */
  ESI = (pop32());
L_101ac82d:;
  /* 101ac82d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101ac82f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101ac830 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac833 ja 0x101acab0 */
  if ((!C.cf&&!C.zf)) goto L_101acab0;
  /* 101ac839 jmp dword ptr [eax*4 + 0x101acc77] */
  switch (EAX) {
    case 0: goto L_101ac840;
    case 1: goto L_101ac88f;
    case 2: goto L_101ac8e6;
    case 3: goto L_101ac910;
    case 4: goto L_101ac96b;
    case 5: goto L_101ac9e2;
    case 6: goto L_101aca18;
    case 7: goto L_101aca62;
    case 8: goto L_101aca41;
    case 9: goto L_101acac6;
    case 10: goto L_101acab0;
    case 11: goto L_101aca7c;
    default: x86_unimpl("switch@0x101ac839 out of table"); return;
  }
L_101ac840:;
  /* 101ac840 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac843 jl 0x101ac851 */
  if ((C.sf!=C.of)) goto L_101ac851;
  /* 101ac845 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac848 jg 0x101ac851 */
  if ((!C.zf&&C.sf==C.of)) goto L_101ac851;
L_101ac84a:;
  /* 101ac84a push 3 */
  push32((uint32_t)(0x3u));
  /* 101ac84c jmp 0x101aca6e */
  goto L_101aca6e;
L_101ac851:;
  /* 101ac851 cmp bl, byte ptr [0x101b0be4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x101b0be4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac857 jne 0x101ac860 */
  if (!C.zf) goto L_101ac860;
L_101ac859:;
  /* 101ac859 push 5 */
  push32((uint32_t)(0x5u));
  /* 101ac85b jmp 0x101acaa6 */
  goto L_101acaa6;
L_101ac860:;
  /* 101ac860 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101ac863 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ac866 je 0x101ac886 */
  if (C.zf) goto L_101ac886;
  /* 101ac868 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101ac869 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101ac86a je 0x101ac87a */
  if (C.zf) goto L_101ac87a;
  /* 101ac86c sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ac86f jne 0x101acb49 */
  if (!C.zf) goto L_101acb49;
  /* 101ac875 jmp 0x101ac909 */
  goto L_101ac909;
L_101ac87a:;
  /* 101ac87a push 2 */
  push32((uint32_t)(0x2u));
  /* 101ac87c mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 101ac883 pop eax */
  EAX = (pop32());
  /* 101ac884 jmp 0x101ac82d */
  goto L_101ac82d;
L_101ac886:;
  /* 101ac886 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 101ac88a push 2 */
  push32((uint32_t)(0x2u));
  /* 101ac88c pop eax */
  EAX = (pop32());
  /* 101ac88d jmp 0x101ac82d */
  goto L_101ac82d;
L_101ac88f:;
  /* 101ac88f cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac892 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 101ac895 jl 0x101ac89c */
  if ((C.sf!=C.of)) goto L_101ac89c;
  /* 101ac897 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac89a jle 0x101ac84a */
  if ((C.zf||C.sf!=C.of)) goto L_101ac84a;
L_101ac89c:;
  /* 101ac89c cmp bl, byte ptr [0x101b0be4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x101b0be4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac8a2 je 0x101ac964 */
  if (C.zf) goto L_101ac964;
  /* 101ac8a8 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac8ab je 0x101ac8de */
  if (C.zf) goto L_101ac8de;
  /* 101ac8ad cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac8b0 je 0x101ac8de */
  if (C.zf) goto L_101ac8de;
  /* 101ac8b2 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac8b5 je 0x101ac909 */
  if (C.zf) goto L_101ac909;
L_101ac8b7:;
  /* 101ac8b7 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac8ba jle 0x101acb49 */
  if ((C.zf||C.sf!=C.of)) goto L_101acb49;
  /* 101ac8c0 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac8c3 jle 0x101ac8d7 */
  if ((C.zf||C.sf!=C.of)) goto L_101ac8d7;
  /* 101ac8c5 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac8c8 jle 0x101acb49 */
  if ((C.zf||C.sf!=C.of)) goto L_101acb49;
  /* 101ac8ce cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac8d1 jg 0x101acb49 */
  if ((!C.zf&&C.sf==C.of)) goto L_101acb49;
L_101ac8d7:;
  /* 101ac8d7 push 6 */
  push32((uint32_t)(0x6u));
  /* 101ac8d9 jmp 0x101acaa6 */
  goto L_101acaa6;
L_101ac8de:;
  /* 101ac8de dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101ac8df push 0xb */
  push32((uint32_t)(0xbu));
  /* 101ac8e1 jmp 0x101acaa6 */
  goto L_101acaa6;
L_101ac8e6:;
  /* 101ac8e6 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac8e9 jl 0x101ac8f4 */
  if ((C.sf!=C.of)) goto L_101ac8f4;
  /* 101ac8eb cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac8ee jle 0x101ac84a */
  if ((C.zf||C.sf!=C.of)) goto L_101ac84a;
L_101ac8f4:;
  /* 101ac8f4 cmp bl, byte ptr [0x101b0be4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x101b0be4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac8fa je 0x101ac859 */
  if (C.zf) goto L_101ac859;
  /* 101ac900 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac903 jne 0x101acabe */
  if (!C.zf) goto L_101acabe;
L_101ac909:;
  /* 101ac909 mov eax, edx */
  EAX = (EDX);
  /* 101ac90b jmp 0x101ac82d */
  goto L_101ac82d;
L_101ac910:;
  /* 101ac910 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_101ac913:;
  /* 101ac913 cmp dword ptr [0x101b0be0], edx */
  { uint32_t _a=(r32((uint32_t)(0x101b0be0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac919 jle 0x101ac92c */
  if ((C.zf||C.sf!=C.of)) goto L_101ac92c;
  /* 101ac91b movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101ac91e push esi */
  push32((uint32_t)(ESI));
  /* 101ac91f push eax */
  push32((uint32_t)(EAX));
  /* 101ac920 call 0x101a93eb */
  push32(0x101ac925u); f_101a93eb();
  /* 101ac925 pop ecx */
  ECX = (pop32());
  /* 101ac926 pop ecx */
  ECX = (pop32());
  /* 101ac927 push 1 */
  push32((uint32_t)(0x1u));
  /* 101ac929 pop edx */
  EDX = (pop32());
  /* 101ac92a jmp 0x101ac93a */
  goto L_101ac93a;
L_101ac92c:;
  /* 101ac92c mov ecx, dword ptr [0x101b09d0] */
  ECX = (r32((uint32_t)(0x101b09d0)));
  /* 101ac932 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101ac935 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 101ac938 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_101ac93a:;
  /* 101ac93a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ac93c je 0x101ac95c */
  if (C.zf) goto L_101ac95c;
  /* 101ac93e cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac942 jae 0x101ac954 */
  if (!C.cf) goto L_101ac954;
  /* 101ac944 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101ac947 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 101ac94a sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101ac94d inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 101ac950 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 101ac952 jmp 0x101ac957 */
  goto L_101ac957;
L_101ac954:;
  /* 101ac954 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_101ac957:;
  /* 101ac957 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101ac959 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101ac95a jmp 0x101ac913 */
  goto L_101ac913;
L_101ac95c:;
  /* 101ac95c cmp bl, byte ptr [0x101b0be4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x101b0be4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac962 jne 0x101ac9cb */
  if (!C.zf) goto L_101ac9cb;
L_101ac964:;
  /* 101ac964 mov eax, esi */
  EAX = (ESI);
  /* 101ac966 jmp 0x101ac82d */
  goto L_101ac82d;
L_101ac96b:;
  /* 101ac96b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac96f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 101ac972 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 101ac975 jne 0x101ac984 */
  if (!C.zf) goto L_101ac984;
L_101ac977:;
  /* 101ac977 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac97a jne 0x101ac984 */
  if (!C.zf) goto L_101ac984;
  /* 101ac97c dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 101ac97f mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101ac981 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101ac982 jmp 0x101ac977 */
  goto L_101ac977;
L_101ac984:;
  /* 101ac984 cmp dword ptr [0x101b0be0], edx */
  { uint32_t _a=(r32((uint32_t)(0x101b0be0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac98a jle 0x101ac99d */
  if ((C.zf||C.sf!=C.of)) goto L_101ac99d;
  /* 101ac98c movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101ac98f push esi */
  push32((uint32_t)(ESI));
  /* 101ac990 push eax */
  push32((uint32_t)(EAX));
  /* 101ac991 call 0x101a93eb */
  push32(0x101ac996u); f_101a93eb();
  /* 101ac996 pop ecx */
  ECX = (pop32());
  /* 101ac997 pop ecx */
  ECX = (pop32());
  /* 101ac998 push 1 */
  push32((uint32_t)(0x1u));
  /* 101ac99a pop edx */
  EDX = (pop32());
  /* 101ac99b jmp 0x101ac9ab */
  goto L_101ac9ab;
L_101ac99d:;
  /* 101ac99d mov ecx, dword ptr [0x101b09d0] */
  ECX = (r32((uint32_t)(0x101b09d0)));
  /* 101ac9a3 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101ac9a6 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 101ac9a9 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_101ac9ab:;
  /* 101ac9ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ac9ad je 0x101ac9cb */
  if (C.zf) goto L_101ac9cb;
  /* 101ac9af cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac9b3 jae 0x101ac9c6 */
  if (!C.cf) goto L_101ac9c6;
  /* 101ac9b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101ac9b8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 101ac9bb sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101ac9be inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 101ac9c1 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 101ac9c4 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_101ac9c6:;
  /* 101ac9c6 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101ac9c8 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101ac9c9 jmp 0x101ac984 */
  goto L_101ac984;
L_101ac9cb:;
  /* 101ac9cb cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac9ce je 0x101ac8de */
  if (C.zf) goto L_101ac8de;
  /* 101ac9d4 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ac9d7 je 0x101ac8de */
  if (C.zf) goto L_101ac8de;
  /* 101ac9dd jmp 0x101ac8b7 */
  goto L_101ac8b7;
L_101ac9e2:;
  /* 101ac9e2 cmp dword ptr [0x101b0be0], edx */
  { uint32_t _a=(r32((uint32_t)(0x101b0be0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ac9e8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 101ac9eb jle 0x101ac9fe */
  if ((C.zf||C.sf!=C.of)) goto L_101ac9fe;
  /* 101ac9ed movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101ac9f0 push esi */
  push32((uint32_t)(ESI));
  /* 101ac9f1 push eax */
  push32((uint32_t)(EAX));
  /* 101ac9f2 call 0x101a93eb */
  push32(0x101ac9f7u); f_101a93eb();
  /* 101ac9f7 pop ecx */
  ECX = (pop32());
  /* 101ac9f8 pop ecx */
  ECX = (pop32());
  /* 101ac9f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 101ac9fb pop edx */
  EDX = (pop32());
  /* 101ac9fc jmp 0x101aca0c */
  goto L_101aca0c;
L_101ac9fe:;
  /* 101ac9fe mov ecx, dword ptr [0x101b09d0] */
  ECX = (r32((uint32_t)(0x101b09d0)));
  /* 101aca04 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101aca07 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 101aca0a and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_101aca0c:;
  /* 101aca0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101aca0e je 0x101acabe */
  if (C.zf) goto L_101acabe;
  /* 101aca14 mov eax, esi */
  EAX = (ESI);
  /* 101aca16 jmp 0x101aca6f */
  goto L_101aca6f;
L_101aca18:;
  /* 101aca18 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 101aca1b cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aca1e mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 101aca21 jl 0x101aca28 */
  if ((C.sf!=C.of)) goto L_101aca28;
  /* 101aca23 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aca26 jle 0x101aca6c */
  if ((C.zf||C.sf!=C.of)) goto L_101aca6c;
L_101aca28:;
  /* 101aca28 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101aca2b sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aca2e je 0x101acaa4 */
  if (C.zf) goto L_101acaa4;
  /* 101aca30 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101aca31 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101aca32 je 0x101aca98 */
  if (C.zf) goto L_101aca98;
  /* 101aca34 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aca37 jne 0x101acb4c */
  if (!C.zf) goto L_101acb4c;
L_101aca3d:;
  /* 101aca3d push 8 */
  push32((uint32_t)(0x8u));
  /* 101aca3f jmp 0x101acaa6 */
  goto L_101acaa6;
L_101aca41:;
  /* 101aca41 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_101aca44:;
  /* 101aca44 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aca47 jne 0x101aca4e */
  if (!C.zf) goto L_101aca4e;
  /* 101aca49 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101aca4b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101aca4c jmp 0x101aca44 */
  goto L_101aca44;
L_101aca4e:;
  /* 101aca4e cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aca51 jl 0x101acb49 */
  if ((C.sf!=C.of)) goto L_101acb49;
  /* 101aca57 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aca5a jg 0x101acb49 */
  if ((!C.zf&&C.sf==C.of)) goto L_101acb49;
  /* 101aca60 jmp 0x101aca6c */
  goto L_101aca6c;
L_101aca62:;
  /* 101aca62 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aca65 jl 0x101aca75 */
  if ((C.sf!=C.of)) goto L_101aca75;
  /* 101aca67 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aca6a jg 0x101aca75 */
  if ((!C.zf&&C.sf==C.of)) goto L_101aca75;
L_101aca6c:;
  /* 101aca6c push 9 */
  push32((uint32_t)(0x9u));
L_101aca6e:;
  /* 101aca6e pop eax */
  EAX = (pop32());
L_101aca6f:;
  /* 101aca6f dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101aca70 jmp 0x101ac82d */
  goto L_101ac82d;
L_101aca75:;
  /* 101aca75 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101aca78 jne 0x101acabe */
  if (!C.zf) goto L_101acabe;
  /* 101aca7a jmp 0x101aca3d */
  goto L_101aca3d;
L_101aca7c:;
  /* 101aca7c cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101aca80 je 0x101acaac */
  if (C.zf) goto L_101acaac;
  /* 101aca82 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101aca85 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 101aca88 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101aca8b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 101aca8e je 0x101acaa4 */
  if (C.zf) goto L_101acaa4;
  /* 101aca90 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101aca91 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101aca92 jne 0x101acb4c */
  if (!C.zf) goto L_101acb4c;
L_101aca98:;
  /* 101aca98 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 101aca9c push 7 */
  push32((uint32_t)(0x7u));
  /* 101aca9e pop eax */
  EAX = (pop32());
  /* 101aca9f jmp 0x101ac82d */
  goto L_101ac82d;
L_101acaa4:;
  /* 101acaa4 push 7 */
  push32((uint32_t)(0x7u));
L_101acaa6:;
  /* 101acaa6 pop eax */
  EAX = (pop32());
  /* 101acaa7 jmp 0x101ac82d */
  goto L_101ac82d;
L_101acaac:;
  /* 101acaac push 0xa */
  push32((uint32_t)(0xau));
  /* 101acaae dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101acaaf pop eax */
  EAX = (pop32());
L_101acab0:;
  /* 101acab0 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acab3 je 0x101acb4e */
  if (C.zf) goto L_101acb4e;
  /* 101acab9 jmp 0x101ac82d */
  goto L_101ac82d;
L_101acabe:;
  /* 101acabe mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 101acac1 jmp 0x101acb4e */
  goto L_101acb4e;
L_101acac6:;
  /* 101acac6 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 101acacd xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_101acacf:;
  /* 101acacf cmp dword ptr [0x101b0be0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101b0be0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acad6 jle 0x101acae7 */
  if ((C.zf||C.sf!=C.of)) goto L_101acae7;
  /* 101acad8 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101acadb push 4 */
  push32((uint32_t)(0x4u));
  /* 101acadd push eax */
  push32((uint32_t)(EAX));
  /* 101acade call 0x101a93eb */
  push32(0x101acae3u); f_101a93eb();
  /* 101acae3 pop ecx */
  ECX = (pop32());
  /* 101acae4 pop ecx */
  ECX = (pop32());
  /* 101acae5 jmp 0x101acaf6 */
  goto L_101acaf6;
L_101acae7:;
  /* 101acae7 mov ecx, dword ptr [0x101b09d0] */
  ECX = (r32((uint32_t)(0x101b09d0)));
  /* 101acaed movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101acaf0 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 101acaf3 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_101acaf6:;
  /* 101acaf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101acaf8 je 0x101acb16 */
  if (C.zf) goto L_101acb16;
  /* 101acafa movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101acafd lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 101acb00 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 101acb04 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acb0a jg 0x101acb11 */
  if ((!C.zf&&C.sf==C.of)) goto L_101acb11;
  /* 101acb0c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101acb0e inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101acb0f jmp 0x101acacf */
  goto L_101acacf;
L_101acb11:;
  /* 101acb11 mov esi, 0x1451 */
  ESI = (0x1451u);
L_101acb16:;
  /* 101acb16 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_101acb19:;
  /* 101acb19 cmp dword ptr [0x101b0be0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101b0be0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acb20 jle 0x101acb31 */
  if ((C.zf||C.sf!=C.of)) goto L_101acb31;
  /* 101acb22 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101acb25 push 4 */
  push32((uint32_t)(0x4u));
  /* 101acb27 push eax */
  push32((uint32_t)(EAX));
  /* 101acb28 call 0x101a93eb */
  push32(0x101acb2du); f_101a93eb();
  /* 101acb2d pop ecx */
  ECX = (pop32());
  /* 101acb2e pop ecx */
  ECX = (pop32());
  /* 101acb2f jmp 0x101acb40 */
  goto L_101acb40;
L_101acb31:;
  /* 101acb31 mov ecx, dword ptr [0x101b09d0] */
  ECX = (r32((uint32_t)(0x101b09d0)));
  /* 101acb37 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101acb3a mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 101acb3d and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_101acb40:;
  /* 101acb40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101acb42 je 0x101acb49 */
  if (C.zf) goto L_101acb49;
  /* 101acb44 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101acb46 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101acb47 jmp 0x101acb19 */
  goto L_101acb19;
L_101acb49:;
  /* 101acb49 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101acb4a jmp 0x101acb4e */
  goto L_101acb4e;
L_101acb4c:;
  /* 101acb4c mov edi, ecx */
  EDI = (ECX);
L_101acb4e:;
  /* 101acb4e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101acb51 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acb55 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 101acb57 je 0x101acc36 */
  if (C.zf) goto L_101acc36;
  /* 101acb5d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 101acb5f pop eax */
  EAX = (pop32());
  /* 101acb60 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acb63 jbe 0x101acb7a */
  if ((C.cf||C.zf)) goto L_101acb7a;
  /* 101acb65 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101acb69 jl 0x101acb6e */
  if ((C.sf!=C.of)) goto L_101acb6e;
  /* 101acb6b inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_101acb6e:;
  /* 101acb6e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101acb71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101acb74 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101acb75 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 101acb78 jmp 0x101acb7d */
  goto L_101acb7d;
L_101acb7a:;
  /* 101acb7a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_101acb7d:;
  /* 101acb7d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acb81 jbe 0x101acc2c */
  if ((C.cf||C.zf)) goto L_101acc2c;
L_101acb87:;
  /* 101acb87 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101acb88 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101acb8b jne 0x101acb95 */
  if (!C.zf) goto L_101acb95;
  /* 101acb8d dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 101acb90 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 101acb93 jmp 0x101acb87 */
  goto L_101acb87;
L_101acb95:;
  /* 101acb95 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 101acb98 push eax */
  push32((uint32_t)(EAX));
  /* 101acb99 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 101acb9c push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 101acb9f push eax */
  push32((uint32_t)(EAX));
  /* 101acba0 call 0x101ac70f */
  push32(0x101acba5u); f_101ac70f();
  /* 101acba5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 101acba8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101acbaa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101acbad cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acbb0 jge 0x101acbb4 */
  if ((C.sf==C.of)) goto L_101acbb4;
  /* 101acbb2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_101acbb4:;
  /* 101acbb4 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101acbb7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acbba jne 0x101acbbf */
  if (!C.zf) goto L_101acbbf;
  /* 101acbbc add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_101acbbf:;
  /* 101acbbf cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acbc2 jne 0x101acbc7 */
  if (!C.zf) goto L_101acbc7;
  /* 101acbc4 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_101acbc7:;
  /* 101acbc7 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acbcc jle 0x101acbfe */
  if ((C.zf||C.sf!=C.of)) goto L_101acbfe;
  /* 101acbce mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_101acbd5:;
  /* 101acbd5 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 101acbd8 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 101acbdb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 101acbde mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_101acbe1:;
  /* 101acbe1 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acbe5 je 0x101acc47 */
  if (C.zf) goto L_101acc47;
  /* 101acbe7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101acbe9 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 101acbee mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 101acbf3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101acbf5 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 101acbfc jmp 0x101acc5c */
  goto L_101acc5c;
L_101acbfe:;
  /* 101acbfe cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acc03 jge 0x101acc0e */
  if ((C.sf==C.of)) goto L_101acc0e;
  /* 101acc05 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 101acc0c jmp 0x101acbd5 */
  goto L_101acbd5;
L_101acc0e:;
  /* 101acc0e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101acc11 push eax */
  push32((uint32_t)(EAX));
  /* 101acc12 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 101acc15 push eax */
  push32((uint32_t)(EAX));
  /* 101acc16 call 0x101ad6aa */
  push32(0x101acc1bu); f_101ad6aa();
  /* 101acc1b mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 101acc1e mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 101acc21 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 101acc24 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 101acc27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101acc2a jmp 0x101acbe1 */
  goto L_101acbe1;
L_101acc2c:;
  /* 101acc2c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101acc2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101acc30 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101acc32 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101acc34 jmp 0x101acbe1 */
  goto L_101acbe1;
L_101acc36:;
  /* 101acc36 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101acc38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101acc3a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101acc3c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101acc3e mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 101acc45 jmp 0x101acc5c */
  goto L_101acc5c;
L_101acc47:;
  /* 101acc47 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acc4b je 0x101acc5c */
  if (C.zf) goto L_101acc5c;
  /* 101acc4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101acc4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101acc51 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101acc53 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101acc55 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_101acc5c:;
  /* 101acc5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101acc5f or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 101acc62 pop edi */
  EDI = (pop32());
  /* 101acc63 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 101acc66 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 101acc69 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 101acc6d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 101acc70 pop esi */
  ESI = (pop32());
  /* 101acc71 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 101acc74 pop ebx */
  EBX = (pop32());
  /* 101acc75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101acc76 ret  */
  ESPCHK(0x101ac7d6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cca7 @ 0x101acca7 (659 bytes, 232 insns) */
void f_101acca7(void) {
  FTRACE(0x101acca7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101acca7 push ebp */
  push32((uint32_t)(EBP));
  /* 101acca8 mov ebp, esp */
  EBP = (ESP);
  /* 101accaa sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101accad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 101accb0 push ebx */
  push32((uint32_t)(EBX));
  /* 101accb1 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 101accb4 push esi */
  push32((uint32_t)(ESI));
  /* 101accb5 mov ecx, eax */
  ECX = (EAX);
  /* 101accb7 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 101accbc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 101accc2 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 101accc4 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 101accc7 push edi */
  push32((uint32_t)(EDI));
  /* 101accc8 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 101acccc mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 101accd0 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 101accd4 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 101accd8 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 101accdc mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 101acce0 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 101acce4 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 101acce8 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 101accec mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 101accf0 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 101accf4 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 101accf8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 101accff mov edx, eax */
  EDX = (EAX);
  /* 101acd01 je 0x101acd09 */
  if (C.zf) goto L_101acd09;
  /* 101acd03 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 101acd07 jmp 0x101acd0d */
  goto L_101acd0d;
L_101acd09:;
  /* 101acd09 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_101acd0d:;
  /* 101acd0d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101acd10 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 101acd13 jne 0x101acd33 */
  if (!C.zf) goto L_101acd33;
  /* 101acd15 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101acd17 jne 0x101acd33 */
  if (!C.zf) goto L_101acd33;
  /* 101acd19 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acd1c jne 0x101acd33 */
  if (!C.zf) goto L_101acd33;
L_101acd1e:;
  /* 101acd1e and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 101acd22 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 101acd26 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 101acd2a mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 101acd2e jmp 0x101acf31 */
  goto L_101acf31;
L_101acd33:;
  /* 101acd33 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101acd36 jne 0x101acdb2 */
  if (!C.zf) goto L_101acdb2;
  /* 101acd38 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 101acd3d mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 101acd42 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acd44 jne 0x101acd4c */
  if (!C.zf) goto L_101acd4c;
  /* 101acd46 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acd4a je 0x101acd5b */
  if (C.zf) goto L_101acd5b;
L_101acd4c:;
  /* 101acd4c test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 101acd52 jne 0x101acd5b */
  if (!C.zf) goto L_101acd5b;
  /* 101acd54 push 0x101ae5a0 */
  push32((uint32_t)(0x101ae5a0u));
  /* 101acd59 jmp 0x101acda1 */
  goto L_101acda1;
L_101acd5b:;
  /* 101acd5b test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 101acd5e je 0x101acd75 */
  if (C.zf) goto L_101acd75;
  /* 101acd60 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acd66 jne 0x101acd75 */
  if (!C.zf) goto L_101acd75;
  /* 101acd68 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acd6c jne 0x101acd9c */
  if (!C.zf) goto L_101acd9c;
  /* 101acd6e push 0x101ae598 */
  push32((uint32_t)(0x101ae598u));
  /* 101acd73 jmp 0x101acd84 */
  goto L_101acd84;
L_101acd75:;
  /* 101acd75 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acd77 jne 0x101acd9c */
  if (!C.zf) goto L_101acd9c;
  /* 101acd79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acd7d jne 0x101acd9c */
  if (!C.zf) goto L_101acd9c;
  /* 101acd7f push 0x101ae590 */
  push32((uint32_t)(0x101ae590u));
L_101acd84:;
  /* 101acd84 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 101acd87 push eax */
  push32((uint32_t)(EAX));
  /* 101acd88 call 0x101a9b10 */
  push32(0x101acd8du); f_101a9b10();
  /* 101acd8d pop ecx */
  ECX = (pop32());
  /* 101acd8e mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 101acd92 pop ecx */
  ECX = (pop32());
L_101acd93:;
  /* 101acd93 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101acd97 jmp 0x101acf0a */
  goto L_101acf0a;
L_101acd9c:;
  /* 101acd9c push 0x101ae588 */
  push32((uint32_t)(0x101ae588u));
L_101acda1:;
  /* 101acda1 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 101acda4 push eax */
  push32((uint32_t)(EAX));
  /* 101acda5 call 0x101a9b10 */
  push32(0x101acdaau); f_101a9b10();
  /* 101acdaa pop ecx */
  ECX = (pop32());
  /* 101acdab mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 101acdaf pop ecx */
  ECX = (pop32());
  /* 101acdb0 jmp 0x101acd93 */
  goto L_101acd93;
L_101acdb2:;
  /* 101acdb2 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 101acdb5 mov ecx, edi */
  ECX = (EDI);
  /* 101acdb7 mov esi, eax */
  ESI = (EAX);
  /* 101acdb9 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 101acdbc imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101acdc2 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 101acdc5 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 101acdca push 1 */
  push32((uint32_t)(0x1u));
  /* 101acdcc lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 101acdcf mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 101acdd3 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101acdd6 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 101acdd9 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 101acde0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101acde3 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 101acde6 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 101acde9 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 101acdec neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101acdee push eax */
  push32((uint32_t)(EAX));
  /* 101acdef lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101acdf2 push eax */
  push32((uint32_t)(EAX));
  /* 101acdf3 call 0x101ad6aa */
  push32(0x101acdf8u); f_101ad6aa();
  /* 101acdf8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101acdfb cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101ace01 jb 0x101ace13 */
  if (C.cf) goto L_101ace13;
  /* 101ace03 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 101ace06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101ace07 push eax */
  push32((uint32_t)(EAX));
  /* 101ace08 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101ace0b push eax */
  push32((uint32_t)(EAX));
  /* 101ace0c call 0x101ad48a */
  push32(0x101ace11u); f_101ad48a();
  /* 101ace11 pop ecx */
  ECX = (pop32());
  /* 101ace12 pop ecx */
  ECX = (pop32());
L_101ace13:;
  /* 101ace13 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 101ace17 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 101ace1a je 0x101ace2d */
  if (C.zf) goto L_101ace2d;
  /* 101ace1c mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 101ace1f movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 101ace22 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101ace24 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101ace26 jg 0x101ace30 */
  if ((!C.zf&&C.sf==C.of)) goto L_101ace30;
  /* 101ace28 jmp 0x101acd1e */
  goto L_101acd1e;
L_101ace2d:;
  /* 101ace2d mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_101ace30:;
  /* 101ace30 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ace33 jle 0x101ace38 */
  if ((C.zf||C.sf!=C.of)) goto L_101ace38;
  /* 101ace35 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 101ace37 pop edi */
  EDI = (pop32());
L_101ace38:;
  /* 101ace38 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 101ace3c sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ace42 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 101ace47 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_101ace4e:;
  /* 101ace4e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101ace51 push eax */
  push32((uint32_t)(EAX));
  /* 101ace52 call 0x101ac6b4 */
  push32(0x101ace57u); f_101ac6b4();
  /* 101ace57 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 101ace5a pop ecx */
  ECX = (pop32());
  /* 101ace5b jne 0x101ace4e */
  if (!C.zf) goto L_101ace4e;
  /* 101ace5d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101ace5f jge 0x101ace78 */
  if ((C.sf==C.of)) goto L_101ace78;
  /* 101ace61 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 101ace63 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 101ace69 jle 0x101ace78 */
  if ((C.zf||C.sf!=C.of)) goto L_101ace78;
L_101ace6b:;
  /* 101ace6b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101ace6e push eax */
  push32((uint32_t)(EAX));
  /* 101ace6f call 0x101ac6e2 */
  push32(0x101ace74u); f_101ac6e2();
  /* 101ace74 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101ace75 pop ecx */
  ECX = (pop32());
  /* 101ace76 jne 0x101ace6b */
  if (!C.zf) goto L_101ace6b;
L_101ace78:;
  /* 101ace78 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 101ace7b lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 101ace7e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101ace80 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 101ace83 jle 0x101aced5 */
  if ((C.zf||C.sf!=C.of)) goto L_101aced5;
  /* 101ace85 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_101ace88:;
  /* 101ace88 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 101ace8b lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 101ace8e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101ace8f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101ace90 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101ace93 push eax */
  push32((uint32_t)(EAX));
  /* 101ace94 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101ace95 call 0x101ac6b4 */
  push32(0x101ace9au); f_101ac6b4();
  /* 101ace9a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101ace9d push eax */
  push32((uint32_t)(EAX));
  /* 101ace9e call 0x101ac6b4 */
  push32(0x101acea3u); f_101ac6b4();
  /* 101acea3 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101acea6 push eax */
  push32((uint32_t)(EAX));
  /* 101acea7 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101aceaa push eax */
  push32((uint32_t)(EAX));
  /* 101aceab call 0x101ac656 */
  push32(0x101aceb0u); f_101ac656();
  /* 101aceb0 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101aceb3 push eax */
  push32((uint32_t)(EAX));
  /* 101aceb4 call 0x101ac6b4 */
  push32(0x101aceb9u); f_101ac6b4();
  /* 101aceb9 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 101acebc mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 101acebf and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 101acec3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101acec6 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 101acec8 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 101acecb dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 101acece mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 101aced0 jne 0x101ace88 */
  if (!C.zf) goto L_101ace88;
  /* 101aced2 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_101aced5:;
  /* 101aced5 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 101aced8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101aced9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101aceda cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101acedd lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 101acee0 jl 0x101acf12 */
  if ((C.sf!=C.of)) goto L_101acf12;
L_101acee2:;
  /* 101acee2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acee4 jb 0x101acef5 */
  if (C.cf) goto L_101acef5;
  /* 101acee6 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101acee9 jne 0x101acef1 */
  if (!C.zf) goto L_101acef1;
  /* 101aceeb mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 101aceee dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101aceef jmp 0x101acee2 */
  goto L_101acee2;
L_101acef1:;
  /* 101acef1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acef3 jae 0x101acef9 */
  if (!C.cf) goto L_101acef9;
L_101acef5:;
  /* 101acef5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101acef6 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_101acef9:;
  /* 101acef9 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_101acefb:;
  /* 101acefb sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101acefd sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101aceff mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 101acf02 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 101acf05 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_101acf0a:;
  /* 101acf0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_101acf0d:;
  /* 101acf0d pop edi */
  EDI = (pop32());
  /* 101acf0e pop esi */
  ESI = (pop32());
  /* 101acf0f pop ebx */
  EBX = (pop32());
  /* 101acf10 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101acf11 ret  */
  ESPCHK(0x101acca7u, _esp0);
  ESP += 4; return;
L_101acf12:;
  /* 101acf12 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acf14 jb 0x101acf22 */
  if (C.cf) goto L_101acf22;
  /* 101acf16 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101acf19 jne 0x101acf1e */
  if (!C.zf) goto L_101acf1e;
  /* 101acf1b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101acf1c jmp 0x101acf12 */
  goto L_101acf12;
L_101acf1e:;
  /* 101acf1e cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acf20 jae 0x101acefb */
  if (!C.cf) goto L_101acefb;
L_101acf22:;
  /* 101acf22 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 101acf26 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 101acf2a mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 101acf2e mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_101acf31:;
  /* 101acf31 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 101acf35 push 1 */
  push32((uint32_t)(0x1u));
  /* 101acf37 pop eax */
  EAX = (pop32());
  /* 101acf38 jmp 0x101acf0d */
  goto L_101acf0d;
}

/* FUN_1000cf3a @ 0x101acf3a (27 bytes, 13 insns) */
void f_101acf3a(void) {
  FTRACE(0x101acf3au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101acf3a mov eax, dword ptr [0x101b686c] */
  EAX = (r32((uint32_t)(0x101b686c)));
  /* 101acf3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101acf41 je 0x101acf52 */
  if (C.zf) goto L_101acf52;
  /* 101acf43 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 101acf47 call eax */
  call_ind((uint32_t)(EAX), 0x101acf49u);
  /* 101acf49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101acf4b pop ecx */
  ECX = (pop32());
  /* 101acf4c je 0x101acf52 */
  if (C.zf) goto L_101acf52;
  /* 101acf4e push 1 */
  push32((uint32_t)(0x1u));
  /* 101acf50 pop eax */
  EAX = (pop32());
  /* 101acf51 ret  */
  ESPCHK(0x101acf3au, _esp0);
  ESP += 4; return;
L_101acf52:;
  /* 101acf52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101acf54 ret  */
  ESPCHK(0x101acf3au, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x101acf58 (32 bytes, 18 insns) */
void f_101acf58(void) {
  FTRACE(0x101acf58u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101acf58 push ebp */
  push32((uint32_t)(EBP));
  /* 101acf59 mov ebp, esp */
  EBP = (ESP);
  /* 101acf5b push ebx */
  push32((uint32_t)(EBX));
  /* 101acf5c push esi */
  push32((uint32_t)(ESI));
  /* 101acf5d push edi */
  push32((uint32_t)(EDI));
  /* 101acf5e push ebp */
  push32((uint32_t)(EBP));
  /* 101acf5f push 0 */
  push32((uint32_t)(0x0u));
  /* 101acf61 push 0 */
  push32((uint32_t)(0x0u));
  /* 101acf63 push 0x101acf70 */
  push32((uint32_t)(0x101acf70u));
  /* 101acf68 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101acf6b call 0x101ada54 */
  push32(0x101acf70u); f_101ada54();
  /* 101acf70 pop ebp */
  EBP = (pop32());
  /* 101acf71 pop edi */
  EDI = (pop32());
  /* 101acf72 pop esi */
  ESI = (pop32());
  /* 101acf73 pop ebx */
  EBX = (pop32());
  /* 101acf74 mov esp, ebp */
  ESP = (EBP);
  /* 101acf76 pop ebp */
  EBP = (pop32());
  /* 101acf77 ret  */
  ESPCHK(0x101acf58u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x101acf9a (104 bytes, 33 insns) */
void f_101acf9a(void) {
  FTRACE(0x101acf9au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101acf9a push ebx */
  push32((uint32_t)(EBX));
  /* 101acf9b push esi */
  push32((uint32_t)(ESI));
  /* 101acf9c push edi */
  push32((uint32_t)(EDI));
  /* 101acf9d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101acfa1 push eax */
  push32((uint32_t)(EAX));
  /* 101acfa2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 101acfa4 push 0x101acf78 */
  push32((uint32_t)(0x101acf78u));
  /* 101acfa9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 101acfb0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_101acfb7:;
  /* 101acfb7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 101acfbb mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 101acfbe mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 101acfc1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acfc4 je 0x101acff4 */
  if (C.zf) goto L_101acff4;
  /* 101acfc6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acfca je 0x101acff4 */
  if (C.zf) goto L_101acff4;
  /* 101acfcc lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 101acfcf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 101acfd2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 101acfd6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 101acfd9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101acfde jne 0x101acff2 */
  if (!C.zf) goto L_101acff2;
  /* 101acfe0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 101acfe5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 101acfe9 call 0x101ad02e */
  push32(0x101acfeeu); f_101ad02e();
  /* 101acfee call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x101acff2u);
L_101acff2:;
  /* 101acff2 jmp 0x101acfb7 */
  goto L_101acfb7;
L_101acff4:;
  /* 101acff4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 101acffb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101acffe pop edi */
  EDI = (pop32());
  /* 101acfff pop esi */
  ESI = (pop32());
  /* 101ad000 pop ebx */
  EBX = (pop32());
  /* 101ad001 ret  */
  ESPCHK(0x101acf9au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d02e @ 0x101ad02e (24 bytes, 10 insns) */
void f_101ad02e(void) {
  FTRACE(0x101ad02eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ad02e push ebx */
  push32((uint32_t)(EBX));
  /* 101ad02f push ecx */
  push32((uint32_t)(ECX));
  /* 101ad030 mov ebx, 0x101b3104 */
  EBX = (0x101b3104u);
  /* 101ad035 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ad038 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 101ad03b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 101ad03e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 101ad041 pop ecx */
  ECX = (pop32());
  /* 101ad042 pop ebx */
  EBX = (pop32());
  /* 101ad043 ret 4 */
  ESPCHK(0x101ad02eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d10d @ 0x101ad10d (27 bytes, 11 insns) */
void f_101ad10d(void) {
  FTRACE(0x101ad10du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ad10d push ebp */
  push32((uint32_t)(EBP));
  /* 101ad10e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 101ad112 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 101ad114 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 101ad117 push eax */
  push32((uint32_t)(EAX));
  /* 101ad118 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 101ad11b push eax */
  push32((uint32_t)(EAX));
  /* 101ad11c call 0x101acf9a */
  push32(0x101ad121u); f_101acf9a();
  /* 101ad121 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ad124 pop ebp */
  EBP = (pop32());
  /* 101ad125 ret 4 */
  ESPCHK(0x101ad10du, _esp0);
  ESP += 8; return;
}

/* FUN_1000d128 @ 0x101ad128 (111 bytes, 44 insns) */
void f_101ad128(void) {
  FTRACE(0x101ad128u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ad128 push ebx */
  push32((uint32_t)(EBX));
  /* 101ad129 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101ad12b cmp dword ptr [0x101b6838], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101b6838))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad131 jne 0x101ad146 */
  if (!C.zf) goto L_101ad146;
  /* 101ad133 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101ad137 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad13a jl 0x101ad195 */
  if ((C.sf!=C.of)) goto L_101ad195;
  /* 101ad13c cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad13f jg 0x101ad195 */
  if ((!C.zf&&C.sf==C.of)) goto L_101ad195;
  /* 101ad141 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ad144 pop ebx */
  EBX = (pop32());
  /* 101ad145 ret  */
  ESPCHK(0x101ad128u, _esp0);
  ESP += 4; return;
L_101ad146:;
  /* 101ad146 push esi */
  push32((uint32_t)(ESI));
  /* 101ad147 mov esi, 0x101b69b4 */
  ESI = (0x101b69b4u);
  /* 101ad14c push edi */
  push32((uint32_t)(EDI));
  /* 101ad14d push esi */
  push32((uint32_t)(ESI));
  /* 101ad14e call dword ptr [0x101ae090] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae090))), 0x101ad154u);
  /* 101ad154 cmp dword ptr [0x101b69b0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101b69b0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad15a mov edi, dword ptr [0x101ae08c] */
  EDI = (r32((uint32_t)(0x101ae08c)));
  /* 101ad160 je 0x101ad170 */
  if (C.zf) goto L_101ad170;
  /* 101ad162 push esi */
  push32((uint32_t)(ESI));
  /* 101ad163 call edi */
  call_ind((uint32_t)(EDI), 0x101ad165u);
  /* 101ad165 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101ad167 call 0x101aa033 */
  push32(0x101ad16cu); f_101aa033();
  /* 101ad16c pop ecx */
  ECX = (pop32());
  /* 101ad16d push 1 */
  push32((uint32_t)(0x1u));
  /* 101ad16f pop ebx */
  EBX = (pop32());
L_101ad170:;
  /* 101ad170 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 101ad174 call 0x101ad197 */
  push32(0x101ad179u); f_101ad197();
  /* 101ad179 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101ad17b pop ecx */
  ECX = (pop32());
  /* 101ad17c mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 101ad180 je 0x101ad18c */
  if (C.zf) goto L_101ad18c;
  /* 101ad182 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101ad184 call 0x101aa094 */
  push32(0x101ad189u); f_101aa094();
  /* 101ad189 pop ecx */
  ECX = (pop32());
  /* 101ad18a jmp 0x101ad18f */
  goto L_101ad18f;
L_101ad18c:;
  /* 101ad18c push esi */
  push32((uint32_t)(ESI));
  /* 101ad18d call edi */
  call_ind((uint32_t)(EDI), 0x101ad18fu);
L_101ad18f:;
  /* 101ad18f mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101ad193 pop edi */
  EDI = (pop32());
  /* 101ad194 pop esi */
  ESI = (pop32());
L_101ad195:;
  /* 101ad195 pop ebx */
  EBX = (pop32());
  /* 101ad196 ret  */
  ESPCHK(0x101ad128u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d197 @ 0x101ad197 (204 bytes, 71 insns) */
void f_101ad197(void) {
  FTRACE(0x101ad197u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ad197 push ebp */
  push32((uint32_t)(EBP));
  /* 101ad198 mov ebp, esp */
  EBP = (ESP);
  /* 101ad19a push ecx */
  push32((uint32_t)(ECX));
  /* 101ad19b cmp dword ptr [0x101b6838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101b6838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad1a2 push ebx */
  push32((uint32_t)(EBX));
  /* 101ad1a3 jne 0x101ad1c2 */
  if (!C.zf) goto L_101ad1c2;
  /* 101ad1a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ad1a8 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad1ab jl 0x101ad260 */
  if ((C.sf!=C.of)) goto L_101ad260;
  /* 101ad1b1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad1b4 jg 0x101ad260 */
  if ((!C.zf&&C.sf==C.of)) goto L_101ad260;
  /* 101ad1ba sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ad1bd jmp 0x101ad260 */
  goto L_101ad260;
L_101ad1c2:;
  /* 101ad1c2 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ad1c5 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad1cb jge 0x101ad1f5 */
  if ((C.sf==C.of)) goto L_101ad1f5;
  /* 101ad1cd cmp dword ptr [0x101b0be0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101b0be0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad1d4 jle 0x101ad1e2 */
  if ((C.zf||C.sf!=C.of)) goto L_101ad1e2;
  /* 101ad1d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 101ad1d8 push ebx */
  push32((uint32_t)(EBX));
  /* 101ad1d9 call 0x101a93eb */
  push32(0x101ad1deu); f_101a93eb();
  /* 101ad1de pop ecx */
  ECX = (pop32());
  /* 101ad1df pop ecx */
  ECX = (pop32());
  /* 101ad1e0 jmp 0x101ad1ed */
  goto L_101ad1ed;
L_101ad1e2:;
  /* 101ad1e2 mov eax, dword ptr [0x101b09d0] */
  EAX = (r32((uint32_t)(0x101b09d0)));
  /* 101ad1e7 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 101ad1ea and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_101ad1ed:;
  /* 101ad1ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ad1ef jne 0x101ad1f5 */
  if (!C.zf) goto L_101ad1f5;
L_101ad1f1:;
  /* 101ad1f1 mov eax, ebx */
  EAX = (EBX);
  /* 101ad1f3 jmp 0x101ad260 */
  goto L_101ad260;
L_101ad1f5:;
  /* 101ad1f5 mov edx, dword ptr [0x101b09d0] */
  EDX = (r32((uint32_t)(0x101b09d0)));
  /* 101ad1fb mov eax, ebx */
  EAX = (EBX);
  /* 101ad1fd sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 101ad200 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 101ad203 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 101ad208 je 0x101ad218 */
  if (C.zf) goto L_101ad218;
  /* 101ad20a and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 101ad20e mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 101ad211 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 101ad214 push 2 */
  push32((uint32_t)(0x2u));
  /* 101ad216 jmp 0x101ad221 */
  goto L_101ad221;
L_101ad218:;
  /* 101ad218 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 101ad21c mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 101ad21f push 1 */
  push32((uint32_t)(0x1u));
L_101ad221:;
  /* 101ad221 pop eax */
  EAX = (pop32());
  /* 101ad222 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 101ad225 push 1 */
  push32((uint32_t)(0x1u));
  /* 101ad227 push 0 */
  push32((uint32_t)(0x0u));
  /* 101ad229 push 3 */
  push32((uint32_t)(0x3u));
  /* 101ad22b push ecx */
  push32((uint32_t)(ECX));
  /* 101ad22c push eax */
  push32((uint32_t)(EAX));
  /* 101ad22d lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101ad230 push eax */
  push32((uint32_t)(EAX));
  /* 101ad231 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 101ad236 push dword ptr [0x101b6838] */
  push32((uint32_t)(r32((uint32_t)(0x101b6838))));
  /* 101ad23c call 0x101ac3e6 */
  push32(0x101ad241u); f_101ac3e6();
  /* 101ad241 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ad244 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ad246 je 0x101ad1f1 */
  if (C.zf) goto L_101ad1f1;
  /* 101ad248 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad24b jne 0x101ad253 */
  if (!C.zf) goto L_101ad253;
  /* 101ad24d movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 101ad251 jmp 0x101ad260 */
  goto L_101ad260;
L_101ad253:;
  /* 101ad253 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 101ad257 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 101ad25b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 101ad25e or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_101ad260:;
  /* 101ad260 pop ebx */
  EBX = (pop32());
  /* 101ad261 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101ad262 ret  */
  ESPCHK(0x101ad197u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d263 @ 0x101ad263 (49 bytes, 20 insns) */
void f_101ad263(void) {
  FTRACE(0x101ad263u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ad263 push esi */
  push32((uint32_t)(ESI));
  /* 101ad264 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101ad268 push edi */
  push32((uint32_t)(EDI));
  /* 101ad269 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 101ad26c test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 101ad270 je 0x101ad278 */
  if (C.zf) goto L_101ad278;
  /* 101ad272 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 101ad276 jmp 0x101ad28f */
  goto L_101ad28f;
L_101ad278:;
  /* 101ad278 push esi */
  push32((uint32_t)(ESI));
  /* 101ad279 call 0x101a8fae */
  push32(0x101ad27eu); f_101a8fae();
  /* 101ad27e push esi */
  push32((uint32_t)(ESI));
  /* 101ad27f call 0x101ad294 */
  push32(0x101ad284u); f_101ad294();
  /* 101ad284 push esi */
  push32((uint32_t)(ESI));
  /* 101ad285 mov edi, eax */
  EDI = (EAX);
  /* 101ad287 call 0x101a9000 */
  push32(0x101ad28cu); f_101a9000();
  /* 101ad28c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101ad28f:;
  /* 101ad28f mov eax, edi */
  EAX = (EDI);
  /* 101ad291 pop edi */
  EDI = (pop32());
  /* 101ad292 pop esi */
  ESI = (pop32());
  /* 101ad293 ret  */
  ESPCHK(0x101ad263u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x101ad294 (76 bytes, 30 insns) */
void f_101ad294(void) {
  FTRACE(0x101ad294u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ad294 push esi */
  push32((uint32_t)(ESI));
  /* 101ad295 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101ad299 push edi */
  push32((uint32_t)(EDI));
  /* 101ad29a or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 101ad29d test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 101ad2a1 je 0x101ad2d7 */
  if (C.zf) goto L_101ad2d7;
  /* 101ad2a3 push esi */
  push32((uint32_t)(ESI));
  /* 101ad2a4 call 0x101ac194 */
  push32(0x101ad2a9u); f_101ac194();
  /* 101ad2a9 push esi */
  push32((uint32_t)(ESI));
  /* 101ad2aa mov edi, eax */
  EDI = (EAX);
  /* 101ad2ac call 0x101ad806 */
  push32(0x101ad2b1u); f_101ad806();
  /* 101ad2b1 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 101ad2b4 call 0x101ad726 */
  push32(0x101ad2b9u); f_101ad726();
  /* 101ad2b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ad2bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ad2be jge 0x101ad2c5 */
  if ((C.sf==C.of)) goto L_101ad2c5;
  /* 101ad2c0 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 101ad2c3 jmp 0x101ad2d7 */
  goto L_101ad2d7;
L_101ad2c5:;
  /* 101ad2c5 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 101ad2c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ad2ca je 0x101ad2d7 */
  if (C.zf) goto L_101ad2d7;
  /* 101ad2cc push eax */
  push32((uint32_t)(EAX));
  /* 101ad2cd call 0x101aa1e6 */
  push32(0x101ad2d2u); f_101aa1e6();
  /* 101ad2d2 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 101ad2d6 pop ecx */
  ECX = (pop32());
L_101ad2d7:;
  /* 101ad2d7 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 101ad2db mov eax, edi */
  EAX = (EDI);
  /* 101ad2dd pop edi */
  EDI = (pop32());
  /* 101ad2de pop esi */
  ESI = (pop32());
  /* 101ad2df ret  */
  ESPCHK(0x101ad294u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2e0 @ 0x101ad2e0 (147 bytes, 52 insns) */
void f_101ad2e0(void) {
  FTRACE(0x101ad2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ad2e0 push ebx */
  push32((uint32_t)(EBX));
  /* 101ad2e1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 101ad2e5 cmp ebx, dword ptr [0x101b7d40] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x101b7d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad2eb push esi */
  push32((uint32_t)(ESI));
  /* 101ad2ec push edi */
  push32((uint32_t)(EDI));
  /* 101ad2ed jae 0x101ad361 */
  if (!C.cf) goto L_101ad361;
  /* 101ad2ef mov eax, ebx */
  EAX = (EBX);
  /* 101ad2f1 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 101ad2f4 lea edi, [eax*4 + 0x101b7c40] */
  EDI = ((uint32_t)(EAX*4 + 0x101b7c40));
  /* 101ad2fb mov eax, ebx */
  EAX = (EBX);
  /* 101ad2fd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101ad300 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 101ad303 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 101ad305 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 101ad308 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 101ad30d je 0x101ad361 */
  if (C.zf) goto L_101ad361;
  /* 101ad30f push ebx */
  push32((uint32_t)(EBX));
  /* 101ad310 call 0x101ac064 */
  push32(0x101ad315u); f_101ac064();
  /* 101ad315 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 101ad317 pop ecx */
  ECX = (pop32());
  /* 101ad318 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 101ad31d je 0x101ad348 */
  if (C.zf) goto L_101ad348;
  /* 101ad31f push ebx */
  push32((uint32_t)(EBX));
  /* 101ad320 call 0x101ac022 */
  push32(0x101ad325u); f_101ac022();
  /* 101ad325 pop ecx */
  ECX = (pop32());
  /* 101ad326 push eax */
  push32((uint32_t)(EAX));
  /* 101ad327 call dword ptr [0x101ae0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae0d0))), 0x101ad32du);
  /* 101ad32d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ad32f jne 0x101ad33b */
  if (!C.zf) goto L_101ad33b;
  /* 101ad331 call dword ptr [0x101ae03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae03c))), 0x101ad337u);
  /* 101ad337 mov esi, eax */
  ESI = (EAX);
  /* 101ad339 jmp 0x101ad33d */
  goto L_101ad33d;
L_101ad33b:;
  /* 101ad33b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_101ad33d:;
  /* 101ad33d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101ad33f je 0x101ad356 */
  if (C.zf) goto L_101ad356;
  /* 101ad341 call 0x101abf9a */
  push32(0x101ad346u); f_101abf9a();
  /* 101ad346 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_101ad348:;
  /* 101ad348 call 0x101abf91 */
  push32(0x101ad34du); f_101abf91();
  /* 101ad34d mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101ad353 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_101ad356:;
  /* 101ad356 push ebx */
  push32((uint32_t)(EBX));
  /* 101ad357 call 0x101ac0c3 */
  push32(0x101ad35cu); f_101ac0c3();
  /* 101ad35c pop ecx */
  ECX = (pop32());
  /* 101ad35d mov eax, esi */
  EAX = (ESI);
  /* 101ad35f jmp 0x101ad36f */
  goto L_101ad36f;
L_101ad361:;
  /* 101ad361 call 0x101abf91 */
  push32(0x101ad366u); f_101abf91();
  /* 101ad366 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101ad36c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_101ad36f:;
  /* 101ad36f pop edi */
  EDI = (pop32());
  /* 101ad370 pop esi */
  ESI = (pop32());
  /* 101ad371 pop ebx */
  EBX = (pop32());
  /* 101ad372 ret  */
  ESPCHK(0x101ad2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d410 @ 0x101ad410 (62 bytes, 35 insns) */
void f_101ad410(void) {
  FTRACE(0x101ad410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ad410 push ebp */
  push32((uint32_t)(EBP));
  /* 101ad411 mov ebp, esp */
  EBP = (ESP);
  /* 101ad413 push esi */
  push32((uint32_t)(ESI));
  /* 101ad414 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ad416 push eax */
  push32((uint32_t)(EAX));
  /* 101ad417 push eax */
  push32((uint32_t)(EAX));
  /* 101ad418 push eax */
  push32((uint32_t)(EAX));
  /* 101ad419 push eax */
  push32((uint32_t)(EAX));
  /* 101ad41a push eax */
  push32((uint32_t)(EAX));
  /* 101ad41b push eax */
  push32((uint32_t)(EAX));
  /* 101ad41c push eax */
  push32((uint32_t)(EAX));
  /* 101ad41d push eax */
  push32((uint32_t)(EAX));
  /* 101ad41e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 101ad421 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101ad424:;
  /* 101ad424 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 101ad426 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 101ad428 je 0x101ad431 */
  if (C.zf) goto L_101ad431;
  /* 101ad42a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 101ad42b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x101ad42b");
  /* 101ad42f jmp 0x101ad424 */
  goto L_101ad424;
L_101ad431:;
  /* 101ad431 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 101ad434 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 101ad437 nop  */
  /* nop */
L_101ad438:;
  /* 101ad438 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101ad439 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101ad43b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 101ad43d je 0x101ad446 */
  if (C.zf) goto L_101ad446;
  /* 101ad43f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101ad440 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x101ad440");
  /* 101ad444 jae 0x101ad438 */
  if (!C.cf) goto L_101ad438;
L_101ad446:;
  /* 101ad446 mov eax, ecx */
  EAX = (ECX);
  /* 101ad448 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ad44b pop esi */
  ESI = (pop32());
  /* 101ad44c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101ad44d ret  */
  ESPCHK(0x101ad410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d450 @ 0x101ad450 (58 bytes, 32 insns) */
void f_101ad450(void) {
  FTRACE(0x101ad450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ad450 push ebp */
  push32((uint32_t)(EBP));
  /* 101ad451 mov ebp, esp */
  EBP = (ESP);
  /* 101ad453 push esi */
  push32((uint32_t)(ESI));
  /* 101ad454 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ad456 push eax */
  push32((uint32_t)(EAX));
  /* 101ad457 push eax */
  push32((uint32_t)(EAX));
  /* 101ad458 push eax */
  push32((uint32_t)(EAX));
  /* 101ad459 push eax */
  push32((uint32_t)(EAX));
  /* 101ad45a push eax */
  push32((uint32_t)(EAX));
  /* 101ad45b push eax */
  push32((uint32_t)(EAX));
  /* 101ad45c push eax */
  push32((uint32_t)(EAX));
  /* 101ad45d push eax */
  push32((uint32_t)(EAX));
  /* 101ad45e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 101ad461 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101ad464:;
  /* 101ad464 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 101ad466 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 101ad468 je 0x101ad471 */
  if (C.zf) goto L_101ad471;
  /* 101ad46a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 101ad46b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x101ad46b");
  /* 101ad46f jmp 0x101ad464 */
  goto L_101ad464;
L_101ad471:;
  /* 101ad471 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_101ad474:;
  /* 101ad474 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101ad476 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 101ad478 je 0x101ad484 */
  if (C.zf) goto L_101ad484;
  /* 101ad47a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101ad47b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x101ad47b");
  /* 101ad47f jae 0x101ad474 */
  if (!C.cf) goto L_101ad474;
  /* 101ad481 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_101ad484:;
  /* 101ad484 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ad487 pop esi */
  ESI = (pop32());
  /* 101ad488 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101ad489 ret  */
  ESPCHK(0x101ad450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d48a @ 0x101ad48a (544 bytes, 177 insns) */
void f_101ad48a(void) {
  FTRACE(0x101ad48au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ad48a push ebp */
  push32((uint32_t)(EBP));
  /* 101ad48b mov ebp, esp */
  EBP = (ESP);
  /* 101ad48d sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ad490 push ebx */
  push32((uint32_t)(EBX));
  /* 101ad491 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 101ad494 push esi */
  push32((uint32_t)(ESI));
  /* 101ad495 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 101ad498 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 101ad49c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ad49e push edi */
  push32((uint32_t)(EDI));
  /* 101ad49f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 101ad4a2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 101ad4a5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101ad4a8 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 101ad4ab mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 101ad4af mov edi, ecx */
  EDI = (ECX);
  /* 101ad4b1 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 101ad4b6 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 101ad4b8 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 101ad4ba and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 101ad4bc and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 101ad4c2 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101ad4c6 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 101ad4c9 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 101ad4cc jae 0x101ad68a */
  if (!C.cf) goto L_101ad68a;
  /* 101ad4d2 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101ad4d7 jae 0x101ad68a */
  if (!C.cf) goto L_101ad68a;
  /* 101ad4dd cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101ad4e2 ja 0x101ad68a */
  if ((!C.cf&&!C.zf)) goto L_101ad68a;
  /* 101ad4e8 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101ad4ed ja 0x101ad4f3 */
  if ((!C.cf&&!C.zf)) goto L_101ad4f3;
  /* 101ad4ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ad4f1 jmp 0x101ad52d */
  goto L_101ad52d;
L_101ad4f3:;
  /* 101ad4f3 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 101ad4f6 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 101ad4fb jne 0x101ad515 */
  if (!C.zf) goto L_101ad515;
  /* 101ad4fd inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 101ad500 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 101ad503 jne 0x101ad515 */
  if (!C.zf) goto L_101ad515;
  /* 101ad505 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ad507 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad50a jne 0x101ad517 */
  if (!C.zf) goto L_101ad517;
  /* 101ad50c cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad50e jne 0x101ad517 */
  if (!C.zf) goto L_101ad517;
  /* 101ad510 jmp 0x101ad684 */
  goto L_101ad684;
L_101ad515:;
  /* 101ad515 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101ad517:;
  /* 101ad517 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101ad51a jne 0x101ad53a */
  if (!C.zf) goto L_101ad53a;
  /* 101ad51c inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 101ad51f test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 101ad522 jne 0x101ad53a */
  if (!C.zf) goto L_101ad53a;
  /* 101ad524 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad527 jne 0x101ad53a */
  if (!C.zf) goto L_101ad53a;
  /* 101ad529 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad52b jne 0x101ad53a */
  if (!C.zf) goto L_101ad53a;
L_101ad52d:;
  /* 101ad52d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 101ad530 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 101ad533 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101ad535 jmp 0x101ad6a5 */
  goto L_101ad6a5;
L_101ad53a:;
  /* 101ad53a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 101ad53d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 101ad540 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101ad543 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_101ad54a:;
  /* 101ad54a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 101ad54d add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ad54f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad553 jle 0x101ad59e */
  if ((C.zf||C.sf!=C.of)) goto L_101ad59e;
  /* 101ad555 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ad557 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 101ad55a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 101ad55d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101ad560 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 101ad563 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_101ad566:;
  /* 101ad566 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101ad569 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 101ad56c movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 101ad56f movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 101ad572 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101ad575 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101ad578 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ad57b push ecx */
  push32((uint32_t)(ECX));
  /* 101ad57c push eax */
  push32((uint32_t)(EAX));
  /* 101ad57d push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 101ad57f call 0x101ac635 */
  push32(0x101ad584u); f_101ac635();
  /* 101ad584 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ad587 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ad589 je 0x101ad591 */
  if (C.zf) goto L_101ad591;
  /* 101ad58b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101ad58e inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_101ad591:;
  /* 101ad591 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 101ad595 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 101ad599 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 101ad59c jne 0x101ad566 */
  if (!C.zf) goto L_101ad566;
L_101ad59e:;
  /* 101ad59e add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 101ad5a2 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 101ad5a5 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 101ad5a8 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad5ac jg 0x101ad54a */
  if ((!C.zf&&C.sf==C.of)) goto L_101ad54a;
  /* 101ad5ae add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 101ad5b5 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101ad5ba jle 0x101ad5e1 */
  if ((C.zf||C.sf!=C.of)) goto L_101ad5e1;
L_101ad5bc:;
  /* 101ad5bc test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 101ad5c0 jne 0x101ad5da */
  if (!C.zf) goto L_101ad5da;
  /* 101ad5c2 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 101ad5c5 push eax */
  push32((uint32_t)(EAX));
  /* 101ad5c6 call 0x101ac6b4 */
  push32(0x101ad5cbu); f_101ac6b4();
  /* 101ad5cb add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 101ad5d2 pop ecx */
  ECX = (pop32());
  /* 101ad5d3 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101ad5d8 jg 0x101ad5bc */
  if ((!C.zf&&C.sf==C.of)) goto L_101ad5bc;
L_101ad5da:;
  /* 101ad5da cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101ad5df jg 0x101ad61a */
  if ((!C.zf&&C.sf==C.of)) goto L_101ad61a;
L_101ad5e1:;
  /* 101ad5e1 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 101ad5e8 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101ad5ed jge 0x101ad61a */
  if ((C.sf==C.of)) goto L_101ad61a;
  /* 101ad5ef movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 101ad5f3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101ad5f5 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 101ad5f8 mov ebx, eax */
  EBX = (EAX);
L_101ad5fa:;
  /* 101ad5fa test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 101ad5fe je 0x101ad603 */
  if (C.zf) goto L_101ad603;
  /* 101ad600 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_101ad603:;
  /* 101ad603 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 101ad606 push eax */
  push32((uint32_t)(EAX));
  /* 101ad607 call 0x101ac6e2 */
  push32(0x101ad60cu); f_101ac6e2();
  /* 101ad60c dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101ad60d pop ecx */
  ECX = (pop32());
  /* 101ad60e jne 0x101ad5fa */
  if (!C.zf) goto L_101ad5fa;
  /* 101ad610 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad614 je 0x101ad61a */
  if (C.zf) goto L_101ad61a;
  /* 101ad616 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_101ad61a:;
  /* 101ad61a cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101ad620 ja 0x101ad631 */
  if ((!C.cf&&!C.zf)) goto L_101ad631;
  /* 101ad622 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 101ad625 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101ad62a cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad62f jne 0x101ad666 */
  if (!C.zf) goto L_101ad666;
L_101ad631:;
  /* 101ad631 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad635 jne 0x101ad663 */
  if (!C.zf) goto L_101ad663;
  /* 101ad637 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 101ad63b cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad63f jne 0x101ad65e */
  if (!C.zf) goto L_101ad65e;
  /* 101ad641 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 101ad645 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101ad64b jne 0x101ad658 */
  if (!C.zf) goto L_101ad658;
  /* 101ad64d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 101ad650 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 101ad656 jmp 0x101ad666 */
  goto L_101ad666;
L_101ad658:;
  /* 101ad658 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 101ad65c jmp 0x101ad666 */
  goto L_101ad666;
L_101ad65e:;
  /* 101ad65e inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 101ad661 jmp 0x101ad666 */
  goto L_101ad666;
L_101ad663:;
  /* 101ad663 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_101ad666:;
  /* 101ad666 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ad669 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101ad66d jae 0x101ad68a */
  if (!C.cf) goto L_101ad68a;
  /* 101ad66f mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 101ad673 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 101ad675 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 101ad678 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 101ad67b mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 101ad67e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 101ad681 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_101ad684:;
  /* 101ad684 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 101ad688 jmp 0x101ad6a5 */
  goto L_101ad6a5;
L_101ad68a:;
  /* 101ad68a neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 101ad68d sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ad68f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 101ad693 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 101ad699 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101ad69f and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 101ad6a2 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_101ad6a5:;
  /* 101ad6a5 pop edi */
  EDI = (pop32());
  /* 101ad6a6 pop esi */
  ESI = (pop32());
  /* 101ad6a7 pop ebx */
  EBX = (pop32());
  /* 101ad6a8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101ad6a9 ret  */
  ESPCHK(0x101ad48au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6aa @ 0x101ad6aa (124 bytes, 52 insns) */
void f_101ad6aa(void) {
  FTRACE(0x101ad6aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ad6aa push ebp */
  push32((uint32_t)(EBP));
  /* 101ad6ab mov ebp, esp */
  EBP = (ESP);
  /* 101ad6ad sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ad6b0 push ebx */
  push32((uint32_t)(EBX));
  /* 101ad6b1 mov ebx, 0x101b3220 */
  EBX = (0x101b3220u);
  /* 101ad6b6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101ad6b8 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ad6bb cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad6be je 0x101ad723 */
  if (C.zf) goto L_101ad723;
  /* 101ad6c0 jge 0x101ad6d2 */
  if ((C.sf==C.of)) goto L_101ad6d2;
  /* 101ad6c2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101ad6c5 mov ebx, 0x101b3380 */
  EBX = (0x101b3380u);
  /* 101ad6ca neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101ad6cc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101ad6cf sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_101ad6d2:;
  /* 101ad6d2 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad6d5 jne 0x101ad6dd */
  if (!C.zf) goto L_101ad6dd;
  /* 101ad6d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ad6da mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_101ad6dd:;
  /* 101ad6dd cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad6e0 je 0x101ad723 */
  if (C.zf) goto L_101ad723;
  /* 101ad6e2 push esi */
  push32((uint32_t)(ESI));
  /* 101ad6e3 push edi */
  push32((uint32_t)(EDI));
L_101ad6e4:;
  /* 101ad6e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101ad6e7 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ad6ea sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 101ad6ee and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 101ad6f1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad6f3 je 0x101ad71c */
  if (C.zf) goto L_101ad71c;
  /* 101ad6f5 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 101ad6f8 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101ad6fe lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 101ad701 jb 0x101ad70f */
  if (C.cf) goto L_101ad70f;
  /* 101ad703 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 101ad706 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101ad707 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101ad708 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101ad709 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 101ad70c lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_101ad70f:;
  /* 101ad70f push esi */
  push32((uint32_t)(ESI));
  /* 101ad710 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101ad713 call 0x101ad48a */
  push32(0x101ad718u); f_101ad48a();
  /* 101ad718 pop ecx */
  ECX = (pop32());
  /* 101ad719 pop ecx */
  ECX = (pop32());
  /* 101ad71a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_101ad71c:;
  /* 101ad71c cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad71f jne 0x101ad6e4 */
  if (!C.zf) goto L_101ad6e4;
  /* 101ad721 pop edi */
  EDI = (pop32());
  /* 101ad722 pop esi */
  ESI = (pop32());
L_101ad723:;
  /* 101ad723 pop ebx */
  EBX = (pop32());
  /* 101ad724 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101ad725 ret  */
  ESPCHK(0x101ad6aau, _esp0);
  ESP += 4; return;
}

/* FUN_1000d726 @ 0x101ad726 (93 bytes, 32 insns) */
void f_101ad726(void) {
  FTRACE(0x101ad726u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ad726 push esi */
  push32((uint32_t)(ESI));
  /* 101ad727 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101ad72b cmp esi, dword ptr [0x101b7d40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101b7d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad731 jae 0x101ad76b */
  if (!C.cf) goto L_101ad76b;
  /* 101ad733 mov ecx, esi */
  ECX = (ESI);
  /* 101ad735 mov eax, esi */
  EAX = (ESI);
  /* 101ad737 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101ad73a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101ad73d mov ecx, dword ptr [ecx*4 + 0x101b7c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101b7c40)));
  /* 101ad744 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101ad747 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 101ad74c je 0x101ad76b */
  if (C.zf) goto L_101ad76b;
  /* 101ad74e push edi */
  push32((uint32_t)(EDI));
  /* 101ad74f push esi */
  push32((uint32_t)(ESI));
  /* 101ad750 call 0x101ac064 */
  push32(0x101ad755u); f_101ac064();
  /* 101ad755 push esi */
  push32((uint32_t)(ESI));
  /* 101ad756 call 0x101ad783 */
  push32(0x101ad75bu); f_101ad783();
  /* 101ad75b push esi */
  push32((uint32_t)(ESI));
  /* 101ad75c mov edi, eax */
  EDI = (EAX);
  /* 101ad75e call 0x101ac0c3 */
  push32(0x101ad763u); f_101ac0c3();
  /* 101ad763 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ad766 mov eax, edi */
  EAX = (EDI);
  /* 101ad768 pop edi */
  EDI = (pop32());
  /* 101ad769 pop esi */
  ESI = (pop32());
  /* 101ad76a ret  */
  ESPCHK(0x101ad726u, _esp0);
  ESP += 4; return;
L_101ad76b:;
  /* 101ad76b call 0x101abf91 */
  push32(0x101ad770u); f_101abf91();
  /* 101ad770 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101ad776 call 0x101abf9a */
  push32(0x101ad77bu); f_101abf9a();
  /* 101ad77b and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101ad77e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101ad781 pop esi */
  ESI = (pop32());
  /* 101ad782 ret  */
  ESPCHK(0x101ad726u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d783 @ 0x101ad783 (131 bytes, 52 insns) */
void f_101ad783(void) {
  FTRACE(0x101ad783u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ad783 push esi */
  push32((uint32_t)(ESI));
  /* 101ad784 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101ad788 push edi */
  push32((uint32_t)(EDI));
  /* 101ad789 push esi */
  push32((uint32_t)(ESI));
  /* 101ad78a call 0x101ac022 */
  push32(0x101ad78fu); f_101ac022();
  /* 101ad78f cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad792 pop ecx */
  ECX = (pop32());
  /* 101ad793 je 0x101ad7d1 */
  if (C.zf) goto L_101ad7d1;
  /* 101ad795 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad798 je 0x101ad79f */
  if (C.zf) goto L_101ad79f;
  /* 101ad79a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad79d jne 0x101ad7b5 */
  if (!C.zf) goto L_101ad7b5;
L_101ad79f:;
  /* 101ad79f push 2 */
  push32((uint32_t)(0x2u));
  /* 101ad7a1 call 0x101ac022 */
  push32(0x101ad7a6u); f_101ac022();
  /* 101ad7a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101ad7a8 mov edi, eax */
  EDI = (EAX);
  /* 101ad7aa call 0x101ac022 */
  push32(0x101ad7afu); f_101ac022();
  /* 101ad7af pop ecx */
  ECX = (pop32());
  /* 101ad7b0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad7b2 pop ecx */
  ECX = (pop32());
  /* 101ad7b3 je 0x101ad7d1 */
  if (C.zf) goto L_101ad7d1;
L_101ad7b5:;
  /* 101ad7b5 push esi */
  push32((uint32_t)(ESI));
  /* 101ad7b6 call 0x101ac022 */
  push32(0x101ad7bbu); f_101ac022();
  /* 101ad7bb pop ecx */
  ECX = (pop32());
  /* 101ad7bc push eax */
  push32((uint32_t)(EAX));
  /* 101ad7bd call dword ptr [0x101ae0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae0d4))), 0x101ad7c3u);
  /* 101ad7c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ad7c5 jne 0x101ad7d1 */
  if (!C.zf) goto L_101ad7d1;
  /* 101ad7c7 call dword ptr [0x101ae03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae03c))), 0x101ad7cdu);
  /* 101ad7cd mov edi, eax */
  EDI = (EAX);
  /* 101ad7cf jmp 0x101ad7d3 */
  goto L_101ad7d3;
L_101ad7d1:;
  /* 101ad7d1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_101ad7d3:;
  /* 101ad7d3 push esi */
  push32((uint32_t)(ESI));
  /* 101ad7d4 call 0x101abfa3 */
  push32(0x101ad7d9u); f_101abfa3();
  /* 101ad7d9 mov eax, esi */
  EAX = (ESI);
  /* 101ad7db and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 101ad7de sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 101ad7e1 pop ecx */
  ECX = (pop32());
  /* 101ad7e2 mov eax, dword ptr [eax*4 + 0x101b7c40] */
  EAX = (r32((uint32_t)(EAX*4 + 0x101b7c40)));
  /* 101ad7e9 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 101ad7ec and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 101ad7f1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101ad7f3 je 0x101ad801 */
  if (C.zf) goto L_101ad801;
  /* 101ad7f5 push edi */
  push32((uint32_t)(EDI));
  /* 101ad7f6 call 0x101abf1e */
  push32(0x101ad7fbu); f_101abf1e();
  /* 101ad7fb pop ecx */
  ECX = (pop32());
  /* 101ad7fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101ad7ff jmp 0x101ad803 */
  goto L_101ad803;
L_101ad801:;
  /* 101ad801 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101ad803:;
  /* 101ad803 pop edi */
  EDI = (pop32());
  /* 101ad804 pop esi */
  ESI = (pop32());
  /* 101ad805 ret  */
  ESPCHK(0x101ad783u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x101ad806 (43 bytes, 17 insns) */
void f_101ad806(void) {
  FTRACE(0x101ad806u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ad806 push esi */
  push32((uint32_t)(ESI));
  /* 101ad807 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101ad80b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 101ad80e test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 101ad810 je 0x101ad82f */
  if (C.zf) goto L_101ad82f;
  /* 101ad812 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 101ad814 je 0x101ad82f */
  if (C.zf) goto L_101ad82f;
  /* 101ad816 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 101ad819 call 0x101aa1e6 */
  push32(0x101ad81eu); f_101aa1e6();
  /* 101ad81e and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 101ad824 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ad826 pop ecx */
  ECX = (pop32());
  /* 101ad827 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101ad829 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 101ad82c mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_101ad82f:;
  /* 101ad82f pop esi */
  ESI = (pop32());
  /* 101ad830 ret  */
  ESPCHK(0x101ad806u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d840 @ 0x101ad840 (208 bytes, 85 insns) */
void f_101ad840(void) {
  FTRACE(0x101ad840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ad840 push ebp */
  push32((uint32_t)(EBP));
  /* 101ad841 mov ebp, esp */
  EBP = (ESP);
  /* 101ad843 push edi */
  push32((uint32_t)(EDI));
  /* 101ad844 push esi */
  push32((uint32_t)(ESI));
  /* 101ad845 push ebx */
  push32((uint32_t)(EBX));
  /* 101ad846 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101ad849 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 101ad84c lea eax, [0x101b6830] */
  EAX = ((uint32_t)(0x101b6830));
  /* 101ad852 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad856 jne 0x101ad893 */
  if (!C.zf) goto L_101ad893;
  /* 101ad858 mov al, 0xff */
  AL = (0xffu);
  /* 101ad85a mov edi, edi */
  EDI = (EDI);
L_101ad85c:;
  /* 101ad85c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 101ad85e je 0x101ad88e */
  if (C.zf) goto L_101ad88e;
  /* 101ad860 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101ad862 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101ad863 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 101ad865 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101ad866 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ad868 je 0x101ad85c */
  if (C.zf) goto L_101ad85c;
  /* 101ad86a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101ad86c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ad86e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101ad870 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 101ad873 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 101ad875 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 101ad877 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 101ad879 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101ad87b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ad87d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101ad87f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 101ad882 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 101ad884 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 101ad886 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ad888 je 0x101ad85c */
  if (C.zf) goto L_101ad85c;
  /* 101ad88a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101ad88c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_101ad88e:;
  /* 101ad88e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 101ad891 jmp 0x101ad90b */
  goto L_101ad90b;
L_101ad893:;
  /* 101ad893 lock inc dword ptr [0x101b69b4] */
  x86_unimpl("lock inc @ 0x101ad893");
  /* 101ad89a cmp dword ptr [0x101b69b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101b69b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad8a1 jg 0x101ad8a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_101ad8a7;
  /* 101ad8a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 101ad8a5 jmp 0x101ad8bc */
  goto L_101ad8bc;
L_101ad8a7:;
  /* 101ad8a7 lock dec dword ptr [0x101b69b4] */
  x86_unimpl("lock dec @ 0x101ad8a7");
  /* 101ad8ae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101ad8b0 call 0x101aa033 */
  push32(0x101ad8b5u); f_101aa033();
  /* 101ad8b5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_101ad8bc:;
  /* 101ad8bc mov eax, 0xff */
  EAX = (0xffu);
  /* 101ad8c1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101ad8c3 nop  */
  /* nop */
L_101ad8c4:;
  /* 101ad8c4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 101ad8c6 je 0x101ad8ef */
  if (C.zf) goto L_101ad8ef;
  /* 101ad8c8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101ad8ca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101ad8cb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101ad8cd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101ad8ce cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ad8d0 je 0x101ad8c4 */
  if (C.zf) goto L_101ad8c4;
  /* 101ad8d2 push eax */
  push32((uint32_t)(EAX));
  /* 101ad8d3 push ebx */
  push32((uint32_t)(EBX));
  /* 101ad8d4 call 0x101a94cf */
  push32(0x101ad8d9u); f_101a94cf();
  /* 101ad8d9 mov ebx, eax */
  EBX = (EAX);
  /* 101ad8db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ad8de call 0x101a94cf */
  push32(0x101ad8e3u); f_101a94cf();
  /* 101ad8e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ad8e6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ad8e8 je 0x101ad8c4 */
  if (C.zf) goto L_101ad8c4;
  /* 101ad8ea sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ad8ec sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_101ad8ef:;
  /* 101ad8ef mov ebx, eax */
  EBX = (EAX);
  /* 101ad8f1 pop eax */
  EAX = (pop32());
  /* 101ad8f2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ad8f4 jne 0x101ad8ff */
  if (!C.zf) goto L_101ad8ff;
  /* 101ad8f6 lock dec dword ptr [0x101b69b4] */
  x86_unimpl("lock dec @ 0x101ad8f6");
  /* 101ad8fd jmp 0x101ad909 */
  goto L_101ad909;
L_101ad8ff:;
  /* 101ad8ff push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101ad901 call 0x101aa094 */
  push32(0x101ad906u); f_101aa094();
  /* 101ad906 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101ad909:;
  /* 101ad909 mov eax, ebx */
  EAX = (EBX);
L_101ad90b:;
  /* 101ad90b pop ebx */
  EBX = (pop32());
  /* 101ad90c pop esi */
  ESI = (pop32());
  /* 101ad90d pop edi */
  EDI = (pop32());
  /* 101ad90e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101ad90f ret  */
  ESPCHK(0x101ad840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d910 @ 0x101ad910 (257 bytes, 103 insns) */
void f_101ad910(void) {
  FTRACE(0x101ad910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ad910 push ebp */
  push32((uint32_t)(EBP));
  /* 101ad911 mov ebp, esp */
  EBP = (ESP);
  /* 101ad913 push edi */
  push32((uint32_t)(EDI));
  /* 101ad914 push esi */
  push32((uint32_t)(ESI));
  /* 101ad915 push ebx */
  push32((uint32_t)(EBX));
  /* 101ad916 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 101ad919 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101ad91b je 0x101ada0a */
  if (C.zf) goto L_101ada0a;
  /* 101ad921 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 101ad924 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101ad927 lea eax, [0x101b6830] */
  EAX = ((uint32_t)(0x101b6830));
  /* 101ad92d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad931 jne 0x101ad981 */
  if (!C.zf) goto L_101ad981;
  /* 101ad933 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 101ad935 mov bl, 0x5a */
  BL = (0x5au);
  /* 101ad937 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 101ad939 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101ad93c:;
  /* 101ad93c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 101ad93e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 101ad940 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 101ad942 je 0x101ad965 */
  if (C.zf) goto L_101ad965;
  /* 101ad944 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 101ad946 je 0x101ad965 */
  if (C.zf) goto L_101ad965;
  /* 101ad948 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101ad949 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101ad94a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ad94c jb 0x101ad954 */
  if (C.cf) goto L_101ad954;
  /* 101ad94e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ad950 ja 0x101ad954 */
  if ((!C.cf&&!C.zf)) goto L_101ad954;
  /* 101ad952 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_101ad954:;
  /* 101ad954 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ad956 jb 0x101ad95e */
  if (C.cf) goto L_101ad95e;
  /* 101ad958 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ad95a ja 0x101ad95e */
  if ((!C.cf&&!C.zf)) goto L_101ad95e;
  /* 101ad95c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_101ad95e:;
  /* 101ad95e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ad960 jne 0x101ad96f */
  if (!C.zf) goto L_101ad96f;
  /* 101ad962 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101ad963 jne 0x101ad93c */
  if (!C.zf) goto L_101ad93c;
L_101ad965:;
  /* 101ad965 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101ad967 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ad969 je 0x101ada0a */
  if (C.zf) goto L_101ada0a;
L_101ad96f:;
  /* 101ad96f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 101ad974 jb 0x101ada0a */
  if (C.cf) goto L_101ada0a;
  /* 101ad97a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 101ad97c jmp 0x101ada0a */
  goto L_101ada0a;
L_101ad981:;
  /* 101ad981 lock inc dword ptr [0x101b69b4] */
  x86_unimpl("lock inc @ 0x101ad981");
  /* 101ad988 cmp dword ptr [0x101b69b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101b69b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad98f jg 0x101ad995 */
  if ((!C.zf&&C.sf==C.of)) goto L_101ad995;
  /* 101ad991 push 0 */
  push32((uint32_t)(0x0u));
  /* 101ad993 jmp 0x101ad9ae */
  goto L_101ad9ae;
L_101ad995:;
  /* 101ad995 lock dec dword ptr [0x101b69b4] */
  x86_unimpl("lock dec @ 0x101ad995");
  /* 101ad99c mov ebx, ecx */
  EBX = (ECX);
  /* 101ad99e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101ad9a0 call 0x101aa033 */
  push32(0x101ad9a5u); f_101aa033();
  /* 101ad9a5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 101ad9ac mov ecx, ebx */
  ECX = (EBX);
L_101ad9ae:;
  /* 101ad9ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ad9b0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101ad9b2 mov edi, edi */
  EDI = (EDI);
L_101ad9b4:;
  /* 101ad9b4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101ad9b6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ad9b8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101ad9ba je 0x101ad9df */
  if (C.zf) goto L_101ad9df;
  /* 101ad9bc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101ad9be je 0x101ad9df */
  if (C.zf) goto L_101ad9df;
  /* 101ad9c0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101ad9c1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101ad9c2 push ecx */
  push32((uint32_t)(ECX));
  /* 101ad9c3 push eax */
  push32((uint32_t)(EAX));
  /* 101ad9c4 push ebx */
  push32((uint32_t)(EBX));
  /* 101ad9c5 call 0x101a94cf */
  push32(0x101ad9cau); f_101a94cf();
  /* 101ad9ca mov ebx, eax */
  EBX = (EAX);
  /* 101ad9cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ad9cf call 0x101a94cf */
  push32(0x101ad9d4u); f_101a94cf();
  /* 101ad9d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ad9d7 pop ecx */
  ECX = (pop32());
  /* 101ad9d8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad9da jne 0x101ad9e5 */
  if (!C.zf) goto L_101ad9e5;
  /* 101ad9dc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101ad9dd jne 0x101ad9b4 */
  if (!C.zf) goto L_101ad9b4;
L_101ad9df:;
  /* 101ad9df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101ad9e1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ad9e3 je 0x101ad9ee */
  if (C.zf) goto L_101ad9ee;
L_101ad9e5:;
  /* 101ad9e5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 101ad9ea jb 0x101ad9ee */
  if (C.cf) goto L_101ad9ee;
  /* 101ad9ec neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_101ad9ee:;
  /* 101ad9ee pop eax */
  EAX = (pop32());
  /* 101ad9ef or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ad9f1 jne 0x101ad9fc */
  if (!C.zf) goto L_101ad9fc;
  /* 101ad9f3 lock dec dword ptr [0x101b69b4] */
  x86_unimpl("lock dec @ 0x101ad9f3");
  /* 101ad9fa jmp 0x101ada0a */
  goto L_101ada0a;
L_101ad9fc:;
  /* 101ad9fc mov ebx, ecx */
  EBX = (ECX);
  /* 101ad9fe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101ada00 call 0x101aa094 */
  push32(0x101ada05u); f_101aa094();
  /* 101ada05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ada08 mov ecx, ebx */
  ECX = (EBX);
L_101ada0a:;
  /* 101ada0a mov eax, ecx */
  EAX = (ECX);
  /* 101ada0c pop ebx */
  EBX = (pop32());
  /* 101ada0d pop esi */
  ESI = (pop32());
  /* 101ada0e pop edi */
  EDI = (pop32());
  /* 101ada0f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101ada10 ret  */
  ESPCHK(0x101ad910u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x101ada54 (6 bytes, 1 insns) */
void f_101ada54(void) {
  FTRACE(0x101ada54u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ada54 jmp dword ptr [0x101ae0cc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101ae0cc)))); return;
}

