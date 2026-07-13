#include "recomp.h"

/* FUN_10009265 @ 0x10189265 (53 bytes, 25 insns) */
void f_10189265(void) {
  FTRACE(0x10189265u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10189265 push ebp */
  push32((uint32_t)(EBP));
  /* 10189266 mov ebp, esp */
  EBP = (ESP);
  /* 10189268 push ecx */
  push32((uint32_t)(ECX));
  /* 10189269 push esi */
  push32((uint32_t)(ESI));
  /* 1018926a wait  */
  /* wait (no observable integer/reg state) */
  /* 1018926b fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 1018926e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 10189271 call 0x101892b0 */
  push32(0x10189276u); f_101892b0();
  /* 10189276 mov esi, eax */
  ESI = (EAX);
  /* 10189278 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1018927b not eax */
  EAX = (~(EAX));
  /* 1018927d and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 1018927f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10189282 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10189285 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 10189287 push esi */
  push32((uint32_t)(ESI));
  /* 10189288 call 0x10189342 */
  push32(0x1018928du); f_10189342();
  /* 1018928d pop ecx */
  ECX = (pop32());
  /* 1018928e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10189291 pop ecx */
  ECX = (pop32());
  /* 10189292 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 10189295 mov eax, esi */
  EAX = (ESI);
  /* 10189297 pop esi */
  ESI = (pop32());
  /* 10189298 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10189299 ret  */
  ESPCHK(0x10189265u, _esp0);
  ESP += 4; return;
}

/* FUN_1000929a @ 0x1018929a (22 bytes, 8 insns) */
void f_1018929a(void) {
  FTRACE(0x1018929au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018929a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1018929e and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101892a3 push eax */
  push32((uint32_t)(EAX));
  /* 101892a4 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 101892a8 call 0x10189265 */
  push32(0x101892adu); f_10189265();
  /* 101892ad pop ecx */
  ECX = (pop32());
  /* 101892ae pop ecx */
  ECX = (pop32());
  /* 101892af ret  */
  ESPCHK(0x1018929au, _esp0);
  ESP += 4; return;
}

/* FUN_100092b0 @ 0x101892b0 (146 bytes, 58 insns) */
void f_101892b0(void) {
  FTRACE(0x101892b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101892b0 push ebx */
  push32((uint32_t)(EBX));
  /* 101892b1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 101892b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101892b7 push ebp */
  push32((uint32_t)(EBP));
  /* 101892b8 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 101892bb push edi */
  push32((uint32_t)(EDI));
  /* 101892bc je 0x101892c1 */
  if (C.zf) goto L_101892c1;
  /* 101892be push 0x10 */
  push32((uint32_t)(0x10u));
  /* 101892c0 pop eax */
  EAX = (pop32());
L_101892c1:;
  /* 101892c1 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 101892c4 je 0x101892c8 */
  if (C.zf) goto L_101892c8;
  /* 101892c6 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_101892c8:;
  /* 101892c8 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 101892cb je 0x101892cf */
  if (C.zf) goto L_101892cf;
  /* 101892cd or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_101892cf:;
  /* 101892cf test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 101892d2 je 0x101892d6 */
  if (C.zf) goto L_101892d6;
  /* 101892d4 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_101892d6:;
  /* 101892d6 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 101892d9 je 0x101892dd */
  if (C.zf) goto L_101892dd;
  /* 101892db or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_101892dd:;
  /* 101892dd test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 101892e0 je 0x101892e7 */
  if (C.zf) goto L_101892e7;
  /* 101892e2 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_101892e7:;
  /* 101892e7 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 101892ea push esi */
  push32((uint32_t)(ESI));
  /* 101892eb mov edx, ecx */
  EDX = (ECX);
  /* 101892ed mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 101892f2 mov edi, 0x300 */
  EDI = (0x300u);
  /* 101892f7 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 101892f9 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 101892fe je 0x1018931f */
  if (C.zf) goto L_1018931f;
  /* 10189300 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189306 je 0x1018931c */
  if (C.zf) goto L_1018931c;
  /* 10189308 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018930e je 0x10189318 */
  if (C.zf) goto L_10189318;
  /* 10189310 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189312 jne 0x1018931f */
  if (!C.zf) goto L_1018931f;
  /* 10189314 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 10189316 jmp 0x1018931f */
  goto L_1018931f;
L_10189318:;
  /* 10189318 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 1018931a jmp 0x1018931f */
  goto L_1018931f;
L_1018931c:;
  /* 1018931c or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_1018931f:;
  /* 1018931f and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10189321 pop esi */
  ESI = (pop32());
  /* 10189322 je 0x1018932f */
  if (C.zf) goto L_1018932f;
  /* 10189324 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189326 jne 0x10189334 */
  if (!C.zf) goto L_10189334;
  /* 10189328 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 1018932d jmp 0x10189334 */
  goto L_10189334;
L_1018932f:;
  /* 1018932f or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_10189334:;
  /* 10189334 pop edi */
  EDI = (pop32());
  /* 10189335 pop ebp */
  EBP = (pop32());
  /* 10189336 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 10189339 pop ebx */
  EBX = (pop32());
  /* 1018933a je 0x10189341 */
  if (C.zf) goto L_10189341;
  /* 1018933c or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_10189341:;
  /* 10189341 ret  */
  ESPCHK(0x101892b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009342 @ 0x10189342 (137 bytes, 53 insns) */
void f_10189342(void) {
  FTRACE(0x10189342u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10189342 push ebx */
  push32((uint32_t)(EBX));
  /* 10189343 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 10189347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10189349 push esi */
  push32((uint32_t)(ESI));
  /* 1018934a test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 1018934d je 0x10189352 */
  if (C.zf) goto L_10189352;
  /* 1018934f push 1 */
  push32((uint32_t)(0x1u));
  /* 10189351 pop eax */
  EAX = (pop32());
L_10189352:;
  /* 10189352 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 10189355 je 0x10189359 */
  if (C.zf) goto L_10189359;
  /* 10189357 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_10189359:;
  /* 10189359 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 1018935c je 0x10189360 */
  if (C.zf) goto L_10189360;
  /* 1018935e or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_10189360:;
  /* 10189360 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10189363 je 0x10189367 */
  if (C.zf) goto L_10189367;
  /* 10189365 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_10189367:;
  /* 10189367 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 1018936a je 0x1018936e */
  if (C.zf) goto L_1018936e;
  /* 1018936c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_1018936e:;
  /* 1018936e test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 10189374 je 0x10189378 */
  if (C.zf) goto L_10189378;
  /* 10189376 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_10189378:;
  /* 10189378 mov ecx, ebx */
  ECX = (EBX);
  /* 1018937a mov edx, 0x300 */
  EDX = (0x300u);
  /* 1018937f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10189381 mov esi, 0x200 */
  ESI = (0x200u);
  /* 10189386 je 0x101893a5 */
  if (C.zf) goto L_101893a5;
  /* 10189388 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018938e je 0x101893a2 */
  if (C.zf) goto L_101893a2;
  /* 10189390 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189392 je 0x1018939d */
  if (C.zf) goto L_1018939d;
  /* 10189394 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189396 jne 0x101893a5 */
  if (!C.zf) goto L_101893a5;
  /* 10189398 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 1018939b jmp 0x101893a5 */
  goto L_101893a5;
L_1018939d:;
  /* 1018939d or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 101893a0 jmp 0x101893a5 */
  goto L_101893a5;
L_101893a2:;
  /* 101893a2 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_101893a5:;
  /* 101893a5 mov ecx, ebx */
  ECX = (EBX);
  /* 101893a7 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 101893ad je 0x101893bb */
  if (C.zf) goto L_101893bb;
  /* 101893af cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101893b5 jne 0x101893bd */
  if (!C.zf) goto L_101893bd;
  /* 101893b7 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 101893b9 jmp 0x101893bd */
  goto L_101893bd;
L_101893bb:;
  /* 101893bb or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_101893bd:;
  /* 101893bd pop esi */
  ESI = (pop32());
  /* 101893be test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 101893c4 pop ebx */
  EBX = (pop32());
  /* 101893c5 je 0x101893ca */
  if (C.zf) goto L_101893ca;
  /* 101893c7 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_101893ca:;
  /* 101893ca ret  */
  ESPCHK(0x10189342u, _esp0);
  ESP += 4; return;
}

/* FUN_100093cb @ 0x101893cb (117 bytes, 46 insns) */
void f_101893cb(void) {
  FTRACE(0x101893cbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101893cb push ebp */
  push32((uint32_t)(EBP));
  /* 101893cc mov ebp, esp */
  EBP = (ESP);
  /* 101893ce push ecx */
  push32((uint32_t)(ECX));
  /* 101893cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101893d2 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 101893d5 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101893db ja 0x101893e9 */
  if ((!C.cf&&!C.zf)) goto L_101893e9;
  /* 101893dd mov ecx, dword ptr [0x101909f0] */
  ECX = (r32((uint32_t)(0x101909f0)));
  /* 101893e3 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 101893e7 jmp 0x1018943b */
  goto L_1018943b;
L_101893e9:;
  /* 101893e9 mov ecx, eax */
  ECX = (EAX);
  /* 101893eb push esi */
  push32((uint32_t)(ESI));
  /* 101893ec mov esi, dword ptr [0x101909f0] */
  ESI = (r32((uint32_t)(0x101909f0)));
  /* 101893f2 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 101893f5 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 101893f8 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 101893fd pop esi */
  ESI = (pop32());
  /* 101893fe je 0x1018940e */
  if (C.zf) goto L_1018940e;
  /* 10189400 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 10189404 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10189407 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 1018940a push 2 */
  push32((uint32_t)(0x2u));
  /* 1018940c jmp 0x10189417 */
  goto L_10189417;
L_1018940e:;
  /* 1018940e and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10189412 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10189415 push 1 */
  push32((uint32_t)(0x1u));
L_10189417:;
  /* 10189417 pop eax */
  EAX = (pop32());
  /* 10189418 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 1018941b push 1 */
  push32((uint32_t)(0x1u));
  /* 1018941d push 0 */
  push32((uint32_t)(0x0u));
  /* 1018941f push 0 */
  push32((uint32_t)(0x0u));
  /* 10189421 push ecx */
  push32((uint32_t)(ECX));
  /* 10189422 push eax */
  push32((uint32_t)(EAX));
  /* 10189423 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10189426 push eax */
  push32((uint32_t)(EAX));
  /* 10189427 push 1 */
  push32((uint32_t)(0x1u));
  /* 10189429 call 0x1018c27d */
  push32(0x1018942eu); f_1018c27d();
  /* 1018942e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10189431 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10189433 jne 0x10189437 */
  if (!C.zf) goto L_10189437;
  /* 10189435 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10189436 ret  */
  ESPCHK(0x101893cbu, _esp0);
  ESP += 4; return;
L_10189437:;
  /* 10189437 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_1018943b:;
  /* 1018943b and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1018943e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018943f ret  */
  ESPCHK(0x101893cbu, _esp0);
  ESP += 4; return;
}

/* FUN_10009440 @ 0x10189440 (111 bytes, 44 insns) */
void f_10189440(void) {
  FTRACE(0x10189440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10189440 push ebx */
  push32((uint32_t)(EBX));
  /* 10189441 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10189443 cmp dword ptr [0x10196858], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10196858))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189449 jne 0x1018945e */
  if (!C.zf) goto L_1018945e;
  /* 1018944b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1018944f cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189452 jl 0x101894ad */
  if ((C.sf!=C.of)) goto L_101894ad;
  /* 10189454 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189457 jg 0x101894ad */
  if ((!C.zf&&C.sf==C.of)) goto L_101894ad;
  /* 10189459 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018945c pop ebx */
  EBX = (pop32());
  /* 1018945d ret  */
  ESPCHK(0x10189440u, _esp0);
  ESP += 4; return;
L_1018945e:;
  /* 1018945e push esi */
  push32((uint32_t)(ESI));
  /* 1018945f mov esi, 0x101969d4 */
  ESI = (0x101969d4u);
  /* 10189464 push edi */
  push32((uint32_t)(EDI));
  /* 10189465 push esi */
  push32((uint32_t)(ESI));
  /* 10189466 call dword ptr [0x1018e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e090))), 0x1018946cu);
  /* 1018946c cmp dword ptr [0x101969d0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101969d0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189472 mov edi, dword ptr [0x1018e08c] */
  EDI = (r32((uint32_t)(0x1018e08c)));
  /* 10189478 je 0x10189488 */
  if (C.zf) goto L_10189488;
  /* 1018947a push esi */
  push32((uint32_t)(ESI));
  /* 1018947b call edi */
  call_ind((uint32_t)(EDI), 0x1018947du);
  /* 1018947d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1018947f call 0x1018a013 */
  push32(0x10189484u); f_1018a013();
  /* 10189484 pop ecx */
  ECX = (pop32());
  /* 10189485 push 1 */
  push32((uint32_t)(0x1u));
  /* 10189487 pop ebx */
  EBX = (pop32());
L_10189488:;
  /* 10189488 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1018948c call 0x101894af */
  push32(0x10189491u); f_101894af();
  /* 10189491 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10189493 pop ecx */
  ECX = (pop32());
  /* 10189494 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10189498 je 0x101894a4 */
  if (C.zf) goto L_101894a4;
  /* 1018949a push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1018949c call 0x1018a074 */
  push32(0x101894a1u); f_1018a074();
  /* 101894a1 pop ecx */
  ECX = (pop32());
  /* 101894a2 jmp 0x101894a7 */
  goto L_101894a7;
L_101894a4:;
  /* 101894a4 push esi */
  push32((uint32_t)(ESI));
  /* 101894a5 call edi */
  call_ind((uint32_t)(EDI), 0x101894a7u);
L_101894a7:;
  /* 101894a7 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101894ab pop edi */
  EDI = (pop32());
  /* 101894ac pop esi */
  ESI = (pop32());
L_101894ad:;
  /* 101894ad pop ebx */
  EBX = (pop32());
  /* 101894ae ret  */
  ESPCHK(0x10189440u, _esp0);
  ESP += 4; return;
}

/* FUN_100094af @ 0x101894af (203 bytes, 78 insns) */
void f_101894af(void) {
  FTRACE(0x101894afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101894af push ebp */
  push32((uint32_t)(EBP));
  /* 101894b0 mov ebp, esp */
  EBP = (ESP);
  /* 101894b2 push ecx */
  push32((uint32_t)(ECX));
  /* 101894b3 cmp dword ptr [0x10196858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10196858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101894ba push ebx */
  push32((uint32_t)(EBX));
  /* 101894bb push esi */
  push32((uint32_t)(ESI));
  /* 101894bc push edi */
  push32((uint32_t)(EDI));
  /* 101894bd jne 0x101894dc */
  if (!C.zf) goto L_101894dc;
  /* 101894bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101894c2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101894c5 jl 0x10189575 */
  if ((C.sf!=C.of)) goto L_10189575;
  /* 101894cb cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101894ce jg 0x10189575 */
  if ((!C.zf&&C.sf==C.of)) goto L_10189575;
  /* 101894d4 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101894d7 jmp 0x10189575 */
  goto L_10189575;
L_101894dc:;
  /* 101894dc mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 101894df mov edi, 0x100 */
  EDI = (0x100u);
  /* 101894e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101894e6 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101894e8 pop esi */
  ESI = (pop32());
  /* 101894e9 jge 0x10189510 */
  if ((C.sf==C.of)) goto L_10189510;
  /* 101894eb cmp dword ptr [0x10190c00], esi */
  { uint32_t _a=(r32((uint32_t)(0x10190c00))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101894f1 jle 0x101894fe */
  if ((C.zf||C.sf!=C.of)) goto L_101894fe;
  /* 101894f3 push esi */
  push32((uint32_t)(ESI));
  /* 101894f4 push ebx */
  push32((uint32_t)(EBX));
  /* 101894f5 call 0x101893cb */
  push32(0x101894fau); f_101893cb();
  /* 101894fa pop ecx */
  ECX = (pop32());
  /* 101894fb pop ecx */
  ECX = (pop32());
  /* 101894fc jmp 0x10189508 */
  goto L_10189508;
L_101894fe:;
  /* 101894fe mov eax, dword ptr [0x101909f0] */
  EAX = (r32((uint32_t)(0x101909f0)));
  /* 10189503 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 10189506 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_10189508:;
  /* 10189508 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018950a jne 0x10189510 */
  if (!C.zf) goto L_10189510;
L_1018950c:;
  /* 1018950c mov eax, ebx */
  EAX = (EBX);
  /* 1018950e jmp 0x10189575 */
  goto L_10189575;
L_10189510:;
  /* 10189510 mov edx, dword ptr [0x101909f0] */
  EDX = (r32((uint32_t)(0x101909f0)));
  /* 10189516 mov eax, ebx */
  EAX = (EBX);
  /* 10189518 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1018951b movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 1018951e test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 10189523 je 0x10189534 */
  if (C.zf) goto L_10189534;
  /* 10189525 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 10189529 push 2 */
  push32((uint32_t)(0x2u));
  /* 1018952b mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 1018952e mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 10189531 pop eax */
  EAX = (pop32());
  /* 10189532 jmp 0x1018953d */
  goto L_1018953d;
L_10189534:;
  /* 10189534 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 10189538 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 1018953b mov eax, esi */
  EAX = (ESI);
L_1018953d:;
  /* 1018953d push esi */
  push32((uint32_t)(ESI));
  /* 1018953e push 0 */
  push32((uint32_t)(0x0u));
  /* 10189540 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10189543 push 3 */
  push32((uint32_t)(0x3u));
  /* 10189545 push ecx */
  push32((uint32_t)(ECX));
  /* 10189546 push eax */
  push32((uint32_t)(EAX));
  /* 10189547 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1018954a push eax */
  push32((uint32_t)(EAX));
  /* 1018954b push edi */
  push32((uint32_t)(EDI));
  /* 1018954c push dword ptr [0x10196858] */
  push32((uint32_t)(r32((uint32_t)(0x10196858))));
  /* 10189552 call 0x1018c3c6 */
  push32(0x10189557u); f_1018c3c6();
  /* 10189557 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018955a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018955c je 0x1018950c */
  if (C.zf) goto L_1018950c;
  /* 1018955e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189560 jne 0x10189568 */
  if (!C.zf) goto L_10189568;
  /* 10189562 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10189566 jmp 0x10189575 */
  goto L_10189575;
L_10189568:;
  /* 10189568 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 1018956c movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10189570 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10189573 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10189575:;
  /* 10189575 pop edi */
  EDI = (pop32());
  /* 10189576 pop esi */
  ESI = (pop32());
  /* 10189577 pop ebx */
  EBX = (pop32());
  /* 10189578 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10189579 ret  */
  ESPCHK(0x101894afu, _esp0);
  ESP += 4; return;
}

/* FUN_1000957a @ 0x1018957a (73 bytes, 36 insns) */
void f_1018957a(void) {
  FTRACE(0x1018957au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018957a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1018957e push esi */
  push32((uint32_t)(ESI));
  /* 1018957f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10189581 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10189582 pop ecx */
  ECX = (pop32());
  /* 10189583 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10189585 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10189587 mov esi, eax */
  ESI = (EAX);
  /* 10189589 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1018958d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1018958e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10189590 pop ecx */
  ECX = (pop32());
  /* 10189591 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10189595 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10189597 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1018959a shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1018959c not edx */
  EDX = (~(EDX));
  /* 1018959e test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 101895a1 jne 0x101895bf */
  if (!C.zf) goto L_101895bf;
  /* 101895a3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101895a4 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101895a7 jge 0x101895ba */
  if ((C.sf==C.of)) goto L_101895ba;
  /* 101895a9 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_101895ac:;
  /* 101895ac cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101895af jne 0x101895bf */
  if (!C.zf) goto L_101895bf;
  /* 101895b1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101895b2 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101895b5 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101895b8 jl 0x101895ac */
  if ((C.sf!=C.of)) goto L_101895ac;
L_101895ba:;
  /* 101895ba push 1 */
  push32((uint32_t)(0x1u));
  /* 101895bc pop eax */
  EAX = (pop32());
  /* 101895bd pop esi */
  ESI = (pop32());
  /* 101895be ret  */
  ESPCHK(0x1018957au, _esp0);
  ESP += 4; return;
L_101895bf:;
  /* 101895bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101895c1 pop esi */
  ESI = (pop32());
  /* 101895c2 ret  */
  ESPCHK(0x1018957au, _esp0);
  ESP += 4; return;
}

/* FUN_100095c3 @ 0x101895c3 (86 bytes, 43 insns) */
void f_101895c3(void) {
  FTRACE(0x101895c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101895c3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101895c7 push ebx */
  push32((uint32_t)(EBX));
  /* 101895c8 push esi */
  push32((uint32_t)(ESI));
  /* 101895c9 push edi */
  push32((uint32_t)(EDI));
  /* 101895ca push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101895cc mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 101895d0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101895d1 pop ecx */
  ECX = (pop32());
  /* 101895d2 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101895d4 mov esi, eax */
  ESI = (EAX);
  /* 101895d6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 101895da cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101895db idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101895dd lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 101895e0 push edi */
  push32((uint32_t)(EDI));
  /* 101895e1 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101895e3 pop ecx */
  ECX = (pop32());
  /* 101895e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101895e6 pop eax */
  EAX = (pop32());
  /* 101895e7 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101895e9 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 101895eb push eax */
  push32((uint32_t)(EAX));
  /* 101895ec push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 101895ee call 0x1018c615 */
  push32(0x101895f3u); f_1018c615();
  /* 101895f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101895f6 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101895f7 js 0x10189615 */
  if (C.sf) goto L_10189615;
  /* 101895f9 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_101895fc:;
  /* 101895fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101895fe je 0x10189615 */
  if (C.zf) goto L_10189615;
  /* 10189600 push edi */
  push32((uint32_t)(EDI));
  /* 10189601 push 1 */
  push32((uint32_t)(0x1u));
  /* 10189603 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 10189605 call 0x1018c615 */
  push32(0x1018960au); f_1018c615();
  /* 1018960a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018960d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1018960e sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10189611 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10189613 jge 0x101895fc */
  if ((C.sf==C.of)) goto L_101895fc;
L_10189615:;
  /* 10189615 pop edi */
  EDI = (pop32());
  /* 10189616 pop esi */
  ESI = (pop32());
  /* 10189617 pop ebx */
  EBX = (pop32());
  /* 10189618 ret  */
  ESPCHK(0x101895c3u, _esp0);
  ESP += 4; return;
}

/* FUN_10009619 @ 0x10189619 (140 bytes, 71 insns) */
void f_10189619(void) {
  FTRACE(0x10189619u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10189619 push ebp */
  push32((uint32_t)(EBP));
  /* 1018961a mov ebp, esp */
  EBP = (ESP);
  /* 1018961c push ecx */
  push32((uint32_t)(ECX));
  /* 1018961d push ecx */
  push32((uint32_t)(ECX));
  /* 1018961e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10189621 push ebx */
  push32((uint32_t)(EBX));
  /* 10189622 push esi */
  push32((uint32_t)(ESI));
  /* 10189623 push edi */
  push32((uint32_t)(EDI));
  /* 10189624 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 10189627 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10189629 pop ecx */
  ECX = (pop32());
  /* 1018962a and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1018962e lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 10189631 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10189633 mov eax, ebx */
  EAX = (EBX);
  /* 10189635 pop esi */
  ESI = (pop32());
  /* 10189636 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10189637 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10189639 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1018963b mov ecx, eax */
  ECX = (EAX);
  /* 1018963d mov eax, ebx */
  EAX = (EBX);
  /* 1018963f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10189640 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10189642 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10189645 pop esi */
  ESI = (pop32());
  /* 10189646 push 1 */
  push32((uint32_t)(0x1u));
  /* 10189648 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1018964b lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 1018964e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10189651 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10189653 pop edx */
  EDX = (pop32());
  /* 10189654 mov ecx, esi */
  ECX = (ESI);
  /* 10189656 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10189658 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 1018965a je 0x1018967d */
  if (C.zf) goto L_1018967d;
  /* 1018965c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1018965d push ebx */
  push32((uint32_t)(EBX));
  /* 1018965e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10189661 call 0x1018957a */
  push32(0x10189666u); f_1018957a();
  /* 10189666 pop ecx */
  ECX = (pop32());
  /* 10189667 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10189669 pop ecx */
  ECX = (pop32());
  /* 1018966a jne 0x1018967a */
  if (!C.zf) goto L_1018967a;
  /* 1018966c push edi */
  push32((uint32_t)(EDI));
  /* 1018966d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10189670 call 0x101895c3 */
  push32(0x10189675u); f_101895c3();
  /* 10189675 pop ecx */
  ECX = (pop32());
  /* 10189676 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10189679 pop ecx */
  ECX = (pop32());
L_1018967a:;
  /* 1018967a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1018967d:;
  /* 1018967d or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10189680 mov ecx, esi */
  ECX = (ESI);
  /* 10189682 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10189684 push 3 */
  push32((uint32_t)(0x3u));
  /* 10189686 pop ecx */
  ECX = (pop32());
  /* 10189687 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10189689 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1018968c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1018968d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018968f jge 0x1018969d */
  if ((C.sf==C.of)) goto L_1018969d;
  /* 10189691 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10189694 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10189696 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10189699 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018969b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_1018969d:;
  /* 1018969d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101896a0 pop edi */
  EDI = (pop32());
  /* 101896a1 pop esi */
  ESI = (pop32());
  /* 101896a2 pop ebx */
  EBX = (pop32());
  /* 101896a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101896a4 ret  */
  ESPCHK(0x10189619u, _esp0);
  ESP += 4; return;
}

/* FUN_100096a5 @ 0x101896a5 (27 bytes, 13 insns) */
void f_101896a5(void) {
  FTRACE(0x101896a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101896a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101896a9 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101896ad push esi */
  push32((uint32_t)(ESI));
  /* 101896ae push 3 */
  push32((uint32_t)(0x3u));
  /* 101896b0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101896b2 pop edx */
  EDX = (pop32());
L_101896b3:;
  /* 101896b3 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 101896b5 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 101896b8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101896bb dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 101896bc jne 0x101896b3 */
  if (!C.zf) goto L_101896b3;
  /* 101896be pop esi */
  ESI = (pop32());
  /* 101896bf ret  */
  ESPCHK(0x101896a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100096c0 @ 0x101896c0 (12 bytes, 8 insns) */
void f_101896c0(void) {
  FTRACE(0x101896c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101896c0 push edi */
  push32((uint32_t)(EDI));
  /* 101896c1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 101896c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101896c7 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101896c8 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101896c9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101896ca pop edi */
  EDI = (pop32());
  /* 101896cb ret  */
  ESPCHK(0x101896c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096cc @ 0x101896cc (27 bytes, 13 insns) */
void f_101896cc(void) {
  FTRACE(0x101896ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101896cc mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101896d0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_101896d2:;
  /* 101896d2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101896d5 jne 0x101896e4 */
  if (!C.zf) goto L_101896e4;
  /* 101896d7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101896d8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101896db cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101896de jl 0x101896d2 */
  if ((C.sf!=C.of)) goto L_101896d2;
  /* 101896e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 101896e2 pop eax */
  EAX = (pop32());
  /* 101896e3 ret  */
  ESPCHK(0x101896ccu, _esp0);
  ESP += 4; return;
L_101896e4:;
  /* 101896e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101896e6 ret  */
  ESPCHK(0x101896ccu, _esp0);
  ESP += 4; return;
}

/* FUN_100096e7 @ 0x101896e7 (141 bytes, 64 insns) */
void f_101896e7(void) {
  FTRACE(0x101896e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101896e7 push ebp */
  push32((uint32_t)(EBP));
  /* 101896e8 mov ebp, esp */
  EBP = (ESP);
  /* 101896ea sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101896ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101896f0 push ebx */
  push32((uint32_t)(EBX));
  /* 101896f1 push esi */
  push32((uint32_t)(ESI));
  /* 101896f2 push edi */
  push32((uint32_t)(EDI));
  /* 101896f3 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101896f5 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 101896f8 pop ebx */
  EBX = (pop32());
  /* 101896f9 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 101896fc cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101896fd mov ecx, ebx */
  ECX = (EBX);
  /* 101896ff mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 10189706 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10189708 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1018970b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1018970e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1018970f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10189711 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 10189715 mov ecx, edx */
  ECX = (EDX);
  /* 10189717 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10189719 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018971b not esi */
  ESI = (~(ESI));
L_1018971d:;
  /* 1018971d mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1018971f mov ecx, eax */
  ECX = (EAX);
  /* 10189721 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10189723 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10189726 mov ecx, edx */
  ECX = (EDX);
  /* 10189728 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1018972a or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1018972d mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1018972f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10189732 mov ecx, ebx */
  ECX = (EBX);
  /* 10189734 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10189737 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10189739 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1018973c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1018973f jne 0x1018971d */
  if (!C.zf) goto L_1018971d;
  /* 10189741 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 10189744 push 2 */
  push32((uint32_t)(0x2u));
  /* 10189746 pop ebx */
  EBX = (pop32());
  /* 10189747 mov esi, edi */
  ESI = (EDI);
  /* 10189749 push 8 */
  push32((uint32_t)(0x8u));
  /* 1018974b pop ecx */
  ECX = (pop32());
  /* 1018974c shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_1018974f:;
  /* 1018974f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189751 jl 0x10189762 */
  if ((C.sf!=C.of)) goto L_10189762;
  /* 10189753 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10189756 mov eax, ecx */
  EAX = (ECX);
  /* 10189758 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018975a mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1018975d mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 10189760 jmp 0x10189769 */
  goto L_10189769;
L_10189762:;
  /* 10189762 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10189765 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_10189769:;
  /* 10189769 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1018976a sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018976d jns 0x1018974f */
  if (!C.sf) goto L_1018974f;
  /* 1018976f pop edi */
  EDI = (pop32());
  /* 10189770 pop esi */
  ESI = (pop32());
  /* 10189771 pop ebx */
  EBX = (pop32());
  /* 10189772 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10189773 ret  */
  ESPCHK(0x101896e7u, _esp0);
  ESP += 4; return;
}

/* FUN_10009774 @ 0x10189774 (364 bytes, 138 insns) */
void f_10189774(void) {
  FTRACE(0x10189774u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10189774 push ebp */
  push32((uint32_t)(EBP));
  /* 10189775 mov ebp, esp */
  EBP = (ESP);
  /* 10189777 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018977a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018977d push ebx */
  push32((uint32_t)(EBX));
  /* 1018977e push esi */
  push32((uint32_t)(ESI));
  /* 1018977f push edi */
  push32((uint32_t)(EDI));
  /* 10189780 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 10189784 mov ebx, ecx */
  EBX = (ECX);
  /* 10189786 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1018978c mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1018978f mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 10189792 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10189795 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 10189798 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 1018979b mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1018979e and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 101897a4 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101897aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101897ad shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 101897b0 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101897b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101897b9 jne 0x101897e1 */
  if (!C.zf) goto L_101897e1;
  /* 101897bb lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101897be xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101897c0 push eax */
  push32((uint32_t)(EAX));
  /* 101897c1 call 0x101896cc */
  push32(0x101897c6u); f_101896cc();
  /* 101897c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101897c8 pop ecx */
  ECX = (pop32());
  /* 101897c9 jne 0x101898a0 */
  if (!C.zf) goto L_101898a0;
  /* 101897cf lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101897d2 push eax */
  push32((uint32_t)(EAX));
  /* 101897d3 call 0x101896c0 */
  push32(0x101897d8u); f_101896c0();
  /* 101897d8 pop ecx */
  ECX = (pop32());
L_101897d9:;
  /* 101897d9 push 2 */
  push32((uint32_t)(0x2u));
L_101897db:;
  /* 101897db pop eax */
  EAX = (pop32());
  /* 101897dc jmp 0x101898a2 */
  goto L_101898a2;
L_101897e1:;
  /* 101897e1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101897e4 push eax */
  push32((uint32_t)(EAX));
  /* 101897e5 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 101897e8 push eax */
  push32((uint32_t)(EAX));
  /* 101897e9 call 0x101896a5 */
  push32(0x101897eeu); f_101896a5();
  /* 101897ee push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 101897f1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101897f4 push eax */
  push32((uint32_t)(EAX));
  /* 101897f5 call 0x10189619 */
  push32(0x101897fau); f_10189619();
  /* 101897fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101897fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101897ff je 0x10189802 */
  if (C.zf) goto L_10189802;
  /* 10189801 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10189802:;
  /* 10189802 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 10189805 mov ecx, eax */
  ECX = (EAX);
  /* 10189807 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018980a cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018980c jge 0x1018981a */
  if ((C.sf==C.of)) goto L_1018981a;
  /* 1018980e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10189811 push eax */
  push32((uint32_t)(EAX));
  /* 10189812 call 0x101896c0 */
  push32(0x10189817u); f_101896c0();
  /* 10189817 pop ecx */
  ECX = (pop32());
  /* 10189818 jmp 0x10189856 */
  goto L_10189856;
L_1018981a:;
  /* 1018981a cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018981c jg 0x1018985d */
  if ((!C.zf&&C.sf==C.of)) goto L_1018985d;
  /* 1018981e sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10189820 mov esi, eax */
  ESI = (EAX);
  /* 10189822 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10189825 push eax */
  push32((uint32_t)(EAX));
  /* 10189826 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10189829 push eax */
  push32((uint32_t)(EAX));
  /* 1018982a call 0x101896a5 */
  push32(0x1018982fu); f_101896a5();
  /* 1018982f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10189832 push esi */
  push32((uint32_t)(ESI));
  /* 10189833 push eax */
  push32((uint32_t)(EAX));
  /* 10189834 call 0x101896e7 */
  push32(0x10189839u); f_101896e7();
  /* 10189839 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 1018983c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1018983f push eax */
  push32((uint32_t)(EAX));
  /* 10189840 call 0x10189619 */
  push32(0x10189845u); f_10189619();
  /* 10189845 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 10189848 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10189849 push eax */
  push32((uint32_t)(EAX));
  /* 1018984a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1018984d push eax */
  push32((uint32_t)(EAX));
  /* 1018984e call 0x101896e7 */
  push32(0x10189853u); f_101896e7();
  /* 10189853 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10189856:;
  /* 10189856 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10189858 jmp 0x101897d9 */
  goto L_101897d9;
L_1018985d:;
  /* 1018985d cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018985f jl 0x10189889 */
  if ((C.sf!=C.of)) goto L_10189889;
  /* 10189861 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10189864 push eax */
  push32((uint32_t)(EAX));
  /* 10189865 call 0x101896c0 */
  push32(0x1018986au); f_101896c0();
  /* 1018986a push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 1018986d or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 10189871 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10189874 push eax */
  push32((uint32_t)(EAX));
  /* 10189875 call 0x101896e7 */
  push32(0x1018987au); f_101896e7();
  /* 1018987a mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 1018987d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10189880 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10189882 push 1 */
  push32((uint32_t)(0x1u));
  /* 10189884 jmp 0x101897db */
  goto L_101897db;
L_10189889:;
  /* 10189889 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 1018988c mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 1018988f and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 10189893 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10189896 push eax */
  push32((uint32_t)(EAX));
  /* 10189897 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10189899 call 0x101896e7 */
  push32(0x1018989eu); f_101896e7();
  /* 1018989e pop ecx */
  ECX = (pop32());
  /* 1018989f pop ecx */
  ECX = (pop32());
L_101898a0:;
  /* 101898a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101898a2:;
  /* 101898a2 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101898a4 pop ecx */
  ECX = (pop32());
  /* 101898a5 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101898a8 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 101898ab shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 101898ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101898b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 101898b2 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101898b4 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 101898ba or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 101898bc or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 101898bf cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101898c2 jne 0x101898d1 */
  if (!C.zf) goto L_101898d1;
  /* 101898c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101898c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 101898ca mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 101898cd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 101898cf jmp 0x101898db */
  goto L_101898db;
L_101898d1:;
  /* 101898d1 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101898d4 jne 0x101898db */
  if (!C.zf) goto L_101898db;
  /* 101898d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101898d9 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_101898db:;
  /* 101898db pop edi */
  EDI = (pop32());
  /* 101898dc pop esi */
  ESI = (pop32());
  /* 101898dd pop ebx */
  EBX = (pop32());
  /* 101898de leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101898df ret  */
  ESPCHK(0x10189774u, _esp0);
  ESP += 4; return;
}

/* FUN_100098e0 @ 0x101898e0 (22 bytes, 6 insns) */
void f_101898e0(void) {
  FTRACE(0x101898e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101898e0 push 0x10190c10 */
  push32((uint32_t)(0x10190c10u));
  /* 101898e5 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101898e9 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101898ed call 0x10189774 */
  push32(0x101898f2u); f_10189774();
  /* 101898f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101898f5 ret  */
  ESPCHK(0x101898e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100098f6 @ 0x101898f6 (22 bytes, 6 insns) */
void f_101898f6(void) {
  FTRACE(0x101898f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101898f6 push 0x10190c28 */
  push32((uint32_t)(0x10190c28u));
  /* 101898fb push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101898ff push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10189903 call 0x10189774 */
  push32(0x10189908u); f_10189774();
  /* 10189908 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018990b ret  */
  ESPCHK(0x101898f6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000990c @ 0x1018990c (45 bytes, 21 insns) */
void f_1018990c(void) {
  FTRACE(0x1018990cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018990c push ebp */
  push32((uint32_t)(EBP));
  /* 1018990d mov ebp, esp */
  EBP = (ESP);
  /* 1018990f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10189912 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10189914 push eax */
  push32((uint32_t)(EAX));
  /* 10189915 push eax */
  push32((uint32_t)(EAX));
  /* 10189916 push eax */
  push32((uint32_t)(EAX));
  /* 10189917 push eax */
  push32((uint32_t)(EAX));
  /* 10189918 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1018991b lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1018991e push eax */
  push32((uint32_t)(EAX));
  /* 1018991f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10189922 push eax */
  push32((uint32_t)(EAX));
  /* 10189923 call 0x1018c7b6 */
  push32(0x10189928u); f_1018c7b6();
  /* 10189928 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1018992b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1018992e push eax */
  push32((uint32_t)(EAX));
  /* 1018992f call 0x101898e0 */
  push32(0x10189934u); f_101898e0();
  /* 10189934 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10189937 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10189938 ret  */
  ESPCHK(0x1018990cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009939 @ 0x10189939 (45 bytes, 21 insns) */
void f_10189939(void) {
  FTRACE(0x10189939u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10189939 push ebp */
  push32((uint32_t)(EBP));
  /* 1018993a mov ebp, esp */
  EBP = (ESP);
  /* 1018993c sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018993f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10189941 push eax */
  push32((uint32_t)(EAX));
  /* 10189942 push eax */
  push32((uint32_t)(EAX));
  /* 10189943 push eax */
  push32((uint32_t)(EAX));
  /* 10189944 push eax */
  push32((uint32_t)(EAX));
  /* 10189945 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10189948 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1018994b push eax */
  push32((uint32_t)(EAX));
  /* 1018994c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1018994f push eax */
  push32((uint32_t)(EAX));
  /* 10189950 call 0x1018c7b6 */
  push32(0x10189955u); f_1018c7b6();
  /* 10189955 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10189958 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1018995b push eax */
  push32((uint32_t)(EAX));
  /* 1018995c call 0x101898f6 */
  push32(0x10189961u); f_101898f6();
  /* 10189961 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10189964 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10189965 ret  */
  ESPCHK(0x10189939u, _esp0);
  ESP += 4; return;
}

/* FUN_10009966 @ 0x10189966 (119 bytes, 57 insns) */
void f_10189966(void) {
  FTRACE(0x10189966u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10189966 push ebp */
  push32((uint32_t)(EBP));
  /* 10189967 mov ebp, esp */
  EBP = (ESP);
  /* 10189969 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1018996c push ebx */
  push32((uint32_t)(EBX));
  /* 1018996d mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 10189970 push esi */
  push32((uint32_t)(ESI));
  /* 10189971 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10189974 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 10189977 push edi */
  push32((uint32_t)(EDI));
  /* 10189978 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 1018997b mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 1018997e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10189980 mov eax, edi */
  EAX = (EDI);
  /* 10189982 jle 0x101899a3 */
  if ((C.zf||C.sf!=C.of)) goto L_101899a3;
  /* 10189984 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10189987 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10189989:;
  /* 10189989 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1018998b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1018998d je 0x10189995 */
  if (C.zf) goto L_10189995;
  /* 1018998f movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 10189992 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10189993 jmp 0x10189998 */
  goto L_10189998;
L_10189995:;
  /* 10189995 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10189997 pop edx */
  EDX = (pop32());
L_10189998:;
  /* 10189998 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1018999a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1018999b dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 1018999e jne 0x10189989 */
  if (!C.zf) goto L_10189989;
  /* 101899a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_101899a3:;
  /* 101899a3 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 101899a6 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101899a8 jl 0x101899bc */
  if ((C.sf!=C.of)) goto L_101899bc;
  /* 101899aa cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101899ad jl 0x101899bc */
  if ((C.sf!=C.of)) goto L_101899bc;
L_101899af:;
  /* 101899af dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101899b0 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101899b3 jne 0x101899ba */
  if (!C.zf) goto L_101899ba;
  /* 101899b5 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 101899b8 jmp 0x101899af */
  goto L_101899af;
L_101899ba:;
  /* 101899ba inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_101899bc:;
  /* 101899bc cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101899bf jne 0x101899c6 */
  if (!C.zf) goto L_101899c6;
  /* 101899c1 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 101899c4 jmp 0x101899d8 */
  goto L_101899d8;
L_101899c6:;
  /* 101899c6 push edi */
  push32((uint32_t)(EDI));
  /* 101899c7 call 0x10189040 */
  push32(0x101899ccu); f_10189040();
  /* 101899cc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101899cd push eax */
  push32((uint32_t)(EAX));
  /* 101899ce push edi */
  push32((uint32_t)(EDI));
  /* 101899cf push esi */
  push32((uint32_t)(ESI));
  /* 101899d0 call 0x10189c40 */
  push32(0x101899d5u); f_10189c40();
  /* 101899d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101899d8:;
  /* 101899d8 pop edi */
  EDI = (pop32());
  /* 101899d9 pop esi */
  ESI = (pop32());
  /* 101899da pop ebx */
  EBX = (pop32());
  /* 101899db pop ebp */
  EBP = (pop32());
  /* 101899dc ret  */
  ESPCHK(0x10189966u, _esp0);
  ESP += 4; return;
}

/* FUN_100099dd @ 0x101899dd (92 bytes, 41 insns) */
void f_101899dd(void) {
  FTRACE(0x101899ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101899dd push ebp */
  push32((uint32_t)(EBP));
  /* 101899de mov ebp, esp */
  EBP = (ESP);
  /* 101899e0 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101899e3 push esi */
  push32((uint32_t)(ESI));
  /* 101899e4 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101899e7 push edi */
  push32((uint32_t)(EDI));
  /* 101899e8 push eax */
  push32((uint32_t)(EAX));
  /* 101899e9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101899ec push eax */
  push32((uint32_t)(EAX));
  /* 101899ed call 0x10189a39 */
  push32(0x101899f2u); f_10189a39();
  /* 101899f2 pop ecx */
  ECX = (pop32());
  /* 101899f3 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 101899f6 pop ecx */
  ECX = (pop32());
  /* 101899f7 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 101899fa push eax */
  push32((uint32_t)(EAX));
  /* 101899fb push 0 */
  push32((uint32_t)(0x0u));
  /* 101899fd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 101899ff sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10189a02 mov edi, esp */
  EDI = (ESP);
  /* 10189a04 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10189a05 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10189a06 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 10189a08 call 0x1018cc87 */
  push32(0x10189a0du); f_1018cc87();
  /* 10189a0d mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10189a10 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 10189a13 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 10189a16 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 10189a1a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10189a1c movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 10189a20 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 10189a23 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 10189a26 push eax */
  push32((uint32_t)(EAX));
  /* 10189a27 push edi */
  push32((uint32_t)(EDI));
  /* 10189a28 call 0x10189af0 */
  push32(0x10189a2du); f_10189af0();
  /* 10189a2d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10189a30 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 10189a33 mov eax, esi */
  EAX = (ESI);
  /* 10189a35 pop edi */
  EDI = (pop32());
  /* 10189a36 pop esi */
  ESI = (pop32());
  /* 10189a37 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10189a38 ret  */
  ESPCHK(0x101899ddu, _esp0);
  ESP += 4; return;
}

/* FUN_10009a39 @ 0x10189a39 (182 bytes, 70 insns) */
void f_10189a39(void) {
  FTRACE(0x10189a39u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10189a39 push ebp */
  push32((uint32_t)(EBP));
  /* 10189a3a mov ebp, esp */
  EBP = (ESP);
  /* 10189a3c push ecx */
  push32((uint32_t)(ECX));
  /* 10189a3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10189a40 push ebx */
  push32((uint32_t)(EBX));
  /* 10189a41 push esi */
  push32((uint32_t)(ESI));
  /* 10189a42 push edi */
  push32((uint32_t)(EDI));
  /* 10189a43 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 10189a47 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 10189a4c mov ecx, eax */
  ECX = (EAX);
  /* 10189a4e and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10189a53 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10189a56 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10189a58 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10189a5b mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10189a5e mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 10189a60 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 10189a63 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10189a68 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10189a6d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10189a6f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 10189a72 je 0x10189a87 */
  if (C.zf) goto L_10189a87;
  /* 10189a74 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189a76 je 0x10189a80 */
  if (C.zf) goto L_10189a80;
  /* 10189a78 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 10189a7e jmp 0x10189aa8 */
  goto L_10189aa8;
L_10189a80:;
  /* 10189a80 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 10189a85 jmp 0x10189aa8 */
  goto L_10189aa8;
L_10189a87:;
  /* 10189a87 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10189a89 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189a8b jne 0x10189a9f */
  if (!C.zf) goto L_10189a9f;
  /* 10189a8d cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189a8f jne 0x10189a9f */
  if (!C.zf) goto L_10189a9f;
  /* 10189a91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10189a94 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 10189a97 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 10189a99 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 10189a9d jmp 0x10189aea */
  goto L_10189aea;
L_10189a9f:;
  /* 10189a9f lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 10189aa5 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_10189aa8:;
  /* 10189aa8 mov ecx, edx */
  ECX = (EDX);
  /* 10189aaa shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 10189aad shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 10189ab0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10189ab2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10189ab5 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 10189ab8 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 10189abb mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10189abe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10189ac0:;
  /* 10189ac0 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 10189ac2 jne 0x10189ae1 */
  if (!C.zf) goto L_10189ae1;
  /* 10189ac4 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10189ac6 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10189ac8 mov ebx, edx */
  EBX = (EDX);
  /* 10189aca shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 10189acd or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 10189acf lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 10189ad2 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10189ad4 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 10189ad7 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10189add mov ecx, ebx */
  ECX = (EBX);
  /* 10189adf jmp 0x10189ac0 */
  goto L_10189ac0;
L_10189ae1:;
  /* 10189ae1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10189ae4 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10189ae6 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_10189aea:;
  /* 10189aea pop edi */
  EDI = (pop32());
  /* 10189aeb pop esi */
  ESI = (pop32());
  /* 10189aec pop ebx */
  EBX = (pop32());
  /* 10189aed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10189aee ret  */
  ESPCHK(0x10189a39u, _esp0);
  ESP += 4; return;
}

/* FUN_10009af0 @ 0x10189af0 (7 bytes, 3 insns) */
void f_10189af0(void) {
  FTRACE(0x10189af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10189af0 push edi */
  push32((uint32_t)(EDI));
  /* 10189af1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10189af5 jmp 0x10189b61 */
  jmp_ind(0x10189b61u); return;
}

/* FUN_10009b00 @ 0x10189b00 (224 bytes, 84 insns) */
void f_10189b00(void) {
  FTRACE(0x10189b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10189b00 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10189b04 push edi */
  push32((uint32_t)(EDI));
  /* 10189b05 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10189b0b je 0x10189b1c */
  if (C.zf) goto L_10189b1c;
L_10189b0d:;
  /* 10189b0d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10189b0f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10189b10 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10189b12 je 0x10189b4f */
  if (C.zf) goto L_10189b4f;
  /* 10189b14 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10189b1a jne 0x10189b0d */
  if (!C.zf) goto L_10189b0d;
L_10189b1c:;
  /* 10189b1c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10189b1e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10189b23 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10189b25 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10189b28 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10189b2a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10189b2d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10189b32 je 0x10189b1c */
  if (C.zf) goto L_10189b1c;
  /* 10189b34 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10189b37 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10189b39 je 0x10189b5e */
  if (C.zf) goto L_10189b5e;
  /* 10189b3b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10189b3d je 0x10189b59 */
  if (C.zf) goto L_10189b59;
  /* 10189b3f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10189b44 je 0x10189b54 */
  if (C.zf) goto L_10189b54;
  /* 10189b46 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10189b4b je 0x10189b4f */
  if (C.zf) goto L_10189b4f;
  /* 10189b4d jmp 0x10189b1c */
  goto L_10189b1c;
L_10189b4f:;
  /* 10189b4f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10189b52 jmp 0x10189b61 */
  goto L_10189b61;
L_10189b54:;
  /* 10189b54 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10189b57 jmp 0x10189b61 */
  goto L_10189b61;
L_10189b59:;
  /* 10189b59 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10189b5c jmp 0x10189b61 */
  goto L_10189b61;
L_10189b5e:;
  /* 10189b5e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10189b61:;
  /* 10189b61 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10189b65 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10189b6b je 0x10189b86 */
  if (C.zf) goto L_10189b86;
L_10189b6d:;
  /* 10189b6d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10189b6f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10189b70 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10189b72 je 0x10189bd8 */
  if (C.zf) goto L_10189bd8;
  /* 10189b74 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10189b76 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10189b77 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10189b7d jne 0x10189b6d */
  if (!C.zf) goto L_10189b6d;
  /* 10189b7f jmp 0x10189b86 */
  goto L_10189b86;
L_10189b81:;
  /* 10189b81 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10189b83 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10189b86:;
  /* 10189b86 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10189b8b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10189b8d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10189b8f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10189b92 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10189b94 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10189b96 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10189b99 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10189b9e je 0x10189b81 */
  if (C.zf) goto L_10189b81;
  /* 10189ba0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10189ba2 je 0x10189bd8 */
  if (C.zf) goto L_10189bd8;
  /* 10189ba4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10189ba6 je 0x10189bcf */
  if (C.zf) goto L_10189bcf;
  /* 10189ba8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10189bae je 0x10189bc2 */
  if (C.zf) goto L_10189bc2;
  /* 10189bb0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10189bb6 je 0x10189bba */
  if (C.zf) goto L_10189bba;
  /* 10189bb8 jmp 0x10189b81 */
  goto L_10189b81;
L_10189bba:;
  /* 10189bba mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10189bbc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10189bc0 pop edi */
  EDI = (pop32());
  /* 10189bc1 ret  */
  ESPCHK(0x10189b00u, _esp0);
  ESP += 4; return;
L_10189bc2:;
  /* 10189bc2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10189bc5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10189bc9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10189bcd pop edi */
  EDI = (pop32());
  /* 10189bce ret  */
  ESPCHK(0x10189b00u, _esp0);
  ESP += 4; return;
L_10189bcf:;
  /* 10189bcf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10189bd2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10189bd6 pop edi */
  EDI = (pop32());
  /* 10189bd7 ret  */
  ESPCHK(0x10189b00u, _esp0);
  ESP += 4; return;
L_10189bd8:;
  /* 10189bd8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10189bda mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10189bde pop edi */
  EDI = (pop32());
  /* 10189bdf ret  */
  ESPCHK(0x10189b00u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10189be0 (88 bytes, 40 insns) */
void f_10189be0(void) {
  FTRACE(0x10189be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10189be0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10189be4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10189be8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10189bea je 0x10189c33 */
  if (C.zf) goto L_10189c33;
  /* 10189bec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10189bee mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10189bf2 push edi */
  push32((uint32_t)(EDI));
  /* 10189bf3 mov edi, ecx */
  EDI = (ECX);
  /* 10189bf5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189bf8 jb 0x10189c27 */
  if (C.cf) goto L_10189c27;
  /* 10189bfa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10189bfc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10189bff je 0x10189c09 */
  if (C.zf) goto L_10189c09;
  /* 10189c01 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10189c03:;
  /* 10189c03 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10189c05 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10189c06 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10189c07 jne 0x10189c03 */
  if (!C.zf) goto L_10189c03;
L_10189c09:;
  /* 10189c09 mov ecx, eax */
  ECX = (EAX);
  /* 10189c0b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10189c0e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10189c10 mov ecx, eax */
  ECX = (EAX);
  /* 10189c12 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10189c15 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10189c17 mov ecx, edx */
  ECX = (EDX);
  /* 10189c19 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10189c1c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10189c1f je 0x10189c27 */
  if (C.zf) goto L_10189c27;
  /* 10189c21 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10189c23 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10189c25 je 0x10189c2d */
  if (C.zf) goto L_10189c2d;
L_10189c27:;
  /* 10189c27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10189c29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10189c2a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10189c2b jne 0x10189c27 */
  if (!C.zf) goto L_10189c27;
L_10189c2d:;
  /* 10189c2d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10189c31 pop edi */
  EDI = (pop32());
  /* 10189c32 ret  */
  ESPCHK(0x10189be0u, _esp0);
  ESP += 4; return;
L_10189c33:;
  /* 10189c33 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10189c37 ret  */
  ESPCHK(0x10189be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c40 @ 0x10189c40 (664 bytes, 266 insns) [15 switch table(s)] */
void f_10189c40(void) {
  FTRACE(0x10189c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10189c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10189c41 mov ebp, esp */
  EBP = (ESP);
  /* 10189c43 push edi */
  push32((uint32_t)(EDI));
  /* 10189c44 push esi */
  push32((uint32_t)(ESI));
  /* 10189c45 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10189c48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10189c4b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10189c4e mov eax, ecx */
  EAX = (ECX);
  /* 10189c50 mov edx, ecx */
  EDX = (ECX);
  /* 10189c52 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10189c54 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189c56 jbe 0x10189c60 */
  if ((C.cf||C.zf)) goto L_10189c60;
  /* 10189c58 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189c5a jb 0x10189dd8 */
  if (C.cf) goto L_10189dd8;
L_10189c60:;
  /* 10189c60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10189c66 jne 0x10189c7c */
  if (!C.zf) goto L_10189c7c;
  /* 10189c68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10189c6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10189c6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189c71 jb 0x10189c9c */
  if (C.cf) goto L_10189c9c;
  /* 10189c73 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10189c75 jmp dword ptr [edx*4 + 0x10189d88] */
  switch (EDX) {
    case 0: goto L_10189d98;
    case 1: goto L_10189da0;
    case 2: goto L_10189dac;
    case 3: goto L_10189dc0;
    default: x86_unimpl("switch@0x10189c75 out of table"); return;
  }
L_10189c7c:;
  /* 10189c7c mov eax, edi */
  EAX = (EDI);
  /* 10189c7e mov edx, 3 */
  EDX = (0x3u);
  /* 10189c83 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10189c86 jb 0x10189c94 */
  if (C.cf) goto L_10189c94;
  /* 10189c88 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10189c8b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10189c8d jmp dword ptr [eax*4 + 0x10189ca0] */
  switch (EAX) {
    case 1: goto L_10189cb0;
    case 2: goto L_10189cdc;
    case 3: goto L_10189d00;
    default: x86_unimpl("switch@0x10189c8d out of table"); return;
  }
L_10189c94:;
  /* 10189c94 jmp dword ptr [ecx*4 + 0x10189d98] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10189d98)))); return;
  /* 10189c9b nop  */
  /* nop */
L_10189c9c:;
  /* 10189c9c jmp dword ptr [ecx*4 + 0x10189d1c] */
  switch (ECX) {
    case 0: goto L_10189d7f;
    case 1: goto L_10189d6c;
    case 2: goto L_10189d64;
    case 3: goto L_10189d5c;
    case 4: goto L_10189d54;
    case 5: goto L_10189d4c;
    case 6: goto L_10189d44;
    case 7: goto L_10189d3c;
    default: x86_unimpl("switch@0x10189c9c out of table"); return;
  }
  /* 10189ca3 nop  */
  /* nop */
L_10189cb0:;
  /* 10189cb0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10189cb2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10189cb4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10189cb6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10189cb9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10189cbc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10189cbf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10189cc2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10189cc5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10189cc8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10189ccb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189cce jb 0x10189c9c */
  if (C.cf) goto L_10189c9c;
  /* 10189cd0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10189cd2 jmp dword ptr [edx*4 + 0x10189d88] */
  switch (EDX) {
    case 0: goto L_10189d98;
    case 1: goto L_10189da0;
    case 2: goto L_10189dac;
    case 3: goto L_10189dc0;
    default: x86_unimpl("switch@0x10189cd2 out of table"); return;
  }
  /* 10189cd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10189cdc:;
  /* 10189cdc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10189cde mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10189ce0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10189ce2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10189ce5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10189ce8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10189ceb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10189cee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10189cf1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189cf4 jb 0x10189c9c */
  if (C.cf) goto L_10189c9c;
  /* 10189cf6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10189cf8 jmp dword ptr [edx*4 + 0x10189d88] */
  switch (EDX) {
    case 0: goto L_10189d98;
    case 1: goto L_10189da0;
    case 2: goto L_10189dac;
    case 3: goto L_10189dc0;
    default: x86_unimpl("switch@0x10189cf8 out of table"); return;
  }
  /* 10189cff nop  */
  /* nop */
L_10189d00:;
  /* 10189d00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10189d02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10189d04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10189d06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10189d07 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10189d0a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10189d0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189d0e jb 0x10189c9c */
  if (C.cf) goto L_10189c9c;
  /* 10189d10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10189d12 jmp dword ptr [edx*4 + 0x10189d88] */
  switch (EDX) {
    case 0: goto L_10189d98;
    case 1: goto L_10189da0;
    case 2: goto L_10189dac;
    case 3: goto L_10189dc0;
    default: x86_unimpl("switch@0x10189d12 out of table"); return;
  }
  /* 10189d19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10189d3c:;
  /* 10189d3c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10189d40 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10189d44:;
  /* 10189d44 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10189d48 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10189d4c:;
  /* 10189d4c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10189d50 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10189d54:;
  /* 10189d54 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10189d58 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10189d5c:;
  /* 10189d5c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10189d60 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10189d64:;
  /* 10189d64 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10189d68 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10189d6c:;
  /* 10189d6c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10189d70 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10189d74 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10189d7b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10189d7d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10189d7f:;
  /* 10189d7f jmp dword ptr [edx*4 + 0x10189d88] */
  switch (EDX) {
    case 0: goto L_10189d98;
    case 1: goto L_10189da0;
    case 2: goto L_10189dac;
    case 3: goto L_10189dc0;
    default: x86_unimpl("switch@0x10189d7f out of table"); return;
  }
  /* 10189d86 mov edi, edi */
  EDI = (EDI);
L_10189d98:;
  /* 10189d98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10189d9b pop esi */
  ESI = (pop32());
  /* 10189d9c pop edi */
  EDI = (pop32());
  /* 10189d9d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10189d9e ret  */
  ESPCHK(0x10189c40u, _esp0);
  ESP += 4; return;
  /* 10189d9f nop  */
  /* nop */
L_10189da0:;
  /* 10189da0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10189da2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10189da4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10189da7 pop esi */
  ESI = (pop32());
  /* 10189da8 pop edi */
  EDI = (pop32());
  /* 10189da9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10189daa ret  */
  ESPCHK(0x10189c40u, _esp0);
  ESP += 4; return;
  /* 10189dab nop  */
  /* nop */
L_10189dac:;
  /* 10189dac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10189dae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10189db0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10189db3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10189db6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10189db9 pop esi */
  ESI = (pop32());
  /* 10189dba pop edi */
  EDI = (pop32());
  /* 10189dbb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10189dbc ret  */
  ESPCHK(0x10189c40u, _esp0);
  ESP += 4; return;
  /* 10189dbd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10189dc0:;
  /* 10189dc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10189dc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10189dc4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10189dc7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10189dca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10189dcd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10189dd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10189dd3 pop esi */
  ESI = (pop32());
  /* 10189dd4 pop edi */
  EDI = (pop32());
  /* 10189dd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10189dd6 ret  */
  ESPCHK(0x10189c40u, _esp0);
  ESP += 4; return;
  /* 10189dd7 nop  */
  /* nop */
L_10189dd8:;
  /* 10189dd8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10189ddc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10189de0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10189de6 jne 0x10189e0c */
  if (!C.zf) goto L_10189e0c;
  /* 10189de8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10189deb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10189dee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189df1 jb 0x10189e00 */
  if (C.cf) goto L_10189e00;
  /* 10189df3 std  */
  C.df=1;
  /* 10189df4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10189df6 cld  */
  C.df=0;
  /* 10189df7 jmp dword ptr [edx*4 + 0x10189f20] */
  switch (EDX) {
    case 0: goto L_10189f30;
    case 1: goto L_10189f38;
    case 2: goto L_10189f48;
    case 3: goto L_10189f5c;
    default: x86_unimpl("switch@0x10189df7 out of table"); return;
  }
  /* 10189dfe mov edi, edi */
  EDI = (EDI);
L_10189e00:;
  /* 10189e00 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10189e02 jmp dword ptr [ecx*4 + 0x10189ed0] */
  switch (ECX) {
    case 0: goto L_10189f17;
    default: x86_unimpl("switch@0x10189e02 out of table"); return;
  }
  /* 10189e09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10189e0c:;
  /* 10189e0c mov eax, edi */
  EAX = (EDI);
  /* 10189e0e mov edx, 3 */
  EDX = (0x3u);
  /* 10189e13 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189e16 jb 0x10189e24 */
  if (C.cf) goto L_10189e24;
  /* 10189e18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10189e1b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10189e1d jmp dword ptr [eax*4 + 0x10189e28] */
  switch (EAX) {
    case 1: goto L_10189e38;
    case 2: goto L_10189e58;
    case 3: goto L_10189e80;
    default: x86_unimpl("switch@0x10189e1d out of table"); return;
  }
L_10189e24:;
  /* 10189e24 jmp dword ptr [ecx*4 + 0x10189f20] */
  switch (ECX) {
    case 0: goto L_10189f30;
    case 1: goto L_10189f38;
    case 2: goto L_10189f48;
    case 3: goto L_10189f5c;
    default: x86_unimpl("switch@0x10189e24 out of table"); return;
  }
  /* 10189e2b nop  */
  /* nop */
L_10189e38:;
  /* 10189e38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10189e3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10189e3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10189e40 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10189e41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10189e44 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10189e45 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189e48 jb 0x10189e00 */
  if (C.cf) goto L_10189e00;
  /* 10189e4a std  */
  C.df=1;
  /* 10189e4b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10189e4d cld  */
  C.df=0;
  /* 10189e4e jmp dword ptr [edx*4 + 0x10189f20] */
  switch (EDX) {
    case 0: goto L_10189f30;
    case 1: goto L_10189f38;
    case 2: goto L_10189f48;
    case 3: goto L_10189f5c;
    default: x86_unimpl("switch@0x10189e4e out of table"); return;
  }
  /* 10189e55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10189e58:;
  /* 10189e58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10189e5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10189e5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10189e60 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10189e63 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10189e66 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10189e69 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10189e6c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10189e6f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189e72 jb 0x10189e00 */
  if (C.cf) goto L_10189e00;
  /* 10189e74 std  */
  C.df=1;
  /* 10189e75 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10189e77 cld  */
  C.df=0;
  /* 10189e78 jmp dword ptr [edx*4 + 0x10189f20] */
  switch (EDX) {
    case 0: goto L_10189f30;
    case 1: goto L_10189f38;
    case 2: goto L_10189f48;
    case 3: goto L_10189f5c;
    default: x86_unimpl("switch@0x10189e78 out of table"); return;
  }
  /* 10189e7f nop  */
  /* nop */
L_10189e80:;
  /* 10189e80 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10189e83 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10189e85 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10189e88 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10189e8b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10189e8e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10189e91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10189e94 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10189e97 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10189e9a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10189e9d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189ea0 jb 0x10189e00 */
  if (C.cf) goto L_10189e00;
  /* 10189ea6 std  */
  C.df=1;
  /* 10189ea7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10189ea9 cld  */
  C.df=0;
  /* 10189eaa jmp dword ptr [edx*4 + 0x10189f20] */
  switch (EDX) {
    case 0: goto L_10189f30;
    case 1: goto L_10189f38;
    case 2: goto L_10189f48;
    case 3: goto L_10189f5c;
    default: x86_unimpl("switch@0x10189eaa out of table"); return;
  }
  /* 10189eb1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10189eb4 aam 0x9e */
  x86_unimpl("aam @ 0x10189eb4");
  /* 10189eb6 sbb byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a-_b-C.cf; w8((uint32_t)(EAX), (_r)); fl_sub(_a,_b,_r,8); }
  /* 10189eb8 fcomp qword ptr [esi - 0x611befe8] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ESI + -0x611befe8)));
  (void)fpu_pop();
  /* 10189ebe sbb byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a-_b-C.cf; w8((uint32_t)(EAX), (_r)); fl_sub(_a,_b,_r,8); }
  /* 10189ec0 in al, dx */
  x86_unimpl("in @ 0x10189ec0");
  /* 10189ec1 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10189ec2 sbb byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a-_b-C.cf; w8((uint32_t)(EAX), (_r)); fl_sub(_a,_b,_r,8); }
  /* 10189ec4 hlt  */
  x86_unimpl("hlt @ 0x10189ec4");
  /* 10189ec5 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10189ec6 sbb byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a-_b-C.cf; w8((uint32_t)(EAX), (_r)); fl_sub(_a,_b,_r,8); }
  /* 10189ec8 cld  */
  C.df=0;
  /* 10189ec9 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10189eca sbb byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a-_b-C.cf; w8((uint32_t)(EAX), (_r)); fl_sub(_a,_b,_r,8); }
  /* 10189ecc add al, 0x9f */
  { uint32_t _a=(AL),_b=(0x9fu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10189ece sbb byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a-_b-C.cf; w8((uint32_t)(EAX), (_r)); fl_sub(_a,_b,_r,8); }
  /* 10189ed4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10189ed8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10189edc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10189ee0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10189ee4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10189ee8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10189eec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10189ef0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10189ef4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10189ef8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10189efc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10189f00 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10189f04 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10189f08 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10189f0c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10189f13 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10189f15 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10189f17:;
  /* 10189f17 jmp dword ptr [edx*4 + 0x10189f20] */
  switch (EDX) {
    case 0: goto L_10189f30;
    case 1: goto L_10189f38;
    case 2: goto L_10189f48;
    case 3: goto L_10189f5c;
    default: x86_unimpl("switch@0x10189f17 out of table"); return;
  }
  /* 10189f1e mov edi, edi */
  EDI = (EDI);
L_10189f30:;
  /* 10189f30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10189f33 pop esi */
  ESI = (pop32());
  /* 10189f34 pop edi */
  EDI = (pop32());
  /* 10189f35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10189f36 ret  */
  ESPCHK(0x10189c40u, _esp0);
  ESP += 4; return;
  /* 10189f37 nop  */
  /* nop */
L_10189f38:;
  /* 10189f38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10189f3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10189f3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10189f41 pop esi */
  ESI = (pop32());
  /* 10189f42 pop edi */
  EDI = (pop32());
  /* 10189f43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10189f44 ret  */
  ESPCHK(0x10189c40u, _esp0);
  ESP += 4; return;
  /* 10189f45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10189f48:;
  /* 10189f48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10189f4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10189f4e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10189f51 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10189f54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10189f57 pop esi */
  ESI = (pop32());
  /* 10189f58 pop edi */
  EDI = (pop32());
  /* 10189f59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10189f5a ret  */
  ESPCHK(0x10189c40u, _esp0);
  ESP += 4; return;
  /* 10189f5b nop  */
  /* nop */
L_10189f5c:;
  /* 10189f5c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10189f5f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10189f62 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10189f65 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10189f68 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10189f6b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10189f6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10189f71 pop esi */
  ESI = (pop32());
  /* 10189f72 pop edi */
  EDI = (pop32());
  /* 10189f73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10189f74 ret  */
  ESPCHK(0x10189c40u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10189f75 (9 bytes, 4 insns) */
void f_10189f75(void) {
  FTRACE(0x10189f75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10189f75 push 2 */
  push32((uint32_t)(0x2u));
  /* 10189f77 call 0x101870b1 */
  push32(0x10189f7cu); f_101870b1();
  /* 10189f7c pop ecx */
  ECX = (pop32());
  /* 10189f7d ret  */
  ESPCHK(0x10189f75u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f7e @ 0x10189f7e (41 bytes, 12 insns) */
void f_10189f7e(void) {
  FTRACE(0x10189f7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10189f7e push esi */
  push32((uint32_t)(ESI));
  /* 10189f7f mov esi, dword ptr [0x1018e094] */
  ESI = (r32((uint32_t)(0x1018e094)));
  /* 10189f85 push dword ptr [0x10190c84] */
  push32((uint32_t)(r32((uint32_t)(0x10190c84))));
  /* 10189f8b call esi */
  call_ind((uint32_t)(ESI), 0x10189f8du);
  /* 10189f8d push dword ptr [0x10190c74] */
  push32((uint32_t)(r32((uint32_t)(0x10190c74))));
  /* 10189f93 call esi */
  call_ind((uint32_t)(ESI), 0x10189f95u);
  /* 10189f95 push dword ptr [0x10190c64] */
  push32((uint32_t)(r32((uint32_t)(0x10190c64))));
  /* 10189f9b call esi */
  call_ind((uint32_t)(ESI), 0x10189f9du);
  /* 10189f9d push dword ptr [0x10190c44] */
  push32((uint32_t)(r32((uint32_t)(0x10190c44))));
  /* 10189fa3 call esi */
  call_ind((uint32_t)(ESI), 0x10189fa5u);
  /* 10189fa5 pop esi */
  ESI = (pop32());
  /* 10189fa6 ret  */
  ESPCHK(0x10189f7eu, _esp0);
  ESP += 4; return;
}

/* FUN_10009fa7 @ 0x10189fa7 (108 bytes, 34 insns) */
void f_10189fa7(void) {
  FTRACE(0x10189fa7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10189fa7 push esi */
  push32((uint32_t)(ESI));
  /* 10189fa8 push edi */
  push32((uint32_t)(EDI));
  /* 10189fa9 mov edi, dword ptr [0x1018e050] */
  EDI = (r32((uint32_t)(0x1018e050)));
  /* 10189faf mov esi, 0x10190c40 */
  ESI = (0x10190c40u);
L_10189fb4:;
  /* 10189fb4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10189fb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10189fb8 je 0x10189fe5 */
  if (C.zf) goto L_10189fe5;
  /* 10189fba cmp esi, 0x10190c84 */
  { uint32_t _a=(ESI),_b=(0x10190c84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189fc0 je 0x10189fe5 */
  if (C.zf) goto L_10189fe5;
  /* 10189fc2 cmp esi, 0x10190c74 */
  { uint32_t _a=(ESI),_b=(0x10190c74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189fc8 je 0x10189fe5 */
  if (C.zf) goto L_10189fe5;
  /* 10189fca cmp esi, 0x10190c64 */
  { uint32_t _a=(ESI),_b=(0x10190c64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189fd0 je 0x10189fe5 */
  if (C.zf) goto L_10189fe5;
  /* 10189fd2 cmp esi, 0x10190c44 */
  { uint32_t _a=(ESI),_b=(0x10190c44u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189fd8 je 0x10189fe5 */
  if (C.zf) goto L_10189fe5;
  /* 10189fda push eax */
  push32((uint32_t)(EAX));
  /* 10189fdb call edi */
  call_ind((uint32_t)(EDI), 0x10189fddu);
  /* 10189fdd push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10189fdf call 0x1018a1c6 */
  push32(0x10189fe4u); f_1018a1c6();
  /* 10189fe4 pop ecx */
  ECX = (pop32());
L_10189fe5:;
  /* 10189fe5 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10189fe8 cmp esi, 0x10190d00 */
  { uint32_t _a=(ESI),_b=(0x10190d00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10189fee jl 0x10189fb4 */
  if ((C.sf!=C.of)) goto L_10189fb4;
  /* 10189ff0 push dword ptr [0x10190c64] */
  push32((uint32_t)(r32((uint32_t)(0x10190c64))));
  /* 10189ff6 call edi */
  call_ind((uint32_t)(EDI), 0x10189ff8u);
  /* 10189ff8 push dword ptr [0x10190c74] */
  push32((uint32_t)(r32((uint32_t)(0x10190c74))));
  /* 10189ffe call edi */
  call_ind((uint32_t)(EDI), 0x1018a000u);
  /* 1018a000 push dword ptr [0x10190c84] */
  push32((uint32_t)(r32((uint32_t)(0x10190c84))));
  /* 1018a006 call edi */
  call_ind((uint32_t)(EDI), 0x1018a008u);
  /* 1018a008 push dword ptr [0x10190c44] */
  push32((uint32_t)(r32((uint32_t)(0x10190c44))));
  /* 1018a00e call edi */
  call_ind((uint32_t)(EDI), 0x1018a010u);
  /* 1018a010 pop edi */
  EDI = (pop32());
  /* 1018a011 pop esi */
  ESI = (pop32());
  /* 1018a012 ret  */
  ESPCHK(0x10189fa7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a013 @ 0x1018a013 (97 bytes, 37 insns) */
void f_1018a013(void) {
  FTRACE(0x1018a013u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018a013 push ebp */
  push32((uint32_t)(EBP));
  /* 1018a014 mov ebp, esp */
  EBP = (ESP);
  /* 1018a016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018a019 push esi */
  push32((uint32_t)(ESI));
  /* 1018a01a cmp dword ptr [eax*4 + 0x10190c40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10190c40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a022 lea esi, [eax*4 + 0x10190c40] */
  ESI = ((uint32_t)(EAX*4 + 0x10190c40));
  /* 1018a029 jne 0x1018a069 */
  if (!C.zf) goto L_1018a069;
  /* 1018a02b push edi */
  push32((uint32_t)(EDI));
  /* 1018a02c push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1018a02e call 0x1018a2af */
  push32(0x1018a033u); f_1018a2af();
  /* 1018a033 mov edi, eax */
  EDI = (EAX);
  /* 1018a035 pop ecx */
  ECX = (pop32());
  /* 1018a036 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1018a038 jne 0x1018a042 */
  if (!C.zf) goto L_1018a042;
  /* 1018a03a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1018a03c call 0x101870b1 */
  push32(0x1018a041u); f_101870b1();
  /* 1018a041 pop ecx */
  ECX = (pop32());
L_1018a042:;
  /* 1018a042 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1018a044 call 0x1018a013 */
  push32(0x1018a049u); f_1018a013();
  /* 1018a049 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a04c pop ecx */
  ECX = (pop32());
  /* 1018a04d push edi */
  push32((uint32_t)(EDI));
  /* 1018a04e jne 0x1018a05a */
  if (!C.zf) goto L_1018a05a;
  /* 1018a050 call dword ptr [0x1018e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e094))), 0x1018a056u);
  /* 1018a056 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1018a058 jmp 0x1018a060 */
  goto L_1018a060;
L_1018a05a:;
  /* 1018a05a call 0x1018a1c6 */
  push32(0x1018a05fu); f_1018a1c6();
  /* 1018a05f pop ecx */
  ECX = (pop32());
L_1018a060:;
  /* 1018a060 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1018a062 call 0x1018a074 */
  push32(0x1018a067u); f_1018a074();
  /* 1018a067 pop ecx */
  ECX = (pop32());
  /* 1018a068 pop edi */
  EDI = (pop32());
L_1018a069:;
  /* 1018a069 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1018a06b call dword ptr [0x1018e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e00c))), 0x1018a071u);
  /* 1018a071 pop esi */
  ESI = (pop32());
  /* 1018a072 pop ebp */
  EBP = (pop32());
  /* 1018a073 ret  */
  ESPCHK(0x1018a013u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a074 @ 0x1018a074 (21 bytes, 7 insns) */
void f_1018a074(void) {
  FTRACE(0x1018a074u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018a074 push ebp */
  push32((uint32_t)(EBP));
  /* 1018a075 mov ebp, esp */
  EBP = (ESP);
  /* 1018a077 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018a07a push dword ptr [eax*4 + 0x10190c40] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10190c40))));
  /* 1018a081 call dword ptr [0x1018e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e008))), 0x1018a087u);
  /* 1018a087 pop ebp */
  EBP = (pop32());
  /* 1018a088 ret  */
  ESPCHK(0x1018a074u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a089 @ 0x1018a089 (289 bytes, 98 insns) */
void f_1018a089(void) {
  FTRACE(0x1018a089u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018a089 push ebp */
  push32((uint32_t)(EBP));
  /* 1018a08a mov ebp, esp */
  EBP = (ESP);
  /* 1018a08c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1018a08e push 0x1018e4d0 */
  push32((uint32_t)(0x1018e4d0u));
  /* 1018a093 push 0x1018d030 */
  push32((uint32_t)(0x1018d030u));
  /* 1018a098 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1018a09e push eax */
  push32((uint32_t)(EAX));
  /* 1018a09f mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1018a0a6 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018a0a9 push ebx */
  push32((uint32_t)(EBX));
  /* 1018a0aa push esi */
  push32((uint32_t)(ESI));
  /* 1018a0ab push edi */
  push32((uint32_t)(EDI));
  /* 1018a0ac mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1018a0af imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1018a0b3 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1018a0b6 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 1018a0b9 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a0bc ja 0x1018a0d2 */
  if ((!C.cf&&!C.zf)) goto L_1018a0d2;
  /* 1018a0be xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1018a0c0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a0c2 jne 0x1018a0c7 */
  if (!C.zf) goto L_1018a0c7;
  /* 1018a0c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018a0c6 pop esi */
  ESI = (pop32());
L_1018a0c7:;
  /* 1018a0c7 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018a0ca and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1018a0cd mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1018a0d0 jmp 0x1018a0d4 */
  goto L_1018a0d4;
L_1018a0d2:;
  /* 1018a0d2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1018a0d4:;
  /* 1018a0d4 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 1018a0d7 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a0da ja 0x1018a188 */
  if ((!C.cf&&!C.zf)) goto L_1018a188;
  /* 1018a0e0 mov eax, dword ptr [0x10197c48] */
  EAX = (r32((uint32_t)(0x10197c48)));
  /* 1018a0e5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a0e8 jne 0x1018a12b */
  if (!C.zf) goto L_1018a12b;
  /* 1018a0ea mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 1018a0ed cmp edi, dword ptr [0x101969f0] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x101969f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a0f3 ja 0x1018a171 */
  if ((!C.cf&&!C.zf)) goto L_1018a171;
  /* 1018a0f5 push 9 */
  push32((uint32_t)(0x9u));
  /* 1018a0f7 call 0x1018a013 */
  push32(0x1018a0fcu); f_1018a013();
  /* 1018a0fc pop ecx */
  ECX = (pop32());
  /* 1018a0fd mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1018a100 push edi */
  push32((uint32_t)(EDI));
  /* 1018a101 call 0x1018b29b */
  push32(0x1018a106u); f_1018b29b();
  /* 1018a106 pop ecx */
  ECX = (pop32());
  /* 1018a107 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1018a10a or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1018a10e call 0x1018a122 */
  push32(0x1018a113u); f_1018a122();
  /* 1018a113 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a116 je 0x1018a176 */
  if (C.zf) goto L_1018a176;
  /* 1018a118 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1018a11b jmp 0x1018a165 */
  goto L_1018a165;
  /* 1018a11d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1018a11f mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1018a122 push 9 */
  push32((uint32_t)(0x9u));
  /* 1018a124 call 0x1018a074 */
  push32(0x1018a129u); f_1018a074();
  /* 1018a129 pop ecx */
  ECX = (pop32());
  /* 1018a12a ret  */
  ESPCHK(0x1018a089u, _esp0);
  ESP += 4; return;
L_1018a12b:;
  /* 1018a12b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a12e jne 0x1018a171 */
  if (!C.zf) goto L_1018a171;
  /* 1018a130 cmp esi, dword ptr [0x10192ea4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10192ea4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a136 ja 0x1018a171 */
  if ((!C.cf&&!C.zf)) goto L_1018a171;
  /* 1018a138 push 9 */
  push32((uint32_t)(0x9u));
  /* 1018a13a call 0x1018a013 */
  push32(0x1018a13fu); f_1018a013();
  /* 1018a13f pop ecx */
  ECX = (pop32());
  /* 1018a140 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1018a147 mov eax, esi */
  EAX = (ESI);
  /* 1018a149 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1018a14c push eax */
  push32((uint32_t)(EAX));
  /* 1018a14d call 0x1018ba48 */
  push32(0x1018a152u); f_1018ba48();
  /* 1018a152 pop ecx */
  ECX = (pop32());
  /* 1018a153 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1018a156 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1018a15a call 0x1018a1ab */
  push32(0x1018a15fu); f_1018a1ab();
  /* 1018a15f cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a162 je 0x1018a176 */
  if (C.zf) goto L_1018a176;
  /* 1018a164 push esi */
  push32((uint32_t)(ESI));
L_1018a165:;
  /* 1018a165 push ebx */
  push32((uint32_t)(EBX));
  /* 1018a166 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1018a169 call 0x10189be0 */
  push32(0x1018a16eu); f_10189be0();
  /* 1018a16e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018a171:;
  /* 1018a171 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a174 jne 0x1018a1b4 */
  if (!C.zf) { jmp_ind(0x1018a1b4u); return; }
L_1018a176:;
  /* 1018a176 push esi */
  push32((uint32_t)(ESI));
  /* 1018a177 push 8 */
  push32((uint32_t)(0x8u));
  /* 1018a179 push dword ptr [0x10197c44] */
  push32((uint32_t)(r32((uint32_t)(0x10197c44))));
  /* 1018a17f call dword ptr [0x1018e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e098))), 0x1018a185u);
  /* 1018a185 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1018a188:;
  /* 1018a188 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a18b jne 0x1018a1b4 */
  if (!C.zf) { jmp_ind(0x1018a1b4u); return; }
  /* 1018a18d cmp dword ptr [0x10196890], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10196890))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a193 je 0x1018a1b4 */
  if (C.zf) { jmp_ind(0x1018a1b4u); return; }
  /* 1018a195 push esi */
  push32((uint32_t)(ESI));
  /* 1018a196 call 0x1018cf1a */
  push32(0x1018a19bu); f_1018cf1a();
  /* 1018a19b pop ecx */
  ECX = (pop32());
  /* 1018a19c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018a19e jne 0x1018a0d4 */
  if (!C.zf) goto L_1018a0d4;
  /* 1018a1a4 jmp 0x1018a1b7 */
  jmp_ind(0x1018a1b7u); return;
  /* 1018a1a6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_1000a122 @ 0x1018a122 (9 bytes, 4 insns) */
void f_1018a122(void) {
  FTRACE(0x1018a122u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018a122 push 9 */
  push32((uint32_t)(0x9u));
  /* 1018a124 call 0x1018a074 */
  push32(0x1018a129u); f_1018a074();
  /* 1018a129 pop ecx */
  ECX = (pop32());
  /* 1018a12a ret  */
  ESPCHK(0x1018a122u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1ab @ 0x1018a1ab (9 bytes, 4 insns) */
void f_1018a1ab(void) {
  FTRACE(0x1018a1abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018a1ab push 9 */
  push32((uint32_t)(0x9u));
  /* 1018a1ad call 0x1018a074 */
  push32(0x1018a1b2u); f_1018a074();
  /* 1018a1b2 pop ecx */
  ECX = (pop32());
  /* 1018a1b3 ret  */
  ESPCHK(0x1018a1abu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1c6 @ 0x1018a1c6 (215 bytes, 75 insns) */
void f_1018a1c6(void) {
  FTRACE(0x1018a1c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018a1c6 push ebp */
  push32((uint32_t)(EBP));
  /* 1018a1c7 mov ebp, esp */
  EBP = (ESP);
  /* 1018a1c9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1018a1cb push 0x1018e4e8 */
  push32((uint32_t)(0x1018e4e8u));
  /* 1018a1d0 push 0x1018d030 */
  push32((uint32_t)(0x1018d030u));
  /* 1018a1d5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1018a1db push eax */
  push32((uint32_t)(EAX));
  /* 1018a1dc mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1018a1e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018a1e6 push ebx */
  push32((uint32_t)(EBX));
  /* 1018a1e7 push esi */
  push32((uint32_t)(ESI));
  /* 1018a1e8 push edi */
  push32((uint32_t)(EDI));
  /* 1018a1e9 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1018a1ec test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1018a1ee je 0x1018a2a0 */
  if (C.zf) { jmp_ind(0x1018a2a0u); return; }
  /* 1018a1f4 mov eax, dword ptr [0x10197c48] */
  EAX = (r32((uint32_t)(0x10197c48)));
  /* 1018a1f9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a1fc jne 0x1018a239 */
  if (!C.zf) goto L_1018a239;
  /* 1018a1fe push 9 */
  push32((uint32_t)(0x9u));
  /* 1018a200 call 0x1018a013 */
  push32(0x1018a205u); f_1018a013();
  /* 1018a205 pop ecx */
  ECX = (pop32());
  /* 1018a206 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1018a20a push esi */
  push32((uint32_t)(ESI));
  /* 1018a20b call 0x1018af47 */
  push32(0x1018a210u); f_1018af47();
  /* 1018a210 pop ecx */
  ECX = (pop32());
  /* 1018a211 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1018a214 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018a216 je 0x1018a221 */
  if (C.zf) goto L_1018a221;
  /* 1018a218 push esi */
  push32((uint32_t)(ESI));
  /* 1018a219 push eax */
  push32((uint32_t)(EAX));
  /* 1018a21a call 0x1018af72 */
  push32(0x1018a21fu); f_1018af72();
  /* 1018a21f pop ecx */
  ECX = (pop32());
  /* 1018a220 pop ecx */
  ECX = (pop32());
L_1018a221:;
  /* 1018a221 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1018a225 call 0x1018a230 */
  push32(0x1018a22au); f_1018a230();
  /* 1018a22a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a22e jmp 0x1018a281 */
  goto L_1018a281;
  /* 1018a230 push 9 */
  push32((uint32_t)(0x9u));
  /* 1018a232 call 0x1018a074 */
  push32(0x1018a237u); f_1018a074();
  /* 1018a237 pop ecx */
  ECX = (pop32());
  /* 1018a238 ret  */
  ESPCHK(0x1018a1c6u, _esp0);
  ESP += 4; return;
L_1018a239:;
  /* 1018a239 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a23c jne 0x1018a291 */
  if (!C.zf) goto L_1018a291;
  /* 1018a23e push 9 */
  push32((uint32_t)(0x9u));
  /* 1018a240 call 0x1018a013 */
  push32(0x1018a245u); f_1018a013();
  /* 1018a245 pop ecx */
  ECX = (pop32());
  /* 1018a246 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1018a24d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1018a250 push eax */
  push32((uint32_t)(EAX));
  /* 1018a251 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 1018a254 push eax */
  push32((uint32_t)(EAX));
  /* 1018a255 push esi */
  push32((uint32_t)(ESI));
  /* 1018a256 call 0x1018b9ac */
  push32(0x1018a25bu); f_1018b9ac();
  /* 1018a25b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018a25e mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1018a261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018a263 je 0x1018a274 */
  if (C.zf) goto L_1018a274;
  /* 1018a265 push eax */
  push32((uint32_t)(EAX));
  /* 1018a266 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1018a269 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 1018a26c call 0x1018ba03 */
  push32(0x1018a271u); f_1018ba03();
  /* 1018a271 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018a274:;
  /* 1018a274 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1018a278 call 0x1018a288 */
  push32(0x1018a27du); f_1018a288();
  /* 1018a27d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1018a281:;
  /* 1018a281 jne 0x1018a2a0 */
  if (!C.zf) { jmp_ind(0x1018a2a0u); return; }
  /* 1018a283 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1018a286 jmp 0x1018a292 */
  goto L_1018a292;
  /* 1018a288 push 9 */
  push32((uint32_t)(0x9u));
  /* 1018a28a call 0x1018a074 */
  push32(0x1018a28fu); f_1018a074();
  /* 1018a28f pop ecx */
  ECX = (pop32());
  /* 1018a290 ret  */
  ESPCHK(0x1018a1c6u, _esp0);
  ESP += 4; return;
L_1018a291:;
  /* 1018a291 push esi */
  push32((uint32_t)(ESI));
L_1018a292:;
  /* 1018a292 push 0 */
  push32((uint32_t)(0x0u));
  /* 1018a294 push dword ptr [0x10197c44] */
  push32((uint32_t)(r32((uint32_t)(0x10197c44))));
}

/* FUN_1000a230 @ 0x1018a230 (9 bytes, 4 insns) */
void f_1018a230(void) {
  FTRACE(0x1018a230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018a230 push 9 */
  push32((uint32_t)(0x9u));
  /* 1018a232 call 0x1018a074 */
  push32(0x1018a237u); f_1018a074();
  /* 1018a237 pop ecx */
  ECX = (pop32());
  /* 1018a238 ret  */
  ESPCHK(0x1018a230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a288 @ 0x1018a288 (9 bytes, 4 insns) */
void f_1018a288(void) {
  FTRACE(0x1018a288u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018a288 push 9 */
  push32((uint32_t)(0x9u));
  /* 1018a28a call 0x1018a074 */
  push32(0x1018a28fu); f_1018a074();
  /* 1018a28f pop ecx */
  ECX = (pop32());
  /* 1018a290 ret  */
  ESPCHK(0x1018a288u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x1018a2af (18 bytes, 6 insns) */
void f_1018a2af(void) {
  FTRACE(0x1018a2afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018a2af push dword ptr [0x10196890] */
  push32((uint32_t)(r32((uint32_t)(0x10196890))));
  /* 1018a2b5 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1018a2b9 call 0x1018a2c1 */
  push32(0x1018a2beu); f_1018a2c1();
  /* 1018a2be pop ecx */
  ECX = (pop32());
  /* 1018a2bf pop ecx */
  ECX = (pop32());
  /* 1018a2c0 ret  */
  ESPCHK(0x1018a2afu, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x1018a2c1 (44 bytes, 16 insns) */
void f_1018a2c1(void) {
  FTRACE(0x1018a2c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018a2c1 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a2c6 ja 0x1018a2ea */
  if ((!C.cf&&!C.zf)) goto L_1018a2ea;
L_1018a2c8:;
  /* 1018a2c8 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1018a2cc call 0x1018a2ed */
  push32(0x1018a2d1u); f_1018a2ed();
  /* 1018a2d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018a2d3 pop ecx */
  ECX = (pop32());
  /* 1018a2d4 jne 0x1018a2ec */
  if (!C.zf) goto L_1018a2ec;
  /* 1018a2d6 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a2da je 0x1018a2ec */
  if (C.zf) goto L_1018a2ec;
  /* 1018a2dc push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1018a2e0 call 0x1018cf1a */
  push32(0x1018a2e5u); f_1018cf1a();
  /* 1018a2e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018a2e7 pop ecx */
  ECX = (pop32());
  /* 1018a2e8 jne 0x1018a2c8 */
  if (!C.zf) goto L_1018a2c8;
L_1018a2ea:;
  /* 1018a2ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1018a2ec:;
  /* 1018a2ec ret  */
  ESPCHK(0x1018a2c1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2ed @ 0x1018a2ed (231 bytes, 81 insns) */
void f_1018a2ed(void) {
  FTRACE(0x1018a2edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018a2ed push ebp */
  push32((uint32_t)(EBP));
  /* 1018a2ee mov ebp, esp */
  EBP = (ESP);
  /* 1018a2f0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1018a2f2 push 0x1018e500 */
  push32((uint32_t)(0x1018e500u));
  /* 1018a2f7 push 0x1018d030 */
  push32((uint32_t)(0x1018d030u));
  /* 1018a2fc mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1018a302 push eax */
  push32((uint32_t)(EAX));
  /* 1018a303 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1018a30a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018a30d push ebx */
  push32((uint32_t)(EBX));
  /* 1018a30e push esi */
  push32((uint32_t)(ESI));
  /* 1018a30f push edi */
  push32((uint32_t)(EDI));
  /* 1018a310 mov eax, dword ptr [0x10197c48] */
  EAX = (r32((uint32_t)(0x10197c48)));
  /* 1018a315 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a318 jne 0x1018a35d */
  if (!C.zf) goto L_1018a35d;
  /* 1018a31a mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1018a31d cmp esi, dword ptr [0x101969f0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101969f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a323 ja 0x1018a3bc */
  if ((!C.cf&&!C.zf)) goto L_1018a3bc;
  /* 1018a329 push 9 */
  push32((uint32_t)(0x9u));
  /* 1018a32b call 0x1018a013 */
  push32(0x1018a330u); f_1018a013();
  /* 1018a330 pop ecx */
  ECX = (pop32());
  /* 1018a331 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1018a335 push esi */
  push32((uint32_t)(ESI));
  /* 1018a336 call 0x1018b29b */
  push32(0x1018a33bu); f_1018b29b();
  /* 1018a33b pop ecx */
  ECX = (pop32());
  /* 1018a33c mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1018a33f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1018a343 call 0x1018a354 */
  push32(0x1018a348u); f_1018a354();
  /* 1018a348 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1018a34b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018a34d je 0x1018a3bc */
  if (C.zf) goto L_1018a3bc;
  /* 1018a34f jmp 0x1018a3da */
  jmp_ind(0x1018a3dau); return;
  /* 1018a354 push 9 */
  push32((uint32_t)(0x9u));
  /* 1018a356 call 0x1018a074 */
  push32(0x1018a35bu); f_1018a074();
  /* 1018a35b pop ecx */
  ECX = (pop32());
  /* 1018a35c ret  */
  ESPCHK(0x1018a2edu, _esp0);
  ESP += 4; return;
L_1018a35d:;
  /* 1018a35d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a360 jne 0x1018a3bc */
  if (!C.zf) goto L_1018a3bc;
  /* 1018a362 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018a365 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018a367 je 0x1018a371 */
  if (C.zf) goto L_1018a371;
  /* 1018a369 lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 1018a36c and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1018a36f jmp 0x1018a374 */
  goto L_1018a374;
L_1018a371:;
  /* 1018a371 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1018a373 pop esi */
  ESI = (pop32());
L_1018a374:;
  /* 1018a374 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 1018a377 cmp esi, dword ptr [0x10192ea4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10192ea4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a37d ja 0x1018a3ad */
  if ((!C.cf&&!C.zf)) goto L_1018a3ad;
  /* 1018a37f push 9 */
  push32((uint32_t)(0x9u));
  /* 1018a381 call 0x1018a013 */
  push32(0x1018a386u); f_1018a013();
  /* 1018a386 pop ecx */
  ECX = (pop32());
  /* 1018a387 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1018a38e mov eax, esi */
  EAX = (ESI);
  /* 1018a390 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1018a393 push eax */
  push32((uint32_t)(EAX));
  /* 1018a394 call 0x1018ba48 */
  push32(0x1018a399u); f_1018ba48();
  /* 1018a399 pop ecx */
  ECX = (pop32());
  /* 1018a39a mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1018a39d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1018a3a1 call 0x1018a3b3 */
  push32(0x1018a3a6u); f_1018a3b3();
  /* 1018a3a6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1018a3a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018a3ab jne 0x1018a3da */
  if (!C.zf) { jmp_ind(0x1018a3dau); return; }
L_1018a3ad:;
  /* 1018a3ad push esi */
  push32((uint32_t)(ESI));
  /* 1018a3ae jmp 0x1018a3cc */
  goto L_1018a3cc;
  /* 1018a3b0 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1018a3b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1018a3b5 call 0x1018a074 */
  push32(0x1018a3bau); f_1018a074();
  /* 1018a3ba pop ecx */
  ECX = (pop32());
  /* 1018a3bb ret  */
  ESPCHK(0x1018a2edu, _esp0);
  ESP += 4; return;
L_1018a3bc:;
  /* 1018a3bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018a3bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018a3c1 jne 0x1018a3c6 */
  if (!C.zf) goto L_1018a3c6;
  /* 1018a3c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018a3c5 pop eax */
  EAX = (pop32());
L_1018a3c6:;
  /* 1018a3c6 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018a3c9 and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1018a3cb push eax */
  push32((uint32_t)(EAX));
L_1018a3cc:;
  /* 1018a3cc push 0 */
  push32((uint32_t)(0x0u));
  /* 1018a3ce push dword ptr [0x10197c44] */
  push32((uint32_t)(r32((uint32_t)(0x10197c44))));
}

/* FUN_1000a354 @ 0x1018a354 (9 bytes, 4 insns) */
void f_1018a354(void) {
  FTRACE(0x1018a354u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018a354 push 9 */
  push32((uint32_t)(0x9u));
  /* 1018a356 call 0x1018a074 */
  push32(0x1018a35bu); f_1018a074();
  /* 1018a35b pop ecx */
  ECX = (pop32());
  /* 1018a35c ret  */
  ESPCHK(0x1018a354u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3b3 @ 0x1018a3b3 (9 bytes, 4 insns) */
void f_1018a3b3(void) {
  FTRACE(0x1018a3b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018a3b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1018a3b5 call 0x1018a074 */
  push32(0x1018a3bau); f_1018a074();
  /* 1018a3ba pop ecx */
  ECX = (pop32());
  /* 1018a3bb ret  */
  ESPCHK(0x1018a3b3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3e9 @ 0x1018a3e9 (429 bytes, 143 insns) */
void f_1018a3e9(void) {
  FTRACE(0x1018a3e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018a3e9 push ebp */
  push32((uint32_t)(EBP));
  /* 1018a3ea mov ebp, esp */
  EBP = (ESP);
  /* 1018a3ec sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018a3ef push ebx */
  push32((uint32_t)(EBX));
  /* 1018a3f0 push esi */
  push32((uint32_t)(ESI));
  /* 1018a3f1 push edi */
  push32((uint32_t)(EDI));
  /* 1018a3f2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1018a3f4 call 0x1018a013 */
  push32(0x1018a3f9u); f_1018a013();
  /* 1018a3f9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1018a3fc call 0x1018a596 */
  push32(0x1018a401u); f_1018a596();
  /* 1018a401 mov ebx, eax */
  EBX = (EAX);
  /* 1018a403 pop ecx */
  ECX = (pop32());
  /* 1018a404 cmp ebx, dword ptr [0x101969f4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x101969f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a40a pop ecx */
  ECX = (pop32());
  /* 1018a40b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1018a40e jne 0x1018a417 */
  if (!C.zf) goto L_1018a417;
L_1018a410:;
  /* 1018a410 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1018a412 jmp 0x1018a587 */
  goto L_1018a587;
L_1018a417:;
  /* 1018a417 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1018a419 je 0x1018a575 */
  if (C.zf) goto L_1018a575;
  /* 1018a41f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1018a421 mov eax, 0x10190d90 */
  EAX = (0x10190d90u);
L_1018a426:;
  /* 1018a426 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a428 je 0x1018a49e */
  if (C.zf) goto L_1018a49e;
  /* 1018a42a add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018a42d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1018a42e cmp eax, 0x10190e80 */
  { uint32_t _a=(EAX),_b=(0x10190e80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a433 jl 0x1018a426 */
  if ((C.sf!=C.of)) goto L_1018a426;
  /* 1018a435 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1018a438 push eax */
  push32((uint32_t)(EAX));
  /* 1018a439 push ebx */
  push32((uint32_t)(EBX));
  /* 1018a43a call dword ptr [0x1018e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e09c))), 0x1018a440u);
  /* 1018a440 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018a442 pop esi */
  ESI = (pop32());
  /* 1018a443 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a445 jne 0x1018a56c */
  if (!C.zf) goto L_1018a56c;
  /* 1018a44b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1018a44d and dword ptr [0x10196c24], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10196c24)))&(0x0u); w32((uint32_t)(0x10196c24), (_r)); fl_logic(_r,32); }
  /* 1018a454 pop ecx */
  ECX = (pop32());
  /* 1018a455 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018a457 mov edi, 0x10196b20 */
  EDI = (0x10196b20u);
  /* 1018a45c cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a45f rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1018a461 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1018a462 mov dword ptr [0x101969f4], ebx */
  w32((uint32_t)(0x101969f4), (EBX));
  /* 1018a468 jbe 0x1018a559 */
  if ((C.cf||C.zf)) goto L_1018a559;
  /* 1018a46e cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018a472 je 0x1018a534 */
  if (C.zf) goto L_1018a534;
  /* 1018a478 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_1018a47b:;
  /* 1018a47b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1018a47d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1018a47f je 0x1018a534 */
  if (C.zf) goto L_1018a534;
  /* 1018a485 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 1018a489 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_1018a48c:;
  /* 1018a48c cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a48e ja 0x1018a528 */
  if ((!C.cf&&!C.zf)) goto L_1018a528;
  /* 1018a494 or byte ptr [eax + 0x10196b21], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10196b21)))|(0x4u); w8((uint32_t)(EAX + 0x10196b21), (_r)); fl_logic(_r,8); }
  /* 1018a49b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1018a49c jmp 0x1018a48c */
  goto L_1018a48c;
L_1018a49e:;
  /* 1018a49e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1018a4a2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1018a4a4 pop ecx */
  ECX = (pop32());
  /* 1018a4a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018a4a7 mov edi, 0x10196b20 */
  EDI = (0x10196b20u);
  /* 1018a4ac lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 1018a4af rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1018a4b1 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1018a4b4 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1018a4b5 lea ebx, [esi + 0x10190da0] */
  EBX = ((uint32_t)(ESI + 0x10190da0));
L_1018a4bb:;
  /* 1018a4bb cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018a4be mov ecx, ebx */
  ECX = (EBX);
  /* 1018a4c0 je 0x1018a4ee */
  if (C.zf) goto L_1018a4ee;
L_1018a4c2:;
  /* 1018a4c2 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1018a4c5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1018a4c7 je 0x1018a4ee */
  if (C.zf) goto L_1018a4ee;
  /* 1018a4c9 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1018a4cc movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 1018a4cf cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a4d1 ja 0x1018a4e7 */
  if ((!C.cf&&!C.zf)) goto L_1018a4e7;
  /* 1018a4d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1018a4d6 mov dl, byte ptr [edx + 0x10190d88] */
  DL = (r8((uint32_t)(EDX + 0x10190d88)));
L_1018a4dc:;
  /* 1018a4dc or byte ptr [eax + 0x10196b21], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10196b21)))|(DL); w8((uint32_t)(EAX + 0x10196b21), (_r)); fl_logic(_r,8); }
  /* 1018a4e2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1018a4e3 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a4e5 jbe 0x1018a4dc */
  if ((C.cf||C.zf)) goto L_1018a4dc;
L_1018a4e7:;
  /* 1018a4e7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1018a4e8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1018a4e9 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018a4ec jne 0x1018a4c2 */
  if (!C.zf) goto L_1018a4c2;
L_1018a4ee:;
  /* 1018a4ee inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1018a4f1 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018a4f4 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a4f8 jb 0x1018a4bb */
  if (C.cf) goto L_1018a4bb;
  /* 1018a4fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018a4fd mov dword ptr [0x10196a0c], 1 */
  w32((uint32_t)(0x10196a0c), (0x1u));
  /* 1018a507 push eax */
  push32((uint32_t)(EAX));
  /* 1018a508 mov dword ptr [0x101969f4], eax */
  w32((uint32_t)(0x101969f4), (EAX));
  /* 1018a50d call 0x1018a5e0 */
  push32(0x1018a512u); f_1018a5e0();
  /* 1018a512 lea esi, [esi + 0x10190d94] */
  ESI = ((uint32_t)(ESI + 0x10190d94));
  /* 1018a518 mov edi, 0x10196a00 */
  EDI = (0x10196a00u);
  /* 1018a51d movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1018a51e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1018a51f pop ecx */
  ECX = (pop32());
  /* 1018a520 mov dword ptr [0x10196c24], eax */
  w32((uint32_t)(0x10196c24), (EAX));
  /* 1018a525 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1018a526 jmp 0x1018a57a */
  goto L_1018a57a;
L_1018a528:;
  /* 1018a528 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1018a529 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1018a52a cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018a52e jne 0x1018a47b */
  if (!C.zf) goto L_1018a47b;
L_1018a534:;
  /* 1018a534 mov eax, esi */
  EAX = (ESI);
L_1018a536:;
  /* 1018a536 or byte ptr [eax + 0x10196b21], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10196b21)))|(0x8u); w8((uint32_t)(EAX + 0x10196b21), (_r)); fl_logic(_r,8); }
  /* 1018a53d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1018a53e cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a543 jb 0x1018a536 */
  if (C.cf) goto L_1018a536;
  /* 1018a545 push ebx */
  push32((uint32_t)(EBX));
  /* 1018a546 call 0x1018a5e0 */
  push32(0x1018a54bu); f_1018a5e0();
  /* 1018a54b pop ecx */
  ECX = (pop32());
  /* 1018a54c mov dword ptr [0x10196c24], eax */
  w32((uint32_t)(0x10196c24), (EAX));
  /* 1018a551 mov dword ptr [0x10196a0c], esi */
  w32((uint32_t)(0x10196a0c), (ESI));
  /* 1018a557 jmp 0x1018a560 */
  goto L_1018a560;
L_1018a559:;
  /* 1018a559 and dword ptr [0x10196a0c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10196a0c)))&(0x0u); w32((uint32_t)(0x10196a0c), (_r)); fl_logic(_r,32); }
L_1018a560:;
  /* 1018a560 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018a562 mov edi, 0x10196a00 */
  EDI = (0x10196a00u);
  /* 1018a567 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1018a568 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1018a569 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1018a56a jmp 0x1018a57a */
  goto L_1018a57a;
L_1018a56c:;
  /* 1018a56c cmp dword ptr [0x10196830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10196830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a573 je 0x1018a584 */
  if (C.zf) goto L_1018a584;
L_1018a575:;
  /* 1018a575 call 0x1018a613 */
  push32(0x1018a57au); f_1018a613();
L_1018a57a:;
  /* 1018a57a call 0x1018a63c */
  push32(0x1018a57fu); f_1018a63c();
  /* 1018a57f jmp 0x1018a410 */
  goto L_1018a410;
L_1018a584:;
  /* 1018a584 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_1018a587:;
  /* 1018a587 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1018a589 call 0x1018a074 */
  push32(0x1018a58eu); f_1018a074();
  /* 1018a58e pop ecx */
  ECX = (pop32());
  /* 1018a58f mov eax, esi */
  EAX = (ESI);
  /* 1018a591 pop edi */
  EDI = (pop32());
  /* 1018a592 pop esi */
  ESI = (pop32());
  /* 1018a593 pop ebx */
  EBX = (pop32());
  /* 1018a594 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018a595 ret  */
  ESPCHK(0x1018a3e9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a596 @ 0x1018a596 (74 bytes, 15 insns) */
void f_1018a596(void) {
  FTRACE(0x1018a596u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018a596 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1018a59a and dword ptr [0x10196830], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10196830)))&(0x0u); w32((uint32_t)(0x10196830), (_r)); fl_logic(_r,32); }
  /* 1018a5a1 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a5a4 jne 0x1018a5b6 */
  if (!C.zf) goto L_1018a5b6;
  /* 1018a5a6 mov dword ptr [0x10196830], 1 */
  w32((uint32_t)(0x10196830), (0x1u));
  /* 1018a5b0 jmp dword ptr [0x1018e0a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1018e0a4)))); return;
L_1018a5b6:;
  /* 1018a5b6 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a5b9 jne 0x1018a5cb */
  if (!C.zf) goto L_1018a5cb;
  /* 1018a5bb mov dword ptr [0x10196830], 1 */
  w32((uint32_t)(0x10196830), (0x1u));
  /* 1018a5c5 jmp dword ptr [0x1018e0a0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1018e0a0)))); return;
L_1018a5cb:;
  /* 1018a5cb cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a5ce jne 0x1018a5df */
  if (!C.zf) goto L_1018a5df;
  /* 1018a5d0 mov eax, dword ptr [0x10196868] */
  EAX = (r32((uint32_t)(0x10196868)));
  /* 1018a5d5 mov dword ptr [0x10196830], 1 */
  w32((uint32_t)(0x10196830), (0x1u));
L_1018a5df:;
  /* 1018a5df ret  */
  ESPCHK(0x1018a596u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5e0 @ 0x1018a5e0 (51 bytes, 19 insns) */
void f_1018a5e0(void) {
  FTRACE(0x1018a5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018a5e0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1018a5e4 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018a5e9 je 0x1018a60d */
  if (C.zf) goto L_1018a60d;
  /* 1018a5eb sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018a5ee je 0x1018a607 */
  if (C.zf) goto L_1018a607;
  /* 1018a5f0 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018a5f3 je 0x1018a601 */
  if (C.zf) goto L_1018a601;
  /* 1018a5f5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1018a5f6 je 0x1018a5fb */
  if (C.zf) goto L_1018a5fb;
  /* 1018a5f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018a5fa ret  */
  ESPCHK(0x1018a5e0u, _esp0);
  ESP += 4; return;
L_1018a5fb:;
  /* 1018a5fb mov eax, 0x404 */
  EAX = (0x404u);
  /* 1018a600 ret  */
  ESPCHK(0x1018a5e0u, _esp0);
  ESP += 4; return;
L_1018a601:;
  /* 1018a601 mov eax, 0x412 */
  EAX = (0x412u);
  /* 1018a606 ret  */
  ESPCHK(0x1018a5e0u, _esp0);
  ESP += 4; return;
L_1018a607:;
  /* 1018a607 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1018a60c ret  */
  ESPCHK(0x1018a5e0u, _esp0);
  ESP += 4; return;
L_1018a60d:;
  /* 1018a60d mov eax, 0x411 */
  EAX = (0x411u);
  /* 1018a612 ret  */
  ESPCHK(0x1018a5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a613 @ 0x1018a613 (41 bytes, 17 insns) */
void f_1018a613(void) {
  FTRACE(0x1018a613u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018a613 push edi */
  push32((uint32_t)(EDI));
  /* 1018a614 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1018a616 pop ecx */
  ECX = (pop32());
  /* 1018a617 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018a619 mov edi, 0x10196b20 */
  EDI = (0x10196b20u);
  /* 1018a61e rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1018a620 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1018a621 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018a623 mov edi, 0x10196a00 */
  EDI = (0x10196a00u);
  /* 1018a628 mov dword ptr [0x101969f4], eax */
  w32((uint32_t)(0x101969f4), (EAX));
  /* 1018a62d mov dword ptr [0x10196a0c], eax */
  w32((uint32_t)(0x10196a0c), (EAX));
  /* 1018a632 mov dword ptr [0x10196c24], eax */
  w32((uint32_t)(0x10196c24), (EAX));
  /* 1018a637 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1018a638 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1018a639 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1018a63a pop edi */
  EDI = (pop32());
  /* 1018a63b ret  */
  ESPCHK(0x1018a613u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a63c @ 0x1018a63c (389 bytes, 124 insns) */
void f_1018a63c(void) {
  FTRACE(0x1018a63cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018a63c push ebp */
  push32((uint32_t)(EBP));
  /* 1018a63d mov ebp, esp */
  EBP = (ESP);
  /* 1018a63f sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018a645 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1018a648 push esi */
  push32((uint32_t)(ESI));
  /* 1018a649 push eax */
  push32((uint32_t)(EAX));
  /* 1018a64a push dword ptr [0x101969f4] */
  push32((uint32_t)(r32((uint32_t)(0x101969f4))));
  /* 1018a650 call dword ptr [0x1018e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e09c))), 0x1018a656u);
  /* 1018a656 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a659 jne 0x1018a775 */
  if (!C.zf) goto L_1018a775;
  /* 1018a65f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018a661 mov esi, 0x100 */
  ESI = (0x100u);
L_1018a666:;
  /* 1018a666 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 1018a66d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1018a66e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a670 jb 0x1018a666 */
  if (C.cf) goto L_1018a666;
  /* 1018a672 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 1018a675 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 1018a67c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1018a67e je 0x1018a6b7 */
  if (C.zf) goto L_1018a6b7;
  /* 1018a680 push ebx */
  push32((uint32_t)(EBX));
  /* 1018a681 push edi */
  push32((uint32_t)(EDI));
  /* 1018a682 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_1018a685:;
  /* 1018a685 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 1018a688 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1018a68b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a68d ja 0x1018a6ac */
  if ((!C.cf&&!C.zf)) goto L_1018a6ac;
  /* 1018a68f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018a691 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 1018a698 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1018a699 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 1018a69e mov ebx, ecx */
  EBX = (ECX);
  /* 1018a6a0 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1018a6a3 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1018a6a5 mov ecx, ebx */
  ECX = (EBX);
  /* 1018a6a7 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1018a6aa rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_1018a6ac:;
  /* 1018a6ac inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1018a6ad inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1018a6ae mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 1018a6b1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1018a6b3 jne 0x1018a685 */
  if (!C.zf) goto L_1018a685;
  /* 1018a6b5 pop edi */
  EDI = (pop32());
  /* 1018a6b6 pop ebx */
  EBX = (pop32());
L_1018a6b7:;
  /* 1018a6b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1018a6b9 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 1018a6bf push dword ptr [0x10196c24] */
  push32((uint32_t)(r32((uint32_t)(0x10196c24))));
  /* 1018a6c5 push dword ptr [0x101969f4] */
  push32((uint32_t)(r32((uint32_t)(0x101969f4))));
  /* 1018a6cb push eax */
  push32((uint32_t)(EAX));
  /* 1018a6cc lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1018a6d2 push esi */
  push32((uint32_t)(ESI));
  /* 1018a6d3 push eax */
  push32((uint32_t)(EAX));
  /* 1018a6d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018a6d6 call 0x1018c27d */
  push32(0x1018a6dbu); f_1018c27d();
  /* 1018a6db push 0 */
  push32((uint32_t)(0x0u));
  /* 1018a6dd lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 1018a6e3 push dword ptr [0x101969f4] */
  push32((uint32_t)(r32((uint32_t)(0x101969f4))));
  /* 1018a6e9 push esi */
  push32((uint32_t)(ESI));
  /* 1018a6ea push eax */
  push32((uint32_t)(EAX));
  /* 1018a6eb lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1018a6f1 push esi */
  push32((uint32_t)(ESI));
  /* 1018a6f2 push eax */
  push32((uint32_t)(EAX));
  /* 1018a6f3 push esi */
  push32((uint32_t)(ESI));
  /* 1018a6f4 push dword ptr [0x10196c24] */
  push32((uint32_t)(r32((uint32_t)(0x10196c24))));
  /* 1018a6fa call 0x1018c3c6 */
  push32(0x1018a6ffu); f_1018c3c6();
  /* 1018a6ff push 0 */
  push32((uint32_t)(0x0u));
  /* 1018a701 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 1018a707 push dword ptr [0x101969f4] */
  push32((uint32_t)(r32((uint32_t)(0x101969f4))));
  /* 1018a70d push esi */
  push32((uint32_t)(ESI));
  /* 1018a70e push eax */
  push32((uint32_t)(EAX));
  /* 1018a70f lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1018a715 push esi */
  push32((uint32_t)(ESI));
  /* 1018a716 push eax */
  push32((uint32_t)(EAX));
  /* 1018a717 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1018a71c push dword ptr [0x10196c24] */
  push32((uint32_t)(r32((uint32_t)(0x10196c24))));
  /* 1018a722 call 0x1018c3c6 */
  push32(0x1018a727u); f_1018c3c6();
  /* 1018a727 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018a72a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018a72c lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_1018a732:;
  /* 1018a732 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1018a735 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1018a738 je 0x1018a750 */
  if (C.zf) goto L_1018a750;
  /* 1018a73a or byte ptr [eax + 0x10196b21], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10196b21)))|(0x10u); w8((uint32_t)(EAX + 0x10196b21), (_r)); fl_logic(_r,8); }
  /* 1018a741 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_1018a748:;
  /* 1018a748 mov byte ptr [eax + 0x10196a20], dl */
  w8((uint32_t)(EAX + 0x10196a20), (DL));
  /* 1018a74e jmp 0x1018a76c */
  goto L_1018a76c;
L_1018a750:;
  /* 1018a750 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 1018a753 je 0x1018a765 */
  if (C.zf) goto L_1018a765;
  /* 1018a755 or byte ptr [eax + 0x10196b21], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10196b21)))|(0x20u); w8((uint32_t)(EAX + 0x10196b21), (_r)); fl_logic(_r,8); }
  /* 1018a75c mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 1018a763 jmp 0x1018a748 */
  goto L_1018a748;
L_1018a765:;
  /* 1018a765 and byte ptr [eax + 0x10196a20], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10196a20)))&(0x0u); w8((uint32_t)(EAX + 0x10196a20), (_r)); fl_logic(_r,8); }
L_1018a76c:;
  /* 1018a76c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1018a76d inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1018a76e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1018a76f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a771 jb 0x1018a732 */
  if (C.cf) goto L_1018a732;
  /* 1018a773 jmp 0x1018a7be */
  goto L_1018a7be;
L_1018a775:;
  /* 1018a775 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018a777 mov esi, 0x100 */
  ESI = (0x100u);
L_1018a77c:;
  /* 1018a77c cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a77f jb 0x1018a79a */
  if (C.cf) goto L_1018a79a;
  /* 1018a781 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a784 ja 0x1018a79a */
  if ((!C.cf&&!C.zf)) goto L_1018a79a;
  /* 1018a786 or byte ptr [eax + 0x10196b21], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10196b21)))|(0x10u); w8((uint32_t)(EAX + 0x10196b21), (_r)); fl_logic(_r,8); }
  /* 1018a78d mov cl, al */
  CL = (AL);
  /* 1018a78f add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_1018a792:;
  /* 1018a792 mov byte ptr [eax + 0x10196a20], cl */
  w8((uint32_t)(EAX + 0x10196a20), (CL));
  /* 1018a798 jmp 0x1018a7b9 */
  goto L_1018a7b9;
L_1018a79a:;
  /* 1018a79a cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a79d jb 0x1018a7b2 */
  if (C.cf) goto L_1018a7b2;
  /* 1018a79f cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a7a2 ja 0x1018a7b2 */
  if ((!C.cf&&!C.zf)) goto L_1018a7b2;
  /* 1018a7a4 or byte ptr [eax + 0x10196b21], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10196b21)))|(0x20u); w8((uint32_t)(EAX + 0x10196b21), (_r)); fl_logic(_r,8); }
  /* 1018a7ab mov cl, al */
  CL = (AL);
  /* 1018a7ad sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1018a7b0 jmp 0x1018a792 */
  goto L_1018a792;
L_1018a7b2:;
  /* 1018a7b2 and byte ptr [eax + 0x10196a20], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10196a20)))&(0x0u); w8((uint32_t)(EAX + 0x10196a20), (_r)); fl_logic(_r,8); }
L_1018a7b9:;
  /* 1018a7b9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1018a7ba cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a7bc jb 0x1018a77c */
  if (C.cf) goto L_1018a77c;
L_1018a7be:;
  /* 1018a7be pop esi */
  ESI = (pop32());
  /* 1018a7bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018a7c0 ret  */
  ESPCHK(0x1018a63cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7c1 @ 0x1018a7c1 (28 bytes, 7 insns) */
void f_1018a7c1(void) {
  FTRACE(0x1018a7c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018a7c1 cmp dword ptr [0x10197d68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10197d68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a7c8 jne 0x1018a7dc */
  if (!C.zf) goto L_1018a7dc;
  /* 1018a7ca push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1018a7cc call 0x1018a3e9 */
  push32(0x1018a7d1u); f_1018a3e9();
  /* 1018a7d1 pop ecx */
  ECX = (pop32());
  /* 1018a7d2 mov dword ptr [0x10197d68], 1 */
  w32((uint32_t)(0x10197d68), (0x1u));
L_1018a7dc:;
  /* 1018a7dc ret  */
  ESPCHK(0x1018a7c1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7e0 @ 0x1018a7e0 (664 bytes, 266 insns) [15 switch table(s)] */
void f_1018a7e0(void) {
  FTRACE(0x1018a7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018a7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1018a7e1 mov ebp, esp */
  EBP = (ESP);
  /* 1018a7e3 push edi */
  push32((uint32_t)(EDI));
  /* 1018a7e4 push esi */
  push32((uint32_t)(ESI));
  /* 1018a7e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1018a7e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1018a7eb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1018a7ee mov eax, ecx */
  EAX = (ECX);
  /* 1018a7f0 mov edx, ecx */
  EDX = (ECX);
  /* 1018a7f2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018a7f4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a7f6 jbe 0x1018a800 */
  if ((C.cf||C.zf)) goto L_1018a800;
  /* 1018a7f8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a7fa jb 0x1018a978 */
  if (C.cf) goto L_1018a978;
L_1018a800:;
  /* 1018a800 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1018a806 jne 0x1018a81c */
  if (!C.zf) goto L_1018a81c;
  /* 1018a808 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1018a80b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1018a80e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a811 jb 0x1018a83c */
  if (C.cf) goto L_1018a83c;
  /* 1018a813 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1018a815 jmp dword ptr [edx*4 + 0x1018a928] */
  switch (EDX) {
    case 0: goto L_1018a938;
    case 1: goto L_1018a940;
    case 2: goto L_1018a94c;
    case 3: goto L_1018a960;
    default: x86_unimpl("switch@0x1018a815 out of table"); return;
  }
L_1018a81c:;
  /* 1018a81c mov eax, edi */
  EAX = (EDI);
  /* 1018a81e mov edx, 3 */
  EDX = (0x3u);
  /* 1018a823 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018a826 jb 0x1018a834 */
  if (C.cf) goto L_1018a834;
  /* 1018a828 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1018a82b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018a82d jmp dword ptr [eax*4 + 0x1018a840] */
  switch (EAX) {
    case 1: goto L_1018a850;
    case 2: goto L_1018a87c;
    case 3: goto L_1018a8a0;
    default: x86_unimpl("switch@0x1018a82d out of table"); return;
  }
L_1018a834:;
  /* 1018a834 jmp dword ptr [ecx*4 + 0x1018a938] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1018a938)))); return;
  /* 1018a83b nop  */
  /* nop */
L_1018a83c:;
  /* 1018a83c jmp dword ptr [ecx*4 + 0x1018a8bc] */
  switch (ECX) {
    case 0: goto L_1018a91f;
    case 1: goto L_1018a90c;
    case 2: goto L_1018a904;
    case 3: goto L_1018a8fc;
    case 4: goto L_1018a8f4;
    case 5: goto L_1018a8ec;
    case 6: goto L_1018a8e4;
    case 7: goto L_1018a8dc;
    default: x86_unimpl("switch@0x1018a83c out of table"); return;
  }
  /* 1018a843 nop  */
  /* nop */
L_1018a850:;
  /* 1018a850 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1018a852 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1018a854 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1018a856 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1018a859 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1018a85c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1018a85f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1018a862 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1018a865 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018a868 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018a86b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a86e jb 0x1018a83c */
  if (C.cf) goto L_1018a83c;
  /* 1018a870 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1018a872 jmp dword ptr [edx*4 + 0x1018a928] */
  switch (EDX) {
    case 0: goto L_1018a938;
    case 1: goto L_1018a940;
    case 2: goto L_1018a94c;
    case 3: goto L_1018a960;
    default: x86_unimpl("switch@0x1018a872 out of table"); return;
  }
  /* 1018a879 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1018a87c:;
  /* 1018a87c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1018a87e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1018a880 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1018a882 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1018a885 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1018a888 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1018a88b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018a88e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018a891 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a894 jb 0x1018a83c */
  if (C.cf) goto L_1018a83c;
  /* 1018a896 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1018a898 jmp dword ptr [edx*4 + 0x1018a928] */
  switch (EDX) {
    case 0: goto L_1018a938;
    case 1: goto L_1018a940;
    case 2: goto L_1018a94c;
    case 3: goto L_1018a960;
    default: x86_unimpl("switch@0x1018a898 out of table"); return;
  }
  /* 1018a89f nop  */
  /* nop */
L_1018a8a0:;
  /* 1018a8a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1018a8a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1018a8a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1018a8a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1018a8a7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1018a8aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1018a8ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a8ae jb 0x1018a83c */
  if (C.cf) goto L_1018a83c;
  /* 1018a8b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1018a8b2 jmp dword ptr [edx*4 + 0x1018a928] */
  switch (EDX) {
    case 0: goto L_1018a938;
    case 1: goto L_1018a940;
    case 2: goto L_1018a94c;
    case 3: goto L_1018a960;
    default: x86_unimpl("switch@0x1018a8b2 out of table"); return;
  }
  /* 1018a8b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1018a8dc:;
  /* 1018a8dc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1018a8e0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1018a8e4:;
  /* 1018a8e4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1018a8e8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1018a8ec:;
  /* 1018a8ec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1018a8f0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1018a8f4:;
  /* 1018a8f4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1018a8f8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1018a8fc:;
  /* 1018a8fc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1018a900 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1018a904:;
  /* 1018a904 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1018a908 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1018a90c:;
  /* 1018a90c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1018a910 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1018a914 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1018a91b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018a91d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1018a91f:;
  /* 1018a91f jmp dword ptr [edx*4 + 0x1018a928] */
  switch (EDX) {
    case 0: goto L_1018a938;
    case 1: goto L_1018a940;
    case 2: goto L_1018a94c;
    case 3: goto L_1018a960;
    default: x86_unimpl("switch@0x1018a91f out of table"); return;
  }
  /* 1018a926 mov edi, edi */
  EDI = (EDI);
L_1018a938:;
  /* 1018a938 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018a93b pop esi */
  ESI = (pop32());
  /* 1018a93c pop edi */
  EDI = (pop32());
  /* 1018a93d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018a93e ret  */
  ESPCHK(0x1018a7e0u, _esp0);
  ESP += 4; return;
  /* 1018a93f nop  */
  /* nop */
L_1018a940:;
  /* 1018a940 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1018a942 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1018a944 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018a947 pop esi */
  ESI = (pop32());
  /* 1018a948 pop edi */
  EDI = (pop32());
  /* 1018a949 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018a94a ret  */
  ESPCHK(0x1018a7e0u, _esp0);
  ESP += 4; return;
  /* 1018a94b nop  */
  /* nop */
L_1018a94c:;
  /* 1018a94c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1018a94e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1018a950 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1018a953 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1018a956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018a959 pop esi */
  ESI = (pop32());
  /* 1018a95a pop edi */
  EDI = (pop32());
  /* 1018a95b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018a95c ret  */
  ESPCHK(0x1018a7e0u, _esp0);
  ESP += 4; return;
  /* 1018a95d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1018a960:;
  /* 1018a960 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1018a962 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1018a964 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1018a967 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1018a96a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1018a96d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1018a970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018a973 pop esi */
  ESI = (pop32());
  /* 1018a974 pop edi */
  EDI = (pop32());
  /* 1018a975 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018a976 ret  */
  ESPCHK(0x1018a7e0u, _esp0);
  ESP += 4; return;
  /* 1018a977 nop  */
  /* nop */
L_1018a978:;
  /* 1018a978 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1018a97c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1018a980 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1018a986 jne 0x1018a9ac */
  if (!C.zf) goto L_1018a9ac;
  /* 1018a988 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1018a98b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1018a98e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a991 jb 0x1018a9a0 */
  if (C.cf) goto L_1018a9a0;
  /* 1018a993 std  */
  C.df=1;
  /* 1018a994 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1018a996 cld  */
  C.df=0;
  /* 1018a997 jmp dword ptr [edx*4 + 0x1018aac0] */
  switch (EDX) {
    case 0: goto L_1018aad0;
    case 1: goto L_1018aad8;
    case 2: goto L_1018aae8;
    case 3: goto L_1018aafc;
    default: x86_unimpl("switch@0x1018a997 out of table"); return;
  }
  /* 1018a99e mov edi, edi */
  EDI = (EDI);
L_1018a9a0:;
  /* 1018a9a0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1018a9a2 jmp dword ptr [ecx*4 + 0x1018aa70] */
  switch (ECX) {
    case 0: goto L_1018aab7;
    default: x86_unimpl("switch@0x1018a9a2 out of table"); return;
  }
  /* 1018a9a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1018a9ac:;
  /* 1018a9ac mov eax, edi */
  EAX = (EDI);
  /* 1018a9ae mov edx, 3 */
  EDX = (0x3u);
  /* 1018a9b3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a9b6 jb 0x1018a9c4 */
  if (C.cf) goto L_1018a9c4;
  /* 1018a9b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1018a9bb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018a9bd jmp dword ptr [eax*4 + 0x1018a9c8] */
  switch (EAX) {
    case 1: goto L_1018a9d8;
    case 2: goto L_1018a9f8;
    case 3: goto L_1018aa20;
    default: x86_unimpl("switch@0x1018a9bd out of table"); return;
  }
L_1018a9c4:;
  /* 1018a9c4 jmp dword ptr [ecx*4 + 0x1018aac0] */
  switch (ECX) {
    case 0: goto L_1018aad0;
    case 1: goto L_1018aad8;
    case 2: goto L_1018aae8;
    case 3: goto L_1018aafc;
    default: x86_unimpl("switch@0x1018a9c4 out of table"); return;
  }
  /* 1018a9cb nop  */
  /* nop */
L_1018a9d8:;
  /* 1018a9d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1018a9db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1018a9dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1018a9e0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1018a9e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1018a9e4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1018a9e5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018a9e8 jb 0x1018a9a0 */
  if (C.cf) goto L_1018a9a0;
  /* 1018a9ea std  */
  C.df=1;
  /* 1018a9eb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1018a9ed cld  */
  C.df=0;
  /* 1018a9ee jmp dword ptr [edx*4 + 0x1018aac0] */
  switch (EDX) {
    case 0: goto L_1018aad0;
    case 1: goto L_1018aad8;
    case 2: goto L_1018aae8;
    case 3: goto L_1018aafc;
    default: x86_unimpl("switch@0x1018a9ee out of table"); return;
  }
  /* 1018a9f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1018a9f8:;
  /* 1018a9f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1018a9fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1018a9fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
L_1018aa00:;
  /* 1018aa00 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1018aa03 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1018aa06 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1018aa09 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018aa0c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018aa0f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018aa12 jb 0x1018a9a0 */
  if (C.cf) goto L_1018a9a0;
  /* 1018aa14 std  */
  C.df=1;
  /* 1018aa15 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1018aa17 cld  */
  C.df=0;
  /* 1018aa18 jmp dword ptr [edx*4 + 0x1018aac0] */
  switch (EDX) {
    case 0: goto L_1018aad0;
    case 1: goto L_1018aad8;
    case 2: goto L_1018aae8;
    case 3: goto L_1018aafc;
    default: x86_unimpl("switch@0x1018aa18 out of table"); return;
  }
  /* 1018aa1f nop  */
  /* nop */
L_1018aa20:;
  /* 1018aa20 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1018aa23 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1018aa25 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1018aa28 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1018aa2b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1018aa2e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1018aa31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1018aa34 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1018aa37 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018aa3a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018aa3d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018aa40 jb 0x1018a9a0 */
  if (C.cf) goto L_1018a9a0;
  /* 1018aa46 std  */
  C.df=1;
  /* 1018aa47 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1018aa49 cld  */
  C.df=0;
  /* 1018aa4a jmp dword ptr [edx*4 + 0x1018aac0] */
  switch (EDX) {
    case 0: goto L_1018aad0;
    case 1: goto L_1018aad8;
    case 2: goto L_1018aae8;
    case 3: goto L_1018aafc;
    default: x86_unimpl("switch@0x1018aa4a out of table"); return;
  }
  /* 1018aa51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1018aa54 je 0x1018aa00 */
  if (C.zf) goto L_1018aa00;
  /* 1018aa56 sbb byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a-_b-C.cf; w8((uint32_t)(EAX), (_r)); fl_sub(_a,_b,_r,8); }
  /* 1018aa58 jl 0x1018aa04 */
  if ((C.sf!=C.of)) goto L_1018aa04;
  /* 1018aa5a sbb byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a-_b-C.cf; w8((uint32_t)(EAX), (_r)); fl_sub(_a,_b,_r,8); }
  /* 1018aa5c test byte ptr [edx - 0x5573efe8], ch */
  { uint32_t _r=(r8((uint32_t)(EDX + -0x5573efe8)))&(C.c.b.h); fl_logic(_r,8); }
  /* 1018aa62 sbb byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a-_b-C.cf; w8((uint32_t)(EAX), (_r)); fl_sub(_a,_b,_r,8); }
  /* 1018aa64 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1018aa65 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1018aa66 sbb byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a-_b-C.cf; w8((uint32_t)(EAX), (_r)); fl_sub(_a,_b,_r,8); }
  /* 1018aa68 pushfd  */
  x86_unimpl("pushfd @ 0x1018aa68");
  /* 1018aa69 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1018aa6a sbb byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a-_b-C.cf; w8((uint32_t)(EAX), (_r)); fl_sub(_a,_b,_r,8); }
  /* 1018aa6c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1018aa6d stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1018aa6e sbb byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a-_b-C.cf; w8((uint32_t)(EAX), (_r)); fl_sub(_a,_b,_r,8); }
  /* 1018aa74 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1018aa78 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1018aa7c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1018aa80 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1018aa84 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1018aa88 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1018aa8c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1018aa90 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1018aa94 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1018aa98 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1018aa9c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1018aaa0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1018aaa4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1018aaa8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1018aaac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1018aab3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018aab5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1018aab7:;
  /* 1018aab7 jmp dword ptr [edx*4 + 0x1018aac0] */
  switch (EDX) {
    case 0: goto L_1018aad0;
    case 1: goto L_1018aad8;
    case 2: goto L_1018aae8;
    case 3: goto L_1018aafc;
    default: x86_unimpl("switch@0x1018aab7 out of table"); return;
  }
  /* 1018aabe mov edi, edi */
  EDI = (EDI);
L_1018aad0:;
  /* 1018aad0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018aad3 pop esi */
  ESI = (pop32());
  /* 1018aad4 pop edi */
  EDI = (pop32());
  /* 1018aad5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018aad6 ret  */
  ESPCHK(0x1018a7e0u, _esp0);
  ESP += 4; return;
  /* 1018aad7 nop  */
  /* nop */
L_1018aad8:;
  /* 1018aad8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1018aadb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1018aade mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018aae1 pop esi */
  ESI = (pop32());
  /* 1018aae2 pop edi */
  EDI = (pop32());
  /* 1018aae3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018aae4 ret  */
  ESPCHK(0x1018a7e0u, _esp0);
  ESP += 4; return;
  /* 1018aae5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1018aae8:;
  /* 1018aae8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1018aaeb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1018aaee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1018aaf1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1018aaf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018aaf7 pop esi */
  ESI = (pop32());
  /* 1018aaf8 pop edi */
  EDI = (pop32());
  /* 1018aaf9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018aafa ret  */
  ESPCHK(0x1018a7e0u, _esp0);
  ESP += 4; return;
  /* 1018aafb nop  */
  /* nop */
L_1018aafc:;
  /* 1018aafc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1018aaff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1018ab02 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1018ab05 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1018ab08 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1018ab0b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1018ab0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018ab11 pop esi */
  ESI = (pop32());
  /* 1018ab12 pop edi */
  EDI = (pop32());
  /* 1018ab13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018ab14 ret  */
  ESPCHK(0x1018a7e0u, _esp0);
  ESP += 4; return;
L_1018aa04: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1018aa04 (unresolved jump table)"); return;
}

/* FUN_1000ab15 @ 0x1018ab15 (23 bytes, 7 insns) */
void f_1018ab15(void) {
  FTRACE(0x1018ab15u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018ab15 push 0 */
  push32((uint32_t)(0x0u));
  /* 1018ab17 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1018ab1b push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1018ab1f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1018ab23 call 0x1018ab2c */
  push32(0x1018ab28u); f_1018ab2c();
  /* 1018ab28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018ab2b ret  */
  ESPCHK(0x1018ab15u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab2c @ 0x1018ab2c (517 bytes, 195 insns) */
void f_1018ab2c(void) {
  FTRACE(0x1018ab2cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018ab2c push ebp */
  push32((uint32_t)(EBP));
  /* 1018ab2d mov ebp, esp */
  EBP = (ESP);
  /* 1018ab2f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018ab32 push ebx */
  push32((uint32_t)(EBX));
  /* 1018ab33 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1018ab37 push esi */
  push32((uint32_t)(ESI));
  /* 1018ab38 push edi */
  push32((uint32_t)(EDI));
  /* 1018ab39 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1018ab3c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1018ab3e lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 1018ab41 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1018ab44:;
  /* 1018ab44 cmp dword ptr [0x10190c00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10190c00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018ab4b jle 0x1018ab5c */
  if ((C.zf||C.sf!=C.of)) goto L_1018ab5c;
  /* 1018ab4d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1018ab50 push 8 */
  push32((uint32_t)(0x8u));
  /* 1018ab52 push eax */
  push32((uint32_t)(EAX));
  /* 1018ab53 call 0x101893cb */
  push32(0x1018ab58u); f_101893cb();
  /* 1018ab58 pop ecx */
  ECX = (pop32());
  /* 1018ab59 pop ecx */
  ECX = (pop32());
  /* 1018ab5a jmp 0x1018ab6b */
  goto L_1018ab6b;
L_1018ab5c:;
  /* 1018ab5c mov ecx, dword ptr [0x101909f0] */
  ECX = (r32((uint32_t)(0x101909f0)));
  /* 1018ab62 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1018ab65 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1018ab68 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_1018ab6b:;
  /* 1018ab6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018ab6d je 0x1018ab74 */
  if (C.zf) goto L_1018ab74;
  /* 1018ab6f mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 1018ab71 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1018ab72 jmp 0x1018ab44 */
  goto L_1018ab44;
L_1018ab74:;
  /* 1018ab74 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018ab77 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 1018ab7a jne 0x1018ab82 */
  if (!C.zf) goto L_1018ab82;
  /* 1018ab7c or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1018ab80 jmp 0x1018ab87 */
  goto L_1018ab87;
L_1018ab82:;
  /* 1018ab82 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018ab85 jne 0x1018ab8d */
  if (!C.zf) goto L_1018ab8d;
L_1018ab87:;
  /* 1018ab87 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 1018ab89 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1018ab8a mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1018ab8d:;
  /* 1018ab8d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1018ab90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018ab92 jl 0x1018ad21 */
  if ((C.sf!=C.of)) goto L_1018ad21;
  /* 1018ab98 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018ab9b je 0x1018ad21 */
  if (C.zf) goto L_1018ad21;
  /* 1018aba1 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018aba4 jg 0x1018ad21 */
  if ((!C.zf&&C.sf==C.of)) goto L_1018ad21;
  /* 1018abaa push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1018abac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018abae pop ecx */
  ECX = (pop32());
  /* 1018abaf jne 0x1018abd5 */
  if (!C.zf) goto L_1018abd5;
  /* 1018abb1 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018abb4 je 0x1018abbf */
  if (C.zf) goto L_1018abbf;
  /* 1018abb6 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 1018abbd jmp 0x1018abf1 */
  goto L_1018abf1;
L_1018abbf:;
  /* 1018abbf mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1018abc1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018abc3 je 0x1018abd2 */
  if (C.zf) goto L_1018abd2;
  /* 1018abc5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018abc7 je 0x1018abd2 */
  if (C.zf) goto L_1018abd2;
  /* 1018abc9 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 1018abd0 jmp 0x1018abf1 */
  goto L_1018abf1;
L_1018abd2:;
  /* 1018abd2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1018abd5:;
  /* 1018abd5 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018abd8 jne 0x1018abf1 */
  if (!C.zf) goto L_1018abf1;
  /* 1018abda cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018abdd jne 0x1018abf1 */
  if (!C.zf) goto L_1018abf1;
  /* 1018abdf mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1018abe1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018abe3 je 0x1018abe9 */
  if (C.zf) goto L_1018abe9;
  /* 1018abe5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018abe7 jne 0x1018abf1 */
  if (!C.zf) goto L_1018abf1;
L_1018abe9:;
  /* 1018abe9 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 1018abec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1018abed inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1018abee mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1018abf1:;
  /* 1018abf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1018abf4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1018abf6 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1018abf9 mov edi, 0x103 */
  EDI = (0x103u);
  /* 1018abfe mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1018ac01:;
  /* 1018ac01 cmp dword ptr [0x10190c00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10190c00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018ac08 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1018ac0b jle 0x1018ac19 */
  if ((C.zf||C.sf!=C.of)) goto L_1018ac19;
  /* 1018ac0d push 4 */
  push32((uint32_t)(0x4u));
  /* 1018ac0f push esi */
  push32((uint32_t)(ESI));
  /* 1018ac10 call 0x101893cb */
  push32(0x1018ac15u); f_101893cb();
  /* 1018ac15 pop ecx */
  ECX = (pop32());
  /* 1018ac16 pop ecx */
  ECX = (pop32());
  /* 1018ac17 jmp 0x1018ac24 */
  goto L_1018ac24;
L_1018ac19:;
  /* 1018ac19 mov eax, dword ptr [0x101909f0] */
  EAX = (r32((uint32_t)(0x101909f0)));
  /* 1018ac1e mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 1018ac21 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1018ac24:;
  /* 1018ac24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018ac26 je 0x1018ac30 */
  if (C.zf) goto L_1018ac30;
  /* 1018ac28 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1018ac2b sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018ac2e jmp 0x1018ac62 */
  goto L_1018ac62;
L_1018ac30:;
  /* 1018ac30 cmp dword ptr [0x10190c00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10190c00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018ac37 jle 0x1018ac44 */
  if ((C.zf||C.sf!=C.of)) goto L_1018ac44;
  /* 1018ac39 push edi */
  push32((uint32_t)(EDI));
  /* 1018ac3a push esi */
  push32((uint32_t)(ESI));
  /* 1018ac3b call 0x101893cb */
  push32(0x1018ac40u); f_101893cb();
  /* 1018ac40 pop ecx */
  ECX = (pop32());
  /* 1018ac41 pop ecx */
  ECX = (pop32());
  /* 1018ac42 jmp 0x1018ac4f */
  goto L_1018ac4f;
L_1018ac44:;
  /* 1018ac44 mov eax, dword ptr [0x101909f0] */
  EAX = (r32((uint32_t)(0x101909f0)));
  /* 1018ac49 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 1018ac4d and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_1018ac4f:;
  /* 1018ac4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018ac51 je 0x1018ac9d */
  if (C.zf) goto L_1018ac9d;
  /* 1018ac53 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1018ac56 push eax */
  push32((uint32_t)(EAX));
  /* 1018ac57 call 0x1018d108 */
  push32(0x1018ac5cu); f_1018d108();
  /* 1018ac5c pop ecx */
  ECX = (pop32());
  /* 1018ac5d mov ecx, eax */
  ECX = (EAX);
  /* 1018ac5f sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_1018ac62:;
  /* 1018ac62 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018ac65 jae 0x1018ac9d */
  if (!C.cf) goto L_1018ac9d;
  /* 1018ac67 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 1018ac6a or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1018ac6e cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018ac71 jb 0x1018ac87 */
  if (C.cf) goto L_1018ac87;
  /* 1018ac73 jne 0x1018ac81 */
  if (!C.zf) goto L_1018ac81;
  /* 1018ac75 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1018ac78 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1018ac7a div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1018ac7d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018ac7f jbe 0x1018ac87 */
  if ((C.cf||C.zf)) goto L_1018ac87;
L_1018ac81:;
  /* 1018ac81 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1018ac85 jmp 0x1018ac90 */
  goto L_1018ac90;
L_1018ac87:;
  /* 1018ac87 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1018ac8b add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018ac8d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_1018ac90:;
  /* 1018ac90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1018ac93 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1018ac96 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1018ac98 jmp 0x1018ac01 */
  goto L_1018ac01;
L_1018ac9d:;
  /* 1018ac9d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1018aca0 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1018aca3 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1018aca6 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1018aca8 jne 0x1018acba */
  if (!C.zf) goto L_1018acba;
  /* 1018acaa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1018acac je 0x1018acb4 */
  if (C.zf) goto L_1018acb4;
  /* 1018acae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018acb1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1018acb4:;
  /* 1018acb4 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1018acb8 jmp 0x1018ad05 */
  goto L_1018ad05;
L_1018acba:;
  /* 1018acba test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 1018acbc mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 1018acc1 jne 0x1018acde */
  if (!C.zf) goto L_1018acde;
  /* 1018acc3 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 1018acc5 jne 0x1018ad05 */
  if (!C.zf) goto L_1018ad05;
  /* 1018acc7 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1018acca je 0x1018acd5 */
  if (C.zf) goto L_1018acd5;
  /* 1018accc cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018acd3 ja 0x1018acde */
  if ((!C.cf&&!C.zf)) goto L_1018acde;
L_1018acd5:;
  /* 1018acd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018acd7 jne 0x1018ad05 */
  if (!C.zf) goto L_1018ad05;
  /* 1018acd9 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018acdc jbe 0x1018ad05 */
  if ((C.cf||C.zf)) goto L_1018ad05;
L_1018acde:;
  /* 1018acde call 0x1018bf71 */
  push32(0x1018ace3u); f_1018bf71();
  /* 1018ace3 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 1018ace7 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 1018aced je 0x1018acf5 */
  if (C.zf) goto L_1018acf5;
  /* 1018acef or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1018acf3 jmp 0x1018ad05 */
  goto L_1018ad05;
L_1018acf5:;
  /* 1018acf5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1018acf8 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1018acfa neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 1018acfc sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018acfe neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1018ad00 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018ad02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1018ad05:;
  /* 1018ad05 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1018ad07 je 0x1018ad0e */
  if (C.zf) goto L_1018ad0e;
  /* 1018ad09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1018ad0c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_1018ad0e:;
  /* 1018ad0e test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 1018ad12 je 0x1018ad1c */
  if (C.zf) goto L_1018ad1c;
  /* 1018ad14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1018ad17 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1018ad19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1018ad1c:;
  /* 1018ad1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1018ad1f jmp 0x1018ad2c */
  goto L_1018ad2c;
L_1018ad21:;
  /* 1018ad21 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1018ad24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018ad26 je 0x1018ad2a */
  if (C.zf) goto L_1018ad2a;
  /* 1018ad28 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_1018ad2a:;
  /* 1018ad2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1018ad2c:;
  /* 1018ad2c pop edi */
  EDI = (pop32());
  /* 1018ad2d pop esi */
  ESI = (pop32());
  /* 1018ad2e pop ebx */
  EBX = (pop32());
  /* 1018ad2f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018ad30 ret  */
  ESPCHK(0x1018ab2cu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x1018ad50 (193 bytes, 90 insns) */
void f_1018ad50(void) {
  FTRACE(0x1018ad50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018ad50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018ad52 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1018ad56 push ebx */
  push32((uint32_t)(EBX));
  /* 1018ad57 mov ebx, eax */
  EBX = (EAX);
  /* 1018ad59 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1018ad5c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1018ad60 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1018ad66 je 0x1018ad7b */
  if (C.zf) goto L_1018ad7b;
L_1018ad68:;
  /* 1018ad68 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1018ad6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1018ad6b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018ad6d je 0x1018ad40 */
  if (C.zf) { jmp_ind(0x1018ad40u); return; }
  /* 1018ad6f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 1018ad71 je 0x1018adc4 */
  if (C.zf) goto L_1018adc4;
  /* 1018ad73 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1018ad79 jne 0x1018ad68 */
  if (!C.zf) goto L_1018ad68;
L_1018ad7b:;
  /* 1018ad7b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1018ad7d push edi */
  push32((uint32_t)(EDI));
  /* 1018ad7e mov eax, ebx */
  EAX = (EBX);
  /* 1018ad80 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 1018ad83 push esi */
  push32((uint32_t)(ESI));
  /* 1018ad84 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_1018ad86:;
  /* 1018ad86 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1018ad88 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1018ad8d mov eax, ecx */
  EAX = (ECX);
  /* 1018ad8f mov esi, edi */
  ESI = (EDI);
  /* 1018ad91 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 1018ad93 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018ad95 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018ad97 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1018ad9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1018ad9d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1018ad9f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1018ada1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018ada4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1018adaa jne 0x1018adc8 */
  if (!C.zf) goto L_1018adc8;
  /* 1018adac and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1018adb1 je 0x1018ad86 */
  if (C.zf) goto L_1018ad86;
  /* 1018adb3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1018adb8 jne 0x1018adc2 */
  if (!C.zf) goto L_1018adc2;
  /* 1018adba and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 1018adc0 jne 0x1018ad86 */
  if (!C.zf) goto L_1018ad86;
L_1018adc2:;
  /* 1018adc2 pop esi */
  ESI = (pop32());
  /* 1018adc3 pop edi */
  EDI = (pop32());
L_1018adc4:;
  /* 1018adc4 pop ebx */
  EBX = (pop32());
  /* 1018adc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018adc7 ret  */
  ESPCHK(0x1018ad50u, _esp0);
  ESP += 4; return;
L_1018adc8:;
  /* 1018adc8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1018adcb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018adcd je 0x1018ae05 */
  if (C.zf) goto L_1018ae05;
  /* 1018adcf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1018add1 je 0x1018adc2 */
  if (C.zf) goto L_1018adc2;
  /* 1018add3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018add5 je 0x1018adfe */
  if (C.zf) goto L_1018adfe;
  /* 1018add7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1018add9 je 0x1018adc2 */
  if (C.zf) goto L_1018adc2;
  /* 1018addb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1018adde cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018ade0 je 0x1018adf7 */
  if (C.zf) goto L_1018adf7;
  /* 1018ade2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1018ade4 je 0x1018adc2 */
  if (C.zf) goto L_1018adc2;
  /* 1018ade6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018ade8 je 0x1018adf0 */
  if (C.zf) goto L_1018adf0;
  /* 1018adea test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1018adec je 0x1018adc2 */
  if (C.zf) goto L_1018adc2;
  /* 1018adee jmp 0x1018ad86 */
  goto L_1018ad86;
L_1018adf0:;
  /* 1018adf0 pop esi */
  ESI = (pop32());
  /* 1018adf1 pop edi */
  EDI = (pop32());
  /* 1018adf2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 1018adf5 pop ebx */
  EBX = (pop32());
  /* 1018adf6 ret  */
  ESPCHK(0x1018ad50u, _esp0);
  ESP += 4; return;
L_1018adf7:;
  /* 1018adf7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1018adfa pop esi */
  ESI = (pop32());
  /* 1018adfb pop edi */
  EDI = (pop32());
  /* 1018adfc pop ebx */
  EBX = (pop32());
  /* 1018adfd ret  */
  ESPCHK(0x1018ad50u, _esp0);
  ESP += 4; return;
L_1018adfe:;
  /* 1018adfe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 1018ae01 pop esi */
  ESI = (pop32());
  /* 1018ae02 pop edi */
  EDI = (pop32());
  /* 1018ae03 pop ebx */
  EBX = (pop32());
  /* 1018ae04 ret  */
  ESPCHK(0x1018ad50u, _esp0);
  ESP += 4; return;
L_1018ae05:;
  /* 1018ae05 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 1018ae08 pop esi */
  ESI = (pop32());
  /* 1018ae09 pop edi */
  EDI = (pop32());
  /* 1018ae0a pop ebx */
  EBX = (pop32());
  /* 1018ae0b ret  */
  ESPCHK(0x1018ad50u, _esp0);
  ESP += 4; return;
  /* 1018ae0c int3  */
  x86_unimpl("int3 @ 0x1018ae0c");
  /* 1018ae0d int3  */
  x86_unimpl("int3 @ 0x1018ae0d");
  /* 1018ae0e int3  */
  x86_unimpl("int3 @ 0x1018ae0e");
  /* 1018ae0f int3  */
  x86_unimpl("int3 @ 0x1018ae0f");
}

/* _strstr @ 0x1018ae10 (128 bytes, 66 insns) */
void f_1018ae10(void) {
  FTRACE(0x1018ae10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018ae10 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1018ae14 push edi */
  push32((uint32_t)(EDI));
  /* 1018ae15 push ebx */
  push32((uint32_t)(EBX));
  /* 1018ae16 push esi */
  push32((uint32_t)(ESI));
  /* 1018ae17 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1018ae19 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1018ae1d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1018ae1f je 0x1018ae8a */
  if (C.zf) goto L_1018ae8a;
  /* 1018ae21 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 1018ae24 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1018ae26 je 0x1018ae77 */
  if (C.zf) goto L_1018ae77;
L_1018ae28:;
  /* 1018ae28 mov esi, edi */
  ESI = (EDI);
  /* 1018ae2a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1018ae2e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1018ae30 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1018ae31 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018ae33 je 0x1018ae4a */
  if (C.zf) goto L_1018ae4a;
  /* 1018ae35 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1018ae37 je 0x1018ae44 */
  if (C.zf) goto L_1018ae44;
L_1018ae39:;
  /* 1018ae39 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1018ae3b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1018ae3c:;
  /* 1018ae3c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018ae3e je 0x1018ae4a */
  if (C.zf) goto L_1018ae4a;
  /* 1018ae40 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1018ae42 jne 0x1018ae39 */
  if (!C.zf) goto L_1018ae39;
L_1018ae44:;
  /* 1018ae44 pop esi */
  ESI = (pop32());
  /* 1018ae45 pop ebx */
  EBX = (pop32());
  /* 1018ae46 pop edi */
  EDI = (pop32());
  /* 1018ae47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018ae49 ret  */
  ESPCHK(0x1018ae10u, _esp0);
  ESP += 4; return;
L_1018ae4a:;
  /* 1018ae4a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1018ae4c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1018ae4d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018ae4f jne 0x1018ae3c */
  if (!C.zf) goto L_1018ae3c;
  /* 1018ae51 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_1018ae54:;
  /* 1018ae54 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 1018ae57 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1018ae59 je 0x1018ae83 */
  if (C.zf) goto L_1018ae83;
  /* 1018ae5b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1018ae5d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018ae60 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018ae62 jne 0x1018ae28 */
  if (!C.zf) goto L_1018ae28;
  /* 1018ae64 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 1018ae67 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1018ae69 je 0x1018ae83 */
  if (C.zf) goto L_1018ae83;
  /* 1018ae6b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 1018ae6e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018ae71 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018ae73 je 0x1018ae54 */
  if (C.zf) goto L_1018ae54;
  /* 1018ae75 jmp 0x1018ae28 */
  goto L_1018ae28;
L_1018ae77:;
  /* 1018ae77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018ae79 pop esi */
  ESI = (pop32());
  /* 1018ae7a pop ebx */
  EBX = (pop32());
  /* 1018ae7b pop edi */
  EDI = (pop32());
  /* 1018ae7c mov al, dl */
  AL = (DL);
  /* 1018ae7e jmp 0x1018ad56 */
  jmp_ind(0x1018ad56u); return;
L_1018ae83:;
  /* 1018ae83 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 1018ae86 pop esi */
  ESI = (pop32());
  /* 1018ae87 pop ebx */
  EBX = (pop32());
  /* 1018ae88 pop edi */
  EDI = (pop32());
  /* 1018ae89 ret  */
  ESPCHK(0x1018ae10u, _esp0);
  ESP += 4; return;
L_1018ae8a:;
  /* 1018ae8a mov eax, edi */
  EAX = (EDI);
  /* 1018ae8c pop esi */
  ESI = (pop32());
  /* 1018ae8d pop ebx */
  EBX = (pop32());
  /* 1018ae8e pop edi */
  EDI = (pop32());
  /* 1018ae8f ret  */
  ESPCHK(0x1018ae10u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1018ae90 (56 bytes, 31 insns) */
void f_1018ae90(void) {
  FTRACE(0x1018ae90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018ae90 push ebp */
  push32((uint32_t)(EBP));
  /* 1018ae91 mov ebp, esp */
  EBP = (ESP);
  /* 1018ae93 push edi */
  push32((uint32_t)(EDI));
  /* 1018ae94 push esi */
  push32((uint32_t)(ESI));
  /* 1018ae95 push ebx */
  push32((uint32_t)(EBX));
  /* 1018ae96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1018ae99 jecxz 0x1018aec1 */
  x86_unimpl("jecxz @ 0x1018ae99");
  /* 1018ae9b mov ebx, ecx */
  EBX = (ECX);
  /* 1018ae9d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1018aea0 mov esi, edi */
  ESI = (EDI);
  /* 1018aea2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018aea4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1018aea6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1018aea8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018aeaa mov edi, esi */
  EDI = (ESI);
  /* 1018aeac mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1018aeaf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1018aeb1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1018aeb4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1018aeb6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018aeb9 ja 0x1018aebf */
  if ((!C.cf&&!C.zf)) goto L_1018aebf;
  /* 1018aebb je 0x1018aec1 */
  if (C.zf) goto L_1018aec1;
  /* 1018aebd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1018aebe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1018aebf:;
  /* 1018aebf not ecx */
  ECX = (~(ECX));
L_1018aec1:;
  /* 1018aec1 mov eax, ecx */
  EAX = (ECX);
  /* 1018aec3 pop ebx */
  EBX = (pop32());
  /* 1018aec4 pop esi */
  ESI = (pop32());
  /* 1018aec5 pop edi */
  EDI = (pop32());
  /* 1018aec6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018aec7 ret  */
  ESPCHK(0x1018ae90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aed0 @ 0x1018aed0 (47 bytes, 17 insns) */
void f_1018aed0(void) {
  FTRACE(0x1018aed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018aed0 push ecx */
  push32((uint32_t)(ECX));
  /* 1018aed1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018aed6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1018aeda jb 0x1018aef0 */
  if (C.cf) goto L_1018aef0;
L_1018aedc:;
  /* 1018aedc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018aee2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018aee7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1018aee9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018aeee jae 0x1018aedc */
  if (!C.cf) goto L_1018aedc;
L_1018aef0:;
  /* 1018aef0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018aef2 mov eax, esp */
  EAX = (ESP);
  /* 1018aef4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1018aef6 mov esp, ecx */
  ESP = (ECX);
  /* 1018aef8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1018aefa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1018aefd push eax */
  push32((uint32_t)(EAX));
  /* 1018aefe ret  */
  ESPCHK(0x1018aed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aeff @ 0x1018aeff (72 bytes, 17 insns) */
void f_1018aeff(void) {
  FTRACE(0x1018aeffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018aeff push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1018af04 push 0 */
  push32((uint32_t)(0x0u));
  /* 1018af06 push dword ptr [0x10197c44] */
  push32((uint32_t)(r32((uint32_t)(0x10197c44))));
  /* 1018af0c call dword ptr [0x1018e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e098))), 0x1018af12u);
  /* 1018af12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018af14 mov dword ptr [0x101969ec], eax */
  w32((uint32_t)(0x101969ec), (EAX));
  /* 1018af19 jne 0x1018af1c */
  if (!C.zf) goto L_1018af1c;
  /* 1018af1b ret  */
  ESPCHK(0x1018aeffu, _esp0);
  ESP += 4; return;
L_1018af1c:;
  /* 1018af1c mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1018af20 and dword ptr [0x101969e4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101969e4)))&(0x0u); w32((uint32_t)(0x101969e4), (_r)); fl_logic(_r,32); }
  /* 1018af27 and dword ptr [0x101969e8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101969e8)))&(0x0u); w32((uint32_t)(0x101969e8), (_r)); fl_logic(_r,32); }
  /* 1018af2e push 1 */
  push32((uint32_t)(0x1u));
  /* 1018af30 mov dword ptr [0x101969e0], eax */
  w32((uint32_t)(0x101969e0), (EAX));
  /* 1018af35 mov dword ptr [0x101969f0], ecx */
  w32((uint32_t)(0x101969f0), (ECX));
  /* 1018af3b mov dword ptr [0x101969d8], 0x10 */
  w32((uint32_t)(0x101969d8), (0x10u));
  /* 1018af45 pop eax */
  EAX = (pop32());
  /* 1018af46 ret  */
  ESPCHK(0x1018aeffu, _esp0);
  ESP += 4; return;
}

/* FUN_1000af47 @ 0x1018af47 (43 bytes, 14 insns) */
void f_1018af47(void) {
  FTRACE(0x1018af47u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018af47 mov eax, dword ptr [0x101969e8] */
  EAX = (r32((uint32_t)(0x101969e8)));
  /* 1018af4c lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1018af4f mov eax, dword ptr [0x101969ec] */
  EAX = (r32((uint32_t)(0x101969ec)));
  /* 1018af54 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_1018af57:;
  /* 1018af57 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018af59 jae 0x1018af6f */
  if (!C.cf) goto L_1018af6f;
  /* 1018af5b mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1018af5f sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018af62 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018af68 jb 0x1018af71 */
  if (C.cf) goto L_1018af71;
  /* 1018af6a add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018af6d jmp 0x1018af57 */
  goto L_1018af57;
L_1018af6f:;
  /* 1018af6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1018af71:;
  /* 1018af71 ret  */
  ESPCHK(0x1018af47u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af72 @ 0x1018af72 (809 bytes, 265 insns) */
void f_1018af72(void) {
  FTRACE(0x1018af72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018af72 push ebp */
  push32((uint32_t)(EBP));
  /* 1018af73 mov ebp, esp */
  EBP = (ESP);
  /* 1018af75 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018af78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018af7b push ebx */
  push32((uint32_t)(EBX));
  /* 1018af7c push esi */
  push32((uint32_t)(ESI));
  /* 1018af7d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1018af80 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 1018af83 push edi */
  push32((uint32_t)(EDI));
  /* 1018af84 mov edi, esi */
  EDI = (ESI);
  /* 1018af86 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018af89 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018af8c shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 1018af8f mov ecx, edi */
  ECX = (EDI);
  /* 1018af91 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1018af97 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1018af9e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1018afa1 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1018afa3 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1018afa4 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 1018afa7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1018afaa jne 0x1018b296 */
  if (!C.zf) goto L_1018b296;
  /* 1018afb0 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 1018afb3 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 1018afb6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1018afb9 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 1018afbc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1018afbf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1018afc2 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1018afc5 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 1018afc8 jne 0x1018b048 */
  if (!C.zf) goto L_1018b048;
  /* 1018afca sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1018afcd dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1018afce cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018afd1 jbe 0x1018afd6 */
  if ((C.cf||C.zf)) goto L_1018afd6;
  /* 1018afd3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1018afd5 pop edx */
  EDX = (pop32());
L_1018afd6:;
  /* 1018afd6 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1018afd9 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018afdc jne 0x1018b02a */
  if (!C.zf) goto L_1018b02a;
  /* 1018afde cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018afe1 jae 0x1018b001 */
  if (!C.cf) goto L_1018b001;
  /* 1018afe3 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1018afe8 mov ecx, edx */
  ECX = (EDX);
  /* 1018afea shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1018afec lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1018aff0 not ebx */
  EBX = (~(EBX));
  /* 1018aff2 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1018aff6 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1018aff8 jne 0x1018b022 */
  if (!C.zf) goto L_1018b022;
  /* 1018affa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018affd and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1018afff jmp 0x1018b022 */
  goto L_1018b022;
L_1018b001:;
  /* 1018b001 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1018b004 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1018b009 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1018b00b lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1018b00f not ebx */
  EBX = (~(EBX));
  /* 1018b011 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1018b018 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1018b01a jne 0x1018b022 */
  if (!C.zf) goto L_1018b022;
  /* 1018b01c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018b01f and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1018b022:;
  /* 1018b022 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1018b025 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1018b028 jmp 0x1018b02d */
  goto L_1018b02d;
L_1018b02a:;
  /* 1018b02a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_1018b02d:;
  /* 1018b02d mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 1018b030 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 1018b033 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018b036 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 1018b039 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1018b03c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1018b03f mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 1018b042 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 1018b045 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_1018b048:;
  /* 1018b048 mov edx, ecx */
  EDX = (ECX);
  /* 1018b04a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1018b04d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1018b04e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b051 jbe 0x1018b056 */
  if ((C.cf||C.zf)) goto L_1018b056;
  /* 1018b053 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1018b055 pop edx */
  EDX = (pop32());
L_1018b056:;
  /* 1018b056 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1018b059 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 1018b05c mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 1018b05f jne 0x1018b0f9 */
  if (!C.zf) goto L_1018b0f9;
  /* 1018b065 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018b068 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1018b06b sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 1018b06e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1018b070 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1018b073 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1018b074 pop esi */
  ESI = (pop32());
  /* 1018b075 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b077 jbe 0x1018b07b */
  if ((C.cf||C.zf)) goto L_1018b07b;
  /* 1018b079 mov ebx, esi */
  EBX = (ESI);
L_1018b07b:;
  /* 1018b07b add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018b07e mov edx, ecx */
  EDX = (ECX);
  /* 1018b080 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1018b083 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1018b086 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1018b087 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b089 jbe 0x1018b08d */
  if ((C.cf||C.zf)) goto L_1018b08d;
  /* 1018b08b mov edx, esi */
  EDX = (ESI);
L_1018b08d:;
  /* 1018b08d cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b08f je 0x1018b0f4 */
  if (C.zf) goto L_1018b0f4;
  /* 1018b091 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1018b094 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1018b097 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b09a jne 0x1018b0dc */
  if (!C.zf) goto L_1018b0dc;
  /* 1018b09c cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b09f jae 0x1018b0bd */
  if (!C.cf) goto L_1018b0bd;
  /* 1018b0a1 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1018b0a6 mov ecx, ebx */
  ECX = (EBX);
  /* 1018b0a8 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1018b0aa not esi */
  ESI = (~(ESI));
  /* 1018b0ac and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1018b0b0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 1018b0b4 jne 0x1018b0dc */
  if (!C.zf) goto L_1018b0dc;
  /* 1018b0b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018b0b9 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1018b0bb jmp 0x1018b0dc */
  goto L_1018b0dc;
L_1018b0bd:;
  /* 1018b0bd lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 1018b0c0 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1018b0c5 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1018b0c7 not esi */
  ESI = (~(ESI));
  /* 1018b0c9 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1018b0d0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 1018b0d4 jne 0x1018b0dc */
  if (!C.zf) goto L_1018b0dc;
  /* 1018b0d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018b0d9 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1018b0dc:;
  /* 1018b0dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1018b0df mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 1018b0e2 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 1018b0e5 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 1018b0e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1018b0eb mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1018b0ee mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 1018b0f1 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_1018b0f4:;
  /* 1018b0f4 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1018b0f7 jmp 0x1018b0fc */
  goto L_1018b0fc;
L_1018b0f9:;
  /* 1018b0f9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1018b0fc:;
  /* 1018b0fc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b100 jne 0x1018b10a */
  if (!C.zf) goto L_1018b10a;
  /* 1018b102 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b104 je 0x1018b18b */
  if (C.zf) goto L_1018b18b;
L_1018b10a:;
  /* 1018b10a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1018b10d mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 1018b111 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 1018b114 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 1018b117 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 1018b11a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1018b11d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1018b120 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 1018b123 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1018b126 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b129 jne 0x1018b18b */
  if (!C.zf) goto L_1018b18b;
  /* 1018b12b mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 1018b12f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b132 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 1018b135 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1018b137 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 1018b13b jae 0x1018b162 */
  if (!C.cf) goto L_1018b162;
  /* 1018b13d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018b141 jne 0x1018b151 */
  if (!C.zf) goto L_1018b151;
  /* 1018b143 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1018b148 mov ecx, edx */
  ECX = (EDX);
  /* 1018b14a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1018b14c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018b14f or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1018b151:;
  /* 1018b151 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1018b156 mov ecx, edx */
  ECX = (EDX);
  /* 1018b158 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1018b15a lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 1018b15e or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1018b160 jmp 0x1018b18b */
  goto L_1018b18b;
L_1018b162:;
  /* 1018b162 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018b166 jne 0x1018b178 */
  if (!C.zf) goto L_1018b178;
  /* 1018b168 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1018b16b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1018b170 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1018b172 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018b175 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1018b178:;
  /* 1018b178 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1018b17b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1018b180 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1018b182 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 1018b189 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_1018b18b:;
  /* 1018b18b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1018b18e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1018b190 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 1018b194 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1018b197 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 1018b199 jne 0x1018b296 */
  if (!C.zf) goto L_1018b296;
  /* 1018b19f mov eax, dword ptr [0x101969e4] */
  EAX = (r32((uint32_t)(0x101969e4)));
  /* 1018b1a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018b1a6 je 0x1018b288 */
  if (C.zf) goto L_1018b288;
  /* 1018b1ac mov ecx, dword ptr [0x101969dc] */
  ECX = (r32((uint32_t)(0x101969dc)));
  /* 1018b1b2 mov esi, dword ptr [0x1018e07c] */
  ESI = (r32((uint32_t)(0x1018e07c)));
  /* 1018b1b8 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1018b1bb add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018b1be mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 1018b1c3 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1018b1c8 push ebx */
  push32((uint32_t)(EBX));
  /* 1018b1c9 push ecx */
  push32((uint32_t)(ECX));
  /* 1018b1ca call esi */
  call_ind((uint32_t)(ESI), 0x1018b1ccu);
  /* 1018b1cc mov ecx, dword ptr [0x101969dc] */
  ECX = (r32((uint32_t)(0x101969dc)));
  /* 1018b1d2 mov eax, dword ptr [0x101969e4] */
  EAX = (r32((uint32_t)(0x101969e4)));
  /* 1018b1d7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1018b1dc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1018b1de or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1018b1e1 mov eax, dword ptr [0x101969e4] */
  EAX = (r32((uint32_t)(0x101969e4)));
  /* 1018b1e6 mov ecx, dword ptr [0x101969dc] */
  ECX = (r32((uint32_t)(0x101969dc)));
  /* 1018b1ec mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1018b1ef and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1018b1f7 mov eax, dword ptr [0x101969e4] */
  EAX = (r32((uint32_t)(0x101969e4)));
  /* 1018b1fc mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1018b1ff dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1018b202 mov eax, dword ptr [0x101969e4] */
  EAX = (r32((uint32_t)(0x101969e4)));
  /* 1018b207 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1018b20a cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018b20e jne 0x1018b219 */
  if (!C.zf) goto L_1018b219;
  /* 1018b210 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1018b214 mov eax, dword ptr [0x101969e4] */
  EAX = (r32((uint32_t)(0x101969e4)));
L_1018b219:;
  /* 1018b219 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b21d jne 0x1018b288 */
  if (!C.zf) goto L_1018b288;
  /* 1018b21f push ebx */
  push32((uint32_t)(EBX));
  /* 1018b220 push 0 */
  push32((uint32_t)(0x0u));
  /* 1018b222 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 1018b225 call esi */
  call_ind((uint32_t)(ESI), 0x1018b227u);
  /* 1018b227 mov eax, dword ptr [0x101969e4] */
  EAX = (r32((uint32_t)(0x101969e4)));
  /* 1018b22c push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 1018b22f push 0 */
  push32((uint32_t)(0x0u));
  /* 1018b231 push dword ptr [0x10197c44] */
  push32((uint32_t)(r32((uint32_t)(0x10197c44))));
  /* 1018b237 call dword ptr [0x1018e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e080))), 0x1018b23du);
  /* 1018b23d mov eax, dword ptr [0x101969e8] */
  EAX = (r32((uint32_t)(0x101969e8)));
  /* 1018b242 mov edx, dword ptr [0x101969ec] */
  EDX = (r32((uint32_t)(0x101969ec)));
  /* 1018b248 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1018b24b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1018b24e mov ecx, eax */
  ECX = (EAX);
  /* 1018b250 mov eax, dword ptr [0x101969e4] */
  EAX = (r32((uint32_t)(0x101969e4)));
  /* 1018b255 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018b257 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 1018b25b push ecx */
  push32((uint32_t)(ECX));
  /* 1018b25c lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1018b25f push ecx */
  push32((uint32_t)(ECX));
  /* 1018b260 push eax */
  push32((uint32_t)(EAX));
  /* 1018b261 call 0x10189c40 */
  push32(0x1018b266u); f_10189c40();
  /* 1018b266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018b269 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018b26c dec dword ptr [0x101969e8] */
  { uint32_t _r=(r32((uint32_t)(0x101969e8)))-1; w32((uint32_t)(0x101969e8), (_r)); fl_dec(_r,32); }
  /* 1018b272 cmp eax, dword ptr [0x101969e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x101969e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b278 jbe 0x1018b27e */
  if ((C.cf||C.zf)) goto L_1018b27e;
  /* 1018b27a sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_1018b27e:;
  /* 1018b27e mov eax, dword ptr [0x101969ec] */
  EAX = (r32((uint32_t)(0x101969ec)));
  /* 1018b283 mov dword ptr [0x101969e0], eax */
  w32((uint32_t)(0x101969e0), (EAX));
L_1018b288:;
  /* 1018b288 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018b28b mov dword ptr [0x101969dc], edi */
  w32((uint32_t)(0x101969dc), (EDI));
  /* 1018b291 mov dword ptr [0x101969e4], eax */
  w32((uint32_t)(0x101969e4), (EAX));
L_1018b296:;
  /* 1018b296 pop edi */
  EDI = (pop32());
  /* 1018b297 pop esi */
  ESI = (pop32());
  /* 1018b298 pop ebx */
  EBX = (pop32());
  /* 1018b299 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018b29a ret  */
  ESPCHK(0x1018af72u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b29b @ 0x1018b29b (777 bytes, 275 insns) */
void f_1018b29b(void) {
  FTRACE(0x1018b29bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018b29b push ebp */
  push32((uint32_t)(EBP));
  /* 1018b29c mov ebp, esp */
  EBP = (ESP);
  /* 1018b29e sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018b2a1 mov eax, dword ptr [0x101969e8] */
  EAX = (r32((uint32_t)(0x101969e8)));
  /* 1018b2a6 mov edx, dword ptr [0x101969ec] */
  EDX = (r32((uint32_t)(0x101969ec)));
  /* 1018b2ac push ebx */
  push32((uint32_t)(EBX));
  /* 1018b2ad push esi */
  push32((uint32_t)(ESI));
  /* 1018b2ae lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1018b2b1 push edi */
  push32((uint32_t)(EDI));
  /* 1018b2b2 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 1018b2b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018b2b8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1018b2bb lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 1018b2be and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1018b2c1 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1018b2c4 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1018b2c7 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1018b2c8 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b2cb jge 0x1018b2db */
  if ((C.sf==C.of)) goto L_1018b2db;
  /* 1018b2cd or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1018b2d0 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1018b2d2 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1018b2d6 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 1018b2d9 jmp 0x1018b2eb */
  goto L_1018b2eb;
L_1018b2db:;
  /* 1018b2db add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018b2de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1018b2e1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1018b2e3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1018b2e5 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 1018b2e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1018b2eb:;
  /* 1018b2eb mov eax, dword ptr [0x101969e0] */
  EAX = (r32((uint32_t)(0x101969e0)));
  /* 1018b2f0 mov ebx, eax */
  EBX = (EAX);
  /* 1018b2f2 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b2f4 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1018b2f7 jae 0x1018b312 */
  if (!C.cf) goto L_1018b312;
L_1018b2f9:;
  /* 1018b2f9 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1018b2fc mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1018b2fe and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1018b301 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1018b303 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1018b305 jne 0x1018b312 */
  if (!C.zf) goto L_1018b312;
  /* 1018b307 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018b30a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b30d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1018b310 jb 0x1018b2f9 */
  if (C.cf) goto L_1018b2f9;
L_1018b312:;
  /* 1018b312 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b315 jne 0x1018b390 */
  if (!C.zf) goto L_1018b390;
  /* 1018b317 mov ebx, edx */
  EBX = (EDX);
L_1018b319:;
  /* 1018b319 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b31b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1018b31e jae 0x1018b335 */
  if (!C.cf) goto L_1018b335;
  /* 1018b320 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1018b323 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1018b325 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1018b328 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1018b32a or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1018b32c jne 0x1018b333 */
  if (!C.zf) goto L_1018b333;
  /* 1018b32e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018b331 jmp 0x1018b319 */
  goto L_1018b319;
L_1018b333:;
  /* 1018b333 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1018b335:;
  /* 1018b335 jne 0x1018b390 */
  if (!C.zf) goto L_1018b390;
L_1018b337:;
  /* 1018b337 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b33a jae 0x1018b34d */
  if (!C.cf) goto L_1018b34d;
  /* 1018b33c cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b340 jne 0x1018b34a */
  if (!C.zf) goto L_1018b34a;
  /* 1018b342 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018b345 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1018b348 jmp 0x1018b337 */
  goto L_1018b337;
L_1018b34a:;
  /* 1018b34a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1018b34d:;
  /* 1018b34d jne 0x1018b375 */
  if (!C.zf) goto L_1018b375;
  /* 1018b34f mov ebx, edx */
  EBX = (EDX);
L_1018b351:;
  /* 1018b351 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b353 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1018b356 jae 0x1018b365 */
  if (!C.cf) goto L_1018b365;
  /* 1018b358 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b35c jne 0x1018b363 */
  if (!C.zf) goto L_1018b363;
  /* 1018b35e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018b361 jmp 0x1018b351 */
  goto L_1018b351;
L_1018b363:;
  /* 1018b363 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1018b365:;
  /* 1018b365 jne 0x1018b375 */
  if (!C.zf) goto L_1018b375;
  /* 1018b367 call 0x1018b5a4 */
  push32(0x1018b36cu); f_1018b5a4();
  /* 1018b36c mov ebx, eax */
  EBX = (EAX);
  /* 1018b36e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1018b370 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1018b373 je 0x1018b389 */
  if (C.zf) goto L_1018b389;
L_1018b375:;
  /* 1018b375 push ebx */
  push32((uint32_t)(EBX));
  /* 1018b376 call 0x1018b655 */
  push32(0x1018b37bu); f_1018b655();
  /* 1018b37b pop ecx */
  ECX = (pop32());
  /* 1018b37c mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1018b37f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1018b381 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 1018b384 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b387 jne 0x1018b390 */
  if (!C.zf) goto L_1018b390;
L_1018b389:;
  /* 1018b389 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018b38b jmp 0x1018b59f */
  goto L_1018b59f;
L_1018b390:;
  /* 1018b390 mov dword ptr [0x101969e0], ebx */
  w32((uint32_t)(0x101969e0), (EBX));
  /* 1018b396 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 1018b399 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1018b39b cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b39e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1018b3a1 je 0x1018b3b7 */
  if (C.zf) goto L_1018b3b7;
  /* 1018b3a3 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1018b3aa mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1018b3ae and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1018b3b1 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1018b3b3 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1018b3b5 jne 0x1018b3ee */
  if (!C.zf) goto L_1018b3ee;
L_1018b3b7:;
  /* 1018b3b7 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 1018b3bd mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 1018b3c0 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1018b3c3 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 1018b3c6 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1018b3ca lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 1018b3cd or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1018b3cf mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1018b3d2 jne 0x1018b3eb */
  if (!C.zf) goto L_1018b3eb;
L_1018b3d4:;
  /* 1018b3d4 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 1018b3da inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1018b3dd and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1018b3e0 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018b3e3 mov edi, esi */
  EDI = (ESI);
  /* 1018b3e5 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 1018b3e7 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 1018b3e9 je 0x1018b3d4 */
  if (C.zf) goto L_1018b3d4;
L_1018b3eb:;
  /* 1018b3eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1018b3ee:;
  /* 1018b3ee mov ecx, edx */
  ECX = (EDX);
  /* 1018b3f0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1018b3f2 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1018b3f8 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1018b3ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1018b402 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1018b406 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 1018b408 jne 0x1018b417 */
  if (!C.zf) goto L_1018b417;
  /* 1018b40a mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1018b411 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1018b413 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1018b416 pop edi */
  EDI = (pop32());
L_1018b417:;
  /* 1018b417 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1018b419 jl 0x1018b420 */
  if ((C.sf!=C.of)) goto L_1018b420;
  /* 1018b41b shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1018b41d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1018b41e jmp 0x1018b417 */
  goto L_1018b417;
L_1018b420:;
  /* 1018b420 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1018b423 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 1018b427 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1018b429 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018b42c mov esi, ecx */
  ESI = (ECX);
  /* 1018b42e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1018b431 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1018b434 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1018b435 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b438 jle 0x1018b43d */
  if ((C.zf||C.sf!=C.of)) goto L_1018b43d;
  /* 1018b43a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1018b43c pop esi */
  ESI = (pop32());
L_1018b43d:;
  /* 1018b43d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b43f je 0x1018b552 */
  if (C.zf) goto L_1018b552;
  /* 1018b445 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1018b448 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b44b jne 0x1018b4ae */
  if (!C.zf) goto L_1018b4ae;
  /* 1018b44d cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b450 jge 0x1018b47d */
  if ((C.sf==C.of)) goto L_1018b47d;
  /* 1018b452 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1018b457 mov ecx, edi */
  ECX = (EDI);
  /* 1018b459 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1018b45b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1018b45e lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1018b462 not ebx */
  EBX = (~(EBX));
  /* 1018b464 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1018b467 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 1018b46b mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1018b46f dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1018b471 jne 0x1018b4ab */
  if (!C.zf) goto L_1018b4ab;
  /* 1018b473 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018b476 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1018b479 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 1018b47b jmp 0x1018b4ae */
  goto L_1018b4ae;
L_1018b47d:;
  /* 1018b47d lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 1018b480 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1018b485 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1018b487 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1018b48a lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1018b48e lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1018b495 not ebx */
  EBX = (~(EBX));
  /* 1018b497 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1018b499 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1018b49b mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1018b49e jne 0x1018b4ab */
  if (!C.zf) goto L_1018b4ab;
  /* 1018b4a0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018b4a3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1018b4a6 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1018b4a9 jmp 0x1018b4ae */
  goto L_1018b4ae;
L_1018b4ab:;
  /* 1018b4ab mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1018b4ae:;
  /* 1018b4ae mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 1018b4b1 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 1018b4b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b4b8 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 1018b4bb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1018b4be mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 1018b4c1 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 1018b4c4 je 0x1018b55e */
  if (C.zf) goto L_1018b55e;
  /* 1018b4ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1018b4cd mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 1018b4d1 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 1018b4d4 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 1018b4d7 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1018b4da mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1018b4dd mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1018b4e0 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1018b4e3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1018b4e6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b4e9 jne 0x1018b54f */
  if (!C.zf) goto L_1018b54f;
  /* 1018b4eb mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1018b4ef cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b4f2 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 1018b4f5 jge 0x1018b520 */
  if ((C.sf==C.of)) goto L_1018b520;
  /* 1018b4f7 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1018b4f9 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018b4fd mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1018b501 jne 0x1018b50e */
  if (!C.zf) goto L_1018b50e;
  /* 1018b503 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1018b508 mov ecx, esi */
  ECX = (ESI);
  /* 1018b50a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1018b50c or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1018b50e:;
  /* 1018b50e mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1018b513 mov ecx, esi */
  ECX = (ESI);
  /* 1018b515 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1018b517 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1018b51a or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1018b51e jmp 0x1018b54f */
  goto L_1018b54f;
L_1018b520:;
  /* 1018b520 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1018b522 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018b526 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1018b52a jne 0x1018b539 */
  if (!C.zf) goto L_1018b539;
  /* 1018b52c lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1018b52f mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1018b534 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1018b536 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_1018b539:;
  /* 1018b539 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1018b53c lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1018b543 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1018b546 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1018b54b shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1018b54d or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1018b54f:;
  /* 1018b54f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1018b552:;
  /* 1018b552 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1018b554 je 0x1018b561 */
  if (C.zf) goto L_1018b561;
  /* 1018b556 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1018b558 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1018b55c jmp 0x1018b561 */
  goto L_1018b561;
L_1018b55e:;
  /* 1018b55e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1018b561:;
  /* 1018b561 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 1018b564 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018b566 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 1018b569 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1018b56b mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1018b56f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1018b572 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1018b574 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1018b576 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 1018b579 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1018b57b jne 0x1018b597 */
  if (!C.zf) goto L_1018b597;
  /* 1018b57d cmp ebx, dword ptr [0x101969e4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x101969e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b583 jne 0x1018b597 */
  if (!C.zf) goto L_1018b597;
  /* 1018b585 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1018b588 cmp ecx, dword ptr [0x101969dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x101969dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b58e jne 0x1018b597 */
  if (!C.zf) goto L_1018b597;
  /* 1018b590 and dword ptr [0x101969e4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101969e4)))&(0x0u); w32((uint32_t)(0x101969e4), (_r)); fl_logic(_r,32); }
L_1018b597:;
  /* 1018b597 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1018b59a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1018b59c lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_1018b59f:;
  /* 1018b59f pop edi */
  EDI = (pop32());
  /* 1018b5a0 pop esi */
  ESI = (pop32());
  /* 1018b5a1 pop ebx */
  EBX = (pop32());
  /* 1018b5a2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018b5a3 ret  */
  ESPCHK(0x1018b29bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5a4 @ 0x1018b5a4 (177 bytes, 53 insns) */
void f_1018b5a4(void) {
  FTRACE(0x1018b5a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018b5a4 mov eax, dword ptr [0x101969e8] */
  EAX = (r32((uint32_t)(0x101969e8)));
  /* 1018b5a9 mov ecx, dword ptr [0x101969d8] */
  ECX = (r32((uint32_t)(0x101969d8)));
  /* 1018b5af push esi */
  push32((uint32_t)(ESI));
  /* 1018b5b0 push edi */
  push32((uint32_t)(EDI));
  /* 1018b5b1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1018b5b3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b5b5 jne 0x1018b5e7 */
  if (!C.zf) goto L_1018b5e7;
  /* 1018b5b7 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 1018b5bb shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1018b5be push eax */
  push32((uint32_t)(EAX));
  /* 1018b5bf push dword ptr [0x101969ec] */
  push32((uint32_t)(r32((uint32_t)(0x101969ec))));
  /* 1018b5c5 push edi */
  push32((uint32_t)(EDI));
  /* 1018b5c6 push dword ptr [0x10197c44] */
  push32((uint32_t)(r32((uint32_t)(0x10197c44))));
  /* 1018b5cc call dword ptr [0x1018e0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e0ac))), 0x1018b5d2u);
  /* 1018b5d2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b5d4 je 0x1018b637 */
  if (C.zf) goto L_1018b637;
  /* 1018b5d6 add dword ptr [0x101969d8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x101969d8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x101969d8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1018b5dd mov dword ptr [0x101969ec], eax */
  w32((uint32_t)(0x101969ec), (EAX));
  /* 1018b5e2 mov eax, dword ptr [0x101969e8] */
  EAX = (r32((uint32_t)(0x101969e8)));
L_1018b5e7:;
  /* 1018b5e7 mov ecx, dword ptr [0x101969ec] */
  ECX = (r32((uint32_t)(0x101969ec)));
  /* 1018b5ed push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1018b5f2 push 8 */
  push32((uint32_t)(0x8u));
  /* 1018b5f4 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1018b5f7 push dword ptr [0x10197c44] */
  push32((uint32_t)(r32((uint32_t)(0x10197c44))));
  /* 1018b5fd lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1018b600 call dword ptr [0x1018e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e098))), 0x1018b606u);
  /* 1018b606 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b608 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 1018b60b je 0x1018b637 */
  if (C.zf) goto L_1018b637;
  /* 1018b60d push 4 */
  push32((uint32_t)(0x4u));
  /* 1018b60f push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1018b614 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1018b619 push edi */
  push32((uint32_t)(EDI));
  /* 1018b61a call dword ptr [0x1018e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e0a8))), 0x1018b620u);
  /* 1018b620 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b622 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1018b625 jne 0x1018b63b */
  if (!C.zf) goto L_1018b63b;
  /* 1018b627 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1018b62a push edi */
  push32((uint32_t)(EDI));
  /* 1018b62b push dword ptr [0x10197c44] */
  push32((uint32_t)(r32((uint32_t)(0x10197c44))));
  /* 1018b631 call dword ptr [0x1018e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e080))), 0x1018b637u);
L_1018b637:;
  /* 1018b637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018b639 jmp 0x1018b652 */
  goto L_1018b652;
L_1018b63b:;
  /* 1018b63b or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1018b63f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1018b641 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 1018b644 inc dword ptr [0x101969e8] */
  { uint32_t _r=(r32((uint32_t)(0x101969e8)))+1; w32((uint32_t)(0x101969e8), (_r)); fl_inc(_r,32); }
  /* 1018b64a mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1018b64d or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1018b650 mov eax, esi */
  EAX = (ESI);
L_1018b652:;
  /* 1018b652 pop edi */
  EDI = (pop32());
  /* 1018b653 pop esi */
  ESI = (pop32());
  /* 1018b654 ret  */
  ESPCHK(0x1018b5a4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b655 @ 0x1018b655 (251 bytes, 85 insns) */
void f_1018b655(void) {
  FTRACE(0x1018b655u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018b655 push ebp */
  push32((uint32_t)(EBP));
  /* 1018b656 mov ebp, esp */
  EBP = (ESP);
  /* 1018b658 push ecx */
  push32((uint32_t)(ECX));
  /* 1018b659 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018b65c push ebx */
  push32((uint32_t)(EBX));
  /* 1018b65d push esi */
  push32((uint32_t)(ESI));
  /* 1018b65e push edi */
  push32((uint32_t)(EDI));
  /* 1018b65f mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 1018b662 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 1018b665 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1018b667:;
  /* 1018b667 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018b669 jl 0x1018b670 */
  if ((C.sf!=C.of)) goto L_1018b670;
  /* 1018b66b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1018b66d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1018b66e jmp 0x1018b667 */
  goto L_1018b667;
L_1018b670:;
  /* 1018b670 mov eax, ebx */
  EAX = (EBX);
  /* 1018b672 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1018b674 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1018b67a pop edx */
  EDX = (pop32());
  /* 1018b67b lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 1018b682 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1018b685:;
  /* 1018b685 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 1018b688 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 1018b68b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018b68e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1018b68f jne 0x1018b685 */
  if (!C.zf) goto L_1018b685;
  /* 1018b691 mov edi, ebx */
  EDI = (EBX);
  /* 1018b693 push 4 */
  push32((uint32_t)(0x4u));
  /* 1018b695 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 1018b698 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018b69b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1018b6a0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1018b6a5 push edi */
  push32((uint32_t)(EDI));
  /* 1018b6a6 call dword ptr [0x1018e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e0a8))), 0x1018b6acu);
  /* 1018b6ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018b6ae jne 0x1018b6b8 */
  if (!C.zf) goto L_1018b6b8;
  /* 1018b6b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1018b6b3 jmp 0x1018b74b */
  goto L_1018b74b;
L_1018b6b8:;
  /* 1018b6b8 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 1018b6be cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b6c0 ja 0x1018b6fe */
  if ((!C.cf&&!C.zf)) goto L_1018b6fe;
  /* 1018b6c2 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_1018b6c5:;
  /* 1018b6c5 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 1018b6c9 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 1018b6d0 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 1018b6d6 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1018b6dd mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1018b6df lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 1018b6e5 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1018b6e8 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 1018b6f2 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018b6f7 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 1018b6fa cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b6fc jbe 0x1018b6c5 */
  if ((C.cf||C.zf)) goto L_1018b6c5;
L_1018b6fe:;
  /* 1018b6fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1018b701 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 1018b704 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018b709 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018b70b pop edi */
  EDI = (pop32());
  /* 1018b70c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1018b70f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1018b712 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 1018b715 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1018b718 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1018b71b and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1018b720 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 1018b727 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 1018b72a mov cl, al */
  CL = (AL);
  /* 1018b72c inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1018b72e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1018b730 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018b733 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 1018b736 jne 0x1018b73b */
  if (!C.zf) goto L_1018b73b;
  /* 1018b738 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_1018b73b:;
  /* 1018b73b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1018b740 mov ecx, ebx */
  ECX = (EBX);
  /* 1018b742 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1018b744 not edx */
  EDX = (~(EDX));
  /* 1018b746 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1018b749 mov eax, ebx */
  EAX = (EBX);
L_1018b74b:;
  /* 1018b74b pop edi */
  EDI = (pop32());
  /* 1018b74c pop esi */
  ESI = (pop32());
  /* 1018b74d pop ebx */
  EBX = (pop32());
  /* 1018b74e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018b74f ret  */
  ESPCHK(0x1018b655u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b750 @ 0x1018b750 (324 bytes, 102 insns) */
void f_1018b750(void) {
  FTRACE(0x1018b750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018b750 cmp dword ptr [0x10190e90], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10190e90))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b757 push ebx */
  push32((uint32_t)(EBX));
  /* 1018b758 push ebp */
  push32((uint32_t)(EBP));
  /* 1018b759 push esi */
  push32((uint32_t)(ESI));
  /* 1018b75a push edi */
  push32((uint32_t)(EDI));
  /* 1018b75b jne 0x1018b764 */
  if (!C.zf) goto L_1018b764;
  /* 1018b75d mov esi, 0x10190e80 */
  ESI = (0x10190e80u);
  /* 1018b762 jmp 0x1018b781 */
  goto L_1018b781;
L_1018b764:;
  /* 1018b764 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 1018b769 push 0 */
  push32((uint32_t)(0x0u));
  /* 1018b76b push dword ptr [0x10197c44] */
  push32((uint32_t)(r32((uint32_t)(0x10197c44))));
  /* 1018b771 call dword ptr [0x1018e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e098))), 0x1018b777u);
  /* 1018b777 mov esi, eax */
  ESI = (EAX);
  /* 1018b779 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1018b77b je 0x1018b88d */
  if (C.zf) goto L_1018b88d;
L_1018b781:;
  /* 1018b781 mov ebp, dword ptr [0x1018e0a8] */
  EBP = (r32((uint32_t)(0x1018e0a8)));
  /* 1018b787 push 4 */
  push32((uint32_t)(0x4u));
  /* 1018b789 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1018b78e push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 1018b793 push 0 */
  push32((uint32_t)(0x0u));
  /* 1018b795 call ebp */
  call_ind((uint32_t)(EBP), 0x1018b797u);
  /* 1018b797 mov edi, eax */
  EDI = (EAX);
  /* 1018b799 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1018b79b je 0x1018b876 */
  if (C.zf) goto L_1018b876;
  /* 1018b7a1 push 4 */
  push32((uint32_t)(0x4u));
  /* 1018b7a3 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 1018b7a8 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1018b7ad push ebx */
  push32((uint32_t)(EBX));
  /* 1018b7ae push edi */
  push32((uint32_t)(EDI));
  /* 1018b7af call ebp */
  call_ind((uint32_t)(EBP), 0x1018b7b1u);
  /* 1018b7b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018b7b3 je 0x1018b868 */
  if (C.zf) goto L_1018b868;
  /* 1018b7b9 mov eax, 0x10190e80 */
  EAX = (0x10190e80u);
  /* 1018b7be cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b7c0 jne 0x1018b7e0 */
  if (!C.zf) goto L_1018b7e0;
  /* 1018b7c2 cmp dword ptr [0x10190e80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10190e80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b7c9 jne 0x1018b7d0 */
  if (!C.zf) goto L_1018b7d0;
  /* 1018b7cb mov dword ptr [0x10190e80], eax */
  w32((uint32_t)(0x10190e80), (EAX));
L_1018b7d0:;
  /* 1018b7d0 cmp dword ptr [0x10190e84], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10190e84))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b7d7 jne 0x1018b7f5 */
  if (!C.zf) goto L_1018b7f5;
  /* 1018b7d9 mov dword ptr [0x10190e84], eax */
  w32((uint32_t)(0x10190e84), (EAX));
  /* 1018b7de jmp 0x1018b7f5 */
  goto L_1018b7f5;
L_1018b7e0:;
  /* 1018b7e0 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1018b7e2 mov eax, dword ptr [0x10190e84] */
  EAX = (r32((uint32_t)(0x10190e84)));
  /* 1018b7e7 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1018b7ea mov dword ptr [0x10190e84], esi */
  w32((uint32_t)(0x10190e84), (ESI));
  /* 1018b7f0 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1018b7f3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1018b7f5:;
  /* 1018b7f5 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 1018b7fb lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 1018b801 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 1018b804 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 1018b807 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 1018b80a mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 1018b80d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1018b810 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 1018b812 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_1018b817:;
  /* 1018b817 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1018b819 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b81c setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 1018b81f dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1018b820 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1018b822 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1018b823 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1018b824 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1018b826 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1018b829 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018b82c cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b832 jl 0x1018b817 */
  if ((C.sf!=C.of)) goto L_1018b817;
  /* 1018b834 push ebx */
  push32((uint32_t)(EBX));
  /* 1018b835 push 0 */
  push32((uint32_t)(0x0u));
  /* 1018b837 push edi */
  push32((uint32_t)(EDI));
  /* 1018b838 call 0x10189be0 */
  push32(0x1018b83du); f_10189be0();
  /* 1018b83d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018b840:;
  /* 1018b840 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1018b843 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018b845 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b847 jae 0x1018b864 */
  if (!C.cf) goto L_1018b864;
  /* 1018b849 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 1018b850 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 1018b853 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1018b855 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 1018b85c add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018b862 jmp 0x1018b840 */
  goto L_1018b840;
L_1018b864:;
  /* 1018b864 mov eax, esi */
  EAX = (ESI);
  /* 1018b866 jmp 0x1018b88f */
  goto L_1018b88f;
L_1018b868:;
  /* 1018b868 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1018b86d push 0 */
  push32((uint32_t)(0x0u));
  /* 1018b86f push edi */
  push32((uint32_t)(EDI));
  /* 1018b870 call dword ptr [0x1018e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e07c))), 0x1018b876u);
L_1018b876:;
  /* 1018b876 cmp esi, 0x10190e80 */
  { uint32_t _a=(ESI),_b=(0x10190e80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b87c je 0x1018b88d */
  if (C.zf) goto L_1018b88d;
  /* 1018b87e push esi */
  push32((uint32_t)(ESI));
  /* 1018b87f push 0 */
  push32((uint32_t)(0x0u));
  /* 1018b881 push dword ptr [0x10197c44] */
  push32((uint32_t)(r32((uint32_t)(0x10197c44))));
  /* 1018b887 call dword ptr [0x1018e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e080))), 0x1018b88du);
L_1018b88d:;
  /* 1018b88d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1018b88f:;
  /* 1018b88f pop edi */
  EDI = (pop32());
  /* 1018b890 pop esi */
  ESI = (pop32());
  /* 1018b891 pop ebp */
  EBP = (pop32());
  /* 1018b892 pop ebx */
  EBX = (pop32());
  /* 1018b893 ret  */
  ESPCHK(0x1018b750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b894 @ 0x1018b894 (86 bytes, 27 insns) */
void f_1018b894(void) {
  FTRACE(0x1018b894u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018b894 push esi */
  push32((uint32_t)(ESI));
  /* 1018b895 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1018b899 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1018b89e push 0 */
  push32((uint32_t)(0x0u));
  /* 1018b8a0 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1018b8a3 call dword ptr [0x1018e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e07c))), 0x1018b8a9u);
  /* 1018b8a9 cmp dword ptr [0x10192ea0], esi */
  { uint32_t _a=(r32((uint32_t)(0x10192ea0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b8af jne 0x1018b8b9 */
  if (!C.zf) goto L_1018b8b9;
  /* 1018b8b1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1018b8b4 mov dword ptr [0x10192ea0], eax */
  w32((uint32_t)(0x10192ea0), (EAX));
L_1018b8b9:;
  /* 1018b8b9 cmp esi, 0x10190e80 */
  { uint32_t _a=(ESI),_b=(0x10190e80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b8bf je 0x1018b8e1 */
  if (C.zf) goto L_1018b8e1;
  /* 1018b8c1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1018b8c4 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1018b8c6 push esi */
  push32((uint32_t)(ESI));
  /* 1018b8c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1018b8c9 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1018b8cb mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1018b8cd mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1018b8d0 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1018b8d3 push dword ptr [0x10197c44] */
  push32((uint32_t)(r32((uint32_t)(0x10197c44))));
  /* 1018b8d9 call dword ptr [0x1018e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e080))), 0x1018b8dfu);
  /* 1018b8df pop esi */
  ESI = (pop32());
  /* 1018b8e0 ret  */
  ESPCHK(0x1018b894u, _esp0);
  ESP += 4; return;
L_1018b8e1:;
  /* 1018b8e1 or dword ptr [0x10190e90], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10190e90)))|(0xffffffffu); w32((uint32_t)(0x10190e90), (_r)); fl_logic(_r,32); }
  /* 1018b8e8 pop esi */
  ESI = (pop32());
  /* 1018b8e9 ret  */
  ESPCHK(0x1018b894u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8ea @ 0x1018b8ea (194 bytes, 66 insns) */
void f_1018b8ea(void) {
  FTRACE(0x1018b8eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018b8ea push ebp */
  push32((uint32_t)(EBP));
  /* 1018b8eb mov ebp, esp */
  EBP = (ESP);
  /* 1018b8ed push ecx */
  push32((uint32_t)(ECX));
  /* 1018b8ee push ebx */
  push32((uint32_t)(EBX));
  /* 1018b8ef push esi */
  push32((uint32_t)(ESI));
  /* 1018b8f0 mov esi, dword ptr [0x10190e84] */
  ESI = (r32((uint32_t)(0x10190e84)));
  /* 1018b8f6 push edi */
  push32((uint32_t)(EDI));
L_1018b8f7:;
  /* 1018b8f7 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b8fb je 0x1018b995 */
  if (C.zf) goto L_1018b995;
  /* 1018b901 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1018b905 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 1018b90b mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_1018b910:;
  /* 1018b910 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b916 jne 0x1018b951 */
  if (!C.zf) goto L_1018b951;
  /* 1018b918 mov eax, ebx */
  EAX = (EBX);
  /* 1018b91a push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1018b91f add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018b922 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1018b927 push eax */
  push32((uint32_t)(EAX));
  /* 1018b928 call dword ptr [0x1018e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e07c))), 0x1018b92eu);
  /* 1018b92e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018b930 je 0x1018b951 */
  if (C.zf) goto L_1018b951;
  /* 1018b932 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 1018b935 dec dword ptr [0x10196834] */
  { uint32_t _r=(r32((uint32_t)(0x10196834)))-1; w32((uint32_t)(0x10196834), (_r)); fl_dec(_r,32); }
  /* 1018b93b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1018b93e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018b940 je 0x1018b946 */
  if (C.zf) goto L_1018b946;
  /* 1018b942 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b944 jbe 0x1018b949 */
  if ((C.cf||C.zf)) goto L_1018b949;
L_1018b946:;
  /* 1018b946 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_1018b949:;
  /* 1018b949 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1018b94c dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 1018b94f je 0x1018b95e */
  if (C.zf) goto L_1018b95e;
L_1018b951:;
  /* 1018b951 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018b957 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018b95a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1018b95c jge 0x1018b910 */
  if ((C.sf==C.of)) goto L_1018b910;
L_1018b95e:;
  /* 1018b95e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b962 mov ecx, esi */
  ECX = (ESI);
  /* 1018b964 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 1018b967 je 0x1018b995 */
  if (C.zf) goto L_1018b995;
  /* 1018b969 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b96d jne 0x1018b995 */
  if (!C.zf) goto L_1018b995;
  /* 1018b96f push 1 */
  push32((uint32_t)(0x1u));
  /* 1018b971 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 1018b974 pop edx */
  EDX = (pop32());
L_1018b975:;
  /* 1018b975 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b978 jne 0x1018b986 */
  if (!C.zf) goto L_1018b986;
  /* 1018b97a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1018b97b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018b97e cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b984 jl 0x1018b975 */
  if ((C.sf!=C.of)) goto L_1018b975;
L_1018b986:;
  /* 1018b986 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b98c jne 0x1018b995 */
  if (!C.zf) goto L_1018b995;
  /* 1018b98e push ecx */
  push32((uint32_t)(ECX));
  /* 1018b98f call 0x1018b894 */
  push32(0x1018b994u); f_1018b894();
  /* 1018b994 pop ecx */
  ECX = (pop32());
L_1018b995:;
  /* 1018b995 cmp esi, dword ptr [0x10190e84] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10190e84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b99b je 0x1018b9a7 */
  if (C.zf) goto L_1018b9a7;
  /* 1018b99d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b9a1 jg 0x1018b8f7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1018b8f7;
L_1018b9a7:;
  /* 1018b9a7 pop edi */
  EDI = (pop32());
  /* 1018b9a8 pop esi */
  ESI = (pop32());
  /* 1018b9a9 pop ebx */
  EBX = (pop32());
  /* 1018b9aa leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018b9ab ret  */
  ESPCHK(0x1018b8eau, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9ac @ 0x1018b9ac (87 bytes, 34 insns) */
void f_1018b9ac(void) {
  FTRACE(0x1018b9acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018b9ac mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1018b9b0 mov edx, 0x10190e80 */
  EDX = (0x10190e80u);
  /* 1018b9b5 push esi */
  push32((uint32_t)(ESI));
  /* 1018b9b6 mov ecx, edx */
  ECX = (EDX);
L_1018b9b8:;
  /* 1018b9b8 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b9bb jbe 0x1018b9c2 */
  if ((C.cf||C.zf)) goto L_1018b9c2;
  /* 1018b9bd cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b9c0 jb 0x1018b9ca */
  if (C.cf) goto L_1018b9ca;
L_1018b9c2:;
  /* 1018b9c2 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1018b9c4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b9c6 je 0x1018b9ff */
  if (C.zf) goto L_1018b9ff;
  /* 1018b9c8 jmp 0x1018b9b8 */
  goto L_1018b9b8;
L_1018b9ca:;
  /* 1018b9ca test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 1018b9cc jne 0x1018b9ff */
  if (!C.zf) goto L_1018b9ff;
  /* 1018b9ce mov esi, eax */
  ESI = (EAX);
  /* 1018b9d0 mov edx, 0x100 */
  EDX = (0x100u);
  /* 1018b9d5 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 1018b9db cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018b9dd jb 0x1018b9ff */
  if (C.cf) goto L_1018b9ff;
  /* 1018b9df mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1018b9e3 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1018b9e5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 1018b9e9 mov ecx, eax */
  ECX = (EAX);
  /* 1018b9eb and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 1018b9f0 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018b9f2 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1018b9f4 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018b9f6 pop esi */
  ESI = (pop32());
  /* 1018b9f7 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1018b9fa lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 1018b9fe ret  */
  ESPCHK(0x1018b9acu, _esp0);
  ESP += 4; return;
L_1018b9ff:;
  /* 1018b9ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018ba01 pop esi */
  ESI = (pop32());
  /* 1018ba02 ret  */
  ESPCHK(0x1018b9acu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba03 @ 0x1018ba03 (69 bytes, 19 insns) */
void f_1018ba03(void) {
  FTRACE(0x1018ba03u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018ba03 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1018ba07 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1018ba0b sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018ba0e sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 1018ba11 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 1018ba15 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1018ba19 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1018ba1c add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1018ba1e and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1018ba21 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018ba27 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 1018ba2e jne 0x1018ba47 */
  if (!C.zf) goto L_1018ba47;
  /* 1018ba30 inc dword ptr [0x10196834] */
  { uint32_t _r=(r32((uint32_t)(0x10196834)))+1; w32((uint32_t)(0x10196834), (_r)); fl_inc(_r,32); }
  /* 1018ba36 cmp dword ptr [0x10196834], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10196834))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018ba3d jne 0x1018ba47 */
  if (!C.zf) goto L_1018ba47;
  /* 1018ba3f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1018ba41 call 0x1018b8ea */
  push32(0x1018ba46u); f_1018b8ea();
  /* 1018ba46 pop ecx */
  ECX = (pop32());
L_1018ba47:;
  /* 1018ba47 ret  */
  ESPCHK(0x1018ba03u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba48 @ 0x1018ba48 (520 bytes, 180 insns) */
void f_1018ba48(void) {
  FTRACE(0x1018ba48u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018ba48 push ebp */
  push32((uint32_t)(EBP));
  /* 1018ba49 mov ebp, esp */
  EBP = (ESP);
  /* 1018ba4b push ecx */
  push32((uint32_t)(ECX));
  /* 1018ba4c push ecx */
  push32((uint32_t)(ECX));
  /* 1018ba4d push ebx */
  push32((uint32_t)(EBX));
  /* 1018ba4e push esi */
  push32((uint32_t)(ESI));
  /* 1018ba4f mov esi, dword ptr [0x10192ea0] */
  ESI = (r32((uint32_t)(0x10192ea0)));
  /* 1018ba55 push edi */
  push32((uint32_t)(EDI));
L_1018ba56:;
  /* 1018ba56 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 1018ba59 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018ba5c je 0x1018bb01 */
  if (C.zf) goto L_1018bb01;
  /* 1018ba62 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 1018ba65 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 1018ba6b mov eax, edi */
  EAX = (EDI);
  /* 1018ba6d sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018ba6f sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018ba72 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 1018ba75 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 1018ba78 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018ba7a cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018ba7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1018ba7f jae 0x1018babb */
  if (!C.cf) goto L_1018babb;
L_1018ba81:;
  /* 1018ba81 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 1018ba83 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018ba86 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018ba88 jl 0x1018baa4 */
  if ((C.sf!=C.of)) goto L_1018baa4;
  /* 1018ba8a cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018ba8d jbe 0x1018baa4 */
  if ((C.cf||C.zf)) goto L_1018baa4;
  /* 1018ba8f push ebx */
  push32((uint32_t)(EBX));
  /* 1018ba90 push ecx */
  push32((uint32_t)(ECX));
  /* 1018ba91 push eax */
  push32((uint32_t)(EAX));
  /* 1018ba92 call 0x1018bc50 */
  push32(0x1018ba97u); f_1018bc50();
  /* 1018ba97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018ba9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018ba9c jne 0x1018bb13 */
  if (!C.zf) goto L_1018bb13;
  /* 1018ba9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1018baa1 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_1018baa4:;
  /* 1018baa4 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018baa7 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 1018baad add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018bab2 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bab4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1018bab7 jb 0x1018ba81 */
  if (C.cf) goto L_1018ba81;
  /* 1018bab9 jmp 0x1018babe */
  goto L_1018babe;
L_1018babb:;
  /* 1018babb mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1018babe:;
  /* 1018babe mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1018bac1 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 1018bac4 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 1018bac7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1018baca cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bacc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1018bacf jae 0x1018bb04 */
  if (!C.cf) goto L_1018bb04;
L_1018bad1:;
  /* 1018bad1 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1018bad3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bad5 jl 0x1018baf0 */
  if ((C.sf!=C.of)) goto L_1018baf0;
  /* 1018bad7 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bada jbe 0x1018baf0 */
  if ((C.cf||C.zf)) goto L_1018baf0;
  /* 1018badc push ebx */
  push32((uint32_t)(EBX));
  /* 1018badd push eax */
  push32((uint32_t)(EAX));
  /* 1018bade push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 1018bae1 call 0x1018bc50 */
  push32(0x1018bae6u); f_1018bc50();
  /* 1018bae6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018bae9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018baeb jne 0x1018bb13 */
  if (!C.zf) goto L_1018bb13;
  /* 1018baed mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_1018baf0:;
  /* 1018baf0 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1018baf7 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018bafa cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bafd jb 0x1018bad1 */
  if (C.cf) goto L_1018bad1;
  /* 1018baff jmp 0x1018bb04 */
  goto L_1018bb04;
L_1018bb01:;
  /* 1018bb01 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1018bb04:;
  /* 1018bb04 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 1018bb06 cmp esi, dword ptr [0x10192ea0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10192ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bb0c je 0x1018bb23 */
  if (C.zf) goto L_1018bb23;
  /* 1018bb0e jmp 0x1018ba56 */
  goto L_1018ba56;
L_1018bb13:;
  /* 1018bb13 mov dword ptr [0x10192ea0], esi */
  w32((uint32_t)(0x10192ea0), (ESI));
  /* 1018bb19 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1018bb1b mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 1018bb1e jmp 0x1018bc4b */
  goto L_1018bc4b;
L_1018bb23:;
  /* 1018bb23 mov eax, 0x10190e80 */
  EAX = (0x10190e80u);
  /* 1018bb28 mov edi, eax */
  EDI = (EAX);
L_1018bb2a:;
  /* 1018bb2a cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bb2e je 0x1018bb36 */
  if (C.zf) goto L_1018bb36;
  /* 1018bb30 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bb34 jne 0x1018bb42 */
  if (!C.zf) goto L_1018bb42;
L_1018bb36:;
  /* 1018bb36 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 1018bb38 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bb3a je 0x1018bc17 */
  if (C.zf) goto L_1018bc17;
  /* 1018bb40 jmp 0x1018bb2a */
  goto L_1018bb2a;
L_1018bb42:;
  /* 1018bb42 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 1018bb45 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1018bb49 mov esi, ebx */
  ESI = (EBX);
  /* 1018bb4b mov eax, ebx */
  EAX = (EBX);
  /* 1018bb4d sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018bb4f sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018bb52 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 1018bb55 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 1018bb58 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018bb5b cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bb5e jne 0x1018bb71 */
  if (!C.zf) goto L_1018bb71;
L_1018bb60:;
  /* 1018bb60 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bb64 jge 0x1018bb71 */
  if ((C.sf==C.of)) goto L_1018bb71;
  /* 1018bb66 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018bb69 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1018bb6c cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bb6f je 0x1018bb60 */
  if (C.zf) goto L_1018bb60;
L_1018bb71:;
  /* 1018bb71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1018bb74 push 4 */
  push32((uint32_t)(0x4u));
  /* 1018bb76 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 1018bb79 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1018bb7e push eax */
  push32((uint32_t)(EAX));
  /* 1018bb7f push esi */
  push32((uint32_t)(ESI));
  /* 1018bb80 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1018bb83 call dword ptr [0x1018e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e0a8))), 0x1018bb89u);
  /* 1018bb89 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bb8b jne 0x1018bc49 */
  if (!C.zf) goto L_1018bc49;
  /* 1018bb91 push 0 */
  push32((uint32_t)(0x0u));
  /* 1018bb93 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 1018bb96 push esi */
  push32((uint32_t)(ESI));
  /* 1018bb97 call 0x10189be0 */
  push32(0x1018bb9cu); f_10189be0();
  /* 1018bb9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1018bb9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018bba2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1018bba4 mov ecx, ebx */
  ECX = (EBX);
  /* 1018bba6 jle 0x1018bbd8 */
  if ((C.zf||C.sf!=C.of)) goto L_1018bbd8;
  /* 1018bba8 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1018bbab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1018bbae:;
  /* 1018bbae or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 1018bbb5 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 1018bbb8 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 1018bbbb mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1018bbc0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1018bbc2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1018bbc4 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 1018bbcb add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018bbd0 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018bbd3 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1018bbd6 jne 0x1018bbae */
  if (!C.zf) goto L_1018bbae;
L_1018bbd8:;
  /* 1018bbd8 mov dword ptr [0x10192ea0], edi */
  w32((uint32_t)(0x10192ea0), (EDI));
  /* 1018bbde lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_1018bbe4:;
  /* 1018bbe4 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bbe6 jae 0x1018bbf4 */
  if (!C.cf) goto L_1018bbf4;
  /* 1018bbe8 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bbeb je 0x1018bbf2 */
  if (C.zf) goto L_1018bbf2;
  /* 1018bbed add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018bbf0 jmp 0x1018bbe4 */
  goto L_1018bbe4;
L_1018bbf2:;
  /* 1018bbf2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1018bbf4:;
  /* 1018bbf4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018bbf6 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 1018bbf8 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 1018bbfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018bbfe mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 1018bc01 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 1018bc04 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1018bc06 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1018bc09 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 1018bc0d lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 1018bc13 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1018bc15 jmp 0x1018bc4b */
  goto L_1018bc4b;
L_1018bc17:;
  /* 1018bc17 call 0x1018b750 */
  push32(0x1018bc1cu); f_1018b750();
  /* 1018bc1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018bc1e je 0x1018bc49 */
  if (C.zf) goto L_1018bc49;
  /* 1018bc20 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1018bc23 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 1018bc26 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 1018bc2a mov dword ptr [0x10192ea0], eax */
  w32((uint32_t)(0x10192ea0), (EAX));
  /* 1018bc2f mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1018bc31 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1018bc36 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018bc38 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1018bc3b movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 1018bc3e sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1018bc41 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 1018bc47 jmp 0x1018bc4b */
  goto L_1018bc4b;
L_1018bc49:;
  /* 1018bc49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1018bc4b:;
  /* 1018bc4b pop edi */
  EDI = (pop32());
  /* 1018bc4c pop esi */
  ESI = (pop32());
  /* 1018bc4d pop ebx */
  EBX = (pop32());
  /* 1018bc4e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018bc4f ret  */
  ESPCHK(0x1018ba48u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc50 @ 0x1018bc50 (292 bytes, 125 insns) */
void f_1018bc50(void) {
  FTRACE(0x1018bc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018bc50 push ebp */
  push32((uint32_t)(EBP));
  /* 1018bc51 mov ebp, esp */
  EBP = (ESP);
  /* 1018bc53 push ecx */
  push32((uint32_t)(ECX));
  /* 1018bc54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018bc57 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1018bc5a push ebx */
  push32((uint32_t)(EBX));
  /* 1018bc5b push esi */
  push32((uint32_t)(ESI));
  /* 1018bc5c mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1018bc5f push edi */
  push32((uint32_t)(EDI));
  /* 1018bc60 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 1018bc62 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 1018bc68 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bc6a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1018bc6d mov eax, edi */
  EAX = (EDI);
  /* 1018bc6f mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1018bc72 jb 0x1018bc95 */
  if (C.cf) goto L_1018bc95;
  /* 1018bc74 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 1018bc77 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1018bc79 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bc7b jae 0x1018bc84 */
  if (!C.cf) goto L_1018bc84;
  /* 1018bc7d add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1018bc7f sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1018bc82 jmp 0x1018bc8d */
  goto L_1018bc8d;
L_1018bc84:;
  /* 1018bc84 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1018bc88 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 1018bc8b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1018bc8d:;
  /* 1018bc8d lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 1018bc90 jmp 0x1018bd63 */
  goto L_1018bd63;
L_1018bc95:;
  /* 1018bc95 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018bc97 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018bc9a je 0x1018bc9e */
  if (C.zf) goto L_1018bc9e;
  /* 1018bc9c mov eax, esi */
  EAX = (ESI);
L_1018bc9e:;
  /* 1018bc9e lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 1018bca1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bca3 jae 0x1018bce8 */
  if (!C.cf) goto L_1018bce8;
L_1018bca5:;
  /* 1018bca5 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1018bca7 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 1018bca9 jne 0x1018bcdb */
  if (!C.zf) goto L_1018bcdb;
  /* 1018bcab push 1 */
  push32((uint32_t)(0x1u));
  /* 1018bcad lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 1018bcb0 pop esi */
  ESI = (pop32());
L_1018bcb1:;
  /* 1018bcb1 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018bcb4 jne 0x1018bcba */
  if (!C.zf) goto L_1018bcba;
  /* 1018bcb6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1018bcb7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1018bcb8 jmp 0x1018bcb1 */
  goto L_1018bcb1;
L_1018bcba:;
  /* 1018bcba cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bcbc jae 0x1018bd0c */
  if (!C.cf) goto L_1018bd0c;
  /* 1018bcbe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bcc1 jne 0x1018bcc8 */
  if (!C.zf) goto L_1018bcc8;
  /* 1018bcc3 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1018bcc6 jmp 0x1018bcd4 */
  goto L_1018bcd4;
L_1018bcc8:;
  /* 1018bcc8 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1018bccb cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bcce jb 0x1018bd6d */
  if (C.cf) goto L_1018bd6d;
L_1018bcd4:;
  /* 1018bcd4 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 1018bcd7 mov eax, ebx */
  EAX = (EBX);
  /* 1018bcd9 jmp 0x1018bce0 */
  goto L_1018bce0;
L_1018bcdb:;
  /* 1018bcdb movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1018bcde add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1018bce0:;
  /* 1018bce0 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 1018bce3 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bce6 jb 0x1018bca5 */
  if (C.cf) goto L_1018bca5;
L_1018bce8:;
  /* 1018bce8 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_1018bceb:;
  /* 1018bceb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bced jae 0x1018bd6d */
  if (!C.cf) goto L_1018bd6d;
  /* 1018bcef lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 1018bcf2 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bcf5 jae 0x1018bd6d */
  if (!C.cf) goto L_1018bd6d;
  /* 1018bcf7 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1018bcf9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1018bcfb jne 0x1018bd3d */
  if (!C.zf) goto L_1018bd3d;
  /* 1018bcfd push 1 */
  push32((uint32_t)(0x1u));
  /* 1018bcff lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 1018bd02 pop eax */
  EAX = (pop32());
L_1018bd03:;
  /* 1018bd03 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018bd06 jne 0x1018bd2d */
  if (!C.zf) goto L_1018bd2d;
  /* 1018bd08 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1018bd09 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1018bd0a jmp 0x1018bd03 */
  goto L_1018bd03;
L_1018bd0c:;
  /* 1018bd0c lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 1018bd0f cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bd12 jae 0x1018bd1d */
  if (!C.cf) goto L_1018bd1d;
  /* 1018bd14 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018bd16 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1018bd18 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1018bd1b jmp 0x1018bd26 */
  goto L_1018bd26;
L_1018bd1d:;
  /* 1018bd1d and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1018bd21 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 1018bd24 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_1018bd26:;
  /* 1018bd26 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1018bd28 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018bd2b jmp 0x1018bd63 */
  goto L_1018bd63;
L_1018bd2d:;
  /* 1018bd2d cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bd2f jae 0x1018bd44 */
  if (!C.cf) goto L_1018bd44;
  /* 1018bd31 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1018bd34 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bd37 jb 0x1018bd6d */
  if (C.cf) goto L_1018bd6d;
  /* 1018bd39 mov esi, ebx */
  ESI = (EBX);
  /* 1018bd3b jmp 0x1018bceb */
  goto L_1018bceb;
L_1018bd3d:;
  /* 1018bd3d movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1018bd40 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018bd42 jmp 0x1018bceb */
  goto L_1018bceb;
L_1018bd44:;
  /* 1018bd44 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 1018bd47 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bd4a jae 0x1018bd55 */
  if (!C.cf) goto L_1018bd55;
  /* 1018bd4c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018bd4e mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1018bd50 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1018bd53 jmp 0x1018bd5e */
  goto L_1018bd5e;
L_1018bd55:;
  /* 1018bd55 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1018bd59 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 1018bd5c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1018bd5e:;
  /* 1018bd5e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1018bd60 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_1018bd63:;
  /* 1018bd63 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1018bd66 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1018bd69 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018bd6b jmp 0x1018bd6f */
  goto L_1018bd6f;
L_1018bd6d:;
  /* 1018bd6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1018bd6f:;
  /* 1018bd6f pop edi */
  EDI = (pop32());
  /* 1018bd70 pop esi */
  ESI = (pop32());
  /* 1018bd71 pop ebx */
  EBX = (pop32());
  /* 1018bd72 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018bd73 ret  */
  ESPCHK(0x1018bc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd74 @ 0x1018bd74 (137 bytes, 50 insns) */
void f_1018bd74(void) {
  FTRACE(0x1018bd74u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018bd74 push ebx */
  push32((uint32_t)(EBX));
  /* 1018bd75 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1018bd77 cmp dword ptr [0x10196838], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10196838))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bd7d push esi */
  push32((uint32_t)(ESI));
  /* 1018bd7e push edi */
  push32((uint32_t)(EDI));
  /* 1018bd7f jne 0x1018bdc3 */
  if (!C.zf) goto L_1018bdc3;
  /* 1018bd81 push 0x1018e548 */
  push32((uint32_t)(0x1018e548u));
  /* 1018bd86 call dword ptr [0x1018e0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e0b0))), 0x1018bd8cu);
  /* 1018bd8c mov edi, eax */
  EDI = (EAX);
  /* 1018bd8e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bd90 je 0x1018bdf9 */
  if (C.zf) goto L_1018bdf9;
  /* 1018bd92 mov esi, dword ptr [0x1018e088] */
  ESI = (r32((uint32_t)(0x1018e088)));
  /* 1018bd98 push 0x1018e53c */
  push32((uint32_t)(0x1018e53cu));
  /* 1018bd9d push edi */
  push32((uint32_t)(EDI));
  /* 1018bd9e call esi */
  call_ind((uint32_t)(ESI), 0x1018bda0u);
  /* 1018bda0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018bda2 mov dword ptr [0x10196838], eax */
  w32((uint32_t)(0x10196838), (EAX));
  /* 1018bda7 je 0x1018bdf9 */
  if (C.zf) goto L_1018bdf9;
  /* 1018bda9 push 0x1018e52c */
  push32((uint32_t)(0x1018e52cu));
  /* 1018bdae push edi */
  push32((uint32_t)(EDI));
  /* 1018bdaf call esi */
  call_ind((uint32_t)(ESI), 0x1018bdb1u);
  /* 1018bdb1 push 0x1018e518 */
  push32((uint32_t)(0x1018e518u));
  /* 1018bdb6 push edi */
  push32((uint32_t)(EDI));
  /* 1018bdb7 mov dword ptr [0x1019683c], eax */
  w32((uint32_t)(0x1019683c), (EAX));
  /* 1018bdbc call esi */
  call_ind((uint32_t)(ESI), 0x1018bdbeu);
  /* 1018bdbe mov dword ptr [0x10196840], eax */
  w32((uint32_t)(0x10196840), (EAX));
L_1018bdc3:;
  /* 1018bdc3 mov eax, dword ptr [0x1019683c] */
  EAX = (r32((uint32_t)(0x1019683c)));
  /* 1018bdc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018bdca je 0x1018bde2 */
  if (C.zf) goto L_1018bde2;
  /* 1018bdcc call eax */
  call_ind((uint32_t)(EAX), 0x1018bdceu);
  /* 1018bdce mov ebx, eax */
  EBX = (EAX);
  /* 1018bdd0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1018bdd2 je 0x1018bde2 */
  if (C.zf) goto L_1018bde2;
  /* 1018bdd4 mov eax, dword ptr [0x10196840] */
  EAX = (r32((uint32_t)(0x10196840)));
  /* 1018bdd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018bddb je 0x1018bde2 */
  if (C.zf) goto L_1018bde2;
  /* 1018bddd push ebx */
  push32((uint32_t)(EBX));
  /* 1018bdde call eax */
  call_ind((uint32_t)(EAX), 0x1018bde0u);
  /* 1018bde0 mov ebx, eax */
  EBX = (EAX);
L_1018bde2:;
  /* 1018bde2 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1018bde6 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1018bdea push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1018bdee push ebx */
  push32((uint32_t)(EBX));
  /* 1018bdef call dword ptr [0x10196838] */
  call_ind((uint32_t)(r32((uint32_t)(0x10196838))), 0x1018bdf5u);
L_1018bdf5:;
  /* 1018bdf5 pop edi */
  EDI = (pop32());
  /* 1018bdf6 pop esi */
  ESI = (pop32());
  /* 1018bdf7 pop ebx */
  EBX = (pop32());
  /* 1018bdf8 ret  */
  ESPCHK(0x1018bd74u, _esp0);
  ESP += 4; return;
L_1018bdf9:;
  /* 1018bdf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018bdfb jmp 0x1018bdf5 */
  goto L_1018bdf5;
}

/* _strncpy @ 0x1018be00 (254 bytes, 109 insns) */
void f_1018be00(void) {
  FTRACE(0x1018be00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018be00 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1018be04 push edi */
  push32((uint32_t)(EDI));
  /* 1018be05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1018be07 je 0x1018be83 */
  if (C.zf) goto L_1018be83;
  /* 1018be09 push esi */
  push32((uint32_t)(ESI));
  /* 1018be0a push ebx */
  push32((uint32_t)(EBX));
  /* 1018be0b mov ebx, ecx */
  EBX = (ECX);
  /* 1018be0d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1018be11 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1018be17 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1018be1b jne 0x1018be24 */
  if (!C.zf) goto L_1018be24;
  /* 1018be1d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1018be20 jne 0x1018be91 */
  if (!C.zf) goto L_1018be91;
  /* 1018be22 jmp 0x1018be45 */
  goto L_1018be45;
L_1018be24:;
  /* 1018be24 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1018be26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1018be27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1018be29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1018be2a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1018be2b je 0x1018be52 */
  if (C.zf) goto L_1018be52;
  /* 1018be2d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1018be2f je 0x1018be5a */
  if (C.zf) goto L_1018be5a;
  /* 1018be31 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1018be37 jne 0x1018be24 */
  if (!C.zf) goto L_1018be24;
  /* 1018be39 mov ebx, ecx */
  EBX = (ECX);
  /* 1018be3b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1018be3e jne 0x1018be91 */
  if (!C.zf) goto L_1018be91;
L_1018be40:;
  /* 1018be40 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1018be43 je 0x1018be52 */
  if (C.zf) goto L_1018be52;
L_1018be45:;
  /* 1018be45 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1018be47 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1018be48 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1018be4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1018be4b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1018be4d je 0x1018be7e */
  if (C.zf) goto L_1018be7e;
  /* 1018be4f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1018be50 jne 0x1018be45 */
  if (!C.zf) goto L_1018be45;
L_1018be52:;
  /* 1018be52 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1018be56 pop ebx */
  EBX = (pop32());
  /* 1018be57 pop esi */
  ESI = (pop32());
  /* 1018be58 pop edi */
  EDI = (pop32());
  /* 1018be59 ret  */
  ESPCHK(0x1018be00u, _esp0);
  ESP += 4; return;
L_1018be5a:;
  /* 1018be5a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1018be60 je 0x1018be74 */
  if (C.zf) goto L_1018be74;
L_1018be62:;
  /* 1018be62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1018be64 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1018be65 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1018be66 je 0x1018bef6 */
  if (C.zf) goto L_1018bef6;
  /* 1018be6c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1018be72 jne 0x1018be62 */
  if (!C.zf) goto L_1018be62;
L_1018be74:;
  /* 1018be74 mov ebx, ecx */
  EBX = (ECX);
  /* 1018be76 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1018be79 jne 0x1018bee7 */
  if (!C.zf) goto L_1018bee7;
L_1018be7b:;
  /* 1018be7b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1018be7d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1018be7e:;
  /* 1018be7e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1018be7f jne 0x1018be7b */
  if (!C.zf) goto L_1018be7b;
  /* 1018be81 pop ebx */
  EBX = (pop32());
  /* 1018be82 pop esi */
  ESI = (pop32());
L_1018be83:;
  /* 1018be83 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1018be87 pop edi */
  EDI = (pop32());
  /* 1018be88 ret  */
  ESPCHK(0x1018be00u, _esp0);
  ESP += 4; return;
L_1018be89:;
  /* 1018be89 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1018be8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018be8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1018be8f je 0x1018be40 */
  if (C.zf) goto L_1018be40;
L_1018be91:;
  /* 1018be91 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1018be96 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1018be98 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018be9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1018be9d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1018be9f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1018bea1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018bea4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1018bea9 je 0x1018be89 */
  if (C.zf) goto L_1018be89;
  /* 1018beab test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1018bead je 0x1018bedb */
  if (C.zf) goto L_1018bedb;
  /* 1018beaf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1018beb1 je 0x1018bed1 */
  if (C.zf) goto L_1018bed1;
  /* 1018beb3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1018beb9 je 0x1018bec7 */
  if (C.zf) goto L_1018bec7;
  /* 1018bebb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1018bec1 jne 0x1018be89 */
  if (!C.zf) goto L_1018be89;
  /* 1018bec3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1018bec5 jmp 0x1018bedf */
  goto L_1018bedf;
L_1018bec7:;
  /* 1018bec7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1018becd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1018becf jmp 0x1018bedf */
  goto L_1018bedf;
L_1018bed1:;
  /* 1018bed1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1018bed7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1018bed9 jmp 0x1018bedf */
  goto L_1018bedf;
L_1018bedb:;
  /* 1018bedb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1018bedd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1018bedf:;
  /* 1018bedf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018bee2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018bee4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1018bee5 je 0x1018bef1 */
  if (C.zf) goto L_1018bef1;
L_1018bee7:;
  /* 1018bee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1018bee9:;
  /* 1018bee9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1018beeb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018beee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1018beef jne 0x1018bee9 */
  if (!C.zf) goto L_1018bee9;
L_1018bef1:;
  /* 1018bef1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1018bef4 jne 0x1018be7b */
  if (!C.zf) goto L_1018be7b;
L_1018bef6:;
  /* 1018bef6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1018befa pop ebx */
  EBX = (pop32());
  /* 1018befb pop esi */
  ESI = (pop32());
  /* 1018befc pop edi */
  EDI = (pop32());
  /* 1018befd ret  */
  ESPCHK(0x1018be00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000befe @ 0x1018befe (115 bytes, 37 insns) */
void f_1018befe(void) {
  FTRACE(0x1018befeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018befe push esi */
  push32((uint32_t)(ESI));
  /* 1018beff call 0x1018bf7a */
  push32(0x1018bf04u); f_1018bf7a();
  /* 1018bf04 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1018bf08 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1018bf0a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1018bf0c mov eax, 0x10192eb0 */
  EAX = (0x10192eb0u);
L_1018bf11:;
  /* 1018bf11 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bf13 je 0x1018bf37 */
  if (C.zf) goto L_1018bf37;
  /* 1018bf15 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018bf18 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1018bf19 cmp eax, 0x10193018 */
  { uint32_t _a=(EAX),_b=(0x10193018u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bf1e jl 0x1018bf11 */
  if ((C.sf!=C.of)) goto L_1018bf11;
  /* 1018bf20 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bf23 jb 0x1018bf47 */
  if (C.cf) goto L_1018bf47;
  /* 1018bf25 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bf28 ja 0x1018bf47 */
  if ((!C.cf&&!C.zf)) goto L_1018bf47;
  /* 1018bf2a call 0x1018bf71 */
  push32(0x1018bf2fu); f_1018bf71();
  /* 1018bf2f mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1018bf35 pop esi */
  ESI = (pop32());
  /* 1018bf36 ret  */
  ESPCHK(0x1018befeu, _esp0);
  ESP += 4; return;
L_1018bf37:;
  /* 1018bf37 call 0x1018bf71 */
  push32(0x1018bf3cu); f_1018bf71();
  /* 1018bf3c mov ecx, dword ptr [esi*8 + 0x10192eb4] */
  ECX = (r32((uint32_t)(ESI*8 + 0x10192eb4)));
  /* 1018bf43 pop esi */
  ESI = (pop32());
  /* 1018bf44 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1018bf46 ret  */
  ESPCHK(0x1018befeu, _esp0);
  ESP += 4; return;
L_1018bf47:;
  /* 1018bf47 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bf4d jb 0x1018bf64 */
  if (C.cf) goto L_1018bf64;
  /* 1018bf4f cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bf55 ja 0x1018bf64 */
  if ((!C.cf&&!C.zf)) goto L_1018bf64;
  /* 1018bf57 call 0x1018bf71 */
  push32(0x1018bf5cu); f_1018bf71();
  /* 1018bf5c mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1018bf62 pop esi */
  ESI = (pop32());
  /* 1018bf63 ret  */
  ESPCHK(0x1018befeu, _esp0);
  ESP += 4; return;
L_1018bf64:;
  /* 1018bf64 call 0x1018bf71 */
  push32(0x1018bf69u); f_1018bf71();
  /* 1018bf69 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1018bf6f pop esi */
  ESI = (pop32());
  /* 1018bf70 ret  */
  ESPCHK(0x1018befeu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf71 @ 0x1018bf71 (9 bytes, 3 insns) */
void f_1018bf71(void) {
  FTRACE(0x1018bf71u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018bf71 call 0x10188048 */
  push32(0x1018bf76u); f_10188048();
  /* 1018bf76 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018bf79 ret  */
  ESPCHK(0x1018bf71u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf7a @ 0x1018bf7a (9 bytes, 3 insns) */
void f_1018bf7a(void) {
  FTRACE(0x1018bf7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018bf7a call 0x10188048 */
  push32(0x1018bf7fu); f_10188048();
  /* 1018bf7f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018bf82 ret  */
  ESPCHK(0x1018bf7au, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf83 @ 0x1018bf83 (127 bytes, 48 insns) */
void f_1018bf83(void) {
  FTRACE(0x1018bf83u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018bf83 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1018bf87 push esi */
  push32((uint32_t)(ESI));
  /* 1018bf88 cmp ecx, dword ptr [0x10197d60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10197d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bf8e push edi */
  push32((uint32_t)(EDI));
  /* 1018bf8f jae 0x1018bfe9 */
  if (!C.cf) goto L_1018bfe9;
  /* 1018bf91 mov eax, ecx */
  EAX = (ECX);
  /* 1018bf93 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1018bf96 lea edi, [eax*4 + 0x10197c60] */
  EDI = ((uint32_t)(EAX*4 + 0x10197c60));
  /* 1018bf9d mov eax, ecx */
  EAX = (ECX);
  /* 1018bf9f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1018bfa2 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1018bfa5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1018bfa7 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1018bfaa add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018bfac test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1018bfb0 je 0x1018bfe9 */
  if (C.zf) goto L_1018bfe9;
  /* 1018bfb2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bfb5 je 0x1018bfe9 */
  if (C.zf) goto L_1018bfe9;
  /* 1018bfb7 cmp dword ptr [0x10196674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10196674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018bfbe jne 0x1018bfdf */
  if (!C.zf) goto L_1018bfdf;
  /* 1018bfc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018bfc2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018bfc4 je 0x1018bfd6 */
  if (C.zf) goto L_1018bfd6;
  /* 1018bfc6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1018bfc7 je 0x1018bfd1 */
  if (C.zf) goto L_1018bfd1;
  /* 1018bfc9 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1018bfca jne 0x1018bfdf */
  if (!C.zf) goto L_1018bfdf;
  /* 1018bfcc push eax */
  push32((uint32_t)(EAX));
  /* 1018bfcd push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1018bfcf jmp 0x1018bfd9 */
  goto L_1018bfd9;
L_1018bfd1:;
  /* 1018bfd1 push eax */
  push32((uint32_t)(EAX));
  /* 1018bfd2 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1018bfd4 jmp 0x1018bfd9 */
  goto L_1018bfd9;
L_1018bfd6:;
  /* 1018bfd6 push eax */
  push32((uint32_t)(EAX));
  /* 1018bfd7 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_1018bfd9:;
  /* 1018bfd9 call dword ptr [0x1018e0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e0b4))), 0x1018bfdfu);
L_1018bfdf:;
  /* 1018bfdf mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1018bfe1 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 1018bfe5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018bfe7 jmp 0x1018bfff */
  goto L_1018bfff;
L_1018bfe9:;
  /* 1018bfe9 call 0x1018bf71 */
  push32(0x1018bfeeu); f_1018bf71();
  /* 1018bfee mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1018bff4 call 0x1018bf7a */
  push32(0x1018bff9u); f_1018bf7a();
  /* 1018bff9 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1018bffc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1018bfff:;
  /* 1018bfff pop edi */
  EDI = (pop32());
  /* 1018c000 pop esi */
  ESI = (pop32());
  /* 1018c001 ret  */
  ESPCHK(0x1018bf83u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c002 @ 0x1018c002 (66 bytes, 19 insns) */
void f_1018c002(void) {
  FTRACE(0x1018c002u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018c002 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1018c006 cmp eax, dword ptr [0x10197d60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10197d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c00c jae 0x1018c02d */
  if (!C.cf) goto L_1018c02d;
  /* 1018c00e mov ecx, eax */
  ECX = (EAX);
  /* 1018c010 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1018c013 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1018c016 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1018c019 mov ecx, dword ptr [ecx*4 + 0x10197c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10197c60)));
  /* 1018c020 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1018c025 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 1018c028 je 0x1018c02d */
  if (C.zf) goto L_1018c02d;
  /* 1018c02a mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 1018c02c ret  */
  ESPCHK(0x1018c002u, _esp0);
  ESP += 4; return;
L_1018c02d:;
  /* 1018c02d call 0x1018bf71 */
  push32(0x1018c032u); f_1018bf71();
  /* 1018c032 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1018c038 call 0x1018bf7a */
  push32(0x1018c03du); f_1018bf7a();
  /* 1018c03d and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1018c040 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1018c043 ret  */
  ESPCHK(0x1018c002u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c044 @ 0x1018c044 (95 bytes, 34 insns) */
void f_1018c044(void) {
  FTRACE(0x1018c044u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018c044 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1018c048 push ebx */
  push32((uint32_t)(EBX));
  /* 1018c049 mov ecx, eax */
  ECX = (EAX);
  /* 1018c04b and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1018c04e sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1018c051 push esi */
  push32((uint32_t)(ESI));
  /* 1018c052 push edi */
  push32((uint32_t)(EDI));
  /* 1018c053 mov esi, dword ptr [ecx*4 + 0x10197c60] */
  ESI = (r32((uint32_t)(ECX*4 + 0x10197c60)));
  /* 1018c05a lea ebx, [ecx*4 + 0x10197c60] */
  EBX = ((uint32_t)(ECX*4 + 0x10197c60));
  /* 1018c061 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 1018c064 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 1018c067 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018c069 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c06d jne 0x1018c092 */
  if (!C.zf) goto L_1018c092;
  /* 1018c06f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1018c071 call 0x1018a013 */
  push32(0x1018c076u); f_1018a013();
  /* 1018c076 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c07a pop ecx */
  ECX = (pop32());
  /* 1018c07b jne 0x1018c08a */
  if (!C.zf) goto L_1018c08a;
  /* 1018c07d lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 1018c080 push eax */
  push32((uint32_t)(EAX));
  /* 1018c081 call dword ptr [0x1018e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e094))), 0x1018c087u);
  /* 1018c087 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1018c08a:;
  /* 1018c08a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1018c08c call 0x1018a074 */
  push32(0x1018c091u); f_1018a074();
  /* 1018c091 pop ecx */
  ECX = (pop32());
L_1018c092:;
  /* 1018c092 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1018c094 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 1018c098 push eax */
  push32((uint32_t)(EAX));
  /* 1018c099 call dword ptr [0x1018e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e00c))), 0x1018c09fu);
  /* 1018c09f pop edi */
  EDI = (pop32());
  /* 1018c0a0 pop esi */
  ESI = (pop32());
  /* 1018c0a1 pop ebx */
  EBX = (pop32());
  /* 1018c0a2 ret  */
  ESPCHK(0x1018c044u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0a3 @ 0x1018c0a3 (34 bytes, 10 insns) */
void f_1018c0a3(void) {
  FTRACE(0x1018c0a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018c0a3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1018c0a7 mov ecx, eax */
  ECX = (EAX);
  /* 1018c0a9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1018c0ac sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1018c0af lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1018c0b2 mov ecx, dword ptr [ecx*4 + 0x10197c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10197c60)));
  /* 1018c0b9 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 1018c0bd push eax */
  push32((uint32_t)(EAX));
  /* 1018c0be call dword ptr [0x1018e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e008))), 0x1018c0c4u);
  /* 1018c0c4 ret  */
  ESPCHK(0x1018c0a3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c146 @ 0x1018c146 (46 bytes, 22 insns) */
void f_1018c146(void) {
  FTRACE(0x1018c146u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018c146 push esi */
  push32((uint32_t)(ESI));
  /* 1018c147 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1018c14b push esi */
  push32((uint32_t)(ESI));
  /* 1018c14c call 0x1018c174 */
  push32(0x1018c151u); f_1018c174();
  /* 1018c151 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018c153 pop ecx */
  ECX = (pop32());
  /* 1018c154 je 0x1018c15b */
  if (C.zf) goto L_1018c15b;
  /* 1018c156 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1018c159 pop esi */
  ESI = (pop32());
  /* 1018c15a ret  */
  ESPCHK(0x1018c146u, _esp0);
  ESP += 4; return;
L_1018c15b:;
  /* 1018c15b test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 1018c15f je 0x1018c170 */
  if (C.zf) goto L_1018c170;
  /* 1018c161 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1018c164 call 0x1018d2c0 */
  push32(0x1018c169u); f_1018d2c0();
  /* 1018c169 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1018c16b pop ecx */
  ECX = (pop32());
  /* 1018c16c pop esi */
  ESI = (pop32());
  /* 1018c16d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018c16f ret  */
  ESPCHK(0x1018c146u, _esp0);
  ESP += 4; return;
L_1018c170:;
  /* 1018c170 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018c172 pop esi */
  ESI = (pop32());
  /* 1018c173 ret  */
  ESPCHK(0x1018c146u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c174 @ 0x1018c174 (92 bytes, 40 insns) */
void f_1018c174(void) {
  FTRACE(0x1018c174u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018c174 push ebx */
  push32((uint32_t)(EBX));
  /* 1018c175 push esi */
  push32((uint32_t)(ESI));
  /* 1018c176 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1018c17a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1018c17c push edi */
  push32((uint32_t)(EDI));
  /* 1018c17d mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1018c180 mov ecx, eax */
  ECX = (EAX);
  /* 1018c182 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1018c185 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c188 jne 0x1018c1c1 */
  if (!C.zf) goto L_1018c1c1;
  /* 1018c18a test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 1018c18e je 0x1018c1c1 */
  if (C.zf) goto L_1018c1c1;
  /* 1018c190 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1018c193 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 1018c195 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018c197 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1018c199 jle 0x1018c1c1 */
  if ((C.zf||C.sf!=C.of)) goto L_1018c1c1;
  /* 1018c19b push edi */
  push32((uint32_t)(EDI));
  /* 1018c19c push eax */
  push32((uint32_t)(EAX));
  /* 1018c19d push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1018c1a0 call 0x10188c75 */
  push32(0x1018c1a5u); f_10188c75();
  /* 1018c1a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018c1a8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c1aa jne 0x1018c1ba */
  if (!C.zf) goto L_1018c1ba;
  /* 1018c1ac mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1018c1af test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 1018c1b1 je 0x1018c1c1 */
  if (C.zf) goto L_1018c1c1;
  /* 1018c1b3 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 1018c1b5 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1018c1b8 jmp 0x1018c1c1 */
  goto L_1018c1c1;
L_1018c1ba:;
  /* 1018c1ba or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1018c1be or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_1018c1c1:;
  /* 1018c1c1 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1018c1c4 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1018c1c8 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1018c1ca pop edi */
  EDI = (pop32());
  /* 1018c1cb mov eax, ebx */
  EAX = (EBX);
  /* 1018c1cd pop esi */
  ESI = (pop32());
  /* 1018c1ce pop ebx */
  EBX = (pop32());
  /* 1018c1cf ret  */
  ESPCHK(0x1018c174u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1d9 @ 0x1018c1d9 (164 bytes, 66 insns) */
void f_1018c1d9(void) {
  FTRACE(0x1018c1d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018c1d9 push ebx */
  push32((uint32_t)(EBX));
  /* 1018c1da push esi */
  push32((uint32_t)(ESI));
  /* 1018c1db push edi */
  push32((uint32_t)(EDI));
  /* 1018c1dc push 2 */
  push32((uint32_t)(0x2u));
  /* 1018c1de xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1018c1e0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1018c1e2 call 0x1018a013 */
  push32(0x1018c1e7u); f_1018a013();
  /* 1018c1e7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1018c1e9 pop ecx */
  ECX = (pop32());
  /* 1018c1ea cmp dword ptr [0x10197c40], esi */
  { uint32_t _a=(r32((uint32_t)(0x10197c40))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c1f0 jle 0x1018c266 */
  if ((C.zf||C.sf!=C.of)) goto L_1018c266;
L_1018c1f2:;
  /* 1018c1f2 mov eax, dword ptr [0x10196c28] */
  EAX = (r32((uint32_t)(0x10196c28)));
  /* 1018c1f7 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1018c1fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018c1fc je 0x1018c25d */
  if (C.zf) goto L_1018c25d;
  /* 1018c1fe test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1018c202 je 0x1018c25d */
  if (C.zf) goto L_1018c25d;
  /* 1018c204 push eax */
  push32((uint32_t)(EAX));
  /* 1018c205 push esi */
  push32((uint32_t)(ESI));
  /* 1018c206 call 0x10188fbd */
  push32(0x1018c20bu); f_10188fbd();
  /* 1018c20b mov eax, dword ptr [0x10196c28] */
  EAX = (r32((uint32_t)(0x10196c28)));
  /* 1018c210 pop ecx */
  ECX = (pop32());
  /* 1018c211 pop ecx */
  ECX = (pop32());
  /* 1018c212 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1018c215 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1018c218 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 1018c21b je 0x1018c24d */
  if (C.zf) goto L_1018c24d;
  /* 1018c21d cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c222 jne 0x1018c233 */
  if (!C.zf) goto L_1018c233;
  /* 1018c224 push eax */
  push32((uint32_t)(EAX));
  /* 1018c225 call 0x1018c146 */
  push32(0x1018c22au); f_1018c146();
  /* 1018c22a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c22d pop ecx */
  ECX = (pop32());
  /* 1018c22e je 0x1018c24d */
  if (C.zf) goto L_1018c24d;
  /* 1018c230 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1018c231 jmp 0x1018c24d */
  goto L_1018c24d;
L_1018c233:;
  /* 1018c233 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c238 jne 0x1018c24d */
  if (!C.zf) goto L_1018c24d;
  /* 1018c23a test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 1018c23d je 0x1018c24d */
  if (C.zf) goto L_1018c24d;
  /* 1018c23f push eax */
  push32((uint32_t)(EAX));
  /* 1018c240 call 0x1018c146 */
  push32(0x1018c245u); f_1018c146();
  /* 1018c245 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c248 pop ecx */
  ECX = (pop32());
  /* 1018c249 jne 0x1018c24d */
  if (!C.zf) goto L_1018c24d;
  /* 1018c24b or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_1018c24d:;
  /* 1018c24d mov eax, dword ptr [0x10196c28] */
  EAX = (r32((uint32_t)(0x10196c28)));
  /* 1018c252 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 1018c255 push esi */
  push32((uint32_t)(ESI));
  /* 1018c256 call 0x1018900f */
  push32(0x1018c25bu); f_1018900f();
  /* 1018c25b pop ecx */
  ECX = (pop32());
  /* 1018c25c pop ecx */
  ECX = (pop32());
L_1018c25d:;
  /* 1018c25d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1018c25e cmp esi, dword ptr [0x10197c40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10197c40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c264 jl 0x1018c1f2 */
  if ((C.sf!=C.of)) goto L_1018c1f2;
L_1018c266:;
  /* 1018c266 push 2 */
  push32((uint32_t)(0x2u));
  /* 1018c268 call 0x1018a074 */
  push32(0x1018c26du); f_1018a074();
  /* 1018c26d cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c272 pop ecx */
  ECX = (pop32());
  /* 1018c273 mov eax, ebx */
  EAX = (EBX);
  /* 1018c275 je 0x1018c279 */
  if (C.zf) goto L_1018c279;
  /* 1018c277 mov eax, edi */
  EAX = (EDI);
L_1018c279:;
  /* 1018c279 pop edi */
  EDI = (pop32());
  /* 1018c27a pop esi */
  ESI = (pop32());
  /* 1018c27b pop ebx */
  EBX = (pop32());
  /* 1018c27c ret  */
  ESPCHK(0x1018c1d9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c27d @ 0x1018c27d (318 bytes, 123 insns) */
void f_1018c27d(void) {
  FTRACE(0x1018c27du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018c27d push ebp */
  push32((uint32_t)(EBP));
  /* 1018c27e mov ebp, esp */
  EBP = (ESP);
  /* 1018c280 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1018c282 push 0x1018e560 */
  push32((uint32_t)(0x1018e560u));
  /* 1018c287 push 0x1018d030 */
  push32((uint32_t)(0x1018d030u));
  /* 1018c28c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1018c292 push eax */
  push32((uint32_t)(EAX));
  /* 1018c293 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1018c29a sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018c29d push ebx */
  push32((uint32_t)(EBX));
  /* 1018c29e push esi */
  push32((uint32_t)(ESI));
  /* 1018c29f push edi */
  push32((uint32_t)(EDI));
  /* 1018c2a0 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1018c2a3 mov eax, dword ptr [0x10196884] */
  EAX = (r32((uint32_t)(0x10196884)));
  /* 1018c2a8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1018c2aa cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c2ac jne 0x1018c2ec */
  if (!C.zf) goto L_1018c2ec;
  /* 1018c2ae lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1018c2b1 push eax */
  push32((uint32_t)(EAX));
  /* 1018c2b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018c2b4 pop esi */
  ESI = (pop32());
  /* 1018c2b5 push esi */
  push32((uint32_t)(ESI));
  /* 1018c2b6 push 0x1018e558 */
  push32((uint32_t)(0x1018e558u));
  /* 1018c2bb push esi */
  push32((uint32_t)(ESI));
  /* 1018c2bc call dword ptr [0x1018e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e0c0))), 0x1018c2c2u);
  /* 1018c2c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018c2c4 je 0x1018c2ca */
  if (C.zf) goto L_1018c2ca;
  /* 1018c2c6 mov eax, esi */
  EAX = (ESI);
  /* 1018c2c8 jmp 0x1018c2e7 */
  goto L_1018c2e7;
L_1018c2ca:;
  /* 1018c2ca lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1018c2cd push eax */
  push32((uint32_t)(EAX));
  /* 1018c2ce push esi */
  push32((uint32_t)(ESI));
  /* 1018c2cf push 0x1018e554 */
  push32((uint32_t)(0x1018e554u));
  /* 1018c2d4 push esi */
  push32((uint32_t)(ESI));
  /* 1018c2d5 push ebx */
  push32((uint32_t)(EBX));
  /* 1018c2d6 call dword ptr [0x1018e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e0bc))), 0x1018c2dcu);
  /* 1018c2dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018c2de je 0x1018c3b2 */
  if (C.zf) goto L_1018c3b2;
  /* 1018c2e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1018c2e6 pop eax */
  EAX = (pop32());
L_1018c2e7:;
  /* 1018c2e7 mov dword ptr [0x10196884], eax */
  w32((uint32_t)(0x10196884), (EAX));
L_1018c2ec:;
  /* 1018c2ec cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c2ef jne 0x1018c315 */
  if (!C.zf) goto L_1018c315;
  /* 1018c2f1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1018c2f4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c2f6 jne 0x1018c2fd */
  if (!C.zf) goto L_1018c2fd;
  /* 1018c2f8 mov eax, dword ptr [0x10196858] */
  EAX = (r32((uint32_t)(0x10196858)));
L_1018c2fd:;
  /* 1018c2fd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1018c300 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1018c303 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1018c306 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1018c309 push eax */
  push32((uint32_t)(EAX));
  /* 1018c30a call dword ptr [0x1018e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e0bc))), 0x1018c310u);
  /* 1018c310 jmp 0x1018c3b4 */
  goto L_1018c3b4;
L_1018c315:;
  /* 1018c315 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c318 jne 0x1018c3b2 */
  if (!C.zf) goto L_1018c3b2;
  /* 1018c31e cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c321 jne 0x1018c32b */
  if (!C.zf) goto L_1018c32b;
  /* 1018c323 mov eax, dword ptr [0x10196868] */
  EAX = (r32((uint32_t)(0x10196868)));
  /* 1018c328 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1018c32b:;
  /* 1018c32b push ebx */
  push32((uint32_t)(EBX));
  /* 1018c32c push ebx */
  push32((uint32_t)(EBX));
  /* 1018c32d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1018c330 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1018c333 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1018c336 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1018c338 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018c33a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1018c33d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1018c33e push eax */
  push32((uint32_t)(EAX));
  /* 1018c33f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1018c342 call dword ptr [0x1018e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e0b8))), 0x1018c348u);
  /* 1018c348 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1018c34b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c34d je 0x1018c3b2 */
  if (C.zf) goto L_1018c3b2;
  /* 1018c34f mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1018c352 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 1018c355 mov eax, edi */
  EAX = (EDI);
  /* 1018c357 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018c35a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1018c35c call 0x1018aed0 */
  push32(0x1018c361u); f_1018aed0();
  /* 1018c361 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1018c364 mov esi, esp */
  ESI = (ESP);
  /* 1018c366 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 1018c369 push edi */
  push32((uint32_t)(EDI));
  /* 1018c36a push ebx */
  push32((uint32_t)(EBX));
  /* 1018c36b push esi */
  push32((uint32_t)(ESI));
  /* 1018c36c call 0x10189be0 */
  push32(0x1018c371u); f_10189be0();
  /* 1018c371 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018c374 jmp 0x1018c381 */
  goto L_1018c381;
  /* 1018c376 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018c378 pop eax */
  EAX = (pop32());
  /* 1018c379 ret  */
  ESPCHK(0x1018c27du, _esp0);
  ESP += 4; return;
  /* 1018c37a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1018c37d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1018c37f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1018c381:;
  /* 1018c381 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1018c385 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c387 je 0x1018c3b2 */
  if (C.zf) goto L_1018c3b2;
  /* 1018c389 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1018c38c push esi */
  push32((uint32_t)(ESI));
  /* 1018c38d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1018c390 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1018c393 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018c395 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1018c398 call dword ptr [0x1018e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e0b8))), 0x1018c39eu);
  /* 1018c39e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c3a0 je 0x1018c3b2 */
  if (C.zf) goto L_1018c3b2;
  /* 1018c3a2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1018c3a5 push eax */
  push32((uint32_t)(EAX));
  /* 1018c3a6 push esi */
  push32((uint32_t)(ESI));
  /* 1018c3a7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1018c3aa call dword ptr [0x1018e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e0c0))), 0x1018c3b0u);
  /* 1018c3b0 jmp 0x1018c3b4 */
  goto L_1018c3b4;
L_1018c3b2:;
  /* 1018c3b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1018c3b4:;
  /* 1018c3b4 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 1018c3b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1018c3ba mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1018c3c1 pop edi */
  EDI = (pop32());
  /* 1018c3c2 pop esi */
  ESI = (pop32());
  /* 1018c3c3 pop ebx */
  EBX = (pop32());
  /* 1018c3c4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018c3c5 ret  */
  ESPCHK(0x1018c27du, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3c6 @ 0x1018c3c6 (511 bytes, 193 insns) */
void f_1018c3c6(void) {
  FTRACE(0x1018c3c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018c3c6 push ebp */
  push32((uint32_t)(EBP));
  /* 1018c3c7 mov ebp, esp */
  EBP = (ESP);
  /* 1018c3c9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1018c3cb push 0x1018e570 */
  push32((uint32_t)(0x1018e570u));
  /* 1018c3d0 push 0x1018d030 */
  push32((uint32_t)(0x1018d030u));
  /* 1018c3d5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1018c3db push eax */
  push32((uint32_t)(EAX));
  /* 1018c3dc mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1018c3e3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018c3e6 push ebx */
  push32((uint32_t)(EBX));
  /* 1018c3e7 push esi */
  push32((uint32_t)(ESI));
  /* 1018c3e8 push edi */
  push32((uint32_t)(EDI));
  /* 1018c3e9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1018c3ec xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1018c3ee cmp dword ptr [0x10196888], edi */
  { uint32_t _a=(r32((uint32_t)(0x10196888))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c3f4 jne 0x1018c43c */
  if (!C.zf) goto L_1018c43c;
  /* 1018c3f6 push edi */
  push32((uint32_t)(EDI));
  /* 1018c3f7 push edi */
  push32((uint32_t)(EDI));
  /* 1018c3f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018c3fa pop ebx */
  EBX = (pop32());
  /* 1018c3fb push ebx */
  push32((uint32_t)(EBX));
  /* 1018c3fc push 0x1018e558 */
  push32((uint32_t)(0x1018e558u));
  /* 1018c401 mov esi, 0x100 */
  ESI = (0x100u);
  /* 1018c406 push esi */
  push32((uint32_t)(ESI));
  /* 1018c407 push edi */
  push32((uint32_t)(EDI));
  /* 1018c408 call dword ptr [0x1018e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e0c8))), 0x1018c40eu);
  /* 1018c40e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018c410 je 0x1018c41a */
  if (C.zf) goto L_1018c41a;
  /* 1018c412 mov dword ptr [0x10196888], ebx */
  w32((uint32_t)(0x10196888), (EBX));
  /* 1018c418 jmp 0x1018c43c */
  goto L_1018c43c;
L_1018c41a:;
  /* 1018c41a push edi */
  push32((uint32_t)(EDI));
  /* 1018c41b push edi */
  push32((uint32_t)(EDI));
  /* 1018c41c push ebx */
  push32((uint32_t)(EBX));
  /* 1018c41d push 0x1018e554 */
  push32((uint32_t)(0x1018e554u));
  /* 1018c422 push esi */
  push32((uint32_t)(ESI));
  /* 1018c423 push edi */
  push32((uint32_t)(EDI));
  /* 1018c424 call dword ptr [0x1018e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e0c4))), 0x1018c42au);
  /* 1018c42a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018c42c je 0x1018c554 */
  if (C.zf) goto L_1018c554;
  /* 1018c432 mov dword ptr [0x10196888], 2 */
  w32((uint32_t)(0x10196888), (0x2u));
L_1018c43c:;
  /* 1018c43c cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c43f jle 0x1018c451 */
  if ((C.zf||C.sf!=C.of)) goto L_1018c451;
  /* 1018c441 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1018c444 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1018c447 call 0x1018c5ea */
  push32(0x1018c44cu); f_1018c5ea();
  /* 1018c44c pop ecx */
  ECX = (pop32());
  /* 1018c44d pop ecx */
  ECX = (pop32());
  /* 1018c44e mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1018c451:;
  /* 1018c451 mov eax, dword ptr [0x10196888] */
  EAX = (r32((uint32_t)(0x10196888)));
  /* 1018c456 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c459 jne 0x1018c478 */
  if (!C.zf) goto L_1018c478;
  /* 1018c45b push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1018c45e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1018c461 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1018c464 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1018c467 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1018c46a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1018c46d call dword ptr [0x1018e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e0c4))), 0x1018c473u);
  /* 1018c473 jmp 0x1018c556 */
  goto L_1018c556;
L_1018c478:;
  /* 1018c478 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c47b jne 0x1018c554 */
  if (!C.zf) goto L_1018c554;
  /* 1018c481 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c484 jne 0x1018c48e */
  if (!C.zf) goto L_1018c48e;
  /* 1018c486 mov eax, dword ptr [0x10196868] */
  EAX = (r32((uint32_t)(0x10196868)));
  /* 1018c48b mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_1018c48e:;
  /* 1018c48e push edi */
  push32((uint32_t)(EDI));
  /* 1018c48f push edi */
  push32((uint32_t)(EDI));
  /* 1018c490 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1018c493 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1018c496 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 1018c499 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1018c49b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018c49d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1018c4a0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1018c4a1 push eax */
  push32((uint32_t)(EAX));
  /* 1018c4a2 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1018c4a5 call dword ptr [0x1018e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e0b8))), 0x1018c4abu);
  /* 1018c4ab mov ebx, eax */
  EBX = (EAX);
  /* 1018c4ad mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 1018c4b0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c4b2 je 0x1018c554 */
  if (C.zf) goto L_1018c554;
  /* 1018c4b8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1018c4bb lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 1018c4be add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018c4c1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1018c4c3 call 0x1018aed0 */
  push32(0x1018c4c8u); f_1018aed0();
  /* 1018c4c8 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1018c4cb mov eax, esp */
  EAX = (ESP);
  /* 1018c4cd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1018c4d0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1018c4d4 jmp 0x1018c4e9 */
  goto L_1018c4e9;
  /* 1018c4d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018c4d8 pop eax */
  EAX = (pop32());
  /* 1018c4d9 ret  */
  ESPCHK(0x1018c3c6u, _esp0);
  ESP += 4; return;
  /* 1018c4da mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1018c4dd xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1018c4df mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 1018c4e2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1018c4e6 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_1018c4e9:;
  /* 1018c4e9 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c4ec je 0x1018c554 */
  if (C.zf) goto L_1018c554;
  /* 1018c4ee push ebx */
  push32((uint32_t)(EBX));
  /* 1018c4ef push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1018c4f2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1018c4f5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1018c4f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018c4fa push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1018c4fd call dword ptr [0x1018e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e0b8))), 0x1018c503u);
  /* 1018c503 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018c505 je 0x1018c554 */
  if (C.zf) goto L_1018c554;
  /* 1018c507 push edi */
  push32((uint32_t)(EDI));
  /* 1018c508 push edi */
  push32((uint32_t)(EDI));
  /* 1018c509 push ebx */
  push32((uint32_t)(EBX));
  /* 1018c50a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1018c50d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1018c510 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1018c513 call dword ptr [0x1018e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e0c8))), 0x1018c519u);
  /* 1018c519 mov esi, eax */
  ESI = (EAX);
  /* 1018c51b mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 1018c51e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c520 je 0x1018c554 */
  if (C.zf) goto L_1018c554;
  /* 1018c522 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 1018c526 je 0x1018c568 */
  if (C.zf) goto L_1018c568;
  /* 1018c528 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c52b je 0x1018c5e3 */
  if (C.zf) goto L_1018c5e3;
  /* 1018c531 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c534 jg 0x1018c554 */
  if ((!C.zf&&C.sf==C.of)) goto L_1018c554;
  /* 1018c536 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1018c539 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1018c53c push ebx */
  push32((uint32_t)(EBX));
  /* 1018c53d push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1018c540 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1018c543 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1018c546 call dword ptr [0x1018e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e0c8))), 0x1018c54cu);
  /* 1018c54c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018c54e jne 0x1018c5e3 */
  if (!C.zf) goto L_1018c5e3;
L_1018c554:;
  /* 1018c554 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1018c556:;
  /* 1018c556 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1018c559 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1018c55c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1018c563 pop edi */
  EDI = (pop32());
  /* 1018c564 pop esi */
  ESI = (pop32());
  /* 1018c565 pop ebx */
  EBX = (pop32());
  /* 1018c566 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018c567 ret  */
  ESPCHK(0x1018c3c6u, _esp0);
  ESP += 4; return;
L_1018c568:;
  /* 1018c568 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1018c56f lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 1018c572 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018c575 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1018c577 call 0x1018aed0 */
  push32(0x1018c57cu); f_1018aed0();
  /* 1018c57c mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1018c57f mov ebx, esp */
  EBX = (ESP);
  /* 1018c581 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 1018c584 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1018c588 jmp 0x1018c59c */
  goto L_1018c59c;
  /* 1018c58a push 1 */
  push32((uint32_t)(0x1u));
  /* 1018c58c pop eax */
  EAX = (pop32());
  /* 1018c58d ret  */
  ESPCHK(0x1018c3c6u, _esp0);
  ESP += 4; return;
  /* 1018c58e mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1018c591 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1018c593 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1018c595 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1018c599 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_1018c59c:;
  /* 1018c59c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c59e je 0x1018c554 */
  if (C.zf) goto L_1018c554;
  /* 1018c5a0 push esi */
  push32((uint32_t)(ESI));
  /* 1018c5a1 push ebx */
  push32((uint32_t)(EBX));
  /* 1018c5a2 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1018c5a5 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1018c5a8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1018c5ab push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1018c5ae call dword ptr [0x1018e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e0c8))), 0x1018c5b4u);
  /* 1018c5b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018c5b6 je 0x1018c554 */
  if (C.zf) goto L_1018c554;
  /* 1018c5b8 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c5bb push edi */
  push32((uint32_t)(EDI));
  /* 1018c5bc push edi */
  push32((uint32_t)(EDI));
  /* 1018c5bd jne 0x1018c5c3 */
  if (!C.zf) goto L_1018c5c3;
  /* 1018c5bf push edi */
  push32((uint32_t)(EDI));
  /* 1018c5c0 push edi */
  push32((uint32_t)(EDI));
  /* 1018c5c1 jmp 0x1018c5c9 */
  goto L_1018c5c9;
L_1018c5c3:;
  /* 1018c5c3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1018c5c6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_1018c5c9:;
  /* 1018c5c9 push esi */
  push32((uint32_t)(ESI));
  /* 1018c5ca push ebx */
  push32((uint32_t)(EBX));
  /* 1018c5cb push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1018c5d0 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1018c5d3 call dword ptr [0x1018e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e060))), 0x1018c5d9u);
  /* 1018c5d9 mov esi, eax */
  ESI = (EAX);
  /* 1018c5db cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c5dd je 0x1018c554 */
  if (C.zf) goto L_1018c554;
L_1018c5e3:;
  /* 1018c5e3 mov eax, esi */
  EAX = (ESI);
  /* 1018c5e5 jmp 0x1018c556 */
  goto L_1018c556;
}

/* FUN_1000c5ea @ 0x1018c5ea (43 bytes, 20 insns) */
void f_1018c5ea(void) {
  FTRACE(0x1018c5eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018c5ea mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1018c5ee mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1018c5f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1018c5f4 push esi */
  push32((uint32_t)(ESI));
  /* 1018c5f5 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 1018c5f8 je 0x1018c607 */
  if (C.zf) goto L_1018c607;
L_1018c5fa:;
  /* 1018c5fa cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c5fd je 0x1018c607 */
  if (C.zf) goto L_1018c607;
  /* 1018c5ff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1018c600 mov esi, ecx */
  ESI = (ECX);
  /* 1018c602 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1018c603 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1018c605 jne 0x1018c5fa */
  if (!C.zf) goto L_1018c5fa;
L_1018c607:;
  /* 1018c607 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c60a pop esi */
  ESI = (pop32());
  /* 1018c60b jne 0x1018c612 */
  if (!C.zf) goto L_1018c612;
  /* 1018c60d sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018c611 ret  */
  ESPCHK(0x1018c5eau, _esp0);
  ESP += 4; return;
L_1018c612:;
  /* 1018c612 mov eax, edx */
  EAX = (EDX);
  /* 1018c614 ret  */
  ESPCHK(0x1018c5eau, _esp0);
  ESP += 4; return;
}

/* FUN_1000c615 @ 0x1018c615 (33 bytes, 15 insns) */
void f_1018c615(void) {
  FTRACE(0x1018c615u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018c615 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1018c619 push esi */
  push32((uint32_t)(ESI));
  /* 1018c61a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1018c61e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018c620 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 1018c623 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c625 jb 0x1018c62b */
  if (C.cf) goto L_1018c62b;
  /* 1018c627 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c629 jae 0x1018c62e */
  if (!C.cf) goto L_1018c62e;
L_1018c62b:;
  /* 1018c62b push 1 */
  push32((uint32_t)(0x1u));
  /* 1018c62d pop eax */
  EAX = (pop32());
L_1018c62e:;
  /* 1018c62e mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1018c632 pop esi */
  ESI = (pop32());
  /* 1018c633 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1018c635 ret  */
  ESPCHK(0x1018c615u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x1018c636 (94 bytes, 38 insns) */
void f_1018c636(void) {
  FTRACE(0x1018c636u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018c636 push esi */
  push32((uint32_t)(ESI));
  /* 1018c637 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1018c63b push edi */
  push32((uint32_t)(EDI));
  /* 1018c63c mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1018c640 push esi */
  push32((uint32_t)(ESI));
  /* 1018c641 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 1018c643 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1018c645 call 0x1018c615 */
  push32(0x1018c64au); f_1018c615();
  /* 1018c64a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018c64d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018c64f je 0x1018c668 */
  if (C.zf) goto L_1018c668;
  /* 1018c651 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1018c654 push eax */
  push32((uint32_t)(EAX));
  /* 1018c655 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018c657 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1018c659 call 0x1018c615 */
  push32(0x1018c65eu); f_1018c615();
  /* 1018c65e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018c661 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018c663 je 0x1018c668 */
  if (C.zf) goto L_1018c668;
  /* 1018c665 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1018c668:;
  /* 1018c668 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1018c66b push eax */
  push32((uint32_t)(EAX));
  /* 1018c66c push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 1018c66f push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1018c671 call 0x1018c615 */
  push32(0x1018c676u); f_1018c615();
  /* 1018c676 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018c679 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018c67b je 0x1018c680 */
  if (C.zf) goto L_1018c680;
  /* 1018c67d inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1018c680:;
  /* 1018c680 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 1018c683 push eax */
  push32((uint32_t)(EAX));
  /* 1018c684 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 1018c687 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1018c689 call 0x1018c615 */
  push32(0x1018c68eu); f_1018c615();
  /* 1018c68e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018c691 pop edi */
  EDI = (pop32());
  /* 1018c692 pop esi */
  ESI = (pop32());
  /* 1018c693 ret  */
  ESPCHK(0x1018c636u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c694 @ 0x1018c694 (46 bytes, 21 insns) */
void f_1018c694(void) {
  FTRACE(0x1018c694u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018c694 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1018c698 push esi */
  push32((uint32_t)(ESI));
  /* 1018c699 push edi */
  push32((uint32_t)(EDI));
  /* 1018c69a mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 1018c69c mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 1018c69f mov ecx, esi */
  ECX = (ESI);
  /* 1018c6a1 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018c6a3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1018c6a5 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 1018c6a8 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1018c6ab or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1018c6ad mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1018c6b0 mov edx, edi */
  EDX = (EDI);
  /* 1018c6b2 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 1018c6b5 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 1018c6b8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1018c6ba or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1018c6bc pop edi */
  EDI = (pop32());
  /* 1018c6bd mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1018c6c0 pop esi */
  ESI = (pop32());
  /* 1018c6c1 ret  */
  ESPCHK(0x1018c694u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6c2 @ 0x1018c6c2 (45 bytes, 21 insns) */
void f_1018c6c2(void) {
  FTRACE(0x1018c6c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018c6c2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1018c6c6 push esi */
  push32((uint32_t)(ESI));
  /* 1018c6c7 push edi */
  push32((uint32_t)(EDI));
  /* 1018c6c8 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 1018c6cb mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1018c6ce mov esi, edx */
  ESI = (EDX);
  /* 1018c6d0 mov edi, ecx */
  EDI = (ECX);
  /* 1018c6d2 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 1018c6d5 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1018c6d7 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 1018c6d9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1018c6dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1018c6de shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 1018c6e1 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1018c6e3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1018c6e5 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1018c6e7 pop edi */
  EDI = (pop32());
  /* 1018c6e8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1018c6eb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1018c6ed pop esi */
  ESI = (pop32());
  /* 1018c6ee ret  */
  ESPCHK(0x1018c6c2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6ef @ 0x1018c6ef (199 bytes, 76 insns) */
void f_1018c6ef(void) {
  FTRACE(0x1018c6efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018c6ef push ebp */
  push32((uint32_t)(EBP));
  /* 1018c6f0 mov ebp, esp */
  EBP = (ESP);
  /* 1018c6f2 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018c6f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1018c6f8 push ebx */
  push32((uint32_t)(EBX));
  /* 1018c6f9 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1018c6fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1018c6fe cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c700 push esi */
  push32((uint32_t)(ESI));
  /* 1018c701 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 1018c708 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 1018c70a mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 1018c70d mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 1018c710 jbe 0x1018c763 */
  if ((C.cf||C.zf)) goto L_1018c763;
  /* 1018c712 push edi */
  push32((uint32_t)(EDI));
  /* 1018c713 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1018c716:;
  /* 1018c716 mov esi, ebx */
  ESI = (EBX);
  /* 1018c718 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 1018c71b movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1018c71c movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1018c71d push ebx */
  push32((uint32_t)(EBX));
  /* 1018c71e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1018c71f call 0x1018c694 */
  push32(0x1018c724u); f_1018c694();
  /* 1018c724 push ebx */
  push32((uint32_t)(EBX));
  /* 1018c725 call 0x1018c694 */
  push32(0x1018c72au); f_1018c694();
  /* 1018c72a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1018c72d push eax */
  push32((uint32_t)(EAX));
  /* 1018c72e push ebx */
  push32((uint32_t)(EBX));
  /* 1018c72f call 0x1018c636 */
  push32(0x1018c734u); f_1018c636();
  /* 1018c734 push ebx */
  push32((uint32_t)(EBX));
  /* 1018c735 call 0x1018c694 */
  push32(0x1018c73au); f_1018c694();
  /* 1018c73a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018c73d and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 1018c741 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1018c745 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1018c748 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1018c74b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1018c74e push eax */
  push32((uint32_t)(EAX));
  /* 1018c74f push ebx */
  push32((uint32_t)(EBX));
  /* 1018c750 call 0x1018c636 */
  push32(0x1018c755u); f_1018c636();
  /* 1018c755 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018c758 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1018c75b dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 1018c75e jne 0x1018c716 */
  if (!C.zf) goto L_1018c716;
  /* 1018c760 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1018c762 pop edi */
  EDI = (pop32());
L_1018c763:;
  /* 1018c763 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c766 jne 0x1018c790 */
  if (!C.zf) goto L_1018c790;
  /* 1018c768 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1018c76b mov eax, ecx */
  EAX = (ECX);
  /* 1018c76d shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1018c770 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 1018c773 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1018c775 mov esi, eax */
  ESI = (EAX);
  /* 1018c777 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1018c77a shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 1018c77d or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1018c77f shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1018c782 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1018c789 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 1018c78c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 1018c78e jmp 0x1018c763 */
  goto L_1018c763;
L_1018c790:;
  /* 1018c790 mov esi, 0x8000 */
  ESI = (0x8000u);
L_1018c795:;
  /* 1018c795 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 1018c798 jne 0x1018c7aa */
  if (!C.zf) goto L_1018c7aa;
  /* 1018c79a push ebx */
  push32((uint32_t)(EBX));
  /* 1018c79b call 0x1018c694 */
  push32(0x1018c7a0u); f_1018c694();
  /* 1018c7a0 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1018c7a7 pop ecx */
  ECX = (pop32());
  /* 1018c7a8 jmp 0x1018c795 */
  goto L_1018c795;
L_1018c7aa:;
  /* 1018c7aa mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1018c7ae pop esi */
  ESI = (pop32());
  /* 1018c7af mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 1018c7b3 pop ebx */
  EBX = (pop32());
  /* 1018c7b4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018c7b5 ret  */
  ESPCHK(0x1018c6efu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7b6 @ 0x1018c7b6 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_1018c7b6(void) {
  FTRACE(0x1018c7b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018c7b6 push ebp */
  push32((uint32_t)(EBP));
  /* 1018c7b7 mov ebp, esp */
  EBP = (ESP);
  /* 1018c7b9 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018c7bc push ebx */
  push32((uint32_t)(EBX));
  /* 1018c7bd push esi */
  push32((uint32_t)(ESI));
  /* 1018c7be push edi */
  push32((uint32_t)(EDI));
  /* 1018c7bf mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1018c7c2 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1018c7c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018c7c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1018c7ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018c7cc pop edx */
  EDX = (pop32());
  /* 1018c7cd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1018c7d0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1018c7d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1018c7d6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1018c7d9 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1018c7dc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1018c7df mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1018c7e2 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1018c7e5 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1018c7e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1018c7eb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1018c7ee mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_1018c7f1:;
  /* 1018c7f1 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 1018c7f3 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c7f6 je 0x1018c807 */
  if (C.zf) goto L_1018c807;
  /* 1018c7f8 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c7fb je 0x1018c807 */
  if (C.zf) goto L_1018c807;
  /* 1018c7fd cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c800 je 0x1018c807 */
  if (C.zf) goto L_1018c807;
  /* 1018c802 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c805 jne 0x1018c80a */
  if (!C.zf) goto L_1018c80a;
L_1018c807:;
  /* 1018c807 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1018c808 jmp 0x1018c7f1 */
  goto L_1018c7f1;
L_1018c80a:;
  /* 1018c80a push 4 */
  push32((uint32_t)(0x4u));
  /* 1018c80c pop esi */
  ESI = (pop32());
L_1018c80d:;
  /* 1018c80d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1018c80f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1018c810 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c813 ja 0x1018ca90 */
  if ((!C.cf&&!C.zf)) goto L_1018ca90;
  /* 1018c819 jmp dword ptr [eax*4 + 0x1018cc57] */
  switch (EAX) {
    case 0: goto L_1018c820;
    case 1: goto L_1018c86f;
    case 2: goto L_1018c8c6;
    case 3: goto L_1018c8f0;
    case 4: goto L_1018c94b;
    case 5: goto L_1018c9c2;
    case 6: goto L_1018c9f8;
    case 7: goto L_1018ca42;
    case 8: goto L_1018ca21;
    case 9: goto L_1018caa6;
    case 10: goto L_1018ca90;
    case 11: goto L_1018ca5c;
    default: x86_unimpl("switch@0x1018c819 out of table"); return;
  }
L_1018c820:;
  /* 1018c820 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c823 jl 0x1018c831 */
  if ((C.sf!=C.of)) goto L_1018c831;
  /* 1018c825 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c828 jg 0x1018c831 */
  if ((!C.zf&&C.sf==C.of)) goto L_1018c831;
L_1018c82a:;
  /* 1018c82a push 3 */
  push32((uint32_t)(0x3u));
  /* 1018c82c jmp 0x1018ca4e */
  goto L_1018ca4e;
L_1018c831:;
  /* 1018c831 cmp bl, byte ptr [0x10190c04] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10190c04))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c837 jne 0x1018c840 */
  if (!C.zf) goto L_1018c840;
L_1018c839:;
  /* 1018c839 push 5 */
  push32((uint32_t)(0x5u));
  /* 1018c83b jmp 0x1018ca86 */
  goto L_1018ca86;
L_1018c840:;
  /* 1018c840 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1018c843 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018c846 je 0x1018c866 */
  if (C.zf) goto L_1018c866;
  /* 1018c848 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1018c849 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1018c84a je 0x1018c85a */
  if (C.zf) goto L_1018c85a;
  /* 1018c84c sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018c84f jne 0x1018cb29 */
  if (!C.zf) goto L_1018cb29;
  /* 1018c855 jmp 0x1018c8e9 */
  goto L_1018c8e9;
L_1018c85a:;
  /* 1018c85a push 2 */
  push32((uint32_t)(0x2u));
  /* 1018c85c mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 1018c863 pop eax */
  EAX = (pop32());
  /* 1018c864 jmp 0x1018c80d */
  goto L_1018c80d;
L_1018c866:;
  /* 1018c866 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 1018c86a push 2 */
  push32((uint32_t)(0x2u));
  /* 1018c86c pop eax */
  EAX = (pop32());
  /* 1018c86d jmp 0x1018c80d */
  goto L_1018c80d;
L_1018c86f:;
  /* 1018c86f cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c872 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1018c875 jl 0x1018c87c */
  if ((C.sf!=C.of)) goto L_1018c87c;
  /* 1018c877 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c87a jle 0x1018c82a */
  if ((C.zf||C.sf!=C.of)) goto L_1018c82a;
L_1018c87c:;
  /* 1018c87c cmp bl, byte ptr [0x10190c04] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10190c04))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c882 je 0x1018c944 */
  if (C.zf) goto L_1018c944;
  /* 1018c888 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c88b je 0x1018c8be */
  if (C.zf) goto L_1018c8be;
  /* 1018c88d cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c890 je 0x1018c8be */
  if (C.zf) goto L_1018c8be;
  /* 1018c892 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c895 je 0x1018c8e9 */
  if (C.zf) goto L_1018c8e9;
L_1018c897:;
  /* 1018c897 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c89a jle 0x1018cb29 */
  if ((C.zf||C.sf!=C.of)) goto L_1018cb29;
  /* 1018c8a0 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c8a3 jle 0x1018c8b7 */
  if ((C.zf||C.sf!=C.of)) goto L_1018c8b7;
  /* 1018c8a5 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c8a8 jle 0x1018cb29 */
  if ((C.zf||C.sf!=C.of)) goto L_1018cb29;
  /* 1018c8ae cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c8b1 jg 0x1018cb29 */
  if ((!C.zf&&C.sf==C.of)) goto L_1018cb29;
L_1018c8b7:;
  /* 1018c8b7 push 6 */
  push32((uint32_t)(0x6u));
  /* 1018c8b9 jmp 0x1018ca86 */
  goto L_1018ca86;
L_1018c8be:;
  /* 1018c8be dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1018c8bf push 0xb */
  push32((uint32_t)(0xbu));
  /* 1018c8c1 jmp 0x1018ca86 */
  goto L_1018ca86;
L_1018c8c6:;
  /* 1018c8c6 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c8c9 jl 0x1018c8d4 */
  if ((C.sf!=C.of)) goto L_1018c8d4;
  /* 1018c8cb cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c8ce jle 0x1018c82a */
  if ((C.zf||C.sf!=C.of)) goto L_1018c82a;
L_1018c8d4:;
  /* 1018c8d4 cmp bl, byte ptr [0x10190c04] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10190c04))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c8da je 0x1018c839 */
  if (C.zf) goto L_1018c839;
  /* 1018c8e0 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c8e3 jne 0x1018ca9e */
  if (!C.zf) goto L_1018ca9e;
L_1018c8e9:;
  /* 1018c8e9 mov eax, edx */
  EAX = (EDX);
  /* 1018c8eb jmp 0x1018c80d */
  goto L_1018c80d;
L_1018c8f0:;
  /* 1018c8f0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1018c8f3:;
  /* 1018c8f3 cmp dword ptr [0x10190c00], edx */
  { uint32_t _a=(r32((uint32_t)(0x10190c00))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c8f9 jle 0x1018c90c */
  if ((C.zf||C.sf!=C.of)) goto L_1018c90c;
  /* 1018c8fb movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1018c8fe push esi */
  push32((uint32_t)(ESI));
  /* 1018c8ff push eax */
  push32((uint32_t)(EAX));
  /* 1018c900 call 0x101893cb */
  push32(0x1018c905u); f_101893cb();
  /* 1018c905 pop ecx */
  ECX = (pop32());
  /* 1018c906 pop ecx */
  ECX = (pop32());
  /* 1018c907 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018c909 pop edx */
  EDX = (pop32());
  /* 1018c90a jmp 0x1018c91a */
  goto L_1018c91a;
L_1018c90c:;
  /* 1018c90c mov ecx, dword ptr [0x101909f0] */
  ECX = (r32((uint32_t)(0x101909f0)));
  /* 1018c912 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1018c915 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1018c918 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1018c91a:;
  /* 1018c91a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018c91c je 0x1018c93c */
  if (C.zf) goto L_1018c93c;
  /* 1018c91e cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c922 jae 0x1018c934 */
  if (!C.cf) goto L_1018c934;
  /* 1018c924 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1018c927 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1018c92a sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1018c92d inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 1018c930 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 1018c932 jmp 0x1018c937 */
  goto L_1018c937;
L_1018c934:;
  /* 1018c934 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_1018c937:;
  /* 1018c937 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1018c939 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1018c93a jmp 0x1018c8f3 */
  goto L_1018c8f3;
L_1018c93c:;
  /* 1018c93c cmp bl, byte ptr [0x10190c04] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10190c04))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c942 jne 0x1018c9ab */
  if (!C.zf) goto L_1018c9ab;
L_1018c944:;
  /* 1018c944 mov eax, esi */
  EAX = (ESI);
  /* 1018c946 jmp 0x1018c80d */
  goto L_1018c80d;
L_1018c94b:;
  /* 1018c94b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c94f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1018c952 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1018c955 jne 0x1018c964 */
  if (!C.zf) goto L_1018c964;
L_1018c957:;
  /* 1018c957 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c95a jne 0x1018c964 */
  if (!C.zf) goto L_1018c964;
  /* 1018c95c dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1018c95f mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1018c961 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1018c962 jmp 0x1018c957 */
  goto L_1018c957;
L_1018c964:;
  /* 1018c964 cmp dword ptr [0x10190c00], edx */
  { uint32_t _a=(r32((uint32_t)(0x10190c00))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c96a jle 0x1018c97d */
  if ((C.zf||C.sf!=C.of)) goto L_1018c97d;
  /* 1018c96c movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1018c96f push esi */
  push32((uint32_t)(ESI));
  /* 1018c970 push eax */
  push32((uint32_t)(EAX));
  /* 1018c971 call 0x101893cb */
  push32(0x1018c976u); f_101893cb();
  /* 1018c976 pop ecx */
  ECX = (pop32());
  /* 1018c977 pop ecx */
  ECX = (pop32());
  /* 1018c978 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018c97a pop edx */
  EDX = (pop32());
  /* 1018c97b jmp 0x1018c98b */
  goto L_1018c98b;
L_1018c97d:;
  /* 1018c97d mov ecx, dword ptr [0x101909f0] */
  ECX = (r32((uint32_t)(0x101909f0)));
  /* 1018c983 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1018c986 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1018c989 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1018c98b:;
  /* 1018c98b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018c98d je 0x1018c9ab */
  if (C.zf) goto L_1018c9ab;
  /* 1018c98f cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c993 jae 0x1018c9a6 */
  if (!C.cf) goto L_1018c9a6;
  /* 1018c995 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1018c998 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1018c99b sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1018c99e inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 1018c9a1 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1018c9a4 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_1018c9a6:;
  /* 1018c9a6 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1018c9a8 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1018c9a9 jmp 0x1018c964 */
  goto L_1018c964;
L_1018c9ab:;
  /* 1018c9ab cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c9ae je 0x1018c8be */
  if (C.zf) goto L_1018c8be;
  /* 1018c9b4 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c9b7 je 0x1018c8be */
  if (C.zf) goto L_1018c8be;
  /* 1018c9bd jmp 0x1018c897 */
  goto L_1018c897;
L_1018c9c2:;
  /* 1018c9c2 cmp dword ptr [0x10190c00], edx */
  { uint32_t _a=(r32((uint32_t)(0x10190c00))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018c9c8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1018c9cb jle 0x1018c9de */
  if ((C.zf||C.sf!=C.of)) goto L_1018c9de;
  /* 1018c9cd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1018c9d0 push esi */
  push32((uint32_t)(ESI));
  /* 1018c9d1 push eax */
  push32((uint32_t)(EAX));
  /* 1018c9d2 call 0x101893cb */
  push32(0x1018c9d7u); f_101893cb();
  /* 1018c9d7 pop ecx */
  ECX = (pop32());
  /* 1018c9d8 pop ecx */
  ECX = (pop32());
  /* 1018c9d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018c9db pop edx */
  EDX = (pop32());
  /* 1018c9dc jmp 0x1018c9ec */
  goto L_1018c9ec;
L_1018c9de:;
  /* 1018c9de mov ecx, dword ptr [0x101909f0] */
  ECX = (r32((uint32_t)(0x101909f0)));
  /* 1018c9e4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1018c9e7 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1018c9ea and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1018c9ec:;
  /* 1018c9ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018c9ee je 0x1018ca9e */
  if (C.zf) goto L_1018ca9e;
  /* 1018c9f4 mov eax, esi */
  EAX = (ESI);
  /* 1018c9f6 jmp 0x1018ca4f */
  goto L_1018ca4f;
L_1018c9f8:;
  /* 1018c9f8 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 1018c9fb cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018c9fe mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1018ca01 jl 0x1018ca08 */
  if ((C.sf!=C.of)) goto L_1018ca08;
  /* 1018ca03 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018ca06 jle 0x1018ca4c */
  if ((C.zf||C.sf!=C.of)) goto L_1018ca4c;
L_1018ca08:;
  /* 1018ca08 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1018ca0b sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018ca0e je 0x1018ca84 */
  if (C.zf) goto L_1018ca84;
  /* 1018ca10 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1018ca11 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1018ca12 je 0x1018ca78 */
  if (C.zf) goto L_1018ca78;
  /* 1018ca14 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018ca17 jne 0x1018cb2c */
  if (!C.zf) goto L_1018cb2c;
L_1018ca1d:;
  /* 1018ca1d push 8 */
  push32((uint32_t)(0x8u));
  /* 1018ca1f jmp 0x1018ca86 */
  goto L_1018ca86;
L_1018ca21:;
  /* 1018ca21 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1018ca24:;
  /* 1018ca24 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018ca27 jne 0x1018ca2e */
  if (!C.zf) goto L_1018ca2e;
  /* 1018ca29 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1018ca2b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1018ca2c jmp 0x1018ca24 */
  goto L_1018ca24;
L_1018ca2e:;
  /* 1018ca2e cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018ca31 jl 0x1018cb29 */
  if ((C.sf!=C.of)) goto L_1018cb29;
  /* 1018ca37 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018ca3a jg 0x1018cb29 */
  if ((!C.zf&&C.sf==C.of)) goto L_1018cb29;
  /* 1018ca40 jmp 0x1018ca4c */
  goto L_1018ca4c;
L_1018ca42:;
  /* 1018ca42 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018ca45 jl 0x1018ca55 */
  if ((C.sf!=C.of)) goto L_1018ca55;
  /* 1018ca47 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018ca4a jg 0x1018ca55 */
  if ((!C.zf&&C.sf==C.of)) goto L_1018ca55;
L_1018ca4c:;
  /* 1018ca4c push 9 */
  push32((uint32_t)(0x9u));
L_1018ca4e:;
  /* 1018ca4e pop eax */
  EAX = (pop32());
L_1018ca4f:;
  /* 1018ca4f dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1018ca50 jmp 0x1018c80d */
  goto L_1018c80d;
L_1018ca55:;
  /* 1018ca55 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018ca58 jne 0x1018ca9e */
  if (!C.zf) goto L_1018ca9e;
  /* 1018ca5a jmp 0x1018ca1d */
  goto L_1018ca1d;
L_1018ca5c:;
  /* 1018ca5c cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018ca60 je 0x1018ca8c */
  if (C.zf) goto L_1018ca8c;
  /* 1018ca62 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1018ca65 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 1018ca68 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018ca6b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1018ca6e je 0x1018ca84 */
  if (C.zf) goto L_1018ca84;
  /* 1018ca70 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1018ca71 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1018ca72 jne 0x1018cb2c */
  if (!C.zf) goto L_1018cb2c;
L_1018ca78:;
  /* 1018ca78 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 1018ca7c push 7 */
  push32((uint32_t)(0x7u));
  /* 1018ca7e pop eax */
  EAX = (pop32());
  /* 1018ca7f jmp 0x1018c80d */
  goto L_1018c80d;
L_1018ca84:;
  /* 1018ca84 push 7 */
  push32((uint32_t)(0x7u));
L_1018ca86:;
  /* 1018ca86 pop eax */
  EAX = (pop32());
  /* 1018ca87 jmp 0x1018c80d */
  goto L_1018c80d;
L_1018ca8c:;
  /* 1018ca8c push 0xa */
  push32((uint32_t)(0xau));
  /* 1018ca8e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1018ca8f pop eax */
  EAX = (pop32());
L_1018ca90:;
  /* 1018ca90 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018ca93 je 0x1018cb2e */
  if (C.zf) goto L_1018cb2e;
  /* 1018ca99 jmp 0x1018c80d */
  goto L_1018c80d;
L_1018ca9e:;
  /* 1018ca9e mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1018caa1 jmp 0x1018cb2e */
  goto L_1018cb2e;
L_1018caa6:;
  /* 1018caa6 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 1018caad xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1018caaf:;
  /* 1018caaf cmp dword ptr [0x10190c00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10190c00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018cab6 jle 0x1018cac7 */
  if ((C.zf||C.sf!=C.of)) goto L_1018cac7;
  /* 1018cab8 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1018cabb push 4 */
  push32((uint32_t)(0x4u));
  /* 1018cabd push eax */
  push32((uint32_t)(EAX));
  /* 1018cabe call 0x101893cb */
  push32(0x1018cac3u); f_101893cb();
  /* 1018cac3 pop ecx */
  ECX = (pop32());
  /* 1018cac4 pop ecx */
  ECX = (pop32());
  /* 1018cac5 jmp 0x1018cad6 */
  goto L_1018cad6;
L_1018cac7:;
  /* 1018cac7 mov ecx, dword ptr [0x101909f0] */
  ECX = (r32((uint32_t)(0x101909f0)));
  /* 1018cacd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1018cad0 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1018cad3 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1018cad6:;
  /* 1018cad6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018cad8 je 0x1018caf6 */
  if (C.zf) goto L_1018caf6;
  /* 1018cada movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1018cadd lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 1018cae0 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 1018cae4 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018caea jg 0x1018caf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_1018caf1;
  /* 1018caec mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1018caee inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1018caef jmp 0x1018caaf */
  goto L_1018caaf;
L_1018caf1:;
  /* 1018caf1 mov esi, 0x1451 */
  ESI = (0x1451u);
L_1018caf6:;
  /* 1018caf6 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_1018caf9:;
  /* 1018caf9 cmp dword ptr [0x10190c00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10190c00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018cb00 jle 0x1018cb11 */
  if ((C.zf||C.sf!=C.of)) goto L_1018cb11;
  /* 1018cb02 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1018cb05 push 4 */
  push32((uint32_t)(0x4u));
  /* 1018cb07 push eax */
  push32((uint32_t)(EAX));
  /* 1018cb08 call 0x101893cb */
  push32(0x1018cb0du); f_101893cb();
  /* 1018cb0d pop ecx */
  ECX = (pop32());
  /* 1018cb0e pop ecx */
  ECX = (pop32());
  /* 1018cb0f jmp 0x1018cb20 */
  goto L_1018cb20;
L_1018cb11:;
  /* 1018cb11 mov ecx, dword ptr [0x101909f0] */
  ECX = (r32((uint32_t)(0x101909f0)));
  /* 1018cb17 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1018cb1a mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1018cb1d and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1018cb20:;
  /* 1018cb20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018cb22 je 0x1018cb29 */
  if (C.zf) goto L_1018cb29;
  /* 1018cb24 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1018cb26 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1018cb27 jmp 0x1018caf9 */
  goto L_1018caf9;
L_1018cb29:;
  /* 1018cb29 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1018cb2a jmp 0x1018cb2e */
  goto L_1018cb2e;
L_1018cb2c:;
  /* 1018cb2c mov edi, ecx */
  EDI = (ECX);
L_1018cb2e:;
  /* 1018cb2e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1018cb31 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018cb35 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 1018cb37 je 0x1018cc16 */
  if (C.zf) goto L_1018cc16;
  /* 1018cb3d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1018cb3f pop eax */
  EAX = (pop32());
  /* 1018cb40 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018cb43 jbe 0x1018cb5a */
  if ((C.cf||C.zf)) goto L_1018cb5a;
  /* 1018cb45 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018cb49 jl 0x1018cb4e */
  if ((C.sf!=C.of)) goto L_1018cb4e;
  /* 1018cb4b inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_1018cb4e:;
  /* 1018cb4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1018cb51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1018cb54 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1018cb55 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 1018cb58 jmp 0x1018cb5d */
  goto L_1018cb5d;
L_1018cb5a:;
  /* 1018cb5a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1018cb5d:;
  /* 1018cb5d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018cb61 jbe 0x1018cc0c */
  if ((C.cf||C.zf)) goto L_1018cc0c;
L_1018cb67:;
  /* 1018cb67 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1018cb68 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018cb6b jne 0x1018cb75 */
  if (!C.zf) goto L_1018cb75;
  /* 1018cb6d dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1018cb70 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 1018cb73 jmp 0x1018cb67 */
  goto L_1018cb67;
L_1018cb75:;
  /* 1018cb75 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1018cb78 push eax */
  push32((uint32_t)(EAX));
  /* 1018cb79 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1018cb7c push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 1018cb7f push eax */
  push32((uint32_t)(EAX));
  /* 1018cb80 call 0x1018c6ef */
  push32(0x1018cb85u); f_1018c6ef();
  /* 1018cb85 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1018cb88 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1018cb8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018cb8d cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018cb90 jge 0x1018cb94 */
  if ((C.sf==C.of)) goto L_1018cb94;
  /* 1018cb92 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_1018cb94:;
  /* 1018cb94 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018cb97 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018cb9a jne 0x1018cb9f */
  if (!C.zf) goto L_1018cb9f;
  /* 1018cb9c add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1018cb9f:;
  /* 1018cb9f cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018cba2 jne 0x1018cba7 */
  if (!C.zf) goto L_1018cba7;
  /* 1018cba4 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1018cba7:;
  /* 1018cba7 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018cbac jle 0x1018cbde */
  if ((C.zf||C.sf!=C.of)) goto L_1018cbde;
  /* 1018cbae mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_1018cbb5:;
  /* 1018cbb5 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1018cbb8 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 1018cbbb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1018cbbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_1018cbc1:;
  /* 1018cbc1 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018cbc5 je 0x1018cc27 */
  if (C.zf) goto L_1018cc27;
  /* 1018cbc7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1018cbc9 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 1018cbce mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1018cbd3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1018cbd5 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 1018cbdc jmp 0x1018cc3c */
  goto L_1018cc3c;
L_1018cbde:;
  /* 1018cbde cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018cbe3 jge 0x1018cbee */
  if ((C.sf==C.of)) goto L_1018cbee;
  /* 1018cbe5 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 1018cbec jmp 0x1018cbb5 */
  goto L_1018cbb5;
L_1018cbee:;
  /* 1018cbee push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1018cbf1 push eax */
  push32((uint32_t)(EAX));
  /* 1018cbf2 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1018cbf5 push eax */
  push32((uint32_t)(EAX));
  /* 1018cbf6 call 0x1018d68a */
  push32(0x1018cbfbu); f_1018d68a();
  /* 1018cbfb mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1018cbfe mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 1018cc01 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 1018cc04 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 1018cc07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018cc0a jmp 0x1018cbc1 */
  goto L_1018cbc1;
L_1018cc0c:;
  /* 1018cc0c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1018cc0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018cc10 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1018cc12 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1018cc14 jmp 0x1018cbc1 */
  goto L_1018cbc1;
L_1018cc16:;
  /* 1018cc16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1018cc18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018cc1a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1018cc1c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1018cc1e mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 1018cc25 jmp 0x1018cc3c */
  goto L_1018cc3c;
L_1018cc27:;
  /* 1018cc27 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018cc2b je 0x1018cc3c */
  if (C.zf) goto L_1018cc3c;
  /* 1018cc2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1018cc2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018cc31 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1018cc33 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1018cc35 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_1018cc3c:;
  /* 1018cc3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018cc3f or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 1018cc42 pop edi */
  EDI = (pop32());
  /* 1018cc43 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 1018cc46 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 1018cc49 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 1018cc4d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1018cc50 pop esi */
  ESI = (pop32());
  /* 1018cc51 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1018cc54 pop ebx */
  EBX = (pop32());
  /* 1018cc55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018cc56 ret  */
  ESPCHK(0x1018c7b6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc87 @ 0x1018cc87 (659 bytes, 232 insns) */
void f_1018cc87(void) {
  FTRACE(0x1018cc87u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018cc87 push ebp */
  push32((uint32_t)(EBP));
  /* 1018cc88 mov ebp, esp */
  EBP = (ESP);
  /* 1018cc8a sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018cc8d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1018cc90 push ebx */
  push32((uint32_t)(EBX));
  /* 1018cc91 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1018cc94 push esi */
  push32((uint32_t)(ESI));
  /* 1018cc95 mov ecx, eax */
  ECX = (EAX);
  /* 1018cc97 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 1018cc9c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1018cca2 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1018cca4 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1018cca7 push edi */
  push32((uint32_t)(EDI));
  /* 1018cca8 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 1018ccac mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 1018ccb0 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 1018ccb4 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 1018ccb8 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 1018ccbc mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 1018ccc0 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 1018ccc4 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 1018ccc8 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 1018cccc mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 1018ccd0 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 1018ccd4 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 1018ccd8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1018ccdf mov edx, eax */
  EDX = (EAX);
  /* 1018cce1 je 0x1018cce9 */
  if (C.zf) goto L_1018cce9;
  /* 1018cce3 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 1018cce7 jmp 0x1018cced */
  goto L_1018cced;
L_1018cce9:;
  /* 1018cce9 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_1018cced:;
  /* 1018cced mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1018ccf0 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 1018ccf3 jne 0x1018cd13 */
  if (!C.zf) goto L_1018cd13;
  /* 1018ccf5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1018ccf7 jne 0x1018cd13 */
  if (!C.zf) goto L_1018cd13;
  /* 1018ccf9 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018ccfc jne 0x1018cd13 */
  if (!C.zf) goto L_1018cd13;
L_1018ccfe:;
  /* 1018ccfe and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1018cd02 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1018cd06 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 1018cd0a mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 1018cd0e jmp 0x1018cf11 */
  goto L_1018cf11;
L_1018cd13:;
  /* 1018cd13 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1018cd16 jne 0x1018cd92 */
  if (!C.zf) goto L_1018cd92;
  /* 1018cd18 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1018cd1d mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 1018cd22 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018cd24 jne 0x1018cd2c */
  if (!C.zf) goto L_1018cd2c;
  /* 1018cd26 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018cd2a je 0x1018cd3b */
  if (C.zf) goto L_1018cd3b;
L_1018cd2c:;
  /* 1018cd2c test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 1018cd32 jne 0x1018cd3b */
  if (!C.zf) goto L_1018cd3b;
  /* 1018cd34 push 0x1018e5a0 */
  push32((uint32_t)(0x1018e5a0u));
  /* 1018cd39 jmp 0x1018cd81 */
  goto L_1018cd81;
L_1018cd3b:;
  /* 1018cd3b test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1018cd3e je 0x1018cd55 */
  if (C.zf) goto L_1018cd55;
  /* 1018cd40 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018cd46 jne 0x1018cd55 */
  if (!C.zf) goto L_1018cd55;
  /* 1018cd48 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018cd4c jne 0x1018cd7c */
  if (!C.zf) goto L_1018cd7c;
  /* 1018cd4e push 0x1018e598 */
  push32((uint32_t)(0x1018e598u));
  /* 1018cd53 jmp 0x1018cd64 */
  goto L_1018cd64;
L_1018cd55:;
  /* 1018cd55 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018cd57 jne 0x1018cd7c */
  if (!C.zf) goto L_1018cd7c;
  /* 1018cd59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018cd5d jne 0x1018cd7c */
  if (!C.zf) goto L_1018cd7c;
  /* 1018cd5f push 0x1018e590 */
  push32((uint32_t)(0x1018e590u));
L_1018cd64:;
  /* 1018cd64 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1018cd67 push eax */
  push32((uint32_t)(EAX));
  /* 1018cd68 call 0x10189af0 */
  push32(0x1018cd6du); f_10189af0();
  /* 1018cd6d pop ecx */
  ECX = (pop32());
  /* 1018cd6e mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 1018cd72 pop ecx */
  ECX = (pop32());
L_1018cd73:;
  /* 1018cd73 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1018cd77 jmp 0x1018ceea */
  goto L_1018ceea;
L_1018cd7c:;
  /* 1018cd7c push 0x1018e588 */
  push32((uint32_t)(0x1018e588u));
L_1018cd81:;
  /* 1018cd81 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1018cd84 push eax */
  push32((uint32_t)(EAX));
  /* 1018cd85 call 0x10189af0 */
  push32(0x1018cd8au); f_10189af0();
  /* 1018cd8a pop ecx */
  ECX = (pop32());
  /* 1018cd8b mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 1018cd8f pop ecx */
  ECX = (pop32());
  /* 1018cd90 jmp 0x1018cd73 */
  goto L_1018cd73;
L_1018cd92:;
  /* 1018cd92 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 1018cd95 mov ecx, edi */
  ECX = (EDI);
  /* 1018cd97 mov esi, eax */
  ESI = (EAX);
  /* 1018cd99 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 1018cd9c imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1018cda2 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 1018cda5 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 1018cdaa push 1 */
  push32((uint32_t)(0x1u));
  /* 1018cdac lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 1018cdaf mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 1018cdb3 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1018cdb6 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 1018cdb9 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 1018cdc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018cdc3 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1018cdc6 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 1018cdc9 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 1018cdcc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1018cdce push eax */
  push32((uint32_t)(EAX));
  /* 1018cdcf lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1018cdd2 push eax */
  push32((uint32_t)(EAX));
  /* 1018cdd3 call 0x1018d68a */
  push32(0x1018cdd8u); f_1018d68a();
  /* 1018cdd8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018cddb cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1018cde1 jb 0x1018cdf3 */
  if (C.cf) goto L_1018cdf3;
  /* 1018cde3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1018cde6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1018cde7 push eax */
  push32((uint32_t)(EAX));
  /* 1018cde8 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1018cdeb push eax */
  push32((uint32_t)(EAX));
  /* 1018cdec call 0x1018d46a */
  push32(0x1018cdf1u); f_1018d46a();
  /* 1018cdf1 pop ecx */
  ECX = (pop32());
  /* 1018cdf2 pop ecx */
  ECX = (pop32());
L_1018cdf3:;
  /* 1018cdf3 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 1018cdf7 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 1018cdfa je 0x1018ce0d */
  if (C.zf) goto L_1018ce0d;
  /* 1018cdfc mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 1018cdff movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 1018ce02 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018ce04 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1018ce06 jg 0x1018ce10 */
  if ((!C.zf&&C.sf==C.of)) goto L_1018ce10;
  /* 1018ce08 jmp 0x1018ccfe */
  goto L_1018ccfe;
L_1018ce0d:;
  /* 1018ce0d mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_1018ce10:;
  /* 1018ce10 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018ce13 jle 0x1018ce18 */
  if ((C.zf||C.sf!=C.of)) goto L_1018ce18;
  /* 1018ce15 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1018ce17 pop edi */
  EDI = (pop32());
L_1018ce18:;
  /* 1018ce18 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 1018ce1c sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018ce22 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 1018ce27 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_1018ce2e:;
  /* 1018ce2e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1018ce31 push eax */
  push32((uint32_t)(EAX));
  /* 1018ce32 call 0x1018c694 */
  push32(0x1018ce37u); f_1018c694();
  /* 1018ce37 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 1018ce3a pop ecx */
  ECX = (pop32());
  /* 1018ce3b jne 0x1018ce2e */
  if (!C.zf) goto L_1018ce2e;
  /* 1018ce3d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1018ce3f jge 0x1018ce58 */
  if ((C.sf==C.of)) goto L_1018ce58;
  /* 1018ce41 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 1018ce43 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 1018ce49 jle 0x1018ce58 */
  if ((C.zf||C.sf!=C.of)) goto L_1018ce58;
L_1018ce4b:;
  /* 1018ce4b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1018ce4e push eax */
  push32((uint32_t)(EAX));
  /* 1018ce4f call 0x1018c6c2 */
  push32(0x1018ce54u); f_1018c6c2();
  /* 1018ce54 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1018ce55 pop ecx */
  ECX = (pop32());
  /* 1018ce56 jne 0x1018ce4b */
  if (!C.zf) goto L_1018ce4b;
L_1018ce58:;
  /* 1018ce58 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 1018ce5b lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1018ce5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1018ce60 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 1018ce63 jle 0x1018ceb5 */
  if ((C.zf||C.sf!=C.of)) goto L_1018ceb5;
  /* 1018ce65 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_1018ce68:;
  /* 1018ce68 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 1018ce6b lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 1018ce6e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1018ce6f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1018ce70 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1018ce73 push eax */
  push32((uint32_t)(EAX));
  /* 1018ce74 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1018ce75 call 0x1018c694 */
  push32(0x1018ce7au); f_1018c694();
  /* 1018ce7a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1018ce7d push eax */
  push32((uint32_t)(EAX));
  /* 1018ce7e call 0x1018c694 */
  push32(0x1018ce83u); f_1018c694();
  /* 1018ce83 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1018ce86 push eax */
  push32((uint32_t)(EAX));
  /* 1018ce87 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1018ce8a push eax */
  push32((uint32_t)(EAX));
  /* 1018ce8b call 0x1018c636 */
  push32(0x1018ce90u); f_1018c636();
  /* 1018ce90 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1018ce93 push eax */
  push32((uint32_t)(EAX));
  /* 1018ce94 call 0x1018c694 */
  push32(0x1018ce99u); f_1018c694();
  /* 1018ce99 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 1018ce9c mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1018ce9f and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 1018cea3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018cea6 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1018cea8 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 1018ceab dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 1018ceae mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1018ceb0 jne 0x1018ce68 */
  if (!C.zf) goto L_1018ce68;
  /* 1018ceb2 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_1018ceb5:;
  /* 1018ceb5 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 1018ceb8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1018ceb9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1018ceba cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018cebd lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 1018cec0 jl 0x1018cef2 */
  if ((C.sf!=C.of)) goto L_1018cef2;
L_1018cec2:;
  /* 1018cec2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018cec4 jb 0x1018ced5 */
  if (C.cf) goto L_1018ced5;
  /* 1018cec6 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018cec9 jne 0x1018ced1 */
  if (!C.zf) goto L_1018ced1;
  /* 1018cecb mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 1018cece dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1018cecf jmp 0x1018cec2 */
  goto L_1018cec2;
L_1018ced1:;
  /* 1018ced1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018ced3 jae 0x1018ced9 */
  if (!C.cf) goto L_1018ced9;
L_1018ced5:;
  /* 1018ced5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1018ced6 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_1018ced9:;
  /* 1018ced9 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_1018cedb:;
  /* 1018cedb sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1018cedd sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1018cedf mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 1018cee2 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1018cee5 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_1018ceea:;
  /* 1018ceea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1018ceed:;
  /* 1018ceed pop edi */
  EDI = (pop32());
  /* 1018ceee pop esi */
  ESI = (pop32());
  /* 1018ceef pop ebx */
  EBX = (pop32());
  /* 1018cef0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018cef1 ret  */
  ESPCHK(0x1018cc87u, _esp0);
  ESP += 4; return;
L_1018cef2:;
  /* 1018cef2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018cef4 jb 0x1018cf02 */
  if (C.cf) goto L_1018cf02;
  /* 1018cef6 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018cef9 jne 0x1018cefe */
  if (!C.zf) goto L_1018cefe;
  /* 1018cefb dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1018cefc jmp 0x1018cef2 */
  goto L_1018cef2;
L_1018cefe:;
  /* 1018cefe cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018cf00 jae 0x1018cedb */
  if (!C.cf) goto L_1018cedb;
L_1018cf02:;
  /* 1018cf02 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1018cf06 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1018cf0a mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 1018cf0e mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_1018cf11:;
  /* 1018cf11 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 1018cf15 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018cf17 pop eax */
  EAX = (pop32());
  /* 1018cf18 jmp 0x1018ceed */
  goto L_1018ceed;
}

/* FUN_1000cf1a @ 0x1018cf1a (27 bytes, 13 insns) */
void f_1018cf1a(void) {
  FTRACE(0x1018cf1au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018cf1a mov eax, dword ptr [0x1019688c] */
  EAX = (r32((uint32_t)(0x1019688c)));
  /* 1018cf1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018cf21 je 0x1018cf32 */
  if (C.zf) goto L_1018cf32;
  /* 1018cf23 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1018cf27 call eax */
  call_ind((uint32_t)(EAX), 0x1018cf29u);
  /* 1018cf29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018cf2b pop ecx */
  ECX = (pop32());
  /* 1018cf2c je 0x1018cf32 */
  if (C.zf) goto L_1018cf32;
  /* 1018cf2e push 1 */
  push32((uint32_t)(0x1u));
  /* 1018cf30 pop eax */
  EAX = (pop32());
  /* 1018cf31 ret  */
  ESPCHK(0x1018cf1au, _esp0);
  ESP += 4; return;
L_1018cf32:;
  /* 1018cf32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018cf34 ret  */
  ESPCHK(0x1018cf1au, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1018cf38 (32 bytes, 18 insns) */
void f_1018cf38(void) {
  FTRACE(0x1018cf38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018cf38 push ebp */
  push32((uint32_t)(EBP));
  /* 1018cf39 mov ebp, esp */
  EBP = (ESP);
  /* 1018cf3b push ebx */
  push32((uint32_t)(EBX));
  /* 1018cf3c push esi */
  push32((uint32_t)(ESI));
  /* 1018cf3d push edi */
  push32((uint32_t)(EDI));
  /* 1018cf3e push ebp */
  push32((uint32_t)(EBP));
  /* 1018cf3f push 0 */
  push32((uint32_t)(0x0u));
  /* 1018cf41 push 0 */
  push32((uint32_t)(0x0u));
  /* 1018cf43 push 0x1018cf50 */
  push32((uint32_t)(0x1018cf50u));
  /* 1018cf48 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1018cf4b call 0x1018da34 */
  push32(0x1018cf50u); f_1018da34();
  /* 1018cf50 pop ebp */
  EBP = (pop32());
  /* 1018cf51 pop edi */
  EDI = (pop32());
  /* 1018cf52 pop esi */
  ESI = (pop32());
  /* 1018cf53 pop ebx */
  EBX = (pop32());
  /* 1018cf54 mov esp, ebp */
  ESP = (EBP);
  /* 1018cf56 pop ebp */
  EBP = (pop32());
  /* 1018cf57 ret  */
  ESPCHK(0x1018cf38u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1018cf7a (104 bytes, 33 insns) */
void f_1018cf7a(void) {
  FTRACE(0x1018cf7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018cf7a push ebx */
  push32((uint32_t)(EBX));
  /* 1018cf7b push esi */
  push32((uint32_t)(ESI));
  /* 1018cf7c push edi */
  push32((uint32_t)(EDI));
  /* 1018cf7d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1018cf81 push eax */
  push32((uint32_t)(EAX));
  /* 1018cf82 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1018cf84 push 0x1018cf58 */
  push32((uint32_t)(0x1018cf58u));
  /* 1018cf89 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1018cf90 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1018cf97:;
  /* 1018cf97 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1018cf9b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1018cf9e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1018cfa1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018cfa4 je 0x1018cfd4 */
  if (C.zf) goto L_1018cfd4;
  /* 1018cfa6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018cfaa je 0x1018cfd4 */
  if (C.zf) goto L_1018cfd4;
  /* 1018cfac lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1018cfaf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1018cfb2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1018cfb6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1018cfb9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018cfbe jne 0x1018cfd2 */
  if (!C.zf) goto L_1018cfd2;
  /* 1018cfc0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1018cfc5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1018cfc9 call 0x1018d00e */
  push32(0x1018cfceu); f_1018d00e();
  /* 1018cfce call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1018cfd2u);
L_1018cfd2:;
  /* 1018cfd2 jmp 0x1018cf97 */
  goto L_1018cf97;
L_1018cfd4:;
  /* 1018cfd4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1018cfdb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018cfde pop edi */
  EDI = (pop32());
  /* 1018cfdf pop esi */
  ESI = (pop32());
  /* 1018cfe0 pop ebx */
  EBX = (pop32());
  /* 1018cfe1 ret  */
  ESPCHK(0x1018cf7au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d00e @ 0x1018d00e (24 bytes, 10 insns) */
void f_1018d00e(void) {
  FTRACE(0x1018d00eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018d00e push ebx */
  push32((uint32_t)(EBX));
  /* 1018d00f push ecx */
  push32((uint32_t)(ECX));
  /* 1018d010 mov ebx, 0x10193124 */
  EBX = (0x10193124u);
  /* 1018d015 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018d018 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1018d01b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1018d01e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1018d021 pop ecx */
  ECX = (pop32());
  /* 1018d022 pop ebx */
  EBX = (pop32());
  /* 1018d023 ret 4 */
  ESPCHK(0x1018d00eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d0ed @ 0x1018d0ed (27 bytes, 11 insns) */
void f_1018d0ed(void) {
  FTRACE(0x1018d0edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018d0ed push ebp */
  push32((uint32_t)(EBP));
  /* 1018d0ee mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1018d0f2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1018d0f4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1018d0f7 push eax */
  push32((uint32_t)(EAX));
  /* 1018d0f8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1018d0fb push eax */
  push32((uint32_t)(EAX));
  /* 1018d0fc call 0x1018cf7a */
  push32(0x1018d101u); f_1018cf7a();
  /* 1018d101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018d104 pop ebp */
  EBP = (pop32());
  /* 1018d105 ret 4 */
  ESPCHK(0x1018d0edu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d108 @ 0x1018d108 (111 bytes, 44 insns) */
void f_1018d108(void) {
  FTRACE(0x1018d108u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018d108 push ebx */
  push32((uint32_t)(EBX));
  /* 1018d109 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1018d10b cmp dword ptr [0x10196858], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10196858))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d111 jne 0x1018d126 */
  if (!C.zf) goto L_1018d126;
  /* 1018d113 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1018d117 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d11a jl 0x1018d175 */
  if ((C.sf!=C.of)) goto L_1018d175;
  /* 1018d11c cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d11f jg 0x1018d175 */
  if ((!C.zf&&C.sf==C.of)) goto L_1018d175;
  /* 1018d121 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018d124 pop ebx */
  EBX = (pop32());
  /* 1018d125 ret  */
  ESPCHK(0x1018d108u, _esp0);
  ESP += 4; return;
L_1018d126:;
  /* 1018d126 push esi */
  push32((uint32_t)(ESI));
  /* 1018d127 mov esi, 0x101969d4 */
  ESI = (0x101969d4u);
  /* 1018d12c push edi */
  push32((uint32_t)(EDI));
  /* 1018d12d push esi */
  push32((uint32_t)(ESI));
  /* 1018d12e call dword ptr [0x1018e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e090))), 0x1018d134u);
  /* 1018d134 cmp dword ptr [0x101969d0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101969d0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d13a mov edi, dword ptr [0x1018e08c] */
  EDI = (r32((uint32_t)(0x1018e08c)));
  /* 1018d140 je 0x1018d150 */
  if (C.zf) goto L_1018d150;
  /* 1018d142 push esi */
  push32((uint32_t)(ESI));
  /* 1018d143 call edi */
  call_ind((uint32_t)(EDI), 0x1018d145u);
  /* 1018d145 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1018d147 call 0x1018a013 */
  push32(0x1018d14cu); f_1018a013();
  /* 1018d14c pop ecx */
  ECX = (pop32());
  /* 1018d14d push 1 */
  push32((uint32_t)(0x1u));
  /* 1018d14f pop ebx */
  EBX = (pop32());
L_1018d150:;
  /* 1018d150 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1018d154 call 0x1018d177 */
  push32(0x1018d159u); f_1018d177();
  /* 1018d159 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1018d15b pop ecx */
  ECX = (pop32());
  /* 1018d15c mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1018d160 je 0x1018d16c */
  if (C.zf) goto L_1018d16c;
  /* 1018d162 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1018d164 call 0x1018a074 */
  push32(0x1018d169u); f_1018a074();
  /* 1018d169 pop ecx */
  ECX = (pop32());
  /* 1018d16a jmp 0x1018d16f */
  goto L_1018d16f;
L_1018d16c:;
  /* 1018d16c push esi */
  push32((uint32_t)(ESI));
  /* 1018d16d call edi */
  call_ind((uint32_t)(EDI), 0x1018d16fu);
L_1018d16f:;
  /* 1018d16f mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1018d173 pop edi */
  EDI = (pop32());
  /* 1018d174 pop esi */
  ESI = (pop32());
L_1018d175:;
  /* 1018d175 pop ebx */
  EBX = (pop32());
  /* 1018d176 ret  */
  ESPCHK(0x1018d108u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d177 @ 0x1018d177 (204 bytes, 71 insns) */
void f_1018d177(void) {
  FTRACE(0x1018d177u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018d177 push ebp */
  push32((uint32_t)(EBP));
  /* 1018d178 mov ebp, esp */
  EBP = (ESP);
  /* 1018d17a push ecx */
  push32((uint32_t)(ECX));
  /* 1018d17b cmp dword ptr [0x10196858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10196858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d182 push ebx */
  push32((uint32_t)(EBX));
  /* 1018d183 jne 0x1018d1a2 */
  if (!C.zf) goto L_1018d1a2;
  /* 1018d185 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018d188 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d18b jl 0x1018d240 */
  if ((C.sf!=C.of)) goto L_1018d240;
  /* 1018d191 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d194 jg 0x1018d240 */
  if ((!C.zf&&C.sf==C.of)) goto L_1018d240;
  /* 1018d19a sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018d19d jmp 0x1018d240 */
  goto L_1018d240;
L_1018d1a2:;
  /* 1018d1a2 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018d1a5 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d1ab jge 0x1018d1d5 */
  if ((C.sf==C.of)) goto L_1018d1d5;
  /* 1018d1ad cmp dword ptr [0x10190c00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10190c00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d1b4 jle 0x1018d1c2 */
  if ((C.zf||C.sf!=C.of)) goto L_1018d1c2;
  /* 1018d1b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1018d1b8 push ebx */
  push32((uint32_t)(EBX));
  /* 1018d1b9 call 0x101893cb */
  push32(0x1018d1beu); f_101893cb();
  /* 1018d1be pop ecx */
  ECX = (pop32());
  /* 1018d1bf pop ecx */
  ECX = (pop32());
  /* 1018d1c0 jmp 0x1018d1cd */
  goto L_1018d1cd;
L_1018d1c2:;
  /* 1018d1c2 mov eax, dword ptr [0x101909f0] */
  EAX = (r32((uint32_t)(0x101909f0)));
  /* 1018d1c7 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 1018d1ca and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_1018d1cd:;
  /* 1018d1cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018d1cf jne 0x1018d1d5 */
  if (!C.zf) goto L_1018d1d5;
L_1018d1d1:;
  /* 1018d1d1 mov eax, ebx */
  EAX = (EBX);
  /* 1018d1d3 jmp 0x1018d240 */
  goto L_1018d240;
L_1018d1d5:;
  /* 1018d1d5 mov edx, dword ptr [0x101909f0] */
  EDX = (r32((uint32_t)(0x101909f0)));
  /* 1018d1db mov eax, ebx */
  EAX = (EBX);
  /* 1018d1dd sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1018d1e0 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 1018d1e3 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1018d1e8 je 0x1018d1f8 */
  if (C.zf) goto L_1018d1f8;
  /* 1018d1ea and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 1018d1ee mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 1018d1f1 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 1018d1f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1018d1f6 jmp 0x1018d201 */
  goto L_1018d201;
L_1018d1f8:;
  /* 1018d1f8 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 1018d1fc mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 1018d1ff push 1 */
  push32((uint32_t)(0x1u));
L_1018d201:;
  /* 1018d201 pop eax */
  EAX = (pop32());
  /* 1018d202 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1018d205 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018d207 push 0 */
  push32((uint32_t)(0x0u));
  /* 1018d209 push 3 */
  push32((uint32_t)(0x3u));
  /* 1018d20b push ecx */
  push32((uint32_t)(ECX));
  /* 1018d20c push eax */
  push32((uint32_t)(EAX));
  /* 1018d20d lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1018d210 push eax */
  push32((uint32_t)(EAX));
  /* 1018d211 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1018d216 push dword ptr [0x10196858] */
  push32((uint32_t)(r32((uint32_t)(0x10196858))));
  /* 1018d21c call 0x1018c3c6 */
  push32(0x1018d221u); f_1018c3c6();
  /* 1018d221 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018d224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018d226 je 0x1018d1d1 */
  if (C.zf) goto L_1018d1d1;
  /* 1018d228 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d22b jne 0x1018d233 */
  if (!C.zf) goto L_1018d233;
  /* 1018d22d movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1018d231 jmp 0x1018d240 */
  goto L_1018d240;
L_1018d233:;
  /* 1018d233 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 1018d237 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1018d23b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1018d23e or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_1018d240:;
  /* 1018d240 pop ebx */
  EBX = (pop32());
  /* 1018d241 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018d242 ret  */
  ESPCHK(0x1018d177u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d243 @ 0x1018d243 (49 bytes, 20 insns) */
void f_1018d243(void) {
  FTRACE(0x1018d243u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018d243 push esi */
  push32((uint32_t)(ESI));
  /* 1018d244 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1018d248 push edi */
  push32((uint32_t)(EDI));
  /* 1018d249 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1018d24c test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 1018d250 je 0x1018d258 */
  if (C.zf) goto L_1018d258;
  /* 1018d252 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1018d256 jmp 0x1018d26f */
  goto L_1018d26f;
L_1018d258:;
  /* 1018d258 push esi */
  push32((uint32_t)(ESI));
  /* 1018d259 call 0x10188f8e */
  push32(0x1018d25eu); f_10188f8e();
  /* 1018d25e push esi */
  push32((uint32_t)(ESI));
  /* 1018d25f call 0x1018d274 */
  push32(0x1018d264u); f_1018d274();
  /* 1018d264 push esi */
  push32((uint32_t)(ESI));
  /* 1018d265 mov edi, eax */
  EDI = (EAX);
  /* 1018d267 call 0x10188fe0 */
  push32(0x1018d26cu); f_10188fe0();
  /* 1018d26c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018d26f:;
  /* 1018d26f mov eax, edi */
  EAX = (EDI);
  /* 1018d271 pop edi */
  EDI = (pop32());
  /* 1018d272 pop esi */
  ESI = (pop32());
  /* 1018d273 ret  */
  ESPCHK(0x1018d243u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x1018d274 (76 bytes, 30 insns) */
void f_1018d274(void) {
  FTRACE(0x1018d274u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018d274 push esi */
  push32((uint32_t)(ESI));
  /* 1018d275 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1018d279 push edi */
  push32((uint32_t)(EDI));
  /* 1018d27a or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1018d27d test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1018d281 je 0x1018d2b7 */
  if (C.zf) goto L_1018d2b7;
  /* 1018d283 push esi */
  push32((uint32_t)(ESI));
  /* 1018d284 call 0x1018c174 */
  push32(0x1018d289u); f_1018c174();
  /* 1018d289 push esi */
  push32((uint32_t)(ESI));
  /* 1018d28a mov edi, eax */
  EDI = (EAX);
  /* 1018d28c call 0x1018d7e6 */
  push32(0x1018d291u); f_1018d7e6();
  /* 1018d291 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1018d294 call 0x1018d706 */
  push32(0x1018d299u); f_1018d706();
  /* 1018d299 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018d29c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018d29e jge 0x1018d2a5 */
  if ((C.sf==C.of)) goto L_1018d2a5;
  /* 1018d2a0 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1018d2a3 jmp 0x1018d2b7 */
  goto L_1018d2b7;
L_1018d2a5:;
  /* 1018d2a5 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 1018d2a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018d2aa je 0x1018d2b7 */
  if (C.zf) goto L_1018d2b7;
  /* 1018d2ac push eax */
  push32((uint32_t)(EAX));
  /* 1018d2ad call 0x1018a1c6 */
  push32(0x1018d2b2u); f_1018a1c6();
  /* 1018d2b2 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 1018d2b6 pop ecx */
  ECX = (pop32());
L_1018d2b7:;
  /* 1018d2b7 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1018d2bb mov eax, edi */
  EAX = (EDI);
  /* 1018d2bd pop edi */
  EDI = (pop32());
  /* 1018d2be pop esi */
  ESI = (pop32());
  /* 1018d2bf ret  */
  ESPCHK(0x1018d274u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2c0 @ 0x1018d2c0 (147 bytes, 52 insns) */
void f_1018d2c0(void) {
  FTRACE(0x1018d2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018d2c0 push ebx */
  push32((uint32_t)(EBX));
  /* 1018d2c1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 1018d2c5 cmp ebx, dword ptr [0x10197d60] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10197d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d2cb push esi */
  push32((uint32_t)(ESI));
  /* 1018d2cc push edi */
  push32((uint32_t)(EDI));
  /* 1018d2cd jae 0x1018d341 */
  if (!C.cf) goto L_1018d341;
  /* 1018d2cf mov eax, ebx */
  EAX = (EBX);
  /* 1018d2d1 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1018d2d4 lea edi, [eax*4 + 0x10197c60] */
  EDI = ((uint32_t)(EAX*4 + 0x10197c60));
  /* 1018d2db mov eax, ebx */
  EAX = (EBX);
  /* 1018d2dd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1018d2e0 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1018d2e3 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1018d2e5 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1018d2e8 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1018d2ed je 0x1018d341 */
  if (C.zf) goto L_1018d341;
  /* 1018d2ef push ebx */
  push32((uint32_t)(EBX));
  /* 1018d2f0 call 0x1018c044 */
  push32(0x1018d2f5u); f_1018c044();
  /* 1018d2f5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1018d2f7 pop ecx */
  ECX = (pop32());
  /* 1018d2f8 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1018d2fd je 0x1018d328 */
  if (C.zf) goto L_1018d328;
  /* 1018d2ff push ebx */
  push32((uint32_t)(EBX));
  /* 1018d300 call 0x1018c002 */
  push32(0x1018d305u); f_1018c002();
  /* 1018d305 pop ecx */
  ECX = (pop32());
  /* 1018d306 push eax */
  push32((uint32_t)(EAX));
  /* 1018d307 call dword ptr [0x1018e0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e0d0))), 0x1018d30du);
  /* 1018d30d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018d30f jne 0x1018d31b */
  if (!C.zf) goto L_1018d31b;
  /* 1018d311 call dword ptr [0x1018e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e03c))), 0x1018d317u);
  /* 1018d317 mov esi, eax */
  ESI = (EAX);
  /* 1018d319 jmp 0x1018d31d */
  goto L_1018d31d;
L_1018d31b:;
  /* 1018d31b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1018d31d:;
  /* 1018d31d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1018d31f je 0x1018d336 */
  if (C.zf) goto L_1018d336;
  /* 1018d321 call 0x1018bf7a */
  push32(0x1018d326u); f_1018bf7a();
  /* 1018d326 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1018d328:;
  /* 1018d328 call 0x1018bf71 */
  push32(0x1018d32du); f_1018bf71();
  /* 1018d32d mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1018d333 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_1018d336:;
  /* 1018d336 push ebx */
  push32((uint32_t)(EBX));
  /* 1018d337 call 0x1018c0a3 */
  push32(0x1018d33cu); f_1018c0a3();
  /* 1018d33c pop ecx */
  ECX = (pop32());
  /* 1018d33d mov eax, esi */
  EAX = (ESI);
  /* 1018d33f jmp 0x1018d34f */
  goto L_1018d34f;
L_1018d341:;
  /* 1018d341 call 0x1018bf71 */
  push32(0x1018d346u); f_1018bf71();
  /* 1018d346 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1018d34c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1018d34f:;
  /* 1018d34f pop edi */
  EDI = (pop32());
  /* 1018d350 pop esi */
  ESI = (pop32());
  /* 1018d351 pop ebx */
  EBX = (pop32());
  /* 1018d352 ret  */
  ESPCHK(0x1018d2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3f0 @ 0x1018d3f0 (62 bytes, 35 insns) */
void f_1018d3f0(void) {
  FTRACE(0x1018d3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018d3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1018d3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1018d3f3 push esi */
  push32((uint32_t)(ESI));
  /* 1018d3f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018d3f6 push eax */
  push32((uint32_t)(EAX));
  /* 1018d3f7 push eax */
  push32((uint32_t)(EAX));
  /* 1018d3f8 push eax */
  push32((uint32_t)(EAX));
  /* 1018d3f9 push eax */
  push32((uint32_t)(EAX));
  /* 1018d3fa push eax */
  push32((uint32_t)(EAX));
  /* 1018d3fb push eax */
  push32((uint32_t)(EAX));
  /* 1018d3fc push eax */
  push32((uint32_t)(EAX));
  /* 1018d3fd push eax */
  push32((uint32_t)(EAX));
  /* 1018d3fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1018d401 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1018d404:;
  /* 1018d404 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1018d406 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1018d408 je 0x1018d411 */
  if (C.zf) goto L_1018d411;
  /* 1018d40a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1018d40b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1018d40b");
  /* 1018d40f jmp 0x1018d404 */
  goto L_1018d404;
L_1018d411:;
  /* 1018d411 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1018d414 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1018d417 nop  */
  /* nop */
L_1018d418:;
  /* 1018d418 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1018d419 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1018d41b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1018d41d je 0x1018d426 */
  if (C.zf) goto L_1018d426;
  /* 1018d41f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1018d420 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1018d420");
  /* 1018d424 jae 0x1018d418 */
  if (!C.cf) goto L_1018d418;
L_1018d426:;
  /* 1018d426 mov eax, ecx */
  EAX = (ECX);
  /* 1018d428 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018d42b pop esi */
  ESI = (pop32());
  /* 1018d42c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018d42d ret  */
  ESPCHK(0x1018d3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d430 @ 0x1018d430 (58 bytes, 32 insns) */
void f_1018d430(void) {
  FTRACE(0x1018d430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018d430 push ebp */
  push32((uint32_t)(EBP));
  /* 1018d431 mov ebp, esp */
  EBP = (ESP);
  /* 1018d433 push esi */
  push32((uint32_t)(ESI));
  /* 1018d434 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018d436 push eax */
  push32((uint32_t)(EAX));
  /* 1018d437 push eax */
  push32((uint32_t)(EAX));
  /* 1018d438 push eax */
  push32((uint32_t)(EAX));
  /* 1018d439 push eax */
  push32((uint32_t)(EAX));
  /* 1018d43a push eax */
  push32((uint32_t)(EAX));
  /* 1018d43b push eax */
  push32((uint32_t)(EAX));
  /* 1018d43c push eax */
  push32((uint32_t)(EAX));
  /* 1018d43d push eax */
  push32((uint32_t)(EAX));
  /* 1018d43e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1018d441 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1018d444:;
  /* 1018d444 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1018d446 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1018d448 je 0x1018d451 */
  if (C.zf) goto L_1018d451;
  /* 1018d44a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1018d44b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1018d44b");
  /* 1018d44f jmp 0x1018d444 */
  goto L_1018d444;
L_1018d451:;
  /* 1018d451 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1018d454:;
  /* 1018d454 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1018d456 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1018d458 je 0x1018d464 */
  if (C.zf) goto L_1018d464;
  /* 1018d45a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1018d45b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1018d45b");
  /* 1018d45f jae 0x1018d454 */
  if (!C.cf) goto L_1018d454;
  /* 1018d461 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1018d464:;
  /* 1018d464 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018d467 pop esi */
  ESI = (pop32());
  /* 1018d468 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018d469 ret  */
  ESPCHK(0x1018d430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d46a @ 0x1018d46a (544 bytes, 177 insns) */
void f_1018d46a(void) {
  FTRACE(0x1018d46au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018d46a push ebp */
  push32((uint32_t)(EBP));
  /* 1018d46b mov ebp, esp */
  EBP = (ESP);
  /* 1018d46d sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018d470 push ebx */
  push32((uint32_t)(EBX));
  /* 1018d471 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1018d474 push esi */
  push32((uint32_t)(ESI));
  /* 1018d475 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1018d478 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 1018d47c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018d47e push edi */
  push32((uint32_t)(EDI));
  /* 1018d47f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1018d482 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1018d485 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1018d488 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1018d48b mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 1018d48f mov edi, ecx */
  EDI = (ECX);
  /* 1018d491 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 1018d496 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 1018d498 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1018d49a and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1018d49c and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 1018d4a2 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1018d4a6 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 1018d4a9 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1018d4ac jae 0x1018d66a */
  if (!C.cf) goto L_1018d66a;
  /* 1018d4b2 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1018d4b7 jae 0x1018d66a */
  if (!C.cf) goto L_1018d66a;
  /* 1018d4bd cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1018d4c2 ja 0x1018d66a */
  if ((!C.cf&&!C.zf)) goto L_1018d66a;
  /* 1018d4c8 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1018d4cd ja 0x1018d4d3 */
  if ((!C.cf&&!C.zf)) goto L_1018d4d3;
  /* 1018d4cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018d4d1 jmp 0x1018d50d */
  goto L_1018d50d;
L_1018d4d3:;
  /* 1018d4d3 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 1018d4d6 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 1018d4db jne 0x1018d4f5 */
  if (!C.zf) goto L_1018d4f5;
  /* 1018d4dd inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1018d4e0 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 1018d4e3 jne 0x1018d4f5 */
  if (!C.zf) goto L_1018d4f5;
  /* 1018d4e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018d4e7 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d4ea jne 0x1018d4f7 */
  if (!C.zf) goto L_1018d4f7;
  /* 1018d4ec cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d4ee jne 0x1018d4f7 */
  if (!C.zf) goto L_1018d4f7;
  /* 1018d4f0 jmp 0x1018d664 */
  goto L_1018d664;
L_1018d4f5:;
  /* 1018d4f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1018d4f7:;
  /* 1018d4f7 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1018d4fa jne 0x1018d51a */
  if (!C.zf) goto L_1018d51a;
  /* 1018d4fc inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1018d4ff test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 1018d502 jne 0x1018d51a */
  if (!C.zf) goto L_1018d51a;
  /* 1018d504 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d507 jne 0x1018d51a */
  if (!C.zf) goto L_1018d51a;
  /* 1018d509 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d50b jne 0x1018d51a */
  if (!C.zf) goto L_1018d51a;
L_1018d50d:;
  /* 1018d50d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1018d510 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1018d513 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1018d515 jmp 0x1018d685 */
  goto L_1018d685;
L_1018d51a:;
  /* 1018d51a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1018d51d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1018d520 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1018d523 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_1018d52a:;
  /* 1018d52a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1018d52d add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018d52f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d533 jle 0x1018d57e */
  if ((C.zf||C.sf!=C.of)) goto L_1018d57e;
  /* 1018d535 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018d537 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 1018d53a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1018d53d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1018d540 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1018d543 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1018d546:;
  /* 1018d546 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1018d549 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1018d54c movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 1018d54f movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 1018d552 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1018d555 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1018d558 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018d55b push ecx */
  push32((uint32_t)(ECX));
  /* 1018d55c push eax */
  push32((uint32_t)(EAX));
  /* 1018d55d push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 1018d55f call 0x1018c615 */
  push32(0x1018d564u); f_1018c615();
  /* 1018d564 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018d567 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018d569 je 0x1018d571 */
  if (C.zf) goto L_1018d571;
  /* 1018d56b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1018d56e inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_1018d571:;
  /* 1018d571 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1018d575 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1018d579 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 1018d57c jne 0x1018d546 */
  if (!C.zf) goto L_1018d546;
L_1018d57e:;
  /* 1018d57e add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1018d582 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 1018d585 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 1018d588 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d58c jg 0x1018d52a */
  if ((!C.zf&&C.sf==C.of)) goto L_1018d52a;
  /* 1018d58e add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1018d595 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1018d59a jle 0x1018d5c1 */
  if ((C.zf||C.sf!=C.of)) goto L_1018d5c1;
L_1018d59c:;
  /* 1018d59c test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 1018d5a0 jne 0x1018d5ba */
  if (!C.zf) goto L_1018d5ba;
  /* 1018d5a2 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1018d5a5 push eax */
  push32((uint32_t)(EAX));
  /* 1018d5a6 call 0x1018c694 */
  push32(0x1018d5abu); f_1018c694();
  /* 1018d5ab add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1018d5b2 pop ecx */
  ECX = (pop32());
  /* 1018d5b3 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1018d5b8 jg 0x1018d59c */
  if ((!C.zf&&C.sf==C.of)) goto L_1018d59c;
L_1018d5ba:;
  /* 1018d5ba cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1018d5bf jg 0x1018d5fa */
  if ((!C.zf&&C.sf==C.of)) goto L_1018d5fa;
L_1018d5c1:;
  /* 1018d5c1 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1018d5c8 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1018d5cd jge 0x1018d5fa */
  if ((C.sf==C.of)) goto L_1018d5fa;
  /* 1018d5cf movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 1018d5d3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1018d5d5 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1018d5d8 mov ebx, eax */
  EBX = (EAX);
L_1018d5da:;
  /* 1018d5da test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 1018d5de je 0x1018d5e3 */
  if (C.zf) goto L_1018d5e3;
  /* 1018d5e0 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_1018d5e3:;
  /* 1018d5e3 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1018d5e6 push eax */
  push32((uint32_t)(EAX));
  /* 1018d5e7 call 0x1018c6c2 */
  push32(0x1018d5ecu); f_1018c6c2();
  /* 1018d5ec dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1018d5ed pop ecx */
  ECX = (pop32());
  /* 1018d5ee jne 0x1018d5da */
  if (!C.zf) goto L_1018d5da;
  /* 1018d5f0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d5f4 je 0x1018d5fa */
  if (C.zf) goto L_1018d5fa;
  /* 1018d5f6 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_1018d5fa:;
  /* 1018d5fa cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1018d600 ja 0x1018d611 */
  if ((!C.cf&&!C.zf)) goto L_1018d611;
  /* 1018d602 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1018d605 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1018d60a cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d60f jne 0x1018d646 */
  if (!C.zf) goto L_1018d646;
L_1018d611:;
  /* 1018d611 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d615 jne 0x1018d643 */
  if (!C.zf) goto L_1018d643;
  /* 1018d617 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 1018d61b cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d61f jne 0x1018d63e */
  if (!C.zf) goto L_1018d63e;
  /* 1018d621 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 1018d625 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1018d62b jne 0x1018d638 */
  if (!C.zf) goto L_1018d638;
  /* 1018d62d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1018d630 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 1018d636 jmp 0x1018d646 */
  goto L_1018d646;
L_1018d638:;
  /* 1018d638 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 1018d63c jmp 0x1018d646 */
  goto L_1018d646;
L_1018d63e:;
  /* 1018d63e inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 1018d641 jmp 0x1018d646 */
  goto L_1018d646;
L_1018d643:;
  /* 1018d643 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_1018d646:;
  /* 1018d646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018d649 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1018d64d jae 0x1018d66a */
  if (!C.cf) goto L_1018d66a;
  /* 1018d64f mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 1018d653 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 1018d655 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 1018d658 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1018d65b mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 1018d65e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1018d661 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_1018d664:;
  /* 1018d664 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 1018d668 jmp 0x1018d685 */
  goto L_1018d685;
L_1018d66a:;
  /* 1018d66a neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 1018d66d sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018d66f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1018d673 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 1018d679 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1018d67f and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1018d682 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_1018d685:;
  /* 1018d685 pop edi */
  EDI = (pop32());
  /* 1018d686 pop esi */
  ESI = (pop32());
  /* 1018d687 pop ebx */
  EBX = (pop32());
  /* 1018d688 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018d689 ret  */
  ESPCHK(0x1018d46au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d68a @ 0x1018d68a (124 bytes, 52 insns) */
void f_1018d68a(void) {
  FTRACE(0x1018d68au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018d68a push ebp */
  push32((uint32_t)(EBP));
  /* 1018d68b mov ebp, esp */
  EBP = (ESP);
  /* 1018d68d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018d690 push ebx */
  push32((uint32_t)(EBX));
  /* 1018d691 mov ebx, 0x10193240 */
  EBX = (0x10193240u);
  /* 1018d696 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1018d698 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018d69b cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d69e je 0x1018d703 */
  if (C.zf) goto L_1018d703;
  /* 1018d6a0 jge 0x1018d6b2 */
  if ((C.sf==C.of)) goto L_1018d6b2;
  /* 1018d6a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1018d6a5 mov ebx, 0x101933a0 */
  EBX = (0x101933a0u);
  /* 1018d6aa neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1018d6ac mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1018d6af sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_1018d6b2:;
  /* 1018d6b2 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d6b5 jne 0x1018d6bd */
  if (!C.zf) goto L_1018d6bd;
  /* 1018d6b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1018d6ba mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_1018d6bd:;
  /* 1018d6bd cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d6c0 je 0x1018d703 */
  if (C.zf) goto L_1018d703;
  /* 1018d6c2 push esi */
  push32((uint32_t)(ESI));
  /* 1018d6c3 push edi */
  push32((uint32_t)(EDI));
L_1018d6c4:;
  /* 1018d6c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1018d6c7 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1018d6ca sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 1018d6ce and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1018d6d1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d6d3 je 0x1018d6fc */
  if (C.zf) goto L_1018d6fc;
  /* 1018d6d5 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 1018d6d8 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1018d6de lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 1018d6e1 jb 0x1018d6ef */
  if (C.cf) goto L_1018d6ef;
  /* 1018d6e3 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 1018d6e6 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1018d6e7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1018d6e8 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1018d6e9 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 1018d6ec lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_1018d6ef:;
  /* 1018d6ef push esi */
  push32((uint32_t)(ESI));
  /* 1018d6f0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1018d6f3 call 0x1018d46a */
  push32(0x1018d6f8u); f_1018d46a();
  /* 1018d6f8 pop ecx */
  ECX = (pop32());
  /* 1018d6f9 pop ecx */
  ECX = (pop32());
  /* 1018d6fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_1018d6fc:;
  /* 1018d6fc cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d6ff jne 0x1018d6c4 */
  if (!C.zf) goto L_1018d6c4;
  /* 1018d701 pop edi */
  EDI = (pop32());
  /* 1018d702 pop esi */
  ESI = (pop32());
L_1018d703:;
  /* 1018d703 pop ebx */
  EBX = (pop32());
  /* 1018d704 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018d705 ret  */
  ESPCHK(0x1018d68au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d706 @ 0x1018d706 (93 bytes, 32 insns) */
void f_1018d706(void) {
  FTRACE(0x1018d706u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018d706 push esi */
  push32((uint32_t)(ESI));
  /* 1018d707 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1018d70b cmp esi, dword ptr [0x10197d60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10197d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d711 jae 0x1018d74b */
  if (!C.cf) goto L_1018d74b;
  /* 1018d713 mov ecx, esi */
  ECX = (ESI);
  /* 1018d715 mov eax, esi */
  EAX = (ESI);
  /* 1018d717 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1018d71a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1018d71d mov ecx, dword ptr [ecx*4 + 0x10197c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10197c60)));
  /* 1018d724 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1018d727 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1018d72c je 0x1018d74b */
  if (C.zf) goto L_1018d74b;
  /* 1018d72e push edi */
  push32((uint32_t)(EDI));
  /* 1018d72f push esi */
  push32((uint32_t)(ESI));
  /* 1018d730 call 0x1018c044 */
  push32(0x1018d735u); f_1018c044();
  /* 1018d735 push esi */
  push32((uint32_t)(ESI));
  /* 1018d736 call 0x1018d763 */
  push32(0x1018d73bu); f_1018d763();
  /* 1018d73b push esi */
  push32((uint32_t)(ESI));
  /* 1018d73c mov edi, eax */
  EDI = (EAX);
  /* 1018d73e call 0x1018c0a3 */
  push32(0x1018d743u); f_1018c0a3();
  /* 1018d743 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018d746 mov eax, edi */
  EAX = (EDI);
  /* 1018d748 pop edi */
  EDI = (pop32());
  /* 1018d749 pop esi */
  ESI = (pop32());
  /* 1018d74a ret  */
  ESPCHK(0x1018d706u, _esp0);
  ESP += 4; return;
L_1018d74b:;
  /* 1018d74b call 0x1018bf71 */
  push32(0x1018d750u); f_1018bf71();
  /* 1018d750 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1018d756 call 0x1018bf7a */
  push32(0x1018d75bu); f_1018bf7a();
  /* 1018d75b and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1018d75e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1018d761 pop esi */
  ESI = (pop32());
  /* 1018d762 ret  */
  ESPCHK(0x1018d706u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d763 @ 0x1018d763 (131 bytes, 52 insns) */
void f_1018d763(void) {
  FTRACE(0x1018d763u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018d763 push esi */
  push32((uint32_t)(ESI));
  /* 1018d764 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1018d768 push edi */
  push32((uint32_t)(EDI));
  /* 1018d769 push esi */
  push32((uint32_t)(ESI));
  /* 1018d76a call 0x1018c002 */
  push32(0x1018d76fu); f_1018c002();
  /* 1018d76f cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d772 pop ecx */
  ECX = (pop32());
  /* 1018d773 je 0x1018d7b1 */
  if (C.zf) goto L_1018d7b1;
  /* 1018d775 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d778 je 0x1018d77f */
  if (C.zf) goto L_1018d77f;
  /* 1018d77a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d77d jne 0x1018d795 */
  if (!C.zf) goto L_1018d795;
L_1018d77f:;
  /* 1018d77f push 2 */
  push32((uint32_t)(0x2u));
  /* 1018d781 call 0x1018c002 */
  push32(0x1018d786u); f_1018c002();
  /* 1018d786 push 1 */
  push32((uint32_t)(0x1u));
  /* 1018d788 mov edi, eax */
  EDI = (EAX);
  /* 1018d78a call 0x1018c002 */
  push32(0x1018d78fu); f_1018c002();
  /* 1018d78f pop ecx */
  ECX = (pop32());
  /* 1018d790 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d792 pop ecx */
  ECX = (pop32());
  /* 1018d793 je 0x1018d7b1 */
  if (C.zf) goto L_1018d7b1;
L_1018d795:;
  /* 1018d795 push esi */
  push32((uint32_t)(ESI));
  /* 1018d796 call 0x1018c002 */
  push32(0x1018d79bu); f_1018c002();
  /* 1018d79b pop ecx */
  ECX = (pop32());
  /* 1018d79c push eax */
  push32((uint32_t)(EAX));
  /* 1018d79d call dword ptr [0x1018e0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e0d4))), 0x1018d7a3u);
  /* 1018d7a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1018d7a5 jne 0x1018d7b1 */
  if (!C.zf) goto L_1018d7b1;
  /* 1018d7a7 call dword ptr [0x1018e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1018e03c))), 0x1018d7adu);
  /* 1018d7ad mov edi, eax */
  EDI = (EAX);
  /* 1018d7af jmp 0x1018d7b3 */
  goto L_1018d7b3;
L_1018d7b1:;
  /* 1018d7b1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_1018d7b3:;
  /* 1018d7b3 push esi */
  push32((uint32_t)(ESI));
  /* 1018d7b4 call 0x1018bf83 */
  push32(0x1018d7b9u); f_1018bf83();
  /* 1018d7b9 mov eax, esi */
  EAX = (ESI);
  /* 1018d7bb and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 1018d7be sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1018d7c1 pop ecx */
  ECX = (pop32());
  /* 1018d7c2 mov eax, dword ptr [eax*4 + 0x10197c60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10197c60)));
  /* 1018d7c9 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 1018d7cc and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 1018d7d1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1018d7d3 je 0x1018d7e1 */
  if (C.zf) goto L_1018d7e1;
  /* 1018d7d5 push edi */
  push32((uint32_t)(EDI));
  /* 1018d7d6 call 0x1018befe */
  push32(0x1018d7dbu); f_1018befe();
  /* 1018d7db pop ecx */
  ECX = (pop32());
  /* 1018d7dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1018d7df jmp 0x1018d7e3 */
  goto L_1018d7e3;
L_1018d7e1:;
  /* 1018d7e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1018d7e3:;
  /* 1018d7e3 pop edi */
  EDI = (pop32());
  /* 1018d7e4 pop esi */
  ESI = (pop32());
  /* 1018d7e5 ret  */
  ESPCHK(0x1018d763u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x1018d7e6 (43 bytes, 17 insns) */
void f_1018d7e6(void) {
  FTRACE(0x1018d7e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018d7e6 push esi */
  push32((uint32_t)(ESI));
  /* 1018d7e7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1018d7eb mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1018d7ee test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 1018d7f0 je 0x1018d80f */
  if (C.zf) goto L_1018d80f;
  /* 1018d7f2 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1018d7f4 je 0x1018d80f */
  if (C.zf) goto L_1018d80f;
  /* 1018d7f6 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 1018d7f9 call 0x1018a1c6 */
  push32(0x1018d7feu); f_1018a1c6();
  /* 1018d7fe and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 1018d804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018d806 pop ecx */
  ECX = (pop32());
  /* 1018d807 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1018d809 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1018d80c mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_1018d80f:;
  /* 1018d80f pop esi */
  ESI = (pop32());
  /* 1018d810 ret  */
  ESPCHK(0x1018d7e6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d820 @ 0x1018d820 (208 bytes, 85 insns) */
void f_1018d820(void) {
  FTRACE(0x1018d820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018d820 push ebp */
  push32((uint32_t)(EBP));
  /* 1018d821 mov ebp, esp */
  EBP = (ESP);
  /* 1018d823 push edi */
  push32((uint32_t)(EDI));
  /* 1018d824 push esi */
  push32((uint32_t)(ESI));
  /* 1018d825 push ebx */
  push32((uint32_t)(EBX));
  /* 1018d826 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1018d829 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1018d82c lea eax, [0x10196850] */
  EAX = ((uint32_t)(0x10196850));
  /* 1018d832 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d836 jne 0x1018d873 */
  if (!C.zf) goto L_1018d873;
  /* 1018d838 mov al, 0xff */
  AL = (0xffu);
  /* 1018d83a mov edi, edi */
  EDI = (EDI);
L_1018d83c:;
  /* 1018d83c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1018d83e je 0x1018d86e */
  if (C.zf) goto L_1018d86e;
  /* 1018d840 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1018d842 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1018d843 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 1018d845 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1018d846 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018d848 je 0x1018d83c */
  if (C.zf) goto L_1018d83c;
  /* 1018d84a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1018d84c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018d84e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1018d850 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1018d853 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1018d855 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1018d857 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 1018d859 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1018d85b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018d85d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1018d85f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1018d862 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1018d864 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1018d866 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018d868 je 0x1018d83c */
  if (C.zf) goto L_1018d83c;
  /* 1018d86a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1018d86c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1018d86e:;
  /* 1018d86e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1018d871 jmp 0x1018d8eb */
  goto L_1018d8eb;
L_1018d873:;
  /* 1018d873 lock inc dword ptr [0x101969d4] */
  x86_unimpl("lock inc @ 0x1018d873");
  /* 1018d87a cmp dword ptr [0x101969d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101969d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d881 jg 0x1018d887 */
  if ((!C.zf&&C.sf==C.of)) goto L_1018d887;
  /* 1018d883 push 0 */
  push32((uint32_t)(0x0u));
  /* 1018d885 jmp 0x1018d89c */
  goto L_1018d89c;
L_1018d887:;
  /* 1018d887 lock dec dword ptr [0x101969d4] */
  x86_unimpl("lock dec @ 0x1018d887");
  /* 1018d88e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1018d890 call 0x1018a013 */
  push32(0x1018d895u); f_1018a013();
  /* 1018d895 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1018d89c:;
  /* 1018d89c mov eax, 0xff */
  EAX = (0xffu);
  /* 1018d8a1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1018d8a3 nop  */
  /* nop */
L_1018d8a4:;
  /* 1018d8a4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1018d8a6 je 0x1018d8cf */
  if (C.zf) goto L_1018d8cf;
  /* 1018d8a8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1018d8aa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1018d8ab mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1018d8ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1018d8ae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018d8b0 je 0x1018d8a4 */
  if (C.zf) goto L_1018d8a4;
  /* 1018d8b2 push eax */
  push32((uint32_t)(EAX));
  /* 1018d8b3 push ebx */
  push32((uint32_t)(EBX));
  /* 1018d8b4 call 0x101894af */
  push32(0x1018d8b9u); f_101894af();
  /* 1018d8b9 mov ebx, eax */
  EBX = (EAX);
  /* 1018d8bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018d8be call 0x101894af */
  push32(0x1018d8c3u); f_101894af();
  /* 1018d8c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018d8c6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018d8c8 je 0x1018d8a4 */
  if (C.zf) goto L_1018d8a4;
  /* 1018d8ca sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1018d8cc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1018d8cf:;
  /* 1018d8cf mov ebx, eax */
  EBX = (EAX);
  /* 1018d8d1 pop eax */
  EAX = (pop32());
  /* 1018d8d2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018d8d4 jne 0x1018d8df */
  if (!C.zf) goto L_1018d8df;
  /* 1018d8d6 lock dec dword ptr [0x101969d4] */
  x86_unimpl("lock dec @ 0x1018d8d6");
  /* 1018d8dd jmp 0x1018d8e9 */
  goto L_1018d8e9;
L_1018d8df:;
  /* 1018d8df push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1018d8e1 call 0x1018a074 */
  push32(0x1018d8e6u); f_1018a074();
  /* 1018d8e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1018d8e9:;
  /* 1018d8e9 mov eax, ebx */
  EAX = (EBX);
L_1018d8eb:;
  /* 1018d8eb pop ebx */
  EBX = (pop32());
  /* 1018d8ec pop esi */
  ESI = (pop32());
  /* 1018d8ed pop edi */
  EDI = (pop32());
  /* 1018d8ee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018d8ef ret  */
  ESPCHK(0x1018d820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8f0 @ 0x1018d8f0 (257 bytes, 103 insns) */
void f_1018d8f0(void) {
  FTRACE(0x1018d8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018d8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1018d8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1018d8f3 push edi */
  push32((uint32_t)(EDI));
  /* 1018d8f4 push esi */
  push32((uint32_t)(ESI));
  /* 1018d8f5 push ebx */
  push32((uint32_t)(EBX));
  /* 1018d8f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1018d8f9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1018d8fb je 0x1018d9ea */
  if (C.zf) goto L_1018d9ea;
  /* 1018d901 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1018d904 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1018d907 lea eax, [0x10196850] */
  EAX = ((uint32_t)(0x10196850));
  /* 1018d90d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d911 jne 0x1018d961 */
  if (!C.zf) goto L_1018d961;
  /* 1018d913 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 1018d915 mov bl, 0x5a */
  BL = (0x5au);
  /* 1018d917 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 1018d919 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1018d91c:;
  /* 1018d91c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1018d91e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1018d920 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1018d922 je 0x1018d945 */
  if (C.zf) goto L_1018d945;
  /* 1018d924 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1018d926 je 0x1018d945 */
  if (C.zf) goto L_1018d945;
  /* 1018d928 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1018d929 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1018d92a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018d92c jb 0x1018d934 */
  if (C.cf) goto L_1018d934;
  /* 1018d92e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018d930 ja 0x1018d934 */
  if ((!C.cf&&!C.zf)) goto L_1018d934;
  /* 1018d932 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_1018d934:;
  /* 1018d934 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018d936 jb 0x1018d93e */
  if (C.cf) goto L_1018d93e;
  /* 1018d938 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018d93a ja 0x1018d93e */
  if ((!C.cf&&!C.zf)) goto L_1018d93e;
  /* 1018d93c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1018d93e:;
  /* 1018d93e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018d940 jne 0x1018d94f */
  if (!C.zf) goto L_1018d94f;
  /* 1018d942 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1018d943 jne 0x1018d91c */
  if (!C.zf) goto L_1018d91c;
L_1018d945:;
  /* 1018d945 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1018d947 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1018d949 je 0x1018d9ea */
  if (C.zf) goto L_1018d9ea;
L_1018d94f:;
  /* 1018d94f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1018d954 jb 0x1018d9ea */
  if (C.cf) goto L_1018d9ea;
  /* 1018d95a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1018d95c jmp 0x1018d9ea */
  goto L_1018d9ea;
L_1018d961:;
  /* 1018d961 lock inc dword ptr [0x101969d4] */
  x86_unimpl("lock inc @ 0x1018d961");
  /* 1018d968 cmp dword ptr [0x101969d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101969d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d96f jg 0x1018d975 */
  if ((!C.zf&&C.sf==C.of)) goto L_1018d975;
  /* 1018d971 push 0 */
  push32((uint32_t)(0x0u));
  /* 1018d973 jmp 0x1018d98e */
  goto L_1018d98e;
L_1018d975:;
  /* 1018d975 lock dec dword ptr [0x101969d4] */
  x86_unimpl("lock dec @ 0x1018d975");
  /* 1018d97c mov ebx, ecx */
  EBX = (ECX);
  /* 1018d97e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1018d980 call 0x1018a013 */
  push32(0x1018d985u); f_1018a013();
  /* 1018d985 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1018d98c mov ecx, ebx */
  ECX = (EBX);
L_1018d98e:;
  /* 1018d98e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018d990 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1018d992 mov edi, edi */
  EDI = (EDI);
L_1018d994:;
  /* 1018d994 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1018d996 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018d998 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1018d99a je 0x1018d9bf */
  if (C.zf) goto L_1018d9bf;
  /* 1018d99c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1018d99e je 0x1018d9bf */
  if (C.zf) goto L_1018d9bf;
  /* 1018d9a0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1018d9a1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1018d9a2 push ecx */
  push32((uint32_t)(ECX));
  /* 1018d9a3 push eax */
  push32((uint32_t)(EAX));
  /* 1018d9a4 push ebx */
  push32((uint32_t)(EBX));
  /* 1018d9a5 call 0x101894af */
  push32(0x1018d9aau); f_101894af();
  /* 1018d9aa mov ebx, eax */
  EBX = (EAX);
  /* 1018d9ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018d9af call 0x101894af */
  push32(0x1018d9b4u); f_101894af();
  /* 1018d9b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018d9b7 pop ecx */
  ECX = (pop32());
  /* 1018d9b8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d9ba jne 0x1018d9c5 */
  if (!C.zf) goto L_1018d9c5;
  /* 1018d9bc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1018d9bd jne 0x1018d994 */
  if (!C.zf) goto L_1018d994;
L_1018d9bf:;
  /* 1018d9bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1018d9c1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1018d9c3 je 0x1018d9ce */
  if (C.zf) goto L_1018d9ce;
L_1018d9c5:;
  /* 1018d9c5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1018d9ca jb 0x1018d9ce */
  if (C.cf) goto L_1018d9ce;
  /* 1018d9cc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1018d9ce:;
  /* 1018d9ce pop eax */
  EAX = (pop32());
  /* 1018d9cf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1018d9d1 jne 0x1018d9dc */
  if (!C.zf) goto L_1018d9dc;
  /* 1018d9d3 lock dec dword ptr [0x101969d4] */
  x86_unimpl("lock dec @ 0x1018d9d3");
  /* 1018d9da jmp 0x1018d9ea */
  goto L_1018d9ea;
L_1018d9dc:;
  /* 1018d9dc mov ebx, ecx */
  EBX = (ECX);
  /* 1018d9de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1018d9e0 call 0x1018a074 */
  push32(0x1018d9e5u); f_1018a074();
  /* 1018d9e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1018d9e8 mov ecx, ebx */
  ECX = (EBX);
L_1018d9ea:;
  /* 1018d9ea mov eax, ecx */
  EAX = (ECX);
  /* 1018d9ec pop ebx */
  EBX = (pop32());
  /* 1018d9ed pop esi */
  ESI = (pop32());
  /* 1018d9ee pop edi */
  EDI = (pop32());
  /* 1018d9ef leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1018d9f0 ret  */
  ESPCHK(0x1018d8f0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x1018da34 (6 bytes, 1 insns) */
void f_1018da34(void) {
  FTRACE(0x1018da34u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1018da34 jmp dword ptr [0x1018e0cc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1018e0cc)))); return;
}

