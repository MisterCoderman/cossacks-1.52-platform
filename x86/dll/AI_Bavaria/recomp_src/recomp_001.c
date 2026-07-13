#include "recomp.h"

/* FUN_10009245 @ 0x10039245 (53 bytes, 25 insns) */
void f_10039245(void) {
  FTRACE(0x10039245u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10039245 push ebp */
  push32((uint32_t)(EBP));
  /* 10039246 mov ebp, esp */
  EBP = (ESP);
  /* 10039248 push ecx */
  push32((uint32_t)(ECX));
  /* 10039249 push esi */
  push32((uint32_t)(ESI));
  /* 1003924a wait  */
  /* wait (no observable integer/reg state) */
  /* 1003924b fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 1003924e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 10039251 call 0x10039290 */
  push32(0x10039256u); f_10039290();
  /* 10039256 mov esi, eax */
  ESI = (EAX);
  /* 10039258 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1003925b not eax */
  EAX = (~(EAX));
  /* 1003925d and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 1003925f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10039262 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10039265 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 10039267 push esi */
  push32((uint32_t)(ESI));
  /* 10039268 call 0x10039322 */
  push32(0x1003926du); f_10039322();
  /* 1003926d pop ecx */
  ECX = (pop32());
  /* 1003926e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10039271 pop ecx */
  ECX = (pop32());
  /* 10039272 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 10039275 mov eax, esi */
  EAX = (ESI);
  /* 10039277 pop esi */
  ESI = (pop32());
  /* 10039278 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10039279 ret  */
  ESPCHK(0x10039245u, _esp0);
  ESP += 4; return;
}

/* FUN_1000927a @ 0x1003927a (22 bytes, 8 insns) */
void f_1003927a(void) {
  FTRACE(0x1003927au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003927a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1003927e and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10039283 push eax */
  push32((uint32_t)(EAX));
  /* 10039284 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10039288 call 0x10039245 */
  push32(0x1003928du); f_10039245();
  /* 1003928d pop ecx */
  ECX = (pop32());
  /* 1003928e pop ecx */
  ECX = (pop32());
  /* 1003928f ret  */
  ESPCHK(0x1003927au, _esp0);
  ESP += 4; return;
}

/* FUN_10009290 @ 0x10039290 (146 bytes, 58 insns) */
void f_10039290(void) {
  FTRACE(0x10039290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10039290 push ebx */
  push32((uint32_t)(EBX));
  /* 10039291 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 10039295 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10039297 push ebp */
  push32((uint32_t)(EBP));
  /* 10039298 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 1003929b push edi */
  push32((uint32_t)(EDI));
  /* 1003929c je 0x100392a1 */
  if (C.zf) goto L_100392a1;
  /* 1003929e push 0x10 */
  push32((uint32_t)(0x10u));
  /* 100392a0 pop eax */
  EAX = (pop32());
L_100392a1:;
  /* 100392a1 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 100392a4 je 0x100392a8 */
  if (C.zf) goto L_100392a8;
  /* 100392a6 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_100392a8:;
  /* 100392a8 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 100392ab je 0x100392af */
  if (C.zf) goto L_100392af;
  /* 100392ad or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_100392af:;
  /* 100392af test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 100392b2 je 0x100392b6 */
  if (C.zf) goto L_100392b6;
  /* 100392b4 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_100392b6:;
  /* 100392b6 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 100392b9 je 0x100392bd */
  if (C.zf) goto L_100392bd;
  /* 100392bb or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_100392bd:;
  /* 100392bd test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 100392c0 je 0x100392c7 */
  if (C.zf) goto L_100392c7;
  /* 100392c2 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_100392c7:;
  /* 100392c7 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 100392ca push esi */
  push32((uint32_t)(ESI));
  /* 100392cb mov edx, ecx */
  EDX = (ECX);
  /* 100392cd mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 100392d2 mov edi, 0x300 */
  EDI = (0x300u);
  /* 100392d7 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 100392d9 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 100392de je 0x100392ff */
  if (C.zf) goto L_100392ff;
  /* 100392e0 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100392e6 je 0x100392fc */
  if (C.zf) goto L_100392fc;
  /* 100392e8 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100392ee je 0x100392f8 */
  if (C.zf) goto L_100392f8;
  /* 100392f0 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100392f2 jne 0x100392ff */
  if (!C.zf) goto L_100392ff;
  /* 100392f4 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 100392f6 jmp 0x100392ff */
  goto L_100392ff;
L_100392f8:;
  /* 100392f8 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 100392fa jmp 0x100392ff */
  goto L_100392ff;
L_100392fc:;
  /* 100392fc or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_100392ff:;
  /* 100392ff and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10039301 pop esi */
  ESI = (pop32());
  /* 10039302 je 0x1003930f */
  if (C.zf) goto L_1003930f;
  /* 10039304 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039306 jne 0x10039314 */
  if (!C.zf) goto L_10039314;
  /* 10039308 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 1003930d jmp 0x10039314 */
  goto L_10039314;
L_1003930f:;
  /* 1003930f or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_10039314:;
  /* 10039314 pop edi */
  EDI = (pop32());
  /* 10039315 pop ebp */
  EBP = (pop32());
  /* 10039316 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 10039319 pop ebx */
  EBX = (pop32());
  /* 1003931a je 0x10039321 */
  if (C.zf) goto L_10039321;
  /* 1003931c or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_10039321:;
  /* 10039321 ret  */
  ESPCHK(0x10039290u, _esp0);
  ESP += 4; return;
}

/* FUN_10009322 @ 0x10039322 (137 bytes, 53 insns) */
void f_10039322(void) {
  FTRACE(0x10039322u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10039322 push ebx */
  push32((uint32_t)(EBX));
  /* 10039323 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 10039327 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10039329 push esi */
  push32((uint32_t)(ESI));
  /* 1003932a test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 1003932d je 0x10039332 */
  if (C.zf) goto L_10039332;
  /* 1003932f push 1 */
  push32((uint32_t)(0x1u));
  /* 10039331 pop eax */
  EAX = (pop32());
L_10039332:;
  /* 10039332 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 10039335 je 0x10039339 */
  if (C.zf) goto L_10039339;
  /* 10039337 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_10039339:;
  /* 10039339 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 1003933c je 0x10039340 */
  if (C.zf) goto L_10039340;
  /* 1003933e or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_10039340:;
  /* 10039340 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10039343 je 0x10039347 */
  if (C.zf) goto L_10039347;
  /* 10039345 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_10039347:;
  /* 10039347 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 1003934a je 0x1003934e */
  if (C.zf) goto L_1003934e;
  /* 1003934c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_1003934e:;
  /* 1003934e test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 10039354 je 0x10039358 */
  if (C.zf) goto L_10039358;
  /* 10039356 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_10039358:;
  /* 10039358 mov ecx, ebx */
  ECX = (EBX);
  /* 1003935a mov edx, 0x300 */
  EDX = (0x300u);
  /* 1003935f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10039361 mov esi, 0x200 */
  ESI = (0x200u);
  /* 10039366 je 0x10039385 */
  if (C.zf) goto L_10039385;
  /* 10039368 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003936e je 0x10039382 */
  if (C.zf) goto L_10039382;
  /* 10039370 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039372 je 0x1003937d */
  if (C.zf) goto L_1003937d;
  /* 10039374 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039376 jne 0x10039385 */
  if (!C.zf) goto L_10039385;
  /* 10039378 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 1003937b jmp 0x10039385 */
  goto L_10039385;
L_1003937d:;
  /* 1003937d or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 10039380 jmp 0x10039385 */
  goto L_10039385;
L_10039382:;
  /* 10039382 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_10039385:;
  /* 10039385 mov ecx, ebx */
  ECX = (EBX);
  /* 10039387 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 1003938d je 0x1003939b */
  if (C.zf) goto L_1003939b;
  /* 1003938f cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039395 jne 0x1003939d */
  if (!C.zf) goto L_1003939d;
  /* 10039397 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10039399 jmp 0x1003939d */
  goto L_1003939d;
L_1003939b:;
  /* 1003939b or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_1003939d:;
  /* 1003939d pop esi */
  ESI = (pop32());
  /* 1003939e test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 100393a4 pop ebx */
  EBX = (pop32());
  /* 100393a5 je 0x100393aa */
  if (C.zf) goto L_100393aa;
  /* 100393a7 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_100393aa:;
  /* 100393aa ret  */
  ESPCHK(0x10039322u, _esp0);
  ESP += 4; return;
}

/* FUN_100093ab @ 0x100393ab (117 bytes, 46 insns) */
void f_100393ab(void) {
  FTRACE(0x100393abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100393ab push ebp */
  push32((uint32_t)(EBP));
  /* 100393ac mov ebp, esp */
  EBP = (ESP);
  /* 100393ae push ecx */
  push32((uint32_t)(ECX));
  /* 100393af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100393b2 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 100393b5 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100393bb ja 0x100393c9 */
  if ((!C.cf&&!C.zf)) goto L_100393c9;
  /* 100393bd mov ecx, dword ptr [0x100409c0] */
  ECX = (r32((uint32_t)(0x100409c0)));
  /* 100393c3 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 100393c7 jmp 0x1003941b */
  goto L_1003941b;
L_100393c9:;
  /* 100393c9 mov ecx, eax */
  ECX = (EAX);
  /* 100393cb push esi */
  push32((uint32_t)(ESI));
  /* 100393cc mov esi, dword ptr [0x100409c0] */
  ESI = (r32((uint32_t)(0x100409c0)));
  /* 100393d2 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 100393d5 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 100393d8 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 100393dd pop esi */
  ESI = (pop32());
  /* 100393de je 0x100393ee */
  if (C.zf) goto L_100393ee;
  /* 100393e0 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 100393e4 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 100393e7 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 100393ea push 2 */
  push32((uint32_t)(0x2u));
  /* 100393ec jmp 0x100393f7 */
  goto L_100393f7;
L_100393ee:;
  /* 100393ee and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100393f2 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 100393f5 push 1 */
  push32((uint32_t)(0x1u));
L_100393f7:;
  /* 100393f7 pop eax */
  EAX = (pop32());
  /* 100393f8 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 100393fb push 1 */
  push32((uint32_t)(0x1u));
  /* 100393fd push 0 */
  push32((uint32_t)(0x0u));
  /* 100393ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10039401 push ecx */
  push32((uint32_t)(ECX));
  /* 10039402 push eax */
  push32((uint32_t)(EAX));
  /* 10039403 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10039406 push eax */
  push32((uint32_t)(EAX));
  /* 10039407 push 1 */
  push32((uint32_t)(0x1u));
  /* 10039409 call 0x1003c25d */
  push32(0x1003940eu); f_1003c25d();
  /* 1003940e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10039411 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10039413 jne 0x10039417 */
  if (!C.zf) goto L_10039417;
  /* 10039415 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10039416 ret  */
  ESPCHK(0x100393abu, _esp0);
  ESP += 4; return;
L_10039417:;
  /* 10039417 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_1003941b:;
  /* 1003941b and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1003941e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003941f ret  */
  ESPCHK(0x100393abu, _esp0);
  ESP += 4; return;
}

/* FUN_10009420 @ 0x10039420 (111 bytes, 44 insns) */
void f_10039420(void) {
  FTRACE(0x10039420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10039420 push ebx */
  push32((uint32_t)(EBX));
  /* 10039421 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10039423 cmp dword ptr [0x10046828], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10046828))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039429 jne 0x1003943e */
  if (!C.zf) goto L_1003943e;
  /* 1003942b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1003942f cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039432 jl 0x1003948d */
  if ((C.sf!=C.of)) goto L_1003948d;
  /* 10039434 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039437 jg 0x1003948d */
  if ((!C.zf&&C.sf==C.of)) goto L_1003948d;
  /* 10039439 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003943c pop ebx */
  EBX = (pop32());
  /* 1003943d ret  */
  ESPCHK(0x10039420u, _esp0);
  ESP += 4; return;
L_1003943e:;
  /* 1003943e push esi */
  push32((uint32_t)(ESI));
  /* 1003943f mov esi, 0x100469a4 */
  ESI = (0x100469a4u);
  /* 10039444 push edi */
  push32((uint32_t)(EDI));
  /* 10039445 push esi */
  push32((uint32_t)(ESI));
  /* 10039446 call dword ptr [0x1003e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e090))), 0x1003944cu);
  /* 1003944c cmp dword ptr [0x100469a0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100469a0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039452 mov edi, dword ptr [0x1003e08c] */
  EDI = (r32((uint32_t)(0x1003e08c)));
  /* 10039458 je 0x10039468 */
  if (C.zf) goto L_10039468;
  /* 1003945a push esi */
  push32((uint32_t)(ESI));
  /* 1003945b call edi */
  call_ind((uint32_t)(EDI), 0x1003945du);
  /* 1003945d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1003945f call 0x10039ff3 */
  push32(0x10039464u); f_10039ff3();
  /* 10039464 pop ecx */
  ECX = (pop32());
  /* 10039465 push 1 */
  push32((uint32_t)(0x1u));
  /* 10039467 pop ebx */
  EBX = (pop32());
L_10039468:;
  /* 10039468 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1003946c call 0x1003948f */
  push32(0x10039471u); f_1003948f();
  /* 10039471 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10039473 pop ecx */
  ECX = (pop32());
  /* 10039474 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10039478 je 0x10039484 */
  if (C.zf) goto L_10039484;
  /* 1003947a push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1003947c call 0x1003a054 */
  push32(0x10039481u); f_1003a054();
  /* 10039481 pop ecx */
  ECX = (pop32());
  /* 10039482 jmp 0x10039487 */
  goto L_10039487;
L_10039484:;
  /* 10039484 push esi */
  push32((uint32_t)(ESI));
  /* 10039485 call edi */
  call_ind((uint32_t)(EDI), 0x10039487u);
L_10039487:;
  /* 10039487 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1003948b pop edi */
  EDI = (pop32());
  /* 1003948c pop esi */
  ESI = (pop32());
L_1003948d:;
  /* 1003948d pop ebx */
  EBX = (pop32());
  /* 1003948e ret  */
  ESPCHK(0x10039420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000948f @ 0x1003948f (203 bytes, 78 insns) */
void f_1003948f(void) {
  FTRACE(0x1003948fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003948f push ebp */
  push32((uint32_t)(EBP));
  /* 10039490 mov ebp, esp */
  EBP = (ESP);
  /* 10039492 push ecx */
  push32((uint32_t)(ECX));
  /* 10039493 cmp dword ptr [0x10046828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10046828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003949a push ebx */
  push32((uint32_t)(EBX));
  /* 1003949b push esi */
  push32((uint32_t)(ESI));
  /* 1003949c push edi */
  push32((uint32_t)(EDI));
  /* 1003949d jne 0x100394bc */
  if (!C.zf) goto L_100394bc;
  /* 1003949f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100394a2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100394a5 jl 0x10039555 */
  if ((C.sf!=C.of)) goto L_10039555;
  /* 100394ab cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100394ae jg 0x10039555 */
  if ((!C.zf&&C.sf==C.of)) goto L_10039555;
  /* 100394b4 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100394b7 jmp 0x10039555 */
  goto L_10039555;
L_100394bc:;
  /* 100394bc mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 100394bf mov edi, 0x100 */
  EDI = (0x100u);
  /* 100394c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100394c6 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100394c8 pop esi */
  ESI = (pop32());
  /* 100394c9 jge 0x100394f0 */
  if ((C.sf==C.of)) goto L_100394f0;
  /* 100394cb cmp dword ptr [0x10040bd0], esi */
  { uint32_t _a=(r32((uint32_t)(0x10040bd0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100394d1 jle 0x100394de */
  if ((C.zf||C.sf!=C.of)) goto L_100394de;
  /* 100394d3 push esi */
  push32((uint32_t)(ESI));
  /* 100394d4 push ebx */
  push32((uint32_t)(EBX));
  /* 100394d5 call 0x100393ab */
  push32(0x100394dau); f_100393ab();
  /* 100394da pop ecx */
  ECX = (pop32());
  /* 100394db pop ecx */
  ECX = (pop32());
  /* 100394dc jmp 0x100394e8 */
  goto L_100394e8;
L_100394de:;
  /* 100394de mov eax, dword ptr [0x100409c0] */
  EAX = (r32((uint32_t)(0x100409c0)));
  /* 100394e3 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 100394e6 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_100394e8:;
  /* 100394e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100394ea jne 0x100394f0 */
  if (!C.zf) goto L_100394f0;
L_100394ec:;
  /* 100394ec mov eax, ebx */
  EAX = (EBX);
  /* 100394ee jmp 0x10039555 */
  goto L_10039555;
L_100394f0:;
  /* 100394f0 mov edx, dword ptr [0x100409c0] */
  EDX = (r32((uint32_t)(0x100409c0)));
  /* 100394f6 mov eax, ebx */
  EAX = (EBX);
  /* 100394f8 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 100394fb movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 100394fe test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 10039503 je 0x10039514 */
  if (C.zf) goto L_10039514;
  /* 10039505 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 10039509 push 2 */
  push32((uint32_t)(0x2u));
  /* 1003950b mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 1003950e mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 10039511 pop eax */
  EAX = (pop32());
  /* 10039512 jmp 0x1003951d */
  goto L_1003951d;
L_10039514:;
  /* 10039514 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 10039518 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 1003951b mov eax, esi */
  EAX = (ESI);
L_1003951d:;
  /* 1003951d push esi */
  push32((uint32_t)(ESI));
  /* 1003951e push 0 */
  push32((uint32_t)(0x0u));
  /* 10039520 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10039523 push 3 */
  push32((uint32_t)(0x3u));
  /* 10039525 push ecx */
  push32((uint32_t)(ECX));
  /* 10039526 push eax */
  push32((uint32_t)(EAX));
  /* 10039527 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1003952a push eax */
  push32((uint32_t)(EAX));
  /* 1003952b push edi */
  push32((uint32_t)(EDI));
  /* 1003952c push dword ptr [0x10046828] */
  push32((uint32_t)(r32((uint32_t)(0x10046828))));
  /* 10039532 call 0x1003c3a6 */
  push32(0x10039537u); f_1003c3a6();
  /* 10039537 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003953a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003953c je 0x100394ec */
  if (C.zf) goto L_100394ec;
  /* 1003953e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039540 jne 0x10039548 */
  if (!C.zf) goto L_10039548;
  /* 10039542 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10039546 jmp 0x10039555 */
  goto L_10039555;
L_10039548:;
  /* 10039548 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 1003954c movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10039550 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10039553 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10039555:;
  /* 10039555 pop edi */
  EDI = (pop32());
  /* 10039556 pop esi */
  ESI = (pop32());
  /* 10039557 pop ebx */
  EBX = (pop32());
  /* 10039558 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10039559 ret  */
  ESPCHK(0x1003948fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000955a @ 0x1003955a (73 bytes, 36 insns) */
void f_1003955a(void) {
  FTRACE(0x1003955au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003955a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1003955e push esi */
  push32((uint32_t)(ESI));
  /* 1003955f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10039561 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10039562 pop ecx */
  ECX = (pop32());
  /* 10039563 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10039565 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10039567 mov esi, eax */
  ESI = (EAX);
  /* 10039569 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1003956d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1003956e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10039570 pop ecx */
  ECX = (pop32());
  /* 10039571 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10039575 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10039577 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1003957a shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1003957c not edx */
  EDX = (~(EDX));
  /* 1003957e test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 10039581 jne 0x1003959f */
  if (!C.zf) goto L_1003959f;
  /* 10039583 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10039584 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039587 jge 0x1003959a */
  if ((C.sf==C.of)) goto L_1003959a;
  /* 10039589 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_1003958c:;
  /* 1003958c cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003958f jne 0x1003959f */
  if (!C.zf) goto L_1003959f;
  /* 10039591 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10039592 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10039595 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039598 jl 0x1003958c */
  if ((C.sf!=C.of)) goto L_1003958c;
L_1003959a:;
  /* 1003959a push 1 */
  push32((uint32_t)(0x1u));
  /* 1003959c pop eax */
  EAX = (pop32());
  /* 1003959d pop esi */
  ESI = (pop32());
  /* 1003959e ret  */
  ESPCHK(0x1003955au, _esp0);
  ESP += 4; return;
L_1003959f:;
  /* 1003959f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100395a1 pop esi */
  ESI = (pop32());
  /* 100395a2 ret  */
  ESPCHK(0x1003955au, _esp0);
  ESP += 4; return;
}

/* FUN_100095a3 @ 0x100395a3 (86 bytes, 43 insns) */
void f_100395a3(void) {
  FTRACE(0x100395a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100395a3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100395a7 push ebx */
  push32((uint32_t)(EBX));
  /* 100395a8 push esi */
  push32((uint32_t)(ESI));
  /* 100395a9 push edi */
  push32((uint32_t)(EDI));
  /* 100395aa push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100395ac mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 100395b0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100395b1 pop ecx */
  ECX = (pop32());
  /* 100395b2 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100395b4 mov esi, eax */
  ESI = (EAX);
  /* 100395b6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 100395ba cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100395bb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100395bd lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 100395c0 push edi */
  push32((uint32_t)(EDI));
  /* 100395c1 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100395c3 pop ecx */
  ECX = (pop32());
  /* 100395c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100395c6 pop eax */
  EAX = (pop32());
  /* 100395c7 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100395c9 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 100395cb push eax */
  push32((uint32_t)(EAX));
  /* 100395cc push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 100395ce call 0x1003c5f5 */
  push32(0x100395d3u); f_1003c5f5();
  /* 100395d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100395d6 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100395d7 js 0x100395f5 */
  if (C.sf) goto L_100395f5;
  /* 100395d9 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_100395dc:;
  /* 100395dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100395de je 0x100395f5 */
  if (C.zf) goto L_100395f5;
  /* 100395e0 push edi */
  push32((uint32_t)(EDI));
  /* 100395e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100395e3 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 100395e5 call 0x1003c5f5 */
  push32(0x100395eau); f_1003c5f5();
  /* 100395ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100395ed dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100395ee sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100395f1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100395f3 jge 0x100395dc */
  if ((C.sf==C.of)) goto L_100395dc;
L_100395f5:;
  /* 100395f5 pop edi */
  EDI = (pop32());
  /* 100395f6 pop esi */
  ESI = (pop32());
  /* 100395f7 pop ebx */
  EBX = (pop32());
  /* 100395f8 ret  */
  ESPCHK(0x100395a3u, _esp0);
  ESP += 4; return;
}

/* FUN_100095f9 @ 0x100395f9 (140 bytes, 71 insns) */
void f_100395f9(void) {
  FTRACE(0x100395f9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100395f9 push ebp */
  push32((uint32_t)(EBP));
  /* 100395fa mov ebp, esp */
  EBP = (ESP);
  /* 100395fc push ecx */
  push32((uint32_t)(ECX));
  /* 100395fd push ecx */
  push32((uint32_t)(ECX));
  /* 100395fe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10039601 push ebx */
  push32((uint32_t)(EBX));
  /* 10039602 push esi */
  push32((uint32_t)(ESI));
  /* 10039603 push edi */
  push32((uint32_t)(EDI));
  /* 10039604 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 10039607 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10039609 pop ecx */
  ECX = (pop32());
  /* 1003960a and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1003960e lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 10039611 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10039613 mov eax, ebx */
  EAX = (EBX);
  /* 10039615 pop esi */
  ESI = (pop32());
  /* 10039616 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10039617 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10039619 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1003961b mov ecx, eax */
  ECX = (EAX);
  /* 1003961d mov eax, ebx */
  EAX = (EBX);
  /* 1003961f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10039620 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10039622 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10039625 pop esi */
  ESI = (pop32());
  /* 10039626 push 1 */
  push32((uint32_t)(0x1u));
  /* 10039628 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1003962b lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 1003962e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10039631 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10039633 pop edx */
  EDX = (pop32());
  /* 10039634 mov ecx, esi */
  ECX = (ESI);
  /* 10039636 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10039638 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 1003963a je 0x1003965d */
  if (C.zf) goto L_1003965d;
  /* 1003963c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1003963d push ebx */
  push32((uint32_t)(EBX));
  /* 1003963e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10039641 call 0x1003955a */
  push32(0x10039646u); f_1003955a();
  /* 10039646 pop ecx */
  ECX = (pop32());
  /* 10039647 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10039649 pop ecx */
  ECX = (pop32());
  /* 1003964a jne 0x1003965a */
  if (!C.zf) goto L_1003965a;
  /* 1003964c push edi */
  push32((uint32_t)(EDI));
  /* 1003964d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10039650 call 0x100395a3 */
  push32(0x10039655u); f_100395a3();
  /* 10039655 pop ecx */
  ECX = (pop32());
  /* 10039656 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10039659 pop ecx */
  ECX = (pop32());
L_1003965a:;
  /* 1003965a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1003965d:;
  /* 1003965d or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10039660 mov ecx, esi */
  ECX = (ESI);
  /* 10039662 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10039664 push 3 */
  push32((uint32_t)(0x3u));
  /* 10039666 pop ecx */
  ECX = (pop32());
  /* 10039667 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10039669 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1003966c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1003966d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003966f jge 0x1003967d */
  if ((C.sf==C.of)) goto L_1003967d;
  /* 10039671 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10039674 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10039676 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10039679 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003967b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_1003967d:;
  /* 1003967d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10039680 pop edi */
  EDI = (pop32());
  /* 10039681 pop esi */
  ESI = (pop32());
  /* 10039682 pop ebx */
  EBX = (pop32());
  /* 10039683 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10039684 ret  */
  ESPCHK(0x100395f9u, _esp0);
  ESP += 4; return;
}

/* FUN_10009685 @ 0x10039685 (27 bytes, 13 insns) */
void f_10039685(void) {
  FTRACE(0x10039685u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10039685 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10039689 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1003968d push esi */
  push32((uint32_t)(ESI));
  /* 1003968e push 3 */
  push32((uint32_t)(0x3u));
  /* 10039690 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10039692 pop edx */
  EDX = (pop32());
L_10039693:;
  /* 10039693 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 10039695 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 10039698 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003969b dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1003969c jne 0x10039693 */
  if (!C.zf) goto L_10039693;
  /* 1003969e pop esi */
  ESI = (pop32());
  /* 1003969f ret  */
  ESPCHK(0x10039685u, _esp0);
  ESP += 4; return;
}

/* FUN_100096a0 @ 0x100396a0 (12 bytes, 8 insns) */
void f_100396a0(void) {
  FTRACE(0x100396a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100396a0 push edi */
  push32((uint32_t)(EDI));
  /* 100396a1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 100396a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100396a7 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100396a8 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100396a9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100396aa pop edi */
  EDI = (pop32());
  /* 100396ab ret  */
  ESPCHK(0x100396a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096ac @ 0x100396ac (27 bytes, 13 insns) */
void f_100396ac(void) {
  FTRACE(0x100396acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100396ac mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100396b0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_100396b2:;
  /* 100396b2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100396b5 jne 0x100396c4 */
  if (!C.zf) goto L_100396c4;
  /* 100396b7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100396b8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100396bb cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100396be jl 0x100396b2 */
  if ((C.sf!=C.of)) goto L_100396b2;
  /* 100396c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 100396c2 pop eax */
  EAX = (pop32());
  /* 100396c3 ret  */
  ESPCHK(0x100396acu, _esp0);
  ESP += 4; return;
L_100396c4:;
  /* 100396c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100396c6 ret  */
  ESPCHK(0x100396acu, _esp0);
  ESP += 4; return;
}

/* FUN_100096c7 @ 0x100396c7 (141 bytes, 64 insns) */
void f_100396c7(void) {
  FTRACE(0x100396c7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100396c7 push ebp */
  push32((uint32_t)(EBP));
  /* 100396c8 mov ebp, esp */
  EBP = (ESP);
  /* 100396ca sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100396cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100396d0 push ebx */
  push32((uint32_t)(EBX));
  /* 100396d1 push esi */
  push32((uint32_t)(ESI));
  /* 100396d2 push edi */
  push32((uint32_t)(EDI));
  /* 100396d3 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100396d5 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 100396d8 pop ebx */
  EBX = (pop32());
  /* 100396d9 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 100396dc cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100396dd mov ecx, ebx */
  ECX = (EBX);
  /* 100396df mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 100396e6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100396e8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 100396eb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100396ee cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100396ef idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100396f1 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 100396f5 mov ecx, edx */
  ECX = (EDX);
  /* 100396f7 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 100396f9 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100396fb not esi */
  ESI = (~(ESI));
L_100396fd:;
  /* 100396fd mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 100396ff mov ecx, eax */
  ECX = (EAX);
  /* 10039701 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10039703 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10039706 mov ecx, edx */
  ECX = (EDX);
  /* 10039708 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1003970a or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1003970d mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1003970f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10039712 mov ecx, ebx */
  ECX = (EBX);
  /* 10039714 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10039717 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10039719 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1003971c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1003971f jne 0x100396fd */
  if (!C.zf) goto L_100396fd;
  /* 10039721 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 10039724 push 2 */
  push32((uint32_t)(0x2u));
  /* 10039726 pop ebx */
  EBX = (pop32());
  /* 10039727 mov esi, edi */
  ESI = (EDI);
  /* 10039729 push 8 */
  push32((uint32_t)(0x8u));
  /* 1003972b pop ecx */
  ECX = (pop32());
  /* 1003972c shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_1003972f:;
  /* 1003972f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039731 jl 0x10039742 */
  if ((C.sf!=C.of)) goto L_10039742;
  /* 10039733 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10039736 mov eax, ecx */
  EAX = (ECX);
  /* 10039738 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003973a mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1003973d mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 10039740 jmp 0x10039749 */
  goto L_10039749;
L_10039742:;
  /* 10039742 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10039745 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_10039749:;
  /* 10039749 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1003974a sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003974d jns 0x1003972f */
  if (!C.sf) goto L_1003972f;
  /* 1003974f pop edi */
  EDI = (pop32());
  /* 10039750 pop esi */
  ESI = (pop32());
  /* 10039751 pop ebx */
  EBX = (pop32());
  /* 10039752 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10039753 ret  */
  ESPCHK(0x100396c7u, _esp0);
  ESP += 4; return;
}

/* FUN_10009754 @ 0x10039754 (364 bytes, 138 insns) */
void f_10039754(void) {
  FTRACE(0x10039754u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10039754 push ebp */
  push32((uint32_t)(EBP));
  /* 10039755 mov ebp, esp */
  EBP = (ESP);
  /* 10039757 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003975a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003975d push ebx */
  push32((uint32_t)(EBX));
  /* 1003975e push esi */
  push32((uint32_t)(ESI));
  /* 1003975f push edi */
  push32((uint32_t)(EDI));
  /* 10039760 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 10039764 mov ebx, ecx */
  EBX = (ECX);
  /* 10039766 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1003976c mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1003976f mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 10039772 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10039775 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 10039778 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 1003977b mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1003977e and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 10039784 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003978a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1003978d shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10039790 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039796 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10039799 jne 0x100397c1 */
  if (!C.zf) goto L_100397c1;
  /* 1003979b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1003979e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100397a0 push eax */
  push32((uint32_t)(EAX));
  /* 100397a1 call 0x100396ac */
  push32(0x100397a6u); f_100396ac();
  /* 100397a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100397a8 pop ecx */
  ECX = (pop32());
  /* 100397a9 jne 0x10039880 */
  if (!C.zf) goto L_10039880;
  /* 100397af lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100397b2 push eax */
  push32((uint32_t)(EAX));
  /* 100397b3 call 0x100396a0 */
  push32(0x100397b8u); f_100396a0();
  /* 100397b8 pop ecx */
  ECX = (pop32());
L_100397b9:;
  /* 100397b9 push 2 */
  push32((uint32_t)(0x2u));
L_100397bb:;
  /* 100397bb pop eax */
  EAX = (pop32());
  /* 100397bc jmp 0x10039882 */
  goto L_10039882;
L_100397c1:;
  /* 100397c1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100397c4 push eax */
  push32((uint32_t)(EAX));
  /* 100397c5 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 100397c8 push eax */
  push32((uint32_t)(EAX));
  /* 100397c9 call 0x10039685 */
  push32(0x100397ceu); f_10039685();
  /* 100397ce push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 100397d1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100397d4 push eax */
  push32((uint32_t)(EAX));
  /* 100397d5 call 0x100395f9 */
  push32(0x100397dau); f_100395f9();
  /* 100397da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100397dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100397df je 0x100397e2 */
  if (C.zf) goto L_100397e2;
  /* 100397e1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_100397e2:;
  /* 100397e2 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 100397e5 mov ecx, eax */
  ECX = (EAX);
  /* 100397e7 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100397ea cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100397ec jge 0x100397fa */
  if ((C.sf==C.of)) goto L_100397fa;
  /* 100397ee lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100397f1 push eax */
  push32((uint32_t)(EAX));
  /* 100397f2 call 0x100396a0 */
  push32(0x100397f7u); f_100396a0();
  /* 100397f7 pop ecx */
  ECX = (pop32());
  /* 100397f8 jmp 0x10039836 */
  goto L_10039836;
L_100397fa:;
  /* 100397fa cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100397fc jg 0x1003983d */
  if ((!C.zf&&C.sf==C.of)) goto L_1003983d;
  /* 100397fe sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10039800 mov esi, eax */
  ESI = (EAX);
  /* 10039802 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10039805 push eax */
  push32((uint32_t)(EAX));
  /* 10039806 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10039809 push eax */
  push32((uint32_t)(EAX));
  /* 1003980a call 0x10039685 */
  push32(0x1003980fu); f_10039685();
  /* 1003980f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10039812 push esi */
  push32((uint32_t)(ESI));
  /* 10039813 push eax */
  push32((uint32_t)(EAX));
  /* 10039814 call 0x100396c7 */
  push32(0x10039819u); f_100396c7();
  /* 10039819 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 1003981c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1003981f push eax */
  push32((uint32_t)(EAX));
  /* 10039820 call 0x100395f9 */
  push32(0x10039825u); f_100395f9();
  /* 10039825 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 10039828 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10039829 push eax */
  push32((uint32_t)(EAX));
  /* 1003982a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1003982d push eax */
  push32((uint32_t)(EAX));
  /* 1003982e call 0x100396c7 */
  push32(0x10039833u); f_100396c7();
  /* 10039833 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10039836:;
  /* 10039836 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10039838 jmp 0x100397b9 */
  goto L_100397b9;
L_1003983d:;
  /* 1003983d cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003983f jl 0x10039869 */
  if ((C.sf!=C.of)) goto L_10039869;
  /* 10039841 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10039844 push eax */
  push32((uint32_t)(EAX));
  /* 10039845 call 0x100396a0 */
  push32(0x1003984au); f_100396a0();
  /* 1003984a push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 1003984d or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 10039851 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10039854 push eax */
  push32((uint32_t)(EAX));
  /* 10039855 call 0x100396c7 */
  push32(0x1003985au); f_100396c7();
  /* 1003985a mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 1003985d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10039860 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10039862 push 1 */
  push32((uint32_t)(0x1u));
  /* 10039864 jmp 0x100397bb */
  goto L_100397bb;
L_10039869:;
  /* 10039869 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 1003986c mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 1003986f and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 10039873 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10039876 push eax */
  push32((uint32_t)(EAX));
  /* 10039877 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10039879 call 0x100396c7 */
  push32(0x1003987eu); f_100396c7();
  /* 1003987e pop ecx */
  ECX = (pop32());
  /* 1003987f pop ecx */
  ECX = (pop32());
L_10039880:;
  /* 10039880 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10039882:;
  /* 10039882 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10039884 pop ecx */
  ECX = (pop32());
  /* 10039885 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10039888 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 1003988b shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1003988d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10039890 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10039892 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10039894 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 1003989a or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1003989c or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 1003989f cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100398a2 jne 0x100398b1 */
  if (!C.zf) goto L_100398b1;
  /* 100398a4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100398a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 100398aa mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 100398ad mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 100398af jmp 0x100398bb */
  goto L_100398bb;
L_100398b1:;
  /* 100398b1 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100398b4 jne 0x100398bb */
  if (!C.zf) goto L_100398bb;
  /* 100398b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100398b9 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_100398bb:;
  /* 100398bb pop edi */
  EDI = (pop32());
  /* 100398bc pop esi */
  ESI = (pop32());
  /* 100398bd pop ebx */
  EBX = (pop32());
  /* 100398be leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100398bf ret  */
  ESPCHK(0x10039754u, _esp0);
  ESP += 4; return;
}

/* FUN_100098c0 @ 0x100398c0 (22 bytes, 6 insns) */
void f_100398c0(void) {
  FTRACE(0x100398c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100398c0 push 0x10040be0 */
  push32((uint32_t)(0x10040be0u));
  /* 100398c5 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100398c9 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100398cd call 0x10039754 */
  push32(0x100398d2u); f_10039754();
  /* 100398d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100398d5 ret  */
  ESPCHK(0x100398c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100098d6 @ 0x100398d6 (22 bytes, 6 insns) */
void f_100398d6(void) {
  FTRACE(0x100398d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100398d6 push 0x10040bf8 */
  push32((uint32_t)(0x10040bf8u));
  /* 100398db push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100398df push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100398e3 call 0x10039754 */
  push32(0x100398e8u); f_10039754();
  /* 100398e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100398eb ret  */
  ESPCHK(0x100398d6u, _esp0);
  ESP += 4; return;
}

/* FUN_100098ec @ 0x100398ec (45 bytes, 21 insns) */
void f_100398ec(void) {
  FTRACE(0x100398ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100398ec push ebp */
  push32((uint32_t)(EBP));
  /* 100398ed mov ebp, esp */
  EBP = (ESP);
  /* 100398ef sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100398f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100398f4 push eax */
  push32((uint32_t)(EAX));
  /* 100398f5 push eax */
  push32((uint32_t)(EAX));
  /* 100398f6 push eax */
  push32((uint32_t)(EAX));
  /* 100398f7 push eax */
  push32((uint32_t)(EAX));
  /* 100398f8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100398fb lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 100398fe push eax */
  push32((uint32_t)(EAX));
  /* 100398ff lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10039902 push eax */
  push32((uint32_t)(EAX));
  /* 10039903 call 0x1003c796 */
  push32(0x10039908u); f_1003c796();
  /* 10039908 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1003990b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1003990e push eax */
  push32((uint32_t)(EAX));
  /* 1003990f call 0x100398c0 */
  push32(0x10039914u); f_100398c0();
  /* 10039914 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10039917 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10039918 ret  */
  ESPCHK(0x100398ecu, _esp0);
  ESP += 4; return;
}

/* FUN_10009919 @ 0x10039919 (45 bytes, 21 insns) */
void f_10039919(void) {
  FTRACE(0x10039919u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10039919 push ebp */
  push32((uint32_t)(EBP));
  /* 1003991a mov ebp, esp */
  EBP = (ESP);
  /* 1003991c sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003991f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10039921 push eax */
  push32((uint32_t)(EAX));
  /* 10039922 push eax */
  push32((uint32_t)(EAX));
  /* 10039923 push eax */
  push32((uint32_t)(EAX));
  /* 10039924 push eax */
  push32((uint32_t)(EAX));
  /* 10039925 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10039928 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1003992b push eax */
  push32((uint32_t)(EAX));
  /* 1003992c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1003992f push eax */
  push32((uint32_t)(EAX));
  /* 10039930 call 0x1003c796 */
  push32(0x10039935u); f_1003c796();
  /* 10039935 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10039938 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1003993b push eax */
  push32((uint32_t)(EAX));
  /* 1003993c call 0x100398d6 */
  push32(0x10039941u); f_100398d6();
  /* 10039941 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10039944 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10039945 ret  */
  ESPCHK(0x10039919u, _esp0);
  ESP += 4; return;
}

/* FUN_10009946 @ 0x10039946 (119 bytes, 57 insns) */
void f_10039946(void) {
  FTRACE(0x10039946u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10039946 push ebp */
  push32((uint32_t)(EBP));
  /* 10039947 mov ebp, esp */
  EBP = (ESP);
  /* 10039949 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1003994c push ebx */
  push32((uint32_t)(EBX));
  /* 1003994d mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 10039950 push esi */
  push32((uint32_t)(ESI));
  /* 10039951 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10039954 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 10039957 push edi */
  push32((uint32_t)(EDI));
  /* 10039958 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 1003995b mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 1003995e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10039960 mov eax, edi */
  EAX = (EDI);
  /* 10039962 jle 0x10039983 */
  if ((C.zf||C.sf!=C.of)) goto L_10039983;
  /* 10039964 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10039967 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10039969:;
  /* 10039969 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1003996b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1003996d je 0x10039975 */
  if (C.zf) goto L_10039975;
  /* 1003996f movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 10039972 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10039973 jmp 0x10039978 */
  goto L_10039978;
L_10039975:;
  /* 10039975 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10039977 pop edx */
  EDX = (pop32());
L_10039978:;
  /* 10039978 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1003997a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1003997b dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 1003997e jne 0x10039969 */
  if (!C.zf) goto L_10039969;
  /* 10039980 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_10039983:;
  /* 10039983 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10039986 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10039988 jl 0x1003999c */
  if ((C.sf!=C.of)) goto L_1003999c;
  /* 1003998a cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003998d jl 0x1003999c */
  if ((C.sf!=C.of)) goto L_1003999c;
L_1003998f:;
  /* 1003998f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10039990 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10039993 jne 0x1003999a */
  if (!C.zf) goto L_1003999a;
  /* 10039995 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 10039998 jmp 0x1003998f */
  goto L_1003998f;
L_1003999a:;
  /* 1003999a inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_1003999c:;
  /* 1003999c cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003999f jne 0x100399a6 */
  if (!C.zf) goto L_100399a6;
  /* 100399a1 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 100399a4 jmp 0x100399b8 */
  goto L_100399b8;
L_100399a6:;
  /* 100399a6 push edi */
  push32((uint32_t)(EDI));
  /* 100399a7 call 0x10039020 */
  push32(0x100399acu); f_10039020();
  /* 100399ac inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100399ad push eax */
  push32((uint32_t)(EAX));
  /* 100399ae push edi */
  push32((uint32_t)(EDI));
  /* 100399af push esi */
  push32((uint32_t)(ESI));
  /* 100399b0 call 0x10039c20 */
  push32(0x100399b5u); f_10039c20();
  /* 100399b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100399b8:;
  /* 100399b8 pop edi */
  EDI = (pop32());
  /* 100399b9 pop esi */
  ESI = (pop32());
  /* 100399ba pop ebx */
  EBX = (pop32());
  /* 100399bb pop ebp */
  EBP = (pop32());
  /* 100399bc ret  */
  ESPCHK(0x10039946u, _esp0);
  ESP += 4; return;
}

/* FUN_100099bd @ 0x100399bd (92 bytes, 41 insns) */
void f_100399bd(void) {
  FTRACE(0x100399bdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100399bd push ebp */
  push32((uint32_t)(EBP));
  /* 100399be mov ebp, esp */
  EBP = (ESP);
  /* 100399c0 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100399c3 push esi */
  push32((uint32_t)(ESI));
  /* 100399c4 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100399c7 push edi */
  push32((uint32_t)(EDI));
  /* 100399c8 push eax */
  push32((uint32_t)(EAX));
  /* 100399c9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100399cc push eax */
  push32((uint32_t)(EAX));
  /* 100399cd call 0x10039a19 */
  push32(0x100399d2u); f_10039a19();
  /* 100399d2 pop ecx */
  ECX = (pop32());
  /* 100399d3 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 100399d6 pop ecx */
  ECX = (pop32());
  /* 100399d7 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 100399da push eax */
  push32((uint32_t)(EAX));
  /* 100399db push 0 */
  push32((uint32_t)(0x0u));
  /* 100399dd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 100399df sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100399e2 mov edi, esp */
  EDI = (ESP);
  /* 100399e4 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100399e5 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100399e6 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 100399e8 call 0x1003cc67 */
  push32(0x100399edu); f_1003cc67();
  /* 100399ed mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 100399f0 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 100399f3 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 100399f6 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 100399fa mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100399fc movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 10039a00 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 10039a03 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 10039a06 push eax */
  push32((uint32_t)(EAX));
  /* 10039a07 push edi */
  push32((uint32_t)(EDI));
  /* 10039a08 call 0x10039ad0 */
  push32(0x10039a0du); f_10039ad0();
  /* 10039a0d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10039a10 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 10039a13 mov eax, esi */
  EAX = (ESI);
  /* 10039a15 pop edi */
  EDI = (pop32());
  /* 10039a16 pop esi */
  ESI = (pop32());
  /* 10039a17 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10039a18 ret  */
  ESPCHK(0x100399bdu, _esp0);
  ESP += 4; return;
}

/* FUN_10009a19 @ 0x10039a19 (182 bytes, 70 insns) */
void f_10039a19(void) {
  FTRACE(0x10039a19u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10039a19 push ebp */
  push32((uint32_t)(EBP));
  /* 10039a1a mov ebp, esp */
  EBP = (ESP);
  /* 10039a1c push ecx */
  push32((uint32_t)(ECX));
  /* 10039a1d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10039a20 push ebx */
  push32((uint32_t)(EBX));
  /* 10039a21 push esi */
  push32((uint32_t)(ESI));
  /* 10039a22 push edi */
  push32((uint32_t)(EDI));
  /* 10039a23 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 10039a27 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 10039a2c mov ecx, eax */
  ECX = (EAX);
  /* 10039a2e and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10039a33 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10039a36 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10039a38 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10039a3b mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10039a3e mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 10039a40 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 10039a43 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10039a48 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10039a4d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10039a4f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 10039a52 je 0x10039a67 */
  if (C.zf) goto L_10039a67;
  /* 10039a54 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039a56 je 0x10039a60 */
  if (C.zf) goto L_10039a60;
  /* 10039a58 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 10039a5e jmp 0x10039a88 */
  goto L_10039a88;
L_10039a60:;
  /* 10039a60 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 10039a65 jmp 0x10039a88 */
  goto L_10039a88;
L_10039a67:;
  /* 10039a67 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10039a69 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039a6b jne 0x10039a7f */
  if (!C.zf) goto L_10039a7f;
  /* 10039a6d cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039a6f jne 0x10039a7f */
  if (!C.zf) goto L_10039a7f;
  /* 10039a71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10039a74 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 10039a77 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 10039a79 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 10039a7d jmp 0x10039aca */
  goto L_10039aca;
L_10039a7f:;
  /* 10039a7f lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 10039a85 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_10039a88:;
  /* 10039a88 mov ecx, edx */
  ECX = (EDX);
  /* 10039a8a shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 10039a8d shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 10039a90 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10039a92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10039a95 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 10039a98 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 10039a9b mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10039a9e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10039aa0:;
  /* 10039aa0 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 10039aa2 jne 0x10039ac1 */
  if (!C.zf) goto L_10039ac1;
  /* 10039aa4 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10039aa6 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10039aa8 mov ebx, edx */
  EBX = (EDX);
  /* 10039aaa shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 10039aad or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 10039aaf lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 10039ab2 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10039ab4 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 10039ab7 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10039abd mov ecx, ebx */
  ECX = (EBX);
  /* 10039abf jmp 0x10039aa0 */
  goto L_10039aa0;
L_10039ac1:;
  /* 10039ac1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10039ac4 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10039ac6 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_10039aca:;
  /* 10039aca pop edi */
  EDI = (pop32());
  /* 10039acb pop esi */
  ESI = (pop32());
  /* 10039acc pop ebx */
  EBX = (pop32());
  /* 10039acd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10039ace ret  */
  ESPCHK(0x10039a19u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ad0 @ 0x10039ad0 (7 bytes, 3 insns) */
void f_10039ad0(void) {
  FTRACE(0x10039ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10039ad0 push edi */
  push32((uint32_t)(EDI));
  /* 10039ad1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10039ad5 jmp 0x10039b41 */
  jmp_ind(0x10039b41u); return;
}

/* FUN_10009ae0 @ 0x10039ae0 (224 bytes, 84 insns) */
void f_10039ae0(void) {
  FTRACE(0x10039ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10039ae0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10039ae4 push edi */
  push32((uint32_t)(EDI));
  /* 10039ae5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10039aeb je 0x10039afc */
  if (C.zf) goto L_10039afc;
L_10039aed:;
  /* 10039aed mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10039aef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10039af0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10039af2 je 0x10039b2f */
  if (C.zf) goto L_10039b2f;
  /* 10039af4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10039afa jne 0x10039aed */
  if (!C.zf) goto L_10039aed;
L_10039afc:;
  /* 10039afc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10039afe mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10039b03 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10039b05 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10039b08 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10039b0a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10039b0d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10039b12 je 0x10039afc */
  if (C.zf) goto L_10039afc;
  /* 10039b14 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10039b17 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10039b19 je 0x10039b3e */
  if (C.zf) goto L_10039b3e;
  /* 10039b1b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10039b1d je 0x10039b39 */
  if (C.zf) goto L_10039b39;
  /* 10039b1f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10039b24 je 0x10039b34 */
  if (C.zf) goto L_10039b34;
  /* 10039b26 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10039b2b je 0x10039b2f */
  if (C.zf) goto L_10039b2f;
  /* 10039b2d jmp 0x10039afc */
  goto L_10039afc;
L_10039b2f:;
  /* 10039b2f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10039b32 jmp 0x10039b41 */
  goto L_10039b41;
L_10039b34:;
  /* 10039b34 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10039b37 jmp 0x10039b41 */
  goto L_10039b41;
L_10039b39:;
  /* 10039b39 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10039b3c jmp 0x10039b41 */
  goto L_10039b41;
L_10039b3e:;
  /* 10039b3e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10039b41:;
  /* 10039b41 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10039b45 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10039b4b je 0x10039b66 */
  if (C.zf) goto L_10039b66;
L_10039b4d:;
  /* 10039b4d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10039b4f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10039b50 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10039b52 je 0x10039bb8 */
  if (C.zf) goto L_10039bb8;
  /* 10039b54 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10039b56 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10039b57 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10039b5d jne 0x10039b4d */
  if (!C.zf) goto L_10039b4d;
  /* 10039b5f jmp 0x10039b66 */
  goto L_10039b66;
L_10039b61:;
  /* 10039b61 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10039b63 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10039b66:;
  /* 10039b66 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10039b6b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10039b6d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10039b6f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10039b72 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10039b74 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10039b76 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10039b79 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10039b7e je 0x10039b61 */
  if (C.zf) goto L_10039b61;
  /* 10039b80 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10039b82 je 0x10039bb8 */
  if (C.zf) goto L_10039bb8;
  /* 10039b84 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10039b86 je 0x10039baf */
  if (C.zf) goto L_10039baf;
  /* 10039b88 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10039b8e je 0x10039ba2 */
  if (C.zf) goto L_10039ba2;
  /* 10039b90 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10039b96 je 0x10039b9a */
  if (C.zf) goto L_10039b9a;
  /* 10039b98 jmp 0x10039b61 */
  goto L_10039b61;
L_10039b9a:;
  /* 10039b9a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10039b9c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10039ba0 pop edi */
  EDI = (pop32());
  /* 10039ba1 ret  */
  ESPCHK(0x10039ae0u, _esp0);
  ESP += 4; return;
L_10039ba2:;
  /* 10039ba2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10039ba5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10039ba9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10039bad pop edi */
  EDI = (pop32());
  /* 10039bae ret  */
  ESPCHK(0x10039ae0u, _esp0);
  ESP += 4; return;
L_10039baf:;
  /* 10039baf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10039bb2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10039bb6 pop edi */
  EDI = (pop32());
  /* 10039bb7 ret  */
  ESPCHK(0x10039ae0u, _esp0);
  ESP += 4; return;
L_10039bb8:;
  /* 10039bb8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10039bba mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10039bbe pop edi */
  EDI = (pop32());
  /* 10039bbf ret  */
  ESPCHK(0x10039ae0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10039bc0 (88 bytes, 40 insns) */
void f_10039bc0(void) {
  FTRACE(0x10039bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10039bc0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10039bc4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10039bc8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10039bca je 0x10039c13 */
  if (C.zf) goto L_10039c13;
  /* 10039bcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10039bce mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10039bd2 push edi */
  push32((uint32_t)(EDI));
  /* 10039bd3 mov edi, ecx */
  EDI = (ECX);
  /* 10039bd5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039bd8 jb 0x10039c07 */
  if (C.cf) goto L_10039c07;
  /* 10039bda neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10039bdc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10039bdf je 0x10039be9 */
  if (C.zf) goto L_10039be9;
  /* 10039be1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10039be3:;
  /* 10039be3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10039be5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10039be6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10039be7 jne 0x10039be3 */
  if (!C.zf) goto L_10039be3;
L_10039be9:;
  /* 10039be9 mov ecx, eax */
  ECX = (EAX);
  /* 10039beb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10039bee add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10039bf0 mov ecx, eax */
  ECX = (EAX);
  /* 10039bf2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10039bf5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10039bf7 mov ecx, edx */
  ECX = (EDX);
  /* 10039bf9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10039bfc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10039bff je 0x10039c07 */
  if (C.zf) goto L_10039c07;
  /* 10039c01 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10039c03 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10039c05 je 0x10039c0d */
  if (C.zf) goto L_10039c0d;
L_10039c07:;
  /* 10039c07 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10039c09 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10039c0a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10039c0b jne 0x10039c07 */
  if (!C.zf) goto L_10039c07;
L_10039c0d:;
  /* 10039c0d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10039c11 pop edi */
  EDI = (pop32());
  /* 10039c12 ret  */
  ESPCHK(0x10039bc0u, _esp0);
  ESP += 4; return;
L_10039c13:;
  /* 10039c13 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10039c17 ret  */
  ESPCHK(0x10039bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c20 @ 0x10039c20 (664 bytes, 263 insns) [15 switch table(s)] */
void f_10039c20(void) {
  FTRACE(0x10039c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10039c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10039c21 mov ebp, esp */
  EBP = (ESP);
  /* 10039c23 push edi */
  push32((uint32_t)(EDI));
  /* 10039c24 push esi */
  push32((uint32_t)(ESI));
  /* 10039c25 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10039c28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10039c2b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10039c2e mov eax, ecx */
  EAX = (ECX);
  /* 10039c30 mov edx, ecx */
  EDX = (ECX);
  /* 10039c32 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10039c34 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039c36 jbe 0x10039c40 */
  if ((C.cf||C.zf)) goto L_10039c40;
  /* 10039c38 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039c3a jb 0x10039db8 */
  if (C.cf) goto L_10039db8;
L_10039c40:;
  /* 10039c40 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10039c46 jne 0x10039c5c */
  if (!C.zf) goto L_10039c5c;
  /* 10039c48 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10039c4b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10039c4e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039c51 jb 0x10039c7c */
  if (C.cf) goto L_10039c7c;
  /* 10039c53 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10039c55 jmp dword ptr [edx*4 + 0x10039d68] */
  switch (EDX) {
    case 0: goto L_10039d78;
    case 1: goto L_10039d80;
    case 2: goto L_10039d8c;
    case 3: goto L_10039da0;
    default: x86_unimpl("switch@0x10039c55 out of table"); return;
  }
L_10039c5c:;
  /* 10039c5c mov eax, edi */
  EAX = (EDI);
  /* 10039c5e mov edx, 3 */
  EDX = (0x3u);
  /* 10039c63 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10039c66 jb 0x10039c74 */
  if (C.cf) goto L_10039c74;
  /* 10039c68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10039c6b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10039c6d jmp dword ptr [eax*4 + 0x10039c80] */
  switch (EAX) {
    case 1: goto L_10039c90;
    case 2: goto L_10039cbc;
    case 3: goto L_10039ce0;
    default: x86_unimpl("switch@0x10039c6d out of table"); return;
  }
L_10039c74:;
  /* 10039c74 jmp dword ptr [ecx*4 + 0x10039d78] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10039d78)))); return;
  /* 10039c7b nop  */
  /* nop */
L_10039c7c:;
  /* 10039c7c jmp dword ptr [ecx*4 + 0x10039cfc] */
  switch (ECX) {
    case 0: goto L_10039d5f;
    case 1: goto L_10039d4c;
    case 2: goto L_10039d44;
    case 3: goto L_10039d3c;
    case 4: goto L_10039d34;
    case 5: goto L_10039d2c;
    case 6: goto L_10039d24;
    case 7: goto L_10039d1c;
    default: x86_unimpl("switch@0x10039c7c out of table"); return;
  }
  /* 10039c83 nop  */
  /* nop */
L_10039c90:;
  /* 10039c90 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10039c92 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10039c94 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10039c96 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10039c99 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10039c9c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10039c9f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10039ca2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10039ca5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10039ca8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10039cab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039cae jb 0x10039c7c */
  if (C.cf) goto L_10039c7c;
  /* 10039cb0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10039cb2 jmp dword ptr [edx*4 + 0x10039d68] */
  switch (EDX) {
    case 0: goto L_10039d78;
    case 1: goto L_10039d80;
    case 2: goto L_10039d8c;
    case 3: goto L_10039da0;
    default: x86_unimpl("switch@0x10039cb2 out of table"); return;
  }
  /* 10039cb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10039cbc:;
  /* 10039cbc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10039cbe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10039cc0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10039cc2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10039cc5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10039cc8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10039ccb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10039cce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10039cd1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039cd4 jb 0x10039c7c */
  if (C.cf) goto L_10039c7c;
  /* 10039cd6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10039cd8 jmp dword ptr [edx*4 + 0x10039d68] */
  switch (EDX) {
    case 0: goto L_10039d78;
    case 1: goto L_10039d80;
    case 2: goto L_10039d8c;
    case 3: goto L_10039da0;
    default: x86_unimpl("switch@0x10039cd8 out of table"); return;
  }
  /* 10039cdf nop  */
  /* nop */
L_10039ce0:;
  /* 10039ce0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10039ce2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10039ce4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10039ce6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10039ce7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10039cea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10039ceb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039cee jb 0x10039c7c */
  if (C.cf) goto L_10039c7c;
  /* 10039cf0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10039cf2 jmp dword ptr [edx*4 + 0x10039d68] */
  switch (EDX) {
    case 0: goto L_10039d78;
    case 1: goto L_10039d80;
    case 2: goto L_10039d8c;
    case 3: goto L_10039da0;
    default: x86_unimpl("switch@0x10039cf2 out of table"); return;
  }
  /* 10039cf9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10039d1c:;
  /* 10039d1c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10039d20 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10039d24:;
  /* 10039d24 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10039d28 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10039d2c:;
  /* 10039d2c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10039d30 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10039d34:;
  /* 10039d34 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10039d38 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10039d3c:;
  /* 10039d3c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10039d40 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10039d44:;
  /* 10039d44 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10039d48 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10039d4c:;
  /* 10039d4c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10039d50 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10039d54 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10039d5b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10039d5d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10039d5f:;
  /* 10039d5f jmp dword ptr [edx*4 + 0x10039d68] */
  switch (EDX) {
    case 0: goto L_10039d78;
    case 1: goto L_10039d80;
    case 2: goto L_10039d8c;
    case 3: goto L_10039da0;
    default: x86_unimpl("switch@0x10039d5f out of table"); return;
  }
  /* 10039d66 mov edi, edi */
  EDI = (EDI);
L_10039d78:;
  /* 10039d78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10039d7b pop esi */
  ESI = (pop32());
  /* 10039d7c pop edi */
  EDI = (pop32());
  /* 10039d7d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10039d7e ret  */
  ESPCHK(0x10039c20u, _esp0);
  ESP += 4; return;
  /* 10039d7f nop  */
  /* nop */
L_10039d80:;
  /* 10039d80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10039d82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10039d84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10039d87 pop esi */
  ESI = (pop32());
  /* 10039d88 pop edi */
  EDI = (pop32());
  /* 10039d89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10039d8a ret  */
  ESPCHK(0x10039c20u, _esp0);
  ESP += 4; return;
  /* 10039d8b nop  */
  /* nop */
L_10039d8c:;
  /* 10039d8c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10039d8e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10039d90 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10039d93 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10039d96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10039d99 pop esi */
  ESI = (pop32());
  /* 10039d9a pop edi */
  EDI = (pop32());
  /* 10039d9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10039d9c ret  */
  ESPCHK(0x10039c20u, _esp0);
  ESP += 4; return;
  /* 10039d9d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10039da0:;
  /* 10039da0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10039da2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10039da4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10039da7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10039daa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10039dad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10039db0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10039db3 pop esi */
  ESI = (pop32());
  /* 10039db4 pop edi */
  EDI = (pop32());
  /* 10039db5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10039db6 ret  */
  ESPCHK(0x10039c20u, _esp0);
  ESP += 4; return;
  /* 10039db7 nop  */
  /* nop */
L_10039db8:;
  /* 10039db8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10039dbc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10039dc0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10039dc6 jne 0x10039dec */
  if (!C.zf) goto L_10039dec;
  /* 10039dc8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10039dcb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10039dce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039dd1 jb 0x10039de0 */
  if (C.cf) goto L_10039de0;
  /* 10039dd3 std  */
  C.df=1;
  /* 10039dd4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10039dd6 cld  */
  C.df=0;
  /* 10039dd7 jmp dword ptr [edx*4 + 0x10039f00] */
  switch (EDX) {
    case 0: goto L_10039f10;
    case 1: goto L_10039f18;
    case 2: goto L_10039f28;
    case 3: goto L_10039f3c;
    default: x86_unimpl("switch@0x10039dd7 out of table"); return;
  }
  /* 10039dde mov edi, edi */
  EDI = (EDI);
L_10039de0:;
  /* 10039de0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10039de2 jmp dword ptr [ecx*4 + 0x10039eb0] */
  switch (ECX) {
    case 0: goto L_10039ef7;
    default: x86_unimpl("switch@0x10039de2 out of table"); return;
  }
  /* 10039de9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10039dec:;
  /* 10039dec mov eax, edi */
  EAX = (EDI);
  /* 10039dee mov edx, 3 */
  EDX = (0x3u);
  /* 10039df3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039df6 jb 0x10039e04 */
  if (C.cf) goto L_10039e04;
  /* 10039df8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10039dfb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10039dfd jmp dword ptr [eax*4 + 0x10039e08] */
  switch (EAX) {
    case 1: goto L_10039e18;
    case 2: goto L_10039e38;
    case 3: goto L_10039e60;
    default: x86_unimpl("switch@0x10039dfd out of table"); return;
  }
L_10039e04:;
  /* 10039e04 jmp dword ptr [ecx*4 + 0x10039f00] */
  switch (ECX) {
    case 0: goto L_10039f10;
    case 1: goto L_10039f18;
    case 2: goto L_10039f28;
    case 3: goto L_10039f3c;
    default: x86_unimpl("switch@0x10039e04 out of table"); return;
  }
  /* 10039e0b nop  */
  /* nop */
L_10039e18:;
  /* 10039e18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10039e1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10039e1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10039e20 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10039e21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10039e24 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10039e25 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039e28 jb 0x10039de0 */
  if (C.cf) goto L_10039de0;
  /* 10039e2a std  */
  C.df=1;
  /* 10039e2b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10039e2d cld  */
  C.df=0;
  /* 10039e2e jmp dword ptr [edx*4 + 0x10039f00] */
  switch (EDX) {
    case 0: goto L_10039f10;
    case 1: goto L_10039f18;
    case 2: goto L_10039f28;
    case 3: goto L_10039f3c;
    default: x86_unimpl("switch@0x10039e2e out of table"); return;
  }
  /* 10039e35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10039e38:;
  /* 10039e38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10039e3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10039e3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10039e40 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10039e43 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10039e46 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10039e49 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10039e4c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10039e4f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039e52 jb 0x10039de0 */
  if (C.cf) goto L_10039de0;
  /* 10039e54 std  */
  C.df=1;
  /* 10039e55 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10039e57 cld  */
  C.df=0;
  /* 10039e58 jmp dword ptr [edx*4 + 0x10039f00] */
  switch (EDX) {
    case 0: goto L_10039f10;
    case 1: goto L_10039f18;
    case 2: goto L_10039f28;
    case 3: goto L_10039f3c;
    default: x86_unimpl("switch@0x10039e58 out of table"); return;
  }
  /* 10039e5f nop  */
  /* nop */
L_10039e60:;
  /* 10039e60 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10039e63 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10039e65 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10039e68 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10039e6b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10039e6e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10039e71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10039e74 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10039e77 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10039e7a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10039e7d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039e80 jb 0x10039de0 */
  if (C.cf) goto L_10039de0;
  /* 10039e86 std  */
  C.df=1;
  /* 10039e87 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10039e89 cld  */
  C.df=0;
  /* 10039e8a jmp dword ptr [edx*4 + 0x10039f00] */
  switch (EDX) {
    case 0: goto L_10039f10;
    case 1: goto L_10039f18;
    case 2: goto L_10039f28;
    case 3: goto L_10039f3c;
    default: x86_unimpl("switch@0x10039e8a out of table"); return;
  }
  /* 10039e91 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10039e94 mov ah, 0x9e */
  AH = (0x9eu);
  /* 10039e96 add edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10039e98 mov esp, 0xc410039e */
  ESP = (0xc410039eu);
  /* 10039e9d sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10039e9e add edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10039ea0 int3  */
  x86_unimpl("int3 @ 0x10039ea0");
  /* 10039ea1 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10039ea2 add edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10039ea4 aam 0x9e */
  x86_unimpl("aam @ 0x10039ea4");
  /* 10039ea6 add edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10039ea8 fcomp qword ptr [esi - 0x611beffd] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ESI + -0x611beffd)));
  (void)fpu_pop();
  /* 10039eae add edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10039eb4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10039eb8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10039ebc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10039ec0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10039ec4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10039ec8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10039ecc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10039ed0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10039ed4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10039ed8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10039edc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10039ee0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10039ee4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10039ee8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10039eec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10039ef3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10039ef5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10039ef7:;
  /* 10039ef7 jmp dword ptr [edx*4 + 0x10039f00] */
  switch (EDX) {
    case 0: goto L_10039f10;
    case 1: goto L_10039f18;
    case 2: goto L_10039f28;
    case 3: goto L_10039f3c;
    default: x86_unimpl("switch@0x10039ef7 out of table"); return;
  }
  /* 10039efe mov edi, edi */
  EDI = (EDI);
L_10039f10:;
  /* 10039f10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10039f13 pop esi */
  ESI = (pop32());
  /* 10039f14 pop edi */
  EDI = (pop32());
  /* 10039f15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10039f16 ret  */
  ESPCHK(0x10039c20u, _esp0);
  ESP += 4; return;
  /* 10039f17 nop  */
  /* nop */
L_10039f18:;
  /* 10039f18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10039f1b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10039f1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10039f21 pop esi */
  ESI = (pop32());
  /* 10039f22 pop edi */
  EDI = (pop32());
  /* 10039f23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10039f24 ret  */
  ESPCHK(0x10039c20u, _esp0);
  ESP += 4; return;
  /* 10039f25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10039f28:;
  /* 10039f28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10039f2b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10039f2e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10039f31 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10039f34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10039f37 pop esi */
  ESI = (pop32());
  /* 10039f38 pop edi */
  EDI = (pop32());
  /* 10039f39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10039f3a ret  */
  ESPCHK(0x10039c20u, _esp0);
  ESP += 4; return;
  /* 10039f3b nop  */
  /* nop */
L_10039f3c:;
  /* 10039f3c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10039f3f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10039f42 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10039f45 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10039f48 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10039f4b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10039f4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10039f51 pop esi */
  ESI = (pop32());
  /* 10039f52 pop edi */
  EDI = (pop32());
  /* 10039f53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10039f54 ret  */
  ESPCHK(0x10039c20u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10039f55 (9 bytes, 4 insns) */
void f_10039f55(void) {
  FTRACE(0x10039f55u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10039f55 push 2 */
  push32((uint32_t)(0x2u));
  /* 10039f57 call 0x10037091 */
  push32(0x10039f5cu); f_10037091();
  /* 10039f5c pop ecx */
  ECX = (pop32());
  /* 10039f5d ret  */
  ESPCHK(0x10039f55u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f5e @ 0x10039f5e (41 bytes, 12 insns) */
void f_10039f5e(void) {
  FTRACE(0x10039f5eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10039f5e push esi */
  push32((uint32_t)(ESI));
  /* 10039f5f mov esi, dword ptr [0x1003e094] */
  ESI = (r32((uint32_t)(0x1003e094)));
  /* 10039f65 push dword ptr [0x10040c54] */
  push32((uint32_t)(r32((uint32_t)(0x10040c54))));
  /* 10039f6b call esi */
  call_ind((uint32_t)(ESI), 0x10039f6du);
  /* 10039f6d push dword ptr [0x10040c44] */
  push32((uint32_t)(r32((uint32_t)(0x10040c44))));
  /* 10039f73 call esi */
  call_ind((uint32_t)(ESI), 0x10039f75u);
  /* 10039f75 push dword ptr [0x10040c34] */
  push32((uint32_t)(r32((uint32_t)(0x10040c34))));
  /* 10039f7b call esi */
  call_ind((uint32_t)(ESI), 0x10039f7du);
  /* 10039f7d push dword ptr [0x10040c14] */
  push32((uint32_t)(r32((uint32_t)(0x10040c14))));
  /* 10039f83 call esi */
  call_ind((uint32_t)(ESI), 0x10039f85u);
  /* 10039f85 pop esi */
  ESI = (pop32());
  /* 10039f86 ret  */
  ESPCHK(0x10039f5eu, _esp0);
  ESP += 4; return;
}

/* FUN_10009f87 @ 0x10039f87 (108 bytes, 34 insns) */
void f_10039f87(void) {
  FTRACE(0x10039f87u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10039f87 push esi */
  push32((uint32_t)(ESI));
  /* 10039f88 push edi */
  push32((uint32_t)(EDI));
  /* 10039f89 mov edi, dword ptr [0x1003e050] */
  EDI = (r32((uint32_t)(0x1003e050)));
  /* 10039f8f mov esi, 0x10040c10 */
  ESI = (0x10040c10u);
L_10039f94:;
  /* 10039f94 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10039f96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10039f98 je 0x10039fc5 */
  if (C.zf) goto L_10039fc5;
  /* 10039f9a cmp esi, 0x10040c54 */
  { uint32_t _a=(ESI),_b=(0x10040c54u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039fa0 je 0x10039fc5 */
  if (C.zf) goto L_10039fc5;
  /* 10039fa2 cmp esi, 0x10040c44 */
  { uint32_t _a=(ESI),_b=(0x10040c44u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039fa8 je 0x10039fc5 */
  if (C.zf) goto L_10039fc5;
  /* 10039faa cmp esi, 0x10040c34 */
  { uint32_t _a=(ESI),_b=(0x10040c34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039fb0 je 0x10039fc5 */
  if (C.zf) goto L_10039fc5;
  /* 10039fb2 cmp esi, 0x10040c14 */
  { uint32_t _a=(ESI),_b=(0x10040c14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039fb8 je 0x10039fc5 */
  if (C.zf) goto L_10039fc5;
  /* 10039fba push eax */
  push32((uint32_t)(EAX));
  /* 10039fbb call edi */
  call_ind((uint32_t)(EDI), 0x10039fbdu);
  /* 10039fbd push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10039fbf call 0x1003a1a6 */
  push32(0x10039fc4u); f_1003a1a6();
  /* 10039fc4 pop ecx */
  ECX = (pop32());
L_10039fc5:;
  /* 10039fc5 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10039fc8 cmp esi, 0x10040cd0 */
  { uint32_t _a=(ESI),_b=(0x10040cd0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039fce jl 0x10039f94 */
  if ((C.sf!=C.of)) goto L_10039f94;
  /* 10039fd0 push dword ptr [0x10040c34] */
  push32((uint32_t)(r32((uint32_t)(0x10040c34))));
  /* 10039fd6 call edi */
  call_ind((uint32_t)(EDI), 0x10039fd8u);
  /* 10039fd8 push dword ptr [0x10040c44] */
  push32((uint32_t)(r32((uint32_t)(0x10040c44))));
  /* 10039fde call edi */
  call_ind((uint32_t)(EDI), 0x10039fe0u);
  /* 10039fe0 push dword ptr [0x10040c54] */
  push32((uint32_t)(r32((uint32_t)(0x10040c54))));
  /* 10039fe6 call edi */
  call_ind((uint32_t)(EDI), 0x10039fe8u);
  /* 10039fe8 push dword ptr [0x10040c14] */
  push32((uint32_t)(r32((uint32_t)(0x10040c14))));
  /* 10039fee call edi */
  call_ind((uint32_t)(EDI), 0x10039ff0u);
  /* 10039ff0 pop edi */
  EDI = (pop32());
  /* 10039ff1 pop esi */
  ESI = (pop32());
  /* 10039ff2 ret  */
  ESPCHK(0x10039f87u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ff3 @ 0x10039ff3 (97 bytes, 37 insns) */
void f_10039ff3(void) {
  FTRACE(0x10039ff3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10039ff3 push ebp */
  push32((uint32_t)(EBP));
  /* 10039ff4 mov ebp, esp */
  EBP = (ESP);
  /* 10039ff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10039ff9 push esi */
  push32((uint32_t)(ESI));
  /* 10039ffa cmp dword ptr [eax*4 + 0x10040c10], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10040c10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a002 lea esi, [eax*4 + 0x10040c10] */
  ESI = ((uint32_t)(EAX*4 + 0x10040c10));
  /* 1003a009 jne 0x1003a049 */
  if (!C.zf) goto L_1003a049;
  /* 1003a00b push edi */
  push32((uint32_t)(EDI));
  /* 1003a00c push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1003a00e call 0x1003a28f */
  push32(0x1003a013u); f_1003a28f();
  /* 1003a013 mov edi, eax */
  EDI = (EAX);
  /* 1003a015 pop ecx */
  ECX = (pop32());
  /* 1003a016 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1003a018 jne 0x1003a022 */
  if (!C.zf) goto L_1003a022;
  /* 1003a01a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1003a01c call 0x10037091 */
  push32(0x1003a021u); f_10037091();
  /* 1003a021 pop ecx */
  ECX = (pop32());
L_1003a022:;
  /* 1003a022 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1003a024 call 0x10039ff3 */
  push32(0x1003a029u); f_10039ff3();
  /* 1003a029 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a02c pop ecx */
  ECX = (pop32());
  /* 1003a02d push edi */
  push32((uint32_t)(EDI));
  /* 1003a02e jne 0x1003a03a */
  if (!C.zf) goto L_1003a03a;
  /* 1003a030 call dword ptr [0x1003e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e094))), 0x1003a036u);
  /* 1003a036 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1003a038 jmp 0x1003a040 */
  goto L_1003a040;
L_1003a03a:;
  /* 1003a03a call 0x1003a1a6 */
  push32(0x1003a03fu); f_1003a1a6();
  /* 1003a03f pop ecx */
  ECX = (pop32());
L_1003a040:;
  /* 1003a040 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1003a042 call 0x1003a054 */
  push32(0x1003a047u); f_1003a054();
  /* 1003a047 pop ecx */
  ECX = (pop32());
  /* 1003a048 pop edi */
  EDI = (pop32());
L_1003a049:;
  /* 1003a049 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1003a04b call dword ptr [0x1003e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e00c))), 0x1003a051u);
  /* 1003a051 pop esi */
  ESI = (pop32());
  /* 1003a052 pop ebp */
  EBP = (pop32());
  /* 1003a053 ret  */
  ESPCHK(0x10039ff3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a054 @ 0x1003a054 (21 bytes, 7 insns) */
void f_1003a054(void) {
  FTRACE(0x1003a054u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003a054 push ebp */
  push32((uint32_t)(EBP));
  /* 1003a055 mov ebp, esp */
  EBP = (ESP);
  /* 1003a057 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003a05a push dword ptr [eax*4 + 0x10040c10] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10040c10))));
  /* 1003a061 call dword ptr [0x1003e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e008))), 0x1003a067u);
  /* 1003a067 pop ebp */
  EBP = (pop32());
  /* 1003a068 ret  */
  ESPCHK(0x1003a054u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a069 @ 0x1003a069 (289 bytes, 98 insns) */
void f_1003a069(void) {
  FTRACE(0x1003a069u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003a069 push ebp */
  push32((uint32_t)(EBP));
  /* 1003a06a mov ebp, esp */
  EBP = (ESP);
  /* 1003a06c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1003a06e push 0x1003e4d0 */
  push32((uint32_t)(0x1003e4d0u));
  /* 1003a073 push 0x1003d010 */
  push32((uint32_t)(0x1003d010u));
  /* 1003a078 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1003a07e push eax */
  push32((uint32_t)(EAX));
  /* 1003a07f mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1003a086 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003a089 push ebx */
  push32((uint32_t)(EBX));
  /* 1003a08a push esi */
  push32((uint32_t)(ESI));
  /* 1003a08b push edi */
  push32((uint32_t)(EDI));
  /* 1003a08c mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1003a08f imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1003a093 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1003a096 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 1003a099 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a09c ja 0x1003a0b2 */
  if ((!C.cf&&!C.zf)) goto L_1003a0b2;
  /* 1003a09e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1003a0a0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a0a2 jne 0x1003a0a7 */
  if (!C.zf) goto L_1003a0a7;
  /* 1003a0a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003a0a6 pop esi */
  ESI = (pop32());
L_1003a0a7:;
  /* 1003a0a7 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003a0aa and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1003a0ad mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1003a0b0 jmp 0x1003a0b4 */
  goto L_1003a0b4;
L_1003a0b2:;
  /* 1003a0b2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1003a0b4:;
  /* 1003a0b4 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 1003a0b7 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a0ba ja 0x1003a168 */
  if ((!C.cf&&!C.zf)) goto L_1003a168;
  /* 1003a0c0 mov eax, dword ptr [0x10047c08] */
  EAX = (r32((uint32_t)(0x10047c08)));
  /* 1003a0c5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a0c8 jne 0x1003a10b */
  if (!C.zf) goto L_1003a10b;
  /* 1003a0ca mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 1003a0cd cmp edi, dword ptr [0x100469c0] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x100469c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a0d3 ja 0x1003a151 */
  if ((!C.cf&&!C.zf)) goto L_1003a151;
  /* 1003a0d5 push 9 */
  push32((uint32_t)(0x9u));
  /* 1003a0d7 call 0x10039ff3 */
  push32(0x1003a0dcu); f_10039ff3();
  /* 1003a0dc pop ecx */
  ECX = (pop32());
  /* 1003a0dd mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1003a0e0 push edi */
  push32((uint32_t)(EDI));
  /* 1003a0e1 call 0x1003b27b */
  push32(0x1003a0e6u); f_1003b27b();
  /* 1003a0e6 pop ecx */
  ECX = (pop32());
  /* 1003a0e7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1003a0ea or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1003a0ee call 0x1003a102 */
  push32(0x1003a0f3u); f_1003a102();
  /* 1003a0f3 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a0f6 je 0x1003a156 */
  if (C.zf) goto L_1003a156;
  /* 1003a0f8 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1003a0fb jmp 0x1003a145 */
  goto L_1003a145;
  /* 1003a0fd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1003a0ff mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1003a102 push 9 */
  push32((uint32_t)(0x9u));
  /* 1003a104 call 0x1003a054 */
  push32(0x1003a109u); f_1003a054();
  /* 1003a109 pop ecx */
  ECX = (pop32());
  /* 1003a10a ret  */
  ESPCHK(0x1003a069u, _esp0);
  ESP += 4; return;
L_1003a10b:;
  /* 1003a10b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a10e jne 0x1003a151 */
  if (!C.zf) goto L_1003a151;
  /* 1003a110 cmp esi, dword ptr [0x10042e74] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10042e74))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a116 ja 0x1003a151 */
  if ((!C.cf&&!C.zf)) goto L_1003a151;
  /* 1003a118 push 9 */
  push32((uint32_t)(0x9u));
  /* 1003a11a call 0x10039ff3 */
  push32(0x1003a11fu); f_10039ff3();
  /* 1003a11f pop ecx */
  ECX = (pop32());
  /* 1003a120 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1003a127 mov eax, esi */
  EAX = (ESI);
  /* 1003a129 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1003a12c push eax */
  push32((uint32_t)(EAX));
  /* 1003a12d call 0x1003ba28 */
  push32(0x1003a132u); f_1003ba28();
  /* 1003a132 pop ecx */
  ECX = (pop32());
  /* 1003a133 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1003a136 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1003a13a call 0x1003a18b */
  push32(0x1003a13fu); f_1003a18b();
  /* 1003a13f cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a142 je 0x1003a156 */
  if (C.zf) goto L_1003a156;
  /* 1003a144 push esi */
  push32((uint32_t)(ESI));
L_1003a145:;
  /* 1003a145 push ebx */
  push32((uint32_t)(EBX));
  /* 1003a146 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1003a149 call 0x10039bc0 */
  push32(0x1003a14eu); f_10039bc0();
  /* 1003a14e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003a151:;
  /* 1003a151 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a154 jne 0x1003a194 */
  if (!C.zf) { jmp_ind(0x1003a194u); return; }
L_1003a156:;
  /* 1003a156 push esi */
  push32((uint32_t)(ESI));
  /* 1003a157 push 8 */
  push32((uint32_t)(0x8u));
  /* 1003a159 push dword ptr [0x10047c04] */
  push32((uint32_t)(r32((uint32_t)(0x10047c04))));
  /* 1003a15f call dword ptr [0x1003e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e098))), 0x1003a165u);
  /* 1003a165 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1003a168:;
  /* 1003a168 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a16b jne 0x1003a194 */
  if (!C.zf) { jmp_ind(0x1003a194u); return; }
  /* 1003a16d cmp dword ptr [0x10046860], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10046860))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a173 je 0x1003a194 */
  if (C.zf) { jmp_ind(0x1003a194u); return; }
  /* 1003a175 push esi */
  push32((uint32_t)(ESI));
  /* 1003a176 call 0x1003cefa */
  push32(0x1003a17bu); f_1003cefa();
  /* 1003a17b pop ecx */
  ECX = (pop32());
  /* 1003a17c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003a17e jne 0x1003a0b4 */
  if (!C.zf) goto L_1003a0b4;
  /* 1003a184 jmp 0x1003a197 */
  jmp_ind(0x1003a197u); return;
  /* 1003a186 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_1000a102 @ 0x1003a102 (9 bytes, 4 insns) */
void f_1003a102(void) {
  FTRACE(0x1003a102u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003a102 push 9 */
  push32((uint32_t)(0x9u));
  /* 1003a104 call 0x1003a054 */
  push32(0x1003a109u); f_1003a054();
  /* 1003a109 pop ecx */
  ECX = (pop32());
  /* 1003a10a ret  */
  ESPCHK(0x1003a102u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a18b @ 0x1003a18b (9 bytes, 4 insns) */
void f_1003a18b(void) {
  FTRACE(0x1003a18bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003a18b push 9 */
  push32((uint32_t)(0x9u));
  /* 1003a18d call 0x1003a054 */
  push32(0x1003a192u); f_1003a054();
  /* 1003a192 pop ecx */
  ECX = (pop32());
  /* 1003a193 ret  */
  ESPCHK(0x1003a18bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1a6 @ 0x1003a1a6 (215 bytes, 75 insns) */
void f_1003a1a6(void) {
  FTRACE(0x1003a1a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003a1a6 push ebp */
  push32((uint32_t)(EBP));
  /* 1003a1a7 mov ebp, esp */
  EBP = (ESP);
  /* 1003a1a9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1003a1ab push 0x1003e4e8 */
  push32((uint32_t)(0x1003e4e8u));
  /* 1003a1b0 push 0x1003d010 */
  push32((uint32_t)(0x1003d010u));
  /* 1003a1b5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1003a1bb push eax */
  push32((uint32_t)(EAX));
  /* 1003a1bc mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1003a1c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003a1c6 push ebx */
  push32((uint32_t)(EBX));
  /* 1003a1c7 push esi */
  push32((uint32_t)(ESI));
  /* 1003a1c8 push edi */
  push32((uint32_t)(EDI));
  /* 1003a1c9 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1003a1cc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1003a1ce je 0x1003a280 */
  if (C.zf) { jmp_ind(0x1003a280u); return; }
  /* 1003a1d4 mov eax, dword ptr [0x10047c08] */
  EAX = (r32((uint32_t)(0x10047c08)));
  /* 1003a1d9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a1dc jne 0x1003a219 */
  if (!C.zf) goto L_1003a219;
  /* 1003a1de push 9 */
  push32((uint32_t)(0x9u));
  /* 1003a1e0 call 0x10039ff3 */
  push32(0x1003a1e5u); f_10039ff3();
  /* 1003a1e5 pop ecx */
  ECX = (pop32());
  /* 1003a1e6 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1003a1ea push esi */
  push32((uint32_t)(ESI));
  /* 1003a1eb call 0x1003af27 */
  push32(0x1003a1f0u); f_1003af27();
  /* 1003a1f0 pop ecx */
  ECX = (pop32());
  /* 1003a1f1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1003a1f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003a1f6 je 0x1003a201 */
  if (C.zf) goto L_1003a201;
  /* 1003a1f8 push esi */
  push32((uint32_t)(ESI));
  /* 1003a1f9 push eax */
  push32((uint32_t)(EAX));
  /* 1003a1fa call 0x1003af52 */
  push32(0x1003a1ffu); f_1003af52();
  /* 1003a1ff pop ecx */
  ECX = (pop32());
  /* 1003a200 pop ecx */
  ECX = (pop32());
L_1003a201:;
  /* 1003a201 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1003a205 call 0x1003a210 */
  push32(0x1003a20au); f_1003a210();
  /* 1003a20a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a20e jmp 0x1003a261 */
  goto L_1003a261;
  /* 1003a210 push 9 */
  push32((uint32_t)(0x9u));
  /* 1003a212 call 0x1003a054 */
  push32(0x1003a217u); f_1003a054();
  /* 1003a217 pop ecx */
  ECX = (pop32());
  /* 1003a218 ret  */
  ESPCHK(0x1003a1a6u, _esp0);
  ESP += 4; return;
L_1003a219:;
  /* 1003a219 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a21c jne 0x1003a271 */
  if (!C.zf) goto L_1003a271;
  /* 1003a21e push 9 */
  push32((uint32_t)(0x9u));
  /* 1003a220 call 0x10039ff3 */
  push32(0x1003a225u); f_10039ff3();
  /* 1003a225 pop ecx */
  ECX = (pop32());
  /* 1003a226 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1003a22d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1003a230 push eax */
  push32((uint32_t)(EAX));
  /* 1003a231 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 1003a234 push eax */
  push32((uint32_t)(EAX));
  /* 1003a235 push esi */
  push32((uint32_t)(ESI));
  /* 1003a236 call 0x1003b98c */
  push32(0x1003a23bu); f_1003b98c();
  /* 1003a23b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003a23e mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1003a241 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003a243 je 0x1003a254 */
  if (C.zf) goto L_1003a254;
  /* 1003a245 push eax */
  push32((uint32_t)(EAX));
  /* 1003a246 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1003a249 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 1003a24c call 0x1003b9e3 */
  push32(0x1003a251u); f_1003b9e3();
  /* 1003a251 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003a254:;
  /* 1003a254 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1003a258 call 0x1003a268 */
  push32(0x1003a25du); f_1003a268();
  /* 1003a25d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1003a261:;
  /* 1003a261 jne 0x1003a280 */
  if (!C.zf) { jmp_ind(0x1003a280u); return; }
  /* 1003a263 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1003a266 jmp 0x1003a272 */
  goto L_1003a272;
  /* 1003a268 push 9 */
  push32((uint32_t)(0x9u));
  /* 1003a26a call 0x1003a054 */
  push32(0x1003a26fu); f_1003a054();
  /* 1003a26f pop ecx */
  ECX = (pop32());
  /* 1003a270 ret  */
  ESPCHK(0x1003a1a6u, _esp0);
  ESP += 4; return;
L_1003a271:;
  /* 1003a271 push esi */
  push32((uint32_t)(ESI));
L_1003a272:;
  /* 1003a272 push 0 */
  push32((uint32_t)(0x0u));
  /* 1003a274 push dword ptr [0x10047c04] */
  push32((uint32_t)(r32((uint32_t)(0x10047c04))));
}

/* FUN_1000a210 @ 0x1003a210 (9 bytes, 4 insns) */
void f_1003a210(void) {
  FTRACE(0x1003a210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003a210 push 9 */
  push32((uint32_t)(0x9u));
  /* 1003a212 call 0x1003a054 */
  push32(0x1003a217u); f_1003a054();
  /* 1003a217 pop ecx */
  ECX = (pop32());
  /* 1003a218 ret  */
  ESPCHK(0x1003a210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a268 @ 0x1003a268 (9 bytes, 4 insns) */
void f_1003a268(void) {
  FTRACE(0x1003a268u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003a268 push 9 */
  push32((uint32_t)(0x9u));
  /* 1003a26a call 0x1003a054 */
  push32(0x1003a26fu); f_1003a054();
  /* 1003a26f pop ecx */
  ECX = (pop32());
  /* 1003a270 ret  */
  ESPCHK(0x1003a268u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x1003a28f (18 bytes, 6 insns) */
void f_1003a28f(void) {
  FTRACE(0x1003a28fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003a28f push dword ptr [0x10046860] */
  push32((uint32_t)(r32((uint32_t)(0x10046860))));
  /* 1003a295 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1003a299 call 0x1003a2a1 */
  push32(0x1003a29eu); f_1003a2a1();
  /* 1003a29e pop ecx */
  ECX = (pop32());
  /* 1003a29f pop ecx */
  ECX = (pop32());
  /* 1003a2a0 ret  */
  ESPCHK(0x1003a28fu, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x1003a2a1 (44 bytes, 16 insns) */
void f_1003a2a1(void) {
  FTRACE(0x1003a2a1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003a2a1 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a2a6 ja 0x1003a2ca */
  if ((!C.cf&&!C.zf)) goto L_1003a2ca;
L_1003a2a8:;
  /* 1003a2a8 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1003a2ac call 0x1003a2cd */
  push32(0x1003a2b1u); f_1003a2cd();
  /* 1003a2b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003a2b3 pop ecx */
  ECX = (pop32());
  /* 1003a2b4 jne 0x1003a2cc */
  if (!C.zf) goto L_1003a2cc;
  /* 1003a2b6 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a2ba je 0x1003a2cc */
  if (C.zf) goto L_1003a2cc;
  /* 1003a2bc push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1003a2c0 call 0x1003cefa */
  push32(0x1003a2c5u); f_1003cefa();
  /* 1003a2c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003a2c7 pop ecx */
  ECX = (pop32());
  /* 1003a2c8 jne 0x1003a2a8 */
  if (!C.zf) goto L_1003a2a8;
L_1003a2ca:;
  /* 1003a2ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1003a2cc:;
  /* 1003a2cc ret  */
  ESPCHK(0x1003a2a1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2cd @ 0x1003a2cd (231 bytes, 81 insns) */
void f_1003a2cd(void) {
  FTRACE(0x1003a2cdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003a2cd push ebp */
  push32((uint32_t)(EBP));
  /* 1003a2ce mov ebp, esp */
  EBP = (ESP);
  /* 1003a2d0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1003a2d2 push 0x1003e500 */
  push32((uint32_t)(0x1003e500u));
  /* 1003a2d7 push 0x1003d010 */
  push32((uint32_t)(0x1003d010u));
  /* 1003a2dc mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1003a2e2 push eax */
  push32((uint32_t)(EAX));
  /* 1003a2e3 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1003a2ea sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003a2ed push ebx */
  push32((uint32_t)(EBX));
  /* 1003a2ee push esi */
  push32((uint32_t)(ESI));
  /* 1003a2ef push edi */
  push32((uint32_t)(EDI));
  /* 1003a2f0 mov eax, dword ptr [0x10047c08] */
  EAX = (r32((uint32_t)(0x10047c08)));
  /* 1003a2f5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a2f8 jne 0x1003a33d */
  if (!C.zf) goto L_1003a33d;
  /* 1003a2fa mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1003a2fd cmp esi, dword ptr [0x100469c0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100469c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a303 ja 0x1003a39c */
  if ((!C.cf&&!C.zf)) goto L_1003a39c;
  /* 1003a309 push 9 */
  push32((uint32_t)(0x9u));
  /* 1003a30b call 0x10039ff3 */
  push32(0x1003a310u); f_10039ff3();
  /* 1003a310 pop ecx */
  ECX = (pop32());
  /* 1003a311 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1003a315 push esi */
  push32((uint32_t)(ESI));
  /* 1003a316 call 0x1003b27b */
  push32(0x1003a31bu); f_1003b27b();
  /* 1003a31b pop ecx */
  ECX = (pop32());
  /* 1003a31c mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1003a31f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1003a323 call 0x1003a334 */
  push32(0x1003a328u); f_1003a334();
  /* 1003a328 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1003a32b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003a32d je 0x1003a39c */
  if (C.zf) goto L_1003a39c;
  /* 1003a32f jmp 0x1003a3ba */
  jmp_ind(0x1003a3bau); return;
  /* 1003a334 push 9 */
  push32((uint32_t)(0x9u));
  /* 1003a336 call 0x1003a054 */
  push32(0x1003a33bu); f_1003a054();
  /* 1003a33b pop ecx */
  ECX = (pop32());
  /* 1003a33c ret  */
  ESPCHK(0x1003a2cdu, _esp0);
  ESP += 4; return;
L_1003a33d:;
  /* 1003a33d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a340 jne 0x1003a39c */
  if (!C.zf) goto L_1003a39c;
  /* 1003a342 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003a345 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003a347 je 0x1003a351 */
  if (C.zf) goto L_1003a351;
  /* 1003a349 lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 1003a34c and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1003a34f jmp 0x1003a354 */
  goto L_1003a354;
L_1003a351:;
  /* 1003a351 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1003a353 pop esi */
  ESI = (pop32());
L_1003a354:;
  /* 1003a354 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 1003a357 cmp esi, dword ptr [0x10042e74] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10042e74))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a35d ja 0x1003a38d */
  if ((!C.cf&&!C.zf)) goto L_1003a38d;
  /* 1003a35f push 9 */
  push32((uint32_t)(0x9u));
  /* 1003a361 call 0x10039ff3 */
  push32(0x1003a366u); f_10039ff3();
  /* 1003a366 pop ecx */
  ECX = (pop32());
  /* 1003a367 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1003a36e mov eax, esi */
  EAX = (ESI);
  /* 1003a370 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1003a373 push eax */
  push32((uint32_t)(EAX));
  /* 1003a374 call 0x1003ba28 */
  push32(0x1003a379u); f_1003ba28();
  /* 1003a379 pop ecx */
  ECX = (pop32());
  /* 1003a37a mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1003a37d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1003a381 call 0x1003a393 */
  push32(0x1003a386u); f_1003a393();
  /* 1003a386 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1003a389 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003a38b jne 0x1003a3ba */
  if (!C.zf) { jmp_ind(0x1003a3bau); return; }
L_1003a38d:;
  /* 1003a38d push esi */
  push32((uint32_t)(ESI));
  /* 1003a38e jmp 0x1003a3ac */
  goto L_1003a3ac;
  /* 1003a390 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1003a393 push 9 */
  push32((uint32_t)(0x9u));
  /* 1003a395 call 0x1003a054 */
  push32(0x1003a39au); f_1003a054();
  /* 1003a39a pop ecx */
  ECX = (pop32());
  /* 1003a39b ret  */
  ESPCHK(0x1003a2cdu, _esp0);
  ESP += 4; return;
L_1003a39c:;
  /* 1003a39c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003a39f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003a3a1 jne 0x1003a3a6 */
  if (!C.zf) goto L_1003a3a6;
  /* 1003a3a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003a3a5 pop eax */
  EAX = (pop32());
L_1003a3a6:;
  /* 1003a3a6 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003a3a9 and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1003a3ab push eax */
  push32((uint32_t)(EAX));
L_1003a3ac:;
  /* 1003a3ac push 0 */
  push32((uint32_t)(0x0u));
  /* 1003a3ae push dword ptr [0x10047c04] */
  push32((uint32_t)(r32((uint32_t)(0x10047c04))));
}

/* FUN_1000a334 @ 0x1003a334 (9 bytes, 4 insns) */
void f_1003a334(void) {
  FTRACE(0x1003a334u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003a334 push 9 */
  push32((uint32_t)(0x9u));
  /* 1003a336 call 0x1003a054 */
  push32(0x1003a33bu); f_1003a054();
  /* 1003a33b pop ecx */
  ECX = (pop32());
  /* 1003a33c ret  */
  ESPCHK(0x1003a334u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a393 @ 0x1003a393 (9 bytes, 4 insns) */
void f_1003a393(void) {
  FTRACE(0x1003a393u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003a393 push 9 */
  push32((uint32_t)(0x9u));
  /* 1003a395 call 0x1003a054 */
  push32(0x1003a39au); f_1003a054();
  /* 1003a39a pop ecx */
  ECX = (pop32());
  /* 1003a39b ret  */
  ESPCHK(0x1003a393u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3c9 @ 0x1003a3c9 (429 bytes, 143 insns) */
void f_1003a3c9(void) {
  FTRACE(0x1003a3c9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003a3c9 push ebp */
  push32((uint32_t)(EBP));
  /* 1003a3ca mov ebp, esp */
  EBP = (ESP);
  /* 1003a3cc sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003a3cf push ebx */
  push32((uint32_t)(EBX));
  /* 1003a3d0 push esi */
  push32((uint32_t)(ESI));
  /* 1003a3d1 push edi */
  push32((uint32_t)(EDI));
  /* 1003a3d2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1003a3d4 call 0x10039ff3 */
  push32(0x1003a3d9u); f_10039ff3();
  /* 1003a3d9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1003a3dc call 0x1003a576 */
  push32(0x1003a3e1u); f_1003a576();
  /* 1003a3e1 mov ebx, eax */
  EBX = (EAX);
  /* 1003a3e3 pop ecx */
  ECX = (pop32());
  /* 1003a3e4 cmp ebx, dword ptr [0x100469c4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x100469c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a3ea pop ecx */
  ECX = (pop32());
  /* 1003a3eb mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1003a3ee jne 0x1003a3f7 */
  if (!C.zf) goto L_1003a3f7;
L_1003a3f0:;
  /* 1003a3f0 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1003a3f2 jmp 0x1003a567 */
  goto L_1003a567;
L_1003a3f7:;
  /* 1003a3f7 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1003a3f9 je 0x1003a555 */
  if (C.zf) goto L_1003a555;
  /* 1003a3ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1003a401 mov eax, 0x10040d60 */
  EAX = (0x10040d60u);
L_1003a406:;
  /* 1003a406 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a408 je 0x1003a47e */
  if (C.zf) goto L_1003a47e;
  /* 1003a40a add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003a40d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1003a40e cmp eax, 0x10040e50 */
  { uint32_t _a=(EAX),_b=(0x10040e50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a413 jl 0x1003a406 */
  if ((C.sf!=C.of)) goto L_1003a406;
  /* 1003a415 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1003a418 push eax */
  push32((uint32_t)(EAX));
  /* 1003a419 push ebx */
  push32((uint32_t)(EBX));
  /* 1003a41a call dword ptr [0x1003e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e09c))), 0x1003a420u);
  /* 1003a420 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003a422 pop esi */
  ESI = (pop32());
  /* 1003a423 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a425 jne 0x1003a54c */
  if (!C.zf) goto L_1003a54c;
  /* 1003a42b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1003a42d and dword ptr [0x10046be4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10046be4)))&(0x0u); w32((uint32_t)(0x10046be4), (_r)); fl_logic(_r,32); }
  /* 1003a434 pop ecx */
  ECX = (pop32());
  /* 1003a435 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003a437 mov edi, 0x10046ae0 */
  EDI = (0x10046ae0u);
  /* 1003a43c cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a43f rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1003a441 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1003a442 mov dword ptr [0x100469c4], ebx */
  w32((uint32_t)(0x100469c4), (EBX));
  /* 1003a448 jbe 0x1003a539 */
  if ((C.cf||C.zf)) goto L_1003a539;
  /* 1003a44e cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003a452 je 0x1003a514 */
  if (C.zf) goto L_1003a514;
  /* 1003a458 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_1003a45b:;
  /* 1003a45b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1003a45d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1003a45f je 0x1003a514 */
  if (C.zf) goto L_1003a514;
  /* 1003a465 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 1003a469 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_1003a46c:;
  /* 1003a46c cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a46e ja 0x1003a508 */
  if ((!C.cf&&!C.zf)) goto L_1003a508;
  /* 1003a474 or byte ptr [eax + 0x10046ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10046ae1)))|(0x4u); w8((uint32_t)(EAX + 0x10046ae1), (_r)); fl_logic(_r,8); }
  /* 1003a47b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1003a47c jmp 0x1003a46c */
  goto L_1003a46c;
L_1003a47e:;
  /* 1003a47e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1003a482 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1003a484 pop ecx */
  ECX = (pop32());
  /* 1003a485 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003a487 mov edi, 0x10046ae0 */
  EDI = (0x10046ae0u);
  /* 1003a48c lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 1003a48f rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1003a491 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1003a494 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1003a495 lea ebx, [esi + 0x10040d70] */
  EBX = ((uint32_t)(ESI + 0x10040d70));
L_1003a49b:;
  /* 1003a49b cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003a49e mov ecx, ebx */
  ECX = (EBX);
  /* 1003a4a0 je 0x1003a4ce */
  if (C.zf) goto L_1003a4ce;
L_1003a4a2:;
  /* 1003a4a2 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1003a4a5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1003a4a7 je 0x1003a4ce */
  if (C.zf) goto L_1003a4ce;
  /* 1003a4a9 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1003a4ac movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 1003a4af cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a4b1 ja 0x1003a4c7 */
  if ((!C.cf&&!C.zf)) goto L_1003a4c7;
  /* 1003a4b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1003a4b6 mov dl, byte ptr [edx + 0x10040d58] */
  DL = (r8((uint32_t)(EDX + 0x10040d58)));
L_1003a4bc:;
  /* 1003a4bc or byte ptr [eax + 0x10046ae1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10046ae1)))|(DL); w8((uint32_t)(EAX + 0x10046ae1), (_r)); fl_logic(_r,8); }
  /* 1003a4c2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1003a4c3 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a4c5 jbe 0x1003a4bc */
  if ((C.cf||C.zf)) goto L_1003a4bc;
L_1003a4c7:;
  /* 1003a4c7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1003a4c8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1003a4c9 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003a4cc jne 0x1003a4a2 */
  if (!C.zf) goto L_1003a4a2;
L_1003a4ce:;
  /* 1003a4ce inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1003a4d1 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003a4d4 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a4d8 jb 0x1003a49b */
  if (C.cf) goto L_1003a49b;
  /* 1003a4da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003a4dd mov dword ptr [0x100469dc], 1 */
  w32((uint32_t)(0x100469dc), (0x1u));
  /* 1003a4e7 push eax */
  push32((uint32_t)(EAX));
  /* 1003a4e8 mov dword ptr [0x100469c4], eax */
  w32((uint32_t)(0x100469c4), (EAX));
  /* 1003a4ed call 0x1003a5c0 */
  push32(0x1003a4f2u); f_1003a5c0();
  /* 1003a4f2 lea esi, [esi + 0x10040d64] */
  ESI = ((uint32_t)(ESI + 0x10040d64));
  /* 1003a4f8 mov edi, 0x100469d0 */
  EDI = (0x100469d0u);
  /* 1003a4fd movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1003a4fe movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1003a4ff pop ecx */
  ECX = (pop32());
  /* 1003a500 mov dword ptr [0x10046be4], eax */
  w32((uint32_t)(0x10046be4), (EAX));
  /* 1003a505 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1003a506 jmp 0x1003a55a */
  goto L_1003a55a;
L_1003a508:;
  /* 1003a508 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1003a509 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1003a50a cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003a50e jne 0x1003a45b */
  if (!C.zf) goto L_1003a45b;
L_1003a514:;
  /* 1003a514 mov eax, esi */
  EAX = (ESI);
L_1003a516:;
  /* 1003a516 or byte ptr [eax + 0x10046ae1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10046ae1)))|(0x8u); w8((uint32_t)(EAX + 0x10046ae1), (_r)); fl_logic(_r,8); }
  /* 1003a51d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1003a51e cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a523 jb 0x1003a516 */
  if (C.cf) goto L_1003a516;
  /* 1003a525 push ebx */
  push32((uint32_t)(EBX));
  /* 1003a526 call 0x1003a5c0 */
  push32(0x1003a52bu); f_1003a5c0();
  /* 1003a52b pop ecx */
  ECX = (pop32());
  /* 1003a52c mov dword ptr [0x10046be4], eax */
  w32((uint32_t)(0x10046be4), (EAX));
  /* 1003a531 mov dword ptr [0x100469dc], esi */
  w32((uint32_t)(0x100469dc), (ESI));
  /* 1003a537 jmp 0x1003a540 */
  goto L_1003a540;
L_1003a539:;
  /* 1003a539 and dword ptr [0x100469dc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100469dc)))&(0x0u); w32((uint32_t)(0x100469dc), (_r)); fl_logic(_r,32); }
L_1003a540:;
  /* 1003a540 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003a542 mov edi, 0x100469d0 */
  EDI = (0x100469d0u);
  /* 1003a547 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1003a548 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1003a549 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1003a54a jmp 0x1003a55a */
  goto L_1003a55a;
L_1003a54c:;
  /* 1003a54c cmp dword ptr [0x10046800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10046800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a553 je 0x1003a564 */
  if (C.zf) goto L_1003a564;
L_1003a555:;
  /* 1003a555 call 0x1003a5f3 */
  push32(0x1003a55au); f_1003a5f3();
L_1003a55a:;
  /* 1003a55a call 0x1003a61c */
  push32(0x1003a55fu); f_1003a61c();
  /* 1003a55f jmp 0x1003a3f0 */
  goto L_1003a3f0;
L_1003a564:;
  /* 1003a564 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_1003a567:;
  /* 1003a567 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1003a569 call 0x1003a054 */
  push32(0x1003a56eu); f_1003a054();
  /* 1003a56e pop ecx */
  ECX = (pop32());
  /* 1003a56f mov eax, esi */
  EAX = (ESI);
  /* 1003a571 pop edi */
  EDI = (pop32());
  /* 1003a572 pop esi */
  ESI = (pop32());
  /* 1003a573 pop ebx */
  EBX = (pop32());
  /* 1003a574 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003a575 ret  */
  ESPCHK(0x1003a3c9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a576 @ 0x1003a576 (74 bytes, 15 insns) */
void f_1003a576(void) {
  FTRACE(0x1003a576u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003a576 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1003a57a and dword ptr [0x10046800], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10046800)))&(0x0u); w32((uint32_t)(0x10046800), (_r)); fl_logic(_r,32); }
  /* 1003a581 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a584 jne 0x1003a596 */
  if (!C.zf) goto L_1003a596;
  /* 1003a586 mov dword ptr [0x10046800], 1 */
  w32((uint32_t)(0x10046800), (0x1u));
  /* 1003a590 jmp dword ptr [0x1003e0a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1003e0a4)))); return;
L_1003a596:;
  /* 1003a596 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a599 jne 0x1003a5ab */
  if (!C.zf) goto L_1003a5ab;
  /* 1003a59b mov dword ptr [0x10046800], 1 */
  w32((uint32_t)(0x10046800), (0x1u));
  /* 1003a5a5 jmp dword ptr [0x1003e0a0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1003e0a0)))); return;
L_1003a5ab:;
  /* 1003a5ab cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a5ae jne 0x1003a5bf */
  if (!C.zf) goto L_1003a5bf;
  /* 1003a5b0 mov eax, dword ptr [0x10046838] */
  EAX = (r32((uint32_t)(0x10046838)));
  /* 1003a5b5 mov dword ptr [0x10046800], 1 */
  w32((uint32_t)(0x10046800), (0x1u));
L_1003a5bf:;
  /* 1003a5bf ret  */
  ESPCHK(0x1003a576u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5c0 @ 0x1003a5c0 (51 bytes, 19 insns) */
void f_1003a5c0(void) {
  FTRACE(0x1003a5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003a5c0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1003a5c4 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003a5c9 je 0x1003a5ed */
  if (C.zf) goto L_1003a5ed;
  /* 1003a5cb sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003a5ce je 0x1003a5e7 */
  if (C.zf) goto L_1003a5e7;
  /* 1003a5d0 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003a5d3 je 0x1003a5e1 */
  if (C.zf) goto L_1003a5e1;
  /* 1003a5d5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1003a5d6 je 0x1003a5db */
  if (C.zf) goto L_1003a5db;
  /* 1003a5d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003a5da ret  */
  ESPCHK(0x1003a5c0u, _esp0);
  ESP += 4; return;
L_1003a5db:;
  /* 1003a5db mov eax, 0x404 */
  EAX = (0x404u);
  /* 1003a5e0 ret  */
  ESPCHK(0x1003a5c0u, _esp0);
  ESP += 4; return;
L_1003a5e1:;
  /* 1003a5e1 mov eax, 0x412 */
  EAX = (0x412u);
  /* 1003a5e6 ret  */
  ESPCHK(0x1003a5c0u, _esp0);
  ESP += 4; return;
L_1003a5e7:;
  /* 1003a5e7 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1003a5ec ret  */
  ESPCHK(0x1003a5c0u, _esp0);
  ESP += 4; return;
L_1003a5ed:;
  /* 1003a5ed mov eax, 0x411 */
  EAX = (0x411u);
  /* 1003a5f2 ret  */
  ESPCHK(0x1003a5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5f3 @ 0x1003a5f3 (41 bytes, 17 insns) */
void f_1003a5f3(void) {
  FTRACE(0x1003a5f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003a5f3 push edi */
  push32((uint32_t)(EDI));
  /* 1003a5f4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1003a5f6 pop ecx */
  ECX = (pop32());
  /* 1003a5f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003a5f9 mov edi, 0x10046ae0 */
  EDI = (0x10046ae0u);
  /* 1003a5fe rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1003a600 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1003a601 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003a603 mov edi, 0x100469d0 */
  EDI = (0x100469d0u);
  /* 1003a608 mov dword ptr [0x100469c4], eax */
  w32((uint32_t)(0x100469c4), (EAX));
  /* 1003a60d mov dword ptr [0x100469dc], eax */
  w32((uint32_t)(0x100469dc), (EAX));
  /* 1003a612 mov dword ptr [0x10046be4], eax */
  w32((uint32_t)(0x10046be4), (EAX));
  /* 1003a617 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1003a618 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1003a619 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1003a61a pop edi */
  EDI = (pop32());
  /* 1003a61b ret  */
  ESPCHK(0x1003a5f3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a61c @ 0x1003a61c (389 bytes, 124 insns) */
void f_1003a61c(void) {
  FTRACE(0x1003a61cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003a61c push ebp */
  push32((uint32_t)(EBP));
  /* 1003a61d mov ebp, esp */
  EBP = (ESP);
  /* 1003a61f sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003a625 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1003a628 push esi */
  push32((uint32_t)(ESI));
  /* 1003a629 push eax */
  push32((uint32_t)(EAX));
  /* 1003a62a push dword ptr [0x100469c4] */
  push32((uint32_t)(r32((uint32_t)(0x100469c4))));
  /* 1003a630 call dword ptr [0x1003e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e09c))), 0x1003a636u);
  /* 1003a636 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a639 jne 0x1003a755 */
  if (!C.zf) goto L_1003a755;
  /* 1003a63f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003a641 mov esi, 0x100 */
  ESI = (0x100u);
L_1003a646:;
  /* 1003a646 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 1003a64d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1003a64e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a650 jb 0x1003a646 */
  if (C.cf) goto L_1003a646;
  /* 1003a652 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 1003a655 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 1003a65c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003a65e je 0x1003a697 */
  if (C.zf) goto L_1003a697;
  /* 1003a660 push ebx */
  push32((uint32_t)(EBX));
  /* 1003a661 push edi */
  push32((uint32_t)(EDI));
  /* 1003a662 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_1003a665:;
  /* 1003a665 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 1003a668 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1003a66b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a66d ja 0x1003a68c */
  if ((!C.cf&&!C.zf)) goto L_1003a68c;
  /* 1003a66f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003a671 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 1003a678 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1003a679 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 1003a67e mov ebx, ecx */
  EBX = (ECX);
  /* 1003a680 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1003a683 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1003a685 mov ecx, ebx */
  ECX = (EBX);
  /* 1003a687 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1003a68a rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_1003a68c:;
  /* 1003a68c inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1003a68d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1003a68e mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 1003a691 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003a693 jne 0x1003a665 */
  if (!C.zf) goto L_1003a665;
  /* 1003a695 pop edi */
  EDI = (pop32());
  /* 1003a696 pop ebx */
  EBX = (pop32());
L_1003a697:;
  /* 1003a697 push 0 */
  push32((uint32_t)(0x0u));
  /* 1003a699 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 1003a69f push dword ptr [0x10046be4] */
  push32((uint32_t)(r32((uint32_t)(0x10046be4))));
  /* 1003a6a5 push dword ptr [0x100469c4] */
  push32((uint32_t)(r32((uint32_t)(0x100469c4))));
  /* 1003a6ab push eax */
  push32((uint32_t)(EAX));
  /* 1003a6ac lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1003a6b2 push esi */
  push32((uint32_t)(ESI));
  /* 1003a6b3 push eax */
  push32((uint32_t)(EAX));
  /* 1003a6b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003a6b6 call 0x1003c25d */
  push32(0x1003a6bbu); f_1003c25d();
  /* 1003a6bb push 0 */
  push32((uint32_t)(0x0u));
  /* 1003a6bd lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 1003a6c3 push dword ptr [0x100469c4] */
  push32((uint32_t)(r32((uint32_t)(0x100469c4))));
  /* 1003a6c9 push esi */
  push32((uint32_t)(ESI));
  /* 1003a6ca push eax */
  push32((uint32_t)(EAX));
  /* 1003a6cb lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1003a6d1 push esi */
  push32((uint32_t)(ESI));
  /* 1003a6d2 push eax */
  push32((uint32_t)(EAX));
  /* 1003a6d3 push esi */
  push32((uint32_t)(ESI));
  /* 1003a6d4 push dword ptr [0x10046be4] */
  push32((uint32_t)(r32((uint32_t)(0x10046be4))));
  /* 1003a6da call 0x1003c3a6 */
  push32(0x1003a6dfu); f_1003c3a6();
  /* 1003a6df push 0 */
  push32((uint32_t)(0x0u));
  /* 1003a6e1 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 1003a6e7 push dword ptr [0x100469c4] */
  push32((uint32_t)(r32((uint32_t)(0x100469c4))));
  /* 1003a6ed push esi */
  push32((uint32_t)(ESI));
  /* 1003a6ee push eax */
  push32((uint32_t)(EAX));
  /* 1003a6ef lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1003a6f5 push esi */
  push32((uint32_t)(ESI));
  /* 1003a6f6 push eax */
  push32((uint32_t)(EAX));
  /* 1003a6f7 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1003a6fc push dword ptr [0x10046be4] */
  push32((uint32_t)(r32((uint32_t)(0x10046be4))));
  /* 1003a702 call 0x1003c3a6 */
  push32(0x1003a707u); f_1003c3a6();
  /* 1003a707 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003a70a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003a70c lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_1003a712:;
  /* 1003a712 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1003a715 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1003a718 je 0x1003a730 */
  if (C.zf) goto L_1003a730;
  /* 1003a71a or byte ptr [eax + 0x10046ae1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10046ae1)))|(0x10u); w8((uint32_t)(EAX + 0x10046ae1), (_r)); fl_logic(_r,8); }
  /* 1003a721 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_1003a728:;
  /* 1003a728 mov byte ptr [eax + 0x100469e0], dl */
  w8((uint32_t)(EAX + 0x100469e0), (DL));
  /* 1003a72e jmp 0x1003a74c */
  goto L_1003a74c;
L_1003a730:;
  /* 1003a730 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 1003a733 je 0x1003a745 */
  if (C.zf) goto L_1003a745;
  /* 1003a735 or byte ptr [eax + 0x10046ae1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10046ae1)))|(0x20u); w8((uint32_t)(EAX + 0x10046ae1), (_r)); fl_logic(_r,8); }
  /* 1003a73c mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 1003a743 jmp 0x1003a728 */
  goto L_1003a728;
L_1003a745:;
  /* 1003a745 and byte ptr [eax + 0x100469e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100469e0)))&(0x0u); w8((uint32_t)(EAX + 0x100469e0), (_r)); fl_logic(_r,8); }
L_1003a74c:;
  /* 1003a74c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1003a74d inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1003a74e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1003a74f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a751 jb 0x1003a712 */
  if (C.cf) goto L_1003a712;
  /* 1003a753 jmp 0x1003a79e */
  goto L_1003a79e;
L_1003a755:;
  /* 1003a755 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003a757 mov esi, 0x100 */
  ESI = (0x100u);
L_1003a75c:;
  /* 1003a75c cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a75f jb 0x1003a77a */
  if (C.cf) goto L_1003a77a;
  /* 1003a761 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a764 ja 0x1003a77a */
  if ((!C.cf&&!C.zf)) goto L_1003a77a;
  /* 1003a766 or byte ptr [eax + 0x10046ae1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10046ae1)))|(0x10u); w8((uint32_t)(EAX + 0x10046ae1), (_r)); fl_logic(_r,8); }
  /* 1003a76d mov cl, al */
  CL = (AL);
  /* 1003a76f add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_1003a772:;
  /* 1003a772 mov byte ptr [eax + 0x100469e0], cl */
  w8((uint32_t)(EAX + 0x100469e0), (CL));
  /* 1003a778 jmp 0x1003a799 */
  goto L_1003a799;
L_1003a77a:;
  /* 1003a77a cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a77d jb 0x1003a792 */
  if (C.cf) goto L_1003a792;
  /* 1003a77f cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a782 ja 0x1003a792 */
  if ((!C.cf&&!C.zf)) goto L_1003a792;
  /* 1003a784 or byte ptr [eax + 0x10046ae1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10046ae1)))|(0x20u); w8((uint32_t)(EAX + 0x10046ae1), (_r)); fl_logic(_r,8); }
  /* 1003a78b mov cl, al */
  CL = (AL);
  /* 1003a78d sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1003a790 jmp 0x1003a772 */
  goto L_1003a772;
L_1003a792:;
  /* 1003a792 and byte ptr [eax + 0x100469e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100469e0)))&(0x0u); w8((uint32_t)(EAX + 0x100469e0), (_r)); fl_logic(_r,8); }
L_1003a799:;
  /* 1003a799 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1003a79a cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a79c jb 0x1003a75c */
  if (C.cf) goto L_1003a75c;
L_1003a79e:;
  /* 1003a79e pop esi */
  ESI = (pop32());
  /* 1003a79f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003a7a0 ret  */
  ESPCHK(0x1003a61cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7a1 @ 0x1003a7a1 (28 bytes, 7 insns) */
void f_1003a7a1(void) {
  FTRACE(0x1003a7a1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003a7a1 cmp dword ptr [0x10047d28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10047d28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a7a8 jne 0x1003a7bc */
  if (!C.zf) goto L_1003a7bc;
  /* 1003a7aa push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1003a7ac call 0x1003a3c9 */
  push32(0x1003a7b1u); f_1003a3c9();
  /* 1003a7b1 pop ecx */
  ECX = (pop32());
  /* 1003a7b2 mov dword ptr [0x10047d28], 1 */
  w32((uint32_t)(0x10047d28), (0x1u));
L_1003a7bc:;
  /* 1003a7bc ret  */
  ESPCHK(0x1003a7a1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7c0 @ 0x1003a7c0 (664 bytes, 268 insns) [15 switch table(s)] */
void f_1003a7c0(void) {
  FTRACE(0x1003a7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003a7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1003a7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1003a7c3 push edi */
  push32((uint32_t)(EDI));
  /* 1003a7c4 push esi */
  push32((uint32_t)(ESI));
  /* 1003a7c5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1003a7c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1003a7cb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1003a7ce mov eax, ecx */
  EAX = (ECX);
  /* 1003a7d0 mov edx, ecx */
  EDX = (ECX);
  /* 1003a7d2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003a7d4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a7d6 jbe 0x1003a7e0 */
  if ((C.cf||C.zf)) goto L_1003a7e0;
  /* 1003a7d8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a7da jb 0x1003a958 */
  if (C.cf) goto L_1003a958;
L_1003a7e0:;
  /* 1003a7e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1003a7e6 jne 0x1003a7fc */
  if (!C.zf) goto L_1003a7fc;
  /* 1003a7e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1003a7eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1003a7ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a7f1 jb 0x1003a81c */
  if (C.cf) goto L_1003a81c;
  /* 1003a7f3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1003a7f5 jmp dword ptr [edx*4 + 0x1003a908] */
  switch (EDX) {
    case 0: goto L_1003a918;
    case 1: goto L_1003a920;
    case 2: goto L_1003a92c;
    case 3: goto L_1003a940;
    default: x86_unimpl("switch@0x1003a7f5 out of table"); return;
  }
L_1003a7fc:;
  /* 1003a7fc mov eax, edi */
  EAX = (EDI);
  /* 1003a7fe mov edx, 3 */
  EDX = (0x3u);
  /* 1003a803 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003a806 jb 0x1003a814 */
  if (C.cf) goto L_1003a814;
  /* 1003a808 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1003a80b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003a80d jmp dword ptr [eax*4 + 0x1003a820] */
  switch (EAX) {
    case 1: goto L_1003a830;
    case 2: goto L_1003a85c;
    case 3: goto L_1003a880;
    default: x86_unimpl("switch@0x1003a80d out of table"); return;
  }
L_1003a814:;
  /* 1003a814 jmp dword ptr [ecx*4 + 0x1003a918] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1003a918)))); return;
  /* 1003a81b nop  */
  /* nop */
L_1003a81c:;
  /* 1003a81c jmp dword ptr [ecx*4 + 0x1003a89c] */
  switch (ECX) {
    case 0: goto L_1003a8ff;
    case 1: goto L_1003a8ec;
    case 2: goto L_1003a8e4;
    case 3: goto L_1003a8dc;
    case 4: goto L_1003a8d4;
    case 5: goto L_1003a8cc;
    case 6: goto L_1003a8c4;
    case 7: goto L_1003a8bc;
    default: x86_unimpl("switch@0x1003a81c out of table"); return;
  }
  /* 1003a823 nop  */
  /* nop */
L_1003a830:;
  /* 1003a830 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1003a832 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1003a834 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1003a836 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1003a839 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1003a83c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1003a83f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1003a842 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1003a845 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003a848 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003a84b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a84e jb 0x1003a81c */
  if (C.cf) goto L_1003a81c;
  /* 1003a850 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1003a852 jmp dword ptr [edx*4 + 0x1003a908] */
  switch (EDX) {
    case 0: goto L_1003a918;
    case 1: goto L_1003a920;
    case 2: goto L_1003a92c;
    case 3: goto L_1003a940;
    default: x86_unimpl("switch@0x1003a852 out of table"); return;
  }
  /* 1003a859 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1003a85c:;
  /* 1003a85c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1003a85e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1003a860 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1003a862 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1003a865 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1003a868 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1003a86b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003a86e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003a871 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a874 jb 0x1003a81c */
  if (C.cf) goto L_1003a81c;
  /* 1003a876 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1003a878 jmp dword ptr [edx*4 + 0x1003a908] */
  switch (EDX) {
    case 0: goto L_1003a918;
    case 1: goto L_1003a920;
    case 2: goto L_1003a92c;
    case 3: goto L_1003a940;
    default: x86_unimpl("switch@0x1003a878 out of table"); return;
  }
  /* 1003a87f nop  */
  /* nop */
L_1003a880:;
  /* 1003a880 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1003a882 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1003a884 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1003a886 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1003a887 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1003a88a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1003a88b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a88e jb 0x1003a81c */
  if (C.cf) goto L_1003a81c;
  /* 1003a890 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1003a892 jmp dword ptr [edx*4 + 0x1003a908] */
  switch (EDX) {
    case 0: goto L_1003a918;
    case 1: goto L_1003a920;
    case 2: goto L_1003a92c;
    case 3: goto L_1003a940;
    default: x86_unimpl("switch@0x1003a892 out of table"); return;
  }
  /* 1003a899 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1003a8bc:;
  /* 1003a8bc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1003a8c0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1003a8c4:;
  /* 1003a8c4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1003a8c8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1003a8cc:;
  /* 1003a8cc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1003a8d0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1003a8d4:;
  /* 1003a8d4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1003a8d8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1003a8dc:;
  /* 1003a8dc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1003a8e0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1003a8e4:;
  /* 1003a8e4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1003a8e8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1003a8ec:;
  /* 1003a8ec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1003a8f0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1003a8f4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1003a8fb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003a8fd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1003a8ff:;
  /* 1003a8ff jmp dword ptr [edx*4 + 0x1003a908] */
  switch (EDX) {
    case 0: goto L_1003a918;
    case 1: goto L_1003a920;
    case 2: goto L_1003a92c;
    case 3: goto L_1003a940;
    default: x86_unimpl("switch@0x1003a8ff out of table"); return;
  }
  /* 1003a906 mov edi, edi */
  EDI = (EDI);
L_1003a918:;
  /* 1003a918 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003a91b pop esi */
  ESI = (pop32());
  /* 1003a91c pop edi */
  EDI = (pop32());
  /* 1003a91d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003a91e ret  */
  ESPCHK(0x1003a7c0u, _esp0);
  ESP += 4; return;
  /* 1003a91f nop  */
  /* nop */
L_1003a920:;
  /* 1003a920 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1003a922 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1003a924 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003a927 pop esi */
  ESI = (pop32());
  /* 1003a928 pop edi */
  EDI = (pop32());
  /* 1003a929 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003a92a ret  */
  ESPCHK(0x1003a7c0u, _esp0);
  ESP += 4; return;
  /* 1003a92b nop  */
  /* nop */
L_1003a92c:;
  /* 1003a92c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1003a92e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1003a930 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1003a933 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1003a936 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003a939 pop esi */
  ESI = (pop32());
  /* 1003a93a pop edi */
  EDI = (pop32());
  /* 1003a93b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003a93c ret  */
  ESPCHK(0x1003a7c0u, _esp0);
  ESP += 4; return;
  /* 1003a93d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1003a940:;
  /* 1003a940 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1003a942 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1003a944 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1003a947 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1003a94a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1003a94d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1003a950 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003a953 pop esi */
  ESI = (pop32());
  /* 1003a954 pop edi */
  EDI = (pop32());
  /* 1003a955 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003a956 ret  */
  ESPCHK(0x1003a7c0u, _esp0);
  ESP += 4; return;
  /* 1003a957 nop  */
  /* nop */
L_1003a958:;
  /* 1003a958 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1003a95c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1003a960 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1003a966 jne 0x1003a98c */
  if (!C.zf) goto L_1003a98c;
  /* 1003a968 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1003a96b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1003a96e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a971 jb 0x1003a980 */
  if (C.cf) goto L_1003a980;
  /* 1003a973 std  */
  C.df=1;
  /* 1003a974 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1003a976 cld  */
  C.df=0;
  /* 1003a977 jmp dword ptr [edx*4 + 0x1003aaa0] */
  switch (EDX) {
    case 0: goto L_1003aab0;
    case 1: goto L_1003aab8;
    case 2: goto L_1003aac8;
    case 3: goto L_1003aadc;
    default: x86_unimpl("switch@0x1003a977 out of table"); return;
  }
  /* 1003a97e mov edi, edi */
  EDI = (EDI);
L_1003a980:;
  /* 1003a980 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1003a982 jmp dword ptr [ecx*4 + 0x1003aa50] */
  switch (ECX) {
    case 0: goto L_1003aa97;
    default: x86_unimpl("switch@0x1003a982 out of table"); return;
  }
  /* 1003a989 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1003a98c:;
  /* 1003a98c mov eax, edi */
  EAX = (EDI);
  /* 1003a98e mov edx, 3 */
  EDX = (0x3u);
  /* 1003a993 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a996 jb 0x1003a9a4 */
  if (C.cf) goto L_1003a9a4;
  /* 1003a998 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1003a99b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003a99d jmp dword ptr [eax*4 + 0x1003a9a8] */
  switch (EAX) {
    case 1: goto L_1003a9b8;
    case 2: goto L_1003a9d8;
    case 3: goto L_1003aa00;
    default: x86_unimpl("switch@0x1003a99d out of table"); return;
  }
L_1003a9a4:;
  /* 1003a9a4 jmp dword ptr [ecx*4 + 0x1003aaa0] */
  switch (ECX) {
    case 0: goto L_1003aab0;
    case 1: goto L_1003aab8;
    case 2: goto L_1003aac8;
    case 3: goto L_1003aadc;
    default: x86_unimpl("switch@0x1003a9a4 out of table"); return;
  }
  /* 1003a9ab nop  */
  /* nop */
L_1003a9b8:;
  /* 1003a9b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1003a9bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1003a9bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1003a9c0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1003a9c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1003a9c4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1003a9c5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a9c8 jb 0x1003a980 */
  if (C.cf) goto L_1003a980;
  /* 1003a9ca std  */
  C.df=1;
  /* 1003a9cb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1003a9cd cld  */
  C.df=0;
  /* 1003a9ce jmp dword ptr [edx*4 + 0x1003aaa0] */
  switch (EDX) {
    case 0: goto L_1003aab0;
    case 1: goto L_1003aab8;
    case 2: goto L_1003aac8;
    case 3: goto L_1003aadc;
    default: x86_unimpl("switch@0x1003a9ce out of table"); return;
  }
  /* 1003a9d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1003a9d8:;
  /* 1003a9d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1003a9db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1003a9dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1003a9e0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1003a9e3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1003a9e6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1003a9e9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003a9ec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003a9ef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003a9f2 jb 0x1003a980 */
  if (C.cf) goto L_1003a980;
L_1003a9f4:;
  /* 1003a9f4 std  */
  C.df=1;
  /* 1003a9f5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1003a9f7 cld  */
  C.df=0;
  /* 1003a9f8 jmp dword ptr [edx*4 + 0x1003aaa0] */
  switch (EDX) {
    case 0: goto L_1003aab0;
    case 1: goto L_1003aab8;
    case 2: goto L_1003aac8;
    case 3: goto L_1003aadc;
    default: x86_unimpl("switch@0x1003a9f8 out of table"); return;
  }
  /* 1003a9ff nop  */
  /* nop */
L_1003aa00:;
  /* 1003aa00 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1003aa03 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1003aa05 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1003aa08 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1003aa0b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1003aa0e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1003aa11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1003aa14 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1003aa17 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003aa1a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003aa1d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003aa20 jb 0x1003a980 */
  if (C.cf) goto L_1003a980;
  /* 1003aa26 std  */
  C.df=1;
  /* 1003aa27 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1003aa29 cld  */
  C.df=0;
  /* 1003aa2a jmp dword ptr [edx*4 + 0x1003aaa0] */
  switch (EDX) {
    case 0: goto L_1003aab0;
    case 1: goto L_1003aab8;
    case 2: goto L_1003aac8;
    case 3: goto L_1003aadc;
    default: x86_unimpl("switch@0x1003aa2a out of table"); return;
  }
  /* 1003aa31 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1003aa34 push esp */
  push32((uint32_t)(ESP));
  /* 1003aa35 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1003aa36 add edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003aa38 pop esp */
  ESP = (pop32());
  /* 1003aa39 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1003aa3a add edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003aa3c stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1003aa3e add edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003aa40 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x1003aa40");
  /* 1003aa41 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1003aa42 add edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003aa44 je 0x1003a9f0 */
  if (C.zf) goto L_1003a9f0;
  /* 1003aa46 add edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003aa48 jl 0x1003a9f4 */
  if ((C.sf!=C.of)) goto L_1003a9f4;
  /* 1003aa4a add edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003aa4d stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1003aa4e add edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003aa54 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1003aa58 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1003aa5c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1003aa60 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1003aa64 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1003aa68 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1003aa6c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1003aa70 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1003aa74 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1003aa78 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1003aa7c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1003aa80 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1003aa84 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1003aa88 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1003aa8c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1003aa93 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003aa95 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1003aa97:;
  /* 1003aa97 jmp dword ptr [edx*4 + 0x1003aaa0] */
  switch (EDX) {
    case 0: goto L_1003aab0;
    case 1: goto L_1003aab8;
    case 2: goto L_1003aac8;
    case 3: goto L_1003aadc;
    default: x86_unimpl("switch@0x1003aa97 out of table"); return;
  }
  /* 1003aa9e mov edi, edi */
  EDI = (EDI);
L_1003aab0:;
  /* 1003aab0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003aab3 pop esi */
  ESI = (pop32());
  /* 1003aab4 pop edi */
  EDI = (pop32());
  /* 1003aab5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003aab6 ret  */
  ESPCHK(0x1003a7c0u, _esp0);
  ESP += 4; return;
  /* 1003aab7 nop  */
  /* nop */
L_1003aab8:;
  /* 1003aab8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1003aabb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1003aabe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003aac1 pop esi */
  ESI = (pop32());
  /* 1003aac2 pop edi */
  EDI = (pop32());
  /* 1003aac3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003aac4 ret  */
  ESPCHK(0x1003a7c0u, _esp0);
  ESP += 4; return;
  /* 1003aac5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1003aac8:;
  /* 1003aac8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1003aacb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1003aace mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1003aad1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1003aad4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003aad7 pop esi */
  ESI = (pop32());
  /* 1003aad8 pop edi */
  EDI = (pop32());
  /* 1003aad9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003aada ret  */
  ESPCHK(0x1003a7c0u, _esp0);
  ESP += 4; return;
  /* 1003aadb nop  */
  /* nop */
L_1003aadc:;
  /* 1003aadc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1003aadf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1003aae2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1003aae5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1003aae8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1003aaeb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1003aaee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003aaf1 pop esi */
  ESI = (pop32());
  /* 1003aaf2 pop edi */
  EDI = (pop32());
  /* 1003aaf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003aaf4 ret  */
  ESPCHK(0x1003a7c0u, _esp0);
  ESP += 4; return;
L_1003a9f0: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1003a9f0 (unresolved jump table)"); return;
}

/* FUN_1000aaf5 @ 0x1003aaf5 (23 bytes, 7 insns) */
void f_1003aaf5(void) {
  FTRACE(0x1003aaf5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003aaf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1003aaf7 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1003aafb push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1003aaff push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1003ab03 call 0x1003ab0c */
  push32(0x1003ab08u); f_1003ab0c();
  /* 1003ab08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003ab0b ret  */
  ESPCHK(0x1003aaf5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab0c @ 0x1003ab0c (517 bytes, 195 insns) */
void f_1003ab0c(void) {
  FTRACE(0x1003ab0cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003ab0c push ebp */
  push32((uint32_t)(EBP));
  /* 1003ab0d mov ebp, esp */
  EBP = (ESP);
  /* 1003ab0f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003ab12 push ebx */
  push32((uint32_t)(EBX));
  /* 1003ab13 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1003ab17 push esi */
  push32((uint32_t)(ESI));
  /* 1003ab18 push edi */
  push32((uint32_t)(EDI));
  /* 1003ab19 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1003ab1c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1003ab1e lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 1003ab21 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1003ab24:;
  /* 1003ab24 cmp dword ptr [0x10040bd0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10040bd0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003ab2b jle 0x1003ab3c */
  if ((C.zf||C.sf!=C.of)) goto L_1003ab3c;
  /* 1003ab2d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1003ab30 push 8 */
  push32((uint32_t)(0x8u));
  /* 1003ab32 push eax */
  push32((uint32_t)(EAX));
  /* 1003ab33 call 0x100393ab */
  push32(0x1003ab38u); f_100393ab();
  /* 1003ab38 pop ecx */
  ECX = (pop32());
  /* 1003ab39 pop ecx */
  ECX = (pop32());
  /* 1003ab3a jmp 0x1003ab4b */
  goto L_1003ab4b;
L_1003ab3c:;
  /* 1003ab3c mov ecx, dword ptr [0x100409c0] */
  ECX = (r32((uint32_t)(0x100409c0)));
  /* 1003ab42 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1003ab45 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1003ab48 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_1003ab4b:;
  /* 1003ab4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003ab4d je 0x1003ab54 */
  if (C.zf) goto L_1003ab54;
  /* 1003ab4f mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 1003ab51 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1003ab52 jmp 0x1003ab24 */
  goto L_1003ab24;
L_1003ab54:;
  /* 1003ab54 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003ab57 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 1003ab5a jne 0x1003ab62 */
  if (!C.zf) goto L_1003ab62;
  /* 1003ab5c or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1003ab60 jmp 0x1003ab67 */
  goto L_1003ab67;
L_1003ab62:;
  /* 1003ab62 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003ab65 jne 0x1003ab6d */
  if (!C.zf) goto L_1003ab6d;
L_1003ab67:;
  /* 1003ab67 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 1003ab69 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1003ab6a mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1003ab6d:;
  /* 1003ab6d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1003ab70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003ab72 jl 0x1003ad01 */
  if ((C.sf!=C.of)) goto L_1003ad01;
  /* 1003ab78 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003ab7b je 0x1003ad01 */
  if (C.zf) goto L_1003ad01;
  /* 1003ab81 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003ab84 jg 0x1003ad01 */
  if ((!C.zf&&C.sf==C.of)) goto L_1003ad01;
  /* 1003ab8a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1003ab8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003ab8e pop ecx */
  ECX = (pop32());
  /* 1003ab8f jne 0x1003abb5 */
  if (!C.zf) goto L_1003abb5;
  /* 1003ab91 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003ab94 je 0x1003ab9f */
  if (C.zf) goto L_1003ab9f;
  /* 1003ab96 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 1003ab9d jmp 0x1003abd1 */
  goto L_1003abd1;
L_1003ab9f:;
  /* 1003ab9f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1003aba1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003aba3 je 0x1003abb2 */
  if (C.zf) goto L_1003abb2;
  /* 1003aba5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003aba7 je 0x1003abb2 */
  if (C.zf) goto L_1003abb2;
  /* 1003aba9 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 1003abb0 jmp 0x1003abd1 */
  goto L_1003abd1;
L_1003abb2:;
  /* 1003abb2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1003abb5:;
  /* 1003abb5 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003abb8 jne 0x1003abd1 */
  if (!C.zf) goto L_1003abd1;
  /* 1003abba cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003abbd jne 0x1003abd1 */
  if (!C.zf) goto L_1003abd1;
  /* 1003abbf mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1003abc1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003abc3 je 0x1003abc9 */
  if (C.zf) goto L_1003abc9;
  /* 1003abc5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003abc7 jne 0x1003abd1 */
  if (!C.zf) goto L_1003abd1;
L_1003abc9:;
  /* 1003abc9 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 1003abcc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1003abcd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1003abce mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1003abd1:;
  /* 1003abd1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1003abd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1003abd6 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1003abd9 mov edi, 0x103 */
  EDI = (0x103u);
  /* 1003abde mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1003abe1:;
  /* 1003abe1 cmp dword ptr [0x10040bd0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10040bd0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003abe8 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1003abeb jle 0x1003abf9 */
  if ((C.zf||C.sf!=C.of)) goto L_1003abf9;
  /* 1003abed push 4 */
  push32((uint32_t)(0x4u));
  /* 1003abef push esi */
  push32((uint32_t)(ESI));
  /* 1003abf0 call 0x100393ab */
  push32(0x1003abf5u); f_100393ab();
  /* 1003abf5 pop ecx */
  ECX = (pop32());
  /* 1003abf6 pop ecx */
  ECX = (pop32());
  /* 1003abf7 jmp 0x1003ac04 */
  goto L_1003ac04;
L_1003abf9:;
  /* 1003abf9 mov eax, dword ptr [0x100409c0] */
  EAX = (r32((uint32_t)(0x100409c0)));
  /* 1003abfe mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 1003ac01 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1003ac04:;
  /* 1003ac04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003ac06 je 0x1003ac10 */
  if (C.zf) goto L_1003ac10;
  /* 1003ac08 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1003ac0b sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003ac0e jmp 0x1003ac42 */
  goto L_1003ac42;
L_1003ac10:;
  /* 1003ac10 cmp dword ptr [0x10040bd0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10040bd0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003ac17 jle 0x1003ac24 */
  if ((C.zf||C.sf!=C.of)) goto L_1003ac24;
  /* 1003ac19 push edi */
  push32((uint32_t)(EDI));
  /* 1003ac1a push esi */
  push32((uint32_t)(ESI));
  /* 1003ac1b call 0x100393ab */
  push32(0x1003ac20u); f_100393ab();
  /* 1003ac20 pop ecx */
  ECX = (pop32());
  /* 1003ac21 pop ecx */
  ECX = (pop32());
  /* 1003ac22 jmp 0x1003ac2f */
  goto L_1003ac2f;
L_1003ac24:;
  /* 1003ac24 mov eax, dword ptr [0x100409c0] */
  EAX = (r32((uint32_t)(0x100409c0)));
  /* 1003ac29 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 1003ac2d and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_1003ac2f:;
  /* 1003ac2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003ac31 je 0x1003ac7d */
  if (C.zf) goto L_1003ac7d;
  /* 1003ac33 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1003ac36 push eax */
  push32((uint32_t)(EAX));
  /* 1003ac37 call 0x1003d0e8 */
  push32(0x1003ac3cu); f_1003d0e8();
  /* 1003ac3c pop ecx */
  ECX = (pop32());
  /* 1003ac3d mov ecx, eax */
  ECX = (EAX);
  /* 1003ac3f sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_1003ac42:;
  /* 1003ac42 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003ac45 jae 0x1003ac7d */
  if (!C.cf) goto L_1003ac7d;
  /* 1003ac47 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 1003ac4a or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1003ac4e cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003ac51 jb 0x1003ac67 */
  if (C.cf) goto L_1003ac67;
  /* 1003ac53 jne 0x1003ac61 */
  if (!C.zf) goto L_1003ac61;
  /* 1003ac55 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1003ac58 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1003ac5a div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1003ac5d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003ac5f jbe 0x1003ac67 */
  if ((C.cf||C.zf)) goto L_1003ac67;
L_1003ac61:;
  /* 1003ac61 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1003ac65 jmp 0x1003ac70 */
  goto L_1003ac70;
L_1003ac67:;
  /* 1003ac67 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1003ac6b add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003ac6d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_1003ac70:;
  /* 1003ac70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1003ac73 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1003ac76 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1003ac78 jmp 0x1003abe1 */
  goto L_1003abe1;
L_1003ac7d:;
  /* 1003ac7d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1003ac80 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1003ac83 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1003ac86 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1003ac88 jne 0x1003ac9a */
  if (!C.zf) goto L_1003ac9a;
  /* 1003ac8a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1003ac8c je 0x1003ac94 */
  if (C.zf) goto L_1003ac94;
  /* 1003ac8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003ac91 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1003ac94:;
  /* 1003ac94 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1003ac98 jmp 0x1003ace5 */
  goto L_1003ace5;
L_1003ac9a:;
  /* 1003ac9a test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 1003ac9c mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 1003aca1 jne 0x1003acbe */
  if (!C.zf) goto L_1003acbe;
  /* 1003aca3 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 1003aca5 jne 0x1003ace5 */
  if (!C.zf) goto L_1003ace5;
  /* 1003aca7 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1003acaa je 0x1003acb5 */
  if (C.zf) goto L_1003acb5;
  /* 1003acac cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003acb3 ja 0x1003acbe */
  if ((!C.cf&&!C.zf)) goto L_1003acbe;
L_1003acb5:;
  /* 1003acb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003acb7 jne 0x1003ace5 */
  if (!C.zf) goto L_1003ace5;
  /* 1003acb9 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003acbc jbe 0x1003ace5 */
  if ((C.cf||C.zf)) goto L_1003ace5;
L_1003acbe:;
  /* 1003acbe call 0x1003bf51 */
  push32(0x1003acc3u); f_1003bf51();
  /* 1003acc3 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 1003acc7 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 1003accd je 0x1003acd5 */
  if (C.zf) goto L_1003acd5;
  /* 1003accf or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1003acd3 jmp 0x1003ace5 */
  goto L_1003ace5;
L_1003acd5:;
  /* 1003acd5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1003acd8 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1003acda neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 1003acdc sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003acde neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1003ace0 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003ace2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1003ace5:;
  /* 1003ace5 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1003ace7 je 0x1003acee */
  if (C.zf) goto L_1003acee;
  /* 1003ace9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1003acec mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_1003acee:;
  /* 1003acee test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 1003acf2 je 0x1003acfc */
  if (C.zf) goto L_1003acfc;
  /* 1003acf4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1003acf7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1003acf9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1003acfc:;
  /* 1003acfc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1003acff jmp 0x1003ad0c */
  goto L_1003ad0c;
L_1003ad01:;
  /* 1003ad01 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1003ad04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003ad06 je 0x1003ad0a */
  if (C.zf) goto L_1003ad0a;
  /* 1003ad08 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_1003ad0a:;
  /* 1003ad0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1003ad0c:;
  /* 1003ad0c pop edi */
  EDI = (pop32());
  /* 1003ad0d pop esi */
  ESI = (pop32());
  /* 1003ad0e pop ebx */
  EBX = (pop32());
  /* 1003ad0f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003ad10 ret  */
  ESPCHK(0x1003ab0cu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x1003ad30 (193 bytes, 90 insns) */
void f_1003ad30(void) {
  FTRACE(0x1003ad30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003ad30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003ad32 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1003ad36 push ebx */
  push32((uint32_t)(EBX));
  /* 1003ad37 mov ebx, eax */
  EBX = (EAX);
  /* 1003ad39 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1003ad3c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1003ad40 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1003ad46 je 0x1003ad5b */
  if (C.zf) goto L_1003ad5b;
L_1003ad48:;
  /* 1003ad48 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1003ad4a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1003ad4b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003ad4d je 0x1003ad20 */
  if (C.zf) { jmp_ind(0x1003ad20u); return; }
  /* 1003ad4f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 1003ad51 je 0x1003ada4 */
  if (C.zf) goto L_1003ada4;
  /* 1003ad53 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1003ad59 jne 0x1003ad48 */
  if (!C.zf) goto L_1003ad48;
L_1003ad5b:;
  /* 1003ad5b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1003ad5d push edi */
  push32((uint32_t)(EDI));
  /* 1003ad5e mov eax, ebx */
  EAX = (EBX);
  /* 1003ad60 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 1003ad63 push esi */
  push32((uint32_t)(ESI));
  /* 1003ad64 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_1003ad66:;
  /* 1003ad66 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1003ad68 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1003ad6d mov eax, ecx */
  EAX = (ECX);
  /* 1003ad6f mov esi, edi */
  ESI = (EDI);
  /* 1003ad71 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 1003ad73 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003ad75 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003ad77 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1003ad7a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1003ad7d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1003ad7f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1003ad81 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003ad84 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1003ad8a jne 0x1003ada8 */
  if (!C.zf) goto L_1003ada8;
  /* 1003ad8c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1003ad91 je 0x1003ad66 */
  if (C.zf) goto L_1003ad66;
  /* 1003ad93 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1003ad98 jne 0x1003ada2 */
  if (!C.zf) goto L_1003ada2;
  /* 1003ad9a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 1003ada0 jne 0x1003ad66 */
  if (!C.zf) goto L_1003ad66;
L_1003ada2:;
  /* 1003ada2 pop esi */
  ESI = (pop32());
  /* 1003ada3 pop edi */
  EDI = (pop32());
L_1003ada4:;
  /* 1003ada4 pop ebx */
  EBX = (pop32());
  /* 1003ada5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003ada7 ret  */
  ESPCHK(0x1003ad30u, _esp0);
  ESP += 4; return;
L_1003ada8:;
  /* 1003ada8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1003adab cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003adad je 0x1003ade5 */
  if (C.zf) goto L_1003ade5;
  /* 1003adaf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003adb1 je 0x1003ada2 */
  if (C.zf) goto L_1003ada2;
  /* 1003adb3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003adb5 je 0x1003adde */
  if (C.zf) goto L_1003adde;
  /* 1003adb7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1003adb9 je 0x1003ada2 */
  if (C.zf) goto L_1003ada2;
  /* 1003adbb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1003adbe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003adc0 je 0x1003add7 */
  if (C.zf) goto L_1003add7;
  /* 1003adc2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003adc4 je 0x1003ada2 */
  if (C.zf) goto L_1003ada2;
  /* 1003adc6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003adc8 je 0x1003add0 */
  if (C.zf) goto L_1003add0;
  /* 1003adca test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1003adcc je 0x1003ada2 */
  if (C.zf) goto L_1003ada2;
  /* 1003adce jmp 0x1003ad66 */
  goto L_1003ad66;
L_1003add0:;
  /* 1003add0 pop esi */
  ESI = (pop32());
  /* 1003add1 pop edi */
  EDI = (pop32());
  /* 1003add2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 1003add5 pop ebx */
  EBX = (pop32());
  /* 1003add6 ret  */
  ESPCHK(0x1003ad30u, _esp0);
  ESP += 4; return;
L_1003add7:;
  /* 1003add7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1003adda pop esi */
  ESI = (pop32());
  /* 1003addb pop edi */
  EDI = (pop32());
  /* 1003addc pop ebx */
  EBX = (pop32());
  /* 1003addd ret  */
  ESPCHK(0x1003ad30u, _esp0);
  ESP += 4; return;
L_1003adde:;
  /* 1003adde lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 1003ade1 pop esi */
  ESI = (pop32());
  /* 1003ade2 pop edi */
  EDI = (pop32());
  /* 1003ade3 pop ebx */
  EBX = (pop32());
  /* 1003ade4 ret  */
  ESPCHK(0x1003ad30u, _esp0);
  ESP += 4; return;
L_1003ade5:;
  /* 1003ade5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 1003ade8 pop esi */
  ESI = (pop32());
  /* 1003ade9 pop edi */
  EDI = (pop32());
  /* 1003adea pop ebx */
  EBX = (pop32());
  /* 1003adeb ret  */
  ESPCHK(0x1003ad30u, _esp0);
  ESP += 4; return;
  /* 1003adec int3  */
  x86_unimpl("int3 @ 0x1003adec");
  /* 1003aded int3  */
  x86_unimpl("int3 @ 0x1003aded");
  /* 1003adee int3  */
  x86_unimpl("int3 @ 0x1003adee");
  /* 1003adef int3  */
  x86_unimpl("int3 @ 0x1003adef");
}

/* _strstr @ 0x1003adf0 (128 bytes, 66 insns) */
void f_1003adf0(void) {
  FTRACE(0x1003adf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003adf0 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1003adf4 push edi */
  push32((uint32_t)(EDI));
  /* 1003adf5 push ebx */
  push32((uint32_t)(EBX));
  /* 1003adf6 push esi */
  push32((uint32_t)(ESI));
  /* 1003adf7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1003adf9 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1003adfd test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1003adff je 0x1003ae6a */
  if (C.zf) goto L_1003ae6a;
  /* 1003ae01 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 1003ae04 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1003ae06 je 0x1003ae57 */
  if (C.zf) goto L_1003ae57;
L_1003ae08:;
  /* 1003ae08 mov esi, edi */
  ESI = (EDI);
  /* 1003ae0a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1003ae0e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1003ae10 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1003ae11 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003ae13 je 0x1003ae2a */
  if (C.zf) goto L_1003ae2a;
  /* 1003ae15 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003ae17 je 0x1003ae24 */
  if (C.zf) goto L_1003ae24;
L_1003ae19:;
  /* 1003ae19 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1003ae1b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1003ae1c:;
  /* 1003ae1c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003ae1e je 0x1003ae2a */
  if (C.zf) goto L_1003ae2a;
  /* 1003ae20 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003ae22 jne 0x1003ae19 */
  if (!C.zf) goto L_1003ae19;
L_1003ae24:;
  /* 1003ae24 pop esi */
  ESI = (pop32());
  /* 1003ae25 pop ebx */
  EBX = (pop32());
  /* 1003ae26 pop edi */
  EDI = (pop32());
  /* 1003ae27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003ae29 ret  */
  ESPCHK(0x1003adf0u, _esp0);
  ESP += 4; return;
L_1003ae2a:;
  /* 1003ae2a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1003ae2c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1003ae2d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003ae2f jne 0x1003ae1c */
  if (!C.zf) goto L_1003ae1c;
  /* 1003ae31 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_1003ae34:;
  /* 1003ae34 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 1003ae37 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1003ae39 je 0x1003ae63 */
  if (C.zf) goto L_1003ae63;
  /* 1003ae3b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1003ae3d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003ae40 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003ae42 jne 0x1003ae08 */
  if (!C.zf) goto L_1003ae08;
  /* 1003ae44 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 1003ae47 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003ae49 je 0x1003ae63 */
  if (C.zf) goto L_1003ae63;
  /* 1003ae4b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 1003ae4e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003ae51 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003ae53 je 0x1003ae34 */
  if (C.zf) goto L_1003ae34;
  /* 1003ae55 jmp 0x1003ae08 */
  goto L_1003ae08;
L_1003ae57:;
  /* 1003ae57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003ae59 pop esi */
  ESI = (pop32());
  /* 1003ae5a pop ebx */
  EBX = (pop32());
  /* 1003ae5b pop edi */
  EDI = (pop32());
  /* 1003ae5c mov al, dl */
  AL = (DL);
  /* 1003ae5e jmp 0x1003ad36 */
  jmp_ind(0x1003ad36u); return;
L_1003ae63:;
  /* 1003ae63 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 1003ae66 pop esi */
  ESI = (pop32());
  /* 1003ae67 pop ebx */
  EBX = (pop32());
  /* 1003ae68 pop edi */
  EDI = (pop32());
  /* 1003ae69 ret  */
  ESPCHK(0x1003adf0u, _esp0);
  ESP += 4; return;
L_1003ae6a:;
  /* 1003ae6a mov eax, edi */
  EAX = (EDI);
  /* 1003ae6c pop esi */
  ESI = (pop32());
  /* 1003ae6d pop ebx */
  EBX = (pop32());
  /* 1003ae6e pop edi */
  EDI = (pop32());
  /* 1003ae6f ret  */
  ESPCHK(0x1003adf0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1003ae70 (56 bytes, 31 insns) */
void f_1003ae70(void) {
  FTRACE(0x1003ae70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003ae70 push ebp */
  push32((uint32_t)(EBP));
  /* 1003ae71 mov ebp, esp */
  EBP = (ESP);
  /* 1003ae73 push edi */
  push32((uint32_t)(EDI));
  /* 1003ae74 push esi */
  push32((uint32_t)(ESI));
  /* 1003ae75 push ebx */
  push32((uint32_t)(EBX));
  /* 1003ae76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1003ae79 jecxz 0x1003aea1 */
  x86_unimpl("jecxz @ 0x1003ae79");
  /* 1003ae7b mov ebx, ecx */
  EBX = (ECX);
  /* 1003ae7d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1003ae80 mov esi, edi */
  ESI = (EDI);
  /* 1003ae82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003ae84 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1003ae86 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1003ae88 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003ae8a mov edi, esi */
  EDI = (ESI);
  /* 1003ae8c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1003ae8f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1003ae91 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1003ae94 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1003ae96 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003ae99 ja 0x1003ae9f */
  if ((!C.cf&&!C.zf)) goto L_1003ae9f;
  /* 1003ae9b je 0x1003aea1 */
  if (C.zf) goto L_1003aea1;
  /* 1003ae9d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1003ae9e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1003ae9f:;
  /* 1003ae9f not ecx */
  ECX = (~(ECX));
L_1003aea1:;
  /* 1003aea1 mov eax, ecx */
  EAX = (ECX);
  /* 1003aea3 pop ebx */
  EBX = (pop32());
  /* 1003aea4 pop esi */
  ESI = (pop32());
  /* 1003aea5 pop edi */
  EDI = (pop32());
  /* 1003aea6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003aea7 ret  */
  ESPCHK(0x1003ae70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aeb0 @ 0x1003aeb0 (47 bytes, 17 insns) */
void f_1003aeb0(void) {
  FTRACE(0x1003aeb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003aeb0 push ecx */
  push32((uint32_t)(ECX));
  /* 1003aeb1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003aeb6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1003aeba jb 0x1003aed0 */
  if (C.cf) goto L_1003aed0;
L_1003aebc:;
  /* 1003aebc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003aec2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003aec7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1003aec9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003aece jae 0x1003aebc */
  if (!C.cf) goto L_1003aebc;
L_1003aed0:;
  /* 1003aed0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003aed2 mov eax, esp */
  EAX = (ESP);
  /* 1003aed4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1003aed6 mov esp, ecx */
  ESP = (ECX);
  /* 1003aed8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1003aeda mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1003aedd push eax */
  push32((uint32_t)(EAX));
  /* 1003aede ret  */
  ESPCHK(0x1003aeb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aedf @ 0x1003aedf (72 bytes, 17 insns) */
void f_1003aedf(void) {
  FTRACE(0x1003aedfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003aedf push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1003aee4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1003aee6 push dword ptr [0x10047c04] */
  push32((uint32_t)(r32((uint32_t)(0x10047c04))));
  /* 1003aeec call dword ptr [0x1003e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e098))), 0x1003aef2u);
  /* 1003aef2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003aef4 mov dword ptr [0x100469bc], eax */
  w32((uint32_t)(0x100469bc), (EAX));
  /* 1003aef9 jne 0x1003aefc */
  if (!C.zf) goto L_1003aefc;
  /* 1003aefb ret  */
  ESPCHK(0x1003aedfu, _esp0);
  ESP += 4; return;
L_1003aefc:;
  /* 1003aefc mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1003af00 and dword ptr [0x100469b4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100469b4)))&(0x0u); w32((uint32_t)(0x100469b4), (_r)); fl_logic(_r,32); }
  /* 1003af07 and dword ptr [0x100469b8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100469b8)))&(0x0u); w32((uint32_t)(0x100469b8), (_r)); fl_logic(_r,32); }
  /* 1003af0e push 1 */
  push32((uint32_t)(0x1u));
  /* 1003af10 mov dword ptr [0x100469b0], eax */
  w32((uint32_t)(0x100469b0), (EAX));
  /* 1003af15 mov dword ptr [0x100469c0], ecx */
  w32((uint32_t)(0x100469c0), (ECX));
  /* 1003af1b mov dword ptr [0x100469a8], 0x10 */
  w32((uint32_t)(0x100469a8), (0x10u));
  /* 1003af25 pop eax */
  EAX = (pop32());
  /* 1003af26 ret  */
  ESPCHK(0x1003aedfu, _esp0);
  ESP += 4; return;
}

/* FUN_1000af27 @ 0x1003af27 (43 bytes, 14 insns) */
void f_1003af27(void) {
  FTRACE(0x1003af27u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003af27 mov eax, dword ptr [0x100469b8] */
  EAX = (r32((uint32_t)(0x100469b8)));
  /* 1003af2c lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1003af2f mov eax, dword ptr [0x100469bc] */
  EAX = (r32((uint32_t)(0x100469bc)));
  /* 1003af34 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_1003af37:;
  /* 1003af37 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003af39 jae 0x1003af4f */
  if (!C.cf) goto L_1003af4f;
  /* 1003af3b mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1003af3f sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003af42 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003af48 jb 0x1003af51 */
  if (C.cf) goto L_1003af51;
  /* 1003af4a add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003af4d jmp 0x1003af37 */
  goto L_1003af37;
L_1003af4f:;
  /* 1003af4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1003af51:;
  /* 1003af51 ret  */
  ESPCHK(0x1003af27u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af52 @ 0x1003af52 (809 bytes, 265 insns) */
void f_1003af52(void) {
  FTRACE(0x1003af52u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003af52 push ebp */
  push32((uint32_t)(EBP));
  /* 1003af53 mov ebp, esp */
  EBP = (ESP);
  /* 1003af55 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003af58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003af5b push ebx */
  push32((uint32_t)(EBX));
  /* 1003af5c push esi */
  push32((uint32_t)(ESI));
  /* 1003af5d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1003af60 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 1003af63 push edi */
  push32((uint32_t)(EDI));
  /* 1003af64 mov edi, esi */
  EDI = (ESI);
  /* 1003af66 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003af69 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003af6c shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 1003af6f mov ecx, edi */
  ECX = (EDI);
  /* 1003af71 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1003af77 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1003af7e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1003af81 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1003af83 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1003af84 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 1003af87 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1003af8a jne 0x1003b276 */
  if (!C.zf) goto L_1003b276;
  /* 1003af90 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 1003af93 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 1003af96 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1003af99 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 1003af9c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1003af9f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1003afa2 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1003afa5 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 1003afa8 jne 0x1003b028 */
  if (!C.zf) goto L_1003b028;
  /* 1003afaa sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1003afad dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1003afae cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003afb1 jbe 0x1003afb6 */
  if ((C.cf||C.zf)) goto L_1003afb6;
  /* 1003afb3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1003afb5 pop edx */
  EDX = (pop32());
L_1003afb6:;
  /* 1003afb6 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1003afb9 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003afbc jne 0x1003b00a */
  if (!C.zf) goto L_1003b00a;
  /* 1003afbe cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003afc1 jae 0x1003afe1 */
  if (!C.cf) goto L_1003afe1;
  /* 1003afc3 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1003afc8 mov ecx, edx */
  ECX = (EDX);
  /* 1003afca shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1003afcc lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1003afd0 not ebx */
  EBX = (~(EBX));
  /* 1003afd2 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1003afd6 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1003afd8 jne 0x1003b002 */
  if (!C.zf) goto L_1003b002;
  /* 1003afda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003afdd and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1003afdf jmp 0x1003b002 */
  goto L_1003b002;
L_1003afe1:;
  /* 1003afe1 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1003afe4 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1003afe9 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1003afeb lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1003afef not ebx */
  EBX = (~(EBX));
  /* 1003aff1 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1003aff8 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1003affa jne 0x1003b002 */
  if (!C.zf) goto L_1003b002;
  /* 1003affc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003afff and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1003b002:;
  /* 1003b002 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1003b005 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1003b008 jmp 0x1003b00d */
  goto L_1003b00d;
L_1003b00a:;
  /* 1003b00a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_1003b00d:;
  /* 1003b00d mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 1003b010 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 1003b013 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003b016 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 1003b019 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1003b01c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1003b01f mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 1003b022 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 1003b025 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_1003b028:;
  /* 1003b028 mov edx, ecx */
  EDX = (ECX);
  /* 1003b02a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1003b02d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1003b02e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b031 jbe 0x1003b036 */
  if ((C.cf||C.zf)) goto L_1003b036;
  /* 1003b033 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1003b035 pop edx */
  EDX = (pop32());
L_1003b036:;
  /* 1003b036 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1003b039 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 1003b03c mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 1003b03f jne 0x1003b0d9 */
  if (!C.zf) goto L_1003b0d9;
  /* 1003b045 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003b048 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1003b04b sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 1003b04e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1003b050 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1003b053 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1003b054 pop esi */
  ESI = (pop32());
  /* 1003b055 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b057 jbe 0x1003b05b */
  if ((C.cf||C.zf)) goto L_1003b05b;
  /* 1003b059 mov ebx, esi */
  EBX = (ESI);
L_1003b05b:;
  /* 1003b05b add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003b05e mov edx, ecx */
  EDX = (ECX);
  /* 1003b060 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1003b063 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1003b066 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1003b067 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b069 jbe 0x1003b06d */
  if ((C.cf||C.zf)) goto L_1003b06d;
  /* 1003b06b mov edx, esi */
  EDX = (ESI);
L_1003b06d:;
  /* 1003b06d cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b06f je 0x1003b0d4 */
  if (C.zf) goto L_1003b0d4;
  /* 1003b071 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1003b074 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1003b077 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b07a jne 0x1003b0bc */
  if (!C.zf) goto L_1003b0bc;
  /* 1003b07c cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b07f jae 0x1003b09d */
  if (!C.cf) goto L_1003b09d;
  /* 1003b081 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1003b086 mov ecx, ebx */
  ECX = (EBX);
  /* 1003b088 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1003b08a not esi */
  ESI = (~(ESI));
  /* 1003b08c and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1003b090 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 1003b094 jne 0x1003b0bc */
  if (!C.zf) goto L_1003b0bc;
  /* 1003b096 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003b099 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1003b09b jmp 0x1003b0bc */
  goto L_1003b0bc;
L_1003b09d:;
  /* 1003b09d lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 1003b0a0 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1003b0a5 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1003b0a7 not esi */
  ESI = (~(ESI));
  /* 1003b0a9 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1003b0b0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 1003b0b4 jne 0x1003b0bc */
  if (!C.zf) goto L_1003b0bc;
  /* 1003b0b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003b0b9 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1003b0bc:;
  /* 1003b0bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1003b0bf mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 1003b0c2 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 1003b0c5 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 1003b0c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1003b0cb mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1003b0ce mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 1003b0d1 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_1003b0d4:;
  /* 1003b0d4 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1003b0d7 jmp 0x1003b0dc */
  goto L_1003b0dc;
L_1003b0d9:;
  /* 1003b0d9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1003b0dc:;
  /* 1003b0dc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b0e0 jne 0x1003b0ea */
  if (!C.zf) goto L_1003b0ea;
  /* 1003b0e2 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b0e4 je 0x1003b16b */
  if (C.zf) goto L_1003b16b;
L_1003b0ea:;
  /* 1003b0ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1003b0ed mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 1003b0f1 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 1003b0f4 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 1003b0f7 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 1003b0fa mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1003b0fd mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1003b100 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 1003b103 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1003b106 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b109 jne 0x1003b16b */
  if (!C.zf) goto L_1003b16b;
  /* 1003b10b mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 1003b10f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b112 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 1003b115 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1003b117 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 1003b11b jae 0x1003b142 */
  if (!C.cf) goto L_1003b142;
  /* 1003b11d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003b121 jne 0x1003b131 */
  if (!C.zf) goto L_1003b131;
  /* 1003b123 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1003b128 mov ecx, edx */
  ECX = (EDX);
  /* 1003b12a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1003b12c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003b12f or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1003b131:;
  /* 1003b131 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1003b136 mov ecx, edx */
  ECX = (EDX);
  /* 1003b138 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1003b13a lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 1003b13e or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1003b140 jmp 0x1003b16b */
  goto L_1003b16b;
L_1003b142:;
  /* 1003b142 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003b146 jne 0x1003b158 */
  if (!C.zf) goto L_1003b158;
  /* 1003b148 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1003b14b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1003b150 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1003b152 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003b155 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1003b158:;
  /* 1003b158 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1003b15b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1003b160 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1003b162 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 1003b169 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_1003b16b:;
  /* 1003b16b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1003b16e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1003b170 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 1003b174 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1003b177 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 1003b179 jne 0x1003b276 */
  if (!C.zf) goto L_1003b276;
  /* 1003b17f mov eax, dword ptr [0x100469b4] */
  EAX = (r32((uint32_t)(0x100469b4)));
  /* 1003b184 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003b186 je 0x1003b268 */
  if (C.zf) goto L_1003b268;
  /* 1003b18c mov ecx, dword ptr [0x100469ac] */
  ECX = (r32((uint32_t)(0x100469ac)));
  /* 1003b192 mov esi, dword ptr [0x1003e07c] */
  ESI = (r32((uint32_t)(0x1003e07c)));
  /* 1003b198 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1003b19b add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003b19e mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 1003b1a3 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1003b1a8 push ebx */
  push32((uint32_t)(EBX));
  /* 1003b1a9 push ecx */
  push32((uint32_t)(ECX));
  /* 1003b1aa call esi */
  call_ind((uint32_t)(ESI), 0x1003b1acu);
  /* 1003b1ac mov ecx, dword ptr [0x100469ac] */
  ECX = (r32((uint32_t)(0x100469ac)));
  /* 1003b1b2 mov eax, dword ptr [0x100469b4] */
  EAX = (r32((uint32_t)(0x100469b4)));
  /* 1003b1b7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1003b1bc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1003b1be or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1003b1c1 mov eax, dword ptr [0x100469b4] */
  EAX = (r32((uint32_t)(0x100469b4)));
  /* 1003b1c6 mov ecx, dword ptr [0x100469ac] */
  ECX = (r32((uint32_t)(0x100469ac)));
  /* 1003b1cc mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1003b1cf and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1003b1d7 mov eax, dword ptr [0x100469b4] */
  EAX = (r32((uint32_t)(0x100469b4)));
  /* 1003b1dc mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1003b1df dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1003b1e2 mov eax, dword ptr [0x100469b4] */
  EAX = (r32((uint32_t)(0x100469b4)));
  /* 1003b1e7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1003b1ea cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003b1ee jne 0x1003b1f9 */
  if (!C.zf) goto L_1003b1f9;
  /* 1003b1f0 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1003b1f4 mov eax, dword ptr [0x100469b4] */
  EAX = (r32((uint32_t)(0x100469b4)));
L_1003b1f9:;
  /* 1003b1f9 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b1fd jne 0x1003b268 */
  if (!C.zf) goto L_1003b268;
  /* 1003b1ff push ebx */
  push32((uint32_t)(EBX));
  /* 1003b200 push 0 */
  push32((uint32_t)(0x0u));
  /* 1003b202 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 1003b205 call esi */
  call_ind((uint32_t)(ESI), 0x1003b207u);
  /* 1003b207 mov eax, dword ptr [0x100469b4] */
  EAX = (r32((uint32_t)(0x100469b4)));
  /* 1003b20c push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 1003b20f push 0 */
  push32((uint32_t)(0x0u));
  /* 1003b211 push dword ptr [0x10047c04] */
  push32((uint32_t)(r32((uint32_t)(0x10047c04))));
  /* 1003b217 call dword ptr [0x1003e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e080))), 0x1003b21du);
  /* 1003b21d mov eax, dword ptr [0x100469b8] */
  EAX = (r32((uint32_t)(0x100469b8)));
  /* 1003b222 mov edx, dword ptr [0x100469bc] */
  EDX = (r32((uint32_t)(0x100469bc)));
  /* 1003b228 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1003b22b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1003b22e mov ecx, eax */
  ECX = (EAX);
  /* 1003b230 mov eax, dword ptr [0x100469b4] */
  EAX = (r32((uint32_t)(0x100469b4)));
  /* 1003b235 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003b237 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 1003b23b push ecx */
  push32((uint32_t)(ECX));
  /* 1003b23c lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1003b23f push ecx */
  push32((uint32_t)(ECX));
  /* 1003b240 push eax */
  push32((uint32_t)(EAX));
  /* 1003b241 call 0x10039c20 */
  push32(0x1003b246u); f_10039c20();
  /* 1003b246 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003b249 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003b24c dec dword ptr [0x100469b8] */
  { uint32_t _r=(r32((uint32_t)(0x100469b8)))-1; w32((uint32_t)(0x100469b8), (_r)); fl_dec(_r,32); }
  /* 1003b252 cmp eax, dword ptr [0x100469b4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x100469b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b258 jbe 0x1003b25e */
  if ((C.cf||C.zf)) goto L_1003b25e;
  /* 1003b25a sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_1003b25e:;
  /* 1003b25e mov eax, dword ptr [0x100469bc] */
  EAX = (r32((uint32_t)(0x100469bc)));
  /* 1003b263 mov dword ptr [0x100469b0], eax */
  w32((uint32_t)(0x100469b0), (EAX));
L_1003b268:;
  /* 1003b268 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003b26b mov dword ptr [0x100469ac], edi */
  w32((uint32_t)(0x100469ac), (EDI));
  /* 1003b271 mov dword ptr [0x100469b4], eax */
  w32((uint32_t)(0x100469b4), (EAX));
L_1003b276:;
  /* 1003b276 pop edi */
  EDI = (pop32());
  /* 1003b277 pop esi */
  ESI = (pop32());
  /* 1003b278 pop ebx */
  EBX = (pop32());
  /* 1003b279 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003b27a ret  */
  ESPCHK(0x1003af52u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b27b @ 0x1003b27b (777 bytes, 275 insns) */
void f_1003b27b(void) {
  FTRACE(0x1003b27bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003b27b push ebp */
  push32((uint32_t)(EBP));
  /* 1003b27c mov ebp, esp */
  EBP = (ESP);
  /* 1003b27e sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003b281 mov eax, dword ptr [0x100469b8] */
  EAX = (r32((uint32_t)(0x100469b8)));
  /* 1003b286 mov edx, dword ptr [0x100469bc] */
  EDX = (r32((uint32_t)(0x100469bc)));
  /* 1003b28c push ebx */
  push32((uint32_t)(EBX));
  /* 1003b28d push esi */
  push32((uint32_t)(ESI));
  /* 1003b28e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1003b291 push edi */
  push32((uint32_t)(EDI));
  /* 1003b292 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 1003b295 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003b298 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1003b29b lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 1003b29e and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1003b2a1 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1003b2a4 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1003b2a7 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1003b2a8 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b2ab jge 0x1003b2bb */
  if ((C.sf==C.of)) goto L_1003b2bb;
  /* 1003b2ad or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1003b2b0 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1003b2b2 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1003b2b6 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 1003b2b9 jmp 0x1003b2cb */
  goto L_1003b2cb;
L_1003b2bb:;
  /* 1003b2bb add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003b2be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1003b2c1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1003b2c3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1003b2c5 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 1003b2c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1003b2cb:;
  /* 1003b2cb mov eax, dword ptr [0x100469b0] */
  EAX = (r32((uint32_t)(0x100469b0)));
  /* 1003b2d0 mov ebx, eax */
  EBX = (EAX);
  /* 1003b2d2 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b2d4 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1003b2d7 jae 0x1003b2f2 */
  if (!C.cf) goto L_1003b2f2;
L_1003b2d9:;
  /* 1003b2d9 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1003b2dc mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1003b2de and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1003b2e1 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1003b2e3 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1003b2e5 jne 0x1003b2f2 */
  if (!C.zf) goto L_1003b2f2;
  /* 1003b2e7 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003b2ea cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b2ed mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1003b2f0 jb 0x1003b2d9 */
  if (C.cf) goto L_1003b2d9;
L_1003b2f2:;
  /* 1003b2f2 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b2f5 jne 0x1003b370 */
  if (!C.zf) goto L_1003b370;
  /* 1003b2f7 mov ebx, edx */
  EBX = (EDX);
L_1003b2f9:;
  /* 1003b2f9 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b2fb mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1003b2fe jae 0x1003b315 */
  if (!C.cf) goto L_1003b315;
  /* 1003b300 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1003b303 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1003b305 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1003b308 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1003b30a or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1003b30c jne 0x1003b313 */
  if (!C.zf) goto L_1003b313;
  /* 1003b30e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003b311 jmp 0x1003b2f9 */
  goto L_1003b2f9;
L_1003b313:;
  /* 1003b313 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1003b315:;
  /* 1003b315 jne 0x1003b370 */
  if (!C.zf) goto L_1003b370;
L_1003b317:;
  /* 1003b317 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b31a jae 0x1003b32d */
  if (!C.cf) goto L_1003b32d;
  /* 1003b31c cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b320 jne 0x1003b32a */
  if (!C.zf) goto L_1003b32a;
  /* 1003b322 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003b325 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1003b328 jmp 0x1003b317 */
  goto L_1003b317;
L_1003b32a:;
  /* 1003b32a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1003b32d:;
  /* 1003b32d jne 0x1003b355 */
  if (!C.zf) goto L_1003b355;
  /* 1003b32f mov ebx, edx */
  EBX = (EDX);
L_1003b331:;
  /* 1003b331 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b333 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1003b336 jae 0x1003b345 */
  if (!C.cf) goto L_1003b345;
  /* 1003b338 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b33c jne 0x1003b343 */
  if (!C.zf) goto L_1003b343;
  /* 1003b33e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003b341 jmp 0x1003b331 */
  goto L_1003b331;
L_1003b343:;
  /* 1003b343 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1003b345:;
  /* 1003b345 jne 0x1003b355 */
  if (!C.zf) goto L_1003b355;
  /* 1003b347 call 0x1003b584 */
  push32(0x1003b34cu); f_1003b584();
  /* 1003b34c mov ebx, eax */
  EBX = (EAX);
  /* 1003b34e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1003b350 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1003b353 je 0x1003b369 */
  if (C.zf) goto L_1003b369;
L_1003b355:;
  /* 1003b355 push ebx */
  push32((uint32_t)(EBX));
  /* 1003b356 call 0x1003b635 */
  push32(0x1003b35bu); f_1003b635();
  /* 1003b35b pop ecx */
  ECX = (pop32());
  /* 1003b35c mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1003b35f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1003b361 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 1003b364 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b367 jne 0x1003b370 */
  if (!C.zf) goto L_1003b370;
L_1003b369:;
  /* 1003b369 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003b36b jmp 0x1003b57f */
  goto L_1003b57f;
L_1003b370:;
  /* 1003b370 mov dword ptr [0x100469b0], ebx */
  w32((uint32_t)(0x100469b0), (EBX));
  /* 1003b376 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 1003b379 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1003b37b cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b37e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1003b381 je 0x1003b397 */
  if (C.zf) goto L_1003b397;
  /* 1003b383 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1003b38a mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1003b38e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1003b391 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1003b393 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1003b395 jne 0x1003b3ce */
  if (!C.zf) goto L_1003b3ce;
L_1003b397:;
  /* 1003b397 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 1003b39d mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 1003b3a0 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1003b3a3 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 1003b3a6 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1003b3aa lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 1003b3ad or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1003b3af mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1003b3b2 jne 0x1003b3cb */
  if (!C.zf) goto L_1003b3cb;
L_1003b3b4:;
  /* 1003b3b4 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 1003b3ba inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1003b3bd and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1003b3c0 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003b3c3 mov edi, esi */
  EDI = (ESI);
  /* 1003b3c5 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 1003b3c7 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 1003b3c9 je 0x1003b3b4 */
  if (C.zf) goto L_1003b3b4;
L_1003b3cb:;
  /* 1003b3cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1003b3ce:;
  /* 1003b3ce mov ecx, edx */
  ECX = (EDX);
  /* 1003b3d0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1003b3d2 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1003b3d8 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1003b3df mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1003b3e2 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1003b3e6 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 1003b3e8 jne 0x1003b3f7 */
  if (!C.zf) goto L_1003b3f7;
  /* 1003b3ea mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1003b3f1 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1003b3f3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1003b3f6 pop edi */
  EDI = (pop32());
L_1003b3f7:;
  /* 1003b3f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1003b3f9 jl 0x1003b400 */
  if ((C.sf!=C.of)) goto L_1003b400;
  /* 1003b3fb shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1003b3fd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1003b3fe jmp 0x1003b3f7 */
  goto L_1003b3f7;
L_1003b400:;
  /* 1003b400 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1003b403 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 1003b407 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1003b409 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003b40c mov esi, ecx */
  ESI = (ECX);
  /* 1003b40e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1003b411 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1003b414 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1003b415 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b418 jle 0x1003b41d */
  if ((C.zf||C.sf!=C.of)) goto L_1003b41d;
  /* 1003b41a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1003b41c pop esi */
  ESI = (pop32());
L_1003b41d:;
  /* 1003b41d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b41f je 0x1003b532 */
  if (C.zf) goto L_1003b532;
  /* 1003b425 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1003b428 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b42b jne 0x1003b48e */
  if (!C.zf) goto L_1003b48e;
  /* 1003b42d cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b430 jge 0x1003b45d */
  if ((C.sf==C.of)) goto L_1003b45d;
  /* 1003b432 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1003b437 mov ecx, edi */
  ECX = (EDI);
  /* 1003b439 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1003b43b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1003b43e lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1003b442 not ebx */
  EBX = (~(EBX));
  /* 1003b444 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1003b447 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 1003b44b mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1003b44f dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1003b451 jne 0x1003b48b */
  if (!C.zf) goto L_1003b48b;
  /* 1003b453 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003b456 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1003b459 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 1003b45b jmp 0x1003b48e */
  goto L_1003b48e;
L_1003b45d:;
  /* 1003b45d lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 1003b460 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1003b465 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1003b467 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1003b46a lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1003b46e lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1003b475 not ebx */
  EBX = (~(EBX));
  /* 1003b477 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1003b479 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1003b47b mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1003b47e jne 0x1003b48b */
  if (!C.zf) goto L_1003b48b;
  /* 1003b480 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003b483 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1003b486 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1003b489 jmp 0x1003b48e */
  goto L_1003b48e;
L_1003b48b:;
  /* 1003b48b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1003b48e:;
  /* 1003b48e mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 1003b491 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 1003b494 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b498 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 1003b49b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1003b49e mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 1003b4a1 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 1003b4a4 je 0x1003b53e */
  if (C.zf) goto L_1003b53e;
  /* 1003b4aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1003b4ad mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 1003b4b1 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 1003b4b4 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 1003b4b7 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1003b4ba mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1003b4bd mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1003b4c0 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1003b4c3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1003b4c6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b4c9 jne 0x1003b52f */
  if (!C.zf) goto L_1003b52f;
  /* 1003b4cb mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1003b4cf cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b4d2 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 1003b4d5 jge 0x1003b500 */
  if ((C.sf==C.of)) goto L_1003b500;
  /* 1003b4d7 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1003b4d9 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003b4dd mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1003b4e1 jne 0x1003b4ee */
  if (!C.zf) goto L_1003b4ee;
  /* 1003b4e3 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1003b4e8 mov ecx, esi */
  ECX = (ESI);
  /* 1003b4ea shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1003b4ec or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1003b4ee:;
  /* 1003b4ee mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1003b4f3 mov ecx, esi */
  ECX = (ESI);
  /* 1003b4f5 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1003b4f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1003b4fa or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1003b4fe jmp 0x1003b52f */
  goto L_1003b52f;
L_1003b500:;
  /* 1003b500 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1003b502 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003b506 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1003b50a jne 0x1003b519 */
  if (!C.zf) goto L_1003b519;
  /* 1003b50c lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1003b50f mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1003b514 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1003b516 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_1003b519:;
  /* 1003b519 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1003b51c lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1003b523 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1003b526 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1003b52b shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1003b52d or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1003b52f:;
  /* 1003b52f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1003b532:;
  /* 1003b532 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1003b534 je 0x1003b541 */
  if (C.zf) goto L_1003b541;
  /* 1003b536 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1003b538 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1003b53c jmp 0x1003b541 */
  goto L_1003b541;
L_1003b53e:;
  /* 1003b53e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1003b541:;
  /* 1003b541 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 1003b544 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003b546 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 1003b549 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1003b54b mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1003b54f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1003b552 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1003b554 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1003b556 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 1003b559 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1003b55b jne 0x1003b577 */
  if (!C.zf) goto L_1003b577;
  /* 1003b55d cmp ebx, dword ptr [0x100469b4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x100469b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b563 jne 0x1003b577 */
  if (!C.zf) goto L_1003b577;
  /* 1003b565 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1003b568 cmp ecx, dword ptr [0x100469ac] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x100469ac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b56e jne 0x1003b577 */
  if (!C.zf) goto L_1003b577;
  /* 1003b570 and dword ptr [0x100469b4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100469b4)))&(0x0u); w32((uint32_t)(0x100469b4), (_r)); fl_logic(_r,32); }
L_1003b577:;
  /* 1003b577 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1003b57a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1003b57c lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_1003b57f:;
  /* 1003b57f pop edi */
  EDI = (pop32());
  /* 1003b580 pop esi */
  ESI = (pop32());
  /* 1003b581 pop ebx */
  EBX = (pop32());
  /* 1003b582 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003b583 ret  */
  ESPCHK(0x1003b27bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b584 @ 0x1003b584 (177 bytes, 53 insns) */
void f_1003b584(void) {
  FTRACE(0x1003b584u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003b584 mov eax, dword ptr [0x100469b8] */
  EAX = (r32((uint32_t)(0x100469b8)));
  /* 1003b589 mov ecx, dword ptr [0x100469a8] */
  ECX = (r32((uint32_t)(0x100469a8)));
  /* 1003b58f push esi */
  push32((uint32_t)(ESI));
  /* 1003b590 push edi */
  push32((uint32_t)(EDI));
  /* 1003b591 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1003b593 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b595 jne 0x1003b5c7 */
  if (!C.zf) goto L_1003b5c7;
  /* 1003b597 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 1003b59b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1003b59e push eax */
  push32((uint32_t)(EAX));
  /* 1003b59f push dword ptr [0x100469bc] */
  push32((uint32_t)(r32((uint32_t)(0x100469bc))));
  /* 1003b5a5 push edi */
  push32((uint32_t)(EDI));
  /* 1003b5a6 push dword ptr [0x10047c04] */
  push32((uint32_t)(r32((uint32_t)(0x10047c04))));
  /* 1003b5ac call dword ptr [0x1003e0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e0ac))), 0x1003b5b2u);
  /* 1003b5b2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b5b4 je 0x1003b617 */
  if (C.zf) goto L_1003b617;
  /* 1003b5b6 add dword ptr [0x100469a8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x100469a8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x100469a8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1003b5bd mov dword ptr [0x100469bc], eax */
  w32((uint32_t)(0x100469bc), (EAX));
  /* 1003b5c2 mov eax, dword ptr [0x100469b8] */
  EAX = (r32((uint32_t)(0x100469b8)));
L_1003b5c7:;
  /* 1003b5c7 mov ecx, dword ptr [0x100469bc] */
  ECX = (r32((uint32_t)(0x100469bc)));
  /* 1003b5cd push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1003b5d2 push 8 */
  push32((uint32_t)(0x8u));
  /* 1003b5d4 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1003b5d7 push dword ptr [0x10047c04] */
  push32((uint32_t)(r32((uint32_t)(0x10047c04))));
  /* 1003b5dd lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1003b5e0 call dword ptr [0x1003e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e098))), 0x1003b5e6u);
  /* 1003b5e6 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b5e8 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 1003b5eb je 0x1003b617 */
  if (C.zf) goto L_1003b617;
  /* 1003b5ed push 4 */
  push32((uint32_t)(0x4u));
  /* 1003b5ef push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1003b5f4 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1003b5f9 push edi */
  push32((uint32_t)(EDI));
  /* 1003b5fa call dword ptr [0x1003e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e0a8))), 0x1003b600u);
  /* 1003b600 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b602 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1003b605 jne 0x1003b61b */
  if (!C.zf) goto L_1003b61b;
  /* 1003b607 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1003b60a push edi */
  push32((uint32_t)(EDI));
  /* 1003b60b push dword ptr [0x10047c04] */
  push32((uint32_t)(r32((uint32_t)(0x10047c04))));
  /* 1003b611 call dword ptr [0x1003e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e080))), 0x1003b617u);
L_1003b617:;
  /* 1003b617 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003b619 jmp 0x1003b632 */
  goto L_1003b632;
L_1003b61b:;
  /* 1003b61b or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1003b61f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1003b621 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 1003b624 inc dword ptr [0x100469b8] */
  { uint32_t _r=(r32((uint32_t)(0x100469b8)))+1; w32((uint32_t)(0x100469b8), (_r)); fl_inc(_r,32); }
  /* 1003b62a mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1003b62d or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1003b630 mov eax, esi */
  EAX = (ESI);
L_1003b632:;
  /* 1003b632 pop edi */
  EDI = (pop32());
  /* 1003b633 pop esi */
  ESI = (pop32());
  /* 1003b634 ret  */
  ESPCHK(0x1003b584u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b635 @ 0x1003b635 (251 bytes, 85 insns) */
void f_1003b635(void) {
  FTRACE(0x1003b635u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003b635 push ebp */
  push32((uint32_t)(EBP));
  /* 1003b636 mov ebp, esp */
  EBP = (ESP);
  /* 1003b638 push ecx */
  push32((uint32_t)(ECX));
  /* 1003b639 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003b63c push ebx */
  push32((uint32_t)(EBX));
  /* 1003b63d push esi */
  push32((uint32_t)(ESI));
  /* 1003b63e push edi */
  push32((uint32_t)(EDI));
  /* 1003b63f mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 1003b642 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 1003b645 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1003b647:;
  /* 1003b647 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003b649 jl 0x1003b650 */
  if ((C.sf!=C.of)) goto L_1003b650;
  /* 1003b64b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1003b64d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1003b64e jmp 0x1003b647 */
  goto L_1003b647;
L_1003b650:;
  /* 1003b650 mov eax, ebx */
  EAX = (EBX);
  /* 1003b652 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1003b654 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1003b65a pop edx */
  EDX = (pop32());
  /* 1003b65b lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 1003b662 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1003b665:;
  /* 1003b665 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 1003b668 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 1003b66b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003b66e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1003b66f jne 0x1003b665 */
  if (!C.zf) goto L_1003b665;
  /* 1003b671 mov edi, ebx */
  EDI = (EBX);
  /* 1003b673 push 4 */
  push32((uint32_t)(0x4u));
  /* 1003b675 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 1003b678 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003b67b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1003b680 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1003b685 push edi */
  push32((uint32_t)(EDI));
  /* 1003b686 call dword ptr [0x1003e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e0a8))), 0x1003b68cu);
  /* 1003b68c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003b68e jne 0x1003b698 */
  if (!C.zf) goto L_1003b698;
  /* 1003b690 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1003b693 jmp 0x1003b72b */
  goto L_1003b72b;
L_1003b698:;
  /* 1003b698 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 1003b69e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b6a0 ja 0x1003b6de */
  if ((!C.cf&&!C.zf)) goto L_1003b6de;
  /* 1003b6a2 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_1003b6a5:;
  /* 1003b6a5 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 1003b6a9 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 1003b6b0 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 1003b6b6 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1003b6bd mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1003b6bf lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 1003b6c5 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1003b6c8 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 1003b6d2 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003b6d7 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 1003b6da cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b6dc jbe 0x1003b6a5 */
  if ((C.cf||C.zf)) goto L_1003b6a5;
L_1003b6de:;
  /* 1003b6de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1003b6e1 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 1003b6e4 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003b6e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003b6eb pop edi */
  EDI = (pop32());
  /* 1003b6ec mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1003b6ef mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1003b6f2 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 1003b6f5 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1003b6f8 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1003b6fb and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1003b700 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 1003b707 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 1003b70a mov cl, al */
  CL = (AL);
  /* 1003b70c inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1003b70e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003b710 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003b713 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 1003b716 jne 0x1003b71b */
  if (!C.zf) goto L_1003b71b;
  /* 1003b718 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_1003b71b:;
  /* 1003b71b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1003b720 mov ecx, ebx */
  ECX = (EBX);
  /* 1003b722 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1003b724 not edx */
  EDX = (~(EDX));
  /* 1003b726 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1003b729 mov eax, ebx */
  EAX = (EBX);
L_1003b72b:;
  /* 1003b72b pop edi */
  EDI = (pop32());
  /* 1003b72c pop esi */
  ESI = (pop32());
  /* 1003b72d pop ebx */
  EBX = (pop32());
  /* 1003b72e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003b72f ret  */
  ESPCHK(0x1003b635u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b730 @ 0x1003b730 (324 bytes, 102 insns) */
void f_1003b730(void) {
  FTRACE(0x1003b730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003b730 cmp dword ptr [0x10040e60], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10040e60))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b737 push ebx */
  push32((uint32_t)(EBX));
  /* 1003b738 push ebp */
  push32((uint32_t)(EBP));
  /* 1003b739 push esi */
  push32((uint32_t)(ESI));
  /* 1003b73a push edi */
  push32((uint32_t)(EDI));
  /* 1003b73b jne 0x1003b744 */
  if (!C.zf) goto L_1003b744;
  /* 1003b73d mov esi, 0x10040e50 */
  ESI = (0x10040e50u);
  /* 1003b742 jmp 0x1003b761 */
  goto L_1003b761;
L_1003b744:;
  /* 1003b744 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 1003b749 push 0 */
  push32((uint32_t)(0x0u));
  /* 1003b74b push dword ptr [0x10047c04] */
  push32((uint32_t)(r32((uint32_t)(0x10047c04))));
  /* 1003b751 call dword ptr [0x1003e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e098))), 0x1003b757u);
  /* 1003b757 mov esi, eax */
  ESI = (EAX);
  /* 1003b759 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1003b75b je 0x1003b86d */
  if (C.zf) goto L_1003b86d;
L_1003b761:;
  /* 1003b761 mov ebp, dword ptr [0x1003e0a8] */
  EBP = (r32((uint32_t)(0x1003e0a8)));
  /* 1003b767 push 4 */
  push32((uint32_t)(0x4u));
  /* 1003b769 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1003b76e push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 1003b773 push 0 */
  push32((uint32_t)(0x0u));
  /* 1003b775 call ebp */
  call_ind((uint32_t)(EBP), 0x1003b777u);
  /* 1003b777 mov edi, eax */
  EDI = (EAX);
  /* 1003b779 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1003b77b je 0x1003b856 */
  if (C.zf) goto L_1003b856;
  /* 1003b781 push 4 */
  push32((uint32_t)(0x4u));
  /* 1003b783 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 1003b788 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1003b78d push ebx */
  push32((uint32_t)(EBX));
  /* 1003b78e push edi */
  push32((uint32_t)(EDI));
  /* 1003b78f call ebp */
  call_ind((uint32_t)(EBP), 0x1003b791u);
  /* 1003b791 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003b793 je 0x1003b848 */
  if (C.zf) goto L_1003b848;
  /* 1003b799 mov eax, 0x10040e50 */
  EAX = (0x10040e50u);
  /* 1003b79e cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b7a0 jne 0x1003b7c0 */
  if (!C.zf) goto L_1003b7c0;
  /* 1003b7a2 cmp dword ptr [0x10040e50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10040e50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b7a9 jne 0x1003b7b0 */
  if (!C.zf) goto L_1003b7b0;
  /* 1003b7ab mov dword ptr [0x10040e50], eax */
  w32((uint32_t)(0x10040e50), (EAX));
L_1003b7b0:;
  /* 1003b7b0 cmp dword ptr [0x10040e54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10040e54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b7b7 jne 0x1003b7d5 */
  if (!C.zf) goto L_1003b7d5;
  /* 1003b7b9 mov dword ptr [0x10040e54], eax */
  w32((uint32_t)(0x10040e54), (EAX));
  /* 1003b7be jmp 0x1003b7d5 */
  goto L_1003b7d5;
L_1003b7c0:;
  /* 1003b7c0 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1003b7c2 mov eax, dword ptr [0x10040e54] */
  EAX = (r32((uint32_t)(0x10040e54)));
  /* 1003b7c7 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1003b7ca mov dword ptr [0x10040e54], esi */
  w32((uint32_t)(0x10040e54), (ESI));
  /* 1003b7d0 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1003b7d3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1003b7d5:;
  /* 1003b7d5 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 1003b7db lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 1003b7e1 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 1003b7e4 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 1003b7e7 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 1003b7ea mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 1003b7ed mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1003b7f0 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 1003b7f2 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_1003b7f7:;
  /* 1003b7f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1003b7f9 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b7fc setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 1003b7ff dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1003b800 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1003b802 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1003b803 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1003b804 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1003b806 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1003b809 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003b80c cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b812 jl 0x1003b7f7 */
  if ((C.sf!=C.of)) goto L_1003b7f7;
  /* 1003b814 push ebx */
  push32((uint32_t)(EBX));
  /* 1003b815 push 0 */
  push32((uint32_t)(0x0u));
  /* 1003b817 push edi */
  push32((uint32_t)(EDI));
  /* 1003b818 call 0x10039bc0 */
  push32(0x1003b81du); f_10039bc0();
  /* 1003b81d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003b820:;
  /* 1003b820 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1003b823 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003b825 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b827 jae 0x1003b844 */
  if (!C.cf) goto L_1003b844;
  /* 1003b829 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 1003b830 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 1003b833 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1003b835 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 1003b83c add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003b842 jmp 0x1003b820 */
  goto L_1003b820;
L_1003b844:;
  /* 1003b844 mov eax, esi */
  EAX = (ESI);
  /* 1003b846 jmp 0x1003b86f */
  goto L_1003b86f;
L_1003b848:;
  /* 1003b848 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1003b84d push 0 */
  push32((uint32_t)(0x0u));
  /* 1003b84f push edi */
  push32((uint32_t)(EDI));
  /* 1003b850 call dword ptr [0x1003e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e07c))), 0x1003b856u);
L_1003b856:;
  /* 1003b856 cmp esi, 0x10040e50 */
  { uint32_t _a=(ESI),_b=(0x10040e50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b85c je 0x1003b86d */
  if (C.zf) goto L_1003b86d;
  /* 1003b85e push esi */
  push32((uint32_t)(ESI));
  /* 1003b85f push 0 */
  push32((uint32_t)(0x0u));
  /* 1003b861 push dword ptr [0x10047c04] */
  push32((uint32_t)(r32((uint32_t)(0x10047c04))));
  /* 1003b867 call dword ptr [0x1003e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e080))), 0x1003b86du);
L_1003b86d:;
  /* 1003b86d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1003b86f:;
  /* 1003b86f pop edi */
  EDI = (pop32());
  /* 1003b870 pop esi */
  ESI = (pop32());
  /* 1003b871 pop ebp */
  EBP = (pop32());
  /* 1003b872 pop ebx */
  EBX = (pop32());
  /* 1003b873 ret  */
  ESPCHK(0x1003b730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b874 @ 0x1003b874 (86 bytes, 27 insns) */
void f_1003b874(void) {
  FTRACE(0x1003b874u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003b874 push esi */
  push32((uint32_t)(ESI));
  /* 1003b875 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1003b879 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1003b87e push 0 */
  push32((uint32_t)(0x0u));
  /* 1003b880 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1003b883 call dword ptr [0x1003e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e07c))), 0x1003b889u);
  /* 1003b889 cmp dword ptr [0x10042e70], esi */
  { uint32_t _a=(r32((uint32_t)(0x10042e70))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b88f jne 0x1003b899 */
  if (!C.zf) goto L_1003b899;
  /* 1003b891 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1003b894 mov dword ptr [0x10042e70], eax */
  w32((uint32_t)(0x10042e70), (EAX));
L_1003b899:;
  /* 1003b899 cmp esi, 0x10040e50 */
  { uint32_t _a=(ESI),_b=(0x10040e50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b89f je 0x1003b8c1 */
  if (C.zf) goto L_1003b8c1;
  /* 1003b8a1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1003b8a4 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1003b8a6 push esi */
  push32((uint32_t)(ESI));
  /* 1003b8a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1003b8a9 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1003b8ab mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1003b8ad mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1003b8b0 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1003b8b3 push dword ptr [0x10047c04] */
  push32((uint32_t)(r32((uint32_t)(0x10047c04))));
  /* 1003b8b9 call dword ptr [0x1003e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e080))), 0x1003b8bfu);
  /* 1003b8bf pop esi */
  ESI = (pop32());
  /* 1003b8c0 ret  */
  ESPCHK(0x1003b874u, _esp0);
  ESP += 4; return;
L_1003b8c1:;
  /* 1003b8c1 or dword ptr [0x10040e60], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10040e60)))|(0xffffffffu); w32((uint32_t)(0x10040e60), (_r)); fl_logic(_r,32); }
  /* 1003b8c8 pop esi */
  ESI = (pop32());
  /* 1003b8c9 ret  */
  ESPCHK(0x1003b874u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8ca @ 0x1003b8ca (194 bytes, 66 insns) */
void f_1003b8ca(void) {
  FTRACE(0x1003b8cau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003b8ca push ebp */
  push32((uint32_t)(EBP));
  /* 1003b8cb mov ebp, esp */
  EBP = (ESP);
  /* 1003b8cd push ecx */
  push32((uint32_t)(ECX));
  /* 1003b8ce push ebx */
  push32((uint32_t)(EBX));
  /* 1003b8cf push esi */
  push32((uint32_t)(ESI));
  /* 1003b8d0 mov esi, dword ptr [0x10040e54] */
  ESI = (r32((uint32_t)(0x10040e54)));
  /* 1003b8d6 push edi */
  push32((uint32_t)(EDI));
L_1003b8d7:;
  /* 1003b8d7 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b8db je 0x1003b975 */
  if (C.zf) goto L_1003b975;
  /* 1003b8e1 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1003b8e5 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 1003b8eb mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_1003b8f0:;
  /* 1003b8f0 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b8f6 jne 0x1003b931 */
  if (!C.zf) goto L_1003b931;
  /* 1003b8f8 mov eax, ebx */
  EAX = (EBX);
  /* 1003b8fa push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1003b8ff add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003b902 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1003b907 push eax */
  push32((uint32_t)(EAX));
  /* 1003b908 call dword ptr [0x1003e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e07c))), 0x1003b90eu);
  /* 1003b90e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003b910 je 0x1003b931 */
  if (C.zf) goto L_1003b931;
  /* 1003b912 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 1003b915 dec dword ptr [0x10046804] */
  { uint32_t _r=(r32((uint32_t)(0x10046804)))-1; w32((uint32_t)(0x10046804), (_r)); fl_dec(_r,32); }
  /* 1003b91b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1003b91e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003b920 je 0x1003b926 */
  if (C.zf) goto L_1003b926;
  /* 1003b922 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b924 jbe 0x1003b929 */
  if ((C.cf||C.zf)) goto L_1003b929;
L_1003b926:;
  /* 1003b926 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_1003b929:;
  /* 1003b929 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1003b92c dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 1003b92f je 0x1003b93e */
  if (C.zf) goto L_1003b93e;
L_1003b931:;
  /* 1003b931 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003b937 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003b93a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1003b93c jge 0x1003b8f0 */
  if ((C.sf==C.of)) goto L_1003b8f0;
L_1003b93e:;
  /* 1003b93e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b942 mov ecx, esi */
  ECX = (ESI);
  /* 1003b944 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 1003b947 je 0x1003b975 */
  if (C.zf) goto L_1003b975;
  /* 1003b949 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b94d jne 0x1003b975 */
  if (!C.zf) goto L_1003b975;
  /* 1003b94f push 1 */
  push32((uint32_t)(0x1u));
  /* 1003b951 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 1003b954 pop edx */
  EDX = (pop32());
L_1003b955:;
  /* 1003b955 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b958 jne 0x1003b966 */
  if (!C.zf) goto L_1003b966;
  /* 1003b95a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1003b95b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003b95e cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b964 jl 0x1003b955 */
  if ((C.sf!=C.of)) goto L_1003b955;
L_1003b966:;
  /* 1003b966 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b96c jne 0x1003b975 */
  if (!C.zf) goto L_1003b975;
  /* 1003b96e push ecx */
  push32((uint32_t)(ECX));
  /* 1003b96f call 0x1003b874 */
  push32(0x1003b974u); f_1003b874();
  /* 1003b974 pop ecx */
  ECX = (pop32());
L_1003b975:;
  /* 1003b975 cmp esi, dword ptr [0x10040e54] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10040e54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b97b je 0x1003b987 */
  if (C.zf) goto L_1003b987;
  /* 1003b97d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b981 jg 0x1003b8d7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1003b8d7;
L_1003b987:;
  /* 1003b987 pop edi */
  EDI = (pop32());
  /* 1003b988 pop esi */
  ESI = (pop32());
  /* 1003b989 pop ebx */
  EBX = (pop32());
  /* 1003b98a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003b98b ret  */
  ESPCHK(0x1003b8cau, _esp0);
  ESP += 4; return;
}

/* FUN_1000b98c @ 0x1003b98c (87 bytes, 34 insns) */
void f_1003b98c(void) {
  FTRACE(0x1003b98cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003b98c mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1003b990 mov edx, 0x10040e50 */
  EDX = (0x10040e50u);
  /* 1003b995 push esi */
  push32((uint32_t)(ESI));
  /* 1003b996 mov ecx, edx */
  ECX = (EDX);
L_1003b998:;
  /* 1003b998 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b99b jbe 0x1003b9a2 */
  if ((C.cf||C.zf)) goto L_1003b9a2;
  /* 1003b99d cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b9a0 jb 0x1003b9aa */
  if (C.cf) goto L_1003b9aa;
L_1003b9a2:;
  /* 1003b9a2 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1003b9a4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b9a6 je 0x1003b9df */
  if (C.zf) goto L_1003b9df;
  /* 1003b9a8 jmp 0x1003b998 */
  goto L_1003b998;
L_1003b9aa:;
  /* 1003b9aa test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 1003b9ac jne 0x1003b9df */
  if (!C.zf) goto L_1003b9df;
  /* 1003b9ae mov esi, eax */
  ESI = (EAX);
  /* 1003b9b0 mov edx, 0x100 */
  EDX = (0x100u);
  /* 1003b9b5 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 1003b9bb cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003b9bd jb 0x1003b9df */
  if (C.cf) goto L_1003b9df;
  /* 1003b9bf mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1003b9c3 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1003b9c5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 1003b9c9 mov ecx, eax */
  ECX = (EAX);
  /* 1003b9cb and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 1003b9d0 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003b9d2 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1003b9d4 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003b9d6 pop esi */
  ESI = (pop32());
  /* 1003b9d7 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1003b9da lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 1003b9de ret  */
  ESPCHK(0x1003b98cu, _esp0);
  ESP += 4; return;
L_1003b9df:;
  /* 1003b9df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003b9e1 pop esi */
  ESI = (pop32());
  /* 1003b9e2 ret  */
  ESPCHK(0x1003b98cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9e3 @ 0x1003b9e3 (69 bytes, 19 insns) */
void f_1003b9e3(void) {
  FTRACE(0x1003b9e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003b9e3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1003b9e7 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1003b9eb sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003b9ee sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 1003b9f1 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 1003b9f5 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1003b9f9 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1003b9fc add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1003b9fe and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1003ba01 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003ba07 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 1003ba0e jne 0x1003ba27 */
  if (!C.zf) goto L_1003ba27;
  /* 1003ba10 inc dword ptr [0x10046804] */
  { uint32_t _r=(r32((uint32_t)(0x10046804)))+1; w32((uint32_t)(0x10046804), (_r)); fl_inc(_r,32); }
  /* 1003ba16 cmp dword ptr [0x10046804], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10046804))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003ba1d jne 0x1003ba27 */
  if (!C.zf) goto L_1003ba27;
  /* 1003ba1f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1003ba21 call 0x1003b8ca */
  push32(0x1003ba26u); f_1003b8ca();
  /* 1003ba26 pop ecx */
  ECX = (pop32());
L_1003ba27:;
  /* 1003ba27 ret  */
  ESPCHK(0x1003b9e3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba28 @ 0x1003ba28 (520 bytes, 180 insns) */
void f_1003ba28(void) {
  FTRACE(0x1003ba28u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003ba28 push ebp */
  push32((uint32_t)(EBP));
  /* 1003ba29 mov ebp, esp */
  EBP = (ESP);
  /* 1003ba2b push ecx */
  push32((uint32_t)(ECX));
  /* 1003ba2c push ecx */
  push32((uint32_t)(ECX));
  /* 1003ba2d push ebx */
  push32((uint32_t)(EBX));
  /* 1003ba2e push esi */
  push32((uint32_t)(ESI));
  /* 1003ba2f mov esi, dword ptr [0x10042e70] */
  ESI = (r32((uint32_t)(0x10042e70)));
  /* 1003ba35 push edi */
  push32((uint32_t)(EDI));
L_1003ba36:;
  /* 1003ba36 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 1003ba39 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003ba3c je 0x1003bae1 */
  if (C.zf) goto L_1003bae1;
  /* 1003ba42 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 1003ba45 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 1003ba4b mov eax, edi */
  EAX = (EDI);
  /* 1003ba4d sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003ba4f sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003ba52 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 1003ba55 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 1003ba58 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003ba5a cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003ba5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1003ba5f jae 0x1003ba9b */
  if (!C.cf) goto L_1003ba9b;
L_1003ba61:;
  /* 1003ba61 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 1003ba63 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003ba66 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003ba68 jl 0x1003ba84 */
  if ((C.sf!=C.of)) goto L_1003ba84;
  /* 1003ba6a cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003ba6d jbe 0x1003ba84 */
  if ((C.cf||C.zf)) goto L_1003ba84;
  /* 1003ba6f push ebx */
  push32((uint32_t)(EBX));
  /* 1003ba70 push ecx */
  push32((uint32_t)(ECX));
  /* 1003ba71 push eax */
  push32((uint32_t)(EAX));
  /* 1003ba72 call 0x1003bc30 */
  push32(0x1003ba77u); f_1003bc30();
  /* 1003ba77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003ba7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003ba7c jne 0x1003baf3 */
  if (!C.zf) goto L_1003baf3;
  /* 1003ba7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1003ba81 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_1003ba84:;
  /* 1003ba84 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003ba87 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 1003ba8d add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003ba92 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003ba94 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1003ba97 jb 0x1003ba61 */
  if (C.cf) goto L_1003ba61;
  /* 1003ba99 jmp 0x1003ba9e */
  goto L_1003ba9e;
L_1003ba9b:;
  /* 1003ba9b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1003ba9e:;
  /* 1003ba9e mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1003baa1 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 1003baa4 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 1003baa7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1003baaa cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003baac mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1003baaf jae 0x1003bae4 */
  if (!C.cf) goto L_1003bae4;
L_1003bab1:;
  /* 1003bab1 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1003bab3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bab5 jl 0x1003bad0 */
  if ((C.sf!=C.of)) goto L_1003bad0;
  /* 1003bab7 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003baba jbe 0x1003bad0 */
  if ((C.cf||C.zf)) goto L_1003bad0;
  /* 1003babc push ebx */
  push32((uint32_t)(EBX));
  /* 1003babd push eax */
  push32((uint32_t)(EAX));
  /* 1003babe push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 1003bac1 call 0x1003bc30 */
  push32(0x1003bac6u); f_1003bc30();
  /* 1003bac6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003bac9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003bacb jne 0x1003baf3 */
  if (!C.zf) goto L_1003baf3;
  /* 1003bacd mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_1003bad0:;
  /* 1003bad0 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1003bad7 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003bada cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003badd jb 0x1003bab1 */
  if (C.cf) goto L_1003bab1;
  /* 1003badf jmp 0x1003bae4 */
  goto L_1003bae4;
L_1003bae1:;
  /* 1003bae1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1003bae4:;
  /* 1003bae4 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 1003bae6 cmp esi, dword ptr [0x10042e70] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10042e70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003baec je 0x1003bb03 */
  if (C.zf) goto L_1003bb03;
  /* 1003baee jmp 0x1003ba36 */
  goto L_1003ba36;
L_1003baf3:;
  /* 1003baf3 mov dword ptr [0x10042e70], esi */
  w32((uint32_t)(0x10042e70), (ESI));
  /* 1003baf9 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1003bafb mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 1003bafe jmp 0x1003bc2b */
  goto L_1003bc2b;
L_1003bb03:;
  /* 1003bb03 mov eax, 0x10040e50 */
  EAX = (0x10040e50u);
  /* 1003bb08 mov edi, eax */
  EDI = (EAX);
L_1003bb0a:;
  /* 1003bb0a cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bb0e je 0x1003bb16 */
  if (C.zf) goto L_1003bb16;
  /* 1003bb10 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bb14 jne 0x1003bb22 */
  if (!C.zf) goto L_1003bb22;
L_1003bb16:;
  /* 1003bb16 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 1003bb18 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bb1a je 0x1003bbf7 */
  if (C.zf) goto L_1003bbf7;
  /* 1003bb20 jmp 0x1003bb0a */
  goto L_1003bb0a;
L_1003bb22:;
  /* 1003bb22 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 1003bb25 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1003bb29 mov esi, ebx */
  ESI = (EBX);
  /* 1003bb2b mov eax, ebx */
  EAX = (EBX);
  /* 1003bb2d sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003bb2f sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003bb32 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 1003bb35 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 1003bb38 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003bb3b cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bb3e jne 0x1003bb51 */
  if (!C.zf) goto L_1003bb51;
L_1003bb40:;
  /* 1003bb40 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bb44 jge 0x1003bb51 */
  if ((C.sf==C.of)) goto L_1003bb51;
  /* 1003bb46 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003bb49 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1003bb4c cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bb4f je 0x1003bb40 */
  if (C.zf) goto L_1003bb40;
L_1003bb51:;
  /* 1003bb51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1003bb54 push 4 */
  push32((uint32_t)(0x4u));
  /* 1003bb56 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 1003bb59 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1003bb5e push eax */
  push32((uint32_t)(EAX));
  /* 1003bb5f push esi */
  push32((uint32_t)(ESI));
  /* 1003bb60 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1003bb63 call dword ptr [0x1003e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e0a8))), 0x1003bb69u);
  /* 1003bb69 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bb6b jne 0x1003bc29 */
  if (!C.zf) goto L_1003bc29;
  /* 1003bb71 push 0 */
  push32((uint32_t)(0x0u));
  /* 1003bb73 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 1003bb76 push esi */
  push32((uint32_t)(ESI));
  /* 1003bb77 call 0x10039bc0 */
  push32(0x1003bb7cu); f_10039bc0();
  /* 1003bb7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1003bb7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003bb82 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1003bb84 mov ecx, ebx */
  ECX = (EBX);
  /* 1003bb86 jle 0x1003bbb8 */
  if ((C.zf||C.sf!=C.of)) goto L_1003bbb8;
  /* 1003bb88 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1003bb8b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1003bb8e:;
  /* 1003bb8e or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 1003bb95 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 1003bb98 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 1003bb9b mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1003bba0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1003bba2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1003bba4 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 1003bbab add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003bbb0 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003bbb3 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1003bbb6 jne 0x1003bb8e */
  if (!C.zf) goto L_1003bb8e;
L_1003bbb8:;
  /* 1003bbb8 mov dword ptr [0x10042e70], edi */
  w32((uint32_t)(0x10042e70), (EDI));
  /* 1003bbbe lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_1003bbc4:;
  /* 1003bbc4 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bbc6 jae 0x1003bbd4 */
  if (!C.cf) goto L_1003bbd4;
  /* 1003bbc8 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bbcb je 0x1003bbd2 */
  if (C.zf) goto L_1003bbd2;
  /* 1003bbcd add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003bbd0 jmp 0x1003bbc4 */
  goto L_1003bbc4;
L_1003bbd2:;
  /* 1003bbd2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1003bbd4:;
  /* 1003bbd4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003bbd6 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 1003bbd8 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 1003bbdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003bbde mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 1003bbe1 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 1003bbe4 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1003bbe6 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1003bbe9 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 1003bbed lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 1003bbf3 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1003bbf5 jmp 0x1003bc2b */
  goto L_1003bc2b;
L_1003bbf7:;
  /* 1003bbf7 call 0x1003b730 */
  push32(0x1003bbfcu); f_1003b730();
  /* 1003bbfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003bbfe je 0x1003bc29 */
  if (C.zf) goto L_1003bc29;
  /* 1003bc00 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1003bc03 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 1003bc06 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 1003bc0a mov dword ptr [0x10042e70], eax */
  w32((uint32_t)(0x10042e70), (EAX));
  /* 1003bc0f mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1003bc11 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1003bc16 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003bc18 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1003bc1b movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 1003bc1e sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1003bc21 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 1003bc27 jmp 0x1003bc2b */
  goto L_1003bc2b;
L_1003bc29:;
  /* 1003bc29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1003bc2b:;
  /* 1003bc2b pop edi */
  EDI = (pop32());
  /* 1003bc2c pop esi */
  ESI = (pop32());
  /* 1003bc2d pop ebx */
  EBX = (pop32());
  /* 1003bc2e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003bc2f ret  */
  ESPCHK(0x1003ba28u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc30 @ 0x1003bc30 (292 bytes, 125 insns) */
void f_1003bc30(void) {
  FTRACE(0x1003bc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003bc30 push ebp */
  push32((uint32_t)(EBP));
  /* 1003bc31 mov ebp, esp */
  EBP = (ESP);
  /* 1003bc33 push ecx */
  push32((uint32_t)(ECX));
  /* 1003bc34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003bc37 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1003bc3a push ebx */
  push32((uint32_t)(EBX));
  /* 1003bc3b push esi */
  push32((uint32_t)(ESI));
  /* 1003bc3c mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1003bc3f push edi */
  push32((uint32_t)(EDI));
  /* 1003bc40 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 1003bc42 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 1003bc48 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bc4a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1003bc4d mov eax, edi */
  EAX = (EDI);
  /* 1003bc4f mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1003bc52 jb 0x1003bc75 */
  if (C.cf) goto L_1003bc75;
  /* 1003bc54 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 1003bc57 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1003bc59 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bc5b jae 0x1003bc64 */
  if (!C.cf) goto L_1003bc64;
  /* 1003bc5d add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1003bc5f sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1003bc62 jmp 0x1003bc6d */
  goto L_1003bc6d;
L_1003bc64:;
  /* 1003bc64 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1003bc68 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 1003bc6b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1003bc6d:;
  /* 1003bc6d lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 1003bc70 jmp 0x1003bd43 */
  goto L_1003bd43;
L_1003bc75:;
  /* 1003bc75 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003bc77 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003bc7a je 0x1003bc7e */
  if (C.zf) goto L_1003bc7e;
  /* 1003bc7c mov eax, esi */
  EAX = (ESI);
L_1003bc7e:;
  /* 1003bc7e lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 1003bc81 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bc83 jae 0x1003bcc8 */
  if (!C.cf) goto L_1003bcc8;
L_1003bc85:;
  /* 1003bc85 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1003bc87 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 1003bc89 jne 0x1003bcbb */
  if (!C.zf) goto L_1003bcbb;
  /* 1003bc8b push 1 */
  push32((uint32_t)(0x1u));
  /* 1003bc8d lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 1003bc90 pop esi */
  ESI = (pop32());
L_1003bc91:;
  /* 1003bc91 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003bc94 jne 0x1003bc9a */
  if (!C.zf) goto L_1003bc9a;
  /* 1003bc96 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1003bc97 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1003bc98 jmp 0x1003bc91 */
  goto L_1003bc91;
L_1003bc9a:;
  /* 1003bc9a cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bc9c jae 0x1003bcec */
  if (!C.cf) goto L_1003bcec;
  /* 1003bc9e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bca1 jne 0x1003bca8 */
  if (!C.zf) goto L_1003bca8;
  /* 1003bca3 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1003bca6 jmp 0x1003bcb4 */
  goto L_1003bcb4;
L_1003bca8:;
  /* 1003bca8 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1003bcab cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bcae jb 0x1003bd4d */
  if (C.cf) goto L_1003bd4d;
L_1003bcb4:;
  /* 1003bcb4 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 1003bcb7 mov eax, ebx */
  EAX = (EBX);
  /* 1003bcb9 jmp 0x1003bcc0 */
  goto L_1003bcc0;
L_1003bcbb:;
  /* 1003bcbb movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1003bcbe add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1003bcc0:;
  /* 1003bcc0 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 1003bcc3 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bcc6 jb 0x1003bc85 */
  if (C.cf) goto L_1003bc85;
L_1003bcc8:;
  /* 1003bcc8 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_1003bccb:;
  /* 1003bccb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bccd jae 0x1003bd4d */
  if (!C.cf) goto L_1003bd4d;
  /* 1003bccf lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 1003bcd2 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bcd5 jae 0x1003bd4d */
  if (!C.cf) goto L_1003bd4d;
  /* 1003bcd7 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1003bcd9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003bcdb jne 0x1003bd1d */
  if (!C.zf) goto L_1003bd1d;
  /* 1003bcdd push 1 */
  push32((uint32_t)(0x1u));
  /* 1003bcdf lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 1003bce2 pop eax */
  EAX = (pop32());
L_1003bce3:;
  /* 1003bce3 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003bce6 jne 0x1003bd0d */
  if (!C.zf) goto L_1003bd0d;
  /* 1003bce8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1003bce9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1003bcea jmp 0x1003bce3 */
  goto L_1003bce3;
L_1003bcec:;
  /* 1003bcec lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 1003bcef cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bcf2 jae 0x1003bcfd */
  if (!C.cf) goto L_1003bcfd;
  /* 1003bcf4 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003bcf6 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1003bcf8 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1003bcfb jmp 0x1003bd06 */
  goto L_1003bd06;
L_1003bcfd:;
  /* 1003bcfd and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1003bd01 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 1003bd04 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_1003bd06:;
  /* 1003bd06 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1003bd08 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003bd0b jmp 0x1003bd43 */
  goto L_1003bd43;
L_1003bd0d:;
  /* 1003bd0d cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bd0f jae 0x1003bd24 */
  if (!C.cf) goto L_1003bd24;
  /* 1003bd11 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1003bd14 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bd17 jb 0x1003bd4d */
  if (C.cf) goto L_1003bd4d;
  /* 1003bd19 mov esi, ebx */
  ESI = (EBX);
  /* 1003bd1b jmp 0x1003bccb */
  goto L_1003bccb;
L_1003bd1d:;
  /* 1003bd1d movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1003bd20 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003bd22 jmp 0x1003bccb */
  goto L_1003bccb;
L_1003bd24:;
  /* 1003bd24 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 1003bd27 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bd2a jae 0x1003bd35 */
  if (!C.cf) goto L_1003bd35;
  /* 1003bd2c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003bd2e mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1003bd30 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1003bd33 jmp 0x1003bd3e */
  goto L_1003bd3e;
L_1003bd35:;
  /* 1003bd35 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1003bd39 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 1003bd3c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1003bd3e:;
  /* 1003bd3e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1003bd40 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_1003bd43:;
  /* 1003bd43 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1003bd46 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1003bd49 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003bd4b jmp 0x1003bd4f */
  goto L_1003bd4f;
L_1003bd4d:;
  /* 1003bd4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1003bd4f:;
  /* 1003bd4f pop edi */
  EDI = (pop32());
  /* 1003bd50 pop esi */
  ESI = (pop32());
  /* 1003bd51 pop ebx */
  EBX = (pop32());
  /* 1003bd52 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003bd53 ret  */
  ESPCHK(0x1003bc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd54 @ 0x1003bd54 (137 bytes, 50 insns) */
void f_1003bd54(void) {
  FTRACE(0x1003bd54u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003bd54 push ebx */
  push32((uint32_t)(EBX));
  /* 1003bd55 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1003bd57 cmp dword ptr [0x10046808], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10046808))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bd5d push esi */
  push32((uint32_t)(ESI));
  /* 1003bd5e push edi */
  push32((uint32_t)(EDI));
  /* 1003bd5f jne 0x1003bda3 */
  if (!C.zf) goto L_1003bda3;
  /* 1003bd61 push 0x1003e548 */
  push32((uint32_t)(0x1003e548u));
  /* 1003bd66 call dword ptr [0x1003e0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e0b0))), 0x1003bd6cu);
  /* 1003bd6c mov edi, eax */
  EDI = (EAX);
  /* 1003bd6e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bd70 je 0x1003bdd9 */
  if (C.zf) goto L_1003bdd9;
  /* 1003bd72 mov esi, dword ptr [0x1003e088] */
  ESI = (r32((uint32_t)(0x1003e088)));
  /* 1003bd78 push 0x1003e53c */
  push32((uint32_t)(0x1003e53cu));
  /* 1003bd7d push edi */
  push32((uint32_t)(EDI));
  /* 1003bd7e call esi */
  call_ind((uint32_t)(ESI), 0x1003bd80u);
  /* 1003bd80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003bd82 mov dword ptr [0x10046808], eax */
  w32((uint32_t)(0x10046808), (EAX));
  /* 1003bd87 je 0x1003bdd9 */
  if (C.zf) goto L_1003bdd9;
  /* 1003bd89 push 0x1003e52c */
  push32((uint32_t)(0x1003e52cu));
  /* 1003bd8e push edi */
  push32((uint32_t)(EDI));
  /* 1003bd8f call esi */
  call_ind((uint32_t)(ESI), 0x1003bd91u);
  /* 1003bd91 push 0x1003e518 */
  push32((uint32_t)(0x1003e518u));
  /* 1003bd96 push edi */
  push32((uint32_t)(EDI));
  /* 1003bd97 mov dword ptr [0x1004680c], eax */
  w32((uint32_t)(0x1004680c), (EAX));
  /* 1003bd9c call esi */
  call_ind((uint32_t)(ESI), 0x1003bd9eu);
  /* 1003bd9e mov dword ptr [0x10046810], eax */
  w32((uint32_t)(0x10046810), (EAX));
L_1003bda3:;
  /* 1003bda3 mov eax, dword ptr [0x1004680c] */
  EAX = (r32((uint32_t)(0x1004680c)));
  /* 1003bda8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003bdaa je 0x1003bdc2 */
  if (C.zf) goto L_1003bdc2;
  /* 1003bdac call eax */
  call_ind((uint32_t)(EAX), 0x1003bdaeu);
  /* 1003bdae mov ebx, eax */
  EBX = (EAX);
  /* 1003bdb0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1003bdb2 je 0x1003bdc2 */
  if (C.zf) goto L_1003bdc2;
  /* 1003bdb4 mov eax, dword ptr [0x10046810] */
  EAX = (r32((uint32_t)(0x10046810)));
  /* 1003bdb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003bdbb je 0x1003bdc2 */
  if (C.zf) goto L_1003bdc2;
  /* 1003bdbd push ebx */
  push32((uint32_t)(EBX));
  /* 1003bdbe call eax */
  call_ind((uint32_t)(EAX), 0x1003bdc0u);
  /* 1003bdc0 mov ebx, eax */
  EBX = (EAX);
L_1003bdc2:;
  /* 1003bdc2 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1003bdc6 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1003bdca push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1003bdce push ebx */
  push32((uint32_t)(EBX));
  /* 1003bdcf call dword ptr [0x10046808] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046808))), 0x1003bdd5u);
L_1003bdd5:;
  /* 1003bdd5 pop edi */
  EDI = (pop32());
  /* 1003bdd6 pop esi */
  ESI = (pop32());
  /* 1003bdd7 pop ebx */
  EBX = (pop32());
  /* 1003bdd8 ret  */
  ESPCHK(0x1003bd54u, _esp0);
  ESP += 4; return;
L_1003bdd9:;
  /* 1003bdd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003bddb jmp 0x1003bdd5 */
  goto L_1003bdd5;
}

/* _strncpy @ 0x1003bde0 (254 bytes, 109 insns) */
void f_1003bde0(void) {
  FTRACE(0x1003bde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003bde0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1003bde4 push edi */
  push32((uint32_t)(EDI));
  /* 1003bde5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1003bde7 je 0x1003be63 */
  if (C.zf) goto L_1003be63;
  /* 1003bde9 push esi */
  push32((uint32_t)(ESI));
  /* 1003bdea push ebx */
  push32((uint32_t)(EBX));
  /* 1003bdeb mov ebx, ecx */
  EBX = (ECX);
  /* 1003bded mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1003bdf1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1003bdf7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1003bdfb jne 0x1003be04 */
  if (!C.zf) goto L_1003be04;
  /* 1003bdfd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1003be00 jne 0x1003be71 */
  if (!C.zf) goto L_1003be71;
  /* 1003be02 jmp 0x1003be25 */
  goto L_1003be25;
L_1003be04:;
  /* 1003be04 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1003be06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1003be07 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1003be09 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1003be0a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1003be0b je 0x1003be32 */
  if (C.zf) goto L_1003be32;
  /* 1003be0d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003be0f je 0x1003be3a */
  if (C.zf) goto L_1003be3a;
  /* 1003be11 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1003be17 jne 0x1003be04 */
  if (!C.zf) goto L_1003be04;
  /* 1003be19 mov ebx, ecx */
  EBX = (ECX);
  /* 1003be1b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1003be1e jne 0x1003be71 */
  if (!C.zf) goto L_1003be71;
L_1003be20:;
  /* 1003be20 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1003be23 je 0x1003be32 */
  if (C.zf) goto L_1003be32;
L_1003be25:;
  /* 1003be25 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1003be27 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1003be28 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1003be2a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1003be2b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003be2d je 0x1003be5e */
  if (C.zf) goto L_1003be5e;
  /* 1003be2f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1003be30 jne 0x1003be25 */
  if (!C.zf) goto L_1003be25;
L_1003be32:;
  /* 1003be32 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1003be36 pop ebx */
  EBX = (pop32());
  /* 1003be37 pop esi */
  ESI = (pop32());
  /* 1003be38 pop edi */
  EDI = (pop32());
  /* 1003be39 ret  */
  ESPCHK(0x1003bde0u, _esp0);
  ESP += 4; return;
L_1003be3a:;
  /* 1003be3a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1003be40 je 0x1003be54 */
  if (C.zf) goto L_1003be54;
L_1003be42:;
  /* 1003be42 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1003be44 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1003be45 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1003be46 je 0x1003bed6 */
  if (C.zf) goto L_1003bed6;
  /* 1003be4c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1003be52 jne 0x1003be42 */
  if (!C.zf) goto L_1003be42;
L_1003be54:;
  /* 1003be54 mov ebx, ecx */
  EBX = (ECX);
  /* 1003be56 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1003be59 jne 0x1003bec7 */
  if (!C.zf) goto L_1003bec7;
L_1003be5b:;
  /* 1003be5b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1003be5d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1003be5e:;
  /* 1003be5e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1003be5f jne 0x1003be5b */
  if (!C.zf) goto L_1003be5b;
  /* 1003be61 pop ebx */
  EBX = (pop32());
  /* 1003be62 pop esi */
  ESI = (pop32());
L_1003be63:;
  /* 1003be63 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1003be67 pop edi */
  EDI = (pop32());
  /* 1003be68 ret  */
  ESPCHK(0x1003bde0u, _esp0);
  ESP += 4; return;
L_1003be69:;
  /* 1003be69 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1003be6b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003be6e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1003be6f je 0x1003be20 */
  if (C.zf) goto L_1003be20;
L_1003be71:;
  /* 1003be71 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1003be76 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1003be78 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003be7a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1003be7d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1003be7f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1003be81 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003be84 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1003be89 je 0x1003be69 */
  if (C.zf) goto L_1003be69;
  /* 1003be8b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1003be8d je 0x1003bebb */
  if (C.zf) goto L_1003bebb;
  /* 1003be8f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1003be91 je 0x1003beb1 */
  if (C.zf) goto L_1003beb1;
  /* 1003be93 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1003be99 je 0x1003bea7 */
  if (C.zf) goto L_1003bea7;
  /* 1003be9b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1003bea1 jne 0x1003be69 */
  if (!C.zf) goto L_1003be69;
  /* 1003bea3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1003bea5 jmp 0x1003bebf */
  goto L_1003bebf;
L_1003bea7:;
  /* 1003bea7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1003bead mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1003beaf jmp 0x1003bebf */
  goto L_1003bebf;
L_1003beb1:;
  /* 1003beb1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1003beb7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1003beb9 jmp 0x1003bebf */
  goto L_1003bebf;
L_1003bebb:;
  /* 1003bebb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1003bebd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1003bebf:;
  /* 1003bebf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003bec2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003bec4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1003bec5 je 0x1003bed1 */
  if (C.zf) goto L_1003bed1;
L_1003bec7:;
  /* 1003bec7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1003bec9:;
  /* 1003bec9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1003becb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003bece dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1003becf jne 0x1003bec9 */
  if (!C.zf) goto L_1003bec9;
L_1003bed1:;
  /* 1003bed1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1003bed4 jne 0x1003be5b */
  if (!C.zf) goto L_1003be5b;
L_1003bed6:;
  /* 1003bed6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1003beda pop ebx */
  EBX = (pop32());
  /* 1003bedb pop esi */
  ESI = (pop32());
  /* 1003bedc pop edi */
  EDI = (pop32());
  /* 1003bedd ret  */
  ESPCHK(0x1003bde0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bede @ 0x1003bede (115 bytes, 37 insns) */
void f_1003bede(void) {
  FTRACE(0x1003bedeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003bede push esi */
  push32((uint32_t)(ESI));
  /* 1003bedf call 0x1003bf5a */
  push32(0x1003bee4u); f_1003bf5a();
  /* 1003bee4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1003bee8 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1003beea mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1003beec mov eax, 0x10042e80 */
  EAX = (0x10042e80u);
L_1003bef1:;
  /* 1003bef1 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bef3 je 0x1003bf17 */
  if (C.zf) goto L_1003bf17;
  /* 1003bef5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003bef8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1003bef9 cmp eax, 0x10042fe8 */
  { uint32_t _a=(EAX),_b=(0x10042fe8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003befe jl 0x1003bef1 */
  if ((C.sf!=C.of)) goto L_1003bef1;
  /* 1003bf00 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bf03 jb 0x1003bf27 */
  if (C.cf) goto L_1003bf27;
  /* 1003bf05 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bf08 ja 0x1003bf27 */
  if ((!C.cf&&!C.zf)) goto L_1003bf27;
  /* 1003bf0a call 0x1003bf51 */
  push32(0x1003bf0fu); f_1003bf51();
  /* 1003bf0f mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1003bf15 pop esi */
  ESI = (pop32());
  /* 1003bf16 ret  */
  ESPCHK(0x1003bedeu, _esp0);
  ESP += 4; return;
L_1003bf17:;
  /* 1003bf17 call 0x1003bf51 */
  push32(0x1003bf1cu); f_1003bf51();
  /* 1003bf1c mov ecx, dword ptr [esi*8 + 0x10042e84] */
  ECX = (r32((uint32_t)(ESI*8 + 0x10042e84)));
  /* 1003bf23 pop esi */
  ESI = (pop32());
  /* 1003bf24 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1003bf26 ret  */
  ESPCHK(0x1003bedeu, _esp0);
  ESP += 4; return;
L_1003bf27:;
  /* 1003bf27 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bf2d jb 0x1003bf44 */
  if (C.cf) goto L_1003bf44;
  /* 1003bf2f cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bf35 ja 0x1003bf44 */
  if ((!C.cf&&!C.zf)) goto L_1003bf44;
  /* 1003bf37 call 0x1003bf51 */
  push32(0x1003bf3cu); f_1003bf51();
  /* 1003bf3c mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1003bf42 pop esi */
  ESI = (pop32());
  /* 1003bf43 ret  */
  ESPCHK(0x1003bedeu, _esp0);
  ESP += 4; return;
L_1003bf44:;
  /* 1003bf44 call 0x1003bf51 */
  push32(0x1003bf49u); f_1003bf51();
  /* 1003bf49 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1003bf4f pop esi */
  ESI = (pop32());
  /* 1003bf50 ret  */
  ESPCHK(0x1003bedeu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf51 @ 0x1003bf51 (9 bytes, 3 insns) */
void f_1003bf51(void) {
  FTRACE(0x1003bf51u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003bf51 call 0x10038028 */
  push32(0x1003bf56u); f_10038028();
  /* 1003bf56 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003bf59 ret  */
  ESPCHK(0x1003bf51u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf5a @ 0x1003bf5a (9 bytes, 3 insns) */
void f_1003bf5a(void) {
  FTRACE(0x1003bf5au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003bf5a call 0x10038028 */
  push32(0x1003bf5fu); f_10038028();
  /* 1003bf5f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003bf62 ret  */
  ESPCHK(0x1003bf5au, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf63 @ 0x1003bf63 (127 bytes, 48 insns) */
void f_1003bf63(void) {
  FTRACE(0x1003bf63u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003bf63 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1003bf67 push esi */
  push32((uint32_t)(ESI));
  /* 1003bf68 cmp ecx, dword ptr [0x10047d20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10047d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bf6e push edi */
  push32((uint32_t)(EDI));
  /* 1003bf6f jae 0x1003bfc9 */
  if (!C.cf) goto L_1003bfc9;
  /* 1003bf71 mov eax, ecx */
  EAX = (ECX);
  /* 1003bf73 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1003bf76 lea edi, [eax*4 + 0x10047c20] */
  EDI = ((uint32_t)(EAX*4 + 0x10047c20));
  /* 1003bf7d mov eax, ecx */
  EAX = (ECX);
  /* 1003bf7f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1003bf82 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1003bf85 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1003bf87 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1003bf8a add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003bf8c test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1003bf90 je 0x1003bfc9 */
  if (C.zf) goto L_1003bfc9;
  /* 1003bf92 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bf95 je 0x1003bfc9 */
  if (C.zf) goto L_1003bfc9;
  /* 1003bf97 cmp dword ptr [0x10046644], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10046644))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bf9e jne 0x1003bfbf */
  if (!C.zf) goto L_1003bfbf;
  /* 1003bfa0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003bfa2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003bfa4 je 0x1003bfb6 */
  if (C.zf) goto L_1003bfb6;
  /* 1003bfa6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1003bfa7 je 0x1003bfb1 */
  if (C.zf) goto L_1003bfb1;
  /* 1003bfa9 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1003bfaa jne 0x1003bfbf */
  if (!C.zf) goto L_1003bfbf;
  /* 1003bfac push eax */
  push32((uint32_t)(EAX));
  /* 1003bfad push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1003bfaf jmp 0x1003bfb9 */
  goto L_1003bfb9;
L_1003bfb1:;
  /* 1003bfb1 push eax */
  push32((uint32_t)(EAX));
  /* 1003bfb2 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1003bfb4 jmp 0x1003bfb9 */
  goto L_1003bfb9;
L_1003bfb6:;
  /* 1003bfb6 push eax */
  push32((uint32_t)(EAX));
  /* 1003bfb7 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_1003bfb9:;
  /* 1003bfb9 call dword ptr [0x1003e0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e0b4))), 0x1003bfbfu);
L_1003bfbf:;
  /* 1003bfbf mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1003bfc1 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 1003bfc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003bfc7 jmp 0x1003bfdf */
  goto L_1003bfdf;
L_1003bfc9:;
  /* 1003bfc9 call 0x1003bf51 */
  push32(0x1003bfceu); f_1003bf51();
  /* 1003bfce mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1003bfd4 call 0x1003bf5a */
  push32(0x1003bfd9u); f_1003bf5a();
  /* 1003bfd9 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1003bfdc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1003bfdf:;
  /* 1003bfdf pop edi */
  EDI = (pop32());
  /* 1003bfe0 pop esi */
  ESI = (pop32());
  /* 1003bfe1 ret  */
  ESPCHK(0x1003bf63u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfe2 @ 0x1003bfe2 (66 bytes, 19 insns) */
void f_1003bfe2(void) {
  FTRACE(0x1003bfe2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003bfe2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1003bfe6 cmp eax, dword ptr [0x10047d20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10047d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003bfec jae 0x1003c00d */
  if (!C.cf) goto L_1003c00d;
  /* 1003bfee mov ecx, eax */
  ECX = (EAX);
  /* 1003bff0 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1003bff3 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1003bff6 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1003bff9 mov ecx, dword ptr [ecx*4 + 0x10047c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10047c20)));
  /* 1003c000 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1003c005 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 1003c008 je 0x1003c00d */
  if (C.zf) goto L_1003c00d;
  /* 1003c00a mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 1003c00c ret  */
  ESPCHK(0x1003bfe2u, _esp0);
  ESP += 4; return;
L_1003c00d:;
  /* 1003c00d call 0x1003bf51 */
  push32(0x1003c012u); f_1003bf51();
  /* 1003c012 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1003c018 call 0x1003bf5a */
  push32(0x1003c01du); f_1003bf5a();
  /* 1003c01d and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1003c020 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1003c023 ret  */
  ESPCHK(0x1003bfe2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c024 @ 0x1003c024 (95 bytes, 34 insns) */
void f_1003c024(void) {
  FTRACE(0x1003c024u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003c024 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1003c028 push ebx */
  push32((uint32_t)(EBX));
  /* 1003c029 mov ecx, eax */
  ECX = (EAX);
  /* 1003c02b and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1003c02e sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1003c031 push esi */
  push32((uint32_t)(ESI));
  /* 1003c032 push edi */
  push32((uint32_t)(EDI));
  /* 1003c033 mov esi, dword ptr [ecx*4 + 0x10047c20] */
  ESI = (r32((uint32_t)(ECX*4 + 0x10047c20)));
  /* 1003c03a lea ebx, [ecx*4 + 0x10047c20] */
  EBX = ((uint32_t)(ECX*4 + 0x10047c20));
  /* 1003c041 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 1003c044 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 1003c047 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003c049 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c04d jne 0x1003c072 */
  if (!C.zf) goto L_1003c072;
  /* 1003c04f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1003c051 call 0x10039ff3 */
  push32(0x1003c056u); f_10039ff3();
  /* 1003c056 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c05a pop ecx */
  ECX = (pop32());
  /* 1003c05b jne 0x1003c06a */
  if (!C.zf) goto L_1003c06a;
  /* 1003c05d lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 1003c060 push eax */
  push32((uint32_t)(EAX));
  /* 1003c061 call dword ptr [0x1003e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e094))), 0x1003c067u);
  /* 1003c067 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1003c06a:;
  /* 1003c06a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1003c06c call 0x1003a054 */
  push32(0x1003c071u); f_1003a054();
  /* 1003c071 pop ecx */
  ECX = (pop32());
L_1003c072:;
  /* 1003c072 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1003c074 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 1003c078 push eax */
  push32((uint32_t)(EAX));
  /* 1003c079 call dword ptr [0x1003e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e00c))), 0x1003c07fu);
  /* 1003c07f pop edi */
  EDI = (pop32());
  /* 1003c080 pop esi */
  ESI = (pop32());
  /* 1003c081 pop ebx */
  EBX = (pop32());
  /* 1003c082 ret  */
  ESPCHK(0x1003c024u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c083 @ 0x1003c083 (34 bytes, 10 insns) */
void f_1003c083(void) {
  FTRACE(0x1003c083u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003c083 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1003c087 mov ecx, eax */
  ECX = (EAX);
  /* 1003c089 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1003c08c sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1003c08f lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1003c092 mov ecx, dword ptr [ecx*4 + 0x10047c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10047c20)));
  /* 1003c099 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 1003c09d push eax */
  push32((uint32_t)(EAX));
  /* 1003c09e call dword ptr [0x1003e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e008))), 0x1003c0a4u);
  /* 1003c0a4 ret  */
  ESPCHK(0x1003c083u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c126 @ 0x1003c126 (46 bytes, 22 insns) */
void f_1003c126(void) {
  FTRACE(0x1003c126u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003c126 push esi */
  push32((uint32_t)(ESI));
  /* 1003c127 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1003c12b push esi */
  push32((uint32_t)(ESI));
  /* 1003c12c call 0x1003c154 */
  push32(0x1003c131u); f_1003c154();
  /* 1003c131 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003c133 pop ecx */
  ECX = (pop32());
  /* 1003c134 je 0x1003c13b */
  if (C.zf) goto L_1003c13b;
  /* 1003c136 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1003c139 pop esi */
  ESI = (pop32());
  /* 1003c13a ret  */
  ESPCHK(0x1003c126u, _esp0);
  ESP += 4; return;
L_1003c13b:;
  /* 1003c13b test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 1003c13f je 0x1003c150 */
  if (C.zf) goto L_1003c150;
  /* 1003c141 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1003c144 call 0x1003d2a0 */
  push32(0x1003c149u); f_1003d2a0();
  /* 1003c149 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1003c14b pop ecx */
  ECX = (pop32());
  /* 1003c14c pop esi */
  ESI = (pop32());
  /* 1003c14d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003c14f ret  */
  ESPCHK(0x1003c126u, _esp0);
  ESP += 4; return;
L_1003c150:;
  /* 1003c150 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003c152 pop esi */
  ESI = (pop32());
  /* 1003c153 ret  */
  ESPCHK(0x1003c126u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c154 @ 0x1003c154 (92 bytes, 40 insns) */
void f_1003c154(void) {
  FTRACE(0x1003c154u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003c154 push ebx */
  push32((uint32_t)(EBX));
  /* 1003c155 push esi */
  push32((uint32_t)(ESI));
  /* 1003c156 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1003c15a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1003c15c push edi */
  push32((uint32_t)(EDI));
  /* 1003c15d mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1003c160 mov ecx, eax */
  ECX = (EAX);
  /* 1003c162 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1003c165 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c168 jne 0x1003c1a1 */
  if (!C.zf) goto L_1003c1a1;
  /* 1003c16a test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 1003c16e je 0x1003c1a1 */
  if (C.zf) goto L_1003c1a1;
  /* 1003c170 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1003c173 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 1003c175 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003c177 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1003c179 jle 0x1003c1a1 */
  if ((C.zf||C.sf!=C.of)) goto L_1003c1a1;
  /* 1003c17b push edi */
  push32((uint32_t)(EDI));
  /* 1003c17c push eax */
  push32((uint32_t)(EAX));
  /* 1003c17d push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1003c180 call 0x10038c55 */
  push32(0x1003c185u); f_10038c55();
  /* 1003c185 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003c188 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c18a jne 0x1003c19a */
  if (!C.zf) goto L_1003c19a;
  /* 1003c18c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1003c18f test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 1003c191 je 0x1003c1a1 */
  if (C.zf) goto L_1003c1a1;
  /* 1003c193 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 1003c195 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1003c198 jmp 0x1003c1a1 */
  goto L_1003c1a1;
L_1003c19a:;
  /* 1003c19a or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1003c19e or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_1003c1a1:;
  /* 1003c1a1 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1003c1a4 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1003c1a8 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1003c1aa pop edi */
  EDI = (pop32());
  /* 1003c1ab mov eax, ebx */
  EAX = (EBX);
  /* 1003c1ad pop esi */
  ESI = (pop32());
  /* 1003c1ae pop ebx */
  EBX = (pop32());
  /* 1003c1af ret  */
  ESPCHK(0x1003c154u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1b9 @ 0x1003c1b9 (164 bytes, 66 insns) */
void f_1003c1b9(void) {
  FTRACE(0x1003c1b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003c1b9 push ebx */
  push32((uint32_t)(EBX));
  /* 1003c1ba push esi */
  push32((uint32_t)(ESI));
  /* 1003c1bb push edi */
  push32((uint32_t)(EDI));
  /* 1003c1bc push 2 */
  push32((uint32_t)(0x2u));
  /* 1003c1be xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1003c1c0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1003c1c2 call 0x10039ff3 */
  push32(0x1003c1c7u); f_10039ff3();
  /* 1003c1c7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1003c1c9 pop ecx */
  ECX = (pop32());
  /* 1003c1ca cmp dword ptr [0x10047c00], esi */
  { uint32_t _a=(r32((uint32_t)(0x10047c00))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c1d0 jle 0x1003c246 */
  if ((C.zf||C.sf!=C.of)) goto L_1003c246;
L_1003c1d2:;
  /* 1003c1d2 mov eax, dword ptr [0x10046be8] */
  EAX = (r32((uint32_t)(0x10046be8)));
  /* 1003c1d7 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1003c1da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003c1dc je 0x1003c23d */
  if (C.zf) goto L_1003c23d;
  /* 1003c1de test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1003c1e2 je 0x1003c23d */
  if (C.zf) goto L_1003c23d;
  /* 1003c1e4 push eax */
  push32((uint32_t)(EAX));
  /* 1003c1e5 push esi */
  push32((uint32_t)(ESI));
  /* 1003c1e6 call 0x10038f9d */
  push32(0x1003c1ebu); f_10038f9d();
  /* 1003c1eb mov eax, dword ptr [0x10046be8] */
  EAX = (r32((uint32_t)(0x10046be8)));
  /* 1003c1f0 pop ecx */
  ECX = (pop32());
  /* 1003c1f1 pop ecx */
  ECX = (pop32());
  /* 1003c1f2 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1003c1f5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1003c1f8 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 1003c1fb je 0x1003c22d */
  if (C.zf) goto L_1003c22d;
  /* 1003c1fd cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c202 jne 0x1003c213 */
  if (!C.zf) goto L_1003c213;
  /* 1003c204 push eax */
  push32((uint32_t)(EAX));
  /* 1003c205 call 0x1003c126 */
  push32(0x1003c20au); f_1003c126();
  /* 1003c20a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c20d pop ecx */
  ECX = (pop32());
  /* 1003c20e je 0x1003c22d */
  if (C.zf) goto L_1003c22d;
  /* 1003c210 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1003c211 jmp 0x1003c22d */
  goto L_1003c22d;
L_1003c213:;
  /* 1003c213 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c218 jne 0x1003c22d */
  if (!C.zf) goto L_1003c22d;
  /* 1003c21a test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 1003c21d je 0x1003c22d */
  if (C.zf) goto L_1003c22d;
  /* 1003c21f push eax */
  push32((uint32_t)(EAX));
  /* 1003c220 call 0x1003c126 */
  push32(0x1003c225u); f_1003c126();
  /* 1003c225 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c228 pop ecx */
  ECX = (pop32());
  /* 1003c229 jne 0x1003c22d */
  if (!C.zf) goto L_1003c22d;
  /* 1003c22b or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_1003c22d:;
  /* 1003c22d mov eax, dword ptr [0x10046be8] */
  EAX = (r32((uint32_t)(0x10046be8)));
  /* 1003c232 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 1003c235 push esi */
  push32((uint32_t)(ESI));
  /* 1003c236 call 0x10038fef */
  push32(0x1003c23bu); f_10038fef();
  /* 1003c23b pop ecx */
  ECX = (pop32());
  /* 1003c23c pop ecx */
  ECX = (pop32());
L_1003c23d:;
  /* 1003c23d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1003c23e cmp esi, dword ptr [0x10047c00] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10047c00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c244 jl 0x1003c1d2 */
  if ((C.sf!=C.of)) goto L_1003c1d2;
L_1003c246:;
  /* 1003c246 push 2 */
  push32((uint32_t)(0x2u));
  /* 1003c248 call 0x1003a054 */
  push32(0x1003c24du); f_1003a054();
  /* 1003c24d cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c252 pop ecx */
  ECX = (pop32());
  /* 1003c253 mov eax, ebx */
  EAX = (EBX);
  /* 1003c255 je 0x1003c259 */
  if (C.zf) goto L_1003c259;
  /* 1003c257 mov eax, edi */
  EAX = (EDI);
L_1003c259:;
  /* 1003c259 pop edi */
  EDI = (pop32());
  /* 1003c25a pop esi */
  ESI = (pop32());
  /* 1003c25b pop ebx */
  EBX = (pop32());
  /* 1003c25c ret  */
  ESPCHK(0x1003c1b9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c25d @ 0x1003c25d (318 bytes, 123 insns) */
void f_1003c25d(void) {
  FTRACE(0x1003c25du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003c25d push ebp */
  push32((uint32_t)(EBP));
  /* 1003c25e mov ebp, esp */
  EBP = (ESP);
  /* 1003c260 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1003c262 push 0x1003e560 */
  push32((uint32_t)(0x1003e560u));
  /* 1003c267 push 0x1003d010 */
  push32((uint32_t)(0x1003d010u));
  /* 1003c26c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1003c272 push eax */
  push32((uint32_t)(EAX));
  /* 1003c273 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1003c27a sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003c27d push ebx */
  push32((uint32_t)(EBX));
  /* 1003c27e push esi */
  push32((uint32_t)(ESI));
  /* 1003c27f push edi */
  push32((uint32_t)(EDI));
  /* 1003c280 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1003c283 mov eax, dword ptr [0x10046854] */
  EAX = (r32((uint32_t)(0x10046854)));
  /* 1003c288 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1003c28a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c28c jne 0x1003c2cc */
  if (!C.zf) goto L_1003c2cc;
  /* 1003c28e lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1003c291 push eax */
  push32((uint32_t)(EAX));
  /* 1003c292 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003c294 pop esi */
  ESI = (pop32());
  /* 1003c295 push esi */
  push32((uint32_t)(ESI));
  /* 1003c296 push 0x1003e558 */
  push32((uint32_t)(0x1003e558u));
  /* 1003c29b push esi */
  push32((uint32_t)(ESI));
  /* 1003c29c call dword ptr [0x1003e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e0c0))), 0x1003c2a2u);
  /* 1003c2a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003c2a4 je 0x1003c2aa */
  if (C.zf) goto L_1003c2aa;
  /* 1003c2a6 mov eax, esi */
  EAX = (ESI);
  /* 1003c2a8 jmp 0x1003c2c7 */
  goto L_1003c2c7;
L_1003c2aa:;
  /* 1003c2aa lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1003c2ad push eax */
  push32((uint32_t)(EAX));
  /* 1003c2ae push esi */
  push32((uint32_t)(ESI));
  /* 1003c2af push 0x1003e554 */
  push32((uint32_t)(0x1003e554u));
  /* 1003c2b4 push esi */
  push32((uint32_t)(ESI));
  /* 1003c2b5 push ebx */
  push32((uint32_t)(EBX));
  /* 1003c2b6 call dword ptr [0x1003e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e0bc))), 0x1003c2bcu);
  /* 1003c2bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003c2be je 0x1003c392 */
  if (C.zf) goto L_1003c392;
  /* 1003c2c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1003c2c6 pop eax */
  EAX = (pop32());
L_1003c2c7:;
  /* 1003c2c7 mov dword ptr [0x10046854], eax */
  w32((uint32_t)(0x10046854), (EAX));
L_1003c2cc:;
  /* 1003c2cc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c2cf jne 0x1003c2f5 */
  if (!C.zf) goto L_1003c2f5;
  /* 1003c2d1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1003c2d4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c2d6 jne 0x1003c2dd */
  if (!C.zf) goto L_1003c2dd;
  /* 1003c2d8 mov eax, dword ptr [0x10046828] */
  EAX = (r32((uint32_t)(0x10046828)));
L_1003c2dd:;
  /* 1003c2dd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1003c2e0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1003c2e3 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1003c2e6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1003c2e9 push eax */
  push32((uint32_t)(EAX));
  /* 1003c2ea call dword ptr [0x1003e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e0bc))), 0x1003c2f0u);
  /* 1003c2f0 jmp 0x1003c394 */
  goto L_1003c394;
L_1003c2f5:;
  /* 1003c2f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c2f8 jne 0x1003c392 */
  if (!C.zf) goto L_1003c392;
  /* 1003c2fe cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c301 jne 0x1003c30b */
  if (!C.zf) goto L_1003c30b;
  /* 1003c303 mov eax, dword ptr [0x10046838] */
  EAX = (r32((uint32_t)(0x10046838)));
  /* 1003c308 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1003c30b:;
  /* 1003c30b push ebx */
  push32((uint32_t)(EBX));
  /* 1003c30c push ebx */
  push32((uint32_t)(EBX));
  /* 1003c30d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1003c310 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1003c313 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1003c316 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1003c318 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003c31a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1003c31d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1003c31e push eax */
  push32((uint32_t)(EAX));
  /* 1003c31f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1003c322 call dword ptr [0x1003e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e0b8))), 0x1003c328u);
  /* 1003c328 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1003c32b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c32d je 0x1003c392 */
  if (C.zf) goto L_1003c392;
  /* 1003c32f mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1003c332 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 1003c335 mov eax, edi */
  EAX = (EDI);
  /* 1003c337 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003c33a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1003c33c call 0x1003aeb0 */
  push32(0x1003c341u); f_1003aeb0();
  /* 1003c341 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1003c344 mov esi, esp */
  ESI = (ESP);
  /* 1003c346 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 1003c349 push edi */
  push32((uint32_t)(EDI));
  /* 1003c34a push ebx */
  push32((uint32_t)(EBX));
  /* 1003c34b push esi */
  push32((uint32_t)(ESI));
  /* 1003c34c call 0x10039bc0 */
  push32(0x1003c351u); f_10039bc0();
  /* 1003c351 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003c354 jmp 0x1003c361 */
  goto L_1003c361;
  /* 1003c356 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003c358 pop eax */
  EAX = (pop32());
  /* 1003c359 ret  */
  ESPCHK(0x1003c25du, _esp0);
  ESP += 4; return;
  /* 1003c35a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1003c35d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1003c35f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1003c361:;
  /* 1003c361 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1003c365 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c367 je 0x1003c392 */
  if (C.zf) goto L_1003c392;
  /* 1003c369 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1003c36c push esi */
  push32((uint32_t)(ESI));
  /* 1003c36d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1003c370 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1003c373 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003c375 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1003c378 call dword ptr [0x1003e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e0b8))), 0x1003c37eu);
  /* 1003c37e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c380 je 0x1003c392 */
  if (C.zf) goto L_1003c392;
  /* 1003c382 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1003c385 push eax */
  push32((uint32_t)(EAX));
  /* 1003c386 push esi */
  push32((uint32_t)(ESI));
  /* 1003c387 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1003c38a call dword ptr [0x1003e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e0c0))), 0x1003c390u);
  /* 1003c390 jmp 0x1003c394 */
  goto L_1003c394;
L_1003c392:;
  /* 1003c392 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1003c394:;
  /* 1003c394 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 1003c397 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1003c39a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1003c3a1 pop edi */
  EDI = (pop32());
  /* 1003c3a2 pop esi */
  ESI = (pop32());
  /* 1003c3a3 pop ebx */
  EBX = (pop32());
  /* 1003c3a4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003c3a5 ret  */
  ESPCHK(0x1003c25du, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3a6 @ 0x1003c3a6 (511 bytes, 193 insns) */
void f_1003c3a6(void) {
  FTRACE(0x1003c3a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003c3a6 push ebp */
  push32((uint32_t)(EBP));
  /* 1003c3a7 mov ebp, esp */
  EBP = (ESP);
  /* 1003c3a9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1003c3ab push 0x1003e570 */
  push32((uint32_t)(0x1003e570u));
  /* 1003c3b0 push 0x1003d010 */
  push32((uint32_t)(0x1003d010u));
  /* 1003c3b5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1003c3bb push eax */
  push32((uint32_t)(EAX));
  /* 1003c3bc mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1003c3c3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003c3c6 push ebx */
  push32((uint32_t)(EBX));
  /* 1003c3c7 push esi */
  push32((uint32_t)(ESI));
  /* 1003c3c8 push edi */
  push32((uint32_t)(EDI));
  /* 1003c3c9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1003c3cc xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1003c3ce cmp dword ptr [0x10046858], edi */
  { uint32_t _a=(r32((uint32_t)(0x10046858))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c3d4 jne 0x1003c41c */
  if (!C.zf) goto L_1003c41c;
  /* 1003c3d6 push edi */
  push32((uint32_t)(EDI));
  /* 1003c3d7 push edi */
  push32((uint32_t)(EDI));
  /* 1003c3d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003c3da pop ebx */
  EBX = (pop32());
  /* 1003c3db push ebx */
  push32((uint32_t)(EBX));
  /* 1003c3dc push 0x1003e558 */
  push32((uint32_t)(0x1003e558u));
  /* 1003c3e1 mov esi, 0x100 */
  ESI = (0x100u);
  /* 1003c3e6 push esi */
  push32((uint32_t)(ESI));
  /* 1003c3e7 push edi */
  push32((uint32_t)(EDI));
  /* 1003c3e8 call dword ptr [0x1003e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e0c8))), 0x1003c3eeu);
  /* 1003c3ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003c3f0 je 0x1003c3fa */
  if (C.zf) goto L_1003c3fa;
  /* 1003c3f2 mov dword ptr [0x10046858], ebx */
  w32((uint32_t)(0x10046858), (EBX));
  /* 1003c3f8 jmp 0x1003c41c */
  goto L_1003c41c;
L_1003c3fa:;
  /* 1003c3fa push edi */
  push32((uint32_t)(EDI));
  /* 1003c3fb push edi */
  push32((uint32_t)(EDI));
  /* 1003c3fc push ebx */
  push32((uint32_t)(EBX));
  /* 1003c3fd push 0x1003e554 */
  push32((uint32_t)(0x1003e554u));
  /* 1003c402 push esi */
  push32((uint32_t)(ESI));
  /* 1003c403 push edi */
  push32((uint32_t)(EDI));
  /* 1003c404 call dword ptr [0x1003e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e0c4))), 0x1003c40au);
  /* 1003c40a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003c40c je 0x1003c534 */
  if (C.zf) goto L_1003c534;
  /* 1003c412 mov dword ptr [0x10046858], 2 */
  w32((uint32_t)(0x10046858), (0x2u));
L_1003c41c:;
  /* 1003c41c cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c41f jle 0x1003c431 */
  if ((C.zf||C.sf!=C.of)) goto L_1003c431;
  /* 1003c421 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1003c424 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1003c427 call 0x1003c5ca */
  push32(0x1003c42cu); f_1003c5ca();
  /* 1003c42c pop ecx */
  ECX = (pop32());
  /* 1003c42d pop ecx */
  ECX = (pop32());
  /* 1003c42e mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1003c431:;
  /* 1003c431 mov eax, dword ptr [0x10046858] */
  EAX = (r32((uint32_t)(0x10046858)));
  /* 1003c436 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c439 jne 0x1003c458 */
  if (!C.zf) goto L_1003c458;
  /* 1003c43b push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1003c43e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1003c441 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1003c444 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1003c447 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1003c44a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1003c44d call dword ptr [0x1003e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e0c4))), 0x1003c453u);
  /* 1003c453 jmp 0x1003c536 */
  goto L_1003c536;
L_1003c458:;
  /* 1003c458 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c45b jne 0x1003c534 */
  if (!C.zf) goto L_1003c534;
  /* 1003c461 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c464 jne 0x1003c46e */
  if (!C.zf) goto L_1003c46e;
  /* 1003c466 mov eax, dword ptr [0x10046838] */
  EAX = (r32((uint32_t)(0x10046838)));
  /* 1003c46b mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_1003c46e:;
  /* 1003c46e push edi */
  push32((uint32_t)(EDI));
  /* 1003c46f push edi */
  push32((uint32_t)(EDI));
  /* 1003c470 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1003c473 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1003c476 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 1003c479 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1003c47b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003c47d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1003c480 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1003c481 push eax */
  push32((uint32_t)(EAX));
  /* 1003c482 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1003c485 call dword ptr [0x1003e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e0b8))), 0x1003c48bu);
  /* 1003c48b mov ebx, eax */
  EBX = (EAX);
  /* 1003c48d mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 1003c490 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c492 je 0x1003c534 */
  if (C.zf) goto L_1003c534;
  /* 1003c498 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1003c49b lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 1003c49e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003c4a1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1003c4a3 call 0x1003aeb0 */
  push32(0x1003c4a8u); f_1003aeb0();
  /* 1003c4a8 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1003c4ab mov eax, esp */
  EAX = (ESP);
  /* 1003c4ad mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1003c4b0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1003c4b4 jmp 0x1003c4c9 */
  goto L_1003c4c9;
  /* 1003c4b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003c4b8 pop eax */
  EAX = (pop32());
  /* 1003c4b9 ret  */
  ESPCHK(0x1003c3a6u, _esp0);
  ESP += 4; return;
  /* 1003c4ba mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1003c4bd xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1003c4bf mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 1003c4c2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1003c4c6 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_1003c4c9:;
  /* 1003c4c9 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c4cc je 0x1003c534 */
  if (C.zf) goto L_1003c534;
  /* 1003c4ce push ebx */
  push32((uint32_t)(EBX));
  /* 1003c4cf push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1003c4d2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1003c4d5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1003c4d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003c4da push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1003c4dd call dword ptr [0x1003e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e0b8))), 0x1003c4e3u);
  /* 1003c4e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003c4e5 je 0x1003c534 */
  if (C.zf) goto L_1003c534;
  /* 1003c4e7 push edi */
  push32((uint32_t)(EDI));
  /* 1003c4e8 push edi */
  push32((uint32_t)(EDI));
  /* 1003c4e9 push ebx */
  push32((uint32_t)(EBX));
  /* 1003c4ea push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1003c4ed push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1003c4f0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1003c4f3 call dword ptr [0x1003e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e0c8))), 0x1003c4f9u);
  /* 1003c4f9 mov esi, eax */
  ESI = (EAX);
  /* 1003c4fb mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 1003c4fe cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c500 je 0x1003c534 */
  if (C.zf) goto L_1003c534;
  /* 1003c502 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 1003c506 je 0x1003c548 */
  if (C.zf) goto L_1003c548;
  /* 1003c508 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c50b je 0x1003c5c3 */
  if (C.zf) goto L_1003c5c3;
  /* 1003c511 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c514 jg 0x1003c534 */
  if ((!C.zf&&C.sf==C.of)) goto L_1003c534;
  /* 1003c516 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1003c519 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1003c51c push ebx */
  push32((uint32_t)(EBX));
  /* 1003c51d push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1003c520 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1003c523 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1003c526 call dword ptr [0x1003e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e0c8))), 0x1003c52cu);
  /* 1003c52c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003c52e jne 0x1003c5c3 */
  if (!C.zf) goto L_1003c5c3;
L_1003c534:;
  /* 1003c534 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1003c536:;
  /* 1003c536 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1003c539 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1003c53c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1003c543 pop edi */
  EDI = (pop32());
  /* 1003c544 pop esi */
  ESI = (pop32());
  /* 1003c545 pop ebx */
  EBX = (pop32());
  /* 1003c546 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003c547 ret  */
  ESPCHK(0x1003c3a6u, _esp0);
  ESP += 4; return;
L_1003c548:;
  /* 1003c548 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1003c54f lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 1003c552 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003c555 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1003c557 call 0x1003aeb0 */
  push32(0x1003c55cu); f_1003aeb0();
  /* 1003c55c mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1003c55f mov ebx, esp */
  EBX = (ESP);
  /* 1003c561 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 1003c564 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1003c568 jmp 0x1003c57c */
  goto L_1003c57c;
  /* 1003c56a push 1 */
  push32((uint32_t)(0x1u));
  /* 1003c56c pop eax */
  EAX = (pop32());
  /* 1003c56d ret  */
  ESPCHK(0x1003c3a6u, _esp0);
  ESP += 4; return;
  /* 1003c56e mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1003c571 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1003c573 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1003c575 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1003c579 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_1003c57c:;
  /* 1003c57c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c57e je 0x1003c534 */
  if (C.zf) goto L_1003c534;
  /* 1003c580 push esi */
  push32((uint32_t)(ESI));
  /* 1003c581 push ebx */
  push32((uint32_t)(EBX));
  /* 1003c582 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1003c585 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1003c588 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1003c58b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1003c58e call dword ptr [0x1003e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e0c8))), 0x1003c594u);
  /* 1003c594 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003c596 je 0x1003c534 */
  if (C.zf) goto L_1003c534;
  /* 1003c598 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c59b push edi */
  push32((uint32_t)(EDI));
  /* 1003c59c push edi */
  push32((uint32_t)(EDI));
  /* 1003c59d jne 0x1003c5a3 */
  if (!C.zf) goto L_1003c5a3;
  /* 1003c59f push edi */
  push32((uint32_t)(EDI));
  /* 1003c5a0 push edi */
  push32((uint32_t)(EDI));
  /* 1003c5a1 jmp 0x1003c5a9 */
  goto L_1003c5a9;
L_1003c5a3:;
  /* 1003c5a3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1003c5a6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_1003c5a9:;
  /* 1003c5a9 push esi */
  push32((uint32_t)(ESI));
  /* 1003c5aa push ebx */
  push32((uint32_t)(EBX));
  /* 1003c5ab push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1003c5b0 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1003c5b3 call dword ptr [0x1003e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e060))), 0x1003c5b9u);
  /* 1003c5b9 mov esi, eax */
  ESI = (EAX);
  /* 1003c5bb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c5bd je 0x1003c534 */
  if (C.zf) goto L_1003c534;
L_1003c5c3:;
  /* 1003c5c3 mov eax, esi */
  EAX = (ESI);
  /* 1003c5c5 jmp 0x1003c536 */
  goto L_1003c536;
}

/* FUN_1000c5ca @ 0x1003c5ca (43 bytes, 20 insns) */
void f_1003c5ca(void) {
  FTRACE(0x1003c5cau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003c5ca mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1003c5ce mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1003c5d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1003c5d4 push esi */
  push32((uint32_t)(ESI));
  /* 1003c5d5 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 1003c5d8 je 0x1003c5e7 */
  if (C.zf) goto L_1003c5e7;
L_1003c5da:;
  /* 1003c5da cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c5dd je 0x1003c5e7 */
  if (C.zf) goto L_1003c5e7;
  /* 1003c5df inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1003c5e0 mov esi, ecx */
  ESI = (ECX);
  /* 1003c5e2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1003c5e3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1003c5e5 jne 0x1003c5da */
  if (!C.zf) goto L_1003c5da;
L_1003c5e7:;
  /* 1003c5e7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c5ea pop esi */
  ESI = (pop32());
  /* 1003c5eb jne 0x1003c5f2 */
  if (!C.zf) goto L_1003c5f2;
  /* 1003c5ed sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003c5f1 ret  */
  ESPCHK(0x1003c5cau, _esp0);
  ESP += 4; return;
L_1003c5f2:;
  /* 1003c5f2 mov eax, edx */
  EAX = (EDX);
  /* 1003c5f4 ret  */
  ESPCHK(0x1003c5cau, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5f5 @ 0x1003c5f5 (33 bytes, 15 insns) */
void f_1003c5f5(void) {
  FTRACE(0x1003c5f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003c5f5 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1003c5f9 push esi */
  push32((uint32_t)(ESI));
  /* 1003c5fa mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1003c5fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003c600 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 1003c603 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c605 jb 0x1003c60b */
  if (C.cf) goto L_1003c60b;
  /* 1003c607 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c609 jae 0x1003c60e */
  if (!C.cf) goto L_1003c60e;
L_1003c60b:;
  /* 1003c60b push 1 */
  push32((uint32_t)(0x1u));
  /* 1003c60d pop eax */
  EAX = (pop32());
L_1003c60e:;
  /* 1003c60e mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1003c612 pop esi */
  ESI = (pop32());
  /* 1003c613 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1003c615 ret  */
  ESPCHK(0x1003c5f5u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x1003c616 (94 bytes, 38 insns) */
void f_1003c616(void) {
  FTRACE(0x1003c616u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003c616 push esi */
  push32((uint32_t)(ESI));
  /* 1003c617 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1003c61b push edi */
  push32((uint32_t)(EDI));
  /* 1003c61c mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1003c620 push esi */
  push32((uint32_t)(ESI));
  /* 1003c621 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 1003c623 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1003c625 call 0x1003c5f5 */
  push32(0x1003c62au); f_1003c5f5();
  /* 1003c62a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003c62d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003c62f je 0x1003c648 */
  if (C.zf) goto L_1003c648;
  /* 1003c631 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1003c634 push eax */
  push32((uint32_t)(EAX));
  /* 1003c635 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003c637 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1003c639 call 0x1003c5f5 */
  push32(0x1003c63eu); f_1003c5f5();
  /* 1003c63e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003c641 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003c643 je 0x1003c648 */
  if (C.zf) goto L_1003c648;
  /* 1003c645 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1003c648:;
  /* 1003c648 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1003c64b push eax */
  push32((uint32_t)(EAX));
  /* 1003c64c push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 1003c64f push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1003c651 call 0x1003c5f5 */
  push32(0x1003c656u); f_1003c5f5();
  /* 1003c656 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003c659 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003c65b je 0x1003c660 */
  if (C.zf) goto L_1003c660;
  /* 1003c65d inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1003c660:;
  /* 1003c660 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 1003c663 push eax */
  push32((uint32_t)(EAX));
  /* 1003c664 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 1003c667 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1003c669 call 0x1003c5f5 */
  push32(0x1003c66eu); f_1003c5f5();
  /* 1003c66e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003c671 pop edi */
  EDI = (pop32());
  /* 1003c672 pop esi */
  ESI = (pop32());
  /* 1003c673 ret  */
  ESPCHK(0x1003c616u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c674 @ 0x1003c674 (46 bytes, 21 insns) */
void f_1003c674(void) {
  FTRACE(0x1003c674u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003c674 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1003c678 push esi */
  push32((uint32_t)(ESI));
  /* 1003c679 push edi */
  push32((uint32_t)(EDI));
  /* 1003c67a mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 1003c67c mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 1003c67f mov ecx, esi */
  ECX = (ESI);
  /* 1003c681 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003c683 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1003c685 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 1003c688 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1003c68b or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1003c68d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1003c690 mov edx, edi */
  EDX = (EDI);
  /* 1003c692 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 1003c695 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 1003c698 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1003c69a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1003c69c pop edi */
  EDI = (pop32());
  /* 1003c69d mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1003c6a0 pop esi */
  ESI = (pop32());
  /* 1003c6a1 ret  */
  ESPCHK(0x1003c674u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6a2 @ 0x1003c6a2 (45 bytes, 21 insns) */
void f_1003c6a2(void) {
  FTRACE(0x1003c6a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003c6a2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1003c6a6 push esi */
  push32((uint32_t)(ESI));
  /* 1003c6a7 push edi */
  push32((uint32_t)(EDI));
  /* 1003c6a8 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 1003c6ab mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1003c6ae mov esi, edx */
  ESI = (EDX);
  /* 1003c6b0 mov edi, ecx */
  EDI = (ECX);
  /* 1003c6b2 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 1003c6b5 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1003c6b7 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 1003c6b9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1003c6bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1003c6be shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 1003c6c1 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1003c6c3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1003c6c5 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1003c6c7 pop edi */
  EDI = (pop32());
  /* 1003c6c8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1003c6cb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1003c6cd pop esi */
  ESI = (pop32());
  /* 1003c6ce ret  */
  ESPCHK(0x1003c6a2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6cf @ 0x1003c6cf (199 bytes, 76 insns) */
void f_1003c6cf(void) {
  FTRACE(0x1003c6cfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003c6cf push ebp */
  push32((uint32_t)(EBP));
  /* 1003c6d0 mov ebp, esp */
  EBP = (ESP);
  /* 1003c6d2 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003c6d5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1003c6d8 push ebx */
  push32((uint32_t)(EBX));
  /* 1003c6d9 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1003c6dc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1003c6de cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c6e0 push esi */
  push32((uint32_t)(ESI));
  /* 1003c6e1 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 1003c6e8 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 1003c6ea mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 1003c6ed mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 1003c6f0 jbe 0x1003c743 */
  if ((C.cf||C.zf)) goto L_1003c743;
  /* 1003c6f2 push edi */
  push32((uint32_t)(EDI));
  /* 1003c6f3 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1003c6f6:;
  /* 1003c6f6 mov esi, ebx */
  ESI = (EBX);
  /* 1003c6f8 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 1003c6fb movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1003c6fc movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1003c6fd push ebx */
  push32((uint32_t)(EBX));
  /* 1003c6fe movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1003c6ff call 0x1003c674 */
  push32(0x1003c704u); f_1003c674();
  /* 1003c704 push ebx */
  push32((uint32_t)(EBX));
  /* 1003c705 call 0x1003c674 */
  push32(0x1003c70au); f_1003c674();
  /* 1003c70a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1003c70d push eax */
  push32((uint32_t)(EAX));
  /* 1003c70e push ebx */
  push32((uint32_t)(EBX));
  /* 1003c70f call 0x1003c616 */
  push32(0x1003c714u); f_1003c616();
  /* 1003c714 push ebx */
  push32((uint32_t)(EBX));
  /* 1003c715 call 0x1003c674 */
  push32(0x1003c71au); f_1003c674();
  /* 1003c71a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003c71d and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 1003c721 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1003c725 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1003c728 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1003c72b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1003c72e push eax */
  push32((uint32_t)(EAX));
  /* 1003c72f push ebx */
  push32((uint32_t)(EBX));
  /* 1003c730 call 0x1003c616 */
  push32(0x1003c735u); f_1003c616();
  /* 1003c735 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003c738 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1003c73b dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 1003c73e jne 0x1003c6f6 */
  if (!C.zf) goto L_1003c6f6;
  /* 1003c740 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1003c742 pop edi */
  EDI = (pop32());
L_1003c743:;
  /* 1003c743 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c746 jne 0x1003c770 */
  if (!C.zf) goto L_1003c770;
  /* 1003c748 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1003c74b mov eax, ecx */
  EAX = (ECX);
  /* 1003c74d shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1003c750 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 1003c753 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1003c755 mov esi, eax */
  ESI = (EAX);
  /* 1003c757 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1003c75a shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 1003c75d or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1003c75f shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1003c762 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1003c769 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 1003c76c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 1003c76e jmp 0x1003c743 */
  goto L_1003c743;
L_1003c770:;
  /* 1003c770 mov esi, 0x8000 */
  ESI = (0x8000u);
L_1003c775:;
  /* 1003c775 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 1003c778 jne 0x1003c78a */
  if (!C.zf) goto L_1003c78a;
  /* 1003c77a push ebx */
  push32((uint32_t)(EBX));
  /* 1003c77b call 0x1003c674 */
  push32(0x1003c780u); f_1003c674();
  /* 1003c780 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1003c787 pop ecx */
  ECX = (pop32());
  /* 1003c788 jmp 0x1003c775 */
  goto L_1003c775;
L_1003c78a:;
  /* 1003c78a mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1003c78e pop esi */
  ESI = (pop32());
  /* 1003c78f mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 1003c793 pop ebx */
  EBX = (pop32());
  /* 1003c794 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003c795 ret  */
  ESPCHK(0x1003c6cfu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c796 @ 0x1003c796 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_1003c796(void) {
  FTRACE(0x1003c796u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003c796 push ebp */
  push32((uint32_t)(EBP));
  /* 1003c797 mov ebp, esp */
  EBP = (ESP);
  /* 1003c799 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003c79c push ebx */
  push32((uint32_t)(EBX));
  /* 1003c79d push esi */
  push32((uint32_t)(ESI));
  /* 1003c79e push edi */
  push32((uint32_t)(EDI));
  /* 1003c79f mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1003c7a2 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1003c7a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003c7a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1003c7aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003c7ac pop edx */
  EDX = (pop32());
  /* 1003c7ad mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1003c7b0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1003c7b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1003c7b6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1003c7b9 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1003c7bc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1003c7bf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1003c7c2 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1003c7c5 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1003c7c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1003c7cb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1003c7ce mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_1003c7d1:;
  /* 1003c7d1 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 1003c7d3 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c7d6 je 0x1003c7e7 */
  if (C.zf) goto L_1003c7e7;
  /* 1003c7d8 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c7db je 0x1003c7e7 */
  if (C.zf) goto L_1003c7e7;
  /* 1003c7dd cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c7e0 je 0x1003c7e7 */
  if (C.zf) goto L_1003c7e7;
  /* 1003c7e2 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c7e5 jne 0x1003c7ea */
  if (!C.zf) goto L_1003c7ea;
L_1003c7e7:;
  /* 1003c7e7 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1003c7e8 jmp 0x1003c7d1 */
  goto L_1003c7d1;
L_1003c7ea:;
  /* 1003c7ea push 4 */
  push32((uint32_t)(0x4u));
  /* 1003c7ec pop esi */
  ESI = (pop32());
L_1003c7ed:;
  /* 1003c7ed mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1003c7ef inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1003c7f0 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c7f3 ja 0x1003ca70 */
  if ((!C.cf&&!C.zf)) goto L_1003ca70;
  /* 1003c7f9 jmp dword ptr [eax*4 + 0x1003cc37] */
  switch (EAX) {
    case 0: goto L_1003c800;
    case 1: goto L_1003c84f;
    case 2: goto L_1003c8a6;
    case 3: goto L_1003c8d0;
    case 4: goto L_1003c92b;
    case 5: goto L_1003c9a2;
    case 6: goto L_1003c9d8;
    case 7: goto L_1003ca22;
    case 8: goto L_1003ca01;
    case 9: goto L_1003ca86;
    case 10: goto L_1003ca70;
    case 11: goto L_1003ca3c;
    default: x86_unimpl("switch@0x1003c7f9 out of table"); return;
  }
L_1003c800:;
  /* 1003c800 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c803 jl 0x1003c811 */
  if ((C.sf!=C.of)) goto L_1003c811;
  /* 1003c805 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c808 jg 0x1003c811 */
  if ((!C.zf&&C.sf==C.of)) goto L_1003c811;
L_1003c80a:;
  /* 1003c80a push 3 */
  push32((uint32_t)(0x3u));
  /* 1003c80c jmp 0x1003ca2e */
  goto L_1003ca2e;
L_1003c811:;
  /* 1003c811 cmp bl, byte ptr [0x10040bd4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10040bd4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c817 jne 0x1003c820 */
  if (!C.zf) goto L_1003c820;
L_1003c819:;
  /* 1003c819 push 5 */
  push32((uint32_t)(0x5u));
  /* 1003c81b jmp 0x1003ca66 */
  goto L_1003ca66;
L_1003c820:;
  /* 1003c820 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1003c823 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003c826 je 0x1003c846 */
  if (C.zf) goto L_1003c846;
  /* 1003c828 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1003c829 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1003c82a je 0x1003c83a */
  if (C.zf) goto L_1003c83a;
  /* 1003c82c sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003c82f jne 0x1003cb09 */
  if (!C.zf) goto L_1003cb09;
  /* 1003c835 jmp 0x1003c8c9 */
  goto L_1003c8c9;
L_1003c83a:;
  /* 1003c83a push 2 */
  push32((uint32_t)(0x2u));
  /* 1003c83c mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 1003c843 pop eax */
  EAX = (pop32());
  /* 1003c844 jmp 0x1003c7ed */
  goto L_1003c7ed;
L_1003c846:;
  /* 1003c846 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 1003c84a push 2 */
  push32((uint32_t)(0x2u));
  /* 1003c84c pop eax */
  EAX = (pop32());
  /* 1003c84d jmp 0x1003c7ed */
  goto L_1003c7ed;
L_1003c84f:;
  /* 1003c84f cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c852 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1003c855 jl 0x1003c85c */
  if ((C.sf!=C.of)) goto L_1003c85c;
  /* 1003c857 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c85a jle 0x1003c80a */
  if ((C.zf||C.sf!=C.of)) goto L_1003c80a;
L_1003c85c:;
  /* 1003c85c cmp bl, byte ptr [0x10040bd4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10040bd4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c862 je 0x1003c924 */
  if (C.zf) goto L_1003c924;
  /* 1003c868 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c86b je 0x1003c89e */
  if (C.zf) goto L_1003c89e;
  /* 1003c86d cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c870 je 0x1003c89e */
  if (C.zf) goto L_1003c89e;
  /* 1003c872 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c875 je 0x1003c8c9 */
  if (C.zf) goto L_1003c8c9;
L_1003c877:;
  /* 1003c877 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c87a jle 0x1003cb09 */
  if ((C.zf||C.sf!=C.of)) goto L_1003cb09;
  /* 1003c880 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c883 jle 0x1003c897 */
  if ((C.zf||C.sf!=C.of)) goto L_1003c897;
  /* 1003c885 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c888 jle 0x1003cb09 */
  if ((C.zf||C.sf!=C.of)) goto L_1003cb09;
  /* 1003c88e cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c891 jg 0x1003cb09 */
  if ((!C.zf&&C.sf==C.of)) goto L_1003cb09;
L_1003c897:;
  /* 1003c897 push 6 */
  push32((uint32_t)(0x6u));
  /* 1003c899 jmp 0x1003ca66 */
  goto L_1003ca66;
L_1003c89e:;
  /* 1003c89e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1003c89f push 0xb */
  push32((uint32_t)(0xbu));
  /* 1003c8a1 jmp 0x1003ca66 */
  goto L_1003ca66;
L_1003c8a6:;
  /* 1003c8a6 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c8a9 jl 0x1003c8b4 */
  if ((C.sf!=C.of)) goto L_1003c8b4;
  /* 1003c8ab cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c8ae jle 0x1003c80a */
  if ((C.zf||C.sf!=C.of)) goto L_1003c80a;
L_1003c8b4:;
  /* 1003c8b4 cmp bl, byte ptr [0x10040bd4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10040bd4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c8ba je 0x1003c819 */
  if (C.zf) goto L_1003c819;
  /* 1003c8c0 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c8c3 jne 0x1003ca7e */
  if (!C.zf) goto L_1003ca7e;
L_1003c8c9:;
  /* 1003c8c9 mov eax, edx */
  EAX = (EDX);
  /* 1003c8cb jmp 0x1003c7ed */
  goto L_1003c7ed;
L_1003c8d0:;
  /* 1003c8d0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1003c8d3:;
  /* 1003c8d3 cmp dword ptr [0x10040bd0], edx */
  { uint32_t _a=(r32((uint32_t)(0x10040bd0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c8d9 jle 0x1003c8ec */
  if ((C.zf||C.sf!=C.of)) goto L_1003c8ec;
  /* 1003c8db movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1003c8de push esi */
  push32((uint32_t)(ESI));
  /* 1003c8df push eax */
  push32((uint32_t)(EAX));
  /* 1003c8e0 call 0x100393ab */
  push32(0x1003c8e5u); f_100393ab();
  /* 1003c8e5 pop ecx */
  ECX = (pop32());
  /* 1003c8e6 pop ecx */
  ECX = (pop32());
  /* 1003c8e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003c8e9 pop edx */
  EDX = (pop32());
  /* 1003c8ea jmp 0x1003c8fa */
  goto L_1003c8fa;
L_1003c8ec:;
  /* 1003c8ec mov ecx, dword ptr [0x100409c0] */
  ECX = (r32((uint32_t)(0x100409c0)));
  /* 1003c8f2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1003c8f5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1003c8f8 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1003c8fa:;
  /* 1003c8fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003c8fc je 0x1003c91c */
  if (C.zf) goto L_1003c91c;
  /* 1003c8fe cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c902 jae 0x1003c914 */
  if (!C.cf) goto L_1003c914;
  /* 1003c904 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1003c907 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1003c90a sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1003c90d inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 1003c910 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 1003c912 jmp 0x1003c917 */
  goto L_1003c917;
L_1003c914:;
  /* 1003c914 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_1003c917:;
  /* 1003c917 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1003c919 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1003c91a jmp 0x1003c8d3 */
  goto L_1003c8d3;
L_1003c91c:;
  /* 1003c91c cmp bl, byte ptr [0x10040bd4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10040bd4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c922 jne 0x1003c98b */
  if (!C.zf) goto L_1003c98b;
L_1003c924:;
  /* 1003c924 mov eax, esi */
  EAX = (ESI);
  /* 1003c926 jmp 0x1003c7ed */
  goto L_1003c7ed;
L_1003c92b:;
  /* 1003c92b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c92f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1003c932 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1003c935 jne 0x1003c944 */
  if (!C.zf) goto L_1003c944;
L_1003c937:;
  /* 1003c937 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c93a jne 0x1003c944 */
  if (!C.zf) goto L_1003c944;
  /* 1003c93c dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1003c93f mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1003c941 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1003c942 jmp 0x1003c937 */
  goto L_1003c937;
L_1003c944:;
  /* 1003c944 cmp dword ptr [0x10040bd0], edx */
  { uint32_t _a=(r32((uint32_t)(0x10040bd0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c94a jle 0x1003c95d */
  if ((C.zf||C.sf!=C.of)) goto L_1003c95d;
  /* 1003c94c movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1003c94f push esi */
  push32((uint32_t)(ESI));
  /* 1003c950 push eax */
  push32((uint32_t)(EAX));
  /* 1003c951 call 0x100393ab */
  push32(0x1003c956u); f_100393ab();
  /* 1003c956 pop ecx */
  ECX = (pop32());
  /* 1003c957 pop ecx */
  ECX = (pop32());
  /* 1003c958 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003c95a pop edx */
  EDX = (pop32());
  /* 1003c95b jmp 0x1003c96b */
  goto L_1003c96b;
L_1003c95d:;
  /* 1003c95d mov ecx, dword ptr [0x100409c0] */
  ECX = (r32((uint32_t)(0x100409c0)));
  /* 1003c963 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1003c966 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1003c969 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1003c96b:;
  /* 1003c96b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003c96d je 0x1003c98b */
  if (C.zf) goto L_1003c98b;
  /* 1003c96f cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c973 jae 0x1003c986 */
  if (!C.cf) goto L_1003c986;
  /* 1003c975 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1003c978 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1003c97b sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1003c97e inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 1003c981 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1003c984 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_1003c986:;
  /* 1003c986 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1003c988 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1003c989 jmp 0x1003c944 */
  goto L_1003c944;
L_1003c98b:;
  /* 1003c98b cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c98e je 0x1003c89e */
  if (C.zf) goto L_1003c89e;
  /* 1003c994 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c997 je 0x1003c89e */
  if (C.zf) goto L_1003c89e;
  /* 1003c99d jmp 0x1003c877 */
  goto L_1003c877;
L_1003c9a2:;
  /* 1003c9a2 cmp dword ptr [0x10040bd0], edx */
  { uint32_t _a=(r32((uint32_t)(0x10040bd0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003c9a8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1003c9ab jle 0x1003c9be */
  if ((C.zf||C.sf!=C.of)) goto L_1003c9be;
  /* 1003c9ad movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1003c9b0 push esi */
  push32((uint32_t)(ESI));
  /* 1003c9b1 push eax */
  push32((uint32_t)(EAX));
  /* 1003c9b2 call 0x100393ab */
  push32(0x1003c9b7u); f_100393ab();
  /* 1003c9b7 pop ecx */
  ECX = (pop32());
  /* 1003c9b8 pop ecx */
  ECX = (pop32());
  /* 1003c9b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003c9bb pop edx */
  EDX = (pop32());
  /* 1003c9bc jmp 0x1003c9cc */
  goto L_1003c9cc;
L_1003c9be:;
  /* 1003c9be mov ecx, dword ptr [0x100409c0] */
  ECX = (r32((uint32_t)(0x100409c0)));
  /* 1003c9c4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1003c9c7 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1003c9ca and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1003c9cc:;
  /* 1003c9cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003c9ce je 0x1003ca7e */
  if (C.zf) goto L_1003ca7e;
  /* 1003c9d4 mov eax, esi */
  EAX = (ESI);
  /* 1003c9d6 jmp 0x1003ca2f */
  goto L_1003ca2f;
L_1003c9d8:;
  /* 1003c9d8 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 1003c9db cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c9de mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1003c9e1 jl 0x1003c9e8 */
  if ((C.sf!=C.of)) goto L_1003c9e8;
  /* 1003c9e3 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003c9e6 jle 0x1003ca2c */
  if ((C.zf||C.sf!=C.of)) goto L_1003ca2c;
L_1003c9e8:;
  /* 1003c9e8 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1003c9eb sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003c9ee je 0x1003ca64 */
  if (C.zf) goto L_1003ca64;
  /* 1003c9f0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1003c9f1 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1003c9f2 je 0x1003ca58 */
  if (C.zf) goto L_1003ca58;
  /* 1003c9f4 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003c9f7 jne 0x1003cb0c */
  if (!C.zf) goto L_1003cb0c;
L_1003c9fd:;
  /* 1003c9fd push 8 */
  push32((uint32_t)(0x8u));
  /* 1003c9ff jmp 0x1003ca66 */
  goto L_1003ca66;
L_1003ca01:;
  /* 1003ca01 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1003ca04:;
  /* 1003ca04 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003ca07 jne 0x1003ca0e */
  if (!C.zf) goto L_1003ca0e;
  /* 1003ca09 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1003ca0b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1003ca0c jmp 0x1003ca04 */
  goto L_1003ca04;
L_1003ca0e:;
  /* 1003ca0e cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003ca11 jl 0x1003cb09 */
  if ((C.sf!=C.of)) goto L_1003cb09;
  /* 1003ca17 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003ca1a jg 0x1003cb09 */
  if ((!C.zf&&C.sf==C.of)) goto L_1003cb09;
  /* 1003ca20 jmp 0x1003ca2c */
  goto L_1003ca2c;
L_1003ca22:;
  /* 1003ca22 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003ca25 jl 0x1003ca35 */
  if ((C.sf!=C.of)) goto L_1003ca35;
  /* 1003ca27 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003ca2a jg 0x1003ca35 */
  if ((!C.zf&&C.sf==C.of)) goto L_1003ca35;
L_1003ca2c:;
  /* 1003ca2c push 9 */
  push32((uint32_t)(0x9u));
L_1003ca2e:;
  /* 1003ca2e pop eax */
  EAX = (pop32());
L_1003ca2f:;
  /* 1003ca2f dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1003ca30 jmp 0x1003c7ed */
  goto L_1003c7ed;
L_1003ca35:;
  /* 1003ca35 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003ca38 jne 0x1003ca7e */
  if (!C.zf) goto L_1003ca7e;
  /* 1003ca3a jmp 0x1003c9fd */
  goto L_1003c9fd;
L_1003ca3c:;
  /* 1003ca3c cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003ca40 je 0x1003ca6c */
  if (C.zf) goto L_1003ca6c;
  /* 1003ca42 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1003ca45 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 1003ca48 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003ca4b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1003ca4e je 0x1003ca64 */
  if (C.zf) goto L_1003ca64;
  /* 1003ca50 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1003ca51 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1003ca52 jne 0x1003cb0c */
  if (!C.zf) goto L_1003cb0c;
L_1003ca58:;
  /* 1003ca58 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 1003ca5c push 7 */
  push32((uint32_t)(0x7u));
  /* 1003ca5e pop eax */
  EAX = (pop32());
  /* 1003ca5f jmp 0x1003c7ed */
  goto L_1003c7ed;
L_1003ca64:;
  /* 1003ca64 push 7 */
  push32((uint32_t)(0x7u));
L_1003ca66:;
  /* 1003ca66 pop eax */
  EAX = (pop32());
  /* 1003ca67 jmp 0x1003c7ed */
  goto L_1003c7ed;
L_1003ca6c:;
  /* 1003ca6c push 0xa */
  push32((uint32_t)(0xau));
  /* 1003ca6e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1003ca6f pop eax */
  EAX = (pop32());
L_1003ca70:;
  /* 1003ca70 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003ca73 je 0x1003cb0e */
  if (C.zf) goto L_1003cb0e;
  /* 1003ca79 jmp 0x1003c7ed */
  goto L_1003c7ed;
L_1003ca7e:;
  /* 1003ca7e mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1003ca81 jmp 0x1003cb0e */
  goto L_1003cb0e;
L_1003ca86:;
  /* 1003ca86 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 1003ca8d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1003ca8f:;
  /* 1003ca8f cmp dword ptr [0x10040bd0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10040bd0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003ca96 jle 0x1003caa7 */
  if ((C.zf||C.sf!=C.of)) goto L_1003caa7;
  /* 1003ca98 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1003ca9b push 4 */
  push32((uint32_t)(0x4u));
  /* 1003ca9d push eax */
  push32((uint32_t)(EAX));
  /* 1003ca9e call 0x100393ab */
  push32(0x1003caa3u); f_100393ab();
  /* 1003caa3 pop ecx */
  ECX = (pop32());
  /* 1003caa4 pop ecx */
  ECX = (pop32());
  /* 1003caa5 jmp 0x1003cab6 */
  goto L_1003cab6;
L_1003caa7:;
  /* 1003caa7 mov ecx, dword ptr [0x100409c0] */
  ECX = (r32((uint32_t)(0x100409c0)));
  /* 1003caad movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1003cab0 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1003cab3 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1003cab6:;
  /* 1003cab6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003cab8 je 0x1003cad6 */
  if (C.zf) goto L_1003cad6;
  /* 1003caba movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1003cabd lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 1003cac0 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 1003cac4 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003caca jg 0x1003cad1 */
  if ((!C.zf&&C.sf==C.of)) goto L_1003cad1;
  /* 1003cacc mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1003cace inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1003cacf jmp 0x1003ca8f */
  goto L_1003ca8f;
L_1003cad1:;
  /* 1003cad1 mov esi, 0x1451 */
  ESI = (0x1451u);
L_1003cad6:;
  /* 1003cad6 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_1003cad9:;
  /* 1003cad9 cmp dword ptr [0x10040bd0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10040bd0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003cae0 jle 0x1003caf1 */
  if ((C.zf||C.sf!=C.of)) goto L_1003caf1;
  /* 1003cae2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1003cae5 push 4 */
  push32((uint32_t)(0x4u));
  /* 1003cae7 push eax */
  push32((uint32_t)(EAX));
  /* 1003cae8 call 0x100393ab */
  push32(0x1003caedu); f_100393ab();
  /* 1003caed pop ecx */
  ECX = (pop32());
  /* 1003caee pop ecx */
  ECX = (pop32());
  /* 1003caef jmp 0x1003cb00 */
  goto L_1003cb00;
L_1003caf1:;
  /* 1003caf1 mov ecx, dword ptr [0x100409c0] */
  ECX = (r32((uint32_t)(0x100409c0)));
  /* 1003caf7 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1003cafa mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1003cafd and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1003cb00:;
  /* 1003cb00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003cb02 je 0x1003cb09 */
  if (C.zf) goto L_1003cb09;
  /* 1003cb04 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1003cb06 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1003cb07 jmp 0x1003cad9 */
  goto L_1003cad9;
L_1003cb09:;
  /* 1003cb09 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1003cb0a jmp 0x1003cb0e */
  goto L_1003cb0e;
L_1003cb0c:;
  /* 1003cb0c mov edi, ecx */
  EDI = (ECX);
L_1003cb0e:;
  /* 1003cb0e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1003cb11 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003cb15 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 1003cb17 je 0x1003cbf6 */
  if (C.zf) goto L_1003cbf6;
  /* 1003cb1d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1003cb1f pop eax */
  EAX = (pop32());
  /* 1003cb20 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003cb23 jbe 0x1003cb3a */
  if ((C.cf||C.zf)) goto L_1003cb3a;
  /* 1003cb25 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003cb29 jl 0x1003cb2e */
  if ((C.sf!=C.of)) goto L_1003cb2e;
  /* 1003cb2b inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_1003cb2e:;
  /* 1003cb2e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1003cb31 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1003cb34 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1003cb35 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 1003cb38 jmp 0x1003cb3d */
  goto L_1003cb3d;
L_1003cb3a:;
  /* 1003cb3a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1003cb3d:;
  /* 1003cb3d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003cb41 jbe 0x1003cbec */
  if ((C.cf||C.zf)) goto L_1003cbec;
L_1003cb47:;
  /* 1003cb47 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1003cb48 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003cb4b jne 0x1003cb55 */
  if (!C.zf) goto L_1003cb55;
  /* 1003cb4d dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1003cb50 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 1003cb53 jmp 0x1003cb47 */
  goto L_1003cb47;
L_1003cb55:;
  /* 1003cb55 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1003cb58 push eax */
  push32((uint32_t)(EAX));
  /* 1003cb59 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1003cb5c push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 1003cb5f push eax */
  push32((uint32_t)(EAX));
  /* 1003cb60 call 0x1003c6cf */
  push32(0x1003cb65u); f_1003c6cf();
  /* 1003cb65 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1003cb68 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1003cb6a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003cb6d cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003cb70 jge 0x1003cb74 */
  if ((C.sf==C.of)) goto L_1003cb74;
  /* 1003cb72 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_1003cb74:;
  /* 1003cb74 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003cb77 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003cb7a jne 0x1003cb7f */
  if (!C.zf) goto L_1003cb7f;
  /* 1003cb7c add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1003cb7f:;
  /* 1003cb7f cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003cb82 jne 0x1003cb87 */
  if (!C.zf) goto L_1003cb87;
  /* 1003cb84 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1003cb87:;
  /* 1003cb87 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003cb8c jle 0x1003cbbe */
  if ((C.zf||C.sf!=C.of)) goto L_1003cbbe;
  /* 1003cb8e mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_1003cb95:;
  /* 1003cb95 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1003cb98 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 1003cb9b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1003cb9e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_1003cba1:;
  /* 1003cba1 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003cba5 je 0x1003cc07 */
  if (C.zf) goto L_1003cc07;
  /* 1003cba7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1003cba9 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 1003cbae mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1003cbb3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1003cbb5 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 1003cbbc jmp 0x1003cc1c */
  goto L_1003cc1c;
L_1003cbbe:;
  /* 1003cbbe cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003cbc3 jge 0x1003cbce */
  if ((C.sf==C.of)) goto L_1003cbce;
  /* 1003cbc5 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 1003cbcc jmp 0x1003cb95 */
  goto L_1003cb95;
L_1003cbce:;
  /* 1003cbce push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1003cbd1 push eax */
  push32((uint32_t)(EAX));
  /* 1003cbd2 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1003cbd5 push eax */
  push32((uint32_t)(EAX));
  /* 1003cbd6 call 0x1003d66a */
  push32(0x1003cbdbu); f_1003d66a();
  /* 1003cbdb mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1003cbde mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 1003cbe1 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 1003cbe4 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 1003cbe7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003cbea jmp 0x1003cba1 */
  goto L_1003cba1;
L_1003cbec:;
  /* 1003cbec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1003cbee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003cbf0 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1003cbf2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1003cbf4 jmp 0x1003cba1 */
  goto L_1003cba1;
L_1003cbf6:;
  /* 1003cbf6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1003cbf8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003cbfa xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1003cbfc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1003cbfe mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 1003cc05 jmp 0x1003cc1c */
  goto L_1003cc1c;
L_1003cc07:;
  /* 1003cc07 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003cc0b je 0x1003cc1c */
  if (C.zf) goto L_1003cc1c;
  /* 1003cc0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1003cc0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003cc11 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1003cc13 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1003cc15 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_1003cc1c:;
  /* 1003cc1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003cc1f or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 1003cc22 pop edi */
  EDI = (pop32());
  /* 1003cc23 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 1003cc26 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 1003cc29 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 1003cc2d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1003cc30 pop esi */
  ESI = (pop32());
  /* 1003cc31 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1003cc34 pop ebx */
  EBX = (pop32());
  /* 1003cc35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003cc36 ret  */
  ESPCHK(0x1003c796u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc67 @ 0x1003cc67 (659 bytes, 232 insns) */
void f_1003cc67(void) {
  FTRACE(0x1003cc67u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003cc67 push ebp */
  push32((uint32_t)(EBP));
  /* 1003cc68 mov ebp, esp */
  EBP = (ESP);
  /* 1003cc6a sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003cc6d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1003cc70 push ebx */
  push32((uint32_t)(EBX));
  /* 1003cc71 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1003cc74 push esi */
  push32((uint32_t)(ESI));
  /* 1003cc75 mov ecx, eax */
  ECX = (EAX);
  /* 1003cc77 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 1003cc7c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1003cc82 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1003cc84 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1003cc87 push edi */
  push32((uint32_t)(EDI));
  /* 1003cc88 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 1003cc8c mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 1003cc90 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 1003cc94 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 1003cc98 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 1003cc9c mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 1003cca0 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 1003cca4 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 1003cca8 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 1003ccac mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 1003ccb0 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 1003ccb4 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 1003ccb8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1003ccbf mov edx, eax */
  EDX = (EAX);
  /* 1003ccc1 je 0x1003ccc9 */
  if (C.zf) goto L_1003ccc9;
  /* 1003ccc3 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 1003ccc7 jmp 0x1003cccd */
  goto L_1003cccd;
L_1003ccc9:;
  /* 1003ccc9 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_1003cccd:;
  /* 1003cccd mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1003ccd0 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 1003ccd3 jne 0x1003ccf3 */
  if (!C.zf) goto L_1003ccf3;
  /* 1003ccd5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1003ccd7 jne 0x1003ccf3 */
  if (!C.zf) goto L_1003ccf3;
  /* 1003ccd9 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003ccdc jne 0x1003ccf3 */
  if (!C.zf) goto L_1003ccf3;
L_1003ccde:;
  /* 1003ccde and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1003cce2 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1003cce6 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 1003ccea mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 1003ccee jmp 0x1003cef1 */
  goto L_1003cef1;
L_1003ccf3:;
  /* 1003ccf3 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1003ccf6 jne 0x1003cd72 */
  if (!C.zf) goto L_1003cd72;
  /* 1003ccf8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1003ccfd mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 1003cd02 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003cd04 jne 0x1003cd0c */
  if (!C.zf) goto L_1003cd0c;
  /* 1003cd06 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003cd0a je 0x1003cd1b */
  if (C.zf) goto L_1003cd1b;
L_1003cd0c:;
  /* 1003cd0c test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 1003cd12 jne 0x1003cd1b */
  if (!C.zf) goto L_1003cd1b;
  /* 1003cd14 push 0x1003e5a0 */
  push32((uint32_t)(0x1003e5a0u));
  /* 1003cd19 jmp 0x1003cd61 */
  goto L_1003cd61;
L_1003cd1b:;
  /* 1003cd1b test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1003cd1e je 0x1003cd35 */
  if (C.zf) goto L_1003cd35;
  /* 1003cd20 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003cd26 jne 0x1003cd35 */
  if (!C.zf) goto L_1003cd35;
  /* 1003cd28 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003cd2c jne 0x1003cd5c */
  if (!C.zf) goto L_1003cd5c;
  /* 1003cd2e push 0x1003e598 */
  push32((uint32_t)(0x1003e598u));
  /* 1003cd33 jmp 0x1003cd44 */
  goto L_1003cd44;
L_1003cd35:;
  /* 1003cd35 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003cd37 jne 0x1003cd5c */
  if (!C.zf) goto L_1003cd5c;
  /* 1003cd39 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003cd3d jne 0x1003cd5c */
  if (!C.zf) goto L_1003cd5c;
  /* 1003cd3f push 0x1003e590 */
  push32((uint32_t)(0x1003e590u));
L_1003cd44:;
  /* 1003cd44 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1003cd47 push eax */
  push32((uint32_t)(EAX));
  /* 1003cd48 call 0x10039ad0 */
  push32(0x1003cd4du); f_10039ad0();
  /* 1003cd4d pop ecx */
  ECX = (pop32());
  /* 1003cd4e mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 1003cd52 pop ecx */
  ECX = (pop32());
L_1003cd53:;
  /* 1003cd53 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1003cd57 jmp 0x1003ceca */
  goto L_1003ceca;
L_1003cd5c:;
  /* 1003cd5c push 0x1003e588 */
  push32((uint32_t)(0x1003e588u));
L_1003cd61:;
  /* 1003cd61 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1003cd64 push eax */
  push32((uint32_t)(EAX));
  /* 1003cd65 call 0x10039ad0 */
  push32(0x1003cd6au); f_10039ad0();
  /* 1003cd6a pop ecx */
  ECX = (pop32());
  /* 1003cd6b mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 1003cd6f pop ecx */
  ECX = (pop32());
  /* 1003cd70 jmp 0x1003cd53 */
  goto L_1003cd53;
L_1003cd72:;
  /* 1003cd72 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 1003cd75 mov ecx, edi */
  ECX = (EDI);
  /* 1003cd77 mov esi, eax */
  ESI = (EAX);
  /* 1003cd79 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 1003cd7c imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1003cd82 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 1003cd85 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 1003cd8a push 1 */
  push32((uint32_t)(0x1u));
  /* 1003cd8c lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 1003cd8f mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 1003cd93 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1003cd96 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 1003cd99 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 1003cda0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003cda3 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1003cda6 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 1003cda9 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 1003cdac neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1003cdae push eax */
  push32((uint32_t)(EAX));
  /* 1003cdaf lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1003cdb2 push eax */
  push32((uint32_t)(EAX));
  /* 1003cdb3 call 0x1003d66a */
  push32(0x1003cdb8u); f_1003d66a();
  /* 1003cdb8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003cdbb cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1003cdc1 jb 0x1003cdd3 */
  if (C.cf) goto L_1003cdd3;
  /* 1003cdc3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1003cdc6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1003cdc7 push eax */
  push32((uint32_t)(EAX));
  /* 1003cdc8 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1003cdcb push eax */
  push32((uint32_t)(EAX));
  /* 1003cdcc call 0x1003d44a */
  push32(0x1003cdd1u); f_1003d44a();
  /* 1003cdd1 pop ecx */
  ECX = (pop32());
  /* 1003cdd2 pop ecx */
  ECX = (pop32());
L_1003cdd3:;
  /* 1003cdd3 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 1003cdd7 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 1003cdda je 0x1003cded */
  if (C.zf) goto L_1003cded;
  /* 1003cddc mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 1003cddf movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 1003cde2 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003cde4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1003cde6 jg 0x1003cdf0 */
  if ((!C.zf&&C.sf==C.of)) goto L_1003cdf0;
  /* 1003cde8 jmp 0x1003ccde */
  goto L_1003ccde;
L_1003cded:;
  /* 1003cded mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_1003cdf0:;
  /* 1003cdf0 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003cdf3 jle 0x1003cdf8 */
  if ((C.zf||C.sf!=C.of)) goto L_1003cdf8;
  /* 1003cdf5 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1003cdf7 pop edi */
  EDI = (pop32());
L_1003cdf8:;
  /* 1003cdf8 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 1003cdfc sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003ce02 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 1003ce07 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_1003ce0e:;
  /* 1003ce0e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1003ce11 push eax */
  push32((uint32_t)(EAX));
  /* 1003ce12 call 0x1003c674 */
  push32(0x1003ce17u); f_1003c674();
  /* 1003ce17 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 1003ce1a pop ecx */
  ECX = (pop32());
  /* 1003ce1b jne 0x1003ce0e */
  if (!C.zf) goto L_1003ce0e;
  /* 1003ce1d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1003ce1f jge 0x1003ce38 */
  if ((C.sf==C.of)) goto L_1003ce38;
  /* 1003ce21 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 1003ce23 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 1003ce29 jle 0x1003ce38 */
  if ((C.zf||C.sf!=C.of)) goto L_1003ce38;
L_1003ce2b:;
  /* 1003ce2b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1003ce2e push eax */
  push32((uint32_t)(EAX));
  /* 1003ce2f call 0x1003c6a2 */
  push32(0x1003ce34u); f_1003c6a2();
  /* 1003ce34 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1003ce35 pop ecx */
  ECX = (pop32());
  /* 1003ce36 jne 0x1003ce2b */
  if (!C.zf) goto L_1003ce2b;
L_1003ce38:;
  /* 1003ce38 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 1003ce3b lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1003ce3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1003ce40 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 1003ce43 jle 0x1003ce95 */
  if ((C.zf||C.sf!=C.of)) goto L_1003ce95;
  /* 1003ce45 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_1003ce48:;
  /* 1003ce48 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 1003ce4b lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 1003ce4e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1003ce4f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1003ce50 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1003ce53 push eax */
  push32((uint32_t)(EAX));
  /* 1003ce54 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1003ce55 call 0x1003c674 */
  push32(0x1003ce5au); f_1003c674();
  /* 1003ce5a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1003ce5d push eax */
  push32((uint32_t)(EAX));
  /* 1003ce5e call 0x1003c674 */
  push32(0x1003ce63u); f_1003c674();
  /* 1003ce63 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1003ce66 push eax */
  push32((uint32_t)(EAX));
  /* 1003ce67 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1003ce6a push eax */
  push32((uint32_t)(EAX));
  /* 1003ce6b call 0x1003c616 */
  push32(0x1003ce70u); f_1003c616();
  /* 1003ce70 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1003ce73 push eax */
  push32((uint32_t)(EAX));
  /* 1003ce74 call 0x1003c674 */
  push32(0x1003ce79u); f_1003c674();
  /* 1003ce79 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 1003ce7c mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1003ce7f and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 1003ce83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003ce86 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1003ce88 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 1003ce8b dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 1003ce8e mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1003ce90 jne 0x1003ce48 */
  if (!C.zf) goto L_1003ce48;
  /* 1003ce92 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_1003ce95:;
  /* 1003ce95 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 1003ce98 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1003ce99 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1003ce9a cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003ce9d lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 1003cea0 jl 0x1003ced2 */
  if ((C.sf!=C.of)) goto L_1003ced2;
L_1003cea2:;
  /* 1003cea2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003cea4 jb 0x1003ceb5 */
  if (C.cf) goto L_1003ceb5;
  /* 1003cea6 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003cea9 jne 0x1003ceb1 */
  if (!C.zf) goto L_1003ceb1;
  /* 1003ceab mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 1003ceae dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1003ceaf jmp 0x1003cea2 */
  goto L_1003cea2;
L_1003ceb1:;
  /* 1003ceb1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003ceb3 jae 0x1003ceb9 */
  if (!C.cf) goto L_1003ceb9;
L_1003ceb5:;
  /* 1003ceb5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1003ceb6 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_1003ceb9:;
  /* 1003ceb9 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_1003cebb:;
  /* 1003cebb sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1003cebd sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1003cebf mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 1003cec2 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1003cec5 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_1003ceca:;
  /* 1003ceca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1003cecd:;
  /* 1003cecd pop edi */
  EDI = (pop32());
  /* 1003cece pop esi */
  ESI = (pop32());
  /* 1003cecf pop ebx */
  EBX = (pop32());
  /* 1003ced0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003ced1 ret  */
  ESPCHK(0x1003cc67u, _esp0);
  ESP += 4; return;
L_1003ced2:;
  /* 1003ced2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003ced4 jb 0x1003cee2 */
  if (C.cf) goto L_1003cee2;
  /* 1003ced6 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003ced9 jne 0x1003cede */
  if (!C.zf) goto L_1003cede;
  /* 1003cedb dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1003cedc jmp 0x1003ced2 */
  goto L_1003ced2;
L_1003cede:;
  /* 1003cede cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003cee0 jae 0x1003cebb */
  if (!C.cf) goto L_1003cebb;
L_1003cee2:;
  /* 1003cee2 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1003cee6 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1003ceea mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 1003ceee mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_1003cef1:;
  /* 1003cef1 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 1003cef5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003cef7 pop eax */
  EAX = (pop32());
  /* 1003cef8 jmp 0x1003cecd */
  goto L_1003cecd;
}

/* FUN_1000cefa @ 0x1003cefa (27 bytes, 13 insns) */
void f_1003cefa(void) {
  FTRACE(0x1003cefau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003cefa mov eax, dword ptr [0x1004685c] */
  EAX = (r32((uint32_t)(0x1004685c)));
  /* 1003ceff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003cf01 je 0x1003cf12 */
  if (C.zf) goto L_1003cf12;
  /* 1003cf03 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1003cf07 call eax */
  call_ind((uint32_t)(EAX), 0x1003cf09u);
  /* 1003cf09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003cf0b pop ecx */
  ECX = (pop32());
  /* 1003cf0c je 0x1003cf12 */
  if (C.zf) goto L_1003cf12;
  /* 1003cf0e push 1 */
  push32((uint32_t)(0x1u));
  /* 1003cf10 pop eax */
  EAX = (pop32());
  /* 1003cf11 ret  */
  ESPCHK(0x1003cefau, _esp0);
  ESP += 4; return;
L_1003cf12:;
  /* 1003cf12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003cf14 ret  */
  ESPCHK(0x1003cefau, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1003cf18 (32 bytes, 18 insns) */
void f_1003cf18(void) {
  FTRACE(0x1003cf18u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003cf18 push ebp */
  push32((uint32_t)(EBP));
  /* 1003cf19 mov ebp, esp */
  EBP = (ESP);
  /* 1003cf1b push ebx */
  push32((uint32_t)(EBX));
  /* 1003cf1c push esi */
  push32((uint32_t)(ESI));
  /* 1003cf1d push edi */
  push32((uint32_t)(EDI));
  /* 1003cf1e push ebp */
  push32((uint32_t)(EBP));
  /* 1003cf1f push 0 */
  push32((uint32_t)(0x0u));
  /* 1003cf21 push 0 */
  push32((uint32_t)(0x0u));
  /* 1003cf23 push 0x1003cf30 */
  push32((uint32_t)(0x1003cf30u));
  /* 1003cf28 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1003cf2b call 0x1003da14 */
  push32(0x1003cf30u); f_1003da14();
  /* 1003cf30 pop ebp */
  EBP = (pop32());
  /* 1003cf31 pop edi */
  EDI = (pop32());
  /* 1003cf32 pop esi */
  ESI = (pop32());
  /* 1003cf33 pop ebx */
  EBX = (pop32());
  /* 1003cf34 mov esp, ebp */
  ESP = (EBP);
  /* 1003cf36 pop ebp */
  EBP = (pop32());
  /* 1003cf37 ret  */
  ESPCHK(0x1003cf18u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1003cf5a (104 bytes, 33 insns) */
void f_1003cf5a(void) {
  FTRACE(0x1003cf5au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003cf5a push ebx */
  push32((uint32_t)(EBX));
  /* 1003cf5b push esi */
  push32((uint32_t)(ESI));
  /* 1003cf5c push edi */
  push32((uint32_t)(EDI));
  /* 1003cf5d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1003cf61 push eax */
  push32((uint32_t)(EAX));
  /* 1003cf62 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1003cf64 push 0x1003cf38 */
  push32((uint32_t)(0x1003cf38u));
  /* 1003cf69 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1003cf70 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1003cf77:;
  /* 1003cf77 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1003cf7b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1003cf7e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1003cf81 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003cf84 je 0x1003cfb4 */
  if (C.zf) goto L_1003cfb4;
  /* 1003cf86 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003cf8a je 0x1003cfb4 */
  if (C.zf) goto L_1003cfb4;
  /* 1003cf8c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1003cf8f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1003cf92 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1003cf96 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1003cf99 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003cf9e jne 0x1003cfb2 */
  if (!C.zf) goto L_1003cfb2;
  /* 1003cfa0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1003cfa5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1003cfa9 call 0x1003cfee */
  push32(0x1003cfaeu); f_1003cfee();
  /* 1003cfae call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1003cfb2u);
L_1003cfb2:;
  /* 1003cfb2 jmp 0x1003cf77 */
  goto L_1003cf77;
L_1003cfb4:;
  /* 1003cfb4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1003cfbb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003cfbe pop edi */
  EDI = (pop32());
  /* 1003cfbf pop esi */
  ESI = (pop32());
  /* 1003cfc0 pop ebx */
  EBX = (pop32());
  /* 1003cfc1 ret  */
  ESPCHK(0x1003cf5au, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfee @ 0x1003cfee (24 bytes, 10 insns) */
void f_1003cfee(void) {
  FTRACE(0x1003cfeeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003cfee push ebx */
  push32((uint32_t)(EBX));
  /* 1003cfef push ecx */
  push32((uint32_t)(ECX));
  /* 1003cff0 mov ebx, 0x100430f4 */
  EBX = (0x100430f4u);
  /* 1003cff5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003cff8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1003cffb mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1003cffe mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1003d001 pop ecx */
  ECX = (pop32());
  /* 1003d002 pop ebx */
  EBX = (pop32());
  /* 1003d003 ret 4 */
  ESPCHK(0x1003cfeeu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d0cd @ 0x1003d0cd (27 bytes, 11 insns) */
void f_1003d0cd(void) {
  FTRACE(0x1003d0cdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003d0cd push ebp */
  push32((uint32_t)(EBP));
  /* 1003d0ce mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1003d0d2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1003d0d4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1003d0d7 push eax */
  push32((uint32_t)(EAX));
  /* 1003d0d8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1003d0db push eax */
  push32((uint32_t)(EAX));
  /* 1003d0dc call 0x1003cf5a */
  push32(0x1003d0e1u); f_1003cf5a();
  /* 1003d0e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003d0e4 pop ebp */
  EBP = (pop32());
  /* 1003d0e5 ret 4 */
  ESPCHK(0x1003d0cdu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d0e8 @ 0x1003d0e8 (111 bytes, 44 insns) */
void f_1003d0e8(void) {
  FTRACE(0x1003d0e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003d0e8 push ebx */
  push32((uint32_t)(EBX));
  /* 1003d0e9 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1003d0eb cmp dword ptr [0x10046828], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10046828))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d0f1 jne 0x1003d106 */
  if (!C.zf) goto L_1003d106;
  /* 1003d0f3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1003d0f7 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d0fa jl 0x1003d155 */
  if ((C.sf!=C.of)) goto L_1003d155;
  /* 1003d0fc cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d0ff jg 0x1003d155 */
  if ((!C.zf&&C.sf==C.of)) goto L_1003d155;
  /* 1003d101 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003d104 pop ebx */
  EBX = (pop32());
  /* 1003d105 ret  */
  ESPCHK(0x1003d0e8u, _esp0);
  ESP += 4; return;
L_1003d106:;
  /* 1003d106 push esi */
  push32((uint32_t)(ESI));
  /* 1003d107 mov esi, 0x100469a4 */
  ESI = (0x100469a4u);
  /* 1003d10c push edi */
  push32((uint32_t)(EDI));
  /* 1003d10d push esi */
  push32((uint32_t)(ESI));
  /* 1003d10e call dword ptr [0x1003e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e090))), 0x1003d114u);
  /* 1003d114 cmp dword ptr [0x100469a0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100469a0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d11a mov edi, dword ptr [0x1003e08c] */
  EDI = (r32((uint32_t)(0x1003e08c)));
  /* 1003d120 je 0x1003d130 */
  if (C.zf) goto L_1003d130;
  /* 1003d122 push esi */
  push32((uint32_t)(ESI));
  /* 1003d123 call edi */
  call_ind((uint32_t)(EDI), 0x1003d125u);
  /* 1003d125 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1003d127 call 0x10039ff3 */
  push32(0x1003d12cu); f_10039ff3();
  /* 1003d12c pop ecx */
  ECX = (pop32());
  /* 1003d12d push 1 */
  push32((uint32_t)(0x1u));
  /* 1003d12f pop ebx */
  EBX = (pop32());
L_1003d130:;
  /* 1003d130 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1003d134 call 0x1003d157 */
  push32(0x1003d139u); f_1003d157();
  /* 1003d139 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1003d13b pop ecx */
  ECX = (pop32());
  /* 1003d13c mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1003d140 je 0x1003d14c */
  if (C.zf) goto L_1003d14c;
  /* 1003d142 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1003d144 call 0x1003a054 */
  push32(0x1003d149u); f_1003a054();
  /* 1003d149 pop ecx */
  ECX = (pop32());
  /* 1003d14a jmp 0x1003d14f */
  goto L_1003d14f;
L_1003d14c:;
  /* 1003d14c push esi */
  push32((uint32_t)(ESI));
  /* 1003d14d call edi */
  call_ind((uint32_t)(EDI), 0x1003d14fu);
L_1003d14f:;
  /* 1003d14f mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1003d153 pop edi */
  EDI = (pop32());
  /* 1003d154 pop esi */
  ESI = (pop32());
L_1003d155:;
  /* 1003d155 pop ebx */
  EBX = (pop32());
  /* 1003d156 ret  */
  ESPCHK(0x1003d0e8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d157 @ 0x1003d157 (204 bytes, 71 insns) */
void f_1003d157(void) {
  FTRACE(0x1003d157u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003d157 push ebp */
  push32((uint32_t)(EBP));
  /* 1003d158 mov ebp, esp */
  EBP = (ESP);
  /* 1003d15a push ecx */
  push32((uint32_t)(ECX));
  /* 1003d15b cmp dword ptr [0x10046828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10046828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d162 push ebx */
  push32((uint32_t)(EBX));
  /* 1003d163 jne 0x1003d182 */
  if (!C.zf) goto L_1003d182;
  /* 1003d165 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003d168 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d16b jl 0x1003d220 */
  if ((C.sf!=C.of)) goto L_1003d220;
  /* 1003d171 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d174 jg 0x1003d220 */
  if ((!C.zf&&C.sf==C.of)) goto L_1003d220;
  /* 1003d17a sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003d17d jmp 0x1003d220 */
  goto L_1003d220;
L_1003d182:;
  /* 1003d182 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003d185 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d18b jge 0x1003d1b5 */
  if ((C.sf==C.of)) goto L_1003d1b5;
  /* 1003d18d cmp dword ptr [0x10040bd0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10040bd0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d194 jle 0x1003d1a2 */
  if ((C.zf||C.sf!=C.of)) goto L_1003d1a2;
  /* 1003d196 push 2 */
  push32((uint32_t)(0x2u));
  /* 1003d198 push ebx */
  push32((uint32_t)(EBX));
  /* 1003d199 call 0x100393ab */
  push32(0x1003d19eu); f_100393ab();
  /* 1003d19e pop ecx */
  ECX = (pop32());
  /* 1003d19f pop ecx */
  ECX = (pop32());
  /* 1003d1a0 jmp 0x1003d1ad */
  goto L_1003d1ad;
L_1003d1a2:;
  /* 1003d1a2 mov eax, dword ptr [0x100409c0] */
  EAX = (r32((uint32_t)(0x100409c0)));
  /* 1003d1a7 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 1003d1aa and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_1003d1ad:;
  /* 1003d1ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003d1af jne 0x1003d1b5 */
  if (!C.zf) goto L_1003d1b5;
L_1003d1b1:;
  /* 1003d1b1 mov eax, ebx */
  EAX = (EBX);
  /* 1003d1b3 jmp 0x1003d220 */
  goto L_1003d220;
L_1003d1b5:;
  /* 1003d1b5 mov edx, dword ptr [0x100409c0] */
  EDX = (r32((uint32_t)(0x100409c0)));
  /* 1003d1bb mov eax, ebx */
  EAX = (EBX);
  /* 1003d1bd sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1003d1c0 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 1003d1c3 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1003d1c8 je 0x1003d1d8 */
  if (C.zf) goto L_1003d1d8;
  /* 1003d1ca and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 1003d1ce mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 1003d1d1 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 1003d1d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1003d1d6 jmp 0x1003d1e1 */
  goto L_1003d1e1;
L_1003d1d8:;
  /* 1003d1d8 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 1003d1dc mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 1003d1df push 1 */
  push32((uint32_t)(0x1u));
L_1003d1e1:;
  /* 1003d1e1 pop eax */
  EAX = (pop32());
  /* 1003d1e2 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1003d1e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003d1e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1003d1e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 1003d1eb push ecx */
  push32((uint32_t)(ECX));
  /* 1003d1ec push eax */
  push32((uint32_t)(EAX));
  /* 1003d1ed lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1003d1f0 push eax */
  push32((uint32_t)(EAX));
  /* 1003d1f1 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1003d1f6 push dword ptr [0x10046828] */
  push32((uint32_t)(r32((uint32_t)(0x10046828))));
  /* 1003d1fc call 0x1003c3a6 */
  push32(0x1003d201u); f_1003c3a6();
  /* 1003d201 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003d204 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003d206 je 0x1003d1b1 */
  if (C.zf) goto L_1003d1b1;
  /* 1003d208 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d20b jne 0x1003d213 */
  if (!C.zf) goto L_1003d213;
  /* 1003d20d movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1003d211 jmp 0x1003d220 */
  goto L_1003d220;
L_1003d213:;
  /* 1003d213 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 1003d217 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1003d21b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1003d21e or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_1003d220:;
  /* 1003d220 pop ebx */
  EBX = (pop32());
  /* 1003d221 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003d222 ret  */
  ESPCHK(0x1003d157u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d223 @ 0x1003d223 (49 bytes, 20 insns) */
void f_1003d223(void) {
  FTRACE(0x1003d223u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003d223 push esi */
  push32((uint32_t)(ESI));
  /* 1003d224 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1003d228 push edi */
  push32((uint32_t)(EDI));
  /* 1003d229 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1003d22c test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 1003d230 je 0x1003d238 */
  if (C.zf) goto L_1003d238;
  /* 1003d232 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1003d236 jmp 0x1003d24f */
  goto L_1003d24f;
L_1003d238:;
  /* 1003d238 push esi */
  push32((uint32_t)(ESI));
  /* 1003d239 call 0x10038f6e */
  push32(0x1003d23eu); f_10038f6e();
  /* 1003d23e push esi */
  push32((uint32_t)(ESI));
  /* 1003d23f call 0x1003d254 */
  push32(0x1003d244u); f_1003d254();
  /* 1003d244 push esi */
  push32((uint32_t)(ESI));
  /* 1003d245 mov edi, eax */
  EDI = (EAX);
  /* 1003d247 call 0x10038fc0 */
  push32(0x1003d24cu); f_10038fc0();
  /* 1003d24c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003d24f:;
  /* 1003d24f mov eax, edi */
  EAX = (EDI);
  /* 1003d251 pop edi */
  EDI = (pop32());
  /* 1003d252 pop esi */
  ESI = (pop32());
  /* 1003d253 ret  */
  ESPCHK(0x1003d223u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x1003d254 (76 bytes, 30 insns) */
void f_1003d254(void) {
  FTRACE(0x1003d254u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003d254 push esi */
  push32((uint32_t)(ESI));
  /* 1003d255 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1003d259 push edi */
  push32((uint32_t)(EDI));
  /* 1003d25a or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1003d25d test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1003d261 je 0x1003d297 */
  if (C.zf) goto L_1003d297;
  /* 1003d263 push esi */
  push32((uint32_t)(ESI));
  /* 1003d264 call 0x1003c154 */
  push32(0x1003d269u); f_1003c154();
  /* 1003d269 push esi */
  push32((uint32_t)(ESI));
  /* 1003d26a mov edi, eax */
  EDI = (EAX);
  /* 1003d26c call 0x1003d7c6 */
  push32(0x1003d271u); f_1003d7c6();
  /* 1003d271 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1003d274 call 0x1003d6e6 */
  push32(0x1003d279u); f_1003d6e6();
  /* 1003d279 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003d27c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003d27e jge 0x1003d285 */
  if ((C.sf==C.of)) goto L_1003d285;
  /* 1003d280 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1003d283 jmp 0x1003d297 */
  goto L_1003d297;
L_1003d285:;
  /* 1003d285 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 1003d288 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003d28a je 0x1003d297 */
  if (C.zf) goto L_1003d297;
  /* 1003d28c push eax */
  push32((uint32_t)(EAX));
  /* 1003d28d call 0x1003a1a6 */
  push32(0x1003d292u); f_1003a1a6();
  /* 1003d292 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 1003d296 pop ecx */
  ECX = (pop32());
L_1003d297:;
  /* 1003d297 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1003d29b mov eax, edi */
  EAX = (EDI);
  /* 1003d29d pop edi */
  EDI = (pop32());
  /* 1003d29e pop esi */
  ESI = (pop32());
  /* 1003d29f ret  */
  ESPCHK(0x1003d254u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2a0 @ 0x1003d2a0 (147 bytes, 52 insns) */
void f_1003d2a0(void) {
  FTRACE(0x1003d2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003d2a0 push ebx */
  push32((uint32_t)(EBX));
  /* 1003d2a1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 1003d2a5 cmp ebx, dword ptr [0x10047d20] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10047d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d2ab push esi */
  push32((uint32_t)(ESI));
  /* 1003d2ac push edi */
  push32((uint32_t)(EDI));
  /* 1003d2ad jae 0x1003d321 */
  if (!C.cf) goto L_1003d321;
  /* 1003d2af mov eax, ebx */
  EAX = (EBX);
  /* 1003d2b1 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1003d2b4 lea edi, [eax*4 + 0x10047c20] */
  EDI = ((uint32_t)(EAX*4 + 0x10047c20));
  /* 1003d2bb mov eax, ebx */
  EAX = (EBX);
  /* 1003d2bd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1003d2c0 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1003d2c3 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1003d2c5 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1003d2c8 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1003d2cd je 0x1003d321 */
  if (C.zf) goto L_1003d321;
  /* 1003d2cf push ebx */
  push32((uint32_t)(EBX));
  /* 1003d2d0 call 0x1003c024 */
  push32(0x1003d2d5u); f_1003c024();
  /* 1003d2d5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1003d2d7 pop ecx */
  ECX = (pop32());
  /* 1003d2d8 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1003d2dd je 0x1003d308 */
  if (C.zf) goto L_1003d308;
  /* 1003d2df push ebx */
  push32((uint32_t)(EBX));
  /* 1003d2e0 call 0x1003bfe2 */
  push32(0x1003d2e5u); f_1003bfe2();
  /* 1003d2e5 pop ecx */
  ECX = (pop32());
  /* 1003d2e6 push eax */
  push32((uint32_t)(EAX));
  /* 1003d2e7 call dword ptr [0x1003e0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e0d0))), 0x1003d2edu);
  /* 1003d2ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003d2ef jne 0x1003d2fb */
  if (!C.zf) goto L_1003d2fb;
  /* 1003d2f1 call dword ptr [0x1003e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e03c))), 0x1003d2f7u);
  /* 1003d2f7 mov esi, eax */
  ESI = (EAX);
  /* 1003d2f9 jmp 0x1003d2fd */
  goto L_1003d2fd;
L_1003d2fb:;
  /* 1003d2fb xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1003d2fd:;
  /* 1003d2fd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1003d2ff je 0x1003d316 */
  if (C.zf) goto L_1003d316;
  /* 1003d301 call 0x1003bf5a */
  push32(0x1003d306u); f_1003bf5a();
  /* 1003d306 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1003d308:;
  /* 1003d308 call 0x1003bf51 */
  push32(0x1003d30du); f_1003bf51();
  /* 1003d30d mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1003d313 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_1003d316:;
  /* 1003d316 push ebx */
  push32((uint32_t)(EBX));
  /* 1003d317 call 0x1003c083 */
  push32(0x1003d31cu); f_1003c083();
  /* 1003d31c pop ecx */
  ECX = (pop32());
  /* 1003d31d mov eax, esi */
  EAX = (ESI);
  /* 1003d31f jmp 0x1003d32f */
  goto L_1003d32f;
L_1003d321:;
  /* 1003d321 call 0x1003bf51 */
  push32(0x1003d326u); f_1003bf51();
  /* 1003d326 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1003d32c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1003d32f:;
  /* 1003d32f pop edi */
  EDI = (pop32());
  /* 1003d330 pop esi */
  ESI = (pop32());
  /* 1003d331 pop ebx */
  EBX = (pop32());
  /* 1003d332 ret  */
  ESPCHK(0x1003d2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3d0 @ 0x1003d3d0 (62 bytes, 35 insns) */
void f_1003d3d0(void) {
  FTRACE(0x1003d3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003d3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1003d3d1 mov ebp, esp */
  EBP = (ESP);
  /* 1003d3d3 push esi */
  push32((uint32_t)(ESI));
  /* 1003d3d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003d3d6 push eax */
  push32((uint32_t)(EAX));
  /* 1003d3d7 push eax */
  push32((uint32_t)(EAX));
  /* 1003d3d8 push eax */
  push32((uint32_t)(EAX));
  /* 1003d3d9 push eax */
  push32((uint32_t)(EAX));
  /* 1003d3da push eax */
  push32((uint32_t)(EAX));
  /* 1003d3db push eax */
  push32((uint32_t)(EAX));
  /* 1003d3dc push eax */
  push32((uint32_t)(EAX));
  /* 1003d3dd push eax */
  push32((uint32_t)(EAX));
  /* 1003d3de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1003d3e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1003d3e4:;
  /* 1003d3e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1003d3e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1003d3e8 je 0x1003d3f1 */
  if (C.zf) goto L_1003d3f1;
  /* 1003d3ea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1003d3eb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1003d3eb");
  /* 1003d3ef jmp 0x1003d3e4 */
  goto L_1003d3e4;
L_1003d3f1:;
  /* 1003d3f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1003d3f4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1003d3f7 nop  */
  /* nop */
L_1003d3f8:;
  /* 1003d3f8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1003d3f9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1003d3fb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1003d3fd je 0x1003d406 */
  if (C.zf) goto L_1003d406;
  /* 1003d3ff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1003d400 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1003d400");
  /* 1003d404 jae 0x1003d3f8 */
  if (!C.cf) goto L_1003d3f8;
L_1003d406:;
  /* 1003d406 mov eax, ecx */
  EAX = (ECX);
  /* 1003d408 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003d40b pop esi */
  ESI = (pop32());
  /* 1003d40c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003d40d ret  */
  ESPCHK(0x1003d3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d410 @ 0x1003d410 (58 bytes, 32 insns) */
void f_1003d410(void) {
  FTRACE(0x1003d410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003d410 push ebp */
  push32((uint32_t)(EBP));
  /* 1003d411 mov ebp, esp */
  EBP = (ESP);
  /* 1003d413 push esi */
  push32((uint32_t)(ESI));
  /* 1003d414 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003d416 push eax */
  push32((uint32_t)(EAX));
  /* 1003d417 push eax */
  push32((uint32_t)(EAX));
  /* 1003d418 push eax */
  push32((uint32_t)(EAX));
  /* 1003d419 push eax */
  push32((uint32_t)(EAX));
  /* 1003d41a push eax */
  push32((uint32_t)(EAX));
  /* 1003d41b push eax */
  push32((uint32_t)(EAX));
  /* 1003d41c push eax */
  push32((uint32_t)(EAX));
  /* 1003d41d push eax */
  push32((uint32_t)(EAX));
  /* 1003d41e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1003d421 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1003d424:;
  /* 1003d424 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1003d426 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1003d428 je 0x1003d431 */
  if (C.zf) goto L_1003d431;
  /* 1003d42a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1003d42b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1003d42b");
  /* 1003d42f jmp 0x1003d424 */
  goto L_1003d424;
L_1003d431:;
  /* 1003d431 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1003d434:;
  /* 1003d434 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1003d436 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1003d438 je 0x1003d444 */
  if (C.zf) goto L_1003d444;
  /* 1003d43a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1003d43b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1003d43b");
  /* 1003d43f jae 0x1003d434 */
  if (!C.cf) goto L_1003d434;
  /* 1003d441 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1003d444:;
  /* 1003d444 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003d447 pop esi */
  ESI = (pop32());
  /* 1003d448 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003d449 ret  */
  ESPCHK(0x1003d410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d44a @ 0x1003d44a (544 bytes, 177 insns) */
void f_1003d44a(void) {
  FTRACE(0x1003d44au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003d44a push ebp */
  push32((uint32_t)(EBP));
  /* 1003d44b mov ebp, esp */
  EBP = (ESP);
  /* 1003d44d sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003d450 push ebx */
  push32((uint32_t)(EBX));
  /* 1003d451 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1003d454 push esi */
  push32((uint32_t)(ESI));
  /* 1003d455 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1003d458 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 1003d45c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003d45e push edi */
  push32((uint32_t)(EDI));
  /* 1003d45f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1003d462 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1003d465 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1003d468 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1003d46b mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 1003d46f mov edi, ecx */
  EDI = (ECX);
  /* 1003d471 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 1003d476 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 1003d478 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1003d47a and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1003d47c and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 1003d482 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1003d486 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 1003d489 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1003d48c jae 0x1003d64a */
  if (!C.cf) goto L_1003d64a;
  /* 1003d492 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1003d497 jae 0x1003d64a */
  if (!C.cf) goto L_1003d64a;
  /* 1003d49d cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1003d4a2 ja 0x1003d64a */
  if ((!C.cf&&!C.zf)) goto L_1003d64a;
  /* 1003d4a8 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1003d4ad ja 0x1003d4b3 */
  if ((!C.cf&&!C.zf)) goto L_1003d4b3;
  /* 1003d4af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003d4b1 jmp 0x1003d4ed */
  goto L_1003d4ed;
L_1003d4b3:;
  /* 1003d4b3 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 1003d4b6 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 1003d4bb jne 0x1003d4d5 */
  if (!C.zf) goto L_1003d4d5;
  /* 1003d4bd inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1003d4c0 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 1003d4c3 jne 0x1003d4d5 */
  if (!C.zf) goto L_1003d4d5;
  /* 1003d4c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003d4c7 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d4ca jne 0x1003d4d7 */
  if (!C.zf) goto L_1003d4d7;
  /* 1003d4cc cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d4ce jne 0x1003d4d7 */
  if (!C.zf) goto L_1003d4d7;
  /* 1003d4d0 jmp 0x1003d644 */
  goto L_1003d644;
L_1003d4d5:;
  /* 1003d4d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1003d4d7:;
  /* 1003d4d7 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1003d4da jne 0x1003d4fa */
  if (!C.zf) goto L_1003d4fa;
  /* 1003d4dc inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1003d4df test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 1003d4e2 jne 0x1003d4fa */
  if (!C.zf) goto L_1003d4fa;
  /* 1003d4e4 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d4e7 jne 0x1003d4fa */
  if (!C.zf) goto L_1003d4fa;
  /* 1003d4e9 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d4eb jne 0x1003d4fa */
  if (!C.zf) goto L_1003d4fa;
L_1003d4ed:;
  /* 1003d4ed mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1003d4f0 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1003d4f3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1003d4f5 jmp 0x1003d665 */
  goto L_1003d665;
L_1003d4fa:;
  /* 1003d4fa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1003d4fd lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1003d500 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1003d503 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_1003d50a:;
  /* 1003d50a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1003d50d add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003d50f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d513 jle 0x1003d55e */
  if ((C.zf||C.sf!=C.of)) goto L_1003d55e;
  /* 1003d515 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003d517 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 1003d51a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1003d51d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1003d520 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1003d523 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1003d526:;
  /* 1003d526 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1003d529 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1003d52c movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 1003d52f movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 1003d532 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1003d535 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1003d538 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003d53b push ecx */
  push32((uint32_t)(ECX));
  /* 1003d53c push eax */
  push32((uint32_t)(EAX));
  /* 1003d53d push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 1003d53f call 0x1003c5f5 */
  push32(0x1003d544u); f_1003c5f5();
  /* 1003d544 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003d547 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003d549 je 0x1003d551 */
  if (C.zf) goto L_1003d551;
  /* 1003d54b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1003d54e inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_1003d551:;
  /* 1003d551 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1003d555 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1003d559 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 1003d55c jne 0x1003d526 */
  if (!C.zf) goto L_1003d526;
L_1003d55e:;
  /* 1003d55e add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1003d562 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 1003d565 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 1003d568 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d56c jg 0x1003d50a */
  if ((!C.zf&&C.sf==C.of)) goto L_1003d50a;
  /* 1003d56e add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1003d575 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1003d57a jle 0x1003d5a1 */
  if ((C.zf||C.sf!=C.of)) goto L_1003d5a1;
L_1003d57c:;
  /* 1003d57c test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 1003d580 jne 0x1003d59a */
  if (!C.zf) goto L_1003d59a;
  /* 1003d582 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1003d585 push eax */
  push32((uint32_t)(EAX));
  /* 1003d586 call 0x1003c674 */
  push32(0x1003d58bu); f_1003c674();
  /* 1003d58b add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1003d592 pop ecx */
  ECX = (pop32());
  /* 1003d593 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1003d598 jg 0x1003d57c */
  if ((!C.zf&&C.sf==C.of)) goto L_1003d57c;
L_1003d59a:;
  /* 1003d59a cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1003d59f jg 0x1003d5da */
  if ((!C.zf&&C.sf==C.of)) goto L_1003d5da;
L_1003d5a1:;
  /* 1003d5a1 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1003d5a8 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1003d5ad jge 0x1003d5da */
  if ((C.sf==C.of)) goto L_1003d5da;
  /* 1003d5af movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 1003d5b3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1003d5b5 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1003d5b8 mov ebx, eax */
  EBX = (EAX);
L_1003d5ba:;
  /* 1003d5ba test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 1003d5be je 0x1003d5c3 */
  if (C.zf) goto L_1003d5c3;
  /* 1003d5c0 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_1003d5c3:;
  /* 1003d5c3 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1003d5c6 push eax */
  push32((uint32_t)(EAX));
  /* 1003d5c7 call 0x1003c6a2 */
  push32(0x1003d5ccu); f_1003c6a2();
  /* 1003d5cc dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1003d5cd pop ecx */
  ECX = (pop32());
  /* 1003d5ce jne 0x1003d5ba */
  if (!C.zf) goto L_1003d5ba;
  /* 1003d5d0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d5d4 je 0x1003d5da */
  if (C.zf) goto L_1003d5da;
  /* 1003d5d6 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_1003d5da:;
  /* 1003d5da cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1003d5e0 ja 0x1003d5f1 */
  if ((!C.cf&&!C.zf)) goto L_1003d5f1;
  /* 1003d5e2 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1003d5e5 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1003d5ea cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d5ef jne 0x1003d626 */
  if (!C.zf) goto L_1003d626;
L_1003d5f1:;
  /* 1003d5f1 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d5f5 jne 0x1003d623 */
  if (!C.zf) goto L_1003d623;
  /* 1003d5f7 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 1003d5fb cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d5ff jne 0x1003d61e */
  if (!C.zf) goto L_1003d61e;
  /* 1003d601 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 1003d605 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1003d60b jne 0x1003d618 */
  if (!C.zf) goto L_1003d618;
  /* 1003d60d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1003d610 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 1003d616 jmp 0x1003d626 */
  goto L_1003d626;
L_1003d618:;
  /* 1003d618 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 1003d61c jmp 0x1003d626 */
  goto L_1003d626;
L_1003d61e:;
  /* 1003d61e inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 1003d621 jmp 0x1003d626 */
  goto L_1003d626;
L_1003d623:;
  /* 1003d623 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_1003d626:;
  /* 1003d626 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003d629 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1003d62d jae 0x1003d64a */
  if (!C.cf) goto L_1003d64a;
  /* 1003d62f mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 1003d633 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 1003d635 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 1003d638 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1003d63b mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 1003d63e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1003d641 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_1003d644:;
  /* 1003d644 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 1003d648 jmp 0x1003d665 */
  goto L_1003d665;
L_1003d64a:;
  /* 1003d64a neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 1003d64d sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003d64f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1003d653 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 1003d659 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003d65f and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1003d662 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_1003d665:;
  /* 1003d665 pop edi */
  EDI = (pop32());
  /* 1003d666 pop esi */
  ESI = (pop32());
  /* 1003d667 pop ebx */
  EBX = (pop32());
  /* 1003d668 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003d669 ret  */
  ESPCHK(0x1003d44au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d66a @ 0x1003d66a (124 bytes, 52 insns) */
void f_1003d66a(void) {
  FTRACE(0x1003d66au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003d66a push ebp */
  push32((uint32_t)(EBP));
  /* 1003d66b mov ebp, esp */
  EBP = (ESP);
  /* 1003d66d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003d670 push ebx */
  push32((uint32_t)(EBX));
  /* 1003d671 mov ebx, 0x10043210 */
  EBX = (0x10043210u);
  /* 1003d676 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1003d678 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003d67b cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d67e je 0x1003d6e3 */
  if (C.zf) goto L_1003d6e3;
  /* 1003d680 jge 0x1003d692 */
  if ((C.sf==C.of)) goto L_1003d692;
  /* 1003d682 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1003d685 mov ebx, 0x10043370 */
  EBX = (0x10043370u);
  /* 1003d68a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1003d68c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1003d68f sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_1003d692:;
  /* 1003d692 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d695 jne 0x1003d69d */
  if (!C.zf) goto L_1003d69d;
  /* 1003d697 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1003d69a mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_1003d69d:;
  /* 1003d69d cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d6a0 je 0x1003d6e3 */
  if (C.zf) goto L_1003d6e3;
  /* 1003d6a2 push esi */
  push32((uint32_t)(ESI));
  /* 1003d6a3 push edi */
  push32((uint32_t)(EDI));
L_1003d6a4:;
  /* 1003d6a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1003d6a7 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003d6aa sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 1003d6ae and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1003d6b1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d6b3 je 0x1003d6dc */
  if (C.zf) goto L_1003d6dc;
  /* 1003d6b5 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 1003d6b8 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1003d6be lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 1003d6c1 jb 0x1003d6cf */
  if (C.cf) goto L_1003d6cf;
  /* 1003d6c3 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 1003d6c6 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1003d6c7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1003d6c8 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1003d6c9 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 1003d6cc lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_1003d6cf:;
  /* 1003d6cf push esi */
  push32((uint32_t)(ESI));
  /* 1003d6d0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1003d6d3 call 0x1003d44a */
  push32(0x1003d6d8u); f_1003d44a();
  /* 1003d6d8 pop ecx */
  ECX = (pop32());
  /* 1003d6d9 pop ecx */
  ECX = (pop32());
  /* 1003d6da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_1003d6dc:;
  /* 1003d6dc cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d6df jne 0x1003d6a4 */
  if (!C.zf) goto L_1003d6a4;
  /* 1003d6e1 pop edi */
  EDI = (pop32());
  /* 1003d6e2 pop esi */
  ESI = (pop32());
L_1003d6e3:;
  /* 1003d6e3 pop ebx */
  EBX = (pop32());
  /* 1003d6e4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003d6e5 ret  */
  ESPCHK(0x1003d66au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6e6 @ 0x1003d6e6 (93 bytes, 32 insns) */
void f_1003d6e6(void) {
  FTRACE(0x1003d6e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003d6e6 push esi */
  push32((uint32_t)(ESI));
  /* 1003d6e7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1003d6eb cmp esi, dword ptr [0x10047d20] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10047d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d6f1 jae 0x1003d72b */
  if (!C.cf) goto L_1003d72b;
  /* 1003d6f3 mov ecx, esi */
  ECX = (ESI);
  /* 1003d6f5 mov eax, esi */
  EAX = (ESI);
  /* 1003d6f7 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1003d6fa and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1003d6fd mov ecx, dword ptr [ecx*4 + 0x10047c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10047c20)));
  /* 1003d704 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1003d707 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1003d70c je 0x1003d72b */
  if (C.zf) goto L_1003d72b;
  /* 1003d70e push edi */
  push32((uint32_t)(EDI));
  /* 1003d70f push esi */
  push32((uint32_t)(ESI));
  /* 1003d710 call 0x1003c024 */
  push32(0x1003d715u); f_1003c024();
  /* 1003d715 push esi */
  push32((uint32_t)(ESI));
  /* 1003d716 call 0x1003d743 */
  push32(0x1003d71bu); f_1003d743();
  /* 1003d71b push esi */
  push32((uint32_t)(ESI));
  /* 1003d71c mov edi, eax */
  EDI = (EAX);
  /* 1003d71e call 0x1003c083 */
  push32(0x1003d723u); f_1003c083();
  /* 1003d723 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003d726 mov eax, edi */
  EAX = (EDI);
  /* 1003d728 pop edi */
  EDI = (pop32());
  /* 1003d729 pop esi */
  ESI = (pop32());
  /* 1003d72a ret  */
  ESPCHK(0x1003d6e6u, _esp0);
  ESP += 4; return;
L_1003d72b:;
  /* 1003d72b call 0x1003bf51 */
  push32(0x1003d730u); f_1003bf51();
  /* 1003d730 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1003d736 call 0x1003bf5a */
  push32(0x1003d73bu); f_1003bf5a();
  /* 1003d73b and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1003d73e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1003d741 pop esi */
  ESI = (pop32());
  /* 1003d742 ret  */
  ESPCHK(0x1003d6e6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d743 @ 0x1003d743 (131 bytes, 52 insns) */
void f_1003d743(void) {
  FTRACE(0x1003d743u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003d743 push esi */
  push32((uint32_t)(ESI));
  /* 1003d744 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1003d748 push edi */
  push32((uint32_t)(EDI));
  /* 1003d749 push esi */
  push32((uint32_t)(ESI));
  /* 1003d74a call 0x1003bfe2 */
  push32(0x1003d74fu); f_1003bfe2();
  /* 1003d74f cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d752 pop ecx */
  ECX = (pop32());
  /* 1003d753 je 0x1003d791 */
  if (C.zf) goto L_1003d791;
  /* 1003d755 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d758 je 0x1003d75f */
  if (C.zf) goto L_1003d75f;
  /* 1003d75a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d75d jne 0x1003d775 */
  if (!C.zf) goto L_1003d775;
L_1003d75f:;
  /* 1003d75f push 2 */
  push32((uint32_t)(0x2u));
  /* 1003d761 call 0x1003bfe2 */
  push32(0x1003d766u); f_1003bfe2();
  /* 1003d766 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003d768 mov edi, eax */
  EDI = (EAX);
  /* 1003d76a call 0x1003bfe2 */
  push32(0x1003d76fu); f_1003bfe2();
  /* 1003d76f pop ecx */
  ECX = (pop32());
  /* 1003d770 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d772 pop ecx */
  ECX = (pop32());
  /* 1003d773 je 0x1003d791 */
  if (C.zf) goto L_1003d791;
L_1003d775:;
  /* 1003d775 push esi */
  push32((uint32_t)(ESI));
  /* 1003d776 call 0x1003bfe2 */
  push32(0x1003d77bu); f_1003bfe2();
  /* 1003d77b pop ecx */
  ECX = (pop32());
  /* 1003d77c push eax */
  push32((uint32_t)(EAX));
  /* 1003d77d call dword ptr [0x1003e0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e0d4))), 0x1003d783u);
  /* 1003d783 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003d785 jne 0x1003d791 */
  if (!C.zf) goto L_1003d791;
  /* 1003d787 call dword ptr [0x1003e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e03c))), 0x1003d78du);
  /* 1003d78d mov edi, eax */
  EDI = (EAX);
  /* 1003d78f jmp 0x1003d793 */
  goto L_1003d793;
L_1003d791:;
  /* 1003d791 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_1003d793:;
  /* 1003d793 push esi */
  push32((uint32_t)(ESI));
  /* 1003d794 call 0x1003bf63 */
  push32(0x1003d799u); f_1003bf63();
  /* 1003d799 mov eax, esi */
  EAX = (ESI);
  /* 1003d79b and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 1003d79e sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1003d7a1 pop ecx */
  ECX = (pop32());
  /* 1003d7a2 mov eax, dword ptr [eax*4 + 0x10047c20] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10047c20)));
  /* 1003d7a9 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 1003d7ac and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 1003d7b1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1003d7b3 je 0x1003d7c1 */
  if (C.zf) goto L_1003d7c1;
  /* 1003d7b5 push edi */
  push32((uint32_t)(EDI));
  /* 1003d7b6 call 0x1003bede */
  push32(0x1003d7bbu); f_1003bede();
  /* 1003d7bb pop ecx */
  ECX = (pop32());
  /* 1003d7bc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1003d7bf jmp 0x1003d7c3 */
  goto L_1003d7c3;
L_1003d7c1:;
  /* 1003d7c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1003d7c3:;
  /* 1003d7c3 pop edi */
  EDI = (pop32());
  /* 1003d7c4 pop esi */
  ESI = (pop32());
  /* 1003d7c5 ret  */
  ESPCHK(0x1003d743u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x1003d7c6 (43 bytes, 17 insns) */
void f_1003d7c6(void) {
  FTRACE(0x1003d7c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003d7c6 push esi */
  push32((uint32_t)(ESI));
  /* 1003d7c7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1003d7cb mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1003d7ce test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 1003d7d0 je 0x1003d7ef */
  if (C.zf) goto L_1003d7ef;
  /* 1003d7d2 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1003d7d4 je 0x1003d7ef */
  if (C.zf) goto L_1003d7ef;
  /* 1003d7d6 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 1003d7d9 call 0x1003a1a6 */
  push32(0x1003d7deu); f_1003a1a6();
  /* 1003d7de and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 1003d7e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003d7e6 pop ecx */
  ECX = (pop32());
  /* 1003d7e7 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1003d7e9 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1003d7ec mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_1003d7ef:;
  /* 1003d7ef pop esi */
  ESI = (pop32());
  /* 1003d7f0 ret  */
  ESPCHK(0x1003d7c6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d800 @ 0x1003d800 (208 bytes, 85 insns) */
void f_1003d800(void) {
  FTRACE(0x1003d800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003d800 push ebp */
  push32((uint32_t)(EBP));
  /* 1003d801 mov ebp, esp */
  EBP = (ESP);
  /* 1003d803 push edi */
  push32((uint32_t)(EDI));
  /* 1003d804 push esi */
  push32((uint32_t)(ESI));
  /* 1003d805 push ebx */
  push32((uint32_t)(EBX));
  /* 1003d806 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1003d809 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1003d80c lea eax, [0x10046820] */
  EAX = ((uint32_t)(0x10046820));
  /* 1003d812 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d816 jne 0x1003d853 */
  if (!C.zf) goto L_1003d853;
  /* 1003d818 mov al, 0xff */
  AL = (0xffu);
  /* 1003d81a mov edi, edi */
  EDI = (EDI);
L_1003d81c:;
  /* 1003d81c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1003d81e je 0x1003d84e */
  if (C.zf) goto L_1003d84e;
  /* 1003d820 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1003d822 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1003d823 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 1003d825 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1003d826 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003d828 je 0x1003d81c */
  if (C.zf) goto L_1003d81c;
  /* 1003d82a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1003d82c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003d82e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1003d830 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1003d833 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1003d835 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1003d837 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 1003d839 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1003d83b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003d83d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1003d83f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1003d842 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1003d844 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1003d846 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003d848 je 0x1003d81c */
  if (C.zf) goto L_1003d81c;
  /* 1003d84a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1003d84c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1003d84e:;
  /* 1003d84e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1003d851 jmp 0x1003d8cb */
  goto L_1003d8cb;
L_1003d853:;
  /* 1003d853 lock inc dword ptr [0x100469a4] */
  x86_unimpl("lock inc @ 0x1003d853");
  /* 1003d85a cmp dword ptr [0x100469a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100469a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d861 jg 0x1003d867 */
  if ((!C.zf&&C.sf==C.of)) goto L_1003d867;
  /* 1003d863 push 0 */
  push32((uint32_t)(0x0u));
  /* 1003d865 jmp 0x1003d87c */
  goto L_1003d87c;
L_1003d867:;
  /* 1003d867 lock dec dword ptr [0x100469a4] */
  x86_unimpl("lock dec @ 0x1003d867");
  /* 1003d86e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1003d870 call 0x10039ff3 */
  push32(0x1003d875u); f_10039ff3();
  /* 1003d875 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1003d87c:;
  /* 1003d87c mov eax, 0xff */
  EAX = (0xffu);
  /* 1003d881 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1003d883 nop  */
  /* nop */
L_1003d884:;
  /* 1003d884 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1003d886 je 0x1003d8af */
  if (C.zf) goto L_1003d8af;
  /* 1003d888 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1003d88a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1003d88b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1003d88d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1003d88e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003d890 je 0x1003d884 */
  if (C.zf) goto L_1003d884;
  /* 1003d892 push eax */
  push32((uint32_t)(EAX));
  /* 1003d893 push ebx */
  push32((uint32_t)(EBX));
  /* 1003d894 call 0x1003948f */
  push32(0x1003d899u); f_1003948f();
  /* 1003d899 mov ebx, eax */
  EBX = (EAX);
  /* 1003d89b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003d89e call 0x1003948f */
  push32(0x1003d8a3u); f_1003948f();
  /* 1003d8a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003d8a6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003d8a8 je 0x1003d884 */
  if (C.zf) goto L_1003d884;
  /* 1003d8aa sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003d8ac sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1003d8af:;
  /* 1003d8af mov ebx, eax */
  EBX = (EAX);
  /* 1003d8b1 pop eax */
  EAX = (pop32());
  /* 1003d8b2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003d8b4 jne 0x1003d8bf */
  if (!C.zf) goto L_1003d8bf;
  /* 1003d8b6 lock dec dword ptr [0x100469a4] */
  x86_unimpl("lock dec @ 0x1003d8b6");
  /* 1003d8bd jmp 0x1003d8c9 */
  goto L_1003d8c9;
L_1003d8bf:;
  /* 1003d8bf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1003d8c1 call 0x1003a054 */
  push32(0x1003d8c6u); f_1003a054();
  /* 1003d8c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003d8c9:;
  /* 1003d8c9 mov eax, ebx */
  EAX = (EBX);
L_1003d8cb:;
  /* 1003d8cb pop ebx */
  EBX = (pop32());
  /* 1003d8cc pop esi */
  ESI = (pop32());
  /* 1003d8cd pop edi */
  EDI = (pop32());
  /* 1003d8ce leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003d8cf ret  */
  ESPCHK(0x1003d800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8d0 @ 0x1003d8d0 (257 bytes, 103 insns) */
void f_1003d8d0(void) {
  FTRACE(0x1003d8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003d8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1003d8d1 mov ebp, esp */
  EBP = (ESP);
  /* 1003d8d3 push edi */
  push32((uint32_t)(EDI));
  /* 1003d8d4 push esi */
  push32((uint32_t)(ESI));
  /* 1003d8d5 push ebx */
  push32((uint32_t)(EBX));
  /* 1003d8d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1003d8d9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1003d8db je 0x1003d9ca */
  if (C.zf) goto L_1003d9ca;
  /* 1003d8e1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1003d8e4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1003d8e7 lea eax, [0x10046820] */
  EAX = ((uint32_t)(0x10046820));
  /* 1003d8ed cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d8f1 jne 0x1003d941 */
  if (!C.zf) goto L_1003d941;
  /* 1003d8f3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 1003d8f5 mov bl, 0x5a */
  BL = (0x5au);
  /* 1003d8f7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 1003d8f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1003d8fc:;
  /* 1003d8fc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1003d8fe or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1003d900 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1003d902 je 0x1003d925 */
  if (C.zf) goto L_1003d925;
  /* 1003d904 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1003d906 je 0x1003d925 */
  if (C.zf) goto L_1003d925;
  /* 1003d908 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1003d909 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1003d90a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003d90c jb 0x1003d914 */
  if (C.cf) goto L_1003d914;
  /* 1003d90e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003d910 ja 0x1003d914 */
  if ((!C.cf&&!C.zf)) goto L_1003d914;
  /* 1003d912 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_1003d914:;
  /* 1003d914 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003d916 jb 0x1003d91e */
  if (C.cf) goto L_1003d91e;
  /* 1003d918 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003d91a ja 0x1003d91e */
  if ((!C.cf&&!C.zf)) goto L_1003d91e;
  /* 1003d91c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1003d91e:;
  /* 1003d91e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003d920 jne 0x1003d92f */
  if (!C.zf) goto L_1003d92f;
  /* 1003d922 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1003d923 jne 0x1003d8fc */
  if (!C.zf) goto L_1003d8fc;
L_1003d925:;
  /* 1003d925 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1003d927 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003d929 je 0x1003d9ca */
  if (C.zf) goto L_1003d9ca;
L_1003d92f:;
  /* 1003d92f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1003d934 jb 0x1003d9ca */
  if (C.cf) goto L_1003d9ca;
  /* 1003d93a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1003d93c jmp 0x1003d9ca */
  goto L_1003d9ca;
L_1003d941:;
  /* 1003d941 lock inc dword ptr [0x100469a4] */
  x86_unimpl("lock inc @ 0x1003d941");
  /* 1003d948 cmp dword ptr [0x100469a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100469a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d94f jg 0x1003d955 */
  if ((!C.zf&&C.sf==C.of)) goto L_1003d955;
  /* 1003d951 push 0 */
  push32((uint32_t)(0x0u));
  /* 1003d953 jmp 0x1003d96e */
  goto L_1003d96e;
L_1003d955:;
  /* 1003d955 lock dec dword ptr [0x100469a4] */
  x86_unimpl("lock dec @ 0x1003d955");
  /* 1003d95c mov ebx, ecx */
  EBX = (ECX);
  /* 1003d95e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1003d960 call 0x10039ff3 */
  push32(0x1003d965u); f_10039ff3();
  /* 1003d965 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1003d96c mov ecx, ebx */
  ECX = (EBX);
L_1003d96e:;
  /* 1003d96e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003d970 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1003d972 mov edi, edi */
  EDI = (EDI);
L_1003d974:;
  /* 1003d974 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1003d976 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003d978 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1003d97a je 0x1003d99f */
  if (C.zf) goto L_1003d99f;
  /* 1003d97c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1003d97e je 0x1003d99f */
  if (C.zf) goto L_1003d99f;
  /* 1003d980 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1003d981 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1003d982 push ecx */
  push32((uint32_t)(ECX));
  /* 1003d983 push eax */
  push32((uint32_t)(EAX));
  /* 1003d984 push ebx */
  push32((uint32_t)(EBX));
  /* 1003d985 call 0x1003948f */
  push32(0x1003d98au); f_1003948f();
  /* 1003d98a mov ebx, eax */
  EBX = (EAX);
  /* 1003d98c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003d98f call 0x1003948f */
  push32(0x1003d994u); f_1003948f();
  /* 1003d994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003d997 pop ecx */
  ECX = (pop32());
  /* 1003d998 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d99a jne 0x1003d9a5 */
  if (!C.zf) goto L_1003d9a5;
  /* 1003d99c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1003d99d jne 0x1003d974 */
  if (!C.zf) goto L_1003d974;
L_1003d99f:;
  /* 1003d99f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1003d9a1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003d9a3 je 0x1003d9ae */
  if (C.zf) goto L_1003d9ae;
L_1003d9a5:;
  /* 1003d9a5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1003d9aa jb 0x1003d9ae */
  if (C.cf) goto L_1003d9ae;
  /* 1003d9ac neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1003d9ae:;
  /* 1003d9ae pop eax */
  EAX = (pop32());
  /* 1003d9af or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003d9b1 jne 0x1003d9bc */
  if (!C.zf) goto L_1003d9bc;
  /* 1003d9b3 lock dec dword ptr [0x100469a4] */
  x86_unimpl("lock dec @ 0x1003d9b3");
  /* 1003d9ba jmp 0x1003d9ca */
  goto L_1003d9ca;
L_1003d9bc:;
  /* 1003d9bc mov ebx, ecx */
  EBX = (ECX);
  /* 1003d9be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1003d9c0 call 0x1003a054 */
  push32(0x1003d9c5u); f_1003a054();
  /* 1003d9c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003d9c8 mov ecx, ebx */
  ECX = (EBX);
L_1003d9ca:;
  /* 1003d9ca mov eax, ecx */
  EAX = (ECX);
  /* 1003d9cc pop ebx */
  EBX = (pop32());
  /* 1003d9cd pop esi */
  ESI = (pop32());
  /* 1003d9ce pop edi */
  EDI = (pop32());
  /* 1003d9cf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1003d9d0 ret  */
  ESPCHK(0x1003d8d0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x1003da14 (6 bytes, 1 insns) */
void f_1003da14(void) {
  FTRACE(0x1003da14u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003da14 jmp dword ptr [0x1003e0cc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1003e0cc)))); return;
}

