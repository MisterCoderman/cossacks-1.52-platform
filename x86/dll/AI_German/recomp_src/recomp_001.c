#include "recomp.h"

/* FUN_10009245 @ 0x100a9245 (53 bytes, 25 insns) */
void f_100a9245(void) {
  FTRACE(0x100a9245u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a9245 push ebp */
  push32((uint32_t)(EBP));
  /* 100a9246 mov ebp, esp */
  EBP = (ESP);
  /* 100a9248 push ecx */
  push32((uint32_t)(ECX));
  /* 100a9249 push esi */
  push32((uint32_t)(ESI));
  /* 100a924a wait  */
  /* wait (no observable integer/reg state) */
  /* 100a924b fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 100a924e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 100a9251 call 0x100a9290 */
  push32(0x100a9256u); f_100a9290();
  /* 100a9256 mov esi, eax */
  ESI = (EAX);
  /* 100a9258 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100a925b not eax */
  EAX = (~(EAX));
  /* 100a925d and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 100a925f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a9262 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 100a9265 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 100a9267 push esi */
  push32((uint32_t)(ESI));
  /* 100a9268 call 0x100a9322 */
  push32(0x100a926du); f_100a9322();
  /* 100a926d pop ecx */
  ECX = (pop32());
  /* 100a926e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100a9271 pop ecx */
  ECX = (pop32());
  /* 100a9272 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 100a9275 mov eax, esi */
  EAX = (ESI);
  /* 100a9277 pop esi */
  ESI = (pop32());
  /* 100a9278 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a9279 ret  */
  ESPCHK(0x100a9245u, _esp0);
  ESP += 4; return;
}

/* FUN_1000927a @ 0x100a927a (22 bytes, 8 insns) */
void f_100a927a(void) {
  FTRACE(0x100a927au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a927a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a927e and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100a9283 push eax */
  push32((uint32_t)(EAX));
  /* 100a9284 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 100a9288 call 0x100a9245 */
  push32(0x100a928du); f_100a9245();
  /* 100a928d pop ecx */
  ECX = (pop32());
  /* 100a928e pop ecx */
  ECX = (pop32());
  /* 100a928f ret  */
  ESPCHK(0x100a927au, _esp0);
  ESP += 4; return;
}

/* FUN_10009290 @ 0x100a9290 (146 bytes, 58 insns) */
void f_100a9290(void) {
  FTRACE(0x100a9290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a9290 push ebx */
  push32((uint32_t)(EBX));
  /* 100a9291 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a9295 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a9297 push ebp */
  push32((uint32_t)(EBP));
  /* 100a9298 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 100a929b push edi */
  push32((uint32_t)(EDI));
  /* 100a929c je 0x100a92a1 */
  if (C.zf) goto L_100a92a1;
  /* 100a929e push 0x10 */
  push32((uint32_t)(0x10u));
  /* 100a92a0 pop eax */
  EAX = (pop32());
L_100a92a1:;
  /* 100a92a1 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 100a92a4 je 0x100a92a8 */
  if (C.zf) goto L_100a92a8;
  /* 100a92a6 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_100a92a8:;
  /* 100a92a8 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 100a92ab je 0x100a92af */
  if (C.zf) goto L_100a92af;
  /* 100a92ad or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_100a92af:;
  /* 100a92af test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 100a92b2 je 0x100a92b6 */
  if (C.zf) goto L_100a92b6;
  /* 100a92b4 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_100a92b6:;
  /* 100a92b6 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 100a92b9 je 0x100a92bd */
  if (C.zf) goto L_100a92bd;
  /* 100a92bb or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_100a92bd:;
  /* 100a92bd test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 100a92c0 je 0x100a92c7 */
  if (C.zf) goto L_100a92c7;
  /* 100a92c2 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_100a92c7:;
  /* 100a92c7 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 100a92ca push esi */
  push32((uint32_t)(ESI));
  /* 100a92cb mov edx, ecx */
  EDX = (ECX);
  /* 100a92cd mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 100a92d2 mov edi, 0x300 */
  EDI = (0x300u);
  /* 100a92d7 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 100a92d9 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 100a92de je 0x100a92ff */
  if (C.zf) goto L_100a92ff;
  /* 100a92e0 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a92e6 je 0x100a92fc */
  if (C.zf) goto L_100a92fc;
  /* 100a92e8 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a92ee je 0x100a92f8 */
  if (C.zf) goto L_100a92f8;
  /* 100a92f0 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a92f2 jne 0x100a92ff */
  if (!C.zf) goto L_100a92ff;
  /* 100a92f4 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 100a92f6 jmp 0x100a92ff */
  goto L_100a92ff;
L_100a92f8:;
  /* 100a92f8 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 100a92fa jmp 0x100a92ff */
  goto L_100a92ff;
L_100a92fc:;
  /* 100a92fc or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_100a92ff:;
  /* 100a92ff and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100a9301 pop esi */
  ESI = (pop32());
  /* 100a9302 je 0x100a930f */
  if (C.zf) goto L_100a930f;
  /* 100a9304 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9306 jne 0x100a9314 */
  if (!C.zf) goto L_100a9314;
  /* 100a9308 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 100a930d jmp 0x100a9314 */
  goto L_100a9314;
L_100a930f:;
  /* 100a930f or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_100a9314:;
  /* 100a9314 pop edi */
  EDI = (pop32());
  /* 100a9315 pop ebp */
  EBP = (pop32());
  /* 100a9316 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 100a9319 pop ebx */
  EBX = (pop32());
  /* 100a931a je 0x100a9321 */
  if (C.zf) goto L_100a9321;
  /* 100a931c or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_100a9321:;
  /* 100a9321 ret  */
  ESPCHK(0x100a9290u, _esp0);
  ESP += 4; return;
}

/* FUN_10009322 @ 0x100a9322 (137 bytes, 53 insns) */
void f_100a9322(void) {
  FTRACE(0x100a9322u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a9322 push ebx */
  push32((uint32_t)(EBX));
  /* 100a9323 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a9327 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a9329 push esi */
  push32((uint32_t)(ESI));
  /* 100a932a test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 100a932d je 0x100a9332 */
  if (C.zf) goto L_100a9332;
  /* 100a932f push 1 */
  push32((uint32_t)(0x1u));
  /* 100a9331 pop eax */
  EAX = (pop32());
L_100a9332:;
  /* 100a9332 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 100a9335 je 0x100a9339 */
  if (C.zf) goto L_100a9339;
  /* 100a9337 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_100a9339:;
  /* 100a9339 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 100a933c je 0x100a9340 */
  if (C.zf) goto L_100a9340;
  /* 100a933e or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_100a9340:;
  /* 100a9340 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 100a9343 je 0x100a9347 */
  if (C.zf) goto L_100a9347;
  /* 100a9345 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_100a9347:;
  /* 100a9347 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 100a934a je 0x100a934e */
  if (C.zf) goto L_100a934e;
  /* 100a934c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_100a934e:;
  /* 100a934e test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 100a9354 je 0x100a9358 */
  if (C.zf) goto L_100a9358;
  /* 100a9356 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_100a9358:;
  /* 100a9358 mov ecx, ebx */
  ECX = (EBX);
  /* 100a935a mov edx, 0x300 */
  EDX = (0x300u);
  /* 100a935f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 100a9361 mov esi, 0x200 */
  ESI = (0x200u);
  /* 100a9366 je 0x100a9385 */
  if (C.zf) goto L_100a9385;
  /* 100a9368 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a936e je 0x100a9382 */
  if (C.zf) goto L_100a9382;
  /* 100a9370 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9372 je 0x100a937d */
  if (C.zf) goto L_100a937d;
  /* 100a9374 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9376 jne 0x100a9385 */
  if (!C.zf) goto L_100a9385;
  /* 100a9378 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 100a937b jmp 0x100a9385 */
  goto L_100a9385;
L_100a937d:;
  /* 100a937d or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 100a9380 jmp 0x100a9385 */
  goto L_100a9385;
L_100a9382:;
  /* 100a9382 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_100a9385:;
  /* 100a9385 mov ecx, ebx */
  ECX = (EBX);
  /* 100a9387 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 100a938d je 0x100a939b */
  if (C.zf) goto L_100a939b;
  /* 100a938f cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9395 jne 0x100a939d */
  if (!C.zf) goto L_100a939d;
  /* 100a9397 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 100a9399 jmp 0x100a939d */
  goto L_100a939d;
L_100a939b:;
  /* 100a939b or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_100a939d:;
  /* 100a939d pop esi */
  ESI = (pop32());
  /* 100a939e test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 100a93a4 pop ebx */
  EBX = (pop32());
  /* 100a93a5 je 0x100a93aa */
  if (C.zf) goto L_100a93aa;
  /* 100a93a7 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_100a93aa:;
  /* 100a93aa ret  */
  ESPCHK(0x100a9322u, _esp0);
  ESP += 4; return;
}

/* FUN_100093ab @ 0x100a93ab (117 bytes, 46 insns) */
void f_100a93ab(void) {
  FTRACE(0x100a93abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a93ab push ebp */
  push32((uint32_t)(EBP));
  /* 100a93ac mov ebp, esp */
  EBP = (ESP);
  /* 100a93ae push ecx */
  push32((uint32_t)(ECX));
  /* 100a93af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a93b2 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 100a93b5 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a93bb ja 0x100a93c9 */
  if ((!C.cf&&!C.zf)) goto L_100a93c9;
  /* 100a93bd mov ecx, dword ptr [0x100b09c0] */
  ECX = (r32((uint32_t)(0x100b09c0)));
  /* 100a93c3 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 100a93c7 jmp 0x100a941b */
  goto L_100a941b;
L_100a93c9:;
  /* 100a93c9 mov ecx, eax */
  ECX = (EAX);
  /* 100a93cb push esi */
  push32((uint32_t)(ESI));
  /* 100a93cc mov esi, dword ptr [0x100b09c0] */
  ESI = (r32((uint32_t)(0x100b09c0)));
  /* 100a93d2 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 100a93d5 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 100a93d8 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 100a93dd pop esi */
  ESI = (pop32());
  /* 100a93de je 0x100a93ee */
  if (C.zf) goto L_100a93ee;
  /* 100a93e0 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 100a93e4 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 100a93e7 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 100a93ea push 2 */
  push32((uint32_t)(0x2u));
  /* 100a93ec jmp 0x100a93f7 */
  goto L_100a93f7;
L_100a93ee:;
  /* 100a93ee and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100a93f2 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 100a93f5 push 1 */
  push32((uint32_t)(0x1u));
L_100a93f7:;
  /* 100a93f7 pop eax */
  EAX = (pop32());
  /* 100a93f8 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 100a93fb push 1 */
  push32((uint32_t)(0x1u));
  /* 100a93fd push 0 */
  push32((uint32_t)(0x0u));
  /* 100a93ff push 0 */
  push32((uint32_t)(0x0u));
  /* 100a9401 push ecx */
  push32((uint32_t)(ECX));
  /* 100a9402 push eax */
  push32((uint32_t)(EAX));
  /* 100a9403 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 100a9406 push eax */
  push32((uint32_t)(EAX));
  /* 100a9407 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a9409 call 0x100ac25d */
  push32(0x100a940eu); f_100ac25d();
  /* 100a940e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9411 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a9413 jne 0x100a9417 */
  if (!C.zf) goto L_100a9417;
  /* 100a9415 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a9416 ret  */
  ESPCHK(0x100a93abu, _esp0);
  ESP += 4; return;
L_100a9417:;
  /* 100a9417 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_100a941b:;
  /* 100a941b and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 100a941e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a941f ret  */
  ESPCHK(0x100a93abu, _esp0);
  ESP += 4; return;
}

/* FUN_10009420 @ 0x100a9420 (111 bytes, 44 insns) */
void f_100a9420(void) {
  FTRACE(0x100a9420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a9420 push ebx */
  push32((uint32_t)(EBX));
  /* 100a9421 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100a9423 cmp dword ptr [0x100b6828], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100b6828))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9429 jne 0x100a943e */
  if (!C.zf) goto L_100a943e;
  /* 100a942b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a942f cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9432 jl 0x100a948d */
  if ((C.sf!=C.of)) goto L_100a948d;
  /* 100a9434 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9437 jg 0x100a948d */
  if ((!C.zf&&C.sf==C.of)) goto L_100a948d;
  /* 100a9439 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a943c pop ebx */
  EBX = (pop32());
  /* 100a943d ret  */
  ESPCHK(0x100a9420u, _esp0);
  ESP += 4; return;
L_100a943e:;
  /* 100a943e push esi */
  push32((uint32_t)(ESI));
  /* 100a943f mov esi, 0x100b69a4 */
  ESI = (0x100b69a4u);
  /* 100a9444 push edi */
  push32((uint32_t)(EDI));
  /* 100a9445 push esi */
  push32((uint32_t)(ESI));
  /* 100a9446 call dword ptr [0x100ae090] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae090))), 0x100a944cu);
  /* 100a944c cmp dword ptr [0x100b69a0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100b69a0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9452 mov edi, dword ptr [0x100ae08c] */
  EDI = (r32((uint32_t)(0x100ae08c)));
  /* 100a9458 je 0x100a9468 */
  if (C.zf) goto L_100a9468;
  /* 100a945a push esi */
  push32((uint32_t)(ESI));
  /* 100a945b call edi */
  call_ind((uint32_t)(EDI), 0x100a945du);
  /* 100a945d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100a945f call 0x100a9ff3 */
  push32(0x100a9464u); f_100a9ff3();
  /* 100a9464 pop ecx */
  ECX = (pop32());
  /* 100a9465 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a9467 pop ebx */
  EBX = (pop32());
L_100a9468:;
  /* 100a9468 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 100a946c call 0x100a948f */
  push32(0x100a9471u); f_100a948f();
  /* 100a9471 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100a9473 pop ecx */
  ECX = (pop32());
  /* 100a9474 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 100a9478 je 0x100a9484 */
  if (C.zf) goto L_100a9484;
  /* 100a947a push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100a947c call 0x100aa054 */
  push32(0x100a9481u); f_100aa054();
  /* 100a9481 pop ecx */
  ECX = (pop32());
  /* 100a9482 jmp 0x100a9487 */
  goto L_100a9487;
L_100a9484:;
  /* 100a9484 push esi */
  push32((uint32_t)(ESI));
  /* 100a9485 call edi */
  call_ind((uint32_t)(EDI), 0x100a9487u);
L_100a9487:;
  /* 100a9487 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100a948b pop edi */
  EDI = (pop32());
  /* 100a948c pop esi */
  ESI = (pop32());
L_100a948d:;
  /* 100a948d pop ebx */
  EBX = (pop32());
  /* 100a948e ret  */
  ESPCHK(0x100a9420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000948f @ 0x100a948f (203 bytes, 78 insns) */
void f_100a948f(void) {
  FTRACE(0x100a948fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a948f push ebp */
  push32((uint32_t)(EBP));
  /* 100a9490 mov ebp, esp */
  EBP = (ESP);
  /* 100a9492 push ecx */
  push32((uint32_t)(ECX));
  /* 100a9493 cmp dword ptr [0x100b6828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100b6828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a949a push ebx */
  push32((uint32_t)(EBX));
  /* 100a949b push esi */
  push32((uint32_t)(ESI));
  /* 100a949c push edi */
  push32((uint32_t)(EDI));
  /* 100a949d jne 0x100a94bc */
  if (!C.zf) goto L_100a94bc;
  /* 100a949f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a94a2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a94a5 jl 0x100a9555 */
  if ((C.sf!=C.of)) goto L_100a9555;
  /* 100a94ab cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a94ae jg 0x100a9555 */
  if ((!C.zf&&C.sf==C.of)) goto L_100a9555;
  /* 100a94b4 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a94b7 jmp 0x100a9555 */
  goto L_100a9555;
L_100a94bc:;
  /* 100a94bc mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a94bf mov edi, 0x100 */
  EDI = (0x100u);
  /* 100a94c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a94c6 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a94c8 pop esi */
  ESI = (pop32());
  /* 100a94c9 jge 0x100a94f0 */
  if ((C.sf==C.of)) goto L_100a94f0;
  /* 100a94cb cmp dword ptr [0x100b0bd0], esi */
  { uint32_t _a=(r32((uint32_t)(0x100b0bd0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a94d1 jle 0x100a94de */
  if ((C.zf||C.sf!=C.of)) goto L_100a94de;
  /* 100a94d3 push esi */
  push32((uint32_t)(ESI));
  /* 100a94d4 push ebx */
  push32((uint32_t)(EBX));
  /* 100a94d5 call 0x100a93ab */
  push32(0x100a94dau); f_100a93ab();
  /* 100a94da pop ecx */
  ECX = (pop32());
  /* 100a94db pop ecx */
  ECX = (pop32());
  /* 100a94dc jmp 0x100a94e8 */
  goto L_100a94e8;
L_100a94de:;
  /* 100a94de mov eax, dword ptr [0x100b09c0] */
  EAX = (r32((uint32_t)(0x100b09c0)));
  /* 100a94e3 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 100a94e6 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_100a94e8:;
  /* 100a94e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a94ea jne 0x100a94f0 */
  if (!C.zf) goto L_100a94f0;
L_100a94ec:;
  /* 100a94ec mov eax, ebx */
  EAX = (EBX);
  /* 100a94ee jmp 0x100a9555 */
  goto L_100a9555;
L_100a94f0:;
  /* 100a94f0 mov edx, dword ptr [0x100b09c0] */
  EDX = (r32((uint32_t)(0x100b09c0)));
  /* 100a94f6 mov eax, ebx */
  EAX = (EBX);
  /* 100a94f8 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 100a94fb movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 100a94fe test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 100a9503 je 0x100a9514 */
  if (C.zf) goto L_100a9514;
  /* 100a9505 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 100a9509 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a950b mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 100a950e mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 100a9511 pop eax */
  EAX = (pop32());
  /* 100a9512 jmp 0x100a951d */
  goto L_100a951d;
L_100a9514:;
  /* 100a9514 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 100a9518 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 100a951b mov eax, esi */
  EAX = (ESI);
L_100a951d:;
  /* 100a951d push esi */
  push32((uint32_t)(ESI));
  /* 100a951e push 0 */
  push32((uint32_t)(0x0u));
  /* 100a9520 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 100a9523 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a9525 push ecx */
  push32((uint32_t)(ECX));
  /* 100a9526 push eax */
  push32((uint32_t)(EAX));
  /* 100a9527 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100a952a push eax */
  push32((uint32_t)(EAX));
  /* 100a952b push edi */
  push32((uint32_t)(EDI));
  /* 100a952c push dword ptr [0x100b6828] */
  push32((uint32_t)(r32((uint32_t)(0x100b6828))));
  /* 100a9532 call 0x100ac3a6 */
  push32(0x100a9537u); f_100ac3a6();
  /* 100a9537 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a953a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a953c je 0x100a94ec */
  if (C.zf) goto L_100a94ec;
  /* 100a953e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9540 jne 0x100a9548 */
  if (!C.zf) goto L_100a9548;
  /* 100a9542 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 100a9546 jmp 0x100a9555 */
  goto L_100a9555;
L_100a9548:;
  /* 100a9548 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 100a954c movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 100a9550 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 100a9553 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_100a9555:;
  /* 100a9555 pop edi */
  EDI = (pop32());
  /* 100a9556 pop esi */
  ESI = (pop32());
  /* 100a9557 pop ebx */
  EBX = (pop32());
  /* 100a9558 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a9559 ret  */
  ESPCHK(0x100a948fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000955a @ 0x100a955a (73 bytes, 36 insns) */
void f_100a955a(void) {
  FTRACE(0x100a955au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a955a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a955e push esi */
  push32((uint32_t)(ESI));
  /* 100a955f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100a9561 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100a9562 pop ecx */
  ECX = (pop32());
  /* 100a9563 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100a9565 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100a9567 mov esi, eax */
  ESI = (EAX);
  /* 100a9569 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100a956d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100a956e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100a9570 pop ecx */
  ECX = (pop32());
  /* 100a9571 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a9575 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a9577 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 100a957a shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 100a957c not edx */
  EDX = (~(EDX));
  /* 100a957e test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 100a9581 jne 0x100a959f */
  if (!C.zf) goto L_100a959f;
  /* 100a9583 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100a9584 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9587 jge 0x100a959a */
  if ((C.sf==C.of)) goto L_100a959a;
  /* 100a9589 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_100a958c:;
  /* 100a958c cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a958f jne 0x100a959f */
  if (!C.zf) goto L_100a959f;
  /* 100a9591 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100a9592 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9595 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9598 jl 0x100a958c */
  if ((C.sf!=C.of)) goto L_100a958c;
L_100a959a:;
  /* 100a959a push 1 */
  push32((uint32_t)(0x1u));
  /* 100a959c pop eax */
  EAX = (pop32());
  /* 100a959d pop esi */
  ESI = (pop32());
  /* 100a959e ret  */
  ESPCHK(0x100a955au, _esp0);
  ESP += 4; return;
L_100a959f:;
  /* 100a959f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a95a1 pop esi */
  ESI = (pop32());
  /* 100a95a2 ret  */
  ESPCHK(0x100a955au, _esp0);
  ESP += 4; return;
}

/* FUN_100095a3 @ 0x100a95a3 (86 bytes, 43 insns) */
void f_100a95a3(void) {
  FTRACE(0x100a95a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a95a3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a95a7 push ebx */
  push32((uint32_t)(EBX));
  /* 100a95a8 push esi */
  push32((uint32_t)(ESI));
  /* 100a95a9 push edi */
  push32((uint32_t)(EDI));
  /* 100a95aa push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100a95ac mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 100a95b0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100a95b1 pop ecx */
  ECX = (pop32());
  /* 100a95b2 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100a95b4 mov esi, eax */
  ESI = (EAX);
  /* 100a95b6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 100a95ba cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100a95bb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100a95bd lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 100a95c0 push edi */
  push32((uint32_t)(EDI));
  /* 100a95c1 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100a95c3 pop ecx */
  ECX = (pop32());
  /* 100a95c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a95c6 pop eax */
  EAX = (pop32());
  /* 100a95c7 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a95c9 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 100a95cb push eax */
  push32((uint32_t)(EAX));
  /* 100a95cc push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 100a95ce call 0x100ac5f5 */
  push32(0x100a95d3u); f_100ac5f5();
  /* 100a95d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a95d6 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100a95d7 js 0x100a95f5 */
  if (C.sf) goto L_100a95f5;
  /* 100a95d9 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_100a95dc:;
  /* 100a95dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a95de je 0x100a95f5 */
  if (C.zf) goto L_100a95f5;
  /* 100a95e0 push edi */
  push32((uint32_t)(EDI));
  /* 100a95e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a95e3 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 100a95e5 call 0x100ac5f5 */
  push32(0x100a95eau); f_100ac5f5();
  /* 100a95ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a95ed dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100a95ee sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a95f1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100a95f3 jge 0x100a95dc */
  if ((C.sf==C.of)) goto L_100a95dc;
L_100a95f5:;
  /* 100a95f5 pop edi */
  EDI = (pop32());
  /* 100a95f6 pop esi */
  ESI = (pop32());
  /* 100a95f7 pop ebx */
  EBX = (pop32());
  /* 100a95f8 ret  */
  ESPCHK(0x100a95a3u, _esp0);
  ESP += 4; return;
}

/* FUN_100095f9 @ 0x100a95f9 (140 bytes, 71 insns) */
void f_100a95f9(void) {
  FTRACE(0x100a95f9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a95f9 push ebp */
  push32((uint32_t)(EBP));
  /* 100a95fa mov ebp, esp */
  EBP = (ESP);
  /* 100a95fc push ecx */
  push32((uint32_t)(ECX));
  /* 100a95fd push ecx */
  push32((uint32_t)(ECX));
  /* 100a95fe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100a9601 push ebx */
  push32((uint32_t)(EBX));
  /* 100a9602 push esi */
  push32((uint32_t)(ESI));
  /* 100a9603 push edi */
  push32((uint32_t)(EDI));
  /* 100a9604 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 100a9607 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100a9609 pop ecx */
  ECX = (pop32());
  /* 100a960a and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100a960e lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 100a9611 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100a9613 mov eax, ebx */
  EAX = (EBX);
  /* 100a9615 pop esi */
  ESI = (pop32());
  /* 100a9616 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100a9617 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100a9619 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100a961b mov ecx, eax */
  ECX = (EAX);
  /* 100a961d mov eax, ebx */
  EAX = (EBX);
  /* 100a961f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100a9620 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100a9622 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a9625 pop esi */
  ESI = (pop32());
  /* 100a9626 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a9628 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100a962b lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 100a962e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100a9631 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a9633 pop edx */
  EDX = (pop32());
  /* 100a9634 mov ecx, esi */
  ECX = (ESI);
  /* 100a9636 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 100a9638 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 100a963a je 0x100a965d */
  if (C.zf) goto L_100a965d;
  /* 100a963c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100a963d push ebx */
  push32((uint32_t)(EBX));
  /* 100a963e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100a9641 call 0x100a955a */
  push32(0x100a9646u); f_100a955a();
  /* 100a9646 pop ecx */
  ECX = (pop32());
  /* 100a9647 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a9649 pop ecx */
  ECX = (pop32());
  /* 100a964a jne 0x100a965a */
  if (!C.zf) goto L_100a965a;
  /* 100a964c push edi */
  push32((uint32_t)(EDI));
  /* 100a964d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100a9650 call 0x100a95a3 */
  push32(0x100a9655u); f_100a95a3();
  /* 100a9655 pop ecx */
  ECX = (pop32());
  /* 100a9656 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100a9659 pop ecx */
  ECX = (pop32());
L_100a965a:;
  /* 100a965a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_100a965d:;
  /* 100a965d or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 100a9660 mov ecx, esi */
  ECX = (ESI);
  /* 100a9662 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 100a9664 push 3 */
  push32((uint32_t)(0x3u));
  /* 100a9666 pop ecx */
  ECX = (pop32());
  /* 100a9667 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100a9669 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100a966c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a966d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a966f jge 0x100a967d */
  if ((C.sf==C.of)) goto L_100a967d;
  /* 100a9671 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a9674 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a9676 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 100a9679 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a967b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_100a967d:;
  /* 100a967d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100a9680 pop edi */
  EDI = (pop32());
  /* 100a9681 pop esi */
  ESI = (pop32());
  /* 100a9682 pop ebx */
  EBX = (pop32());
  /* 100a9683 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a9684 ret  */
  ESPCHK(0x100a95f9u, _esp0);
  ESP += 4; return;
}

/* FUN_10009685 @ 0x100a9685 (27 bytes, 13 insns) */
void f_100a9685(void) {
  FTRACE(0x100a9685u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a9685 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a9689 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a968d push esi */
  push32((uint32_t)(ESI));
  /* 100a968e push 3 */
  push32((uint32_t)(0x3u));
  /* 100a9690 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a9692 pop edx */
  EDX = (pop32());
L_100a9693:;
  /* 100a9693 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 100a9695 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 100a9698 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a969b dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100a969c jne 0x100a9693 */
  if (!C.zf) goto L_100a9693;
  /* 100a969e pop esi */
  ESI = (pop32());
  /* 100a969f ret  */
  ESPCHK(0x100a9685u, _esp0);
  ESP += 4; return;
}

/* FUN_100096a0 @ 0x100a96a0 (12 bytes, 8 insns) */
void f_100a96a0(void) {
  FTRACE(0x100a96a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a96a0 push edi */
  push32((uint32_t)(EDI));
  /* 100a96a1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 100a96a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a96a7 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100a96a8 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100a96a9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100a96aa pop edi */
  EDI = (pop32());
  /* 100a96ab ret  */
  ESPCHK(0x100a96a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096ac @ 0x100a96ac (27 bytes, 13 insns) */
void f_100a96ac(void) {
  FTRACE(0x100a96acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a96ac mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a96b0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_100a96b2:;
  /* 100a96b2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a96b5 jne 0x100a96c4 */
  if (!C.zf) goto L_100a96c4;
  /* 100a96b7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100a96b8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a96bb cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a96be jl 0x100a96b2 */
  if ((C.sf!=C.of)) goto L_100a96b2;
  /* 100a96c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a96c2 pop eax */
  EAX = (pop32());
  /* 100a96c3 ret  */
  ESPCHK(0x100a96acu, _esp0);
  ESP += 4; return;
L_100a96c4:;
  /* 100a96c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a96c6 ret  */
  ESPCHK(0x100a96acu, _esp0);
  ESP += 4; return;
}

/* FUN_100096c7 @ 0x100a96c7 (141 bytes, 64 insns) */
void f_100a96c7(void) {
  FTRACE(0x100a96c7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a96c7 push ebp */
  push32((uint32_t)(EBP));
  /* 100a96c8 mov ebp, esp */
  EBP = (ESP);
  /* 100a96ca sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a96cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100a96d0 push ebx */
  push32((uint32_t)(EBX));
  /* 100a96d1 push esi */
  push32((uint32_t)(ESI));
  /* 100a96d2 push edi */
  push32((uint32_t)(EDI));
  /* 100a96d3 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100a96d5 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 100a96d8 pop ebx */
  EBX = (pop32());
  /* 100a96d9 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 100a96dc cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100a96dd mov ecx, ebx */
  ECX = (EBX);
  /* 100a96df mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 100a96e6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100a96e8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 100a96eb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100a96ee cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100a96ef idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100a96f1 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 100a96f5 mov ecx, edx */
  ECX = (EDX);
  /* 100a96f7 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 100a96f9 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a96fb not esi */
  ESI = (~(ESI));
L_100a96fd:;
  /* 100a96fd mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 100a96ff mov ecx, eax */
  ECX = (EAX);
  /* 100a9701 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 100a9703 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100a9706 mov ecx, edx */
  ECX = (EDX);
  /* 100a9708 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 100a970a or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 100a970d mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 100a970f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100a9712 mov ecx, ebx */
  ECX = (EBX);
  /* 100a9714 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9717 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 100a9719 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 100a971c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100a971f jne 0x100a96fd */
  if (!C.zf) goto L_100a96fd;
  /* 100a9721 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 100a9724 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a9726 pop ebx */
  EBX = (pop32());
  /* 100a9727 mov esi, edi */
  ESI = (EDI);
  /* 100a9729 push 8 */
  push32((uint32_t)(0x8u));
  /* 100a972b pop ecx */
  ECX = (pop32());
  /* 100a972c shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_100a972f:;
  /* 100a972f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9731 jl 0x100a9742 */
  if ((C.sf!=C.of)) goto L_100a9742;
  /* 100a9733 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a9736 mov eax, ecx */
  EAX = (ECX);
  /* 100a9738 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a973a mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 100a973d mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 100a9740 jmp 0x100a9749 */
  goto L_100a9749;
L_100a9742:;
  /* 100a9742 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a9745 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_100a9749:;
  /* 100a9749 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100a974a sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a974d jns 0x100a972f */
  if (!C.sf) goto L_100a972f;
  /* 100a974f pop edi */
  EDI = (pop32());
  /* 100a9750 pop esi */
  ESI = (pop32());
  /* 100a9751 pop ebx */
  EBX = (pop32());
  /* 100a9752 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a9753 ret  */
  ESPCHK(0x100a96c7u, _esp0);
  ESP += 4; return;
}

/* FUN_10009754 @ 0x100a9754 (364 bytes, 138 insns) */
void f_100a9754(void) {
  FTRACE(0x100a9754u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a9754 push ebp */
  push32((uint32_t)(EBP));
  /* 100a9755 mov ebp, esp */
  EBP = (ESP);
  /* 100a9757 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a975a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a975d push ebx */
  push32((uint32_t)(EBX));
  /* 100a975e push esi */
  push32((uint32_t)(ESI));
  /* 100a975f push edi */
  push32((uint32_t)(EDI));
  /* 100a9760 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 100a9764 mov ebx, ecx */
  EBX = (ECX);
  /* 100a9766 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 100a976c mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 100a976f mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 100a9772 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 100a9775 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 100a9778 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 100a977b mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 100a977e and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 100a9784 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a978a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100a978d shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 100a9790 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9796 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100a9799 jne 0x100a97c1 */
  if (!C.zf) goto L_100a97c1;
  /* 100a979b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100a979e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100a97a0 push eax */
  push32((uint32_t)(EAX));
  /* 100a97a1 call 0x100a96ac */
  push32(0x100a97a6u); f_100a96ac();
  /* 100a97a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a97a8 pop ecx */
  ECX = (pop32());
  /* 100a97a9 jne 0x100a9880 */
  if (!C.zf) goto L_100a9880;
  /* 100a97af lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100a97b2 push eax */
  push32((uint32_t)(EAX));
  /* 100a97b3 call 0x100a96a0 */
  push32(0x100a97b8u); f_100a96a0();
  /* 100a97b8 pop ecx */
  ECX = (pop32());
L_100a97b9:;
  /* 100a97b9 push 2 */
  push32((uint32_t)(0x2u));
L_100a97bb:;
  /* 100a97bb pop eax */
  EAX = (pop32());
  /* 100a97bc jmp 0x100a9882 */
  goto L_100a9882;
L_100a97c1:;
  /* 100a97c1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100a97c4 push eax */
  push32((uint32_t)(EAX));
  /* 100a97c5 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 100a97c8 push eax */
  push32((uint32_t)(EAX));
  /* 100a97c9 call 0x100a9685 */
  push32(0x100a97ceu); f_100a9685();
  /* 100a97ce push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 100a97d1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100a97d4 push eax */
  push32((uint32_t)(EAX));
  /* 100a97d5 call 0x100a95f9 */
  push32(0x100a97dau); f_100a95f9();
  /* 100a97da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a97dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a97df je 0x100a97e2 */
  if (C.zf) goto L_100a97e2;
  /* 100a97e1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_100a97e2:;
  /* 100a97e2 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 100a97e5 mov ecx, eax */
  ECX = (EAX);
  /* 100a97e7 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a97ea cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a97ec jge 0x100a97fa */
  if ((C.sf==C.of)) goto L_100a97fa;
  /* 100a97ee lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100a97f1 push eax */
  push32((uint32_t)(EAX));
  /* 100a97f2 call 0x100a96a0 */
  push32(0x100a97f7u); f_100a96a0();
  /* 100a97f7 pop ecx */
  ECX = (pop32());
  /* 100a97f8 jmp 0x100a9836 */
  goto L_100a9836;
L_100a97fa:;
  /* 100a97fa cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a97fc jg 0x100a983d */
  if ((!C.zf&&C.sf==C.of)) goto L_100a983d;
  /* 100a97fe sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a9800 mov esi, eax */
  ESI = (EAX);
  /* 100a9802 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 100a9805 push eax */
  push32((uint32_t)(EAX));
  /* 100a9806 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100a9809 push eax */
  push32((uint32_t)(EAX));
  /* 100a980a call 0x100a9685 */
  push32(0x100a980fu); f_100a9685();
  /* 100a980f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100a9812 push esi */
  push32((uint32_t)(ESI));
  /* 100a9813 push eax */
  push32((uint32_t)(EAX));
  /* 100a9814 call 0x100a96c7 */
  push32(0x100a9819u); f_100a96c7();
  /* 100a9819 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 100a981c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100a981f push eax */
  push32((uint32_t)(EAX));
  /* 100a9820 call 0x100a95f9 */
  push32(0x100a9825u); f_100a95f9();
  /* 100a9825 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 100a9828 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a9829 push eax */
  push32((uint32_t)(EAX));
  /* 100a982a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100a982d push eax */
  push32((uint32_t)(EAX));
  /* 100a982e call 0x100a96c7 */
  push32(0x100a9833u); f_100a96c7();
  /* 100a9833 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a9836:;
  /* 100a9836 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100a9838 jmp 0x100a97b9 */
  goto L_100a97b9;
L_100a983d:;
  /* 100a983d cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a983f jl 0x100a9869 */
  if ((C.sf!=C.of)) goto L_100a9869;
  /* 100a9841 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100a9844 push eax */
  push32((uint32_t)(EAX));
  /* 100a9845 call 0x100a96a0 */
  push32(0x100a984au); f_100a96a0();
  /* 100a984a push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 100a984d or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 100a9851 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100a9854 push eax */
  push32((uint32_t)(EAX));
  /* 100a9855 call 0x100a96c7 */
  push32(0x100a985au); f_100a96c7();
  /* 100a985a mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 100a985d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9860 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9862 push 1 */
  push32((uint32_t)(0x1u));
  /* 100a9864 jmp 0x100a97bb */
  goto L_100a97bb;
L_100a9869:;
  /* 100a9869 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 100a986c mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 100a986f and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 100a9873 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100a9876 push eax */
  push32((uint32_t)(EAX));
  /* 100a9877 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9879 call 0x100a96c7 */
  push32(0x100a987eu); f_100a96c7();
  /* 100a987e pop ecx */
  ECX = (pop32());
  /* 100a987f pop ecx */
  ECX = (pop32());
L_100a9880:;
  /* 100a9880 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100a9882:;
  /* 100a9882 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100a9884 pop ecx */
  ECX = (pop32());
  /* 100a9885 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a9888 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 100a988b shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 100a988d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a9890 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 100a9892 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a9894 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 100a989a or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 100a989c or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 100a989f cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a98a2 jne 0x100a98b1 */
  if (!C.zf) goto L_100a98b1;
  /* 100a98a4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100a98a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 100a98aa mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 100a98ad mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 100a98af jmp 0x100a98bb */
  goto L_100a98bb;
L_100a98b1:;
  /* 100a98b1 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a98b4 jne 0x100a98bb */
  if (!C.zf) goto L_100a98bb;
  /* 100a98b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100a98b9 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_100a98bb:;
  /* 100a98bb pop edi */
  EDI = (pop32());
  /* 100a98bc pop esi */
  ESI = (pop32());
  /* 100a98bd pop ebx */
  EBX = (pop32());
  /* 100a98be leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a98bf ret  */
  ESPCHK(0x100a9754u, _esp0);
  ESP += 4; return;
}

/* FUN_100098c0 @ 0x100a98c0 (22 bytes, 6 insns) */
void f_100a98c0(void) {
  FTRACE(0x100a98c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a98c0 push 0x100b0be0 */
  push32((uint32_t)(0x100b0be0u));
  /* 100a98c5 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100a98c9 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100a98cd call 0x100a9754 */
  push32(0x100a98d2u); f_100a9754();
  /* 100a98d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a98d5 ret  */
  ESPCHK(0x100a98c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100098d6 @ 0x100a98d6 (22 bytes, 6 insns) */
void f_100a98d6(void) {
  FTRACE(0x100a98d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a98d6 push 0x100b0bf8 */
  push32((uint32_t)(0x100b0bf8u));
  /* 100a98db push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100a98df push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100a98e3 call 0x100a9754 */
  push32(0x100a98e8u); f_100a9754();
  /* 100a98e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a98eb ret  */
  ESPCHK(0x100a98d6u, _esp0);
  ESP += 4; return;
}

/* FUN_100098ec @ 0x100a98ec (45 bytes, 21 insns) */
void f_100a98ec(void) {
  FTRACE(0x100a98ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a98ec push ebp */
  push32((uint32_t)(EBP));
  /* 100a98ed mov ebp, esp */
  EBP = (ESP);
  /* 100a98ef sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a98f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a98f4 push eax */
  push32((uint32_t)(EAX));
  /* 100a98f5 push eax */
  push32((uint32_t)(EAX));
  /* 100a98f6 push eax */
  push32((uint32_t)(EAX));
  /* 100a98f7 push eax */
  push32((uint32_t)(EAX));
  /* 100a98f8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100a98fb lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 100a98fe push eax */
  push32((uint32_t)(EAX));
  /* 100a98ff lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100a9902 push eax */
  push32((uint32_t)(EAX));
  /* 100a9903 call 0x100ac796 */
  push32(0x100a9908u); f_100ac796();
  /* 100a9908 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100a990b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100a990e push eax */
  push32((uint32_t)(EAX));
  /* 100a990f call 0x100a98c0 */
  push32(0x100a9914u); f_100a98c0();
  /* 100a9914 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9917 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a9918 ret  */
  ESPCHK(0x100a98ecu, _esp0);
  ESP += 4; return;
}

/* FUN_10009919 @ 0x100a9919 (45 bytes, 21 insns) */
void f_100a9919(void) {
  FTRACE(0x100a9919u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a9919 push ebp */
  push32((uint32_t)(EBP));
  /* 100a991a mov ebp, esp */
  EBP = (ESP);
  /* 100a991c sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a991f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a9921 push eax */
  push32((uint32_t)(EAX));
  /* 100a9922 push eax */
  push32((uint32_t)(EAX));
  /* 100a9923 push eax */
  push32((uint32_t)(EAX));
  /* 100a9924 push eax */
  push32((uint32_t)(EAX));
  /* 100a9925 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100a9928 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 100a992b push eax */
  push32((uint32_t)(EAX));
  /* 100a992c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100a992f push eax */
  push32((uint32_t)(EAX));
  /* 100a9930 call 0x100ac796 */
  push32(0x100a9935u); f_100ac796();
  /* 100a9935 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100a9938 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100a993b push eax */
  push32((uint32_t)(EAX));
  /* 100a993c call 0x100a98d6 */
  push32(0x100a9941u); f_100a98d6();
  /* 100a9941 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9944 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a9945 ret  */
  ESPCHK(0x100a9919u, _esp0);
  ESP += 4; return;
}

/* FUN_10009946 @ 0x100a9946 (119 bytes, 57 insns) */
void f_100a9946(void) {
  FTRACE(0x100a9946u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a9946 push ebp */
  push32((uint32_t)(EBP));
  /* 100a9947 mov ebp, esp */
  EBP = (ESP);
  /* 100a9949 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 100a994c push ebx */
  push32((uint32_t)(EBX));
  /* 100a994d mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 100a9950 push esi */
  push32((uint32_t)(ESI));
  /* 100a9951 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100a9954 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 100a9957 push edi */
  push32((uint32_t)(EDI));
  /* 100a9958 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 100a995b mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 100a995e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100a9960 mov eax, edi */
  EAX = (EDI);
  /* 100a9962 jle 0x100a9983 */
  if ((C.zf||C.sf!=C.of)) goto L_100a9983;
  /* 100a9964 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100a9967 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_100a9969:;
  /* 100a9969 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 100a996b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100a996d je 0x100a9975 */
  if (C.zf) goto L_100a9975;
  /* 100a996f movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 100a9972 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100a9973 jmp 0x100a9978 */
  goto L_100a9978;
L_100a9975:;
  /* 100a9975 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 100a9977 pop edx */
  EDX = (pop32());
L_100a9978:;
  /* 100a9978 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 100a997a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a997b dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 100a997e jne 0x100a9969 */
  if (!C.zf) goto L_100a9969;
  /* 100a9980 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_100a9983:;
  /* 100a9983 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 100a9986 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100a9988 jl 0x100a999c */
  if ((C.sf!=C.of)) goto L_100a999c;
  /* 100a998a cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a998d jl 0x100a999c */
  if ((C.sf!=C.of)) goto L_100a999c;
L_100a998f:;
  /* 100a998f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100a9990 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a9993 jne 0x100a999a */
  if (!C.zf) goto L_100a999a;
  /* 100a9995 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 100a9998 jmp 0x100a998f */
  goto L_100a998f;
L_100a999a:;
  /* 100a999a inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_100a999c:;
  /* 100a999c cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100a999f jne 0x100a99a6 */
  if (!C.zf) goto L_100a99a6;
  /* 100a99a1 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 100a99a4 jmp 0x100a99b8 */
  goto L_100a99b8;
L_100a99a6:;
  /* 100a99a6 push edi */
  push32((uint32_t)(EDI));
  /* 100a99a7 call 0x100a9020 */
  push32(0x100a99acu); f_100a9020();
  /* 100a99ac inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100a99ad push eax */
  push32((uint32_t)(EAX));
  /* 100a99ae push edi */
  push32((uint32_t)(EDI));
  /* 100a99af push esi */
  push32((uint32_t)(ESI));
  /* 100a99b0 call 0x100a9c20 */
  push32(0x100a99b5u); f_100a9c20();
  /* 100a99b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100a99b8:;
  /* 100a99b8 pop edi */
  EDI = (pop32());
  /* 100a99b9 pop esi */
  ESI = (pop32());
  /* 100a99ba pop ebx */
  EBX = (pop32());
  /* 100a99bb pop ebp */
  EBP = (pop32());
  /* 100a99bc ret  */
  ESPCHK(0x100a9946u, _esp0);
  ESP += 4; return;
}

/* FUN_100099bd @ 0x100a99bd (92 bytes, 41 insns) */
void f_100a99bd(void) {
  FTRACE(0x100a99bdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a99bd push ebp */
  push32((uint32_t)(EBP));
  /* 100a99be mov ebp, esp */
  EBP = (ESP);
  /* 100a99c0 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a99c3 push esi */
  push32((uint32_t)(ESI));
  /* 100a99c4 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100a99c7 push edi */
  push32((uint32_t)(EDI));
  /* 100a99c8 push eax */
  push32((uint32_t)(EAX));
  /* 100a99c9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100a99cc push eax */
  push32((uint32_t)(EAX));
  /* 100a99cd call 0x100a9a19 */
  push32(0x100a99d2u); f_100a9a19();
  /* 100a99d2 pop ecx */
  ECX = (pop32());
  /* 100a99d3 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 100a99d6 pop ecx */
  ECX = (pop32());
  /* 100a99d7 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 100a99da push eax */
  push32((uint32_t)(EAX));
  /* 100a99db push 0 */
  push32((uint32_t)(0x0u));
  /* 100a99dd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 100a99df sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a99e2 mov edi, esp */
  EDI = (ESP);
  /* 100a99e4 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100a99e5 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100a99e6 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 100a99e8 call 0x100acc67 */
  push32(0x100a99edu); f_100acc67();
  /* 100a99ed mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 100a99f0 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 100a99f3 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 100a99f6 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 100a99fa mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100a99fc movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 100a9a00 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 100a9a03 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 100a9a06 push eax */
  push32((uint32_t)(EAX));
  /* 100a9a07 push edi */
  push32((uint32_t)(EDI));
  /* 100a9a08 call 0x100a9ad0 */
  push32(0x100a9a0du); f_100a9ad0();
  /* 100a9a0d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9a10 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 100a9a13 mov eax, esi */
  EAX = (ESI);
  /* 100a9a15 pop edi */
  EDI = (pop32());
  /* 100a9a16 pop esi */
  ESI = (pop32());
  /* 100a9a17 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a9a18 ret  */
  ESPCHK(0x100a99bdu, _esp0);
  ESP += 4; return;
}

/* FUN_10009a19 @ 0x100a9a19 (182 bytes, 70 insns) */
void f_100a9a19(void) {
  FTRACE(0x100a9a19u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a9a19 push ebp */
  push32((uint32_t)(EBP));
  /* 100a9a1a mov ebp, esp */
  EBP = (ESP);
  /* 100a9a1c push ecx */
  push32((uint32_t)(ECX));
  /* 100a9a1d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 100a9a20 push ebx */
  push32((uint32_t)(EBX));
  /* 100a9a21 push esi */
  push32((uint32_t)(ESI));
  /* 100a9a22 push edi */
  push32((uint32_t)(EDI));
  /* 100a9a23 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 100a9a27 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 100a9a2c mov ecx, eax */
  ECX = (EAX);
  /* 100a9a2e and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 100a9a33 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 100a9a36 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100a9a38 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100a9a3b mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 100a9a3e mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 100a9a40 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 100a9a43 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 100a9a48 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100a9a4d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100a9a4f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 100a9a52 je 0x100a9a67 */
  if (C.zf) goto L_100a9a67;
  /* 100a9a54 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9a56 je 0x100a9a60 */
  if (C.zf) goto L_100a9a60;
  /* 100a9a58 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 100a9a5e jmp 0x100a9a88 */
  goto L_100a9a88;
L_100a9a60:;
  /* 100a9a60 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 100a9a65 jmp 0x100a9a88 */
  goto L_100a9a88;
L_100a9a67:;
  /* 100a9a67 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100a9a69 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9a6b jne 0x100a9a7f */
  if (!C.zf) goto L_100a9a7f;
  /* 100a9a6d cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9a6f jne 0x100a9a7f */
  if (!C.zf) goto L_100a9a7f;
  /* 100a9a71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a9a74 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 100a9a77 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 100a9a79 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 100a9a7d jmp 0x100a9aca */
  goto L_100a9aca;
L_100a9a7f:;
  /* 100a9a7f lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 100a9a85 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_100a9a88:;
  /* 100a9a88 mov ecx, edx */
  ECX = (EDX);
  /* 100a9a8a shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 100a9a8d shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 100a9a90 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 100a9a92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a9a95 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 100a9a98 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 100a9a9b mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 100a9a9e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_100a9aa0:;
  /* 100a9aa0 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 100a9aa2 jne 0x100a9ac1 */
  if (!C.zf) goto L_100a9ac1;
  /* 100a9aa4 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 100a9aa6 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9aa8 mov ebx, edx */
  EBX = (EDX);
  /* 100a9aaa shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 100a9aad or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 100a9aaf lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 100a9ab2 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100a9ab4 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 100a9ab7 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9abd mov ecx, ebx */
  ECX = (EBX);
  /* 100a9abf jmp 0x100a9aa0 */
  goto L_100a9aa0;
L_100a9ac1:;
  /* 100a9ac1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100a9ac4 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100a9ac6 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_100a9aca:;
  /* 100a9aca pop edi */
  EDI = (pop32());
  /* 100a9acb pop esi */
  ESI = (pop32());
  /* 100a9acc pop ebx */
  EBX = (pop32());
  /* 100a9acd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a9ace ret  */
  ESPCHK(0x100a9a19u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ad0 @ 0x100a9ad0 (7 bytes, 3 insns) */
void f_100a9ad0(void) {
  FTRACE(0x100a9ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a9ad0 push edi */
  push32((uint32_t)(EDI));
  /* 100a9ad1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 100a9ad5 jmp 0x100a9b41 */
  jmp_ind(0x100a9b41u); return;
}

/* FUN_10009ae0 @ 0x100a9ae0 (224 bytes, 84 insns) */
void f_100a9ae0(void) {
  FTRACE(0x100a9ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a9ae0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a9ae4 push edi */
  push32((uint32_t)(EDI));
  /* 100a9ae5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 100a9aeb je 0x100a9afc */
  if (C.zf) goto L_100a9afc;
L_100a9aed:;
  /* 100a9aed mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 100a9aef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100a9af0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a9af2 je 0x100a9b2f */
  if (C.zf) goto L_100a9b2f;
  /* 100a9af4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 100a9afa jne 0x100a9aed */
  if (!C.zf) goto L_100a9aed;
L_100a9afc:;
  /* 100a9afc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 100a9afe mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 100a9b03 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9b05 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100a9b08 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 100a9b0a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9b0d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 100a9b12 je 0x100a9afc */
  if (C.zf) goto L_100a9afc;
  /* 100a9b14 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 100a9b17 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100a9b19 je 0x100a9b3e */
  if (C.zf) goto L_100a9b3e;
  /* 100a9b1b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 100a9b1d je 0x100a9b39 */
  if (C.zf) goto L_100a9b39;
  /* 100a9b1f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 100a9b24 je 0x100a9b34 */
  if (C.zf) goto L_100a9b34;
  /* 100a9b26 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 100a9b2b je 0x100a9b2f */
  if (C.zf) goto L_100a9b2f;
  /* 100a9b2d jmp 0x100a9afc */
  goto L_100a9afc;
L_100a9b2f:;
  /* 100a9b2f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 100a9b32 jmp 0x100a9b41 */
  goto L_100a9b41;
L_100a9b34:;
  /* 100a9b34 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 100a9b37 jmp 0x100a9b41 */
  goto L_100a9b41;
L_100a9b39:;
  /* 100a9b39 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 100a9b3c jmp 0x100a9b41 */
  goto L_100a9b41;
L_100a9b3e:;
  /* 100a9b3e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_100a9b41:;
  /* 100a9b41 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 100a9b45 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 100a9b4b je 0x100a9b66 */
  if (C.zf) goto L_100a9b66;
L_100a9b4d:;
  /* 100a9b4d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 100a9b4f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100a9b50 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100a9b52 je 0x100a9bb8 */
  if (C.zf) goto L_100a9bb8;
  /* 100a9b54 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 100a9b56 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100a9b57 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 100a9b5d jne 0x100a9b4d */
  if (!C.zf) goto L_100a9b4d;
  /* 100a9b5f jmp 0x100a9b66 */
  goto L_100a9b66;
L_100a9b61:;
  /* 100a9b61 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 100a9b63 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_100a9b66:;
  /* 100a9b66 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 100a9b6b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 100a9b6d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9b6f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100a9b72 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 100a9b74 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 100a9b76 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9b79 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 100a9b7e je 0x100a9b61 */
  if (C.zf) goto L_100a9b61;
  /* 100a9b80 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100a9b82 je 0x100a9bb8 */
  if (C.zf) goto L_100a9bb8;
  /* 100a9b84 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 100a9b86 je 0x100a9baf */
  if (C.zf) goto L_100a9baf;
  /* 100a9b88 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 100a9b8e je 0x100a9ba2 */
  if (C.zf) goto L_100a9ba2;
  /* 100a9b90 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 100a9b96 je 0x100a9b9a */
  if (C.zf) goto L_100a9b9a;
  /* 100a9b98 jmp 0x100a9b61 */
  goto L_100a9b61;
L_100a9b9a:;
  /* 100a9b9a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 100a9b9c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a9ba0 pop edi */
  EDI = (pop32());
  /* 100a9ba1 ret  */
  ESPCHK(0x100a9ae0u, _esp0);
  ESP += 4; return;
L_100a9ba2:;
  /* 100a9ba2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 100a9ba5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a9ba9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 100a9bad pop edi */
  EDI = (pop32());
  /* 100a9bae ret  */
  ESPCHK(0x100a9ae0u, _esp0);
  ESP += 4; return;
L_100a9baf:;
  /* 100a9baf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 100a9bb2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a9bb6 pop edi */
  EDI = (pop32());
  /* 100a9bb7 ret  */
  ESPCHK(0x100a9ae0u, _esp0);
  ESP += 4; return;
L_100a9bb8:;
  /* 100a9bb8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 100a9bba mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a9bbe pop edi */
  EDI = (pop32());
  /* 100a9bbf ret  */
  ESPCHK(0x100a9ae0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x100a9bc0 (88 bytes, 40 insns) */
void f_100a9bc0(void) {
  FTRACE(0x100a9bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a9bc0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 100a9bc4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a9bc8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100a9bca je 0x100a9c13 */
  if (C.zf) goto L_100a9c13;
  /* 100a9bcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100a9bce mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 100a9bd2 push edi */
  push32((uint32_t)(EDI));
  /* 100a9bd3 mov edi, ecx */
  EDI = (ECX);
  /* 100a9bd5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9bd8 jb 0x100a9c07 */
  if (C.cf) goto L_100a9c07;
  /* 100a9bda neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 100a9bdc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 100a9bdf je 0x100a9be9 */
  if (C.zf) goto L_100a9be9;
  /* 100a9be1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_100a9be3:;
  /* 100a9be3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100a9be5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100a9be6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100a9be7 jne 0x100a9be3 */
  if (!C.zf) goto L_100a9be3;
L_100a9be9:;
  /* 100a9be9 mov ecx, eax */
  ECX = (EAX);
  /* 100a9beb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 100a9bee add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9bf0 mov ecx, eax */
  ECX = (EAX);
  /* 100a9bf2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 100a9bf5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9bf7 mov ecx, edx */
  ECX = (EDX);
  /* 100a9bf9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 100a9bfc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100a9bff je 0x100a9c07 */
  if (C.zf) goto L_100a9c07;
  /* 100a9c01 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 100a9c03 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100a9c05 je 0x100a9c0d */
  if (C.zf) goto L_100a9c0d;
L_100a9c07:;
  /* 100a9c07 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100a9c09 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100a9c0a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100a9c0b jne 0x100a9c07 */
  if (!C.zf) goto L_100a9c07;
L_100a9c0d:;
  /* 100a9c0d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100a9c11 pop edi */
  EDI = (pop32());
  /* 100a9c12 ret  */
  ESPCHK(0x100a9bc0u, _esp0);
  ESP += 4; return;
L_100a9c13:;
  /* 100a9c13 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100a9c17 ret  */
  ESPCHK(0x100a9bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c20 @ 0x100a9c20 (664 bytes, 263 insns) [15 switch table(s)] */
void f_100a9c20(void) {
  FTRACE(0x100a9c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a9c20 push ebp */
  push32((uint32_t)(EBP));
  /* 100a9c21 mov ebp, esp */
  EBP = (ESP);
  /* 100a9c23 push edi */
  push32((uint32_t)(EDI));
  /* 100a9c24 push esi */
  push32((uint32_t)(ESI));
  /* 100a9c25 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100a9c28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 100a9c2b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 100a9c2e mov eax, ecx */
  EAX = (ECX);
  /* 100a9c30 mov edx, ecx */
  EDX = (ECX);
  /* 100a9c32 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9c34 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9c36 jbe 0x100a9c40 */
  if ((C.cf||C.zf)) goto L_100a9c40;
  /* 100a9c38 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9c3a jb 0x100a9db8 */
  if (C.cf) goto L_100a9db8;
L_100a9c40:;
  /* 100a9c40 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 100a9c46 jne 0x100a9c5c */
  if (!C.zf) goto L_100a9c5c;
  /* 100a9c48 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100a9c4b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 100a9c4e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9c51 jb 0x100a9c7c */
  if (C.cf) goto L_100a9c7c;
  /* 100a9c53 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100a9c55 jmp dword ptr [edx*4 + 0x100a9d68] */
  switch (EDX) {
    case 0: goto L_100a9d78;
    case 1: goto L_100a9d80;
    case 2: goto L_100a9d8c;
    case 3: goto L_100a9da0;
    default: x86_unimpl("switch@0x100a9c55 out of table"); return;
  }
L_100a9c5c:;
  /* 100a9c5c mov eax, edi */
  EAX = (EDI);
  /* 100a9c5e mov edx, 3 */
  EDX = (0x3u);
  /* 100a9c63 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a9c66 jb 0x100a9c74 */
  if (C.cf) goto L_100a9c74;
  /* 100a9c68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 100a9c6b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9c6d jmp dword ptr [eax*4 + 0x100a9c80] */
  switch (EAX) {
    case 1: goto L_100a9c90;
    case 2: goto L_100a9cbc;
    case 3: goto L_100a9ce0;
    default: x86_unimpl("switch@0x100a9c6d out of table"); return;
  }
L_100a9c74:;
  /* 100a9c74 jmp dword ptr [ecx*4 + 0x100a9d78] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x100a9d78)))); return;
  /* 100a9c7b nop  */
  /* nop */
L_100a9c7c:;
  /* 100a9c7c jmp dword ptr [ecx*4 + 0x100a9cfc] */
  switch (ECX) {
    case 0: goto L_100a9d5f;
    case 1: goto L_100a9d4c;
    case 2: goto L_100a9d44;
    case 3: goto L_100a9d3c;
    case 4: goto L_100a9d34;
    case 5: goto L_100a9d2c;
    case 6: goto L_100a9d24;
    case 7: goto L_100a9d1c;
    default: x86_unimpl("switch@0x100a9c7c out of table"); return;
  }
  /* 100a9c83 nop  */
  /* nop */
L_100a9c90:;
  /* 100a9c90 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100a9c92 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100a9c94 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100a9c96 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100a9c99 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100a9c9c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100a9c9f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100a9ca2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100a9ca5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9ca8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9cab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9cae jb 0x100a9c7c */
  if (C.cf) goto L_100a9c7c;
  /* 100a9cb0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100a9cb2 jmp dword ptr [edx*4 + 0x100a9d68] */
  switch (EDX) {
    case 0: goto L_100a9d78;
    case 1: goto L_100a9d80;
    case 2: goto L_100a9d8c;
    case 3: goto L_100a9da0;
    default: x86_unimpl("switch@0x100a9cb2 out of table"); return;
  }
  /* 100a9cb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100a9cbc:;
  /* 100a9cbc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100a9cbe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100a9cc0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100a9cc2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100a9cc5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100a9cc8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100a9ccb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9cce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9cd1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9cd4 jb 0x100a9c7c */
  if (C.cf) goto L_100a9c7c;
  /* 100a9cd6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100a9cd8 jmp dword ptr [edx*4 + 0x100a9d68] */
  switch (EDX) {
    case 0: goto L_100a9d78;
    case 1: goto L_100a9d80;
    case 2: goto L_100a9d8c;
    case 3: goto L_100a9da0;
    default: x86_unimpl("switch@0x100a9cd8 out of table"); return;
  }
  /* 100a9cdf nop  */
  /* nop */
L_100a9ce0:;
  /* 100a9ce0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100a9ce2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100a9ce4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100a9ce6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100a9ce7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100a9cea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100a9ceb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9cee jb 0x100a9c7c */
  if (C.cf) goto L_100a9c7c;
  /* 100a9cf0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100a9cf2 jmp dword ptr [edx*4 + 0x100a9d68] */
  switch (EDX) {
    case 0: goto L_100a9d78;
    case 1: goto L_100a9d80;
    case 2: goto L_100a9d8c;
    case 3: goto L_100a9da0;
    default: x86_unimpl("switch@0x100a9cf2 out of table"); return;
  }
  /* 100a9cf9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100a9d1c:;
  /* 100a9d1c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 100a9d20 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_100a9d24:;
  /* 100a9d24 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 100a9d28 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_100a9d2c:;
  /* 100a9d2c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 100a9d30 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_100a9d34:;
  /* 100a9d34 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 100a9d38 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_100a9d3c:;
  /* 100a9d3c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 100a9d40 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_100a9d44:;
  /* 100a9d44 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 100a9d48 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_100a9d4c:;
  /* 100a9d4c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 100a9d50 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 100a9d54 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 100a9d5b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9d5d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_100a9d5f:;
  /* 100a9d5f jmp dword ptr [edx*4 + 0x100a9d68] */
  switch (EDX) {
    case 0: goto L_100a9d78;
    case 1: goto L_100a9d80;
    case 2: goto L_100a9d8c;
    case 3: goto L_100a9da0;
    default: x86_unimpl("switch@0x100a9d5f out of table"); return;
  }
  /* 100a9d66 mov edi, edi */
  EDI = (EDI);
L_100a9d78:;
  /* 100a9d78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a9d7b pop esi */
  ESI = (pop32());
  /* 100a9d7c pop edi */
  EDI = (pop32());
  /* 100a9d7d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a9d7e ret  */
  ESPCHK(0x100a9c20u, _esp0);
  ESP += 4; return;
  /* 100a9d7f nop  */
  /* nop */
L_100a9d80:;
  /* 100a9d80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100a9d82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100a9d84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a9d87 pop esi */
  ESI = (pop32());
  /* 100a9d88 pop edi */
  EDI = (pop32());
  /* 100a9d89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a9d8a ret  */
  ESPCHK(0x100a9c20u, _esp0);
  ESP += 4; return;
  /* 100a9d8b nop  */
  /* nop */
L_100a9d8c:;
  /* 100a9d8c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100a9d8e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100a9d90 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100a9d93 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100a9d96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a9d99 pop esi */
  ESI = (pop32());
  /* 100a9d9a pop edi */
  EDI = (pop32());
  /* 100a9d9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a9d9c ret  */
  ESPCHK(0x100a9c20u, _esp0);
  ESP += 4; return;
  /* 100a9d9d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100a9da0:;
  /* 100a9da0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100a9da2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100a9da4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100a9da7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100a9daa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100a9dad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100a9db0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a9db3 pop esi */
  ESI = (pop32());
  /* 100a9db4 pop edi */
  EDI = (pop32());
  /* 100a9db5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a9db6 ret  */
  ESPCHK(0x100a9c20u, _esp0);
  ESP += 4; return;
  /* 100a9db7 nop  */
  /* nop */
L_100a9db8:;
  /* 100a9db8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 100a9dbc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 100a9dc0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 100a9dc6 jne 0x100a9dec */
  if (!C.zf) goto L_100a9dec;
  /* 100a9dc8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100a9dcb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 100a9dce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9dd1 jb 0x100a9de0 */
  if (C.cf) goto L_100a9de0;
  /* 100a9dd3 std  */
  C.df=1;
  /* 100a9dd4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100a9dd6 cld  */
  C.df=0;
  /* 100a9dd7 jmp dword ptr [edx*4 + 0x100a9f00] */
  switch (EDX) {
    case 0: goto L_100a9f10;
    case 1: goto L_100a9f18;
    case 2: goto L_100a9f28;
    case 3: goto L_100a9f3c;
    default: x86_unimpl("switch@0x100a9dd7 out of table"); return;
  }
  /* 100a9dde mov edi, edi */
  EDI = (EDI);
L_100a9de0:;
  /* 100a9de0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 100a9de2 jmp dword ptr [ecx*4 + 0x100a9eb0] */
  switch (ECX) {
    case 0: goto L_100a9ef7;
    default: x86_unimpl("switch@0x100a9de2 out of table"); return;
  }
  /* 100a9de9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100a9dec:;
  /* 100a9dec mov eax, edi */
  EAX = (EDI);
  /* 100a9dee mov edx, 3 */
  EDX = (0x3u);
  /* 100a9df3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9df6 jb 0x100a9e04 */
  if (C.cf) goto L_100a9e04;
  /* 100a9df8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 100a9dfb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a9dfd jmp dword ptr [eax*4 + 0x100a9e08] */
  switch (EAX) {
    case 1: goto L_100a9e18;
    case 2: goto L_100a9e38;
    case 3: goto L_100a9e60;
    default: x86_unimpl("switch@0x100a9dfd out of table"); return;
  }
L_100a9e04:;
  /* 100a9e04 jmp dword ptr [ecx*4 + 0x100a9f00] */
  switch (ECX) {
    case 0: goto L_100a9f10;
    case 1: goto L_100a9f18;
    case 2: goto L_100a9f28;
    case 3: goto L_100a9f3c;
    default: x86_unimpl("switch@0x100a9e04 out of table"); return;
  }
  /* 100a9e0b nop  */
  /* nop */
L_100a9e18:;
  /* 100a9e18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100a9e1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100a9e1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100a9e20 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100a9e21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100a9e24 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100a9e25 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9e28 jb 0x100a9de0 */
  if (C.cf) goto L_100a9de0;
  /* 100a9e2a std  */
  C.df=1;
  /* 100a9e2b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100a9e2d cld  */
  C.df=0;
  /* 100a9e2e jmp dword ptr [edx*4 + 0x100a9f00] */
  switch (EDX) {
    case 0: goto L_100a9f10;
    case 1: goto L_100a9f18;
    case 2: goto L_100a9f28;
    case 3: goto L_100a9f3c;
    default: x86_unimpl("switch@0x100a9e2e out of table"); return;
  }
  /* 100a9e35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100a9e38:;
  /* 100a9e38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100a9e3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100a9e3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100a9e40 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100a9e43 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100a9e46 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100a9e49 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a9e4c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a9e4f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9e52 jb 0x100a9de0 */
  if (C.cf) goto L_100a9de0;
  /* 100a9e54 std  */
  C.df=1;
  /* 100a9e55 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100a9e57 cld  */
  C.df=0;
  /* 100a9e58 jmp dword ptr [edx*4 + 0x100a9f00] */
  switch (EDX) {
    case 0: goto L_100a9f10;
    case 1: goto L_100a9f18;
    case 2: goto L_100a9f28;
    case 3: goto L_100a9f3c;
    default: x86_unimpl("switch@0x100a9e58 out of table"); return;
  }
  /* 100a9e5f nop  */
  /* nop */
L_100a9e60:;
  /* 100a9e60 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100a9e63 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100a9e65 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100a9e68 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100a9e6b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100a9e6e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100a9e71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100a9e74 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100a9e77 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a9e7a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100a9e7d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9e80 jb 0x100a9de0 */
  if (C.cf) goto L_100a9de0;
  /* 100a9e86 std  */
  C.df=1;
  /* 100a9e87 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100a9e89 cld  */
  C.df=0;
  /* 100a9e8a jmp dword ptr [edx*4 + 0x100a9f00] */
  switch (EDX) {
    case 0: goto L_100a9f10;
    case 1: goto L_100a9f18;
    case 2: goto L_100a9f28;
    case 3: goto L_100a9f3c;
    default: x86_unimpl("switch@0x100a9e8a out of table"); return;
  }
  /* 100a9e91 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 100a9e94 mov ah, 0x9e */
  AH = (0x9eu);
  /* 100a9e96 or dl, byte ptr [eax] */
  { uint32_t _r=(DL)|(r8((uint32_t)(EAX))); DL = (_r); fl_logic(_r,8); }
  /* 100a9e98 mov esp, 0xc4100a9e */
  ESP = (0xc4100a9eu);
  /* 100a9e9d sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 100a9e9e or dl, byte ptr [eax] */
  { uint32_t _r=(DL)|(r8((uint32_t)(EAX))); DL = (_r); fl_logic(_r,8); }
  /* 100a9ea0 int3  */
  x86_unimpl("int3 @ 0x100a9ea0");
  /* 100a9ea1 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 100a9ea2 or dl, byte ptr [eax] */
  { uint32_t _r=(DL)|(r8((uint32_t)(EAX))); DL = (_r); fl_logic(_r,8); }
  /* 100a9ea4 aam 0x9e */
  x86_unimpl("aam @ 0x100a9ea4");
  /* 100a9ea6 or dl, byte ptr [eax] */
  { uint32_t _r=(DL)|(r8((uint32_t)(EAX))); DL = (_r); fl_logic(_r,8); }
  /* 100a9ea8 fcomp qword ptr [esi - 0x611beff6] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ESI + -0x611beff6)));
  (void)fpu_pop();
  /* 100a9eae or dl, byte ptr [eax] */
  { uint32_t _r=(DL)|(r8((uint32_t)(EAX))); DL = (_r); fl_logic(_r,8); }
  /* 100a9eb4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 100a9eb8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 100a9ebc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 100a9ec0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 100a9ec4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 100a9ec8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 100a9ecc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 100a9ed0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 100a9ed4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 100a9ed8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 100a9edc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 100a9ee0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 100a9ee4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 100a9ee8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 100a9eec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 100a9ef3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9ef5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_100a9ef7:;
  /* 100a9ef7 jmp dword ptr [edx*4 + 0x100a9f00] */
  switch (EDX) {
    case 0: goto L_100a9f10;
    case 1: goto L_100a9f18;
    case 2: goto L_100a9f28;
    case 3: goto L_100a9f3c;
    default: x86_unimpl("switch@0x100a9ef7 out of table"); return;
  }
  /* 100a9efe mov edi, edi */
  EDI = (EDI);
L_100a9f10:;
  /* 100a9f10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a9f13 pop esi */
  ESI = (pop32());
  /* 100a9f14 pop edi */
  EDI = (pop32());
  /* 100a9f15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a9f16 ret  */
  ESPCHK(0x100a9c20u, _esp0);
  ESP += 4; return;
  /* 100a9f17 nop  */
  /* nop */
L_100a9f18:;
  /* 100a9f18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100a9f1b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100a9f1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a9f21 pop esi */
  ESI = (pop32());
  /* 100a9f22 pop edi */
  EDI = (pop32());
  /* 100a9f23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a9f24 ret  */
  ESPCHK(0x100a9c20u, _esp0);
  ESP += 4; return;
  /* 100a9f25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100a9f28:;
  /* 100a9f28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100a9f2b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100a9f2e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100a9f31 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100a9f34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a9f37 pop esi */
  ESI = (pop32());
  /* 100a9f38 pop edi */
  EDI = (pop32());
  /* 100a9f39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a9f3a ret  */
  ESPCHK(0x100a9c20u, _esp0);
  ESP += 4; return;
  /* 100a9f3b nop  */
  /* nop */
L_100a9f3c:;
  /* 100a9f3c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100a9f3f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100a9f42 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100a9f45 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100a9f48 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100a9f4b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100a9f4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a9f51 pop esi */
  ESI = (pop32());
  /* 100a9f52 pop edi */
  EDI = (pop32());
  /* 100a9f53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100a9f54 ret  */
  ESPCHK(0x100a9c20u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x100a9f55 (9 bytes, 4 insns) */
void f_100a9f55(void) {
  FTRACE(0x100a9f55u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a9f55 push 2 */
  push32((uint32_t)(0x2u));
  /* 100a9f57 call 0x100a7091 */
  push32(0x100a9f5cu); f_100a7091();
  /* 100a9f5c pop ecx */
  ECX = (pop32());
  /* 100a9f5d ret  */
  ESPCHK(0x100a9f55u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f5e @ 0x100a9f5e (41 bytes, 12 insns) */
void f_100a9f5e(void) {
  FTRACE(0x100a9f5eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a9f5e push esi */
  push32((uint32_t)(ESI));
  /* 100a9f5f mov esi, dword ptr [0x100ae094] */
  ESI = (r32((uint32_t)(0x100ae094)));
  /* 100a9f65 push dword ptr [0x100b0c54] */
  push32((uint32_t)(r32((uint32_t)(0x100b0c54))));
  /* 100a9f6b call esi */
  call_ind((uint32_t)(ESI), 0x100a9f6du);
  /* 100a9f6d push dword ptr [0x100b0c44] */
  push32((uint32_t)(r32((uint32_t)(0x100b0c44))));
  /* 100a9f73 call esi */
  call_ind((uint32_t)(ESI), 0x100a9f75u);
  /* 100a9f75 push dword ptr [0x100b0c34] */
  push32((uint32_t)(r32((uint32_t)(0x100b0c34))));
  /* 100a9f7b call esi */
  call_ind((uint32_t)(ESI), 0x100a9f7du);
  /* 100a9f7d push dword ptr [0x100b0c14] */
  push32((uint32_t)(r32((uint32_t)(0x100b0c14))));
  /* 100a9f83 call esi */
  call_ind((uint32_t)(ESI), 0x100a9f85u);
  /* 100a9f85 pop esi */
  ESI = (pop32());
  /* 100a9f86 ret  */
  ESPCHK(0x100a9f5eu, _esp0);
  ESP += 4; return;
}

/* FUN_10009f87 @ 0x100a9f87 (108 bytes, 34 insns) */
void f_100a9f87(void) {
  FTRACE(0x100a9f87u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a9f87 push esi */
  push32((uint32_t)(ESI));
  /* 100a9f88 push edi */
  push32((uint32_t)(EDI));
  /* 100a9f89 mov edi, dword ptr [0x100ae050] */
  EDI = (r32((uint32_t)(0x100ae050)));
  /* 100a9f8f mov esi, 0x100b0c10 */
  ESI = (0x100b0c10u);
L_100a9f94:;
  /* 100a9f94 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100a9f96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100a9f98 je 0x100a9fc5 */
  if (C.zf) goto L_100a9fc5;
  /* 100a9f9a cmp esi, 0x100b0c54 */
  { uint32_t _a=(ESI),_b=(0x100b0c54u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9fa0 je 0x100a9fc5 */
  if (C.zf) goto L_100a9fc5;
  /* 100a9fa2 cmp esi, 0x100b0c44 */
  { uint32_t _a=(ESI),_b=(0x100b0c44u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9fa8 je 0x100a9fc5 */
  if (C.zf) goto L_100a9fc5;
  /* 100a9faa cmp esi, 0x100b0c34 */
  { uint32_t _a=(ESI),_b=(0x100b0c34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9fb0 je 0x100a9fc5 */
  if (C.zf) goto L_100a9fc5;
  /* 100a9fb2 cmp esi, 0x100b0c14 */
  { uint32_t _a=(ESI),_b=(0x100b0c14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9fb8 je 0x100a9fc5 */
  if (C.zf) goto L_100a9fc5;
  /* 100a9fba push eax */
  push32((uint32_t)(EAX));
  /* 100a9fbb call edi */
  call_ind((uint32_t)(EDI), 0x100a9fbdu);
  /* 100a9fbd push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100a9fbf call 0x100aa1a6 */
  push32(0x100a9fc4u); f_100aa1a6();
  /* 100a9fc4 pop ecx */
  ECX = (pop32());
L_100a9fc5:;
  /* 100a9fc5 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100a9fc8 cmp esi, 0x100b0cd0 */
  { uint32_t _a=(ESI),_b=(0x100b0cd0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100a9fce jl 0x100a9f94 */
  if ((C.sf!=C.of)) goto L_100a9f94;
  /* 100a9fd0 push dword ptr [0x100b0c34] */
  push32((uint32_t)(r32((uint32_t)(0x100b0c34))));
  /* 100a9fd6 call edi */
  call_ind((uint32_t)(EDI), 0x100a9fd8u);
  /* 100a9fd8 push dword ptr [0x100b0c44] */
  push32((uint32_t)(r32((uint32_t)(0x100b0c44))));
  /* 100a9fde call edi */
  call_ind((uint32_t)(EDI), 0x100a9fe0u);
  /* 100a9fe0 push dword ptr [0x100b0c54] */
  push32((uint32_t)(r32((uint32_t)(0x100b0c54))));
  /* 100a9fe6 call edi */
  call_ind((uint32_t)(EDI), 0x100a9fe8u);
  /* 100a9fe8 push dword ptr [0x100b0c14] */
  push32((uint32_t)(r32((uint32_t)(0x100b0c14))));
  /* 100a9fee call edi */
  call_ind((uint32_t)(EDI), 0x100a9ff0u);
  /* 100a9ff0 pop edi */
  EDI = (pop32());
  /* 100a9ff1 pop esi */
  ESI = (pop32());
  /* 100a9ff2 ret  */
  ESPCHK(0x100a9f87u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ff3 @ 0x100a9ff3 (97 bytes, 37 insns) */
void f_100a9ff3(void) {
  FTRACE(0x100a9ff3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100a9ff3 push ebp */
  push32((uint32_t)(EBP));
  /* 100a9ff4 mov ebp, esp */
  EBP = (ESP);
  /* 100a9ff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100a9ff9 push esi */
  push32((uint32_t)(ESI));
  /* 100a9ffa cmp dword ptr [eax*4 + 0x100b0c10], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x100b0c10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa002 lea esi, [eax*4 + 0x100b0c10] */
  ESI = ((uint32_t)(EAX*4 + 0x100b0c10));
  /* 100aa009 jne 0x100aa049 */
  if (!C.zf) goto L_100aa049;
  /* 100aa00b push edi */
  push32((uint32_t)(EDI));
  /* 100aa00c push 0x18 */
  push32((uint32_t)(0x18u));
  /* 100aa00e call 0x100aa28f */
  push32(0x100aa013u); f_100aa28f();
  /* 100aa013 mov edi, eax */
  EDI = (EAX);
  /* 100aa015 pop ecx */
  ECX = (pop32());
  /* 100aa016 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100aa018 jne 0x100aa022 */
  if (!C.zf) goto L_100aa022;
  /* 100aa01a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 100aa01c call 0x100a7091 */
  push32(0x100aa021u); f_100a7091();
  /* 100aa021 pop ecx */
  ECX = (pop32());
L_100aa022:;
  /* 100aa022 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 100aa024 call 0x100a9ff3 */
  push32(0x100aa029u); f_100a9ff3();
  /* 100aa029 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa02c pop ecx */
  ECX = (pop32());
  /* 100aa02d push edi */
  push32((uint32_t)(EDI));
  /* 100aa02e jne 0x100aa03a */
  if (!C.zf) goto L_100aa03a;
  /* 100aa030 call dword ptr [0x100ae094] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae094))), 0x100aa036u);
  /* 100aa036 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 100aa038 jmp 0x100aa040 */
  goto L_100aa040;
L_100aa03a:;
  /* 100aa03a call 0x100aa1a6 */
  push32(0x100aa03fu); f_100aa1a6();
  /* 100aa03f pop ecx */
  ECX = (pop32());
L_100aa040:;
  /* 100aa040 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 100aa042 call 0x100aa054 */
  push32(0x100aa047u); f_100aa054();
  /* 100aa047 pop ecx */
  ECX = (pop32());
  /* 100aa048 pop edi */
  EDI = (pop32());
L_100aa049:;
  /* 100aa049 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100aa04b call dword ptr [0x100ae00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae00c))), 0x100aa051u);
  /* 100aa051 pop esi */
  ESI = (pop32());
  /* 100aa052 pop ebp */
  EBP = (pop32());
  /* 100aa053 ret  */
  ESPCHK(0x100a9ff3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a054 @ 0x100aa054 (21 bytes, 7 insns) */
void f_100aa054(void) {
  FTRACE(0x100aa054u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aa054 push ebp */
  push32((uint32_t)(EBP));
  /* 100aa055 mov ebp, esp */
  EBP = (ESP);
  /* 100aa057 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100aa05a push dword ptr [eax*4 + 0x100b0c10] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x100b0c10))));
  /* 100aa061 call dword ptr [0x100ae008] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae008))), 0x100aa067u);
  /* 100aa067 pop ebp */
  EBP = (pop32());
  /* 100aa068 ret  */
  ESPCHK(0x100aa054u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a069 @ 0x100aa069 (289 bytes, 98 insns) */
void f_100aa069(void) {
  FTRACE(0x100aa069u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aa069 push ebp */
  push32((uint32_t)(EBP));
  /* 100aa06a mov ebp, esp */
  EBP = (ESP);
  /* 100aa06c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 100aa06e push 0x100ae4d0 */
  push32((uint32_t)(0x100ae4d0u));
  /* 100aa073 push 0x100ad010 */
  push32((uint32_t)(0x100ad010u));
  /* 100aa078 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 100aa07e push eax */
  push32((uint32_t)(EAX));
  /* 100aa07f mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 100aa086 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aa089 push ebx */
  push32((uint32_t)(EBX));
  /* 100aa08a push esi */
  push32((uint32_t)(ESI));
  /* 100aa08b push edi */
  push32((uint32_t)(EDI));
  /* 100aa08c mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100aa08f imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100aa093 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 100aa096 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 100aa099 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa09c ja 0x100aa0b2 */
  if ((!C.cf&&!C.zf)) goto L_100aa0b2;
  /* 100aa09e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100aa0a0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa0a2 jne 0x100aa0a7 */
  if (!C.zf) goto L_100aa0a7;
  /* 100aa0a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100aa0a6 pop esi */
  ESI = (pop32());
L_100aa0a7:;
  /* 100aa0a7 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100aa0aa and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 100aa0ad mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 100aa0b0 jmp 0x100aa0b4 */
  goto L_100aa0b4;
L_100aa0b2:;
  /* 100aa0b2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_100aa0b4:;
  /* 100aa0b4 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 100aa0b7 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa0ba ja 0x100aa168 */
  if ((!C.cf&&!C.zf)) goto L_100aa168;
  /* 100aa0c0 mov eax, dword ptr [0x100b7c08] */
  EAX = (r32((uint32_t)(0x100b7c08)));
  /* 100aa0c5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa0c8 jne 0x100aa10b */
  if (!C.zf) goto L_100aa10b;
  /* 100aa0ca mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 100aa0cd cmp edi, dword ptr [0x100b69c0] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x100b69c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa0d3 ja 0x100aa151 */
  if ((!C.cf&&!C.zf)) goto L_100aa151;
  /* 100aa0d5 push 9 */
  push32((uint32_t)(0x9u));
  /* 100aa0d7 call 0x100a9ff3 */
  push32(0x100aa0dcu); f_100a9ff3();
  /* 100aa0dc pop ecx */
  ECX = (pop32());
  /* 100aa0dd mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 100aa0e0 push edi */
  push32((uint32_t)(EDI));
  /* 100aa0e1 call 0x100ab27b */
  push32(0x100aa0e6u); f_100ab27b();
  /* 100aa0e6 pop ecx */
  ECX = (pop32());
  /* 100aa0e7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100aa0ea or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100aa0ee call 0x100aa102 */
  push32(0x100aa0f3u); f_100aa102();
  /* 100aa0f3 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa0f6 je 0x100aa156 */
  if (C.zf) goto L_100aa156;
  /* 100aa0f8 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 100aa0fb jmp 0x100aa145 */
  goto L_100aa145;
  /* 100aa0fd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100aa0ff mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100aa102 push 9 */
  push32((uint32_t)(0x9u));
  /* 100aa104 call 0x100aa054 */
  push32(0x100aa109u); f_100aa054();
  /* 100aa109 pop ecx */
  ECX = (pop32());
  /* 100aa10a ret  */
  ESPCHK(0x100aa069u, _esp0);
  ESP += 4; return;
L_100aa10b:;
  /* 100aa10b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa10e jne 0x100aa151 */
  if (!C.zf) goto L_100aa151;
  /* 100aa110 cmp esi, dword ptr [0x100b2e74] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100b2e74))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa116 ja 0x100aa151 */
  if ((!C.cf&&!C.zf)) goto L_100aa151;
  /* 100aa118 push 9 */
  push32((uint32_t)(0x9u));
  /* 100aa11a call 0x100a9ff3 */
  push32(0x100aa11fu); f_100a9ff3();
  /* 100aa11f pop ecx */
  ECX = (pop32());
  /* 100aa120 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 100aa127 mov eax, esi */
  EAX = (ESI);
  /* 100aa129 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 100aa12c push eax */
  push32((uint32_t)(EAX));
  /* 100aa12d call 0x100aba28 */
  push32(0x100aa132u); f_100aba28();
  /* 100aa132 pop ecx */
  ECX = (pop32());
  /* 100aa133 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100aa136 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100aa13a call 0x100aa18b */
  push32(0x100aa13fu); f_100aa18b();
  /* 100aa13f cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa142 je 0x100aa156 */
  if (C.zf) goto L_100aa156;
  /* 100aa144 push esi */
  push32((uint32_t)(ESI));
L_100aa145:;
  /* 100aa145 push ebx */
  push32((uint32_t)(EBX));
  /* 100aa146 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 100aa149 call 0x100a9bc0 */
  push32(0x100aa14eu); f_100a9bc0();
  /* 100aa14e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100aa151:;
  /* 100aa151 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa154 jne 0x100aa194 */
  if (!C.zf) { jmp_ind(0x100aa194u); return; }
L_100aa156:;
  /* 100aa156 push esi */
  push32((uint32_t)(ESI));
  /* 100aa157 push 8 */
  push32((uint32_t)(0x8u));
  /* 100aa159 push dword ptr [0x100b7c04] */
  push32((uint32_t)(r32((uint32_t)(0x100b7c04))));
  /* 100aa15f call dword ptr [0x100ae098] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae098))), 0x100aa165u);
  /* 100aa165 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_100aa168:;
  /* 100aa168 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa16b jne 0x100aa194 */
  if (!C.zf) { jmp_ind(0x100aa194u); return; }
  /* 100aa16d cmp dword ptr [0x100b6860], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100b6860))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa173 je 0x100aa194 */
  if (C.zf) { jmp_ind(0x100aa194u); return; }
  /* 100aa175 push esi */
  push32((uint32_t)(ESI));
  /* 100aa176 call 0x100acefa */
  push32(0x100aa17bu); f_100acefa();
  /* 100aa17b pop ecx */
  ECX = (pop32());
  /* 100aa17c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100aa17e jne 0x100aa0b4 */
  if (!C.zf) goto L_100aa0b4;
  /* 100aa184 jmp 0x100aa197 */
  jmp_ind(0x100aa197u); return;
  /* 100aa186 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_1000a102 @ 0x100aa102 (9 bytes, 4 insns) */
void f_100aa102(void) {
  FTRACE(0x100aa102u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aa102 push 9 */
  push32((uint32_t)(0x9u));
  /* 100aa104 call 0x100aa054 */
  push32(0x100aa109u); f_100aa054();
  /* 100aa109 pop ecx */
  ECX = (pop32());
  /* 100aa10a ret  */
  ESPCHK(0x100aa102u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a18b @ 0x100aa18b (9 bytes, 4 insns) */
void f_100aa18b(void) {
  FTRACE(0x100aa18bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aa18b push 9 */
  push32((uint32_t)(0x9u));
  /* 100aa18d call 0x100aa054 */
  push32(0x100aa192u); f_100aa054();
  /* 100aa192 pop ecx */
  ECX = (pop32());
  /* 100aa193 ret  */
  ESPCHK(0x100aa18bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1a6 @ 0x100aa1a6 (215 bytes, 75 insns) */
void f_100aa1a6(void) {
  FTRACE(0x100aa1a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aa1a6 push ebp */
  push32((uint32_t)(EBP));
  /* 100aa1a7 mov ebp, esp */
  EBP = (ESP);
  /* 100aa1a9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 100aa1ab push 0x100ae4e8 */
  push32((uint32_t)(0x100ae4e8u));
  /* 100aa1b0 push 0x100ad010 */
  push32((uint32_t)(0x100ad010u));
  /* 100aa1b5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 100aa1bb push eax */
  push32((uint32_t)(EAX));
  /* 100aa1bc mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 100aa1c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aa1c6 push ebx */
  push32((uint32_t)(EBX));
  /* 100aa1c7 push esi */
  push32((uint32_t)(ESI));
  /* 100aa1c8 push edi */
  push32((uint32_t)(EDI));
  /* 100aa1c9 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100aa1cc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100aa1ce je 0x100aa280 */
  if (C.zf) { jmp_ind(0x100aa280u); return; }
  /* 100aa1d4 mov eax, dword ptr [0x100b7c08] */
  EAX = (r32((uint32_t)(0x100b7c08)));
  /* 100aa1d9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa1dc jne 0x100aa219 */
  if (!C.zf) goto L_100aa219;
  /* 100aa1de push 9 */
  push32((uint32_t)(0x9u));
  /* 100aa1e0 call 0x100a9ff3 */
  push32(0x100aa1e5u); f_100a9ff3();
  /* 100aa1e5 pop ecx */
  ECX = (pop32());
  /* 100aa1e6 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100aa1ea push esi */
  push32((uint32_t)(ESI));
  /* 100aa1eb call 0x100aaf27 */
  push32(0x100aa1f0u); f_100aaf27();
  /* 100aa1f0 pop ecx */
  ECX = (pop32());
  /* 100aa1f1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 100aa1f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100aa1f6 je 0x100aa201 */
  if (C.zf) goto L_100aa201;
  /* 100aa1f8 push esi */
  push32((uint32_t)(ESI));
  /* 100aa1f9 push eax */
  push32((uint32_t)(EAX));
  /* 100aa1fa call 0x100aaf52 */
  push32(0x100aa1ffu); f_100aaf52();
  /* 100aa1ff pop ecx */
  ECX = (pop32());
  /* 100aa200 pop ecx */
  ECX = (pop32());
L_100aa201:;
  /* 100aa201 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100aa205 call 0x100aa210 */
  push32(0x100aa20au); f_100aa210();
  /* 100aa20a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa20e jmp 0x100aa261 */
  goto L_100aa261;
  /* 100aa210 push 9 */
  push32((uint32_t)(0x9u));
  /* 100aa212 call 0x100aa054 */
  push32(0x100aa217u); f_100aa054();
  /* 100aa217 pop ecx */
  ECX = (pop32());
  /* 100aa218 ret  */
  ESPCHK(0x100aa1a6u, _esp0);
  ESP += 4; return;
L_100aa219:;
  /* 100aa219 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa21c jne 0x100aa271 */
  if (!C.zf) goto L_100aa271;
  /* 100aa21e push 9 */
  push32((uint32_t)(0x9u));
  /* 100aa220 call 0x100a9ff3 */
  push32(0x100aa225u); f_100a9ff3();
  /* 100aa225 pop ecx */
  ECX = (pop32());
  /* 100aa226 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 100aa22d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 100aa230 push eax */
  push32((uint32_t)(EAX));
  /* 100aa231 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 100aa234 push eax */
  push32((uint32_t)(EAX));
  /* 100aa235 push esi */
  push32((uint32_t)(ESI));
  /* 100aa236 call 0x100ab98c */
  push32(0x100aa23bu); f_100ab98c();
  /* 100aa23b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100aa23e mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 100aa241 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100aa243 je 0x100aa254 */
  if (C.zf) goto L_100aa254;
  /* 100aa245 push eax */
  push32((uint32_t)(EAX));
  /* 100aa246 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 100aa249 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 100aa24c call 0x100ab9e3 */
  push32(0x100aa251u); f_100ab9e3();
  /* 100aa251 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100aa254:;
  /* 100aa254 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100aa258 call 0x100aa268 */
  push32(0x100aa25du); f_100aa268();
  /* 100aa25d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_100aa261:;
  /* 100aa261 jne 0x100aa280 */
  if (!C.zf) { jmp_ind(0x100aa280u); return; }
  /* 100aa263 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100aa266 jmp 0x100aa272 */
  goto L_100aa272;
  /* 100aa268 push 9 */
  push32((uint32_t)(0x9u));
  /* 100aa26a call 0x100aa054 */
  push32(0x100aa26fu); f_100aa054();
  /* 100aa26f pop ecx */
  ECX = (pop32());
  /* 100aa270 ret  */
  ESPCHK(0x100aa1a6u, _esp0);
  ESP += 4; return;
L_100aa271:;
  /* 100aa271 push esi */
  push32((uint32_t)(ESI));
L_100aa272:;
  /* 100aa272 push 0 */
  push32((uint32_t)(0x0u));
  /* 100aa274 push dword ptr [0x100b7c04] */
  push32((uint32_t)(r32((uint32_t)(0x100b7c04))));
}

/* FUN_1000a210 @ 0x100aa210 (9 bytes, 4 insns) */
void f_100aa210(void) {
  FTRACE(0x100aa210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aa210 push 9 */
  push32((uint32_t)(0x9u));
  /* 100aa212 call 0x100aa054 */
  push32(0x100aa217u); f_100aa054();
  /* 100aa217 pop ecx */
  ECX = (pop32());
  /* 100aa218 ret  */
  ESPCHK(0x100aa210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a268 @ 0x100aa268 (9 bytes, 4 insns) */
void f_100aa268(void) {
  FTRACE(0x100aa268u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aa268 push 9 */
  push32((uint32_t)(0x9u));
  /* 100aa26a call 0x100aa054 */
  push32(0x100aa26fu); f_100aa054();
  /* 100aa26f pop ecx */
  ECX = (pop32());
  /* 100aa270 ret  */
  ESPCHK(0x100aa268u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x100aa28f (18 bytes, 6 insns) */
void f_100aa28f(void) {
  FTRACE(0x100aa28fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aa28f push dword ptr [0x100b6860] */
  push32((uint32_t)(r32((uint32_t)(0x100b6860))));
  /* 100aa295 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 100aa299 call 0x100aa2a1 */
  push32(0x100aa29eu); f_100aa2a1();
  /* 100aa29e pop ecx */
  ECX = (pop32());
  /* 100aa29f pop ecx */
  ECX = (pop32());
  /* 100aa2a0 ret  */
  ESPCHK(0x100aa28fu, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x100aa2a1 (44 bytes, 16 insns) */
void f_100aa2a1(void) {
  FTRACE(0x100aa2a1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aa2a1 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa2a6 ja 0x100aa2ca */
  if ((!C.cf&&!C.zf)) goto L_100aa2ca;
L_100aa2a8:;
  /* 100aa2a8 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 100aa2ac call 0x100aa2cd */
  push32(0x100aa2b1u); f_100aa2cd();
  /* 100aa2b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100aa2b3 pop ecx */
  ECX = (pop32());
  /* 100aa2b4 jne 0x100aa2cc */
  if (!C.zf) goto L_100aa2cc;
  /* 100aa2b6 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa2ba je 0x100aa2cc */
  if (C.zf) goto L_100aa2cc;
  /* 100aa2bc push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 100aa2c0 call 0x100acefa */
  push32(0x100aa2c5u); f_100acefa();
  /* 100aa2c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100aa2c7 pop ecx */
  ECX = (pop32());
  /* 100aa2c8 jne 0x100aa2a8 */
  if (!C.zf) goto L_100aa2a8;
L_100aa2ca:;
  /* 100aa2ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100aa2cc:;
  /* 100aa2cc ret  */
  ESPCHK(0x100aa2a1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2cd @ 0x100aa2cd (231 bytes, 81 insns) */
void f_100aa2cd(void) {
  FTRACE(0x100aa2cdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aa2cd push ebp */
  push32((uint32_t)(EBP));
  /* 100aa2ce mov ebp, esp */
  EBP = (ESP);
  /* 100aa2d0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 100aa2d2 push 0x100ae500 */
  push32((uint32_t)(0x100ae500u));
  /* 100aa2d7 push 0x100ad010 */
  push32((uint32_t)(0x100ad010u));
  /* 100aa2dc mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 100aa2e2 push eax */
  push32((uint32_t)(EAX));
  /* 100aa2e3 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 100aa2ea sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aa2ed push ebx */
  push32((uint32_t)(EBX));
  /* 100aa2ee push esi */
  push32((uint32_t)(ESI));
  /* 100aa2ef push edi */
  push32((uint32_t)(EDI));
  /* 100aa2f0 mov eax, dword ptr [0x100b7c08] */
  EAX = (r32((uint32_t)(0x100b7c08)));
  /* 100aa2f5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa2f8 jne 0x100aa33d */
  if (!C.zf) goto L_100aa33d;
  /* 100aa2fa mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100aa2fd cmp esi, dword ptr [0x100b69c0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100b69c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa303 ja 0x100aa39c */
  if ((!C.cf&&!C.zf)) goto L_100aa39c;
  /* 100aa309 push 9 */
  push32((uint32_t)(0x9u));
  /* 100aa30b call 0x100a9ff3 */
  push32(0x100aa310u); f_100a9ff3();
  /* 100aa310 pop ecx */
  ECX = (pop32());
  /* 100aa311 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100aa315 push esi */
  push32((uint32_t)(ESI));
  /* 100aa316 call 0x100ab27b */
  push32(0x100aa31bu); f_100ab27b();
  /* 100aa31b pop ecx */
  ECX = (pop32());
  /* 100aa31c mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 100aa31f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100aa323 call 0x100aa334 */
  push32(0x100aa328u); f_100aa334();
  /* 100aa328 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 100aa32b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100aa32d je 0x100aa39c */
  if (C.zf) goto L_100aa39c;
  /* 100aa32f jmp 0x100aa3ba */
  jmp_ind(0x100aa3bau); return;
  /* 100aa334 push 9 */
  push32((uint32_t)(0x9u));
  /* 100aa336 call 0x100aa054 */
  push32(0x100aa33bu); f_100aa054();
  /* 100aa33b pop ecx */
  ECX = (pop32());
  /* 100aa33c ret  */
  ESPCHK(0x100aa2cdu, _esp0);
  ESP += 4; return;
L_100aa33d:;
  /* 100aa33d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa340 jne 0x100aa39c */
  if (!C.zf) goto L_100aa39c;
  /* 100aa342 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100aa345 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100aa347 je 0x100aa351 */
  if (C.zf) goto L_100aa351;
  /* 100aa349 lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 100aa34c and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 100aa34f jmp 0x100aa354 */
  goto L_100aa354;
L_100aa351:;
  /* 100aa351 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 100aa353 pop esi */
  ESI = (pop32());
L_100aa354:;
  /* 100aa354 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 100aa357 cmp esi, dword ptr [0x100b2e74] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100b2e74))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa35d ja 0x100aa38d */
  if ((!C.cf&&!C.zf)) goto L_100aa38d;
  /* 100aa35f push 9 */
  push32((uint32_t)(0x9u));
  /* 100aa361 call 0x100a9ff3 */
  push32(0x100aa366u); f_100a9ff3();
  /* 100aa366 pop ecx */
  ECX = (pop32());
  /* 100aa367 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 100aa36e mov eax, esi */
  EAX = (ESI);
  /* 100aa370 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 100aa373 push eax */
  push32((uint32_t)(EAX));
  /* 100aa374 call 0x100aba28 */
  push32(0x100aa379u); f_100aba28();
  /* 100aa379 pop ecx */
  ECX = (pop32());
  /* 100aa37a mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 100aa37d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100aa381 call 0x100aa393 */
  push32(0x100aa386u); f_100aa393();
  /* 100aa386 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 100aa389 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100aa38b jne 0x100aa3ba */
  if (!C.zf) { jmp_ind(0x100aa3bau); return; }
L_100aa38d:;
  /* 100aa38d push esi */
  push32((uint32_t)(ESI));
  /* 100aa38e jmp 0x100aa3ac */
  goto L_100aa3ac;
  /* 100aa390 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100aa393 push 9 */
  push32((uint32_t)(0x9u));
  /* 100aa395 call 0x100aa054 */
  push32(0x100aa39au); f_100aa054();
  /* 100aa39a pop ecx */
  ECX = (pop32());
  /* 100aa39b ret  */
  ESPCHK(0x100aa2cdu, _esp0);
  ESP += 4; return;
L_100aa39c:;
  /* 100aa39c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100aa39f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100aa3a1 jne 0x100aa3a6 */
  if (!C.zf) goto L_100aa3a6;
  /* 100aa3a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100aa3a5 pop eax */
  EAX = (pop32());
L_100aa3a6:;
  /* 100aa3a6 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100aa3a9 and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 100aa3ab push eax */
  push32((uint32_t)(EAX));
L_100aa3ac:;
  /* 100aa3ac push 0 */
  push32((uint32_t)(0x0u));
  /* 100aa3ae push dword ptr [0x100b7c04] */
  push32((uint32_t)(r32((uint32_t)(0x100b7c04))));
}

/* FUN_1000a334 @ 0x100aa334 (9 bytes, 4 insns) */
void f_100aa334(void) {
  FTRACE(0x100aa334u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aa334 push 9 */
  push32((uint32_t)(0x9u));
  /* 100aa336 call 0x100aa054 */
  push32(0x100aa33bu); f_100aa054();
  /* 100aa33b pop ecx */
  ECX = (pop32());
  /* 100aa33c ret  */
  ESPCHK(0x100aa334u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a393 @ 0x100aa393 (9 bytes, 4 insns) */
void f_100aa393(void) {
  FTRACE(0x100aa393u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aa393 push 9 */
  push32((uint32_t)(0x9u));
  /* 100aa395 call 0x100aa054 */
  push32(0x100aa39au); f_100aa054();
  /* 100aa39a pop ecx */
  ECX = (pop32());
  /* 100aa39b ret  */
  ESPCHK(0x100aa393u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3c9 @ 0x100aa3c9 (429 bytes, 143 insns) */
void f_100aa3c9(void) {
  FTRACE(0x100aa3c9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aa3c9 push ebp */
  push32((uint32_t)(EBP));
  /* 100aa3ca mov ebp, esp */
  EBP = (ESP);
  /* 100aa3cc sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aa3cf push ebx */
  push32((uint32_t)(EBX));
  /* 100aa3d0 push esi */
  push32((uint32_t)(ESI));
  /* 100aa3d1 push edi */
  push32((uint32_t)(EDI));
  /* 100aa3d2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100aa3d4 call 0x100a9ff3 */
  push32(0x100aa3d9u); f_100a9ff3();
  /* 100aa3d9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100aa3dc call 0x100aa576 */
  push32(0x100aa3e1u); f_100aa576();
  /* 100aa3e1 mov ebx, eax */
  EBX = (EAX);
  /* 100aa3e3 pop ecx */
  ECX = (pop32());
  /* 100aa3e4 cmp ebx, dword ptr [0x100b69c4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x100b69c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa3ea pop ecx */
  ECX = (pop32());
  /* 100aa3eb mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100aa3ee jne 0x100aa3f7 */
  if (!C.zf) goto L_100aa3f7;
L_100aa3f0:;
  /* 100aa3f0 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100aa3f2 jmp 0x100aa567 */
  goto L_100aa567;
L_100aa3f7:;
  /* 100aa3f7 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100aa3f9 je 0x100aa555 */
  if (C.zf) goto L_100aa555;
  /* 100aa3ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100aa401 mov eax, 0x100b0d60 */
  EAX = (0x100b0d60u);
L_100aa406:;
  /* 100aa406 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa408 je 0x100aa47e */
  if (C.zf) goto L_100aa47e;
  /* 100aa40a add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100aa40d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 100aa40e cmp eax, 0x100b0e50 */
  { uint32_t _a=(EAX),_b=(0x100b0e50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa413 jl 0x100aa406 */
  if ((C.sf!=C.of)) goto L_100aa406;
  /* 100aa415 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 100aa418 push eax */
  push32((uint32_t)(EAX));
  /* 100aa419 push ebx */
  push32((uint32_t)(EBX));
  /* 100aa41a call dword ptr [0x100ae09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae09c))), 0x100aa420u);
  /* 100aa420 push 1 */
  push32((uint32_t)(0x1u));
  /* 100aa422 pop esi */
  ESI = (pop32());
  /* 100aa423 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa425 jne 0x100aa54c */
  if (!C.zf) goto L_100aa54c;
  /* 100aa42b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 100aa42d and dword ptr [0x100b6be4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100b6be4)))&(0x0u); w32((uint32_t)(0x100b6be4), (_r)); fl_logic(_r,32); }
  /* 100aa434 pop ecx */
  ECX = (pop32());
  /* 100aa435 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100aa437 mov edi, 0x100b6ae0 */
  EDI = (0x100b6ae0u);
  /* 100aa43c cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa43f rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 100aa441 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 100aa442 mov dword ptr [0x100b69c4], ebx */
  w32((uint32_t)(0x100b69c4), (EBX));
  /* 100aa448 jbe 0x100aa539 */
  if ((C.cf||C.zf)) goto L_100aa539;
  /* 100aa44e cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aa452 je 0x100aa514 */
  if (C.zf) goto L_100aa514;
  /* 100aa458 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_100aa45b:;
  /* 100aa45b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 100aa45d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100aa45f je 0x100aa514 */
  if (C.zf) goto L_100aa514;
  /* 100aa465 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 100aa469 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_100aa46c:;
  /* 100aa46c cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa46e ja 0x100aa508 */
  if ((!C.cf&&!C.zf)) goto L_100aa508;
  /* 100aa474 or byte ptr [eax + 0x100b6ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100b6ae1)))|(0x4u); w8((uint32_t)(EAX + 0x100b6ae1), (_r)); fl_logic(_r,8); }
  /* 100aa47b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100aa47c jmp 0x100aa46c */
  goto L_100aa46c;
L_100aa47e:;
  /* 100aa47e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100aa482 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 100aa484 pop ecx */
  ECX = (pop32());
  /* 100aa485 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100aa487 mov edi, 0x100b6ae0 */
  EDI = (0x100b6ae0u);
  /* 100aa48c lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 100aa48f rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 100aa491 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 100aa494 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 100aa495 lea ebx, [esi + 0x100b0d70] */
  EBX = ((uint32_t)(ESI + 0x100b0d70));
L_100aa49b:;
  /* 100aa49b cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aa49e mov ecx, ebx */
  ECX = (EBX);
  /* 100aa4a0 je 0x100aa4ce */
  if (C.zf) goto L_100aa4ce;
L_100aa4a2:;
  /* 100aa4a2 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 100aa4a5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100aa4a7 je 0x100aa4ce */
  if (C.zf) goto L_100aa4ce;
  /* 100aa4a9 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 100aa4ac movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 100aa4af cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa4b1 ja 0x100aa4c7 */
  if ((!C.cf&&!C.zf)) goto L_100aa4c7;
  /* 100aa4b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 100aa4b6 mov dl, byte ptr [edx + 0x100b0d58] */
  DL = (r8((uint32_t)(EDX + 0x100b0d58)));
L_100aa4bc:;
  /* 100aa4bc or byte ptr [eax + 0x100b6ae1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100b6ae1)))|(DL); w8((uint32_t)(EAX + 0x100b6ae1), (_r)); fl_logic(_r,8); }
  /* 100aa4c2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100aa4c3 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa4c5 jbe 0x100aa4bc */
  if ((C.cf||C.zf)) goto L_100aa4bc;
L_100aa4c7:;
  /* 100aa4c7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100aa4c8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100aa4c9 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aa4cc jne 0x100aa4a2 */
  if (!C.zf) goto L_100aa4a2;
L_100aa4ce:;
  /* 100aa4ce inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 100aa4d1 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100aa4d4 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa4d8 jb 0x100aa49b */
  if (C.cf) goto L_100aa49b;
  /* 100aa4da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100aa4dd mov dword ptr [0x100b69dc], 1 */
  w32((uint32_t)(0x100b69dc), (0x1u));
  /* 100aa4e7 push eax */
  push32((uint32_t)(EAX));
  /* 100aa4e8 mov dword ptr [0x100b69c4], eax */
  w32((uint32_t)(0x100b69c4), (EAX));
  /* 100aa4ed call 0x100aa5c0 */
  push32(0x100aa4f2u); f_100aa5c0();
  /* 100aa4f2 lea esi, [esi + 0x100b0d64] */
  ESI = ((uint32_t)(ESI + 0x100b0d64));
  /* 100aa4f8 mov edi, 0x100b69d0 */
  EDI = (0x100b69d0u);
  /* 100aa4fd movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100aa4fe movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100aa4ff pop ecx */
  ECX = (pop32());
  /* 100aa500 mov dword ptr [0x100b6be4], eax */
  w32((uint32_t)(0x100b6be4), (EAX));
  /* 100aa505 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100aa506 jmp 0x100aa55a */
  goto L_100aa55a;
L_100aa508:;
  /* 100aa508 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100aa509 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100aa50a cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aa50e jne 0x100aa45b */
  if (!C.zf) goto L_100aa45b;
L_100aa514:;
  /* 100aa514 mov eax, esi */
  EAX = (ESI);
L_100aa516:;
  /* 100aa516 or byte ptr [eax + 0x100b6ae1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100b6ae1)))|(0x8u); w8((uint32_t)(EAX + 0x100b6ae1), (_r)); fl_logic(_r,8); }
  /* 100aa51d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100aa51e cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa523 jb 0x100aa516 */
  if (C.cf) goto L_100aa516;
  /* 100aa525 push ebx */
  push32((uint32_t)(EBX));
  /* 100aa526 call 0x100aa5c0 */
  push32(0x100aa52bu); f_100aa5c0();
  /* 100aa52b pop ecx */
  ECX = (pop32());
  /* 100aa52c mov dword ptr [0x100b6be4], eax */
  w32((uint32_t)(0x100b6be4), (EAX));
  /* 100aa531 mov dword ptr [0x100b69dc], esi */
  w32((uint32_t)(0x100b69dc), (ESI));
  /* 100aa537 jmp 0x100aa540 */
  goto L_100aa540;
L_100aa539:;
  /* 100aa539 and dword ptr [0x100b69dc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100b69dc)))&(0x0u); w32((uint32_t)(0x100b69dc), (_r)); fl_logic(_r,32); }
L_100aa540:;
  /* 100aa540 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100aa542 mov edi, 0x100b69d0 */
  EDI = (0x100b69d0u);
  /* 100aa547 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100aa548 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100aa549 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100aa54a jmp 0x100aa55a */
  goto L_100aa55a;
L_100aa54c:;
  /* 100aa54c cmp dword ptr [0x100b6800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100b6800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa553 je 0x100aa564 */
  if (C.zf) goto L_100aa564;
L_100aa555:;
  /* 100aa555 call 0x100aa5f3 */
  push32(0x100aa55au); f_100aa5f3();
L_100aa55a:;
  /* 100aa55a call 0x100aa61c */
  push32(0x100aa55fu); f_100aa61c();
  /* 100aa55f jmp 0x100aa3f0 */
  goto L_100aa3f0;
L_100aa564:;
  /* 100aa564 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_100aa567:;
  /* 100aa567 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100aa569 call 0x100aa054 */
  push32(0x100aa56eu); f_100aa054();
  /* 100aa56e pop ecx */
  ECX = (pop32());
  /* 100aa56f mov eax, esi */
  EAX = (ESI);
  /* 100aa571 pop edi */
  EDI = (pop32());
  /* 100aa572 pop esi */
  ESI = (pop32());
  /* 100aa573 pop ebx */
  EBX = (pop32());
  /* 100aa574 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100aa575 ret  */
  ESPCHK(0x100aa3c9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a576 @ 0x100aa576 (74 bytes, 15 insns) */
void f_100aa576(void) {
  FTRACE(0x100aa576u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aa576 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100aa57a and dword ptr [0x100b6800], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100b6800)))&(0x0u); w32((uint32_t)(0x100b6800), (_r)); fl_logic(_r,32); }
  /* 100aa581 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa584 jne 0x100aa596 */
  if (!C.zf) goto L_100aa596;
  /* 100aa586 mov dword ptr [0x100b6800], 1 */
  w32((uint32_t)(0x100b6800), (0x1u));
  /* 100aa590 jmp dword ptr [0x100ae0a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100ae0a4)))); return;
L_100aa596:;
  /* 100aa596 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa599 jne 0x100aa5ab */
  if (!C.zf) goto L_100aa5ab;
  /* 100aa59b mov dword ptr [0x100b6800], 1 */
  w32((uint32_t)(0x100b6800), (0x1u));
  /* 100aa5a5 jmp dword ptr [0x100ae0a0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100ae0a0)))); return;
L_100aa5ab:;
  /* 100aa5ab cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa5ae jne 0x100aa5bf */
  if (!C.zf) goto L_100aa5bf;
  /* 100aa5b0 mov eax, dword ptr [0x100b6838] */
  EAX = (r32((uint32_t)(0x100b6838)));
  /* 100aa5b5 mov dword ptr [0x100b6800], 1 */
  w32((uint32_t)(0x100b6800), (0x1u));
L_100aa5bf:;
  /* 100aa5bf ret  */
  ESPCHK(0x100aa576u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5c0 @ 0x100aa5c0 (51 bytes, 19 insns) */
void f_100aa5c0(void) {
  FTRACE(0x100aa5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aa5c0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100aa5c4 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aa5c9 je 0x100aa5ed */
  if (C.zf) goto L_100aa5ed;
  /* 100aa5cb sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aa5ce je 0x100aa5e7 */
  if (C.zf) goto L_100aa5e7;
  /* 100aa5d0 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aa5d3 je 0x100aa5e1 */
  if (C.zf) goto L_100aa5e1;
  /* 100aa5d5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100aa5d6 je 0x100aa5db */
  if (C.zf) goto L_100aa5db;
  /* 100aa5d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100aa5da ret  */
  ESPCHK(0x100aa5c0u, _esp0);
  ESP += 4; return;
L_100aa5db:;
  /* 100aa5db mov eax, 0x404 */
  EAX = (0x404u);
  /* 100aa5e0 ret  */
  ESPCHK(0x100aa5c0u, _esp0);
  ESP += 4; return;
L_100aa5e1:;
  /* 100aa5e1 mov eax, 0x412 */
  EAX = (0x412u);
  /* 100aa5e6 ret  */
  ESPCHK(0x100aa5c0u, _esp0);
  ESP += 4; return;
L_100aa5e7:;
  /* 100aa5e7 mov eax, 0x804 */
  EAX = (0x804u);
  /* 100aa5ec ret  */
  ESPCHK(0x100aa5c0u, _esp0);
  ESP += 4; return;
L_100aa5ed:;
  /* 100aa5ed mov eax, 0x411 */
  EAX = (0x411u);
  /* 100aa5f2 ret  */
  ESPCHK(0x100aa5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5f3 @ 0x100aa5f3 (41 bytes, 17 insns) */
void f_100aa5f3(void) {
  FTRACE(0x100aa5f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aa5f3 push edi */
  push32((uint32_t)(EDI));
  /* 100aa5f4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 100aa5f6 pop ecx */
  ECX = (pop32());
  /* 100aa5f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100aa5f9 mov edi, 0x100b6ae0 */
  EDI = (0x100b6ae0u);
  /* 100aa5fe rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 100aa600 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 100aa601 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100aa603 mov edi, 0x100b69d0 */
  EDI = (0x100b69d0u);
  /* 100aa608 mov dword ptr [0x100b69c4], eax */
  w32((uint32_t)(0x100b69c4), (EAX));
  /* 100aa60d mov dword ptr [0x100b69dc], eax */
  w32((uint32_t)(0x100b69dc), (EAX));
  /* 100aa612 mov dword ptr [0x100b6be4], eax */
  w32((uint32_t)(0x100b6be4), (EAX));
  /* 100aa617 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100aa618 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100aa619 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100aa61a pop edi */
  EDI = (pop32());
  /* 100aa61b ret  */
  ESPCHK(0x100aa5f3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a61c @ 0x100aa61c (389 bytes, 124 insns) */
void f_100aa61c(void) {
  FTRACE(0x100aa61cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aa61c push ebp */
  push32((uint32_t)(EBP));
  /* 100aa61d mov ebp, esp */
  EBP = (ESP);
  /* 100aa61f sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aa625 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100aa628 push esi */
  push32((uint32_t)(ESI));
  /* 100aa629 push eax */
  push32((uint32_t)(EAX));
  /* 100aa62a push dword ptr [0x100b69c4] */
  push32((uint32_t)(r32((uint32_t)(0x100b69c4))));
  /* 100aa630 call dword ptr [0x100ae09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae09c))), 0x100aa636u);
  /* 100aa636 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa639 jne 0x100aa755 */
  if (!C.zf) goto L_100aa755;
  /* 100aa63f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100aa641 mov esi, 0x100 */
  ESI = (0x100u);
L_100aa646:;
  /* 100aa646 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 100aa64d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100aa64e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa650 jb 0x100aa646 */
  if (C.cf) goto L_100aa646;
  /* 100aa652 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 100aa655 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 100aa65c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100aa65e je 0x100aa697 */
  if (C.zf) goto L_100aa697;
  /* 100aa660 push ebx */
  push32((uint32_t)(EBX));
  /* 100aa661 push edi */
  push32((uint32_t)(EDI));
  /* 100aa662 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_100aa665:;
  /* 100aa665 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 100aa668 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 100aa66b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa66d ja 0x100aa68c */
  if ((!C.cf&&!C.zf)) goto L_100aa68c;
  /* 100aa66f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aa671 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 100aa678 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100aa679 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 100aa67e mov ebx, ecx */
  EBX = (ECX);
  /* 100aa680 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100aa683 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 100aa685 mov ecx, ebx */
  ECX = (EBX);
  /* 100aa687 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 100aa68a rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_100aa68c:;
  /* 100aa68c inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 100aa68d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 100aa68e mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 100aa691 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100aa693 jne 0x100aa665 */
  if (!C.zf) goto L_100aa665;
  /* 100aa695 pop edi */
  EDI = (pop32());
  /* 100aa696 pop ebx */
  EBX = (pop32());
L_100aa697:;
  /* 100aa697 push 0 */
  push32((uint32_t)(0x0u));
  /* 100aa699 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 100aa69f push dword ptr [0x100b6be4] */
  push32((uint32_t)(r32((uint32_t)(0x100b6be4))));
  /* 100aa6a5 push dword ptr [0x100b69c4] */
  push32((uint32_t)(r32((uint32_t)(0x100b69c4))));
  /* 100aa6ab push eax */
  push32((uint32_t)(EAX));
  /* 100aa6ac lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 100aa6b2 push esi */
  push32((uint32_t)(ESI));
  /* 100aa6b3 push eax */
  push32((uint32_t)(EAX));
  /* 100aa6b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100aa6b6 call 0x100ac25d */
  push32(0x100aa6bbu); f_100ac25d();
  /* 100aa6bb push 0 */
  push32((uint32_t)(0x0u));
  /* 100aa6bd lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 100aa6c3 push dword ptr [0x100b69c4] */
  push32((uint32_t)(r32((uint32_t)(0x100b69c4))));
  /* 100aa6c9 push esi */
  push32((uint32_t)(ESI));
  /* 100aa6ca push eax */
  push32((uint32_t)(EAX));
  /* 100aa6cb lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 100aa6d1 push esi */
  push32((uint32_t)(ESI));
  /* 100aa6d2 push eax */
  push32((uint32_t)(EAX));
  /* 100aa6d3 push esi */
  push32((uint32_t)(ESI));
  /* 100aa6d4 push dword ptr [0x100b6be4] */
  push32((uint32_t)(r32((uint32_t)(0x100b6be4))));
  /* 100aa6da call 0x100ac3a6 */
  push32(0x100aa6dfu); f_100ac3a6();
  /* 100aa6df push 0 */
  push32((uint32_t)(0x0u));
  /* 100aa6e1 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 100aa6e7 push dword ptr [0x100b69c4] */
  push32((uint32_t)(r32((uint32_t)(0x100b69c4))));
  /* 100aa6ed push esi */
  push32((uint32_t)(ESI));
  /* 100aa6ee push eax */
  push32((uint32_t)(EAX));
  /* 100aa6ef lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 100aa6f5 push esi */
  push32((uint32_t)(ESI));
  /* 100aa6f6 push eax */
  push32((uint32_t)(EAX));
  /* 100aa6f7 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 100aa6fc push dword ptr [0x100b6be4] */
  push32((uint32_t)(r32((uint32_t)(0x100b6be4))));
  /* 100aa702 call 0x100ac3a6 */
  push32(0x100aa707u); f_100ac3a6();
  /* 100aa707 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100aa70a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100aa70c lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_100aa712:;
  /* 100aa712 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 100aa715 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 100aa718 je 0x100aa730 */
  if (C.zf) goto L_100aa730;
  /* 100aa71a or byte ptr [eax + 0x100b6ae1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100b6ae1)))|(0x10u); w8((uint32_t)(EAX + 0x100b6ae1), (_r)); fl_logic(_r,8); }
  /* 100aa721 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_100aa728:;
  /* 100aa728 mov byte ptr [eax + 0x100b69e0], dl */
  w8((uint32_t)(EAX + 0x100b69e0), (DL));
  /* 100aa72e jmp 0x100aa74c */
  goto L_100aa74c;
L_100aa730:;
  /* 100aa730 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 100aa733 je 0x100aa745 */
  if (C.zf) goto L_100aa745;
  /* 100aa735 or byte ptr [eax + 0x100b6ae1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100b6ae1)))|(0x20u); w8((uint32_t)(EAX + 0x100b6ae1), (_r)); fl_logic(_r,8); }
  /* 100aa73c mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 100aa743 jmp 0x100aa728 */
  goto L_100aa728;
L_100aa745:;
  /* 100aa745 and byte ptr [eax + 0x100b69e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100b69e0)))&(0x0u); w8((uint32_t)(EAX + 0x100b69e0), (_r)); fl_logic(_r,8); }
L_100aa74c:;
  /* 100aa74c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100aa74d inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100aa74e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100aa74f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa751 jb 0x100aa712 */
  if (C.cf) goto L_100aa712;
  /* 100aa753 jmp 0x100aa79e */
  goto L_100aa79e;
L_100aa755:;
  /* 100aa755 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100aa757 mov esi, 0x100 */
  ESI = (0x100u);
L_100aa75c:;
  /* 100aa75c cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa75f jb 0x100aa77a */
  if (C.cf) goto L_100aa77a;
  /* 100aa761 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa764 ja 0x100aa77a */
  if ((!C.cf&&!C.zf)) goto L_100aa77a;
  /* 100aa766 or byte ptr [eax + 0x100b6ae1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100b6ae1)))|(0x10u); w8((uint32_t)(EAX + 0x100b6ae1), (_r)); fl_logic(_r,8); }
  /* 100aa76d mov cl, al */
  CL = (AL);
  /* 100aa76f add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_100aa772:;
  /* 100aa772 mov byte ptr [eax + 0x100b69e0], cl */
  w8((uint32_t)(EAX + 0x100b69e0), (CL));
  /* 100aa778 jmp 0x100aa799 */
  goto L_100aa799;
L_100aa77a:;
  /* 100aa77a cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa77d jb 0x100aa792 */
  if (C.cf) goto L_100aa792;
  /* 100aa77f cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa782 ja 0x100aa792 */
  if ((!C.cf&&!C.zf)) goto L_100aa792;
  /* 100aa784 or byte ptr [eax + 0x100b6ae1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100b6ae1)))|(0x20u); w8((uint32_t)(EAX + 0x100b6ae1), (_r)); fl_logic(_r,8); }
  /* 100aa78b mov cl, al */
  CL = (AL);
  /* 100aa78d sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100aa790 jmp 0x100aa772 */
  goto L_100aa772;
L_100aa792:;
  /* 100aa792 and byte ptr [eax + 0x100b69e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100b69e0)))&(0x0u); w8((uint32_t)(EAX + 0x100b69e0), (_r)); fl_logic(_r,8); }
L_100aa799:;
  /* 100aa799 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100aa79a cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa79c jb 0x100aa75c */
  if (C.cf) goto L_100aa75c;
L_100aa79e:;
  /* 100aa79e pop esi */
  ESI = (pop32());
  /* 100aa79f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100aa7a0 ret  */
  ESPCHK(0x100aa61cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7a1 @ 0x100aa7a1 (28 bytes, 7 insns) */
void f_100aa7a1(void) {
  FTRACE(0x100aa7a1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aa7a1 cmp dword ptr [0x100b7d28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100b7d28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa7a8 jne 0x100aa7bc */
  if (!C.zf) goto L_100aa7bc;
  /* 100aa7aa push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 100aa7ac call 0x100aa3c9 */
  push32(0x100aa7b1u); f_100aa3c9();
  /* 100aa7b1 pop ecx */
  ECX = (pop32());
  /* 100aa7b2 mov dword ptr [0x100b7d28], 1 */
  w32((uint32_t)(0x100b7d28), (0x1u));
L_100aa7bc:;
  /* 100aa7bc ret  */
  ESPCHK(0x100aa7a1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7c0 @ 0x100aa7c0 (664 bytes, 268 insns) [15 switch table(s)] */
void f_100aa7c0(void) {
  FTRACE(0x100aa7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aa7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 100aa7c1 mov ebp, esp */
  EBP = (ESP);
  /* 100aa7c3 push edi */
  push32((uint32_t)(EDI));
  /* 100aa7c4 push esi */
  push32((uint32_t)(ESI));
  /* 100aa7c5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100aa7c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 100aa7cb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 100aa7ce mov eax, ecx */
  EAX = (ECX);
  /* 100aa7d0 mov edx, ecx */
  EDX = (ECX);
  /* 100aa7d2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100aa7d4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa7d6 jbe 0x100aa7e0 */
  if ((C.cf||C.zf)) goto L_100aa7e0;
  /* 100aa7d8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa7da jb 0x100aa958 */
  if (C.cf) goto L_100aa958;
L_100aa7e0:;
  /* 100aa7e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 100aa7e6 jne 0x100aa7fc */
  if (!C.zf) goto L_100aa7fc;
  /* 100aa7e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100aa7eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 100aa7ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa7f1 jb 0x100aa81c */
  if (C.cf) goto L_100aa81c;
  /* 100aa7f3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100aa7f5 jmp dword ptr [edx*4 + 0x100aa908] */
  switch (EDX) {
    case 0: goto L_100aa918;
    case 1: goto L_100aa920;
    case 2: goto L_100aa92c;
    case 3: goto L_100aa940;
    default: x86_unimpl("switch@0x100aa7f5 out of table"); return;
  }
L_100aa7fc:;
  /* 100aa7fc mov eax, edi */
  EAX = (EDI);
  /* 100aa7fe mov edx, 3 */
  EDX = (0x3u);
  /* 100aa803 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aa806 jb 0x100aa814 */
  if (C.cf) goto L_100aa814;
  /* 100aa808 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 100aa80b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100aa80d jmp dword ptr [eax*4 + 0x100aa820] */
  switch (EAX) {
    case 1: goto L_100aa830;
    case 2: goto L_100aa85c;
    case 3: goto L_100aa880;
    default: x86_unimpl("switch@0x100aa80d out of table"); return;
  }
L_100aa814:;
  /* 100aa814 jmp dword ptr [ecx*4 + 0x100aa918] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x100aa918)))); return;
  /* 100aa81b nop  */
  /* nop */
L_100aa81c:;
  /* 100aa81c jmp dword ptr [ecx*4 + 0x100aa89c] */
  switch (ECX) {
    case 0: goto L_100aa8ff;
    case 1: goto L_100aa8ec;
    case 2: goto L_100aa8e4;
    case 3: goto L_100aa8dc;
    case 4: goto L_100aa8d4;
    case 5: goto L_100aa8cc;
    case 6: goto L_100aa8c4;
    case 7: goto L_100aa8bc;
    default: x86_unimpl("switch@0x100aa81c out of table"); return;
  }
  /* 100aa823 nop  */
  /* nop */
L_100aa830:;
  /* 100aa830 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100aa832 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100aa834 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100aa836 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100aa839 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100aa83c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100aa83f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100aa842 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100aa845 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100aa848 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100aa84b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa84e jb 0x100aa81c */
  if (C.cf) goto L_100aa81c;
  /* 100aa850 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100aa852 jmp dword ptr [edx*4 + 0x100aa908] */
  switch (EDX) {
    case 0: goto L_100aa918;
    case 1: goto L_100aa920;
    case 2: goto L_100aa92c;
    case 3: goto L_100aa940;
    default: x86_unimpl("switch@0x100aa852 out of table"); return;
  }
  /* 100aa859 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100aa85c:;
  /* 100aa85c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100aa85e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100aa860 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100aa862 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100aa865 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100aa868 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100aa86b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100aa86e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100aa871 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa874 jb 0x100aa81c */
  if (C.cf) goto L_100aa81c;
  /* 100aa876 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100aa878 jmp dword ptr [edx*4 + 0x100aa908] */
  switch (EDX) {
    case 0: goto L_100aa918;
    case 1: goto L_100aa920;
    case 2: goto L_100aa92c;
    case 3: goto L_100aa940;
    default: x86_unimpl("switch@0x100aa878 out of table"); return;
  }
  /* 100aa87f nop  */
  /* nop */
L_100aa880:;
  /* 100aa880 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100aa882 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100aa884 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100aa886 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100aa887 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100aa88a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100aa88b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa88e jb 0x100aa81c */
  if (C.cf) goto L_100aa81c;
  /* 100aa890 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100aa892 jmp dword ptr [edx*4 + 0x100aa908] */
  switch (EDX) {
    case 0: goto L_100aa918;
    case 1: goto L_100aa920;
    case 2: goto L_100aa92c;
    case 3: goto L_100aa940;
    default: x86_unimpl("switch@0x100aa892 out of table"); return;
  }
  /* 100aa899 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100aa8bc:;
  /* 100aa8bc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 100aa8c0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_100aa8c4:;
  /* 100aa8c4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 100aa8c8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_100aa8cc:;
  /* 100aa8cc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 100aa8d0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_100aa8d4:;
  /* 100aa8d4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 100aa8d8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_100aa8dc:;
  /* 100aa8dc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 100aa8e0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_100aa8e4:;
  /* 100aa8e4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 100aa8e8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_100aa8ec:;
  /* 100aa8ec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 100aa8f0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 100aa8f4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 100aa8fb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100aa8fd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_100aa8ff:;
  /* 100aa8ff jmp dword ptr [edx*4 + 0x100aa908] */
  switch (EDX) {
    case 0: goto L_100aa918;
    case 1: goto L_100aa920;
    case 2: goto L_100aa92c;
    case 3: goto L_100aa940;
    default: x86_unimpl("switch@0x100aa8ff out of table"); return;
  }
  /* 100aa906 mov edi, edi */
  EDI = (EDI);
L_100aa918:;
  /* 100aa918 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100aa91b pop esi */
  ESI = (pop32());
  /* 100aa91c pop edi */
  EDI = (pop32());
  /* 100aa91d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100aa91e ret  */
  ESPCHK(0x100aa7c0u, _esp0);
  ESP += 4; return;
  /* 100aa91f nop  */
  /* nop */
L_100aa920:;
  /* 100aa920 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100aa922 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100aa924 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100aa927 pop esi */
  ESI = (pop32());
  /* 100aa928 pop edi */
  EDI = (pop32());
  /* 100aa929 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100aa92a ret  */
  ESPCHK(0x100aa7c0u, _esp0);
  ESP += 4; return;
  /* 100aa92b nop  */
  /* nop */
L_100aa92c:;
  /* 100aa92c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100aa92e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100aa930 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100aa933 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100aa936 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100aa939 pop esi */
  ESI = (pop32());
  /* 100aa93a pop edi */
  EDI = (pop32());
  /* 100aa93b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100aa93c ret  */
  ESPCHK(0x100aa7c0u, _esp0);
  ESP += 4; return;
  /* 100aa93d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100aa940:;
  /* 100aa940 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100aa942 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100aa944 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100aa947 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100aa94a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100aa94d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100aa950 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100aa953 pop esi */
  ESI = (pop32());
  /* 100aa954 pop edi */
  EDI = (pop32());
  /* 100aa955 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100aa956 ret  */
  ESPCHK(0x100aa7c0u, _esp0);
  ESP += 4; return;
  /* 100aa957 nop  */
  /* nop */
L_100aa958:;
  /* 100aa958 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 100aa95c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 100aa960 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 100aa966 jne 0x100aa98c */
  if (!C.zf) goto L_100aa98c;
  /* 100aa968 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100aa96b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 100aa96e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa971 jb 0x100aa980 */
  if (C.cf) goto L_100aa980;
  /* 100aa973 std  */
  C.df=1;
  /* 100aa974 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100aa976 cld  */
  C.df=0;
  /* 100aa977 jmp dword ptr [edx*4 + 0x100aaaa0] */
  switch (EDX) {
    case 0: goto L_100aaab0;
    case 1: goto L_100aaab8;
    case 2: goto L_100aaac8;
    case 3: goto L_100aaadc;
    default: x86_unimpl("switch@0x100aa977 out of table"); return;
  }
  /* 100aa97e mov edi, edi */
  EDI = (EDI);
L_100aa980:;
  /* 100aa980 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 100aa982 jmp dword ptr [ecx*4 + 0x100aaa50] */
  switch (ECX) {
    case 0: goto L_100aaa97;
    default: x86_unimpl("switch@0x100aa982 out of table"); return;
  }
  /* 100aa989 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100aa98c:;
  /* 100aa98c mov eax, edi */
  EAX = (EDI);
  /* 100aa98e mov edx, 3 */
  EDX = (0x3u);
  /* 100aa993 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa996 jb 0x100aa9a4 */
  if (C.cf) goto L_100aa9a4;
  /* 100aa998 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 100aa99b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aa99d jmp dword ptr [eax*4 + 0x100aa9a8] */
  switch (EAX) {
    case 1: goto L_100aa9b8;
    case 2: goto L_100aa9d8;
    case 3: goto L_100aaa00;
    default: x86_unimpl("switch@0x100aa99d out of table"); return;
  }
L_100aa9a4:;
  /* 100aa9a4 jmp dword ptr [ecx*4 + 0x100aaaa0] */
  switch (ECX) {
    case 0: goto L_100aaab0;
    case 1: goto L_100aaab8;
    case 2: goto L_100aaac8;
    case 3: goto L_100aaadc;
    default: x86_unimpl("switch@0x100aa9a4 out of table"); return;
  }
  /* 100aa9ab nop  */
  /* nop */
L_100aa9b8:;
  /* 100aa9b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100aa9bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100aa9bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100aa9c0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100aa9c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100aa9c4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100aa9c5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa9c8 jb 0x100aa980 */
  if (C.cf) goto L_100aa980;
  /* 100aa9ca std  */
  C.df=1;
  /* 100aa9cb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100aa9cd cld  */
  C.df=0;
  /* 100aa9ce jmp dword ptr [edx*4 + 0x100aaaa0] */
  switch (EDX) {
    case 0: goto L_100aaab0;
    case 1: goto L_100aaab8;
    case 2: goto L_100aaac8;
    case 3: goto L_100aaadc;
    default: x86_unimpl("switch@0x100aa9ce out of table"); return;
  }
  /* 100aa9d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100aa9d8:;
  /* 100aa9d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100aa9db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100aa9dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100aa9e0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100aa9e3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100aa9e6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100aa9e9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aa9ec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aa9ef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aa9f2 jb 0x100aa980 */
  if (C.cf) goto L_100aa980;
L_100aa9f4:;
  /* 100aa9f4 std  */
  C.df=1;
  /* 100aa9f5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100aa9f7 cld  */
  C.df=0;
  /* 100aa9f8 jmp dword ptr [edx*4 + 0x100aaaa0] */
  switch (EDX) {
    case 0: goto L_100aaab0;
    case 1: goto L_100aaab8;
    case 2: goto L_100aaac8;
    case 3: goto L_100aaadc;
    default: x86_unimpl("switch@0x100aa9f8 out of table"); return;
  }
  /* 100aa9ff nop  */
  /* nop */
L_100aaa00:;
  /* 100aaa00 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100aaa03 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100aaa05 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100aaa08 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100aaa0b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100aaa0e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100aaa11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100aaa14 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100aaa17 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aaa1a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aaa1d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aaa20 jb 0x100aa980 */
  if (C.cf) goto L_100aa980;
  /* 100aaa26 std  */
  C.df=1;
  /* 100aaa27 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100aaa29 cld  */
  C.df=0;
  /* 100aaa2a jmp dword ptr [edx*4 + 0x100aaaa0] */
  switch (EDX) {
    case 0: goto L_100aaab0;
    case 1: goto L_100aaab8;
    case 2: goto L_100aaac8;
    case 3: goto L_100aaadc;
    default: x86_unimpl("switch@0x100aaa2a out of table"); return;
  }
  /* 100aaa31 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 100aaa34 push esp */
  push32((uint32_t)(ESP));
  /* 100aaa35 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 100aaa36 or dl, byte ptr [eax] */
  { uint32_t _r=(DL)|(r8((uint32_t)(EAX))); DL = (_r); fl_logic(_r,8); }
  /* 100aaa38 pop esp */
  ESP = (pop32());
  /* 100aaa39 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 100aaa3a or dl, byte ptr [eax] */
  { uint32_t _r=(DL)|(r8((uint32_t)(EAX))); DL = (_r); fl_logic(_r,8); }
  /* 100aaa3c stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 100aaa3e or dl, byte ptr [eax] */
  { uint32_t _r=(DL)|(r8((uint32_t)(EAX))); DL = (_r); fl_logic(_r,8); }
  /* 100aaa40 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x100aaa40");
  /* 100aaa41 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 100aaa42 or dl, byte ptr [eax] */
  { uint32_t _r=(DL)|(r8((uint32_t)(EAX))); DL = (_r); fl_logic(_r,8); }
  /* 100aaa44 je 0x100aa9f0 */
  if (C.zf) goto L_100aa9f0;
  /* 100aaa46 or dl, byte ptr [eax] */
  { uint32_t _r=(DL)|(r8((uint32_t)(EAX))); DL = (_r); fl_logic(_r,8); }
  /* 100aaa48 jl 0x100aa9f4 */
  if ((C.sf!=C.of)) goto L_100aa9f4;
  /* 100aaa4a or dl, byte ptr [eax] */
  { uint32_t _r=(DL)|(r8((uint32_t)(EAX))); DL = (_r); fl_logic(_r,8); }
  /* 100aaa4d stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 100aaa4e or dl, byte ptr [eax] */
  { uint32_t _r=(DL)|(r8((uint32_t)(EAX))); DL = (_r); fl_logic(_r,8); }
  /* 100aaa54 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 100aaa58 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 100aaa5c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 100aaa60 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 100aaa64 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 100aaa68 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 100aaa6c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 100aaa70 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 100aaa74 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 100aaa78 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 100aaa7c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 100aaa80 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 100aaa84 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 100aaa88 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 100aaa8c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 100aaa93 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100aaa95 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_100aaa97:;
  /* 100aaa97 jmp dword ptr [edx*4 + 0x100aaaa0] */
  switch (EDX) {
    case 0: goto L_100aaab0;
    case 1: goto L_100aaab8;
    case 2: goto L_100aaac8;
    case 3: goto L_100aaadc;
    default: x86_unimpl("switch@0x100aaa97 out of table"); return;
  }
  /* 100aaa9e mov edi, edi */
  EDI = (EDI);
L_100aaab0:;
  /* 100aaab0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100aaab3 pop esi */
  ESI = (pop32());
  /* 100aaab4 pop edi */
  EDI = (pop32());
  /* 100aaab5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100aaab6 ret  */
  ESPCHK(0x100aa7c0u, _esp0);
  ESP += 4; return;
  /* 100aaab7 nop  */
  /* nop */
L_100aaab8:;
  /* 100aaab8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100aaabb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100aaabe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100aaac1 pop esi */
  ESI = (pop32());
  /* 100aaac2 pop edi */
  EDI = (pop32());
  /* 100aaac3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100aaac4 ret  */
  ESPCHK(0x100aa7c0u, _esp0);
  ESP += 4; return;
  /* 100aaac5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100aaac8:;
  /* 100aaac8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100aaacb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100aaace mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100aaad1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100aaad4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100aaad7 pop esi */
  ESI = (pop32());
  /* 100aaad8 pop edi */
  EDI = (pop32());
  /* 100aaad9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100aaada ret  */
  ESPCHK(0x100aa7c0u, _esp0);
  ESP += 4; return;
  /* 100aaadb nop  */
  /* nop */
L_100aaadc:;
  /* 100aaadc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100aaadf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100aaae2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100aaae5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100aaae8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100aaaeb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100aaaee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100aaaf1 pop esi */
  ESI = (pop32());
  /* 100aaaf2 pop edi */
  EDI = (pop32());
  /* 100aaaf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100aaaf4 ret  */
  ESPCHK(0x100aa7c0u, _esp0);
  ESP += 4; return;
L_100aa9f0: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x100aa9f0 (unresolved jump table)"); return;
}

/* FUN_1000aaf5 @ 0x100aaaf5 (23 bytes, 7 insns) */
void f_100aaaf5(void) {
  FTRACE(0x100aaaf5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aaaf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 100aaaf7 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 100aaafb push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 100aaaff push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 100aab03 call 0x100aab0c */
  push32(0x100aab08u); f_100aab0c();
  /* 100aab08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100aab0b ret  */
  ESPCHK(0x100aaaf5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab0c @ 0x100aab0c (517 bytes, 195 insns) */
void f_100aab0c(void) {
  FTRACE(0x100aab0cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aab0c push ebp */
  push32((uint32_t)(EBP));
  /* 100aab0d mov ebp, esp */
  EBP = (ESP);
  /* 100aab0f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aab12 push ebx */
  push32((uint32_t)(EBX));
  /* 100aab13 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 100aab17 push esi */
  push32((uint32_t)(ESI));
  /* 100aab18 push edi */
  push32((uint32_t)(EDI));
  /* 100aab19 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 100aab1c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100aab1e lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 100aab21 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_100aab24:;
  /* 100aab24 cmp dword ptr [0x100b0bd0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100b0bd0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aab2b jle 0x100aab3c */
  if ((C.zf||C.sf!=C.of)) goto L_100aab3c;
  /* 100aab2d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100aab30 push 8 */
  push32((uint32_t)(0x8u));
  /* 100aab32 push eax */
  push32((uint32_t)(EAX));
  /* 100aab33 call 0x100a93ab */
  push32(0x100aab38u); f_100a93ab();
  /* 100aab38 pop ecx */
  ECX = (pop32());
  /* 100aab39 pop ecx */
  ECX = (pop32());
  /* 100aab3a jmp 0x100aab4b */
  goto L_100aab4b;
L_100aab3c:;
  /* 100aab3c mov ecx, dword ptr [0x100b09c0] */
  ECX = (r32((uint32_t)(0x100b09c0)));
  /* 100aab42 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100aab45 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 100aab48 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_100aab4b:;
  /* 100aab4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100aab4d je 0x100aab54 */
  if (C.zf) goto L_100aab54;
  /* 100aab4f mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 100aab51 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100aab52 jmp 0x100aab24 */
  goto L_100aab24;
L_100aab54:;
  /* 100aab54 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aab57 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 100aab5a jne 0x100aab62 */
  if (!C.zf) goto L_100aab62;
  /* 100aab5c or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 100aab60 jmp 0x100aab67 */
  goto L_100aab67;
L_100aab62:;
  /* 100aab62 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aab65 jne 0x100aab6d */
  if (!C.zf) goto L_100aab6d;
L_100aab67:;
  /* 100aab67 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 100aab69 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100aab6a mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_100aab6d:;
  /* 100aab6d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 100aab70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100aab72 jl 0x100aad01 */
  if ((C.sf!=C.of)) goto L_100aad01;
  /* 100aab78 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aab7b je 0x100aad01 */
  if (C.zf) goto L_100aad01;
  /* 100aab81 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aab84 jg 0x100aad01 */
  if ((!C.zf&&C.sf==C.of)) goto L_100aad01;
  /* 100aab8a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 100aab8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100aab8e pop ecx */
  ECX = (pop32());
  /* 100aab8f jne 0x100aabb5 */
  if (!C.zf) goto L_100aabb5;
  /* 100aab91 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aab94 je 0x100aab9f */
  if (C.zf) goto L_100aab9f;
  /* 100aab96 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 100aab9d jmp 0x100aabd1 */
  goto L_100aabd1;
L_100aab9f:;
  /* 100aab9f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100aaba1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aaba3 je 0x100aabb2 */
  if (C.zf) goto L_100aabb2;
  /* 100aaba5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aaba7 je 0x100aabb2 */
  if (C.zf) goto L_100aabb2;
  /* 100aaba9 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 100aabb0 jmp 0x100aabd1 */
  goto L_100aabd1;
L_100aabb2:;
  /* 100aabb2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_100aabb5:;
  /* 100aabb5 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aabb8 jne 0x100aabd1 */
  if (!C.zf) goto L_100aabd1;
  /* 100aabba cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aabbd jne 0x100aabd1 */
  if (!C.zf) goto L_100aabd1;
  /* 100aabbf mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100aabc1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aabc3 je 0x100aabc9 */
  if (C.zf) goto L_100aabc9;
  /* 100aabc5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aabc7 jne 0x100aabd1 */
  if (!C.zf) goto L_100aabd1;
L_100aabc9:;
  /* 100aabc9 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 100aabcc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100aabcd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100aabce mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_100aabd1:;
  /* 100aabd1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100aabd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100aabd6 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100aabd9 mov edi, 0x103 */
  EDI = (0x103u);
  /* 100aabde mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_100aabe1:;
  /* 100aabe1 cmp dword ptr [0x100b0bd0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100b0bd0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aabe8 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 100aabeb jle 0x100aabf9 */
  if ((C.zf||C.sf!=C.of)) goto L_100aabf9;
  /* 100aabed push 4 */
  push32((uint32_t)(0x4u));
  /* 100aabef push esi */
  push32((uint32_t)(ESI));
  /* 100aabf0 call 0x100a93ab */
  push32(0x100aabf5u); f_100a93ab();
  /* 100aabf5 pop ecx */
  ECX = (pop32());
  /* 100aabf6 pop ecx */
  ECX = (pop32());
  /* 100aabf7 jmp 0x100aac04 */
  goto L_100aac04;
L_100aabf9:;
  /* 100aabf9 mov eax, dword ptr [0x100b09c0] */
  EAX = (r32((uint32_t)(0x100b09c0)));
  /* 100aabfe mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 100aac01 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_100aac04:;
  /* 100aac04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100aac06 je 0x100aac10 */
  if (C.zf) goto L_100aac10;
  /* 100aac08 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100aac0b sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aac0e jmp 0x100aac42 */
  goto L_100aac42;
L_100aac10:;
  /* 100aac10 cmp dword ptr [0x100b0bd0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100b0bd0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aac17 jle 0x100aac24 */
  if ((C.zf||C.sf!=C.of)) goto L_100aac24;
  /* 100aac19 push edi */
  push32((uint32_t)(EDI));
  /* 100aac1a push esi */
  push32((uint32_t)(ESI));
  /* 100aac1b call 0x100a93ab */
  push32(0x100aac20u); f_100a93ab();
  /* 100aac20 pop ecx */
  ECX = (pop32());
  /* 100aac21 pop ecx */
  ECX = (pop32());
  /* 100aac22 jmp 0x100aac2f */
  goto L_100aac2f;
L_100aac24:;
  /* 100aac24 mov eax, dword ptr [0x100b09c0] */
  EAX = (r32((uint32_t)(0x100b09c0)));
  /* 100aac29 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 100aac2d and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_100aac2f:;
  /* 100aac2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100aac31 je 0x100aac7d */
  if (C.zf) goto L_100aac7d;
  /* 100aac33 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100aac36 push eax */
  push32((uint32_t)(EAX));
  /* 100aac37 call 0x100ad0e8 */
  push32(0x100aac3cu); f_100ad0e8();
  /* 100aac3c pop ecx */
  ECX = (pop32());
  /* 100aac3d mov ecx, eax */
  ECX = (EAX);
  /* 100aac3f sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_100aac42:;
  /* 100aac42 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aac45 jae 0x100aac7d */
  if (!C.cf) goto L_100aac7d;
  /* 100aac47 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 100aac4a or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 100aac4e cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aac51 jb 0x100aac67 */
  if (C.cf) goto L_100aac67;
  /* 100aac53 jne 0x100aac61 */
  if (!C.zf) goto L_100aac61;
  /* 100aac55 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100aac58 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100aac5a div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100aac5d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aac5f jbe 0x100aac67 */
  if ((C.cf||C.zf)) goto L_100aac67;
L_100aac61:;
  /* 100aac61 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 100aac65 jmp 0x100aac70 */
  goto L_100aac70;
L_100aac67:;
  /* 100aac67 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100aac6b add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100aac6d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_100aac70:;
  /* 100aac70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100aac73 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 100aac76 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 100aac78 jmp 0x100aabe1 */
  goto L_100aabe1;
L_100aac7d:;
  /* 100aac7d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 100aac80 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 100aac83 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 100aac86 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 100aac88 jne 0x100aac9a */
  if (!C.zf) goto L_100aac9a;
  /* 100aac8a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100aac8c je 0x100aac94 */
  if (C.zf) goto L_100aac94;
  /* 100aac8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100aac91 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_100aac94:;
  /* 100aac94 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 100aac98 jmp 0x100aace5 */
  goto L_100aace5;
L_100aac9a:;
  /* 100aac9a test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 100aac9c mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 100aaca1 jne 0x100aacbe */
  if (!C.zf) goto L_100aacbe;
  /* 100aaca3 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 100aaca5 jne 0x100aace5 */
  if (!C.zf) goto L_100aace5;
  /* 100aaca7 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 100aacaa je 0x100aacb5 */
  if (C.zf) goto L_100aacb5;
  /* 100aacac cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aacb3 ja 0x100aacbe */
  if ((!C.cf&&!C.zf)) goto L_100aacbe;
L_100aacb5:;
  /* 100aacb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100aacb7 jne 0x100aace5 */
  if (!C.zf) goto L_100aace5;
  /* 100aacb9 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aacbc jbe 0x100aace5 */
  if ((C.cf||C.zf)) goto L_100aace5;
L_100aacbe:;
  /* 100aacbe call 0x100abf51 */
  push32(0x100aacc3u); f_100abf51();
  /* 100aacc3 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 100aacc7 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 100aaccd je 0x100aacd5 */
  if (C.zf) goto L_100aacd5;
  /* 100aaccf or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 100aacd3 jmp 0x100aace5 */
  goto L_100aace5;
L_100aacd5:;
  /* 100aacd5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 100aacd8 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 100aacda neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 100aacdc sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aacde neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100aace0 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100aace2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_100aace5:;
  /* 100aace5 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100aace7 je 0x100aacee */
  if (C.zf) goto L_100aacee;
  /* 100aace9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100aacec mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_100aacee:;
  /* 100aacee test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 100aacf2 je 0x100aacfc */
  if (C.zf) goto L_100aacfc;
  /* 100aacf4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100aacf7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100aacf9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_100aacfc:;
  /* 100aacfc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100aacff jmp 0x100aad0c */
  goto L_100aad0c;
L_100aad01:;
  /* 100aad01 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100aad04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100aad06 je 0x100aad0a */
  if (C.zf) goto L_100aad0a;
  /* 100aad08 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_100aad0a:;
  /* 100aad0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100aad0c:;
  /* 100aad0c pop edi */
  EDI = (pop32());
  /* 100aad0d pop esi */
  ESI = (pop32());
  /* 100aad0e pop ebx */
  EBX = (pop32());
  /* 100aad0f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100aad10 ret  */
  ESPCHK(0x100aab0cu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x100aad30 (193 bytes, 90 insns) */
void f_100aad30(void) {
  FTRACE(0x100aad30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aad30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100aad32 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 100aad36 push ebx */
  push32((uint32_t)(EBX));
  /* 100aad37 mov ebx, eax */
  EBX = (EAX);
  /* 100aad39 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 100aad3c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 100aad40 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 100aad46 je 0x100aad5b */
  if (C.zf) goto L_100aad5b;
L_100aad48:;
  /* 100aad48 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 100aad4a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 100aad4b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aad4d je 0x100aad20 */
  if (C.zf) { jmp_ind(0x100aad20u); return; }
  /* 100aad4f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 100aad51 je 0x100aada4 */
  if (C.zf) goto L_100aada4;
  /* 100aad53 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 100aad59 jne 0x100aad48 */
  if (!C.zf) goto L_100aad48;
L_100aad5b:;
  /* 100aad5b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 100aad5d push edi */
  push32((uint32_t)(EDI));
  /* 100aad5e mov eax, ebx */
  EAX = (EBX);
  /* 100aad60 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 100aad63 push esi */
  push32((uint32_t)(ESI));
  /* 100aad64 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_100aad66:;
  /* 100aad66 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 100aad68 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 100aad6d mov eax, ecx */
  EAX = (ECX);
  /* 100aad6f mov esi, edi */
  ESI = (EDI);
  /* 100aad71 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 100aad73 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100aad75 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100aad77 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 100aad7a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100aad7d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100aad7f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 100aad81 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100aad84 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 100aad8a jne 0x100aada8 */
  if (!C.zf) goto L_100aada8;
  /* 100aad8c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 100aad91 je 0x100aad66 */
  if (C.zf) goto L_100aad66;
  /* 100aad93 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 100aad98 jne 0x100aada2 */
  if (!C.zf) goto L_100aada2;
  /* 100aad9a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 100aada0 jne 0x100aad66 */
  if (!C.zf) goto L_100aad66;
L_100aada2:;
  /* 100aada2 pop esi */
  ESI = (pop32());
  /* 100aada3 pop edi */
  EDI = (pop32());
L_100aada4:;
  /* 100aada4 pop ebx */
  EBX = (pop32());
  /* 100aada5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100aada7 ret  */
  ESPCHK(0x100aad30u, _esp0);
  ESP += 4; return;
L_100aada8:;
  /* 100aada8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 100aadab cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aadad je 0x100aade5 */
  if (C.zf) goto L_100aade5;
  /* 100aadaf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100aadb1 je 0x100aada2 */
  if (C.zf) goto L_100aada2;
  /* 100aadb3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aadb5 je 0x100aadde */
  if (C.zf) goto L_100aadde;
  /* 100aadb7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 100aadb9 je 0x100aada2 */
  if (C.zf) goto L_100aada2;
  /* 100aadbb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 100aadbe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aadc0 je 0x100aadd7 */
  if (C.zf) goto L_100aadd7;
  /* 100aadc2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100aadc4 je 0x100aada2 */
  if (C.zf) goto L_100aada2;
  /* 100aadc6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aadc8 je 0x100aadd0 */
  if (C.zf) goto L_100aadd0;
  /* 100aadca test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 100aadcc je 0x100aada2 */
  if (C.zf) goto L_100aada2;
  /* 100aadce jmp 0x100aad66 */
  goto L_100aad66;
L_100aadd0:;
  /* 100aadd0 pop esi */
  ESI = (pop32());
  /* 100aadd1 pop edi */
  EDI = (pop32());
  /* 100aadd2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 100aadd5 pop ebx */
  EBX = (pop32());
  /* 100aadd6 ret  */
  ESPCHK(0x100aad30u, _esp0);
  ESP += 4; return;
L_100aadd7:;
  /* 100aadd7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 100aadda pop esi */
  ESI = (pop32());
  /* 100aaddb pop edi */
  EDI = (pop32());
  /* 100aaddc pop ebx */
  EBX = (pop32());
  /* 100aaddd ret  */
  ESPCHK(0x100aad30u, _esp0);
  ESP += 4; return;
L_100aadde:;
  /* 100aadde lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 100aade1 pop esi */
  ESI = (pop32());
  /* 100aade2 pop edi */
  EDI = (pop32());
  /* 100aade3 pop ebx */
  EBX = (pop32());
  /* 100aade4 ret  */
  ESPCHK(0x100aad30u, _esp0);
  ESP += 4; return;
L_100aade5:;
  /* 100aade5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 100aade8 pop esi */
  ESI = (pop32());
  /* 100aade9 pop edi */
  EDI = (pop32());
  /* 100aadea pop ebx */
  EBX = (pop32());
  /* 100aadeb ret  */
  ESPCHK(0x100aad30u, _esp0);
  ESP += 4; return;
  /* 100aadec int3  */
  x86_unimpl("int3 @ 0x100aadec");
  /* 100aaded int3  */
  x86_unimpl("int3 @ 0x100aaded");
  /* 100aadee int3  */
  x86_unimpl("int3 @ 0x100aadee");
  /* 100aadef int3  */
  x86_unimpl("int3 @ 0x100aadef");
}

/* _strstr @ 0x100aadf0 (128 bytes, 66 insns) */
void f_100aadf0(void) {
  FTRACE(0x100aadf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aadf0 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100aadf4 push edi */
  push32((uint32_t)(EDI));
  /* 100aadf5 push ebx */
  push32((uint32_t)(EBX));
  /* 100aadf6 push esi */
  push32((uint32_t)(ESI));
  /* 100aadf7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 100aadf9 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 100aadfd test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100aadff je 0x100aae6a */
  if (C.zf) goto L_100aae6a;
  /* 100aae01 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 100aae04 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 100aae06 je 0x100aae57 */
  if (C.zf) goto L_100aae57;
L_100aae08:;
  /* 100aae08 mov esi, edi */
  ESI = (EDI);
  /* 100aae0a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 100aae0e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 100aae10 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100aae11 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aae13 je 0x100aae2a */
  if (C.zf) goto L_100aae2a;
  /* 100aae15 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100aae17 je 0x100aae24 */
  if (C.zf) goto L_100aae24;
L_100aae19:;
  /* 100aae19 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100aae1b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100aae1c:;
  /* 100aae1c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aae1e je 0x100aae2a */
  if (C.zf) goto L_100aae2a;
  /* 100aae20 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100aae22 jne 0x100aae19 */
  if (!C.zf) goto L_100aae19;
L_100aae24:;
  /* 100aae24 pop esi */
  ESI = (pop32());
  /* 100aae25 pop ebx */
  EBX = (pop32());
  /* 100aae26 pop edi */
  EDI = (pop32());
  /* 100aae27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100aae29 ret  */
  ESPCHK(0x100aadf0u, _esp0);
  ESP += 4; return;
L_100aae2a:;
  /* 100aae2a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100aae2c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100aae2d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aae2f jne 0x100aae1c */
  if (!C.zf) goto L_100aae1c;
  /* 100aae31 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_100aae34:;
  /* 100aae34 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 100aae37 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 100aae39 je 0x100aae63 */
  if (C.zf) goto L_100aae63;
  /* 100aae3b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100aae3d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100aae40 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aae42 jne 0x100aae08 */
  if (!C.zf) goto L_100aae08;
  /* 100aae44 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 100aae47 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100aae49 je 0x100aae63 */
  if (C.zf) goto L_100aae63;
  /* 100aae4b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 100aae4e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100aae51 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aae53 je 0x100aae34 */
  if (C.zf) goto L_100aae34;
  /* 100aae55 jmp 0x100aae08 */
  goto L_100aae08;
L_100aae57:;
  /* 100aae57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100aae59 pop esi */
  ESI = (pop32());
  /* 100aae5a pop ebx */
  EBX = (pop32());
  /* 100aae5b pop edi */
  EDI = (pop32());
  /* 100aae5c mov al, dl */
  AL = (DL);
  /* 100aae5e jmp 0x100aad36 */
  jmp_ind(0x100aad36u); return;
L_100aae63:;
  /* 100aae63 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 100aae66 pop esi */
  ESI = (pop32());
  /* 100aae67 pop ebx */
  EBX = (pop32());
  /* 100aae68 pop edi */
  EDI = (pop32());
  /* 100aae69 ret  */
  ESPCHK(0x100aadf0u, _esp0);
  ESP += 4; return;
L_100aae6a:;
  /* 100aae6a mov eax, edi */
  EAX = (EDI);
  /* 100aae6c pop esi */
  ESI = (pop32());
  /* 100aae6d pop ebx */
  EBX = (pop32());
  /* 100aae6e pop edi */
  EDI = (pop32());
  /* 100aae6f ret  */
  ESPCHK(0x100aadf0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x100aae70 (56 bytes, 31 insns) */
void f_100aae70(void) {
  FTRACE(0x100aae70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aae70 push ebp */
  push32((uint32_t)(EBP));
  /* 100aae71 mov ebp, esp */
  EBP = (ESP);
  /* 100aae73 push edi */
  push32((uint32_t)(EDI));
  /* 100aae74 push esi */
  push32((uint32_t)(ESI));
  /* 100aae75 push ebx */
  push32((uint32_t)(EBX));
  /* 100aae76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 100aae79 jecxz 0x100aaea1 */
  x86_unimpl("jecxz @ 0x100aae79");
  /* 100aae7b mov ebx, ecx */
  EBX = (ECX);
  /* 100aae7d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 100aae80 mov esi, edi */
  ESI = (EDI);
  /* 100aae82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100aae84 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 100aae86 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 100aae88 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100aae8a mov edi, esi */
  EDI = (ESI);
  /* 100aae8c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100aae8f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 100aae91 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 100aae94 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100aae96 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aae99 ja 0x100aae9f */
  if ((!C.cf&&!C.zf)) goto L_100aae9f;
  /* 100aae9b je 0x100aaea1 */
  if (C.zf) goto L_100aaea1;
  /* 100aae9d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100aae9e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_100aae9f:;
  /* 100aae9f not ecx */
  ECX = (~(ECX));
L_100aaea1:;
  /* 100aaea1 mov eax, ecx */
  EAX = (ECX);
  /* 100aaea3 pop ebx */
  EBX = (pop32());
  /* 100aaea4 pop esi */
  ESI = (pop32());
  /* 100aaea5 pop edi */
  EDI = (pop32());
  /* 100aaea6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100aaea7 ret  */
  ESPCHK(0x100aae70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aeb0 @ 0x100aaeb0 (47 bytes, 17 insns) */
void f_100aaeb0(void) {
  FTRACE(0x100aaeb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aaeb0 push ecx */
  push32((uint32_t)(ECX));
  /* 100aaeb1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aaeb6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 100aaeba jb 0x100aaed0 */
  if (C.cf) goto L_100aaed0;
L_100aaebc:;
  /* 100aaebc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aaec2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aaec7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 100aaec9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aaece jae 0x100aaebc */
  if (!C.cf) goto L_100aaebc;
L_100aaed0:;
  /* 100aaed0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aaed2 mov eax, esp */
  EAX = (ESP);
  /* 100aaed4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 100aaed6 mov esp, ecx */
  ESP = (ECX);
  /* 100aaed8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 100aaeda mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 100aaedd push eax */
  push32((uint32_t)(EAX));
  /* 100aaede ret  */
  ESPCHK(0x100aaeb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aedf @ 0x100aaedf (72 bytes, 17 insns) */
void f_100aaedf(void) {
  FTRACE(0x100aaedfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aaedf push 0x140 */
  push32((uint32_t)(0x140u));
  /* 100aaee4 push 0 */
  push32((uint32_t)(0x0u));
  /* 100aaee6 push dword ptr [0x100b7c04] */
  push32((uint32_t)(r32((uint32_t)(0x100b7c04))));
  /* 100aaeec call dword ptr [0x100ae098] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae098))), 0x100aaef2u);
  /* 100aaef2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100aaef4 mov dword ptr [0x100b69bc], eax */
  w32((uint32_t)(0x100b69bc), (EAX));
  /* 100aaef9 jne 0x100aaefc */
  if (!C.zf) goto L_100aaefc;
  /* 100aaefb ret  */
  ESPCHK(0x100aaedfu, _esp0);
  ESP += 4; return;
L_100aaefc:;
  /* 100aaefc mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100aaf00 and dword ptr [0x100b69b4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100b69b4)))&(0x0u); w32((uint32_t)(0x100b69b4), (_r)); fl_logic(_r,32); }
  /* 100aaf07 and dword ptr [0x100b69b8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100b69b8)))&(0x0u); w32((uint32_t)(0x100b69b8), (_r)); fl_logic(_r,32); }
  /* 100aaf0e push 1 */
  push32((uint32_t)(0x1u));
  /* 100aaf10 mov dword ptr [0x100b69b0], eax */
  w32((uint32_t)(0x100b69b0), (EAX));
  /* 100aaf15 mov dword ptr [0x100b69c0], ecx */
  w32((uint32_t)(0x100b69c0), (ECX));
  /* 100aaf1b mov dword ptr [0x100b69a8], 0x10 */
  w32((uint32_t)(0x100b69a8), (0x10u));
  /* 100aaf25 pop eax */
  EAX = (pop32());
  /* 100aaf26 ret  */
  ESPCHK(0x100aaedfu, _esp0);
  ESP += 4; return;
}

/* FUN_1000af27 @ 0x100aaf27 (43 bytes, 14 insns) */
void f_100aaf27(void) {
  FTRACE(0x100aaf27u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aaf27 mov eax, dword ptr [0x100b69b8] */
  EAX = (r32((uint32_t)(0x100b69b8)));
  /* 100aaf2c lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 100aaf2f mov eax, dword ptr [0x100b69bc] */
  EAX = (r32((uint32_t)(0x100b69bc)));
  /* 100aaf34 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_100aaf37:;
  /* 100aaf37 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aaf39 jae 0x100aaf4f */
  if (!C.cf) goto L_100aaf4f;
  /* 100aaf3b mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 100aaf3f sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aaf42 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aaf48 jb 0x100aaf51 */
  if (C.cf) goto L_100aaf51;
  /* 100aaf4a add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100aaf4d jmp 0x100aaf37 */
  goto L_100aaf37;
L_100aaf4f:;
  /* 100aaf4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100aaf51:;
  /* 100aaf51 ret  */
  ESPCHK(0x100aaf27u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af52 @ 0x100aaf52 (809 bytes, 265 insns) */
void f_100aaf52(void) {
  FTRACE(0x100aaf52u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aaf52 push ebp */
  push32((uint32_t)(EBP));
  /* 100aaf53 mov ebp, esp */
  EBP = (ESP);
  /* 100aaf55 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aaf58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100aaf5b push ebx */
  push32((uint32_t)(EBX));
  /* 100aaf5c push esi */
  push32((uint32_t)(ESI));
  /* 100aaf5d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100aaf60 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 100aaf63 push edi */
  push32((uint32_t)(EDI));
  /* 100aaf64 mov edi, esi */
  EDI = (ESI);
  /* 100aaf66 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100aaf69 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aaf6c shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 100aaf6f mov ecx, edi */
  ECX = (EDI);
  /* 100aaf71 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100aaf77 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 100aaf7e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 100aaf81 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 100aaf83 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100aaf84 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 100aaf87 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 100aaf8a jne 0x100ab276 */
  if (!C.zf) goto L_100ab276;
  /* 100aaf90 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 100aaf93 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 100aaf96 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 100aaf99 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 100aaf9c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 100aaf9f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 100aafa2 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 100aafa5 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 100aafa8 jne 0x100ab028 */
  if (!C.zf) goto L_100ab028;
  /* 100aafaa sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 100aafad dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100aafae cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aafb1 jbe 0x100aafb6 */
  if ((C.cf||C.zf)) goto L_100aafb6;
  /* 100aafb3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 100aafb5 pop edx */
  EDX = (pop32());
L_100aafb6:;
  /* 100aafb6 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 100aafb9 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aafbc jne 0x100ab00a */
  if (!C.zf) goto L_100ab00a;
  /* 100aafbe cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aafc1 jae 0x100aafe1 */
  if (!C.cf) goto L_100aafe1;
  /* 100aafc3 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 100aafc8 mov ecx, edx */
  ECX = (EDX);
  /* 100aafca shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 100aafcc lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 100aafd0 not ebx */
  EBX = (~(EBX));
  /* 100aafd2 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 100aafd6 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 100aafd8 jne 0x100ab002 */
  if (!C.zf) goto L_100ab002;
  /* 100aafda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100aafdd and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 100aafdf jmp 0x100ab002 */
  goto L_100ab002;
L_100aafe1:;
  /* 100aafe1 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 100aafe4 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 100aafe9 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 100aafeb lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 100aafef not ebx */
  EBX = (~(EBX));
  /* 100aaff1 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 100aaff8 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 100aaffa jne 0x100ab002 */
  if (!C.zf) goto L_100ab002;
  /* 100aaffc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100aafff and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_100ab002:;
  /* 100ab002 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100ab005 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 100ab008 jmp 0x100ab00d */
  goto L_100ab00d;
L_100ab00a:;
  /* 100ab00a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_100ab00d:;
  /* 100ab00d mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 100ab010 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 100ab013 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ab016 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 100ab019 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 100ab01c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 100ab01f mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 100ab022 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 100ab025 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_100ab028:;
  /* 100ab028 mov edx, ecx */
  EDX = (ECX);
  /* 100ab02a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 100ab02d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100ab02e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab031 jbe 0x100ab036 */
  if ((C.cf||C.zf)) goto L_100ab036;
  /* 100ab033 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 100ab035 pop edx */
  EDX = (pop32());
L_100ab036:;
  /* 100ab036 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 100ab039 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 100ab03c mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 100ab03f jne 0x100ab0d9 */
  if (!C.zf) goto L_100ab0d9;
  /* 100ab045 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ab048 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 100ab04b sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 100ab04e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 100ab050 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 100ab053 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100ab054 pop esi */
  ESI = (pop32());
  /* 100ab055 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab057 jbe 0x100ab05b */
  if ((C.cf||C.zf)) goto L_100ab05b;
  /* 100ab059 mov ebx, esi */
  EBX = (ESI);
L_100ab05b:;
  /* 100ab05b add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ab05e mov edx, ecx */
  EDX = (ECX);
  /* 100ab060 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 100ab063 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 100ab066 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100ab067 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab069 jbe 0x100ab06d */
  if ((C.cf||C.zf)) goto L_100ab06d;
  /* 100ab06b mov edx, esi */
  EDX = (ESI);
L_100ab06d:;
  /* 100ab06d cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab06f je 0x100ab0d4 */
  if (C.zf) goto L_100ab0d4;
  /* 100ab071 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100ab074 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 100ab077 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab07a jne 0x100ab0bc */
  if (!C.zf) goto L_100ab0bc;
  /* 100ab07c cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab07f jae 0x100ab09d */
  if (!C.cf) goto L_100ab09d;
  /* 100ab081 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 100ab086 mov ecx, ebx */
  ECX = (EBX);
  /* 100ab088 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 100ab08a not esi */
  ESI = (~(ESI));
  /* 100ab08c and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 100ab090 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 100ab094 jne 0x100ab0bc */
  if (!C.zf) goto L_100ab0bc;
  /* 100ab096 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ab099 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 100ab09b jmp 0x100ab0bc */
  goto L_100ab0bc;
L_100ab09d:;
  /* 100ab09d lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 100ab0a0 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 100ab0a5 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 100ab0a7 not esi */
  ESI = (~(ESI));
  /* 100ab0a9 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 100ab0b0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 100ab0b4 jne 0x100ab0bc */
  if (!C.zf) goto L_100ab0bc;
  /* 100ab0b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ab0b9 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_100ab0bc:;
  /* 100ab0bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100ab0bf mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 100ab0c2 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 100ab0c5 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 100ab0c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100ab0cb mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 100ab0ce mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 100ab0d1 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_100ab0d4:;
  /* 100ab0d4 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100ab0d7 jmp 0x100ab0dc */
  goto L_100ab0dc;
L_100ab0d9:;
  /* 100ab0d9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_100ab0dc:;
  /* 100ab0dc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab0e0 jne 0x100ab0ea */
  if (!C.zf) goto L_100ab0ea;
  /* 100ab0e2 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab0e4 je 0x100ab16b */
  if (C.zf) goto L_100ab16b;
L_100ab0ea:;
  /* 100ab0ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 100ab0ed mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 100ab0f1 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 100ab0f4 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 100ab0f7 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 100ab0fa mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 100ab0fd mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 100ab100 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 100ab103 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 100ab106 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab109 jne 0x100ab16b */
  if (!C.zf) goto L_100ab16b;
  /* 100ab10b mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 100ab10f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab112 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 100ab115 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 100ab117 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 100ab11b jae 0x100ab142 */
  if (!C.cf) goto L_100ab142;
  /* 100ab11d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ab121 jne 0x100ab131 */
  if (!C.zf) goto L_100ab131;
  /* 100ab123 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 100ab128 mov ecx, edx */
  ECX = (EDX);
  /* 100ab12a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 100ab12c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ab12f or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_100ab131:;
  /* 100ab131 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 100ab136 mov ecx, edx */
  ECX = (EDX);
  /* 100ab138 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 100ab13a lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 100ab13e or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100ab140 jmp 0x100ab16b */
  goto L_100ab16b;
L_100ab142:;
  /* 100ab142 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ab146 jne 0x100ab158 */
  if (!C.zf) goto L_100ab158;
  /* 100ab148 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 100ab14b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 100ab150 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 100ab152 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ab155 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_100ab158:;
  /* 100ab158 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 100ab15b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 100ab160 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 100ab162 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 100ab169 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_100ab16b:;
  /* 100ab16b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100ab16e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100ab170 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 100ab174 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 100ab177 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 100ab179 jne 0x100ab276 */
  if (!C.zf) goto L_100ab276;
  /* 100ab17f mov eax, dword ptr [0x100b69b4] */
  EAX = (r32((uint32_t)(0x100b69b4)));
  /* 100ab184 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ab186 je 0x100ab268 */
  if (C.zf) goto L_100ab268;
  /* 100ab18c mov ecx, dword ptr [0x100b69ac] */
  ECX = (r32((uint32_t)(0x100b69ac)));
  /* 100ab192 mov esi, dword ptr [0x100ae07c] */
  ESI = (r32((uint32_t)(0x100ae07c)));
  /* 100ab198 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 100ab19b add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ab19e mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 100ab1a3 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 100ab1a8 push ebx */
  push32((uint32_t)(EBX));
  /* 100ab1a9 push ecx */
  push32((uint32_t)(ECX));
  /* 100ab1aa call esi */
  call_ind((uint32_t)(ESI), 0x100ab1acu);
  /* 100ab1ac mov ecx, dword ptr [0x100b69ac] */
  ECX = (r32((uint32_t)(0x100b69ac)));
  /* 100ab1b2 mov eax, dword ptr [0x100b69b4] */
  EAX = (r32((uint32_t)(0x100b69b4)));
  /* 100ab1b7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 100ab1bc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 100ab1be or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 100ab1c1 mov eax, dword ptr [0x100b69b4] */
  EAX = (r32((uint32_t)(0x100b69b4)));
  /* 100ab1c6 mov ecx, dword ptr [0x100b69ac] */
  ECX = (r32((uint32_t)(0x100b69ac)));
  /* 100ab1cc mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 100ab1cf and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 100ab1d7 mov eax, dword ptr [0x100b69b4] */
  EAX = (r32((uint32_t)(0x100b69b4)));
  /* 100ab1dc mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 100ab1df dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 100ab1e2 mov eax, dword ptr [0x100b69b4] */
  EAX = (r32((uint32_t)(0x100b69b4)));
  /* 100ab1e7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 100ab1ea cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ab1ee jne 0x100ab1f9 */
  if (!C.zf) goto L_100ab1f9;
  /* 100ab1f0 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 100ab1f4 mov eax, dword ptr [0x100b69b4] */
  EAX = (r32((uint32_t)(0x100b69b4)));
L_100ab1f9:;
  /* 100ab1f9 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab1fd jne 0x100ab268 */
  if (!C.zf) goto L_100ab268;
  /* 100ab1ff push ebx */
  push32((uint32_t)(EBX));
  /* 100ab200 push 0 */
  push32((uint32_t)(0x0u));
  /* 100ab202 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 100ab205 call esi */
  call_ind((uint32_t)(ESI), 0x100ab207u);
  /* 100ab207 mov eax, dword ptr [0x100b69b4] */
  EAX = (r32((uint32_t)(0x100b69b4)));
  /* 100ab20c push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 100ab20f push 0 */
  push32((uint32_t)(0x0u));
  /* 100ab211 push dword ptr [0x100b7c04] */
  push32((uint32_t)(r32((uint32_t)(0x100b7c04))));
  /* 100ab217 call dword ptr [0x100ae080] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae080))), 0x100ab21du);
  /* 100ab21d mov eax, dword ptr [0x100b69b8] */
  EAX = (r32((uint32_t)(0x100b69b8)));
  /* 100ab222 mov edx, dword ptr [0x100b69bc] */
  EDX = (r32((uint32_t)(0x100b69bc)));
  /* 100ab228 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 100ab22b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 100ab22e mov ecx, eax */
  ECX = (EAX);
  /* 100ab230 mov eax, dword ptr [0x100b69b4] */
  EAX = (r32((uint32_t)(0x100b69b4)));
  /* 100ab235 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ab237 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 100ab23b push ecx */
  push32((uint32_t)(ECX));
  /* 100ab23c lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 100ab23f push ecx */
  push32((uint32_t)(ECX));
  /* 100ab240 push eax */
  push32((uint32_t)(EAX));
  /* 100ab241 call 0x100a9c20 */
  push32(0x100ab246u); f_100a9c20();
  /* 100ab246 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ab249 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ab24c dec dword ptr [0x100b69b8] */
  { uint32_t _r=(r32((uint32_t)(0x100b69b8)))-1; w32((uint32_t)(0x100b69b8), (_r)); fl_dec(_r,32); }
  /* 100ab252 cmp eax, dword ptr [0x100b69b4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x100b69b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab258 jbe 0x100ab25e */
  if ((C.cf||C.zf)) goto L_100ab25e;
  /* 100ab25a sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_100ab25e:;
  /* 100ab25e mov eax, dword ptr [0x100b69bc] */
  EAX = (r32((uint32_t)(0x100b69bc)));
  /* 100ab263 mov dword ptr [0x100b69b0], eax */
  w32((uint32_t)(0x100b69b0), (EAX));
L_100ab268:;
  /* 100ab268 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ab26b mov dword ptr [0x100b69ac], edi */
  w32((uint32_t)(0x100b69ac), (EDI));
  /* 100ab271 mov dword ptr [0x100b69b4], eax */
  w32((uint32_t)(0x100b69b4), (EAX));
L_100ab276:;
  /* 100ab276 pop edi */
  EDI = (pop32());
  /* 100ab277 pop esi */
  ESI = (pop32());
  /* 100ab278 pop ebx */
  EBX = (pop32());
  /* 100ab279 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ab27a ret  */
  ESPCHK(0x100aaf52u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b27b @ 0x100ab27b (777 bytes, 275 insns) */
void f_100ab27b(void) {
  FTRACE(0x100ab27bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ab27b push ebp */
  push32((uint32_t)(EBP));
  /* 100ab27c mov ebp, esp */
  EBP = (ESP);
  /* 100ab27e sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ab281 mov eax, dword ptr [0x100b69b8] */
  EAX = (r32((uint32_t)(0x100b69b8)));
  /* 100ab286 mov edx, dword ptr [0x100b69bc] */
  EDX = (r32((uint32_t)(0x100b69bc)));
  /* 100ab28c push ebx */
  push32((uint32_t)(EBX));
  /* 100ab28d push esi */
  push32((uint32_t)(ESI));
  /* 100ab28e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 100ab291 push edi */
  push32((uint32_t)(EDI));
  /* 100ab292 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 100ab295 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ab298 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 100ab29b lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 100ab29e and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 100ab2a1 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 100ab2a4 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 100ab2a7 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100ab2a8 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab2ab jge 0x100ab2bb */
  if ((C.sf==C.of)) goto L_100ab2bb;
  /* 100ab2ad or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 100ab2b0 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 100ab2b2 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 100ab2b6 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 100ab2b9 jmp 0x100ab2cb */
  goto L_100ab2cb;
L_100ab2bb:;
  /* 100ab2bb add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ab2be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100ab2c1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100ab2c3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 100ab2c5 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 100ab2c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_100ab2cb:;
  /* 100ab2cb mov eax, dword ptr [0x100b69b0] */
  EAX = (r32((uint32_t)(0x100b69b0)));
  /* 100ab2d0 mov ebx, eax */
  EBX = (EAX);
  /* 100ab2d2 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab2d4 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100ab2d7 jae 0x100ab2f2 */
  if (!C.cf) goto L_100ab2f2;
L_100ab2d9:;
  /* 100ab2d9 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 100ab2dc mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 100ab2de and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 100ab2e1 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 100ab2e3 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100ab2e5 jne 0x100ab2f2 */
  if (!C.zf) goto L_100ab2f2;
  /* 100ab2e7 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ab2ea cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab2ed mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100ab2f0 jb 0x100ab2d9 */
  if (C.cf) goto L_100ab2d9;
L_100ab2f2:;
  /* 100ab2f2 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab2f5 jne 0x100ab370 */
  if (!C.zf) goto L_100ab370;
  /* 100ab2f7 mov ebx, edx */
  EBX = (EDX);
L_100ab2f9:;
  /* 100ab2f9 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab2fb mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100ab2fe jae 0x100ab315 */
  if (!C.cf) goto L_100ab315;
  /* 100ab300 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 100ab303 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 100ab305 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 100ab308 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 100ab30a or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100ab30c jne 0x100ab313 */
  if (!C.zf) goto L_100ab313;
  /* 100ab30e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ab311 jmp 0x100ab2f9 */
  goto L_100ab2f9;
L_100ab313:;
  /* 100ab313 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_100ab315:;
  /* 100ab315 jne 0x100ab370 */
  if (!C.zf) goto L_100ab370;
L_100ab317:;
  /* 100ab317 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab31a jae 0x100ab32d */
  if (!C.cf) goto L_100ab32d;
  /* 100ab31c cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab320 jne 0x100ab32a */
  if (!C.zf) goto L_100ab32a;
  /* 100ab322 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ab325 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100ab328 jmp 0x100ab317 */
  goto L_100ab317;
L_100ab32a:;
  /* 100ab32a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_100ab32d:;
  /* 100ab32d jne 0x100ab355 */
  if (!C.zf) goto L_100ab355;
  /* 100ab32f mov ebx, edx */
  EBX = (EDX);
L_100ab331:;
  /* 100ab331 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab333 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100ab336 jae 0x100ab345 */
  if (!C.cf) goto L_100ab345;
  /* 100ab338 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab33c jne 0x100ab343 */
  if (!C.zf) goto L_100ab343;
  /* 100ab33e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ab341 jmp 0x100ab331 */
  goto L_100ab331;
L_100ab343:;
  /* 100ab343 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_100ab345:;
  /* 100ab345 jne 0x100ab355 */
  if (!C.zf) goto L_100ab355;
  /* 100ab347 call 0x100ab584 */
  push32(0x100ab34cu); f_100ab584();
  /* 100ab34c mov ebx, eax */
  EBX = (EAX);
  /* 100ab34e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100ab350 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100ab353 je 0x100ab369 */
  if (C.zf) goto L_100ab369;
L_100ab355:;
  /* 100ab355 push ebx */
  push32((uint32_t)(EBX));
  /* 100ab356 call 0x100ab635 */
  push32(0x100ab35bu); f_100ab635();
  /* 100ab35b pop ecx */
  ECX = (pop32());
  /* 100ab35c mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 100ab35f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 100ab361 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 100ab364 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab367 jne 0x100ab370 */
  if (!C.zf) goto L_100ab370;
L_100ab369:;
  /* 100ab369 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ab36b jmp 0x100ab57f */
  goto L_100ab57f;
L_100ab370:;
  /* 100ab370 mov dword ptr [0x100b69b0], ebx */
  w32((uint32_t)(0x100b69b0), (EBX));
  /* 100ab376 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 100ab379 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 100ab37b cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab37e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 100ab381 je 0x100ab397 */
  if (C.zf) goto L_100ab397;
  /* 100ab383 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 100ab38a mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 100ab38e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 100ab391 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 100ab393 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100ab395 jne 0x100ab3ce */
  if (!C.zf) goto L_100ab3ce;
L_100ab397:;
  /* 100ab397 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 100ab39d mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 100ab3a0 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 100ab3a3 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 100ab3a6 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ab3aa lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 100ab3ad or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 100ab3af mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 100ab3b2 jne 0x100ab3cb */
  if (!C.zf) goto L_100ab3cb;
L_100ab3b4:;
  /* 100ab3b4 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 100ab3ba inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 100ab3bd and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 100ab3c0 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ab3c3 mov edi, esi */
  EDI = (ESI);
  /* 100ab3c5 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 100ab3c7 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 100ab3c9 je 0x100ab3b4 */
  if (C.zf) goto L_100ab3b4;
L_100ab3cb:;
  /* 100ab3cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_100ab3ce:;
  /* 100ab3ce mov ecx, edx */
  ECX = (EDX);
  /* 100ab3d0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100ab3d2 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100ab3d8 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 100ab3df mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 100ab3e2 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 100ab3e6 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 100ab3e8 jne 0x100ab3f7 */
  if (!C.zf) goto L_100ab3f7;
  /* 100ab3ea mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 100ab3f1 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100ab3f3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 100ab3f6 pop edi */
  EDI = (pop32());
L_100ab3f7:;
  /* 100ab3f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100ab3f9 jl 0x100ab400 */
  if ((C.sf!=C.of)) goto L_100ab400;
  /* 100ab3fb shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 100ab3fd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ab3fe jmp 0x100ab3f7 */
  goto L_100ab3f7;
L_100ab400:;
  /* 100ab400 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 100ab403 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 100ab407 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 100ab409 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ab40c mov esi, ecx */
  ESI = (ECX);
  /* 100ab40e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100ab411 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 100ab414 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100ab415 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab418 jle 0x100ab41d */
  if ((C.zf||C.sf!=C.of)) goto L_100ab41d;
  /* 100ab41a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 100ab41c pop esi */
  ESI = (pop32());
L_100ab41d:;
  /* 100ab41d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab41f je 0x100ab532 */
  if (C.zf) goto L_100ab532;
  /* 100ab425 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 100ab428 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab42b jne 0x100ab48e */
  if (!C.zf) goto L_100ab48e;
  /* 100ab42d cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab430 jge 0x100ab45d */
  if ((C.sf==C.of)) goto L_100ab45d;
  /* 100ab432 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 100ab437 mov ecx, edi */
  ECX = (EDI);
  /* 100ab439 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 100ab43b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100ab43e lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 100ab442 not ebx */
  EBX = (~(EBX));
  /* 100ab444 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 100ab447 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 100ab44b mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 100ab44f dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 100ab451 jne 0x100ab48b */
  if (!C.zf) goto L_100ab48b;
  /* 100ab453 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ab456 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 100ab459 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 100ab45b jmp 0x100ab48e */
  goto L_100ab48e;
L_100ab45d:;
  /* 100ab45d lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 100ab460 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 100ab465 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 100ab467 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100ab46a lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 100ab46e lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 100ab475 not ebx */
  EBX = (~(EBX));
  /* 100ab477 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 100ab479 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 100ab47b mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 100ab47e jne 0x100ab48b */
  if (!C.zf) goto L_100ab48b;
  /* 100ab480 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ab483 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 100ab486 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 100ab489 jmp 0x100ab48e */
  goto L_100ab48e;
L_100ab48b:;
  /* 100ab48b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_100ab48e:;
  /* 100ab48e mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 100ab491 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 100ab494 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab498 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 100ab49b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 100ab49e mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 100ab4a1 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 100ab4a4 je 0x100ab53e */
  if (C.zf) goto L_100ab53e;
  /* 100ab4aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 100ab4ad mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 100ab4b1 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 100ab4b4 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 100ab4b7 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 100ab4ba mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 100ab4bd mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 100ab4c0 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 100ab4c3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 100ab4c6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab4c9 jne 0x100ab52f */
  if (!C.zf) goto L_100ab52f;
  /* 100ab4cb mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 100ab4cf cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab4d2 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 100ab4d5 jge 0x100ab500 */
  if ((C.sf==C.of)) goto L_100ab500;
  /* 100ab4d7 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 100ab4d9 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ab4dd mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 100ab4e1 jne 0x100ab4ee */
  if (!C.zf) goto L_100ab4ee;
  /* 100ab4e3 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 100ab4e8 mov ecx, esi */
  ECX = (ESI);
  /* 100ab4ea shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 100ab4ec or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_100ab4ee:;
  /* 100ab4ee mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 100ab4f3 mov ecx, esi */
  ECX = (ESI);
  /* 100ab4f5 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 100ab4f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100ab4fa or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 100ab4fe jmp 0x100ab52f */
  goto L_100ab52f;
L_100ab500:;
  /* 100ab500 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 100ab502 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ab506 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 100ab50a jne 0x100ab519 */
  if (!C.zf) goto L_100ab519;
  /* 100ab50c lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 100ab50f mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 100ab514 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 100ab516 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_100ab519:;
  /* 100ab519 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100ab51c lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 100ab523 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 100ab526 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 100ab52b shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 100ab52d or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_100ab52f:;
  /* 100ab52f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_100ab532:;
  /* 100ab532 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100ab534 je 0x100ab541 */
  if (C.zf) goto L_100ab541;
  /* 100ab536 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 100ab538 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 100ab53c jmp 0x100ab541 */
  goto L_100ab541;
L_100ab53e:;
  /* 100ab53e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_100ab541:;
  /* 100ab541 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 100ab544 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ab546 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 100ab549 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 100ab54b mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 100ab54f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 100ab552 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 100ab554 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100ab556 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 100ab559 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 100ab55b jne 0x100ab577 */
  if (!C.zf) goto L_100ab577;
  /* 100ab55d cmp ebx, dword ptr [0x100b69b4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x100b69b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab563 jne 0x100ab577 */
  if (!C.zf) goto L_100ab577;
  /* 100ab565 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100ab568 cmp ecx, dword ptr [0x100b69ac] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x100b69ac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab56e jne 0x100ab577 */
  if (!C.zf) goto L_100ab577;
  /* 100ab570 and dword ptr [0x100b69b4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100b69b4)))&(0x0u); w32((uint32_t)(0x100b69b4), (_r)); fl_logic(_r,32); }
L_100ab577:;
  /* 100ab577 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100ab57a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100ab57c lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_100ab57f:;
  /* 100ab57f pop edi */
  EDI = (pop32());
  /* 100ab580 pop esi */
  ESI = (pop32());
  /* 100ab581 pop ebx */
  EBX = (pop32());
  /* 100ab582 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ab583 ret  */
  ESPCHK(0x100ab27bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b584 @ 0x100ab584 (177 bytes, 53 insns) */
void f_100ab584(void) {
  FTRACE(0x100ab584u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ab584 mov eax, dword ptr [0x100b69b8] */
  EAX = (r32((uint32_t)(0x100b69b8)));
  /* 100ab589 mov ecx, dword ptr [0x100b69a8] */
  ECX = (r32((uint32_t)(0x100b69a8)));
  /* 100ab58f push esi */
  push32((uint32_t)(ESI));
  /* 100ab590 push edi */
  push32((uint32_t)(EDI));
  /* 100ab591 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100ab593 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab595 jne 0x100ab5c7 */
  if (!C.zf) goto L_100ab5c7;
  /* 100ab597 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 100ab59b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 100ab59e push eax */
  push32((uint32_t)(EAX));
  /* 100ab59f push dword ptr [0x100b69bc] */
  push32((uint32_t)(r32((uint32_t)(0x100b69bc))));
  /* 100ab5a5 push edi */
  push32((uint32_t)(EDI));
  /* 100ab5a6 push dword ptr [0x100b7c04] */
  push32((uint32_t)(r32((uint32_t)(0x100b7c04))));
  /* 100ab5ac call dword ptr [0x100ae0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae0ac))), 0x100ab5b2u);
  /* 100ab5b2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab5b4 je 0x100ab617 */
  if (C.zf) goto L_100ab617;
  /* 100ab5b6 add dword ptr [0x100b69a8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x100b69a8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x100b69a8), (_r)); fl_add(_a,_b,_r,32); }
  /* 100ab5bd mov dword ptr [0x100b69bc], eax */
  w32((uint32_t)(0x100b69bc), (EAX));
  /* 100ab5c2 mov eax, dword ptr [0x100b69b8] */
  EAX = (r32((uint32_t)(0x100b69b8)));
L_100ab5c7:;
  /* 100ab5c7 mov ecx, dword ptr [0x100b69bc] */
  ECX = (r32((uint32_t)(0x100b69bc)));
  /* 100ab5cd push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 100ab5d2 push 8 */
  push32((uint32_t)(0x8u));
  /* 100ab5d4 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 100ab5d7 push dword ptr [0x100b7c04] */
  push32((uint32_t)(r32((uint32_t)(0x100b7c04))));
  /* 100ab5dd lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 100ab5e0 call dword ptr [0x100ae098] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae098))), 0x100ab5e6u);
  /* 100ab5e6 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab5e8 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 100ab5eb je 0x100ab617 */
  if (C.zf) goto L_100ab617;
  /* 100ab5ed push 4 */
  push32((uint32_t)(0x4u));
  /* 100ab5ef push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 100ab5f4 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 100ab5f9 push edi */
  push32((uint32_t)(EDI));
  /* 100ab5fa call dword ptr [0x100ae0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae0a8))), 0x100ab600u);
  /* 100ab600 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab602 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 100ab605 jne 0x100ab61b */
  if (!C.zf) goto L_100ab61b;
  /* 100ab607 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 100ab60a push edi */
  push32((uint32_t)(EDI));
  /* 100ab60b push dword ptr [0x100b7c04] */
  push32((uint32_t)(r32((uint32_t)(0x100b7c04))));
  /* 100ab611 call dword ptr [0x100ae080] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae080))), 0x100ab617u);
L_100ab617:;
  /* 100ab617 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ab619 jmp 0x100ab632 */
  goto L_100ab632;
L_100ab61b:;
  /* 100ab61b or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 100ab61f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 100ab621 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 100ab624 inc dword ptr [0x100b69b8] */
  { uint32_t _r=(r32((uint32_t)(0x100b69b8)))+1; w32((uint32_t)(0x100b69b8), (_r)); fl_inc(_r,32); }
  /* 100ab62a mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 100ab62d or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100ab630 mov eax, esi */
  EAX = (ESI);
L_100ab632:;
  /* 100ab632 pop edi */
  EDI = (pop32());
  /* 100ab633 pop esi */
  ESI = (pop32());
  /* 100ab634 ret  */
  ESPCHK(0x100ab584u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b635 @ 0x100ab635 (251 bytes, 85 insns) */
void f_100ab635(void) {
  FTRACE(0x100ab635u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ab635 push ebp */
  push32((uint32_t)(EBP));
  /* 100ab636 mov ebp, esp */
  EBP = (ESP);
  /* 100ab638 push ecx */
  push32((uint32_t)(ECX));
  /* 100ab639 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ab63c push ebx */
  push32((uint32_t)(EBX));
  /* 100ab63d push esi */
  push32((uint32_t)(ESI));
  /* 100ab63e push edi */
  push32((uint32_t)(EDI));
  /* 100ab63f mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 100ab642 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 100ab645 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_100ab647:;
  /* 100ab647 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ab649 jl 0x100ab650 */
  if ((C.sf!=C.of)) goto L_100ab650;
  /* 100ab64b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 100ab64d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100ab64e jmp 0x100ab647 */
  goto L_100ab647;
L_100ab650:;
  /* 100ab650 mov eax, ebx */
  EAX = (EBX);
  /* 100ab652 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 100ab654 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100ab65a pop edx */
  EDX = (pop32());
  /* 100ab65b lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 100ab662 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_100ab665:;
  /* 100ab665 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 100ab668 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 100ab66b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ab66e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100ab66f jne 0x100ab665 */
  if (!C.zf) goto L_100ab665;
  /* 100ab671 mov edi, ebx */
  EDI = (EBX);
  /* 100ab673 push 4 */
  push32((uint32_t)(0x4u));
  /* 100ab675 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 100ab678 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ab67b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 100ab680 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 100ab685 push edi */
  push32((uint32_t)(EDI));
  /* 100ab686 call dword ptr [0x100ae0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae0a8))), 0x100ab68cu);
  /* 100ab68c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ab68e jne 0x100ab698 */
  if (!C.zf) goto L_100ab698;
  /* 100ab690 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100ab693 jmp 0x100ab72b */
  goto L_100ab72b;
L_100ab698:;
  /* 100ab698 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 100ab69e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab6a0 ja 0x100ab6de */
  if ((!C.cf&&!C.zf)) goto L_100ab6de;
  /* 100ab6a2 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_100ab6a5:;
  /* 100ab6a5 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 100ab6a9 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 100ab6b0 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 100ab6b6 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 100ab6bd mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100ab6bf lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 100ab6c5 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 100ab6c8 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 100ab6d2 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ab6d7 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 100ab6da cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab6dc jbe 0x100ab6a5 */
  if ((C.cf||C.zf)) goto L_100ab6a5;
L_100ab6de:;
  /* 100ab6de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100ab6e1 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 100ab6e4 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ab6e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ab6eb pop edi */
  EDI = (pop32());
  /* 100ab6ec mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 100ab6ef mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 100ab6f2 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 100ab6f5 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 100ab6f8 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 100ab6fb and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 100ab700 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 100ab707 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 100ab70a mov cl, al */
  CL = (AL);
  /* 100ab70c inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 100ab70e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100ab710 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ab713 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 100ab716 jne 0x100ab71b */
  if (!C.zf) goto L_100ab71b;
  /* 100ab718 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_100ab71b:;
  /* 100ab71b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 100ab720 mov ecx, ebx */
  ECX = (EBX);
  /* 100ab722 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 100ab724 not edx */
  EDX = (~(EDX));
  /* 100ab726 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 100ab729 mov eax, ebx */
  EAX = (EBX);
L_100ab72b:;
  /* 100ab72b pop edi */
  EDI = (pop32());
  /* 100ab72c pop esi */
  ESI = (pop32());
  /* 100ab72d pop ebx */
  EBX = (pop32());
  /* 100ab72e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ab72f ret  */
  ESPCHK(0x100ab635u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b730 @ 0x100ab730 (324 bytes, 102 insns) */
void f_100ab730(void) {
  FTRACE(0x100ab730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ab730 cmp dword ptr [0x100b0e60], -1 */
  { uint32_t _a=(r32((uint32_t)(0x100b0e60))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab737 push ebx */
  push32((uint32_t)(EBX));
  /* 100ab738 push ebp */
  push32((uint32_t)(EBP));
  /* 100ab739 push esi */
  push32((uint32_t)(ESI));
  /* 100ab73a push edi */
  push32((uint32_t)(EDI));
  /* 100ab73b jne 0x100ab744 */
  if (!C.zf) goto L_100ab744;
  /* 100ab73d mov esi, 0x100b0e50 */
  ESI = (0x100b0e50u);
  /* 100ab742 jmp 0x100ab761 */
  goto L_100ab761;
L_100ab744:;
  /* 100ab744 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 100ab749 push 0 */
  push32((uint32_t)(0x0u));
  /* 100ab74b push dword ptr [0x100b7c04] */
  push32((uint32_t)(r32((uint32_t)(0x100b7c04))));
  /* 100ab751 call dword ptr [0x100ae098] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae098))), 0x100ab757u);
  /* 100ab757 mov esi, eax */
  ESI = (EAX);
  /* 100ab759 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100ab75b je 0x100ab86d */
  if (C.zf) goto L_100ab86d;
L_100ab761:;
  /* 100ab761 mov ebp, dword ptr [0x100ae0a8] */
  EBP = (r32((uint32_t)(0x100ae0a8)));
  /* 100ab767 push 4 */
  push32((uint32_t)(0x4u));
  /* 100ab769 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 100ab76e push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 100ab773 push 0 */
  push32((uint32_t)(0x0u));
  /* 100ab775 call ebp */
  call_ind((uint32_t)(EBP), 0x100ab777u);
  /* 100ab777 mov edi, eax */
  EDI = (EAX);
  /* 100ab779 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100ab77b je 0x100ab856 */
  if (C.zf) goto L_100ab856;
  /* 100ab781 push 4 */
  push32((uint32_t)(0x4u));
  /* 100ab783 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 100ab788 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 100ab78d push ebx */
  push32((uint32_t)(EBX));
  /* 100ab78e push edi */
  push32((uint32_t)(EDI));
  /* 100ab78f call ebp */
  call_ind((uint32_t)(EBP), 0x100ab791u);
  /* 100ab791 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ab793 je 0x100ab848 */
  if (C.zf) goto L_100ab848;
  /* 100ab799 mov eax, 0x100b0e50 */
  EAX = (0x100b0e50u);
  /* 100ab79e cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab7a0 jne 0x100ab7c0 */
  if (!C.zf) goto L_100ab7c0;
  /* 100ab7a2 cmp dword ptr [0x100b0e50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100b0e50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab7a9 jne 0x100ab7b0 */
  if (!C.zf) goto L_100ab7b0;
  /* 100ab7ab mov dword ptr [0x100b0e50], eax */
  w32((uint32_t)(0x100b0e50), (EAX));
L_100ab7b0:;
  /* 100ab7b0 cmp dword ptr [0x100b0e54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100b0e54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab7b7 jne 0x100ab7d5 */
  if (!C.zf) goto L_100ab7d5;
  /* 100ab7b9 mov dword ptr [0x100b0e54], eax */
  w32((uint32_t)(0x100b0e54), (EAX));
  /* 100ab7be jmp 0x100ab7d5 */
  goto L_100ab7d5;
L_100ab7c0:;
  /* 100ab7c0 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100ab7c2 mov eax, dword ptr [0x100b0e54] */
  EAX = (r32((uint32_t)(0x100b0e54)));
  /* 100ab7c7 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 100ab7ca mov dword ptr [0x100b0e54], esi */
  w32((uint32_t)(0x100b0e54), (ESI));
  /* 100ab7d0 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 100ab7d3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_100ab7d5:;
  /* 100ab7d5 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 100ab7db lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 100ab7e1 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 100ab7e4 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 100ab7e7 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 100ab7ea mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 100ab7ed mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 100ab7f0 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 100ab7f2 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_100ab7f7:;
  /* 100ab7f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100ab7f9 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab7fc setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 100ab7ff dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100ab800 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100ab802 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100ab803 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 100ab804 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 100ab806 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 100ab809 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ab80c cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab812 jl 0x100ab7f7 */
  if ((C.sf!=C.of)) goto L_100ab7f7;
  /* 100ab814 push ebx */
  push32((uint32_t)(EBX));
  /* 100ab815 push 0 */
  push32((uint32_t)(0x0u));
  /* 100ab817 push edi */
  push32((uint32_t)(EDI));
  /* 100ab818 call 0x100a9bc0 */
  push32(0x100ab81du); f_100a9bc0();
  /* 100ab81d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100ab820:;
  /* 100ab820 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 100ab823 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ab825 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab827 jae 0x100ab844 */
  if (!C.cf) goto L_100ab844;
  /* 100ab829 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 100ab830 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 100ab833 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 100ab835 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 100ab83c add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ab842 jmp 0x100ab820 */
  goto L_100ab820;
L_100ab844:;
  /* 100ab844 mov eax, esi */
  EAX = (ESI);
  /* 100ab846 jmp 0x100ab86f */
  goto L_100ab86f;
L_100ab848:;
  /* 100ab848 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 100ab84d push 0 */
  push32((uint32_t)(0x0u));
  /* 100ab84f push edi */
  push32((uint32_t)(EDI));
  /* 100ab850 call dword ptr [0x100ae07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae07c))), 0x100ab856u);
L_100ab856:;
  /* 100ab856 cmp esi, 0x100b0e50 */
  { uint32_t _a=(ESI),_b=(0x100b0e50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab85c je 0x100ab86d */
  if (C.zf) goto L_100ab86d;
  /* 100ab85e push esi */
  push32((uint32_t)(ESI));
  /* 100ab85f push 0 */
  push32((uint32_t)(0x0u));
  /* 100ab861 push dword ptr [0x100b7c04] */
  push32((uint32_t)(r32((uint32_t)(0x100b7c04))));
  /* 100ab867 call dword ptr [0x100ae080] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae080))), 0x100ab86du);
L_100ab86d:;
  /* 100ab86d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100ab86f:;
  /* 100ab86f pop edi */
  EDI = (pop32());
  /* 100ab870 pop esi */
  ESI = (pop32());
  /* 100ab871 pop ebp */
  EBP = (pop32());
  /* 100ab872 pop ebx */
  EBX = (pop32());
  /* 100ab873 ret  */
  ESPCHK(0x100ab730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b874 @ 0x100ab874 (86 bytes, 27 insns) */
void f_100ab874(void) {
  FTRACE(0x100ab874u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ab874 push esi */
  push32((uint32_t)(ESI));
  /* 100ab875 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100ab879 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 100ab87e push 0 */
  push32((uint32_t)(0x0u));
  /* 100ab880 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 100ab883 call dword ptr [0x100ae07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae07c))), 0x100ab889u);
  /* 100ab889 cmp dword ptr [0x100b2e70], esi */
  { uint32_t _a=(r32((uint32_t)(0x100b2e70))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab88f jne 0x100ab899 */
  if (!C.zf) goto L_100ab899;
  /* 100ab891 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 100ab894 mov dword ptr [0x100b2e70], eax */
  w32((uint32_t)(0x100b2e70), (EAX));
L_100ab899:;
  /* 100ab899 cmp esi, 0x100b0e50 */
  { uint32_t _a=(ESI),_b=(0x100b0e50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab89f je 0x100ab8c1 */
  if (C.zf) goto L_100ab8c1;
  /* 100ab8a1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 100ab8a4 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 100ab8a6 push esi */
  push32((uint32_t)(ESI));
  /* 100ab8a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100ab8a9 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100ab8ab mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100ab8ad mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 100ab8b0 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 100ab8b3 push dword ptr [0x100b7c04] */
  push32((uint32_t)(r32((uint32_t)(0x100b7c04))));
  /* 100ab8b9 call dword ptr [0x100ae080] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae080))), 0x100ab8bfu);
  /* 100ab8bf pop esi */
  ESI = (pop32());
  /* 100ab8c0 ret  */
  ESPCHK(0x100ab874u, _esp0);
  ESP += 4; return;
L_100ab8c1:;
  /* 100ab8c1 or dword ptr [0x100b0e60], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x100b0e60)))|(0xffffffffu); w32((uint32_t)(0x100b0e60), (_r)); fl_logic(_r,32); }
  /* 100ab8c8 pop esi */
  ESI = (pop32());
  /* 100ab8c9 ret  */
  ESPCHK(0x100ab874u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8ca @ 0x100ab8ca (194 bytes, 66 insns) */
void f_100ab8ca(void) {
  FTRACE(0x100ab8cau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ab8ca push ebp */
  push32((uint32_t)(EBP));
  /* 100ab8cb mov ebp, esp */
  EBP = (ESP);
  /* 100ab8cd push ecx */
  push32((uint32_t)(ECX));
  /* 100ab8ce push ebx */
  push32((uint32_t)(EBX));
  /* 100ab8cf push esi */
  push32((uint32_t)(ESI));
  /* 100ab8d0 mov esi, dword ptr [0x100b0e54] */
  ESI = (r32((uint32_t)(0x100b0e54)));
  /* 100ab8d6 push edi */
  push32((uint32_t)(EDI));
L_100ab8d7:;
  /* 100ab8d7 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab8db je 0x100ab975 */
  if (C.zf) goto L_100ab975;
  /* 100ab8e1 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ab8e5 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 100ab8eb mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_100ab8f0:;
  /* 100ab8f0 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab8f6 jne 0x100ab931 */
  if (!C.zf) goto L_100ab931;
  /* 100ab8f8 mov eax, ebx */
  EAX = (EBX);
  /* 100ab8fa push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 100ab8ff add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ab902 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 100ab907 push eax */
  push32((uint32_t)(EAX));
  /* 100ab908 call dword ptr [0x100ae07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae07c))), 0x100ab90eu);
  /* 100ab90e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ab910 je 0x100ab931 */
  if (C.zf) goto L_100ab931;
  /* 100ab912 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 100ab915 dec dword ptr [0x100b6804] */
  { uint32_t _r=(r32((uint32_t)(0x100b6804)))-1; w32((uint32_t)(0x100b6804), (_r)); fl_dec(_r,32); }
  /* 100ab91b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100ab91e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ab920 je 0x100ab926 */
  if (C.zf) goto L_100ab926;
  /* 100ab922 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab924 jbe 0x100ab929 */
  if ((C.cf||C.zf)) goto L_100ab929;
L_100ab926:;
  /* 100ab926 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_100ab929:;
  /* 100ab929 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 100ab92c dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 100ab92f je 0x100ab93e */
  if (C.zf) goto L_100ab93e;
L_100ab931:;
  /* 100ab931 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ab937 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ab93a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100ab93c jge 0x100ab8f0 */
  if ((C.sf==C.of)) goto L_100ab8f0;
L_100ab93e:;
  /* 100ab93e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab942 mov ecx, esi */
  ECX = (ESI);
  /* 100ab944 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 100ab947 je 0x100ab975 */
  if (C.zf) goto L_100ab975;
  /* 100ab949 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab94d jne 0x100ab975 */
  if (!C.zf) goto L_100ab975;
  /* 100ab94f push 1 */
  push32((uint32_t)(0x1u));
  /* 100ab951 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 100ab954 pop edx */
  EDX = (pop32());
L_100ab955:;
  /* 100ab955 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab958 jne 0x100ab966 */
  if (!C.zf) goto L_100ab966;
  /* 100ab95a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 100ab95b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ab95e cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab964 jl 0x100ab955 */
  if ((C.sf!=C.of)) goto L_100ab955;
L_100ab966:;
  /* 100ab966 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab96c jne 0x100ab975 */
  if (!C.zf) goto L_100ab975;
  /* 100ab96e push ecx */
  push32((uint32_t)(ECX));
  /* 100ab96f call 0x100ab874 */
  push32(0x100ab974u); f_100ab874();
  /* 100ab974 pop ecx */
  ECX = (pop32());
L_100ab975:;
  /* 100ab975 cmp esi, dword ptr [0x100b0e54] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100b0e54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab97b je 0x100ab987 */
  if (C.zf) goto L_100ab987;
  /* 100ab97d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab981 jg 0x100ab8d7 */
  if ((!C.zf&&C.sf==C.of)) goto L_100ab8d7;
L_100ab987:;
  /* 100ab987 pop edi */
  EDI = (pop32());
  /* 100ab988 pop esi */
  ESI = (pop32());
  /* 100ab989 pop ebx */
  EBX = (pop32());
  /* 100ab98a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ab98b ret  */
  ESPCHK(0x100ab8cau, _esp0);
  ESP += 4; return;
}

/* FUN_1000b98c @ 0x100ab98c (87 bytes, 34 insns) */
void f_100ab98c(void) {
  FTRACE(0x100ab98cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ab98c mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100ab990 mov edx, 0x100b0e50 */
  EDX = (0x100b0e50u);
  /* 100ab995 push esi */
  push32((uint32_t)(ESI));
  /* 100ab996 mov ecx, edx */
  ECX = (EDX);
L_100ab998:;
  /* 100ab998 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab99b jbe 0x100ab9a2 */
  if ((C.cf||C.zf)) goto L_100ab9a2;
  /* 100ab99d cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab9a0 jb 0x100ab9aa */
  if (C.cf) goto L_100ab9aa;
L_100ab9a2:;
  /* 100ab9a2 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 100ab9a4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab9a6 je 0x100ab9df */
  if (C.zf) goto L_100ab9df;
  /* 100ab9a8 jmp 0x100ab998 */
  goto L_100ab998;
L_100ab9aa:;
  /* 100ab9aa test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 100ab9ac jne 0x100ab9df */
  if (!C.zf) goto L_100ab9df;
  /* 100ab9ae mov esi, eax */
  ESI = (EAX);
  /* 100ab9b0 mov edx, 0x100 */
  EDX = (0x100u);
  /* 100ab9b5 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 100ab9bb cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ab9bd jb 0x100ab9df */
  if (C.cf) goto L_100ab9df;
  /* 100ab9bf mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 100ab9c3 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 100ab9c5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 100ab9c9 mov ecx, eax */
  ECX = (EAX);
  /* 100ab9cb and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 100ab9d0 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ab9d2 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 100ab9d4 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ab9d6 pop esi */
  ESI = (pop32());
  /* 100ab9d7 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 100ab9da lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 100ab9de ret  */
  ESPCHK(0x100ab98cu, _esp0);
  ESP += 4; return;
L_100ab9df:;
  /* 100ab9df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ab9e1 pop esi */
  ESI = (pop32());
  /* 100ab9e2 ret  */
  ESPCHK(0x100ab98cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9e3 @ 0x100ab9e3 (69 bytes, 19 insns) */
void f_100ab9e3(void) {
  FTRACE(0x100ab9e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ab9e3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100ab9e7 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100ab9eb sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ab9ee sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 100ab9f1 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 100ab9f5 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 100ab9f9 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 100ab9fc add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100ab9fe and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 100aba01 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aba07 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 100aba0e jne 0x100aba27 */
  if (!C.zf) goto L_100aba27;
  /* 100aba10 inc dword ptr [0x100b6804] */
  { uint32_t _r=(r32((uint32_t)(0x100b6804)))+1; w32((uint32_t)(0x100b6804), (_r)); fl_inc(_r,32); }
  /* 100aba16 cmp dword ptr [0x100b6804], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x100b6804))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aba1d jne 0x100aba27 */
  if (!C.zf) goto L_100aba27;
  /* 100aba1f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 100aba21 call 0x100ab8ca */
  push32(0x100aba26u); f_100ab8ca();
  /* 100aba26 pop ecx */
  ECX = (pop32());
L_100aba27:;
  /* 100aba27 ret  */
  ESPCHK(0x100ab9e3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba28 @ 0x100aba28 (520 bytes, 180 insns) */
void f_100aba28(void) {
  FTRACE(0x100aba28u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100aba28 push ebp */
  push32((uint32_t)(EBP));
  /* 100aba29 mov ebp, esp */
  EBP = (ESP);
  /* 100aba2b push ecx */
  push32((uint32_t)(ECX));
  /* 100aba2c push ecx */
  push32((uint32_t)(ECX));
  /* 100aba2d push ebx */
  push32((uint32_t)(EBX));
  /* 100aba2e push esi */
  push32((uint32_t)(ESI));
  /* 100aba2f mov esi, dword ptr [0x100b2e70] */
  ESI = (r32((uint32_t)(0x100b2e70)));
  /* 100aba35 push edi */
  push32((uint32_t)(EDI));
L_100aba36:;
  /* 100aba36 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 100aba39 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aba3c je 0x100abae1 */
  if (C.zf) goto L_100abae1;
  /* 100aba42 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 100aba45 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 100aba4b mov eax, edi */
  EAX = (EDI);
  /* 100aba4d sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aba4f sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aba52 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 100aba55 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 100aba58 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100aba5a cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aba5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100aba5f jae 0x100aba9b */
  if (!C.cf) goto L_100aba9b;
L_100aba61:;
  /* 100aba61 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 100aba63 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 100aba66 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aba68 jl 0x100aba84 */
  if ((C.sf!=C.of)) goto L_100aba84;
  /* 100aba6a cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aba6d jbe 0x100aba84 */
  if ((C.cf||C.zf)) goto L_100aba84;
  /* 100aba6f push ebx */
  push32((uint32_t)(EBX));
  /* 100aba70 push ecx */
  push32((uint32_t)(ECX));
  /* 100aba71 push eax */
  push32((uint32_t)(EAX));
  /* 100aba72 call 0x100abc30 */
  push32(0x100aba77u); f_100abc30();
  /* 100aba77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100aba7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100aba7c jne 0x100abaf3 */
  if (!C.zf) goto L_100abaf3;
  /* 100aba7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100aba81 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_100aba84:;
  /* 100aba84 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100aba87 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 100aba8d add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100aba92 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aba94 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100aba97 jb 0x100aba61 */
  if (C.cf) goto L_100aba61;
  /* 100aba99 jmp 0x100aba9e */
  goto L_100aba9e;
L_100aba9b:;
  /* 100aba9b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_100aba9e:;
  /* 100aba9e mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 100abaa1 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 100abaa4 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 100abaa7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100abaaa cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abaac mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 100abaaf jae 0x100abae4 */
  if (!C.cf) goto L_100abae4;
L_100abab1:;
  /* 100abab1 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 100abab3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abab5 jl 0x100abad0 */
  if ((C.sf!=C.of)) goto L_100abad0;
  /* 100abab7 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ababa jbe 0x100abad0 */
  if ((C.cf||C.zf)) goto L_100abad0;
  /* 100ababc push ebx */
  push32((uint32_t)(EBX));
  /* 100ababd push eax */
  push32((uint32_t)(EAX));
  /* 100ababe push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 100abac1 call 0x100abc30 */
  push32(0x100abac6u); f_100abc30();
  /* 100abac6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100abac9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100abacb jne 0x100abaf3 */
  if (!C.zf) goto L_100abaf3;
  /* 100abacd mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_100abad0:;
  /* 100abad0 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 100abad7 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100abada cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abadd jb 0x100abab1 */
  if (C.cf) goto L_100abab1;
  /* 100abadf jmp 0x100abae4 */
  goto L_100abae4;
L_100abae1:;
  /* 100abae1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_100abae4:;
  /* 100abae4 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 100abae6 cmp esi, dword ptr [0x100b2e70] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100b2e70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abaec je 0x100abb03 */
  if (C.zf) goto L_100abb03;
  /* 100abaee jmp 0x100aba36 */
  goto L_100aba36;
L_100abaf3:;
  /* 100abaf3 mov dword ptr [0x100b2e70], esi */
  w32((uint32_t)(0x100b2e70), (ESI));
  /* 100abaf9 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 100abafb mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 100abafe jmp 0x100abc2b */
  goto L_100abc2b;
L_100abb03:;
  /* 100abb03 mov eax, 0x100b0e50 */
  EAX = (0x100b0e50u);
  /* 100abb08 mov edi, eax */
  EDI = (EAX);
L_100abb0a:;
  /* 100abb0a cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abb0e je 0x100abb16 */
  if (C.zf) goto L_100abb16;
  /* 100abb10 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abb14 jne 0x100abb22 */
  if (!C.zf) goto L_100abb22;
L_100abb16:;
  /* 100abb16 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 100abb18 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abb1a je 0x100abbf7 */
  if (C.zf) goto L_100abbf7;
  /* 100abb20 jmp 0x100abb0a */
  goto L_100abb0a;
L_100abb22:;
  /* 100abb22 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 100abb25 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100abb29 mov esi, ebx */
  ESI = (EBX);
  /* 100abb2b mov eax, ebx */
  EAX = (EBX);
  /* 100abb2d sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100abb2f sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100abb32 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 100abb35 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 100abb38 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100abb3b cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abb3e jne 0x100abb51 */
  if (!C.zf) goto L_100abb51;
L_100abb40:;
  /* 100abb40 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abb44 jge 0x100abb51 */
  if ((C.sf==C.of)) goto L_100abb51;
  /* 100abb46 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100abb49 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 100abb4c cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abb4f je 0x100abb40 */
  if (C.zf) goto L_100abb40;
L_100abb51:;
  /* 100abb51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100abb54 push 4 */
  push32((uint32_t)(0x4u));
  /* 100abb56 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 100abb59 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 100abb5e push eax */
  push32((uint32_t)(EAX));
  /* 100abb5f push esi */
  push32((uint32_t)(ESI));
  /* 100abb60 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100abb63 call dword ptr [0x100ae0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae0a8))), 0x100abb69u);
  /* 100abb69 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abb6b jne 0x100abc29 */
  if (!C.zf) goto L_100abc29;
  /* 100abb71 push 0 */
  push32((uint32_t)(0x0u));
  /* 100abb73 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 100abb76 push esi */
  push32((uint32_t)(ESI));
  /* 100abb77 call 0x100a9bc0 */
  push32(0x100abb7cu); f_100a9bc0();
  /* 100abb7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 100abb7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100abb82 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100abb84 mov ecx, ebx */
  ECX = (EBX);
  /* 100abb86 jle 0x100abbb8 */
  if ((C.zf||C.sf!=C.of)) goto L_100abbb8;
  /* 100abb88 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 100abb8b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_100abb8e:;
  /* 100abb8e or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 100abb95 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 100abb98 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 100abb9b mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 100abba0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 100abba2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 100abba4 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 100abbab add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100abbb0 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100abbb3 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 100abbb6 jne 0x100abb8e */
  if (!C.zf) goto L_100abb8e;
L_100abbb8:;
  /* 100abbb8 mov dword ptr [0x100b2e70], edi */
  w32((uint32_t)(0x100b2e70), (EDI));
  /* 100abbbe lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_100abbc4:;
  /* 100abbc4 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abbc6 jae 0x100abbd4 */
  if (!C.cf) goto L_100abbd4;
  /* 100abbc8 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abbcb je 0x100abbd2 */
  if (C.zf) goto L_100abbd2;
  /* 100abbcd add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100abbd0 jmp 0x100abbc4 */
  goto L_100abbc4;
L_100abbd2:;
  /* 100abbd2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_100abbd4:;
  /* 100abbd4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100abbd6 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 100abbd8 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 100abbdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100abbde mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 100abbe1 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 100abbe4 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 100abbe6 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 100abbe9 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 100abbed lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 100abbf3 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 100abbf5 jmp 0x100abc2b */
  goto L_100abc2b;
L_100abbf7:;
  /* 100abbf7 call 0x100ab730 */
  push32(0x100abbfcu); f_100ab730();
  /* 100abbfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100abbfe je 0x100abc29 */
  if (C.zf) goto L_100abc29;
  /* 100abc00 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 100abc03 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 100abc06 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 100abc0a mov dword ptr [0x100b2e70], eax */
  w32((uint32_t)(0x100b2e70), (EAX));
  /* 100abc0f mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 100abc11 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 100abc16 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100abc18 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 100abc1b movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 100abc1e sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 100abc21 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 100abc27 jmp 0x100abc2b */
  goto L_100abc2b;
L_100abc29:;
  /* 100abc29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100abc2b:;
  /* 100abc2b pop edi */
  EDI = (pop32());
  /* 100abc2c pop esi */
  ESI = (pop32());
  /* 100abc2d pop ebx */
  EBX = (pop32());
  /* 100abc2e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100abc2f ret  */
  ESPCHK(0x100aba28u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc30 @ 0x100abc30 (292 bytes, 125 insns) */
void f_100abc30(void) {
  FTRACE(0x100abc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100abc30 push ebp */
  push32((uint32_t)(EBP));
  /* 100abc31 mov ebp, esp */
  EBP = (ESP);
  /* 100abc33 push ecx */
  push32((uint32_t)(ECX));
  /* 100abc34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100abc37 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 100abc3a push ebx */
  push32((uint32_t)(EBX));
  /* 100abc3b push esi */
  push32((uint32_t)(ESI));
  /* 100abc3c mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 100abc3f push edi */
  push32((uint32_t)(EDI));
  /* 100abc40 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 100abc42 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 100abc48 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abc4a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 100abc4d mov eax, edi */
  EAX = (EDI);
  /* 100abc4f mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100abc52 jb 0x100abc75 */
  if (C.cf) goto L_100abc75;
  /* 100abc54 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 100abc57 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 100abc59 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abc5b jae 0x100abc64 */
  if (!C.cf) goto L_100abc64;
  /* 100abc5d add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100abc5f sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 100abc62 jmp 0x100abc6d */
  goto L_100abc6d;
L_100abc64:;
  /* 100abc64 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 100abc68 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 100abc6b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_100abc6d:;
  /* 100abc6d lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 100abc70 jmp 0x100abd43 */
  goto L_100abd43;
L_100abc75:;
  /* 100abc75 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100abc77 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100abc7a je 0x100abc7e */
  if (C.zf) goto L_100abc7e;
  /* 100abc7c mov eax, esi */
  EAX = (ESI);
L_100abc7e:;
  /* 100abc7e lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 100abc81 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abc83 jae 0x100abcc8 */
  if (!C.cf) goto L_100abcc8;
L_100abc85:;
  /* 100abc85 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 100abc87 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100abc89 jne 0x100abcbb */
  if (!C.zf) goto L_100abcbb;
  /* 100abc8b push 1 */
  push32((uint32_t)(0x1u));
  /* 100abc8d lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 100abc90 pop esi */
  ESI = (pop32());
L_100abc91:;
  /* 100abc91 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100abc94 jne 0x100abc9a */
  if (!C.zf) goto L_100abc9a;
  /* 100abc96 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100abc97 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100abc98 jmp 0x100abc91 */
  goto L_100abc91;
L_100abc9a:;
  /* 100abc9a cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abc9c jae 0x100abcec */
  if (!C.cf) goto L_100abcec;
  /* 100abc9e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abca1 jne 0x100abca8 */
  if (!C.zf) goto L_100abca8;
  /* 100abca3 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 100abca6 jmp 0x100abcb4 */
  goto L_100abcb4;
L_100abca8:;
  /* 100abca8 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 100abcab cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abcae jb 0x100abd4d */
  if (C.cf) goto L_100abd4d;
L_100abcb4:;
  /* 100abcb4 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 100abcb7 mov eax, ebx */
  EAX = (EBX);
  /* 100abcb9 jmp 0x100abcc0 */
  goto L_100abcc0;
L_100abcbb:;
  /* 100abcbb movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 100abcbe add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_100abcc0:;
  /* 100abcc0 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 100abcc3 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abcc6 jb 0x100abc85 */
  if (C.cf) goto L_100abc85;
L_100abcc8:;
  /* 100abcc8 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_100abccb:;
  /* 100abccb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abccd jae 0x100abd4d */
  if (!C.cf) goto L_100abd4d;
  /* 100abccf lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 100abcd2 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abcd5 jae 0x100abd4d */
  if (!C.cf) goto L_100abd4d;
  /* 100abcd7 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100abcd9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100abcdb jne 0x100abd1d */
  if (!C.zf) goto L_100abd1d;
  /* 100abcdd push 1 */
  push32((uint32_t)(0x1u));
  /* 100abcdf lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 100abce2 pop eax */
  EAX = (pop32());
L_100abce3:;
  /* 100abce3 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100abce6 jne 0x100abd0d */
  if (!C.zf) goto L_100abd0d;
  /* 100abce8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100abce9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100abcea jmp 0x100abce3 */
  goto L_100abce3;
L_100abcec:;
  /* 100abcec lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 100abcef cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abcf2 jae 0x100abcfd */
  if (!C.cf) goto L_100abcfd;
  /* 100abcf4 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100abcf6 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 100abcf8 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 100abcfb jmp 0x100abd06 */
  goto L_100abd06;
L_100abcfd:;
  /* 100abcfd and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 100abd01 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 100abd04 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_100abd06:;
  /* 100abd06 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 100abd08 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100abd0b jmp 0x100abd43 */
  goto L_100abd43;
L_100abd0d:;
  /* 100abd0d cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abd0f jae 0x100abd24 */
  if (!C.cf) goto L_100abd24;
  /* 100abd11 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 100abd14 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abd17 jb 0x100abd4d */
  if (C.cf) goto L_100abd4d;
  /* 100abd19 mov esi, ebx */
  ESI = (EBX);
  /* 100abd1b jmp 0x100abccb */
  goto L_100abccb;
L_100abd1d:;
  /* 100abd1d movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 100abd20 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100abd22 jmp 0x100abccb */
  goto L_100abccb;
L_100abd24:;
  /* 100abd24 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 100abd27 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abd2a jae 0x100abd35 */
  if (!C.cf) goto L_100abd35;
  /* 100abd2c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100abd2e mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 100abd30 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 100abd33 jmp 0x100abd3e */
  goto L_100abd3e;
L_100abd35:;
  /* 100abd35 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 100abd39 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 100abd3c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_100abd3e:;
  /* 100abd3e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 100abd40 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_100abd43:;
  /* 100abd43 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100abd46 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 100abd49 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100abd4b jmp 0x100abd4f */
  goto L_100abd4f;
L_100abd4d:;
  /* 100abd4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100abd4f:;
  /* 100abd4f pop edi */
  EDI = (pop32());
  /* 100abd50 pop esi */
  ESI = (pop32());
  /* 100abd51 pop ebx */
  EBX = (pop32());
  /* 100abd52 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100abd53 ret  */
  ESPCHK(0x100abc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd54 @ 0x100abd54 (137 bytes, 50 insns) */
void f_100abd54(void) {
  FTRACE(0x100abd54u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100abd54 push ebx */
  push32((uint32_t)(EBX));
  /* 100abd55 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100abd57 cmp dword ptr [0x100b6808], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100b6808))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abd5d push esi */
  push32((uint32_t)(ESI));
  /* 100abd5e push edi */
  push32((uint32_t)(EDI));
  /* 100abd5f jne 0x100abda3 */
  if (!C.zf) goto L_100abda3;
  /* 100abd61 push 0x100ae548 */
  push32((uint32_t)(0x100ae548u));
  /* 100abd66 call dword ptr [0x100ae0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae0b0))), 0x100abd6cu);
  /* 100abd6c mov edi, eax */
  EDI = (EAX);
  /* 100abd6e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abd70 je 0x100abdd9 */
  if (C.zf) goto L_100abdd9;
  /* 100abd72 mov esi, dword ptr [0x100ae088] */
  ESI = (r32((uint32_t)(0x100ae088)));
  /* 100abd78 push 0x100ae53c */
  push32((uint32_t)(0x100ae53cu));
  /* 100abd7d push edi */
  push32((uint32_t)(EDI));
  /* 100abd7e call esi */
  call_ind((uint32_t)(ESI), 0x100abd80u);
  /* 100abd80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100abd82 mov dword ptr [0x100b6808], eax */
  w32((uint32_t)(0x100b6808), (EAX));
  /* 100abd87 je 0x100abdd9 */
  if (C.zf) goto L_100abdd9;
  /* 100abd89 push 0x100ae52c */
  push32((uint32_t)(0x100ae52cu));
  /* 100abd8e push edi */
  push32((uint32_t)(EDI));
  /* 100abd8f call esi */
  call_ind((uint32_t)(ESI), 0x100abd91u);
  /* 100abd91 push 0x100ae518 */
  push32((uint32_t)(0x100ae518u));
  /* 100abd96 push edi */
  push32((uint32_t)(EDI));
  /* 100abd97 mov dword ptr [0x100b680c], eax */
  w32((uint32_t)(0x100b680c), (EAX));
  /* 100abd9c call esi */
  call_ind((uint32_t)(ESI), 0x100abd9eu);
  /* 100abd9e mov dword ptr [0x100b6810], eax */
  w32((uint32_t)(0x100b6810), (EAX));
L_100abda3:;
  /* 100abda3 mov eax, dword ptr [0x100b680c] */
  EAX = (r32((uint32_t)(0x100b680c)));
  /* 100abda8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100abdaa je 0x100abdc2 */
  if (C.zf) goto L_100abdc2;
  /* 100abdac call eax */
  call_ind((uint32_t)(EAX), 0x100abdaeu);
  /* 100abdae mov ebx, eax */
  EBX = (EAX);
  /* 100abdb0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100abdb2 je 0x100abdc2 */
  if (C.zf) goto L_100abdc2;
  /* 100abdb4 mov eax, dword ptr [0x100b6810] */
  EAX = (r32((uint32_t)(0x100b6810)));
  /* 100abdb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100abdbb je 0x100abdc2 */
  if (C.zf) goto L_100abdc2;
  /* 100abdbd push ebx */
  push32((uint32_t)(EBX));
  /* 100abdbe call eax */
  call_ind((uint32_t)(EAX), 0x100abdc0u);
  /* 100abdc0 mov ebx, eax */
  EBX = (EAX);
L_100abdc2:;
  /* 100abdc2 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100abdc6 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100abdca push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100abdce push ebx */
  push32((uint32_t)(EBX));
  /* 100abdcf call dword ptr [0x100b6808] */
  call_ind((uint32_t)(r32((uint32_t)(0x100b6808))), 0x100abdd5u);
L_100abdd5:;
  /* 100abdd5 pop edi */
  EDI = (pop32());
  /* 100abdd6 pop esi */
  ESI = (pop32());
  /* 100abdd7 pop ebx */
  EBX = (pop32());
  /* 100abdd8 ret  */
  ESPCHK(0x100abd54u, _esp0);
  ESP += 4; return;
L_100abdd9:;
  /* 100abdd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100abddb jmp 0x100abdd5 */
  goto L_100abdd5;
}

/* _strncpy @ 0x100abde0 (254 bytes, 109 insns) */
void f_100abde0(void) {
  FTRACE(0x100abde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100abde0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 100abde4 push edi */
  push32((uint32_t)(EDI));
  /* 100abde5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100abde7 je 0x100abe63 */
  if (C.zf) goto L_100abe63;
  /* 100abde9 push esi */
  push32((uint32_t)(ESI));
  /* 100abdea push ebx */
  push32((uint32_t)(EBX));
  /* 100abdeb mov ebx, ecx */
  EBX = (ECX);
  /* 100abded mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 100abdf1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 100abdf7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 100abdfb jne 0x100abe04 */
  if (!C.zf) goto L_100abe04;
  /* 100abdfd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100abe00 jne 0x100abe71 */
  if (!C.zf) goto L_100abe71;
  /* 100abe02 jmp 0x100abe25 */
  goto L_100abe25;
L_100abe04:;
  /* 100abe04 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100abe06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100abe07 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100abe09 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100abe0a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100abe0b je 0x100abe32 */
  if (C.zf) goto L_100abe32;
  /* 100abe0d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100abe0f je 0x100abe3a */
  if (C.zf) goto L_100abe3a;
  /* 100abe11 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 100abe17 jne 0x100abe04 */
  if (!C.zf) goto L_100abe04;
  /* 100abe19 mov ebx, ecx */
  EBX = (ECX);
  /* 100abe1b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100abe1e jne 0x100abe71 */
  if (!C.zf) goto L_100abe71;
L_100abe20:;
  /* 100abe20 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 100abe23 je 0x100abe32 */
  if (C.zf) goto L_100abe32;
L_100abe25:;
  /* 100abe25 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100abe27 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100abe28 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100abe2a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100abe2b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100abe2d je 0x100abe5e */
  if (C.zf) goto L_100abe5e;
  /* 100abe2f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100abe30 jne 0x100abe25 */
  if (!C.zf) goto L_100abe25;
L_100abe32:;
  /* 100abe32 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100abe36 pop ebx */
  EBX = (pop32());
  /* 100abe37 pop esi */
  ESI = (pop32());
  /* 100abe38 pop edi */
  EDI = (pop32());
  /* 100abe39 ret  */
  ESPCHK(0x100abde0u, _esp0);
  ESP += 4; return;
L_100abe3a:;
  /* 100abe3a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 100abe40 je 0x100abe54 */
  if (C.zf) goto L_100abe54;
L_100abe42:;
  /* 100abe42 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100abe44 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100abe45 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100abe46 je 0x100abed6 */
  if (C.zf) goto L_100abed6;
  /* 100abe4c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 100abe52 jne 0x100abe42 */
  if (!C.zf) goto L_100abe42;
L_100abe54:;
  /* 100abe54 mov ebx, ecx */
  EBX = (ECX);
  /* 100abe56 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100abe59 jne 0x100abec7 */
  if (!C.zf) goto L_100abec7;
L_100abe5b:;
  /* 100abe5b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100abe5d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_100abe5e:;
  /* 100abe5e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100abe5f jne 0x100abe5b */
  if (!C.zf) goto L_100abe5b;
  /* 100abe61 pop ebx */
  EBX = (pop32());
  /* 100abe62 pop esi */
  ESI = (pop32());
L_100abe63:;
  /* 100abe63 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100abe67 pop edi */
  EDI = (pop32());
  /* 100abe68 ret  */
  ESPCHK(0x100abde0u, _esp0);
  ESP += 4; return;
L_100abe69:;
  /* 100abe69 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 100abe6b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100abe6e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100abe6f je 0x100abe20 */
  if (C.zf) goto L_100abe20;
L_100abe71:;
  /* 100abe71 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 100abe76 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100abe78 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100abe7a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100abe7d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 100abe7f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 100abe81 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100abe84 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 100abe89 je 0x100abe69 */
  if (C.zf) goto L_100abe69;
  /* 100abe8b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100abe8d je 0x100abebb */
  if (C.zf) goto L_100abebb;
  /* 100abe8f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 100abe91 je 0x100abeb1 */
  if (C.zf) goto L_100abeb1;
  /* 100abe93 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 100abe99 je 0x100abea7 */
  if (C.zf) goto L_100abea7;
  /* 100abe9b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 100abea1 jne 0x100abe69 */
  if (!C.zf) goto L_100abe69;
  /* 100abea3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 100abea5 jmp 0x100abebf */
  goto L_100abebf;
L_100abea7:;
  /* 100abea7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 100abead mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 100abeaf jmp 0x100abebf */
  goto L_100abebf;
L_100abeb1:;
  /* 100abeb1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 100abeb7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 100abeb9 jmp 0x100abebf */
  goto L_100abebf;
L_100abebb:;
  /* 100abebb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100abebd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_100abebf:;
  /* 100abebf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100abec2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100abec4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100abec5 je 0x100abed1 */
  if (C.zf) goto L_100abed1;
L_100abec7:;
  /* 100abec7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100abec9:;
  /* 100abec9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 100abecb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100abece dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100abecf jne 0x100abec9 */
  if (!C.zf) goto L_100abec9;
L_100abed1:;
  /* 100abed1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 100abed4 jne 0x100abe5b */
  if (!C.zf) goto L_100abe5b;
L_100abed6:;
  /* 100abed6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100abeda pop ebx */
  EBX = (pop32());
  /* 100abedb pop esi */
  ESI = (pop32());
  /* 100abedc pop edi */
  EDI = (pop32());
  /* 100abedd ret  */
  ESPCHK(0x100abde0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bede @ 0x100abede (115 bytes, 37 insns) */
void f_100abede(void) {
  FTRACE(0x100abedeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100abede push esi */
  push32((uint32_t)(ESI));
  /* 100abedf call 0x100abf5a */
  push32(0x100abee4u); f_100abf5a();
  /* 100abee4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100abee8 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100abeea mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100abeec mov eax, 0x100b2e80 */
  EAX = (0x100b2e80u);
L_100abef1:;
  /* 100abef1 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abef3 je 0x100abf17 */
  if (C.zf) goto L_100abf17;
  /* 100abef5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100abef8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100abef9 cmp eax, 0x100b2fe8 */
  { uint32_t _a=(EAX),_b=(0x100b2fe8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abefe jl 0x100abef1 */
  if ((C.sf!=C.of)) goto L_100abef1;
  /* 100abf00 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abf03 jb 0x100abf27 */
  if (C.cf) goto L_100abf27;
  /* 100abf05 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abf08 ja 0x100abf27 */
  if ((!C.cf&&!C.zf)) goto L_100abf27;
  /* 100abf0a call 0x100abf51 */
  push32(0x100abf0fu); f_100abf51();
  /* 100abf0f mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 100abf15 pop esi */
  ESI = (pop32());
  /* 100abf16 ret  */
  ESPCHK(0x100abedeu, _esp0);
  ESP += 4; return;
L_100abf17:;
  /* 100abf17 call 0x100abf51 */
  push32(0x100abf1cu); f_100abf51();
  /* 100abf1c mov ecx, dword ptr [esi*8 + 0x100b2e84] */
  ECX = (r32((uint32_t)(ESI*8 + 0x100b2e84)));
  /* 100abf23 pop esi */
  ESI = (pop32());
  /* 100abf24 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100abf26 ret  */
  ESPCHK(0x100abedeu, _esp0);
  ESP += 4; return;
L_100abf27:;
  /* 100abf27 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abf2d jb 0x100abf44 */
  if (C.cf) goto L_100abf44;
  /* 100abf2f cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abf35 ja 0x100abf44 */
  if ((!C.cf&&!C.zf)) goto L_100abf44;
  /* 100abf37 call 0x100abf51 */
  push32(0x100abf3cu); f_100abf51();
  /* 100abf3c mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 100abf42 pop esi */
  ESI = (pop32());
  /* 100abf43 ret  */
  ESPCHK(0x100abedeu, _esp0);
  ESP += 4; return;
L_100abf44:;
  /* 100abf44 call 0x100abf51 */
  push32(0x100abf49u); f_100abf51();
  /* 100abf49 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 100abf4f pop esi */
  ESI = (pop32());
  /* 100abf50 ret  */
  ESPCHK(0x100abedeu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf51 @ 0x100abf51 (9 bytes, 3 insns) */
void f_100abf51(void) {
  FTRACE(0x100abf51u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100abf51 call 0x100a8028 */
  push32(0x100abf56u); f_100a8028();
  /* 100abf56 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100abf59 ret  */
  ESPCHK(0x100abf51u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf5a @ 0x100abf5a (9 bytes, 3 insns) */
void f_100abf5a(void) {
  FTRACE(0x100abf5au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100abf5a call 0x100a8028 */
  push32(0x100abf5fu); f_100a8028();
  /* 100abf5f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100abf62 ret  */
  ESPCHK(0x100abf5au, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf63 @ 0x100abf63 (127 bytes, 48 insns) */
void f_100abf63(void) {
  FTRACE(0x100abf63u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100abf63 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100abf67 push esi */
  push32((uint32_t)(ESI));
  /* 100abf68 cmp ecx, dword ptr [0x100b7d20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x100b7d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abf6e push edi */
  push32((uint32_t)(EDI));
  /* 100abf6f jae 0x100abfc9 */
  if (!C.cf) goto L_100abfc9;
  /* 100abf71 mov eax, ecx */
  EAX = (ECX);
  /* 100abf73 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 100abf76 lea edi, [eax*4 + 0x100b7c20] */
  EDI = ((uint32_t)(EAX*4 + 0x100b7c20));
  /* 100abf7d mov eax, ecx */
  EAX = (ECX);
  /* 100abf7f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100abf82 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 100abf85 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 100abf87 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 100abf8a add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100abf8c test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 100abf90 je 0x100abfc9 */
  if (C.zf) goto L_100abfc9;
  /* 100abf92 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abf95 je 0x100abfc9 */
  if (C.zf) goto L_100abfc9;
  /* 100abf97 cmp dword ptr [0x100b6644], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100b6644))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abf9e jne 0x100abfbf */
  if (!C.zf) goto L_100abfbf;
  /* 100abfa0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100abfa2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100abfa4 je 0x100abfb6 */
  if (C.zf) goto L_100abfb6;
  /* 100abfa6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100abfa7 je 0x100abfb1 */
  if (C.zf) goto L_100abfb1;
  /* 100abfa9 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100abfaa jne 0x100abfbf */
  if (!C.zf) goto L_100abfbf;
  /* 100abfac push eax */
  push32((uint32_t)(EAX));
  /* 100abfad push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 100abfaf jmp 0x100abfb9 */
  goto L_100abfb9;
L_100abfb1:;
  /* 100abfb1 push eax */
  push32((uint32_t)(EAX));
  /* 100abfb2 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 100abfb4 jmp 0x100abfb9 */
  goto L_100abfb9;
L_100abfb6:;
  /* 100abfb6 push eax */
  push32((uint32_t)(EAX));
  /* 100abfb7 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_100abfb9:;
  /* 100abfb9 call dword ptr [0x100ae0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae0b4))), 0x100abfbfu);
L_100abfbf:;
  /* 100abfbf mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 100abfc1 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 100abfc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100abfc7 jmp 0x100abfdf */
  goto L_100abfdf;
L_100abfc9:;
  /* 100abfc9 call 0x100abf51 */
  push32(0x100abfceu); f_100abf51();
  /* 100abfce mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100abfd4 call 0x100abf5a */
  push32(0x100abfd9u); f_100abf5a();
  /* 100abfd9 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100abfdc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_100abfdf:;
  /* 100abfdf pop edi */
  EDI = (pop32());
  /* 100abfe0 pop esi */
  ESI = (pop32());
  /* 100abfe1 ret  */
  ESPCHK(0x100abf63u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfe2 @ 0x100abfe2 (66 bytes, 19 insns) */
void f_100abfe2(void) {
  FTRACE(0x100abfe2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100abfe2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100abfe6 cmp eax, dword ptr [0x100b7d20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x100b7d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100abfec jae 0x100ac00d */
  if (!C.cf) goto L_100ac00d;
  /* 100abfee mov ecx, eax */
  ECX = (EAX);
  /* 100abff0 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100abff3 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100abff6 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100abff9 mov ecx, dword ptr [ecx*4 + 0x100b7c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100b7c20)));
  /* 100ac000 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 100ac005 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 100ac008 je 0x100ac00d */
  if (C.zf) goto L_100ac00d;
  /* 100ac00a mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 100ac00c ret  */
  ESPCHK(0x100abfe2u, _esp0);
  ESP += 4; return;
L_100ac00d:;
  /* 100ac00d call 0x100abf51 */
  push32(0x100ac012u); f_100abf51();
  /* 100ac012 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100ac018 call 0x100abf5a */
  push32(0x100ac01du); f_100abf5a();
  /* 100ac01d and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100ac020 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100ac023 ret  */
  ESPCHK(0x100abfe2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c024 @ 0x100ac024 (95 bytes, 34 insns) */
void f_100ac024(void) {
  FTRACE(0x100ac024u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ac024 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100ac028 push ebx */
  push32((uint32_t)(EBX));
  /* 100ac029 mov ecx, eax */
  ECX = (EAX);
  /* 100ac02b and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100ac02e sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100ac031 push esi */
  push32((uint32_t)(ESI));
  /* 100ac032 push edi */
  push32((uint32_t)(EDI));
  /* 100ac033 mov esi, dword ptr [ecx*4 + 0x100b7c20] */
  ESI = (r32((uint32_t)(ECX*4 + 0x100b7c20)));
  /* 100ac03a lea ebx, [ecx*4 + 0x100b7c20] */
  EBX = ((uint32_t)(ECX*4 + 0x100b7c20));
  /* 100ac041 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 100ac044 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 100ac047 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ac049 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac04d jne 0x100ac072 */
  if (!C.zf) goto L_100ac072;
  /* 100ac04f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 100ac051 call 0x100a9ff3 */
  push32(0x100ac056u); f_100a9ff3();
  /* 100ac056 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac05a pop ecx */
  ECX = (pop32());
  /* 100ac05b jne 0x100ac06a */
  if (!C.zf) goto L_100ac06a;
  /* 100ac05d lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 100ac060 push eax */
  push32((uint32_t)(EAX));
  /* 100ac061 call dword ptr [0x100ae094] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae094))), 0x100ac067u);
  /* 100ac067 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_100ac06a:;
  /* 100ac06a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 100ac06c call 0x100aa054 */
  push32(0x100ac071u); f_100aa054();
  /* 100ac071 pop ecx */
  ECX = (pop32());
L_100ac072:;
  /* 100ac072 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 100ac074 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 100ac078 push eax */
  push32((uint32_t)(EAX));
  /* 100ac079 call dword ptr [0x100ae00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae00c))), 0x100ac07fu);
  /* 100ac07f pop edi */
  EDI = (pop32());
  /* 100ac080 pop esi */
  ESI = (pop32());
  /* 100ac081 pop ebx */
  EBX = (pop32());
  /* 100ac082 ret  */
  ESPCHK(0x100ac024u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c083 @ 0x100ac083 (34 bytes, 10 insns) */
void f_100ac083(void) {
  FTRACE(0x100ac083u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ac083 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100ac087 mov ecx, eax */
  ECX = (EAX);
  /* 100ac089 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100ac08c sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100ac08f lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100ac092 mov ecx, dword ptr [ecx*4 + 0x100b7c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100b7c20)));
  /* 100ac099 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 100ac09d push eax */
  push32((uint32_t)(EAX));
  /* 100ac09e call dword ptr [0x100ae008] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae008))), 0x100ac0a4u);
  /* 100ac0a4 ret  */
  ESPCHK(0x100ac083u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c126 @ 0x100ac126 (46 bytes, 22 insns) */
void f_100ac126(void) {
  FTRACE(0x100ac126u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ac126 push esi */
  push32((uint32_t)(ESI));
  /* 100ac127 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100ac12b push esi */
  push32((uint32_t)(ESI));
  /* 100ac12c call 0x100ac154 */
  push32(0x100ac131u); f_100ac154();
  /* 100ac131 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ac133 pop ecx */
  ECX = (pop32());
  /* 100ac134 je 0x100ac13b */
  if (C.zf) goto L_100ac13b;
  /* 100ac136 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100ac139 pop esi */
  ESI = (pop32());
  /* 100ac13a ret  */
  ESPCHK(0x100ac126u, _esp0);
  ESP += 4; return;
L_100ac13b:;
  /* 100ac13b test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 100ac13f je 0x100ac150 */
  if (C.zf) goto L_100ac150;
  /* 100ac141 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 100ac144 call 0x100ad2a0 */
  push32(0x100ac149u); f_100ad2a0();
  /* 100ac149 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100ac14b pop ecx */
  ECX = (pop32());
  /* 100ac14c pop esi */
  ESI = (pop32());
  /* 100ac14d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ac14f ret  */
  ESPCHK(0x100ac126u, _esp0);
  ESP += 4; return;
L_100ac150:;
  /* 100ac150 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ac152 pop esi */
  ESI = (pop32());
  /* 100ac153 ret  */
  ESPCHK(0x100ac126u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c154 @ 0x100ac154 (92 bytes, 40 insns) */
void f_100ac154(void) {
  FTRACE(0x100ac154u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ac154 push ebx */
  push32((uint32_t)(EBX));
  /* 100ac155 push esi */
  push32((uint32_t)(ESI));
  /* 100ac156 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 100ac15a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ac15c push edi */
  push32((uint32_t)(EDI));
  /* 100ac15d mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100ac160 mov ecx, eax */
  ECX = (EAX);
  /* 100ac162 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 100ac165 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac168 jne 0x100ac1a1 */
  if (!C.zf) goto L_100ac1a1;
  /* 100ac16a test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 100ac16e je 0x100ac1a1 */
  if (C.zf) goto L_100ac1a1;
  /* 100ac170 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 100ac173 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 100ac175 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ac177 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100ac179 jle 0x100ac1a1 */
  if ((C.zf||C.sf!=C.of)) goto L_100ac1a1;
  /* 100ac17b push edi */
  push32((uint32_t)(EDI));
  /* 100ac17c push eax */
  push32((uint32_t)(EAX));
  /* 100ac17d push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 100ac180 call 0x100a8c55 */
  push32(0x100ac185u); f_100a8c55();
  /* 100ac185 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ac188 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac18a jne 0x100ac19a */
  if (!C.zf) goto L_100ac19a;
  /* 100ac18c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100ac18f test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 100ac191 je 0x100ac1a1 */
  if (C.zf) goto L_100ac1a1;
  /* 100ac193 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 100ac195 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 100ac198 jmp 0x100ac1a1 */
  goto L_100ac1a1;
L_100ac19a:;
  /* 100ac19a or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 100ac19e or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_100ac1a1:;
  /* 100ac1a1 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 100ac1a4 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 100ac1a8 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100ac1aa pop edi */
  EDI = (pop32());
  /* 100ac1ab mov eax, ebx */
  EAX = (EBX);
  /* 100ac1ad pop esi */
  ESI = (pop32());
  /* 100ac1ae pop ebx */
  EBX = (pop32());
  /* 100ac1af ret  */
  ESPCHK(0x100ac154u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1b9 @ 0x100ac1b9 (164 bytes, 66 insns) */
void f_100ac1b9(void) {
  FTRACE(0x100ac1b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ac1b9 push ebx */
  push32((uint32_t)(EBX));
  /* 100ac1ba push esi */
  push32((uint32_t)(ESI));
  /* 100ac1bb push edi */
  push32((uint32_t)(EDI));
  /* 100ac1bc push 2 */
  push32((uint32_t)(0x2u));
  /* 100ac1be xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ac1c0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100ac1c2 call 0x100a9ff3 */
  push32(0x100ac1c7u); f_100a9ff3();
  /* 100ac1c7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100ac1c9 pop ecx */
  ECX = (pop32());
  /* 100ac1ca cmp dword ptr [0x100b7c00], esi */
  { uint32_t _a=(r32((uint32_t)(0x100b7c00))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac1d0 jle 0x100ac246 */
  if ((C.zf||C.sf!=C.of)) goto L_100ac246;
L_100ac1d2:;
  /* 100ac1d2 mov eax, dword ptr [0x100b6be8] */
  EAX = (r32((uint32_t)(0x100b6be8)));
  /* 100ac1d7 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 100ac1da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ac1dc je 0x100ac23d */
  if (C.zf) goto L_100ac23d;
  /* 100ac1de test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 100ac1e2 je 0x100ac23d */
  if (C.zf) goto L_100ac23d;
  /* 100ac1e4 push eax */
  push32((uint32_t)(EAX));
  /* 100ac1e5 push esi */
  push32((uint32_t)(ESI));
  /* 100ac1e6 call 0x100a8f9d */
  push32(0x100ac1ebu); f_100a8f9d();
  /* 100ac1eb mov eax, dword ptr [0x100b6be8] */
  EAX = (r32((uint32_t)(0x100b6be8)));
  /* 100ac1f0 pop ecx */
  ECX = (pop32());
  /* 100ac1f1 pop ecx */
  ECX = (pop32());
  /* 100ac1f2 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 100ac1f5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 100ac1f8 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 100ac1fb je 0x100ac22d */
  if (C.zf) goto L_100ac22d;
  /* 100ac1fd cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac202 jne 0x100ac213 */
  if (!C.zf) goto L_100ac213;
  /* 100ac204 push eax */
  push32((uint32_t)(EAX));
  /* 100ac205 call 0x100ac126 */
  push32(0x100ac20au); f_100ac126();
  /* 100ac20a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac20d pop ecx */
  ECX = (pop32());
  /* 100ac20e je 0x100ac22d */
  if (C.zf) goto L_100ac22d;
  /* 100ac210 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100ac211 jmp 0x100ac22d */
  goto L_100ac22d;
L_100ac213:;
  /* 100ac213 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac218 jne 0x100ac22d */
  if (!C.zf) goto L_100ac22d;
  /* 100ac21a test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 100ac21d je 0x100ac22d */
  if (C.zf) goto L_100ac22d;
  /* 100ac21f push eax */
  push32((uint32_t)(EAX));
  /* 100ac220 call 0x100ac126 */
  push32(0x100ac225u); f_100ac126();
  /* 100ac225 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac228 pop ecx */
  ECX = (pop32());
  /* 100ac229 jne 0x100ac22d */
  if (!C.zf) goto L_100ac22d;
  /* 100ac22b or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_100ac22d:;
  /* 100ac22d mov eax, dword ptr [0x100b6be8] */
  EAX = (r32((uint32_t)(0x100b6be8)));
  /* 100ac232 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 100ac235 push esi */
  push32((uint32_t)(ESI));
  /* 100ac236 call 0x100a8fef */
  push32(0x100ac23bu); f_100a8fef();
  /* 100ac23b pop ecx */
  ECX = (pop32());
  /* 100ac23c pop ecx */
  ECX = (pop32());
L_100ac23d:;
  /* 100ac23d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100ac23e cmp esi, dword ptr [0x100b7c00] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100b7c00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac244 jl 0x100ac1d2 */
  if ((C.sf!=C.of)) goto L_100ac1d2;
L_100ac246:;
  /* 100ac246 push 2 */
  push32((uint32_t)(0x2u));
  /* 100ac248 call 0x100aa054 */
  push32(0x100ac24du); f_100aa054();
  /* 100ac24d cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac252 pop ecx */
  ECX = (pop32());
  /* 100ac253 mov eax, ebx */
  EAX = (EBX);
  /* 100ac255 je 0x100ac259 */
  if (C.zf) goto L_100ac259;
  /* 100ac257 mov eax, edi */
  EAX = (EDI);
L_100ac259:;
  /* 100ac259 pop edi */
  EDI = (pop32());
  /* 100ac25a pop esi */
  ESI = (pop32());
  /* 100ac25b pop ebx */
  EBX = (pop32());
  /* 100ac25c ret  */
  ESPCHK(0x100ac1b9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c25d @ 0x100ac25d (318 bytes, 123 insns) */
void f_100ac25d(void) {
  FTRACE(0x100ac25du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ac25d push ebp */
  push32((uint32_t)(EBP));
  /* 100ac25e mov ebp, esp */
  EBP = (ESP);
  /* 100ac260 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 100ac262 push 0x100ae560 */
  push32((uint32_t)(0x100ae560u));
  /* 100ac267 push 0x100ad010 */
  push32((uint32_t)(0x100ad010u));
  /* 100ac26c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 100ac272 push eax */
  push32((uint32_t)(EAX));
  /* 100ac273 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 100ac27a sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ac27d push ebx */
  push32((uint32_t)(EBX));
  /* 100ac27e push esi */
  push32((uint32_t)(ESI));
  /* 100ac27f push edi */
  push32((uint32_t)(EDI));
  /* 100ac280 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 100ac283 mov eax, dword ptr [0x100b6854] */
  EAX = (r32((uint32_t)(0x100b6854)));
  /* 100ac288 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ac28a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac28c jne 0x100ac2cc */
  if (!C.zf) goto L_100ac2cc;
  /* 100ac28e lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 100ac291 push eax */
  push32((uint32_t)(EAX));
  /* 100ac292 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ac294 pop esi */
  ESI = (pop32());
  /* 100ac295 push esi */
  push32((uint32_t)(ESI));
  /* 100ac296 push 0x100ae558 */
  push32((uint32_t)(0x100ae558u));
  /* 100ac29b push esi */
  push32((uint32_t)(ESI));
  /* 100ac29c call dword ptr [0x100ae0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae0c0))), 0x100ac2a2u);
  /* 100ac2a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ac2a4 je 0x100ac2aa */
  if (C.zf) goto L_100ac2aa;
  /* 100ac2a6 mov eax, esi */
  EAX = (ESI);
  /* 100ac2a8 jmp 0x100ac2c7 */
  goto L_100ac2c7;
L_100ac2aa:;
  /* 100ac2aa lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 100ac2ad push eax */
  push32((uint32_t)(EAX));
  /* 100ac2ae push esi */
  push32((uint32_t)(ESI));
  /* 100ac2af push 0x100ae554 */
  push32((uint32_t)(0x100ae554u));
  /* 100ac2b4 push esi */
  push32((uint32_t)(ESI));
  /* 100ac2b5 push ebx */
  push32((uint32_t)(EBX));
  /* 100ac2b6 call dword ptr [0x100ae0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae0bc))), 0x100ac2bcu);
  /* 100ac2bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ac2be je 0x100ac392 */
  if (C.zf) goto L_100ac392;
  /* 100ac2c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100ac2c6 pop eax */
  EAX = (pop32());
L_100ac2c7:;
  /* 100ac2c7 mov dword ptr [0x100b6854], eax */
  w32((uint32_t)(0x100b6854), (EAX));
L_100ac2cc:;
  /* 100ac2cc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac2cf jne 0x100ac2f5 */
  if (!C.zf) goto L_100ac2f5;
  /* 100ac2d1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 100ac2d4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac2d6 jne 0x100ac2dd */
  if (!C.zf) goto L_100ac2dd;
  /* 100ac2d8 mov eax, dword ptr [0x100b6828] */
  EAX = (r32((uint32_t)(0x100b6828)));
L_100ac2dd:;
  /* 100ac2dd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100ac2e0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100ac2e3 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100ac2e6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100ac2e9 push eax */
  push32((uint32_t)(EAX));
  /* 100ac2ea call dword ptr [0x100ae0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae0bc))), 0x100ac2f0u);
  /* 100ac2f0 jmp 0x100ac394 */
  goto L_100ac394;
L_100ac2f5:;
  /* 100ac2f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac2f8 jne 0x100ac392 */
  if (!C.zf) goto L_100ac392;
  /* 100ac2fe cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac301 jne 0x100ac30b */
  if (!C.zf) goto L_100ac30b;
  /* 100ac303 mov eax, dword ptr [0x100b6838] */
  EAX = (r32((uint32_t)(0x100b6838)));
  /* 100ac308 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_100ac30b:;
  /* 100ac30b push ebx */
  push32((uint32_t)(EBX));
  /* 100ac30c push ebx */
  push32((uint32_t)(EBX));
  /* 100ac30d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100ac310 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100ac313 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 100ac316 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100ac318 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ac31a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 100ac31d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100ac31e push eax */
  push32((uint32_t)(EAX));
  /* 100ac31f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 100ac322 call dword ptr [0x100ae0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae0b8))), 0x100ac328u);
  /* 100ac328 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100ac32b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac32d je 0x100ac392 */
  if (C.zf) goto L_100ac392;
  /* 100ac32f mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 100ac332 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 100ac335 mov eax, edi */
  EAX = (EDI);
  /* 100ac337 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ac33a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 100ac33c call 0x100aaeb0 */
  push32(0x100ac341u); f_100aaeb0();
  /* 100ac341 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 100ac344 mov esi, esp */
  ESI = (ESP);
  /* 100ac346 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 100ac349 push edi */
  push32((uint32_t)(EDI));
  /* 100ac34a push ebx */
  push32((uint32_t)(EBX));
  /* 100ac34b push esi */
  push32((uint32_t)(ESI));
  /* 100ac34c call 0x100a9bc0 */
  push32(0x100ac351u); f_100a9bc0();
  /* 100ac351 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ac354 jmp 0x100ac361 */
  goto L_100ac361;
  /* 100ac356 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ac358 pop eax */
  EAX = (pop32());
  /* 100ac359 ret  */
  ESPCHK(0x100ac25du, _esp0);
  ESP += 4; return;
  /* 100ac35a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 100ac35d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ac35f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100ac361:;
  /* 100ac361 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ac365 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac367 je 0x100ac392 */
  if (C.zf) goto L_100ac392;
  /* 100ac369 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 100ac36c push esi */
  push32((uint32_t)(ESI));
  /* 100ac36d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100ac370 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100ac373 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ac375 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 100ac378 call dword ptr [0x100ae0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae0b8))), 0x100ac37eu);
  /* 100ac37e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac380 je 0x100ac392 */
  if (C.zf) goto L_100ac392;
  /* 100ac382 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100ac385 push eax */
  push32((uint32_t)(EAX));
  /* 100ac386 push esi */
  push32((uint32_t)(ESI));
  /* 100ac387 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100ac38a call dword ptr [0x100ae0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae0c0))), 0x100ac390u);
  /* 100ac390 jmp 0x100ac394 */
  goto L_100ac394;
L_100ac392:;
  /* 100ac392 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100ac394:;
  /* 100ac394 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 100ac397 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 100ac39a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 100ac3a1 pop edi */
  EDI = (pop32());
  /* 100ac3a2 pop esi */
  ESI = (pop32());
  /* 100ac3a3 pop ebx */
  EBX = (pop32());
  /* 100ac3a4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ac3a5 ret  */
  ESPCHK(0x100ac25du, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3a6 @ 0x100ac3a6 (511 bytes, 193 insns) */
void f_100ac3a6(void) {
  FTRACE(0x100ac3a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ac3a6 push ebp */
  push32((uint32_t)(EBP));
  /* 100ac3a7 mov ebp, esp */
  EBP = (ESP);
  /* 100ac3a9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 100ac3ab push 0x100ae570 */
  push32((uint32_t)(0x100ae570u));
  /* 100ac3b0 push 0x100ad010 */
  push32((uint32_t)(0x100ad010u));
  /* 100ac3b5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 100ac3bb push eax */
  push32((uint32_t)(EAX));
  /* 100ac3bc mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 100ac3c3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ac3c6 push ebx */
  push32((uint32_t)(EBX));
  /* 100ac3c7 push esi */
  push32((uint32_t)(ESI));
  /* 100ac3c8 push edi */
  push32((uint32_t)(EDI));
  /* 100ac3c9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 100ac3cc xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100ac3ce cmp dword ptr [0x100b6858], edi */
  { uint32_t _a=(r32((uint32_t)(0x100b6858))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac3d4 jne 0x100ac41c */
  if (!C.zf) goto L_100ac41c;
  /* 100ac3d6 push edi */
  push32((uint32_t)(EDI));
  /* 100ac3d7 push edi */
  push32((uint32_t)(EDI));
  /* 100ac3d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ac3da pop ebx */
  EBX = (pop32());
  /* 100ac3db push ebx */
  push32((uint32_t)(EBX));
  /* 100ac3dc push 0x100ae558 */
  push32((uint32_t)(0x100ae558u));
  /* 100ac3e1 mov esi, 0x100 */
  ESI = (0x100u);
  /* 100ac3e6 push esi */
  push32((uint32_t)(ESI));
  /* 100ac3e7 push edi */
  push32((uint32_t)(EDI));
  /* 100ac3e8 call dword ptr [0x100ae0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae0c8))), 0x100ac3eeu);
  /* 100ac3ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ac3f0 je 0x100ac3fa */
  if (C.zf) goto L_100ac3fa;
  /* 100ac3f2 mov dword ptr [0x100b6858], ebx */
  w32((uint32_t)(0x100b6858), (EBX));
  /* 100ac3f8 jmp 0x100ac41c */
  goto L_100ac41c;
L_100ac3fa:;
  /* 100ac3fa push edi */
  push32((uint32_t)(EDI));
  /* 100ac3fb push edi */
  push32((uint32_t)(EDI));
  /* 100ac3fc push ebx */
  push32((uint32_t)(EBX));
  /* 100ac3fd push 0x100ae554 */
  push32((uint32_t)(0x100ae554u));
  /* 100ac402 push esi */
  push32((uint32_t)(ESI));
  /* 100ac403 push edi */
  push32((uint32_t)(EDI));
  /* 100ac404 call dword ptr [0x100ae0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae0c4))), 0x100ac40au);
  /* 100ac40a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ac40c je 0x100ac534 */
  if (C.zf) goto L_100ac534;
  /* 100ac412 mov dword ptr [0x100b6858], 2 */
  w32((uint32_t)(0x100b6858), (0x2u));
L_100ac41c:;
  /* 100ac41c cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac41f jle 0x100ac431 */
  if ((C.zf||C.sf!=C.of)) goto L_100ac431;
  /* 100ac421 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100ac424 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100ac427 call 0x100ac5ca */
  push32(0x100ac42cu); f_100ac5ca();
  /* 100ac42c pop ecx */
  ECX = (pop32());
  /* 100ac42d pop ecx */
  ECX = (pop32());
  /* 100ac42e mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_100ac431:;
  /* 100ac431 mov eax, dword ptr [0x100b6858] */
  EAX = (r32((uint32_t)(0x100b6858)));
  /* 100ac436 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac439 jne 0x100ac458 */
  if (!C.zf) goto L_100ac458;
  /* 100ac43b push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 100ac43e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 100ac441 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100ac444 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100ac447 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100ac44a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100ac44d call dword ptr [0x100ae0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae0c4))), 0x100ac453u);
  /* 100ac453 jmp 0x100ac536 */
  goto L_100ac536;
L_100ac458:;
  /* 100ac458 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac45b jne 0x100ac534 */
  if (!C.zf) goto L_100ac534;
  /* 100ac461 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac464 jne 0x100ac46e */
  if (!C.zf) goto L_100ac46e;
  /* 100ac466 mov eax, dword ptr [0x100b6838] */
  EAX = (r32((uint32_t)(0x100b6838)));
  /* 100ac46b mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_100ac46e:;
  /* 100ac46e push edi */
  push32((uint32_t)(EDI));
  /* 100ac46f push edi */
  push32((uint32_t)(EDI));
  /* 100ac470 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100ac473 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100ac476 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 100ac479 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100ac47b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ac47d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 100ac480 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100ac481 push eax */
  push32((uint32_t)(EAX));
  /* 100ac482 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 100ac485 call dword ptr [0x100ae0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae0b8))), 0x100ac48bu);
  /* 100ac48b mov ebx, eax */
  EBX = (EAX);
  /* 100ac48d mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 100ac490 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac492 je 0x100ac534 */
  if (C.zf) goto L_100ac534;
  /* 100ac498 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 100ac49b lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 100ac49e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ac4a1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 100ac4a3 call 0x100aaeb0 */
  push32(0x100ac4a8u); f_100aaeb0();
  /* 100ac4a8 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 100ac4ab mov eax, esp */
  EAX = (ESP);
  /* 100ac4ad mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 100ac4b0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ac4b4 jmp 0x100ac4c9 */
  goto L_100ac4c9;
  /* 100ac4b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ac4b8 pop eax */
  EAX = (pop32());
  /* 100ac4b9 ret  */
  ESPCHK(0x100ac3a6u, _esp0);
  ESP += 4; return;
  /* 100ac4ba mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 100ac4bd xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100ac4bf mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 100ac4c2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ac4c6 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_100ac4c9:;
  /* 100ac4c9 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac4cc je 0x100ac534 */
  if (C.zf) goto L_100ac534;
  /* 100ac4ce push ebx */
  push32((uint32_t)(EBX));
  /* 100ac4cf push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 100ac4d2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100ac4d5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100ac4d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ac4da push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 100ac4dd call dword ptr [0x100ae0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae0b8))), 0x100ac4e3u);
  /* 100ac4e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ac4e5 je 0x100ac534 */
  if (C.zf) goto L_100ac534;
  /* 100ac4e7 push edi */
  push32((uint32_t)(EDI));
  /* 100ac4e8 push edi */
  push32((uint32_t)(EDI));
  /* 100ac4e9 push ebx */
  push32((uint32_t)(EBX));
  /* 100ac4ea push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 100ac4ed push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100ac4f0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100ac4f3 call dword ptr [0x100ae0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae0c8))), 0x100ac4f9u);
  /* 100ac4f9 mov esi, eax */
  ESI = (EAX);
  /* 100ac4fb mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 100ac4fe cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac500 je 0x100ac534 */
  if (C.zf) goto L_100ac534;
  /* 100ac502 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 100ac506 je 0x100ac548 */
  if (C.zf) goto L_100ac548;
  /* 100ac508 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac50b je 0x100ac5c3 */
  if (C.zf) goto L_100ac5c3;
  /* 100ac511 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac514 jg 0x100ac534 */
  if ((!C.zf&&C.sf==C.of)) goto L_100ac534;
  /* 100ac516 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 100ac519 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 100ac51c push ebx */
  push32((uint32_t)(EBX));
  /* 100ac51d push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 100ac520 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100ac523 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100ac526 call dword ptr [0x100ae0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae0c8))), 0x100ac52cu);
  /* 100ac52c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ac52e jne 0x100ac5c3 */
  if (!C.zf) goto L_100ac5c3;
L_100ac534:;
  /* 100ac534 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100ac536:;
  /* 100ac536 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 100ac539 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 100ac53c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 100ac543 pop edi */
  EDI = (pop32());
  /* 100ac544 pop esi */
  ESI = (pop32());
  /* 100ac545 pop ebx */
  EBX = (pop32());
  /* 100ac546 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ac547 ret  */
  ESPCHK(0x100ac3a6u, _esp0);
  ESP += 4; return;
L_100ac548:;
  /* 100ac548 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 100ac54f lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 100ac552 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ac555 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 100ac557 call 0x100aaeb0 */
  push32(0x100ac55cu); f_100aaeb0();
  /* 100ac55c mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 100ac55f mov ebx, esp */
  EBX = (ESP);
  /* 100ac561 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 100ac564 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ac568 jmp 0x100ac57c */
  goto L_100ac57c;
  /* 100ac56a push 1 */
  push32((uint32_t)(0x1u));
  /* 100ac56c pop eax */
  EAX = (pop32());
  /* 100ac56d ret  */
  ESPCHK(0x100ac3a6u, _esp0);
  ESP += 4; return;
  /* 100ac56e mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 100ac571 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100ac573 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ac575 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ac579 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_100ac57c:;
  /* 100ac57c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac57e je 0x100ac534 */
  if (C.zf) goto L_100ac534;
  /* 100ac580 push esi */
  push32((uint32_t)(ESI));
  /* 100ac581 push ebx */
  push32((uint32_t)(EBX));
  /* 100ac582 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 100ac585 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 100ac588 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100ac58b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100ac58e call dword ptr [0x100ae0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae0c8))), 0x100ac594u);
  /* 100ac594 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ac596 je 0x100ac534 */
  if (C.zf) goto L_100ac534;
  /* 100ac598 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac59b push edi */
  push32((uint32_t)(EDI));
  /* 100ac59c push edi */
  push32((uint32_t)(EDI));
  /* 100ac59d jne 0x100ac5a3 */
  if (!C.zf) goto L_100ac5a3;
  /* 100ac59f push edi */
  push32((uint32_t)(EDI));
  /* 100ac5a0 push edi */
  push32((uint32_t)(EDI));
  /* 100ac5a1 jmp 0x100ac5a9 */
  goto L_100ac5a9;
L_100ac5a3:;
  /* 100ac5a3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 100ac5a6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_100ac5a9:;
  /* 100ac5a9 push esi */
  push32((uint32_t)(ESI));
  /* 100ac5aa push ebx */
  push32((uint32_t)(EBX));
  /* 100ac5ab push 0x220 */
  push32((uint32_t)(0x220u));
  /* 100ac5b0 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 100ac5b3 call dword ptr [0x100ae060] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae060))), 0x100ac5b9u);
  /* 100ac5b9 mov esi, eax */
  ESI = (EAX);
  /* 100ac5bb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac5bd je 0x100ac534 */
  if (C.zf) goto L_100ac534;
L_100ac5c3:;
  /* 100ac5c3 mov eax, esi */
  EAX = (ESI);
  /* 100ac5c5 jmp 0x100ac536 */
  goto L_100ac536;
}

/* FUN_1000c5ca @ 0x100ac5ca (43 bytes, 20 insns) */
void f_100ac5ca(void) {
  FTRACE(0x100ac5cau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ac5ca mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 100ac5ce mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100ac5d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100ac5d4 push esi */
  push32((uint32_t)(ESI));
  /* 100ac5d5 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 100ac5d8 je 0x100ac5e7 */
  if (C.zf) goto L_100ac5e7;
L_100ac5da:;
  /* 100ac5da cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac5dd je 0x100ac5e7 */
  if (C.zf) goto L_100ac5e7;
  /* 100ac5df inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100ac5e0 mov esi, ecx */
  ESI = (ECX);
  /* 100ac5e2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100ac5e3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100ac5e5 jne 0x100ac5da */
  if (!C.zf) goto L_100ac5da;
L_100ac5e7:;
  /* 100ac5e7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac5ea pop esi */
  ESI = (pop32());
  /* 100ac5eb jne 0x100ac5f2 */
  if (!C.zf) goto L_100ac5f2;
  /* 100ac5ed sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ac5f1 ret  */
  ESPCHK(0x100ac5cau, _esp0);
  ESP += 4; return;
L_100ac5f2:;
  /* 100ac5f2 mov eax, edx */
  EAX = (EDX);
  /* 100ac5f4 ret  */
  ESPCHK(0x100ac5cau, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5f5 @ 0x100ac5f5 (33 bytes, 15 insns) */
void f_100ac5f5(void) {
  FTRACE(0x100ac5f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ac5f5 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 100ac5f9 push esi */
  push32((uint32_t)(ESI));
  /* 100ac5fa mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 100ac5fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ac600 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 100ac603 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac605 jb 0x100ac60b */
  if (C.cf) goto L_100ac60b;
  /* 100ac607 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac609 jae 0x100ac60e */
  if (!C.cf) goto L_100ac60e;
L_100ac60b:;
  /* 100ac60b push 1 */
  push32((uint32_t)(0x1u));
  /* 100ac60d pop eax */
  EAX = (pop32());
L_100ac60e:;
  /* 100ac60e mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 100ac612 pop esi */
  ESI = (pop32());
  /* 100ac613 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 100ac615 ret  */
  ESPCHK(0x100ac5f5u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x100ac616 (94 bytes, 38 insns) */
void f_100ac616(void) {
  FTRACE(0x100ac616u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ac616 push esi */
  push32((uint32_t)(ESI));
  /* 100ac617 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100ac61b push edi */
  push32((uint32_t)(EDI));
  /* 100ac61c mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 100ac620 push esi */
  push32((uint32_t)(ESI));
  /* 100ac621 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 100ac623 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100ac625 call 0x100ac5f5 */
  push32(0x100ac62au); f_100ac5f5();
  /* 100ac62a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ac62d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ac62f je 0x100ac648 */
  if (C.zf) goto L_100ac648;
  /* 100ac631 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 100ac634 push eax */
  push32((uint32_t)(EAX));
  /* 100ac635 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ac637 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 100ac639 call 0x100ac5f5 */
  push32(0x100ac63eu); f_100ac5f5();
  /* 100ac63e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ac641 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ac643 je 0x100ac648 */
  if (C.zf) goto L_100ac648;
  /* 100ac645 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_100ac648:;
  /* 100ac648 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 100ac64b push eax */
  push32((uint32_t)(EAX));
  /* 100ac64c push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 100ac64f push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 100ac651 call 0x100ac5f5 */
  push32(0x100ac656u); f_100ac5f5();
  /* 100ac656 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ac659 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ac65b je 0x100ac660 */
  if (C.zf) goto L_100ac660;
  /* 100ac65d inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_100ac660:;
  /* 100ac660 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 100ac663 push eax */
  push32((uint32_t)(EAX));
  /* 100ac664 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 100ac667 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 100ac669 call 0x100ac5f5 */
  push32(0x100ac66eu); f_100ac5f5();
  /* 100ac66e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ac671 pop edi */
  EDI = (pop32());
  /* 100ac672 pop esi */
  ESI = (pop32());
  /* 100ac673 ret  */
  ESPCHK(0x100ac616u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c674 @ 0x100ac674 (46 bytes, 21 insns) */
void f_100ac674(void) {
  FTRACE(0x100ac674u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ac674 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100ac678 push esi */
  push32((uint32_t)(ESI));
  /* 100ac679 push edi */
  push32((uint32_t)(EDI));
  /* 100ac67a mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 100ac67c mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 100ac67f mov ecx, esi */
  ECX = (ESI);
  /* 100ac681 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ac683 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 100ac685 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 100ac688 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 100ac68b or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 100ac68d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 100ac690 mov edx, edi */
  EDX = (EDI);
  /* 100ac692 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 100ac695 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 100ac698 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 100ac69a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 100ac69c pop edi */
  EDI = (pop32());
  /* 100ac69d mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 100ac6a0 pop esi */
  ESI = (pop32());
  /* 100ac6a1 ret  */
  ESPCHK(0x100ac674u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6a2 @ 0x100ac6a2 (45 bytes, 21 insns) */
void f_100ac6a2(void) {
  FTRACE(0x100ac6a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ac6a2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100ac6a6 push esi */
  push32((uint32_t)(ESI));
  /* 100ac6a7 push edi */
  push32((uint32_t)(EDI));
  /* 100ac6a8 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 100ac6ab mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 100ac6ae mov esi, edx */
  ESI = (EDX);
  /* 100ac6b0 mov edi, ecx */
  EDI = (ECX);
  /* 100ac6b2 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 100ac6b5 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 100ac6b7 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 100ac6b9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 100ac6bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 100ac6be shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 100ac6c1 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 100ac6c3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 100ac6c5 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100ac6c7 pop edi */
  EDI = (pop32());
  /* 100ac6c8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 100ac6cb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100ac6cd pop esi */
  ESI = (pop32());
  /* 100ac6ce ret  */
  ESPCHK(0x100ac6a2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6cf @ 0x100ac6cf (199 bytes, 76 insns) */
void f_100ac6cf(void) {
  FTRACE(0x100ac6cfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ac6cf push ebp */
  push32((uint32_t)(EBP));
  /* 100ac6d0 mov ebp, esp */
  EBP = (ESP);
  /* 100ac6d2 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ac6d5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100ac6d8 push ebx */
  push32((uint32_t)(EBX));
  /* 100ac6d9 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 100ac6dc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100ac6de cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac6e0 push esi */
  push32((uint32_t)(ESI));
  /* 100ac6e1 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 100ac6e8 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 100ac6ea mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 100ac6ed mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 100ac6f0 jbe 0x100ac743 */
  if ((C.cf||C.zf)) goto L_100ac743;
  /* 100ac6f2 push edi */
  push32((uint32_t)(EDI));
  /* 100ac6f3 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_100ac6f6:;
  /* 100ac6f6 mov esi, ebx */
  ESI = (EBX);
  /* 100ac6f8 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 100ac6fb movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100ac6fc movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100ac6fd push ebx */
  push32((uint32_t)(EBX));
  /* 100ac6fe movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100ac6ff call 0x100ac674 */
  push32(0x100ac704u); f_100ac674();
  /* 100ac704 push ebx */
  push32((uint32_t)(EBX));
  /* 100ac705 call 0x100ac674 */
  push32(0x100ac70au); f_100ac674();
  /* 100ac70a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100ac70d push eax */
  push32((uint32_t)(EAX));
  /* 100ac70e push ebx */
  push32((uint32_t)(EBX));
  /* 100ac70f call 0x100ac616 */
  push32(0x100ac714u); f_100ac616();
  /* 100ac714 push ebx */
  push32((uint32_t)(EBX));
  /* 100ac715 call 0x100ac674 */
  push32(0x100ac71au); f_100ac674();
  /* 100ac71a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ac71d and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 100ac721 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 100ac725 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 100ac728 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 100ac72b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100ac72e push eax */
  push32((uint32_t)(EAX));
  /* 100ac72f push ebx */
  push32((uint32_t)(EBX));
  /* 100ac730 call 0x100ac616 */
  push32(0x100ac735u); f_100ac616();
  /* 100ac735 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ac738 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 100ac73b dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 100ac73e jne 0x100ac6f6 */
  if (!C.zf) goto L_100ac6f6;
  /* 100ac740 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100ac742 pop edi */
  EDI = (pop32());
L_100ac743:;
  /* 100ac743 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac746 jne 0x100ac770 */
  if (!C.zf) goto L_100ac770;
  /* 100ac748 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 100ac74b mov eax, ecx */
  EAX = (ECX);
  /* 100ac74d shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 100ac750 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 100ac753 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 100ac755 mov esi, eax */
  ESI = (EAX);
  /* 100ac757 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 100ac75a shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 100ac75d or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 100ac75f shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 100ac762 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 100ac769 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 100ac76c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 100ac76e jmp 0x100ac743 */
  goto L_100ac743;
L_100ac770:;
  /* 100ac770 mov esi, 0x8000 */
  ESI = (0x8000u);
L_100ac775:;
  /* 100ac775 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 100ac778 jne 0x100ac78a */
  if (!C.zf) goto L_100ac78a;
  /* 100ac77a push ebx */
  push32((uint32_t)(EBX));
  /* 100ac77b call 0x100ac674 */
  push32(0x100ac780u); f_100ac674();
  /* 100ac780 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 100ac787 pop ecx */
  ECX = (pop32());
  /* 100ac788 jmp 0x100ac775 */
  goto L_100ac775;
L_100ac78a:;
  /* 100ac78a mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 100ac78e pop esi */
  ESI = (pop32());
  /* 100ac78f mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 100ac793 pop ebx */
  EBX = (pop32());
  /* 100ac794 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ac795 ret  */
  ESPCHK(0x100ac6cfu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c796 @ 0x100ac796 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_100ac796(void) {
  FTRACE(0x100ac796u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ac796 push ebp */
  push32((uint32_t)(EBP));
  /* 100ac797 mov ebp, esp */
  EBP = (ESP);
  /* 100ac799 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ac79c push ebx */
  push32((uint32_t)(EBX));
  /* 100ac79d push esi */
  push32((uint32_t)(ESI));
  /* 100ac79e push edi */
  push32((uint32_t)(EDI));
  /* 100ac79f mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 100ac7a2 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 100ac7a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ac7a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 100ac7aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ac7ac pop edx */
  EDX = (pop32());
  /* 100ac7ad mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 100ac7b0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 100ac7b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100ac7b6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 100ac7b9 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 100ac7bc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100ac7bf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 100ac7c2 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 100ac7c5 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 100ac7c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100ac7cb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 100ac7ce mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_100ac7d1:;
  /* 100ac7d1 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 100ac7d3 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac7d6 je 0x100ac7e7 */
  if (C.zf) goto L_100ac7e7;
  /* 100ac7d8 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac7db je 0x100ac7e7 */
  if (C.zf) goto L_100ac7e7;
  /* 100ac7dd cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac7e0 je 0x100ac7e7 */
  if (C.zf) goto L_100ac7e7;
  /* 100ac7e2 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac7e5 jne 0x100ac7ea */
  if (!C.zf) goto L_100ac7ea;
L_100ac7e7:;
  /* 100ac7e7 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ac7e8 jmp 0x100ac7d1 */
  goto L_100ac7d1;
L_100ac7ea:;
  /* 100ac7ea push 4 */
  push32((uint32_t)(0x4u));
  /* 100ac7ec pop esi */
  ESI = (pop32());
L_100ac7ed:;
  /* 100ac7ed mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100ac7ef inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ac7f0 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac7f3 ja 0x100aca70 */
  if ((!C.cf&&!C.zf)) goto L_100aca70;
  /* 100ac7f9 jmp dword ptr [eax*4 + 0x100acc37] */
  switch (EAX) {
    case 0: goto L_100ac800;
    case 1: goto L_100ac84f;
    case 2: goto L_100ac8a6;
    case 3: goto L_100ac8d0;
    case 4: goto L_100ac92b;
    case 5: goto L_100ac9a2;
    case 6: goto L_100ac9d8;
    case 7: goto L_100aca22;
    case 8: goto L_100aca01;
    case 9: goto L_100aca86;
    case 10: goto L_100aca70;
    case 11: goto L_100aca3c;
    default: x86_unimpl("switch@0x100ac7f9 out of table"); return;
  }
L_100ac800:;
  /* 100ac800 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac803 jl 0x100ac811 */
  if ((C.sf!=C.of)) goto L_100ac811;
  /* 100ac805 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac808 jg 0x100ac811 */
  if ((!C.zf&&C.sf==C.of)) goto L_100ac811;
L_100ac80a:;
  /* 100ac80a push 3 */
  push32((uint32_t)(0x3u));
  /* 100ac80c jmp 0x100aca2e */
  goto L_100aca2e;
L_100ac811:;
  /* 100ac811 cmp bl, byte ptr [0x100b0bd4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x100b0bd4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac817 jne 0x100ac820 */
  if (!C.zf) goto L_100ac820;
L_100ac819:;
  /* 100ac819 push 5 */
  push32((uint32_t)(0x5u));
  /* 100ac81b jmp 0x100aca66 */
  goto L_100aca66;
L_100ac820:;
  /* 100ac820 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100ac823 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ac826 je 0x100ac846 */
  if (C.zf) goto L_100ac846;
  /* 100ac828 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100ac829 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100ac82a je 0x100ac83a */
  if (C.zf) goto L_100ac83a;
  /* 100ac82c sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ac82f jne 0x100acb09 */
  if (!C.zf) goto L_100acb09;
  /* 100ac835 jmp 0x100ac8c9 */
  goto L_100ac8c9;
L_100ac83a:;
  /* 100ac83a push 2 */
  push32((uint32_t)(0x2u));
  /* 100ac83c mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 100ac843 pop eax */
  EAX = (pop32());
  /* 100ac844 jmp 0x100ac7ed */
  goto L_100ac7ed;
L_100ac846:;
  /* 100ac846 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 100ac84a push 2 */
  push32((uint32_t)(0x2u));
  /* 100ac84c pop eax */
  EAX = (pop32());
  /* 100ac84d jmp 0x100ac7ed */
  goto L_100ac7ed;
L_100ac84f:;
  /* 100ac84f cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac852 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 100ac855 jl 0x100ac85c */
  if ((C.sf!=C.of)) goto L_100ac85c;
  /* 100ac857 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac85a jle 0x100ac80a */
  if ((C.zf||C.sf!=C.of)) goto L_100ac80a;
L_100ac85c:;
  /* 100ac85c cmp bl, byte ptr [0x100b0bd4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x100b0bd4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac862 je 0x100ac924 */
  if (C.zf) goto L_100ac924;
  /* 100ac868 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac86b je 0x100ac89e */
  if (C.zf) goto L_100ac89e;
  /* 100ac86d cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac870 je 0x100ac89e */
  if (C.zf) goto L_100ac89e;
  /* 100ac872 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac875 je 0x100ac8c9 */
  if (C.zf) goto L_100ac8c9;
L_100ac877:;
  /* 100ac877 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac87a jle 0x100acb09 */
  if ((C.zf||C.sf!=C.of)) goto L_100acb09;
  /* 100ac880 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac883 jle 0x100ac897 */
  if ((C.zf||C.sf!=C.of)) goto L_100ac897;
  /* 100ac885 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac888 jle 0x100acb09 */
  if ((C.zf||C.sf!=C.of)) goto L_100acb09;
  /* 100ac88e cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac891 jg 0x100acb09 */
  if ((!C.zf&&C.sf==C.of)) goto L_100acb09;
L_100ac897:;
  /* 100ac897 push 6 */
  push32((uint32_t)(0x6u));
  /* 100ac899 jmp 0x100aca66 */
  goto L_100aca66;
L_100ac89e:;
  /* 100ac89e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100ac89f push 0xb */
  push32((uint32_t)(0xbu));
  /* 100ac8a1 jmp 0x100aca66 */
  goto L_100aca66;
L_100ac8a6:;
  /* 100ac8a6 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac8a9 jl 0x100ac8b4 */
  if ((C.sf!=C.of)) goto L_100ac8b4;
  /* 100ac8ab cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac8ae jle 0x100ac80a */
  if ((C.zf||C.sf!=C.of)) goto L_100ac80a;
L_100ac8b4:;
  /* 100ac8b4 cmp bl, byte ptr [0x100b0bd4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x100b0bd4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac8ba je 0x100ac819 */
  if (C.zf) goto L_100ac819;
  /* 100ac8c0 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac8c3 jne 0x100aca7e */
  if (!C.zf) goto L_100aca7e;
L_100ac8c9:;
  /* 100ac8c9 mov eax, edx */
  EAX = (EDX);
  /* 100ac8cb jmp 0x100ac7ed */
  goto L_100ac7ed;
L_100ac8d0:;
  /* 100ac8d0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_100ac8d3:;
  /* 100ac8d3 cmp dword ptr [0x100b0bd0], edx */
  { uint32_t _a=(r32((uint32_t)(0x100b0bd0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac8d9 jle 0x100ac8ec */
  if ((C.zf||C.sf!=C.of)) goto L_100ac8ec;
  /* 100ac8db movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100ac8de push esi */
  push32((uint32_t)(ESI));
  /* 100ac8df push eax */
  push32((uint32_t)(EAX));
  /* 100ac8e0 call 0x100a93ab */
  push32(0x100ac8e5u); f_100a93ab();
  /* 100ac8e5 pop ecx */
  ECX = (pop32());
  /* 100ac8e6 pop ecx */
  ECX = (pop32());
  /* 100ac8e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ac8e9 pop edx */
  EDX = (pop32());
  /* 100ac8ea jmp 0x100ac8fa */
  goto L_100ac8fa;
L_100ac8ec:;
  /* 100ac8ec mov ecx, dword ptr [0x100b09c0] */
  ECX = (r32((uint32_t)(0x100b09c0)));
  /* 100ac8f2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100ac8f5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 100ac8f8 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_100ac8fa:;
  /* 100ac8fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ac8fc je 0x100ac91c */
  if (C.zf) goto L_100ac91c;
  /* 100ac8fe cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac902 jae 0x100ac914 */
  if (!C.cf) goto L_100ac914;
  /* 100ac904 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100ac907 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 100ac90a sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100ac90d inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 100ac910 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 100ac912 jmp 0x100ac917 */
  goto L_100ac917;
L_100ac914:;
  /* 100ac914 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_100ac917:;
  /* 100ac917 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100ac919 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ac91a jmp 0x100ac8d3 */
  goto L_100ac8d3;
L_100ac91c:;
  /* 100ac91c cmp bl, byte ptr [0x100b0bd4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x100b0bd4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac922 jne 0x100ac98b */
  if (!C.zf) goto L_100ac98b;
L_100ac924:;
  /* 100ac924 mov eax, esi */
  EAX = (ESI);
  /* 100ac926 jmp 0x100ac7ed */
  goto L_100ac7ed;
L_100ac92b:;
  /* 100ac92b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac92f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 100ac932 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 100ac935 jne 0x100ac944 */
  if (!C.zf) goto L_100ac944;
L_100ac937:;
  /* 100ac937 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac93a jne 0x100ac944 */
  if (!C.zf) goto L_100ac944;
  /* 100ac93c dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 100ac93f mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100ac941 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ac942 jmp 0x100ac937 */
  goto L_100ac937;
L_100ac944:;
  /* 100ac944 cmp dword ptr [0x100b0bd0], edx */
  { uint32_t _a=(r32((uint32_t)(0x100b0bd0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac94a jle 0x100ac95d */
  if ((C.zf||C.sf!=C.of)) goto L_100ac95d;
  /* 100ac94c movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100ac94f push esi */
  push32((uint32_t)(ESI));
  /* 100ac950 push eax */
  push32((uint32_t)(EAX));
  /* 100ac951 call 0x100a93ab */
  push32(0x100ac956u); f_100a93ab();
  /* 100ac956 pop ecx */
  ECX = (pop32());
  /* 100ac957 pop ecx */
  ECX = (pop32());
  /* 100ac958 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ac95a pop edx */
  EDX = (pop32());
  /* 100ac95b jmp 0x100ac96b */
  goto L_100ac96b;
L_100ac95d:;
  /* 100ac95d mov ecx, dword ptr [0x100b09c0] */
  ECX = (r32((uint32_t)(0x100b09c0)));
  /* 100ac963 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100ac966 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 100ac969 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_100ac96b:;
  /* 100ac96b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ac96d je 0x100ac98b */
  if (C.zf) goto L_100ac98b;
  /* 100ac96f cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac973 jae 0x100ac986 */
  if (!C.cf) goto L_100ac986;
  /* 100ac975 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100ac978 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 100ac97b sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100ac97e inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 100ac981 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 100ac984 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_100ac986:;
  /* 100ac986 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100ac988 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ac989 jmp 0x100ac944 */
  goto L_100ac944;
L_100ac98b:;
  /* 100ac98b cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac98e je 0x100ac89e */
  if (C.zf) goto L_100ac89e;
  /* 100ac994 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac997 je 0x100ac89e */
  if (C.zf) goto L_100ac89e;
  /* 100ac99d jmp 0x100ac877 */
  goto L_100ac877;
L_100ac9a2:;
  /* 100ac9a2 cmp dword ptr [0x100b0bd0], edx */
  { uint32_t _a=(r32((uint32_t)(0x100b0bd0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ac9a8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 100ac9ab jle 0x100ac9be */
  if ((C.zf||C.sf!=C.of)) goto L_100ac9be;
  /* 100ac9ad movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100ac9b0 push esi */
  push32((uint32_t)(ESI));
  /* 100ac9b1 push eax */
  push32((uint32_t)(EAX));
  /* 100ac9b2 call 0x100a93ab */
  push32(0x100ac9b7u); f_100a93ab();
  /* 100ac9b7 pop ecx */
  ECX = (pop32());
  /* 100ac9b8 pop ecx */
  ECX = (pop32());
  /* 100ac9b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ac9bb pop edx */
  EDX = (pop32());
  /* 100ac9bc jmp 0x100ac9cc */
  goto L_100ac9cc;
L_100ac9be:;
  /* 100ac9be mov ecx, dword ptr [0x100b09c0] */
  ECX = (r32((uint32_t)(0x100b09c0)));
  /* 100ac9c4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100ac9c7 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 100ac9ca and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_100ac9cc:;
  /* 100ac9cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ac9ce je 0x100aca7e */
  if (C.zf) goto L_100aca7e;
  /* 100ac9d4 mov eax, esi */
  EAX = (ESI);
  /* 100ac9d6 jmp 0x100aca2f */
  goto L_100aca2f;
L_100ac9d8:;
  /* 100ac9d8 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 100ac9db cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac9de mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 100ac9e1 jl 0x100ac9e8 */
  if ((C.sf!=C.of)) goto L_100ac9e8;
  /* 100ac9e3 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ac9e6 jle 0x100aca2c */
  if ((C.zf||C.sf!=C.of)) goto L_100aca2c;
L_100ac9e8:;
  /* 100ac9e8 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100ac9eb sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ac9ee je 0x100aca64 */
  if (C.zf) goto L_100aca64;
  /* 100ac9f0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100ac9f1 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100ac9f2 je 0x100aca58 */
  if (C.zf) goto L_100aca58;
  /* 100ac9f4 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ac9f7 jne 0x100acb0c */
  if (!C.zf) goto L_100acb0c;
L_100ac9fd:;
  /* 100ac9fd push 8 */
  push32((uint32_t)(0x8u));
  /* 100ac9ff jmp 0x100aca66 */
  goto L_100aca66;
L_100aca01:;
  /* 100aca01 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_100aca04:;
  /* 100aca04 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aca07 jne 0x100aca0e */
  if (!C.zf) goto L_100aca0e;
  /* 100aca09 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100aca0b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100aca0c jmp 0x100aca04 */
  goto L_100aca04;
L_100aca0e:;
  /* 100aca0e cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aca11 jl 0x100acb09 */
  if ((C.sf!=C.of)) goto L_100acb09;
  /* 100aca17 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aca1a jg 0x100acb09 */
  if ((!C.zf&&C.sf==C.of)) goto L_100acb09;
  /* 100aca20 jmp 0x100aca2c */
  goto L_100aca2c;
L_100aca22:;
  /* 100aca22 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aca25 jl 0x100aca35 */
  if ((C.sf!=C.of)) goto L_100aca35;
  /* 100aca27 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aca2a jg 0x100aca35 */
  if ((!C.zf&&C.sf==C.of)) goto L_100aca35;
L_100aca2c:;
  /* 100aca2c push 9 */
  push32((uint32_t)(0x9u));
L_100aca2e:;
  /* 100aca2e pop eax */
  EAX = (pop32());
L_100aca2f:;
  /* 100aca2f dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100aca30 jmp 0x100ac7ed */
  goto L_100ac7ed;
L_100aca35:;
  /* 100aca35 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aca38 jne 0x100aca7e */
  if (!C.zf) goto L_100aca7e;
  /* 100aca3a jmp 0x100ac9fd */
  goto L_100ac9fd;
L_100aca3c:;
  /* 100aca3c cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aca40 je 0x100aca6c */
  if (C.zf) goto L_100aca6c;
  /* 100aca42 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100aca45 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 100aca48 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100aca4b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 100aca4e je 0x100aca64 */
  if (C.zf) goto L_100aca64;
  /* 100aca50 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100aca51 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100aca52 jne 0x100acb0c */
  if (!C.zf) goto L_100acb0c;
L_100aca58:;
  /* 100aca58 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 100aca5c push 7 */
  push32((uint32_t)(0x7u));
  /* 100aca5e pop eax */
  EAX = (pop32());
  /* 100aca5f jmp 0x100ac7ed */
  goto L_100ac7ed;
L_100aca64:;
  /* 100aca64 push 7 */
  push32((uint32_t)(0x7u));
L_100aca66:;
  /* 100aca66 pop eax */
  EAX = (pop32());
  /* 100aca67 jmp 0x100ac7ed */
  goto L_100ac7ed;
L_100aca6c:;
  /* 100aca6c push 0xa */
  push32((uint32_t)(0xau));
  /* 100aca6e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100aca6f pop eax */
  EAX = (pop32());
L_100aca70:;
  /* 100aca70 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aca73 je 0x100acb0e */
  if (C.zf) goto L_100acb0e;
  /* 100aca79 jmp 0x100ac7ed */
  goto L_100ac7ed;
L_100aca7e:;
  /* 100aca7e mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 100aca81 jmp 0x100acb0e */
  goto L_100acb0e;
L_100aca86:;
  /* 100aca86 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 100aca8d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100aca8f:;
  /* 100aca8f cmp dword ptr [0x100b0bd0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100b0bd0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aca96 jle 0x100acaa7 */
  if ((C.zf||C.sf!=C.of)) goto L_100acaa7;
  /* 100aca98 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100aca9b push 4 */
  push32((uint32_t)(0x4u));
  /* 100aca9d push eax */
  push32((uint32_t)(EAX));
  /* 100aca9e call 0x100a93ab */
  push32(0x100acaa3u); f_100a93ab();
  /* 100acaa3 pop ecx */
  ECX = (pop32());
  /* 100acaa4 pop ecx */
  ECX = (pop32());
  /* 100acaa5 jmp 0x100acab6 */
  goto L_100acab6;
L_100acaa7:;
  /* 100acaa7 mov ecx, dword ptr [0x100b09c0] */
  ECX = (r32((uint32_t)(0x100b09c0)));
  /* 100acaad movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100acab0 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 100acab3 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_100acab6:;
  /* 100acab6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100acab8 je 0x100acad6 */
  if (C.zf) goto L_100acad6;
  /* 100acaba movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100acabd lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 100acac0 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 100acac4 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100acaca jg 0x100acad1 */
  if ((!C.zf&&C.sf==C.of)) goto L_100acad1;
  /* 100acacc mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100acace inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100acacf jmp 0x100aca8f */
  goto L_100aca8f;
L_100acad1:;
  /* 100acad1 mov esi, 0x1451 */
  ESI = (0x1451u);
L_100acad6:;
  /* 100acad6 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_100acad9:;
  /* 100acad9 cmp dword ptr [0x100b0bd0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100b0bd0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100acae0 jle 0x100acaf1 */
  if ((C.zf||C.sf!=C.of)) goto L_100acaf1;
  /* 100acae2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100acae5 push 4 */
  push32((uint32_t)(0x4u));
  /* 100acae7 push eax */
  push32((uint32_t)(EAX));
  /* 100acae8 call 0x100a93ab */
  push32(0x100acaedu); f_100a93ab();
  /* 100acaed pop ecx */
  ECX = (pop32());
  /* 100acaee pop ecx */
  ECX = (pop32());
  /* 100acaef jmp 0x100acb00 */
  goto L_100acb00;
L_100acaf1:;
  /* 100acaf1 mov ecx, dword ptr [0x100b09c0] */
  ECX = (r32((uint32_t)(0x100b09c0)));
  /* 100acaf7 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100acafa mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 100acafd and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_100acb00:;
  /* 100acb00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100acb02 je 0x100acb09 */
  if (C.zf) goto L_100acb09;
  /* 100acb04 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100acb06 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100acb07 jmp 0x100acad9 */
  goto L_100acad9;
L_100acb09:;
  /* 100acb09 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100acb0a jmp 0x100acb0e */
  goto L_100acb0e;
L_100acb0c:;
  /* 100acb0c mov edi, ecx */
  EDI = (ECX);
L_100acb0e:;
  /* 100acb0e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100acb11 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100acb15 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 100acb17 je 0x100acbf6 */
  if (C.zf) goto L_100acbf6;
  /* 100acb1d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 100acb1f pop eax */
  EAX = (pop32());
  /* 100acb20 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100acb23 jbe 0x100acb3a */
  if ((C.cf||C.zf)) goto L_100acb3a;
  /* 100acb25 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100acb29 jl 0x100acb2e */
  if ((C.sf!=C.of)) goto L_100acb2e;
  /* 100acb2b inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_100acb2e:;
  /* 100acb2e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100acb31 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100acb34 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100acb35 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 100acb38 jmp 0x100acb3d */
  goto L_100acb3d;
L_100acb3a:;
  /* 100acb3a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_100acb3d:;
  /* 100acb3d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100acb41 jbe 0x100acbec */
  if ((C.cf||C.zf)) goto L_100acbec;
L_100acb47:;
  /* 100acb47 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100acb48 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100acb4b jne 0x100acb55 */
  if (!C.zf) goto L_100acb55;
  /* 100acb4d dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 100acb50 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 100acb53 jmp 0x100acb47 */
  goto L_100acb47;
L_100acb55:;
  /* 100acb55 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 100acb58 push eax */
  push32((uint32_t)(EAX));
  /* 100acb59 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 100acb5c push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 100acb5f push eax */
  push32((uint32_t)(EAX));
  /* 100acb60 call 0x100ac6cf */
  push32(0x100acb65u); f_100ac6cf();
  /* 100acb65 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 100acb68 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100acb6a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100acb6d cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100acb70 jge 0x100acb74 */
  if ((C.sf==C.of)) goto L_100acb74;
  /* 100acb72 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_100acb74:;
  /* 100acb74 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100acb77 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100acb7a jne 0x100acb7f */
  if (!C.zf) goto L_100acb7f;
  /* 100acb7c add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_100acb7f:;
  /* 100acb7f cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100acb82 jne 0x100acb87 */
  if (!C.zf) goto L_100acb87;
  /* 100acb84 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_100acb87:;
  /* 100acb87 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100acb8c jle 0x100acbbe */
  if ((C.zf||C.sf!=C.of)) goto L_100acbbe;
  /* 100acb8e mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_100acb95:;
  /* 100acb95 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 100acb98 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 100acb9b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 100acb9e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_100acba1:;
  /* 100acba1 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100acba5 je 0x100acc07 */
  if (C.zf) goto L_100acc07;
  /* 100acba7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100acba9 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 100acbae mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 100acbb3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100acbb5 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 100acbbc jmp 0x100acc1c */
  goto L_100acc1c;
L_100acbbe:;
  /* 100acbbe cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100acbc3 jge 0x100acbce */
  if ((C.sf==C.of)) goto L_100acbce;
  /* 100acbc5 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 100acbcc jmp 0x100acb95 */
  goto L_100acb95;
L_100acbce:;
  /* 100acbce push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100acbd1 push eax */
  push32((uint32_t)(EAX));
  /* 100acbd2 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 100acbd5 push eax */
  push32((uint32_t)(EAX));
  /* 100acbd6 call 0x100ad66a */
  push32(0x100acbdbu); f_100ad66a();
  /* 100acbdb mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 100acbde mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 100acbe1 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 100acbe4 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 100acbe7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100acbea jmp 0x100acba1 */
  goto L_100acba1;
L_100acbec:;
  /* 100acbec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100acbee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100acbf0 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100acbf2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100acbf4 jmp 0x100acba1 */
  goto L_100acba1;
L_100acbf6:;
  /* 100acbf6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100acbf8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100acbfa xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100acbfc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100acbfe mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 100acc05 jmp 0x100acc1c */
  goto L_100acc1c;
L_100acc07:;
  /* 100acc07 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100acc0b je 0x100acc1c */
  if (C.zf) goto L_100acc1c;
  /* 100acc0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100acc0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100acc11 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100acc13 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100acc15 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_100acc1c:;
  /* 100acc1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100acc1f or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 100acc22 pop edi */
  EDI = (pop32());
  /* 100acc23 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 100acc26 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 100acc29 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 100acc2d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 100acc30 pop esi */
  ESI = (pop32());
  /* 100acc31 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 100acc34 pop ebx */
  EBX = (pop32());
  /* 100acc35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100acc36 ret  */
  ESPCHK(0x100ac796u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc67 @ 0x100acc67 (659 bytes, 232 insns) */
void f_100acc67(void) {
  FTRACE(0x100acc67u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100acc67 push ebp */
  push32((uint32_t)(EBP));
  /* 100acc68 mov ebp, esp */
  EBP = (ESP);
  /* 100acc6a sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100acc6d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 100acc70 push ebx */
  push32((uint32_t)(EBX));
  /* 100acc71 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 100acc74 push esi */
  push32((uint32_t)(ESI));
  /* 100acc75 mov ecx, eax */
  ECX = (EAX);
  /* 100acc77 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 100acc7c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 100acc82 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 100acc84 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 100acc87 push edi */
  push32((uint32_t)(EDI));
  /* 100acc88 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 100acc8c mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 100acc90 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 100acc94 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 100acc98 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 100acc9c mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 100acca0 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 100acca4 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 100acca8 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 100accac mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 100accb0 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 100accb4 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 100accb8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 100accbf mov edx, eax */
  EDX = (EAX);
  /* 100accc1 je 0x100accc9 */
  if (C.zf) goto L_100accc9;
  /* 100accc3 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 100accc7 jmp 0x100acccd */
  goto L_100acccd;
L_100accc9:;
  /* 100accc9 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_100acccd:;
  /* 100acccd mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100accd0 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 100accd3 jne 0x100accf3 */
  if (!C.zf) goto L_100accf3;
  /* 100accd5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100accd7 jne 0x100accf3 */
  if (!C.zf) goto L_100accf3;
  /* 100accd9 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100accdc jne 0x100accf3 */
  if (!C.zf) goto L_100accf3;
L_100accde:;
  /* 100accde and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 100acce2 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 100acce6 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 100accea mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 100accee jmp 0x100acef1 */
  goto L_100acef1;
L_100accf3:;
  /* 100accf3 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100accf6 jne 0x100acd72 */
  if (!C.zf) goto L_100acd72;
  /* 100accf8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 100accfd mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 100acd02 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100acd04 jne 0x100acd0c */
  if (!C.zf) goto L_100acd0c;
  /* 100acd06 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100acd0a je 0x100acd1b */
  if (C.zf) goto L_100acd1b;
L_100acd0c:;
  /* 100acd0c test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 100acd12 jne 0x100acd1b */
  if (!C.zf) goto L_100acd1b;
  /* 100acd14 push 0x100ae5a0 */
  push32((uint32_t)(0x100ae5a0u));
  /* 100acd19 jmp 0x100acd61 */
  goto L_100acd61;
L_100acd1b:;
  /* 100acd1b test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 100acd1e je 0x100acd35 */
  if (C.zf) goto L_100acd35;
  /* 100acd20 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100acd26 jne 0x100acd35 */
  if (!C.zf) goto L_100acd35;
  /* 100acd28 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100acd2c jne 0x100acd5c */
  if (!C.zf) goto L_100acd5c;
  /* 100acd2e push 0x100ae598 */
  push32((uint32_t)(0x100ae598u));
  /* 100acd33 jmp 0x100acd44 */
  goto L_100acd44;
L_100acd35:;
  /* 100acd35 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100acd37 jne 0x100acd5c */
  if (!C.zf) goto L_100acd5c;
  /* 100acd39 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100acd3d jne 0x100acd5c */
  if (!C.zf) goto L_100acd5c;
  /* 100acd3f push 0x100ae590 */
  push32((uint32_t)(0x100ae590u));
L_100acd44:;
  /* 100acd44 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 100acd47 push eax */
  push32((uint32_t)(EAX));
  /* 100acd48 call 0x100a9ad0 */
  push32(0x100acd4du); f_100a9ad0();
  /* 100acd4d pop ecx */
  ECX = (pop32());
  /* 100acd4e mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 100acd52 pop ecx */
  ECX = (pop32());
L_100acd53:;
  /* 100acd53 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100acd57 jmp 0x100aceca */
  goto L_100aceca;
L_100acd5c:;
  /* 100acd5c push 0x100ae588 */
  push32((uint32_t)(0x100ae588u));
L_100acd61:;
  /* 100acd61 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 100acd64 push eax */
  push32((uint32_t)(EAX));
  /* 100acd65 call 0x100a9ad0 */
  push32(0x100acd6au); f_100a9ad0();
  /* 100acd6a pop ecx */
  ECX = (pop32());
  /* 100acd6b mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 100acd6f pop ecx */
  ECX = (pop32());
  /* 100acd70 jmp 0x100acd53 */
  goto L_100acd53;
L_100acd72:;
  /* 100acd72 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 100acd75 mov ecx, edi */
  ECX = (EDI);
  /* 100acd77 mov esi, eax */
  ESI = (EAX);
  /* 100acd79 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 100acd7c imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100acd82 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 100acd85 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 100acd8a push 1 */
  push32((uint32_t)(0x1u));
  /* 100acd8c lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 100acd8f mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 100acd93 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100acd96 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 100acd99 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 100acda0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100acda3 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 100acda6 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 100acda9 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 100acdac neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100acdae push eax */
  push32((uint32_t)(EAX));
  /* 100acdaf lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100acdb2 push eax */
  push32((uint32_t)(EAX));
  /* 100acdb3 call 0x100ad66a */
  push32(0x100acdb8u); f_100ad66a();
  /* 100acdb8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100acdbb cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100acdc1 jb 0x100acdd3 */
  if (C.cf) goto L_100acdd3;
  /* 100acdc3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 100acdc6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100acdc7 push eax */
  push32((uint32_t)(EAX));
  /* 100acdc8 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100acdcb push eax */
  push32((uint32_t)(EAX));
  /* 100acdcc call 0x100ad44a */
  push32(0x100acdd1u); f_100ad44a();
  /* 100acdd1 pop ecx */
  ECX = (pop32());
  /* 100acdd2 pop ecx */
  ECX = (pop32());
L_100acdd3:;
  /* 100acdd3 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 100acdd7 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 100acdda je 0x100acded */
  if (C.zf) goto L_100acded;
  /* 100acddc mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 100acddf movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 100acde2 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100acde4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100acde6 jg 0x100acdf0 */
  if ((!C.zf&&C.sf==C.of)) goto L_100acdf0;
  /* 100acde8 jmp 0x100accde */
  goto L_100accde;
L_100acded:;
  /* 100acded mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_100acdf0:;
  /* 100acdf0 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100acdf3 jle 0x100acdf8 */
  if ((C.zf||C.sf!=C.of)) goto L_100acdf8;
  /* 100acdf5 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 100acdf7 pop edi */
  EDI = (pop32());
L_100acdf8:;
  /* 100acdf8 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 100acdfc sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ace02 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 100ace07 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_100ace0e:;
  /* 100ace0e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100ace11 push eax */
  push32((uint32_t)(EAX));
  /* 100ace12 call 0x100ac674 */
  push32(0x100ace17u); f_100ac674();
  /* 100ace17 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 100ace1a pop ecx */
  ECX = (pop32());
  /* 100ace1b jne 0x100ace0e */
  if (!C.zf) goto L_100ace0e;
  /* 100ace1d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100ace1f jge 0x100ace38 */
  if ((C.sf==C.of)) goto L_100ace38;
  /* 100ace21 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 100ace23 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 100ace29 jle 0x100ace38 */
  if ((C.zf||C.sf!=C.of)) goto L_100ace38;
L_100ace2b:;
  /* 100ace2b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100ace2e push eax */
  push32((uint32_t)(EAX));
  /* 100ace2f call 0x100ac6a2 */
  push32(0x100ace34u); f_100ac6a2();
  /* 100ace34 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100ace35 pop ecx */
  ECX = (pop32());
  /* 100ace36 jne 0x100ace2b */
  if (!C.zf) goto L_100ace2b;
L_100ace38:;
  /* 100ace38 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 100ace3b lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 100ace3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100ace40 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 100ace43 jle 0x100ace95 */
  if ((C.zf||C.sf!=C.of)) goto L_100ace95;
  /* 100ace45 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_100ace48:;
  /* 100ace48 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 100ace4b lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 100ace4e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100ace4f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100ace50 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100ace53 push eax */
  push32((uint32_t)(EAX));
  /* 100ace54 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100ace55 call 0x100ac674 */
  push32(0x100ace5au); f_100ac674();
  /* 100ace5a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100ace5d push eax */
  push32((uint32_t)(EAX));
  /* 100ace5e call 0x100ac674 */
  push32(0x100ace63u); f_100ac674();
  /* 100ace63 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100ace66 push eax */
  push32((uint32_t)(EAX));
  /* 100ace67 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100ace6a push eax */
  push32((uint32_t)(EAX));
  /* 100ace6b call 0x100ac616 */
  push32(0x100ace70u); f_100ac616();
  /* 100ace70 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100ace73 push eax */
  push32((uint32_t)(EAX));
  /* 100ace74 call 0x100ac674 */
  push32(0x100ace79u); f_100ac674();
  /* 100ace79 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 100ace7c mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 100ace7f and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 100ace83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ace86 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 100ace88 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 100ace8b dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 100ace8e mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 100ace90 jne 0x100ace48 */
  if (!C.zf) goto L_100ace48;
  /* 100ace92 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_100ace95:;
  /* 100ace95 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 100ace98 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100ace99 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100ace9a cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ace9d lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 100acea0 jl 0x100aced2 */
  if ((C.sf!=C.of)) goto L_100aced2;
L_100acea2:;
  /* 100acea2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100acea4 jb 0x100aceb5 */
  if (C.cf) goto L_100aceb5;
  /* 100acea6 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100acea9 jne 0x100aceb1 */
  if (!C.zf) goto L_100aceb1;
  /* 100aceab mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 100aceae dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100aceaf jmp 0x100acea2 */
  goto L_100acea2;
L_100aceb1:;
  /* 100aceb1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aceb3 jae 0x100aceb9 */
  if (!C.cf) goto L_100aceb9;
L_100aceb5:;
  /* 100aceb5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100aceb6 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_100aceb9:;
  /* 100aceb9 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_100acebb:;
  /* 100acebb sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100acebd sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100acebf mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 100acec2 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 100acec5 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_100aceca:;
  /* 100aceca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_100acecd:;
  /* 100acecd pop edi */
  EDI = (pop32());
  /* 100acece pop esi */
  ESI = (pop32());
  /* 100acecf pop ebx */
  EBX = (pop32());
  /* 100aced0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100aced1 ret  */
  ESPCHK(0x100acc67u, _esp0);
  ESP += 4; return;
L_100aced2:;
  /* 100aced2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100aced4 jb 0x100acee2 */
  if (C.cf) goto L_100acee2;
  /* 100aced6 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100aced9 jne 0x100acede */
  if (!C.zf) goto L_100acede;
  /* 100acedb dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100acedc jmp 0x100aced2 */
  goto L_100aced2;
L_100acede:;
  /* 100acede cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100acee0 jae 0x100acebb */
  if (!C.cf) goto L_100acebb;
L_100acee2:;
  /* 100acee2 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 100acee6 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 100aceea mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 100aceee mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_100acef1:;
  /* 100acef1 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 100acef5 push 1 */
  push32((uint32_t)(0x1u));
  /* 100acef7 pop eax */
  EAX = (pop32());
  /* 100acef8 jmp 0x100acecd */
  goto L_100acecd;
}

/* FUN_1000cefa @ 0x100acefa (27 bytes, 13 insns) */
void f_100acefa(void) {
  FTRACE(0x100acefau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100acefa mov eax, dword ptr [0x100b685c] */
  EAX = (r32((uint32_t)(0x100b685c)));
  /* 100aceff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100acf01 je 0x100acf12 */
  if (C.zf) goto L_100acf12;
  /* 100acf03 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 100acf07 call eax */
  call_ind((uint32_t)(EAX), 0x100acf09u);
  /* 100acf09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100acf0b pop ecx */
  ECX = (pop32());
  /* 100acf0c je 0x100acf12 */
  if (C.zf) goto L_100acf12;
  /* 100acf0e push 1 */
  push32((uint32_t)(0x1u));
  /* 100acf10 pop eax */
  EAX = (pop32());
  /* 100acf11 ret  */
  ESPCHK(0x100acefau, _esp0);
  ESP += 4; return;
L_100acf12:;
  /* 100acf12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100acf14 ret  */
  ESPCHK(0x100acefau, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x100acf18 (32 bytes, 18 insns) */
void f_100acf18(void) {
  FTRACE(0x100acf18u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100acf18 push ebp */
  push32((uint32_t)(EBP));
  /* 100acf19 mov ebp, esp */
  EBP = (ESP);
  /* 100acf1b push ebx */
  push32((uint32_t)(EBX));
  /* 100acf1c push esi */
  push32((uint32_t)(ESI));
  /* 100acf1d push edi */
  push32((uint32_t)(EDI));
  /* 100acf1e push ebp */
  push32((uint32_t)(EBP));
  /* 100acf1f push 0 */
  push32((uint32_t)(0x0u));
  /* 100acf21 push 0 */
  push32((uint32_t)(0x0u));
  /* 100acf23 push 0x100acf30 */
  push32((uint32_t)(0x100acf30u));
  /* 100acf28 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100acf2b call 0x100ada14 */
  push32(0x100acf30u); f_100ada14();
  /* 100acf30 pop ebp */
  EBP = (pop32());
  /* 100acf31 pop edi */
  EDI = (pop32());
  /* 100acf32 pop esi */
  ESI = (pop32());
  /* 100acf33 pop ebx */
  EBX = (pop32());
  /* 100acf34 mov esp, ebp */
  ESP = (EBP);
  /* 100acf36 pop ebp */
  EBP = (pop32());
  /* 100acf37 ret  */
  ESPCHK(0x100acf18u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x100acf5a (104 bytes, 33 insns) */
void f_100acf5a(void) {
  FTRACE(0x100acf5au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100acf5a push ebx */
  push32((uint32_t)(EBX));
  /* 100acf5b push esi */
  push32((uint32_t)(ESI));
  /* 100acf5c push edi */
  push32((uint32_t)(EDI));
  /* 100acf5d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100acf61 push eax */
  push32((uint32_t)(EAX));
  /* 100acf62 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 100acf64 push 0x100acf38 */
  push32((uint32_t)(0x100acf38u));
  /* 100acf69 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 100acf70 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_100acf77:;
  /* 100acf77 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 100acf7b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 100acf7e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 100acf81 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100acf84 je 0x100acfb4 */
  if (C.zf) goto L_100acfb4;
  /* 100acf86 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100acf8a je 0x100acfb4 */
  if (C.zf) goto L_100acfb4;
  /* 100acf8c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 100acf8f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 100acf92 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 100acf96 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 100acf99 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100acf9e jne 0x100acfb2 */
  if (!C.zf) goto L_100acfb2;
  /* 100acfa0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 100acfa5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 100acfa9 call 0x100acfee */
  push32(0x100acfaeu); f_100acfee();
  /* 100acfae call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x100acfb2u);
L_100acfb2:;
  /* 100acfb2 jmp 0x100acf77 */
  goto L_100acf77;
L_100acfb4:;
  /* 100acfb4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 100acfbb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100acfbe pop edi */
  EDI = (pop32());
  /* 100acfbf pop esi */
  ESI = (pop32());
  /* 100acfc0 pop ebx */
  EBX = (pop32());
  /* 100acfc1 ret  */
  ESPCHK(0x100acf5au, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfee @ 0x100acfee (24 bytes, 10 insns) */
void f_100acfee(void) {
  FTRACE(0x100acfeeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100acfee push ebx */
  push32((uint32_t)(EBX));
  /* 100acfef push ecx */
  push32((uint32_t)(ECX));
  /* 100acff0 mov ebx, 0x100b30f4 */
  EBX = (0x100b30f4u);
  /* 100acff5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100acff8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 100acffb mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 100acffe mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 100ad001 pop ecx */
  ECX = (pop32());
  /* 100ad002 pop ebx */
  EBX = (pop32());
  /* 100ad003 ret 4 */
  ESPCHK(0x100acfeeu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d0cd @ 0x100ad0cd (27 bytes, 11 insns) */
void f_100ad0cd(void) {
  FTRACE(0x100ad0cdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ad0cd push ebp */
  push32((uint32_t)(EBP));
  /* 100ad0ce mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100ad0d2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 100ad0d4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 100ad0d7 push eax */
  push32((uint32_t)(EAX));
  /* 100ad0d8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 100ad0db push eax */
  push32((uint32_t)(EAX));
  /* 100ad0dc call 0x100acf5a */
  push32(0x100ad0e1u); f_100acf5a();
  /* 100ad0e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ad0e4 pop ebp */
  EBP = (pop32());
  /* 100ad0e5 ret 4 */
  ESPCHK(0x100ad0cdu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d0e8 @ 0x100ad0e8 (111 bytes, 44 insns) */
void f_100ad0e8(void) {
  FTRACE(0x100ad0e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ad0e8 push ebx */
  push32((uint32_t)(EBX));
  /* 100ad0e9 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ad0eb cmp dword ptr [0x100b6828], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100b6828))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad0f1 jne 0x100ad106 */
  if (!C.zf) goto L_100ad106;
  /* 100ad0f3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100ad0f7 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad0fa jl 0x100ad155 */
  if ((C.sf!=C.of)) goto L_100ad155;
  /* 100ad0fc cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad0ff jg 0x100ad155 */
  if ((!C.zf&&C.sf==C.of)) goto L_100ad155;
  /* 100ad101 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ad104 pop ebx */
  EBX = (pop32());
  /* 100ad105 ret  */
  ESPCHK(0x100ad0e8u, _esp0);
  ESP += 4; return;
L_100ad106:;
  /* 100ad106 push esi */
  push32((uint32_t)(ESI));
  /* 100ad107 mov esi, 0x100b69a4 */
  ESI = (0x100b69a4u);
  /* 100ad10c push edi */
  push32((uint32_t)(EDI));
  /* 100ad10d push esi */
  push32((uint32_t)(ESI));
  /* 100ad10e call dword ptr [0x100ae090] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae090))), 0x100ad114u);
  /* 100ad114 cmp dword ptr [0x100b69a0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100b69a0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad11a mov edi, dword ptr [0x100ae08c] */
  EDI = (r32((uint32_t)(0x100ae08c)));
  /* 100ad120 je 0x100ad130 */
  if (C.zf) goto L_100ad130;
  /* 100ad122 push esi */
  push32((uint32_t)(ESI));
  /* 100ad123 call edi */
  call_ind((uint32_t)(EDI), 0x100ad125u);
  /* 100ad125 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100ad127 call 0x100a9ff3 */
  push32(0x100ad12cu); f_100a9ff3();
  /* 100ad12c pop ecx */
  ECX = (pop32());
  /* 100ad12d push 1 */
  push32((uint32_t)(0x1u));
  /* 100ad12f pop ebx */
  EBX = (pop32());
L_100ad130:;
  /* 100ad130 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 100ad134 call 0x100ad157 */
  push32(0x100ad139u); f_100ad157();
  /* 100ad139 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100ad13b pop ecx */
  ECX = (pop32());
  /* 100ad13c mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 100ad140 je 0x100ad14c */
  if (C.zf) goto L_100ad14c;
  /* 100ad142 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100ad144 call 0x100aa054 */
  push32(0x100ad149u); f_100aa054();
  /* 100ad149 pop ecx */
  ECX = (pop32());
  /* 100ad14a jmp 0x100ad14f */
  goto L_100ad14f;
L_100ad14c:;
  /* 100ad14c push esi */
  push32((uint32_t)(ESI));
  /* 100ad14d call edi */
  call_ind((uint32_t)(EDI), 0x100ad14fu);
L_100ad14f:;
  /* 100ad14f mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100ad153 pop edi */
  EDI = (pop32());
  /* 100ad154 pop esi */
  ESI = (pop32());
L_100ad155:;
  /* 100ad155 pop ebx */
  EBX = (pop32());
  /* 100ad156 ret  */
  ESPCHK(0x100ad0e8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d157 @ 0x100ad157 (204 bytes, 71 insns) */
void f_100ad157(void) {
  FTRACE(0x100ad157u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ad157 push ebp */
  push32((uint32_t)(EBP));
  /* 100ad158 mov ebp, esp */
  EBP = (ESP);
  /* 100ad15a push ecx */
  push32((uint32_t)(ECX));
  /* 100ad15b cmp dword ptr [0x100b6828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100b6828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad162 push ebx */
  push32((uint32_t)(EBX));
  /* 100ad163 jne 0x100ad182 */
  if (!C.zf) goto L_100ad182;
  /* 100ad165 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ad168 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad16b jl 0x100ad220 */
  if ((C.sf!=C.of)) goto L_100ad220;
  /* 100ad171 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad174 jg 0x100ad220 */
  if ((!C.zf&&C.sf==C.of)) goto L_100ad220;
  /* 100ad17a sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ad17d jmp 0x100ad220 */
  goto L_100ad220;
L_100ad182:;
  /* 100ad182 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ad185 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad18b jge 0x100ad1b5 */
  if ((C.sf==C.of)) goto L_100ad1b5;
  /* 100ad18d cmp dword ptr [0x100b0bd0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100b0bd0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad194 jle 0x100ad1a2 */
  if ((C.zf||C.sf!=C.of)) goto L_100ad1a2;
  /* 100ad196 push 2 */
  push32((uint32_t)(0x2u));
  /* 100ad198 push ebx */
  push32((uint32_t)(EBX));
  /* 100ad199 call 0x100a93ab */
  push32(0x100ad19eu); f_100a93ab();
  /* 100ad19e pop ecx */
  ECX = (pop32());
  /* 100ad19f pop ecx */
  ECX = (pop32());
  /* 100ad1a0 jmp 0x100ad1ad */
  goto L_100ad1ad;
L_100ad1a2:;
  /* 100ad1a2 mov eax, dword ptr [0x100b09c0] */
  EAX = (r32((uint32_t)(0x100b09c0)));
  /* 100ad1a7 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 100ad1aa and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_100ad1ad:;
  /* 100ad1ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ad1af jne 0x100ad1b5 */
  if (!C.zf) goto L_100ad1b5;
L_100ad1b1:;
  /* 100ad1b1 mov eax, ebx */
  EAX = (EBX);
  /* 100ad1b3 jmp 0x100ad220 */
  goto L_100ad220;
L_100ad1b5:;
  /* 100ad1b5 mov edx, dword ptr [0x100b09c0] */
  EDX = (r32((uint32_t)(0x100b09c0)));
  /* 100ad1bb mov eax, ebx */
  EAX = (EBX);
  /* 100ad1bd sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 100ad1c0 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 100ad1c3 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 100ad1c8 je 0x100ad1d8 */
  if (C.zf) goto L_100ad1d8;
  /* 100ad1ca and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 100ad1ce mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 100ad1d1 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 100ad1d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100ad1d6 jmp 0x100ad1e1 */
  goto L_100ad1e1;
L_100ad1d8:;
  /* 100ad1d8 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 100ad1dc mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 100ad1df push 1 */
  push32((uint32_t)(0x1u));
L_100ad1e1:;
  /* 100ad1e1 pop eax */
  EAX = (pop32());
  /* 100ad1e2 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 100ad1e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ad1e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100ad1e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 100ad1eb push ecx */
  push32((uint32_t)(ECX));
  /* 100ad1ec push eax */
  push32((uint32_t)(EAX));
  /* 100ad1ed lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100ad1f0 push eax */
  push32((uint32_t)(EAX));
  /* 100ad1f1 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 100ad1f6 push dword ptr [0x100b6828] */
  push32((uint32_t)(r32((uint32_t)(0x100b6828))));
  /* 100ad1fc call 0x100ac3a6 */
  push32(0x100ad201u); f_100ac3a6();
  /* 100ad201 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ad204 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ad206 je 0x100ad1b1 */
  if (C.zf) goto L_100ad1b1;
  /* 100ad208 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad20b jne 0x100ad213 */
  if (!C.zf) goto L_100ad213;
  /* 100ad20d movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 100ad211 jmp 0x100ad220 */
  goto L_100ad220;
L_100ad213:;
  /* 100ad213 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 100ad217 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 100ad21b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 100ad21e or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_100ad220:;
  /* 100ad220 pop ebx */
  EBX = (pop32());
  /* 100ad221 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ad222 ret  */
  ESPCHK(0x100ad157u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d223 @ 0x100ad223 (49 bytes, 20 insns) */
void f_100ad223(void) {
  FTRACE(0x100ad223u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ad223 push esi */
  push32((uint32_t)(ESI));
  /* 100ad224 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100ad228 push edi */
  push32((uint32_t)(EDI));
  /* 100ad229 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 100ad22c test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 100ad230 je 0x100ad238 */
  if (C.zf) goto L_100ad238;
  /* 100ad232 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 100ad236 jmp 0x100ad24f */
  goto L_100ad24f;
L_100ad238:;
  /* 100ad238 push esi */
  push32((uint32_t)(ESI));
  /* 100ad239 call 0x100a8f6e */
  push32(0x100ad23eu); f_100a8f6e();
  /* 100ad23e push esi */
  push32((uint32_t)(ESI));
  /* 100ad23f call 0x100ad254 */
  push32(0x100ad244u); f_100ad254();
  /* 100ad244 push esi */
  push32((uint32_t)(ESI));
  /* 100ad245 mov edi, eax */
  EDI = (EAX);
  /* 100ad247 call 0x100a8fc0 */
  push32(0x100ad24cu); f_100a8fc0();
  /* 100ad24c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100ad24f:;
  /* 100ad24f mov eax, edi */
  EAX = (EDI);
  /* 100ad251 pop edi */
  EDI = (pop32());
  /* 100ad252 pop esi */
  ESI = (pop32());
  /* 100ad253 ret  */
  ESPCHK(0x100ad223u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x100ad254 (76 bytes, 30 insns) */
void f_100ad254(void) {
  FTRACE(0x100ad254u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ad254 push esi */
  push32((uint32_t)(ESI));
  /* 100ad255 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100ad259 push edi */
  push32((uint32_t)(EDI));
  /* 100ad25a or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 100ad25d test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 100ad261 je 0x100ad297 */
  if (C.zf) goto L_100ad297;
  /* 100ad263 push esi */
  push32((uint32_t)(ESI));
  /* 100ad264 call 0x100ac154 */
  push32(0x100ad269u); f_100ac154();
  /* 100ad269 push esi */
  push32((uint32_t)(ESI));
  /* 100ad26a mov edi, eax */
  EDI = (EAX);
  /* 100ad26c call 0x100ad7c6 */
  push32(0x100ad271u); f_100ad7c6();
  /* 100ad271 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 100ad274 call 0x100ad6e6 */
  push32(0x100ad279u); f_100ad6e6();
  /* 100ad279 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ad27c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ad27e jge 0x100ad285 */
  if ((C.sf==C.of)) goto L_100ad285;
  /* 100ad280 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 100ad283 jmp 0x100ad297 */
  goto L_100ad297;
L_100ad285:;
  /* 100ad285 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 100ad288 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ad28a je 0x100ad297 */
  if (C.zf) goto L_100ad297;
  /* 100ad28c push eax */
  push32((uint32_t)(EAX));
  /* 100ad28d call 0x100aa1a6 */
  push32(0x100ad292u); f_100aa1a6();
  /* 100ad292 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 100ad296 pop ecx */
  ECX = (pop32());
L_100ad297:;
  /* 100ad297 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 100ad29b mov eax, edi */
  EAX = (EDI);
  /* 100ad29d pop edi */
  EDI = (pop32());
  /* 100ad29e pop esi */
  ESI = (pop32());
  /* 100ad29f ret  */
  ESPCHK(0x100ad254u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2a0 @ 0x100ad2a0 (147 bytes, 52 insns) */
void f_100ad2a0(void) {
  FTRACE(0x100ad2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ad2a0 push ebx */
  push32((uint32_t)(EBX));
  /* 100ad2a1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 100ad2a5 cmp ebx, dword ptr [0x100b7d20] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x100b7d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad2ab push esi */
  push32((uint32_t)(ESI));
  /* 100ad2ac push edi */
  push32((uint32_t)(EDI));
  /* 100ad2ad jae 0x100ad321 */
  if (!C.cf) goto L_100ad321;
  /* 100ad2af mov eax, ebx */
  EAX = (EBX);
  /* 100ad2b1 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 100ad2b4 lea edi, [eax*4 + 0x100b7c20] */
  EDI = ((uint32_t)(EAX*4 + 0x100b7c20));
  /* 100ad2bb mov eax, ebx */
  EAX = (EBX);
  /* 100ad2bd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100ad2c0 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 100ad2c3 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 100ad2c5 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 100ad2c8 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 100ad2cd je 0x100ad321 */
  if (C.zf) goto L_100ad321;
  /* 100ad2cf push ebx */
  push32((uint32_t)(EBX));
  /* 100ad2d0 call 0x100ac024 */
  push32(0x100ad2d5u); f_100ac024();
  /* 100ad2d5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 100ad2d7 pop ecx */
  ECX = (pop32());
  /* 100ad2d8 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 100ad2dd je 0x100ad308 */
  if (C.zf) goto L_100ad308;
  /* 100ad2df push ebx */
  push32((uint32_t)(EBX));
  /* 100ad2e0 call 0x100abfe2 */
  push32(0x100ad2e5u); f_100abfe2();
  /* 100ad2e5 pop ecx */
  ECX = (pop32());
  /* 100ad2e6 push eax */
  push32((uint32_t)(EAX));
  /* 100ad2e7 call dword ptr [0x100ae0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae0d0))), 0x100ad2edu);
  /* 100ad2ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ad2ef jne 0x100ad2fb */
  if (!C.zf) goto L_100ad2fb;
  /* 100ad2f1 call dword ptr [0x100ae03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae03c))), 0x100ad2f7u);
  /* 100ad2f7 mov esi, eax */
  ESI = (EAX);
  /* 100ad2f9 jmp 0x100ad2fd */
  goto L_100ad2fd;
L_100ad2fb:;
  /* 100ad2fb xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100ad2fd:;
  /* 100ad2fd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100ad2ff je 0x100ad316 */
  if (C.zf) goto L_100ad316;
  /* 100ad301 call 0x100abf5a */
  push32(0x100ad306u); f_100abf5a();
  /* 100ad306 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_100ad308:;
  /* 100ad308 call 0x100abf51 */
  push32(0x100ad30du); f_100abf51();
  /* 100ad30d mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100ad313 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_100ad316:;
  /* 100ad316 push ebx */
  push32((uint32_t)(EBX));
  /* 100ad317 call 0x100ac083 */
  push32(0x100ad31cu); f_100ac083();
  /* 100ad31c pop ecx */
  ECX = (pop32());
  /* 100ad31d mov eax, esi */
  EAX = (ESI);
  /* 100ad31f jmp 0x100ad32f */
  goto L_100ad32f;
L_100ad321:;
  /* 100ad321 call 0x100abf51 */
  push32(0x100ad326u); f_100abf51();
  /* 100ad326 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100ad32c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_100ad32f:;
  /* 100ad32f pop edi */
  EDI = (pop32());
  /* 100ad330 pop esi */
  ESI = (pop32());
  /* 100ad331 pop ebx */
  EBX = (pop32());
  /* 100ad332 ret  */
  ESPCHK(0x100ad2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3d0 @ 0x100ad3d0 (62 bytes, 35 insns) */
void f_100ad3d0(void) {
  FTRACE(0x100ad3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ad3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 100ad3d1 mov ebp, esp */
  EBP = (ESP);
  /* 100ad3d3 push esi */
  push32((uint32_t)(ESI));
  /* 100ad3d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ad3d6 push eax */
  push32((uint32_t)(EAX));
  /* 100ad3d7 push eax */
  push32((uint32_t)(EAX));
  /* 100ad3d8 push eax */
  push32((uint32_t)(EAX));
  /* 100ad3d9 push eax */
  push32((uint32_t)(EAX));
  /* 100ad3da push eax */
  push32((uint32_t)(EAX));
  /* 100ad3db push eax */
  push32((uint32_t)(EAX));
  /* 100ad3dc push eax */
  push32((uint32_t)(EAX));
  /* 100ad3dd push eax */
  push32((uint32_t)(EAX));
  /* 100ad3de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 100ad3e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100ad3e4:;
  /* 100ad3e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 100ad3e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 100ad3e8 je 0x100ad3f1 */
  if (C.zf) goto L_100ad3f1;
  /* 100ad3ea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 100ad3eb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x100ad3eb");
  /* 100ad3ef jmp 0x100ad3e4 */
  goto L_100ad3e4;
L_100ad3f1:;
  /* 100ad3f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100ad3f4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 100ad3f7 nop  */
  /* nop */
L_100ad3f8:;
  /* 100ad3f8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100ad3f9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ad3fb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 100ad3fd je 0x100ad406 */
  if (C.zf) goto L_100ad406;
  /* 100ad3ff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100ad400 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x100ad400");
  /* 100ad404 jae 0x100ad3f8 */
  if (!C.cf) goto L_100ad3f8;
L_100ad406:;
  /* 100ad406 mov eax, ecx */
  EAX = (ECX);
  /* 100ad408 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ad40b pop esi */
  ESI = (pop32());
  /* 100ad40c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ad40d ret  */
  ESPCHK(0x100ad3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d410 @ 0x100ad410 (58 bytes, 32 insns) */
void f_100ad410(void) {
  FTRACE(0x100ad410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ad410 push ebp */
  push32((uint32_t)(EBP));
  /* 100ad411 mov ebp, esp */
  EBP = (ESP);
  /* 100ad413 push esi */
  push32((uint32_t)(ESI));
  /* 100ad414 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ad416 push eax */
  push32((uint32_t)(EAX));
  /* 100ad417 push eax */
  push32((uint32_t)(EAX));
  /* 100ad418 push eax */
  push32((uint32_t)(EAX));
  /* 100ad419 push eax */
  push32((uint32_t)(EAX));
  /* 100ad41a push eax */
  push32((uint32_t)(EAX));
  /* 100ad41b push eax */
  push32((uint32_t)(EAX));
  /* 100ad41c push eax */
  push32((uint32_t)(EAX));
  /* 100ad41d push eax */
  push32((uint32_t)(EAX));
  /* 100ad41e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 100ad421 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100ad424:;
  /* 100ad424 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 100ad426 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 100ad428 je 0x100ad431 */
  if (C.zf) goto L_100ad431;
  /* 100ad42a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 100ad42b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x100ad42b");
  /* 100ad42f jmp 0x100ad424 */
  goto L_100ad424;
L_100ad431:;
  /* 100ad431 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_100ad434:;
  /* 100ad434 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ad436 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 100ad438 je 0x100ad444 */
  if (C.zf) goto L_100ad444;
  /* 100ad43a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100ad43b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x100ad43b");
  /* 100ad43f jae 0x100ad434 */
  if (!C.cf) goto L_100ad434;
  /* 100ad441 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_100ad444:;
  /* 100ad444 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ad447 pop esi */
  ESI = (pop32());
  /* 100ad448 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ad449 ret  */
  ESPCHK(0x100ad410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d44a @ 0x100ad44a (544 bytes, 177 insns) */
void f_100ad44a(void) {
  FTRACE(0x100ad44au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ad44a push ebp */
  push32((uint32_t)(EBP));
  /* 100ad44b mov ebp, esp */
  EBP = (ESP);
  /* 100ad44d sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ad450 push ebx */
  push32((uint32_t)(EBX));
  /* 100ad451 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 100ad454 push esi */
  push32((uint32_t)(ESI));
  /* 100ad455 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100ad458 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 100ad45c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ad45e push edi */
  push32((uint32_t)(EDI));
  /* 100ad45f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 100ad462 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 100ad465 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100ad468 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 100ad46b mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 100ad46f mov edi, ecx */
  EDI = (ECX);
  /* 100ad471 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 100ad476 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 100ad478 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 100ad47a and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 100ad47c and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 100ad482 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ad486 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 100ad489 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 100ad48c jae 0x100ad64a */
  if (!C.cf) goto L_100ad64a;
  /* 100ad492 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ad497 jae 0x100ad64a */
  if (!C.cf) goto L_100ad64a;
  /* 100ad49d cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ad4a2 ja 0x100ad64a */
  if ((!C.cf&&!C.zf)) goto L_100ad64a;
  /* 100ad4a8 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ad4ad ja 0x100ad4b3 */
  if ((!C.cf&&!C.zf)) goto L_100ad4b3;
  /* 100ad4af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ad4b1 jmp 0x100ad4ed */
  goto L_100ad4ed;
L_100ad4b3:;
  /* 100ad4b3 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 100ad4b6 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 100ad4bb jne 0x100ad4d5 */
  if (!C.zf) goto L_100ad4d5;
  /* 100ad4bd inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 100ad4c0 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 100ad4c3 jne 0x100ad4d5 */
  if (!C.zf) goto L_100ad4d5;
  /* 100ad4c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ad4c7 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad4ca jne 0x100ad4d7 */
  if (!C.zf) goto L_100ad4d7;
  /* 100ad4cc cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad4ce jne 0x100ad4d7 */
  if (!C.zf) goto L_100ad4d7;
  /* 100ad4d0 jmp 0x100ad644 */
  goto L_100ad644;
L_100ad4d5:;
  /* 100ad4d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100ad4d7:;
  /* 100ad4d7 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ad4da jne 0x100ad4fa */
  if (!C.zf) goto L_100ad4fa;
  /* 100ad4dc inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 100ad4df test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 100ad4e2 jne 0x100ad4fa */
  if (!C.zf) goto L_100ad4fa;
  /* 100ad4e4 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad4e7 jne 0x100ad4fa */
  if (!C.zf) goto L_100ad4fa;
  /* 100ad4e9 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad4eb jne 0x100ad4fa */
  if (!C.zf) goto L_100ad4fa;
L_100ad4ed:;
  /* 100ad4ed mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 100ad4f0 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 100ad4f3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100ad4f5 jmp 0x100ad665 */
  goto L_100ad665;
L_100ad4fa:;
  /* 100ad4fa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 100ad4fd lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 100ad500 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100ad503 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_100ad50a:;
  /* 100ad50a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 100ad50d add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ad50f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad513 jle 0x100ad55e */
  if ((C.zf||C.sf!=C.of)) goto L_100ad55e;
  /* 100ad515 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ad517 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 100ad51a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100ad51d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100ad520 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 100ad523 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_100ad526:;
  /* 100ad526 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100ad529 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 100ad52c movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 100ad52f movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 100ad532 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100ad535 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100ad538 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ad53b push ecx */
  push32((uint32_t)(ECX));
  /* 100ad53c push eax */
  push32((uint32_t)(EAX));
  /* 100ad53d push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 100ad53f call 0x100ac5f5 */
  push32(0x100ad544u); f_100ac5f5();
  /* 100ad544 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ad547 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ad549 je 0x100ad551 */
  if (C.zf) goto L_100ad551;
  /* 100ad54b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100ad54e inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_100ad551:;
  /* 100ad551 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 100ad555 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 100ad559 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 100ad55c jne 0x100ad526 */
  if (!C.zf) goto L_100ad526;
L_100ad55e:;
  /* 100ad55e add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 100ad562 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 100ad565 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 100ad568 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad56c jg 0x100ad50a */
  if ((!C.zf&&C.sf==C.of)) goto L_100ad50a;
  /* 100ad56e add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 100ad575 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ad57a jle 0x100ad5a1 */
  if ((C.zf||C.sf!=C.of)) goto L_100ad5a1;
L_100ad57c:;
  /* 100ad57c test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 100ad580 jne 0x100ad59a */
  if (!C.zf) goto L_100ad59a;
  /* 100ad582 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 100ad585 push eax */
  push32((uint32_t)(EAX));
  /* 100ad586 call 0x100ac674 */
  push32(0x100ad58bu); f_100ac674();
  /* 100ad58b add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 100ad592 pop ecx */
  ECX = (pop32());
  /* 100ad593 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ad598 jg 0x100ad57c */
  if ((!C.zf&&C.sf==C.of)) goto L_100ad57c;
L_100ad59a:;
  /* 100ad59a cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ad59f jg 0x100ad5da */
  if ((!C.zf&&C.sf==C.of)) goto L_100ad5da;
L_100ad5a1:;
  /* 100ad5a1 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 100ad5a8 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ad5ad jge 0x100ad5da */
  if ((C.sf==C.of)) goto L_100ad5da;
  /* 100ad5af movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 100ad5b3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100ad5b5 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 100ad5b8 mov ebx, eax */
  EBX = (EAX);
L_100ad5ba:;
  /* 100ad5ba test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 100ad5be je 0x100ad5c3 */
  if (C.zf) goto L_100ad5c3;
  /* 100ad5c0 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_100ad5c3:;
  /* 100ad5c3 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 100ad5c6 push eax */
  push32((uint32_t)(EAX));
  /* 100ad5c7 call 0x100ac6a2 */
  push32(0x100ad5ccu); f_100ac6a2();
  /* 100ad5cc dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100ad5cd pop ecx */
  ECX = (pop32());
  /* 100ad5ce jne 0x100ad5ba */
  if (!C.zf) goto L_100ad5ba;
  /* 100ad5d0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad5d4 je 0x100ad5da */
  if (C.zf) goto L_100ad5da;
  /* 100ad5d6 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_100ad5da:;
  /* 100ad5da cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ad5e0 ja 0x100ad5f1 */
  if ((!C.cf&&!C.zf)) goto L_100ad5f1;
  /* 100ad5e2 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 100ad5e5 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100ad5ea cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad5ef jne 0x100ad626 */
  if (!C.zf) goto L_100ad626;
L_100ad5f1:;
  /* 100ad5f1 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad5f5 jne 0x100ad623 */
  if (!C.zf) goto L_100ad623;
  /* 100ad5f7 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 100ad5fb cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad5ff jne 0x100ad61e */
  if (!C.zf) goto L_100ad61e;
  /* 100ad601 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 100ad605 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ad60b jne 0x100ad618 */
  if (!C.zf) goto L_100ad618;
  /* 100ad60d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 100ad610 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 100ad616 jmp 0x100ad626 */
  goto L_100ad626;
L_100ad618:;
  /* 100ad618 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 100ad61c jmp 0x100ad626 */
  goto L_100ad626;
L_100ad61e:;
  /* 100ad61e inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 100ad621 jmp 0x100ad626 */
  goto L_100ad626;
L_100ad623:;
  /* 100ad623 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_100ad626:;
  /* 100ad626 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ad629 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ad62d jae 0x100ad64a */
  if (!C.cf) goto L_100ad64a;
  /* 100ad62f mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 100ad633 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 100ad635 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 100ad638 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 100ad63b mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 100ad63e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 100ad641 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_100ad644:;
  /* 100ad644 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 100ad648 jmp 0x100ad665 */
  goto L_100ad665;
L_100ad64a:;
  /* 100ad64a neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 100ad64d sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ad64f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 100ad653 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 100ad659 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ad65f and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 100ad662 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_100ad665:;
  /* 100ad665 pop edi */
  EDI = (pop32());
  /* 100ad666 pop esi */
  ESI = (pop32());
  /* 100ad667 pop ebx */
  EBX = (pop32());
  /* 100ad668 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ad669 ret  */
  ESPCHK(0x100ad44au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d66a @ 0x100ad66a (124 bytes, 52 insns) */
void f_100ad66a(void) {
  FTRACE(0x100ad66au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ad66a push ebp */
  push32((uint32_t)(EBP));
  /* 100ad66b mov ebp, esp */
  EBP = (ESP);
  /* 100ad66d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ad670 push ebx */
  push32((uint32_t)(EBX));
  /* 100ad671 mov ebx, 0x100b3210 */
  EBX = (0x100b3210u);
  /* 100ad676 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100ad678 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ad67b cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad67e je 0x100ad6e3 */
  if (C.zf) goto L_100ad6e3;
  /* 100ad680 jge 0x100ad692 */
  if ((C.sf==C.of)) goto L_100ad692;
  /* 100ad682 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100ad685 mov ebx, 0x100b3370 */
  EBX = (0x100b3370u);
  /* 100ad68a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100ad68c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100ad68f sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_100ad692:;
  /* 100ad692 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad695 jne 0x100ad69d */
  if (!C.zf) goto L_100ad69d;
  /* 100ad697 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ad69a mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_100ad69d:;
  /* 100ad69d cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad6a0 je 0x100ad6e3 */
  if (C.zf) goto L_100ad6e3;
  /* 100ad6a2 push esi */
  push32((uint32_t)(ESI));
  /* 100ad6a3 push edi */
  push32((uint32_t)(EDI));
L_100ad6a4:;
  /* 100ad6a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100ad6a7 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ad6aa sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 100ad6ae and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 100ad6b1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad6b3 je 0x100ad6dc */
  if (C.zf) goto L_100ad6dc;
  /* 100ad6b5 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 100ad6b8 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ad6be lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 100ad6c1 jb 0x100ad6cf */
  if (C.cf) goto L_100ad6cf;
  /* 100ad6c3 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 100ad6c6 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100ad6c7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100ad6c8 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100ad6c9 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 100ad6cc lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_100ad6cf:;
  /* 100ad6cf push esi */
  push32((uint32_t)(ESI));
  /* 100ad6d0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100ad6d3 call 0x100ad44a */
  push32(0x100ad6d8u); f_100ad44a();
  /* 100ad6d8 pop ecx */
  ECX = (pop32());
  /* 100ad6d9 pop ecx */
  ECX = (pop32());
  /* 100ad6da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_100ad6dc:;
  /* 100ad6dc cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad6df jne 0x100ad6a4 */
  if (!C.zf) goto L_100ad6a4;
  /* 100ad6e1 pop edi */
  EDI = (pop32());
  /* 100ad6e2 pop esi */
  ESI = (pop32());
L_100ad6e3:;
  /* 100ad6e3 pop ebx */
  EBX = (pop32());
  /* 100ad6e4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ad6e5 ret  */
  ESPCHK(0x100ad66au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6e6 @ 0x100ad6e6 (93 bytes, 32 insns) */
void f_100ad6e6(void) {
  FTRACE(0x100ad6e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ad6e6 push esi */
  push32((uint32_t)(ESI));
  /* 100ad6e7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100ad6eb cmp esi, dword ptr [0x100b7d20] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100b7d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad6f1 jae 0x100ad72b */
  if (!C.cf) goto L_100ad72b;
  /* 100ad6f3 mov ecx, esi */
  ECX = (ESI);
  /* 100ad6f5 mov eax, esi */
  EAX = (ESI);
  /* 100ad6f7 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100ad6fa and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100ad6fd mov ecx, dword ptr [ecx*4 + 0x100b7c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100b7c20)));
  /* 100ad704 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100ad707 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 100ad70c je 0x100ad72b */
  if (C.zf) goto L_100ad72b;
  /* 100ad70e push edi */
  push32((uint32_t)(EDI));
  /* 100ad70f push esi */
  push32((uint32_t)(ESI));
  /* 100ad710 call 0x100ac024 */
  push32(0x100ad715u); f_100ac024();
  /* 100ad715 push esi */
  push32((uint32_t)(ESI));
  /* 100ad716 call 0x100ad743 */
  push32(0x100ad71bu); f_100ad743();
  /* 100ad71b push esi */
  push32((uint32_t)(ESI));
  /* 100ad71c mov edi, eax */
  EDI = (EAX);
  /* 100ad71e call 0x100ac083 */
  push32(0x100ad723u); f_100ac083();
  /* 100ad723 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ad726 mov eax, edi */
  EAX = (EDI);
  /* 100ad728 pop edi */
  EDI = (pop32());
  /* 100ad729 pop esi */
  ESI = (pop32());
  /* 100ad72a ret  */
  ESPCHK(0x100ad6e6u, _esp0);
  ESP += 4; return;
L_100ad72b:;
  /* 100ad72b call 0x100abf51 */
  push32(0x100ad730u); f_100abf51();
  /* 100ad730 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100ad736 call 0x100abf5a */
  push32(0x100ad73bu); f_100abf5a();
  /* 100ad73b and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100ad73e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100ad741 pop esi */
  ESI = (pop32());
  /* 100ad742 ret  */
  ESPCHK(0x100ad6e6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d743 @ 0x100ad743 (131 bytes, 52 insns) */
void f_100ad743(void) {
  FTRACE(0x100ad743u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ad743 push esi */
  push32((uint32_t)(ESI));
  /* 100ad744 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100ad748 push edi */
  push32((uint32_t)(EDI));
  /* 100ad749 push esi */
  push32((uint32_t)(ESI));
  /* 100ad74a call 0x100abfe2 */
  push32(0x100ad74fu); f_100abfe2();
  /* 100ad74f cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad752 pop ecx */
  ECX = (pop32());
  /* 100ad753 je 0x100ad791 */
  if (C.zf) goto L_100ad791;
  /* 100ad755 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad758 je 0x100ad75f */
  if (C.zf) goto L_100ad75f;
  /* 100ad75a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad75d jne 0x100ad775 */
  if (!C.zf) goto L_100ad775;
L_100ad75f:;
  /* 100ad75f push 2 */
  push32((uint32_t)(0x2u));
  /* 100ad761 call 0x100abfe2 */
  push32(0x100ad766u); f_100abfe2();
  /* 100ad766 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ad768 mov edi, eax */
  EDI = (EAX);
  /* 100ad76a call 0x100abfe2 */
  push32(0x100ad76fu); f_100abfe2();
  /* 100ad76f pop ecx */
  ECX = (pop32());
  /* 100ad770 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad772 pop ecx */
  ECX = (pop32());
  /* 100ad773 je 0x100ad791 */
  if (C.zf) goto L_100ad791;
L_100ad775:;
  /* 100ad775 push esi */
  push32((uint32_t)(ESI));
  /* 100ad776 call 0x100abfe2 */
  push32(0x100ad77bu); f_100abfe2();
  /* 100ad77b pop ecx */
  ECX = (pop32());
  /* 100ad77c push eax */
  push32((uint32_t)(EAX));
  /* 100ad77d call dword ptr [0x100ae0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae0d4))), 0x100ad783u);
  /* 100ad783 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ad785 jne 0x100ad791 */
  if (!C.zf) goto L_100ad791;
  /* 100ad787 call dword ptr [0x100ae03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ae03c))), 0x100ad78du);
  /* 100ad78d mov edi, eax */
  EDI = (EAX);
  /* 100ad78f jmp 0x100ad793 */
  goto L_100ad793;
L_100ad791:;
  /* 100ad791 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_100ad793:;
  /* 100ad793 push esi */
  push32((uint32_t)(ESI));
  /* 100ad794 call 0x100abf63 */
  push32(0x100ad799u); f_100abf63();
  /* 100ad799 mov eax, esi */
  EAX = (ESI);
  /* 100ad79b and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 100ad79e sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 100ad7a1 pop ecx */
  ECX = (pop32());
  /* 100ad7a2 mov eax, dword ptr [eax*4 + 0x100b7c20] */
  EAX = (r32((uint32_t)(EAX*4 + 0x100b7c20)));
  /* 100ad7a9 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 100ad7ac and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 100ad7b1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100ad7b3 je 0x100ad7c1 */
  if (C.zf) goto L_100ad7c1;
  /* 100ad7b5 push edi */
  push32((uint32_t)(EDI));
  /* 100ad7b6 call 0x100abede */
  push32(0x100ad7bbu); f_100abede();
  /* 100ad7bb pop ecx */
  ECX = (pop32());
  /* 100ad7bc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100ad7bf jmp 0x100ad7c3 */
  goto L_100ad7c3;
L_100ad7c1:;
  /* 100ad7c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100ad7c3:;
  /* 100ad7c3 pop edi */
  EDI = (pop32());
  /* 100ad7c4 pop esi */
  ESI = (pop32());
  /* 100ad7c5 ret  */
  ESPCHK(0x100ad743u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x100ad7c6 (43 bytes, 17 insns) */
void f_100ad7c6(void) {
  FTRACE(0x100ad7c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ad7c6 push esi */
  push32((uint32_t)(ESI));
  /* 100ad7c7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100ad7cb mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100ad7ce test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 100ad7d0 je 0x100ad7ef */
  if (C.zf) goto L_100ad7ef;
  /* 100ad7d2 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 100ad7d4 je 0x100ad7ef */
  if (C.zf) goto L_100ad7ef;
  /* 100ad7d6 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 100ad7d9 call 0x100aa1a6 */
  push32(0x100ad7deu); f_100aa1a6();
  /* 100ad7de and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 100ad7e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ad7e6 pop ecx */
  ECX = (pop32());
  /* 100ad7e7 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100ad7e9 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 100ad7ec mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_100ad7ef:;
  /* 100ad7ef pop esi */
  ESI = (pop32());
  /* 100ad7f0 ret  */
  ESPCHK(0x100ad7c6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d800 @ 0x100ad800 (208 bytes, 85 insns) */
void f_100ad800(void) {
  FTRACE(0x100ad800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ad800 push ebp */
  push32((uint32_t)(EBP));
  /* 100ad801 mov ebp, esp */
  EBP = (ESP);
  /* 100ad803 push edi */
  push32((uint32_t)(EDI));
  /* 100ad804 push esi */
  push32((uint32_t)(ESI));
  /* 100ad805 push ebx */
  push32((uint32_t)(EBX));
  /* 100ad806 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100ad809 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 100ad80c lea eax, [0x100b6820] */
  EAX = ((uint32_t)(0x100b6820));
  /* 100ad812 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad816 jne 0x100ad853 */
  if (!C.zf) goto L_100ad853;
  /* 100ad818 mov al, 0xff */
  AL = (0xffu);
  /* 100ad81a mov edi, edi */
  EDI = (EDI);
L_100ad81c:;
  /* 100ad81c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 100ad81e je 0x100ad84e */
  if (C.zf) goto L_100ad84e;
  /* 100ad820 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ad822 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100ad823 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 100ad825 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ad826 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ad828 je 0x100ad81c */
  if (C.zf) goto L_100ad81c;
  /* 100ad82a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100ad82c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ad82e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100ad830 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 100ad833 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 100ad835 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 100ad837 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 100ad839 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100ad83b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ad83d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100ad83f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 100ad842 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 100ad844 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 100ad846 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ad848 je 0x100ad81c */
  if (C.zf) goto L_100ad81c;
  /* 100ad84a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100ad84c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_100ad84e:;
  /* 100ad84e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 100ad851 jmp 0x100ad8cb */
  goto L_100ad8cb;
L_100ad853:;
  /* 100ad853 lock inc dword ptr [0x100b69a4] */
  x86_unimpl("lock inc @ 0x100ad853");
  /* 100ad85a cmp dword ptr [0x100b69a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100b69a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad861 jg 0x100ad867 */
  if ((!C.zf&&C.sf==C.of)) goto L_100ad867;
  /* 100ad863 push 0 */
  push32((uint32_t)(0x0u));
  /* 100ad865 jmp 0x100ad87c */
  goto L_100ad87c;
L_100ad867:;
  /* 100ad867 lock dec dword ptr [0x100b69a4] */
  x86_unimpl("lock dec @ 0x100ad867");
  /* 100ad86e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100ad870 call 0x100a9ff3 */
  push32(0x100ad875u); f_100a9ff3();
  /* 100ad875 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_100ad87c:;
  /* 100ad87c mov eax, 0xff */
  EAX = (0xffu);
  /* 100ad881 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ad883 nop  */
  /* nop */
L_100ad884:;
  /* 100ad884 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 100ad886 je 0x100ad8af */
  if (C.zf) goto L_100ad8af;
  /* 100ad888 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ad88a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100ad88b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100ad88d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ad88e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ad890 je 0x100ad884 */
  if (C.zf) goto L_100ad884;
  /* 100ad892 push eax */
  push32((uint32_t)(EAX));
  /* 100ad893 push ebx */
  push32((uint32_t)(EBX));
  /* 100ad894 call 0x100a948f */
  push32(0x100ad899u); f_100a948f();
  /* 100ad899 mov ebx, eax */
  EBX = (EAX);
  /* 100ad89b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ad89e call 0x100a948f */
  push32(0x100ad8a3u); f_100a948f();
  /* 100ad8a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ad8a6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ad8a8 je 0x100ad884 */
  if (C.zf) goto L_100ad884;
  /* 100ad8aa sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ad8ac sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_100ad8af:;
  /* 100ad8af mov ebx, eax */
  EBX = (EAX);
  /* 100ad8b1 pop eax */
  EAX = (pop32());
  /* 100ad8b2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ad8b4 jne 0x100ad8bf */
  if (!C.zf) goto L_100ad8bf;
  /* 100ad8b6 lock dec dword ptr [0x100b69a4] */
  x86_unimpl("lock dec @ 0x100ad8b6");
  /* 100ad8bd jmp 0x100ad8c9 */
  goto L_100ad8c9;
L_100ad8bf:;
  /* 100ad8bf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100ad8c1 call 0x100aa054 */
  push32(0x100ad8c6u); f_100aa054();
  /* 100ad8c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100ad8c9:;
  /* 100ad8c9 mov eax, ebx */
  EAX = (EBX);
L_100ad8cb:;
  /* 100ad8cb pop ebx */
  EBX = (pop32());
  /* 100ad8cc pop esi */
  ESI = (pop32());
  /* 100ad8cd pop edi */
  EDI = (pop32());
  /* 100ad8ce leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ad8cf ret  */
  ESPCHK(0x100ad800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8d0 @ 0x100ad8d0 (257 bytes, 103 insns) */
void f_100ad8d0(void) {
  FTRACE(0x100ad8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ad8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 100ad8d1 mov ebp, esp */
  EBP = (ESP);
  /* 100ad8d3 push edi */
  push32((uint32_t)(EDI));
  /* 100ad8d4 push esi */
  push32((uint32_t)(ESI));
  /* 100ad8d5 push ebx */
  push32((uint32_t)(EBX));
  /* 100ad8d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 100ad8d9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100ad8db je 0x100ad9ca */
  if (C.zf) goto L_100ad9ca;
  /* 100ad8e1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100ad8e4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100ad8e7 lea eax, [0x100b6820] */
  EAX = ((uint32_t)(0x100b6820));
  /* 100ad8ed cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad8f1 jne 0x100ad941 */
  if (!C.zf) goto L_100ad941;
  /* 100ad8f3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 100ad8f5 mov bl, 0x5a */
  BL = (0x5au);
  /* 100ad8f7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 100ad8f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100ad8fc:;
  /* 100ad8fc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 100ad8fe or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 100ad900 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 100ad902 je 0x100ad925 */
  if (C.zf) goto L_100ad925;
  /* 100ad904 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 100ad906 je 0x100ad925 */
  if (C.zf) goto L_100ad925;
  /* 100ad908 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100ad909 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ad90a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ad90c jb 0x100ad914 */
  if (C.cf) goto L_100ad914;
  /* 100ad90e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ad910 ja 0x100ad914 */
  if ((!C.cf&&!C.zf)) goto L_100ad914;
  /* 100ad912 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_100ad914:;
  /* 100ad914 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ad916 jb 0x100ad91e */
  if (C.cf) goto L_100ad91e;
  /* 100ad918 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ad91a ja 0x100ad91e */
  if ((!C.cf&&!C.zf)) goto L_100ad91e;
  /* 100ad91c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_100ad91e:;
  /* 100ad91e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ad920 jne 0x100ad92f */
  if (!C.zf) goto L_100ad92f;
  /* 100ad922 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100ad923 jne 0x100ad8fc */
  if (!C.zf) goto L_100ad8fc;
L_100ad925:;
  /* 100ad925 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100ad927 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ad929 je 0x100ad9ca */
  if (C.zf) goto L_100ad9ca;
L_100ad92f:;
  /* 100ad92f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 100ad934 jb 0x100ad9ca */
  if (C.cf) goto L_100ad9ca;
  /* 100ad93a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 100ad93c jmp 0x100ad9ca */
  goto L_100ad9ca;
L_100ad941:;
  /* 100ad941 lock inc dword ptr [0x100b69a4] */
  x86_unimpl("lock inc @ 0x100ad941");
  /* 100ad948 cmp dword ptr [0x100b69a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100b69a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad94f jg 0x100ad955 */
  if ((!C.zf&&C.sf==C.of)) goto L_100ad955;
  /* 100ad951 push 0 */
  push32((uint32_t)(0x0u));
  /* 100ad953 jmp 0x100ad96e */
  goto L_100ad96e;
L_100ad955:;
  /* 100ad955 lock dec dword ptr [0x100b69a4] */
  x86_unimpl("lock dec @ 0x100ad955");
  /* 100ad95c mov ebx, ecx */
  EBX = (ECX);
  /* 100ad95e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100ad960 call 0x100a9ff3 */
  push32(0x100ad965u); f_100a9ff3();
  /* 100ad965 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 100ad96c mov ecx, ebx */
  ECX = (EBX);
L_100ad96e:;
  /* 100ad96e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ad970 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ad972 mov edi, edi */
  EDI = (EDI);
L_100ad974:;
  /* 100ad974 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ad976 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ad978 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100ad97a je 0x100ad99f */
  if (C.zf) goto L_100ad99f;
  /* 100ad97c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ad97e je 0x100ad99f */
  if (C.zf) goto L_100ad99f;
  /* 100ad980 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100ad981 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ad982 push ecx */
  push32((uint32_t)(ECX));
  /* 100ad983 push eax */
  push32((uint32_t)(EAX));
  /* 100ad984 push ebx */
  push32((uint32_t)(EBX));
  /* 100ad985 call 0x100a948f */
  push32(0x100ad98au); f_100a948f();
  /* 100ad98a mov ebx, eax */
  EBX = (EAX);
  /* 100ad98c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ad98f call 0x100a948f */
  push32(0x100ad994u); f_100a948f();
  /* 100ad994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ad997 pop ecx */
  ECX = (pop32());
  /* 100ad998 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad99a jne 0x100ad9a5 */
  if (!C.zf) goto L_100ad9a5;
  /* 100ad99c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100ad99d jne 0x100ad974 */
  if (!C.zf) goto L_100ad974;
L_100ad99f:;
  /* 100ad99f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100ad9a1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ad9a3 je 0x100ad9ae */
  if (C.zf) goto L_100ad9ae;
L_100ad9a5:;
  /* 100ad9a5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 100ad9aa jb 0x100ad9ae */
  if (C.cf) goto L_100ad9ae;
  /* 100ad9ac neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_100ad9ae:;
  /* 100ad9ae pop eax */
  EAX = (pop32());
  /* 100ad9af or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ad9b1 jne 0x100ad9bc */
  if (!C.zf) goto L_100ad9bc;
  /* 100ad9b3 lock dec dword ptr [0x100b69a4] */
  x86_unimpl("lock dec @ 0x100ad9b3");
  /* 100ad9ba jmp 0x100ad9ca */
  goto L_100ad9ca;
L_100ad9bc:;
  /* 100ad9bc mov ebx, ecx */
  EBX = (ECX);
  /* 100ad9be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100ad9c0 call 0x100aa054 */
  push32(0x100ad9c5u); f_100aa054();
  /* 100ad9c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ad9c8 mov ecx, ebx */
  ECX = (EBX);
L_100ad9ca:;
  /* 100ad9ca mov eax, ecx */
  EAX = (ECX);
  /* 100ad9cc pop ebx */
  EBX = (pop32());
  /* 100ad9cd pop esi */
  ESI = (pop32());
  /* 100ad9ce pop edi */
  EDI = (pop32());
  /* 100ad9cf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ad9d0 ret  */
  ESPCHK(0x100ad8d0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x100ada14 (6 bytes, 1 insns) */
void f_100ada14(void) {
  FTRACE(0x100ada14u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ada14 jmp dword ptr [0x100ae0cc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100ae0cc)))); return;
}

