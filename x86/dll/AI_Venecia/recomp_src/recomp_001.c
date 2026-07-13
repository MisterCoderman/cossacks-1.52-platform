#include "recomp.h"

/* FUN_10009265 @ 0x10219265 (53 bytes, 25 insns) */
void f_10219265(void) {
  FTRACE(0x10219265u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10219265 push ebp */
  push32((uint32_t)(EBP));
  /* 10219266 mov ebp, esp */
  EBP = (ESP);
  /* 10219268 push ecx */
  push32((uint32_t)(ECX));
  /* 10219269 push esi */
  push32((uint32_t)(ESI));
  /* 1021926a wait  */
  /* wait (no observable integer/reg state) */
  /* 1021926b fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 1021926e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 10219271 call 0x102192b0 */
  push32(0x10219276u); f_102192b0();
  /* 10219276 mov esi, eax */
  ESI = (EAX);
  /* 10219278 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1021927b not eax */
  EAX = (~(EAX));
  /* 1021927d and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 1021927f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10219282 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10219285 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 10219287 push esi */
  push32((uint32_t)(ESI));
  /* 10219288 call 0x10219342 */
  push32(0x1021928du); f_10219342();
  /* 1021928d pop ecx */
  ECX = (pop32());
  /* 1021928e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10219291 pop ecx */
  ECX = (pop32());
  /* 10219292 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 10219295 mov eax, esi */
  EAX = (ESI);
  /* 10219297 pop esi */
  ESI = (pop32());
  /* 10219298 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10219299 ret  */
  ESPCHK(0x10219265u, _esp0);
  ESP += 4; return;
}

/* FUN_1000929a @ 0x1021929a (22 bytes, 8 insns) */
void f_1021929a(void) {
  FTRACE(0x1021929au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021929a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1021929e and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102192a3 push eax */
  push32((uint32_t)(EAX));
  /* 102192a4 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 102192a8 call 0x10219265 */
  push32(0x102192adu); f_10219265();
  /* 102192ad pop ecx */
  ECX = (pop32());
  /* 102192ae pop ecx */
  ECX = (pop32());
  /* 102192af ret  */
  ESPCHK(0x1021929au, _esp0);
  ESP += 4; return;
}

/* FUN_100092b0 @ 0x102192b0 (146 bytes, 58 insns) */
void f_102192b0(void) {
  FTRACE(0x102192b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102192b0 push ebx */
  push32((uint32_t)(EBX));
  /* 102192b1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 102192b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102192b7 push ebp */
  push32((uint32_t)(EBP));
  /* 102192b8 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 102192bb push edi */
  push32((uint32_t)(EDI));
  /* 102192bc je 0x102192c1 */
  if (C.zf) goto L_102192c1;
  /* 102192be push 0x10 */
  push32((uint32_t)(0x10u));
  /* 102192c0 pop eax */
  EAX = (pop32());
L_102192c1:;
  /* 102192c1 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 102192c4 je 0x102192c8 */
  if (C.zf) goto L_102192c8;
  /* 102192c6 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_102192c8:;
  /* 102192c8 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 102192cb je 0x102192cf */
  if (C.zf) goto L_102192cf;
  /* 102192cd or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_102192cf:;
  /* 102192cf test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 102192d2 je 0x102192d6 */
  if (C.zf) goto L_102192d6;
  /* 102192d4 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_102192d6:;
  /* 102192d6 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 102192d9 je 0x102192dd */
  if (C.zf) goto L_102192dd;
  /* 102192db or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_102192dd:;
  /* 102192dd test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 102192e0 je 0x102192e7 */
  if (C.zf) goto L_102192e7;
  /* 102192e2 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_102192e7:;
  /* 102192e7 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 102192ea push esi */
  push32((uint32_t)(ESI));
  /* 102192eb mov edx, ecx */
  EDX = (ECX);
  /* 102192ed mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 102192f2 mov edi, 0x300 */
  EDI = (0x300u);
  /* 102192f7 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 102192f9 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 102192fe je 0x1021931f */
  if (C.zf) goto L_1021931f;
  /* 10219300 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219306 je 0x1021931c */
  if (C.zf) goto L_1021931c;
  /* 10219308 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021930e je 0x10219318 */
  if (C.zf) goto L_10219318;
  /* 10219310 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219312 jne 0x1021931f */
  if (!C.zf) goto L_1021931f;
  /* 10219314 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 10219316 jmp 0x1021931f */
  goto L_1021931f;
L_10219318:;
  /* 10219318 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 1021931a jmp 0x1021931f */
  goto L_1021931f;
L_1021931c:;
  /* 1021931c or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_1021931f:;
  /* 1021931f and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10219321 pop esi */
  ESI = (pop32());
  /* 10219322 je 0x1021932f */
  if (C.zf) goto L_1021932f;
  /* 10219324 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219326 jne 0x10219334 */
  if (!C.zf) goto L_10219334;
  /* 10219328 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 1021932d jmp 0x10219334 */
  goto L_10219334;
L_1021932f:;
  /* 1021932f or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_10219334:;
  /* 10219334 pop edi */
  EDI = (pop32());
  /* 10219335 pop ebp */
  EBP = (pop32());
  /* 10219336 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 10219339 pop ebx */
  EBX = (pop32());
  /* 1021933a je 0x10219341 */
  if (C.zf) goto L_10219341;
  /* 1021933c or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_10219341:;
  /* 10219341 ret  */
  ESPCHK(0x102192b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009342 @ 0x10219342 (137 bytes, 53 insns) */
void f_10219342(void) {
  FTRACE(0x10219342u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10219342 push ebx */
  push32((uint32_t)(EBX));
  /* 10219343 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 10219347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10219349 push esi */
  push32((uint32_t)(ESI));
  /* 1021934a test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 1021934d je 0x10219352 */
  if (C.zf) goto L_10219352;
  /* 1021934f push 1 */
  push32((uint32_t)(0x1u));
  /* 10219351 pop eax */
  EAX = (pop32());
L_10219352:;
  /* 10219352 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 10219355 je 0x10219359 */
  if (C.zf) goto L_10219359;
  /* 10219357 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_10219359:;
  /* 10219359 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 1021935c je 0x10219360 */
  if (C.zf) goto L_10219360;
  /* 1021935e or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_10219360:;
  /* 10219360 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10219363 je 0x10219367 */
  if (C.zf) goto L_10219367;
  /* 10219365 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_10219367:;
  /* 10219367 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 1021936a je 0x1021936e */
  if (C.zf) goto L_1021936e;
  /* 1021936c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_1021936e:;
  /* 1021936e test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 10219374 je 0x10219378 */
  if (C.zf) goto L_10219378;
  /* 10219376 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_10219378:;
  /* 10219378 mov ecx, ebx */
  ECX = (EBX);
  /* 1021937a mov edx, 0x300 */
  EDX = (0x300u);
  /* 1021937f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10219381 mov esi, 0x200 */
  ESI = (0x200u);
  /* 10219386 je 0x102193a5 */
  if (C.zf) goto L_102193a5;
  /* 10219388 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021938e je 0x102193a2 */
  if (C.zf) goto L_102193a2;
  /* 10219390 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219392 je 0x1021939d */
  if (C.zf) goto L_1021939d;
  /* 10219394 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219396 jne 0x102193a5 */
  if (!C.zf) goto L_102193a5;
  /* 10219398 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 1021939b jmp 0x102193a5 */
  goto L_102193a5;
L_1021939d:;
  /* 1021939d or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 102193a0 jmp 0x102193a5 */
  goto L_102193a5;
L_102193a2:;
  /* 102193a2 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_102193a5:;
  /* 102193a5 mov ecx, ebx */
  ECX = (EBX);
  /* 102193a7 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 102193ad je 0x102193bb */
  if (C.zf) goto L_102193bb;
  /* 102193af cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102193b5 jne 0x102193bd */
  if (!C.zf) goto L_102193bd;
  /* 102193b7 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 102193b9 jmp 0x102193bd */
  goto L_102193bd;
L_102193bb:;
  /* 102193bb or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_102193bd:;
  /* 102193bd pop esi */
  ESI = (pop32());
  /* 102193be test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 102193c4 pop ebx */
  EBX = (pop32());
  /* 102193c5 je 0x102193ca */
  if (C.zf) goto L_102193ca;
  /* 102193c7 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_102193ca:;
  /* 102193ca ret  */
  ESPCHK(0x10219342u, _esp0);
  ESP += 4; return;
}

/* FUN_100093cb @ 0x102193cb (117 bytes, 46 insns) */
void f_102193cb(void) {
  FTRACE(0x102193cbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102193cb push ebp */
  push32((uint32_t)(EBP));
  /* 102193cc mov ebp, esp */
  EBP = (ESP);
  /* 102193ce push ecx */
  push32((uint32_t)(ECX));
  /* 102193cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102193d2 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 102193d5 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102193db ja 0x102193e9 */
  if ((!C.cf&&!C.zf)) goto L_102193e9;
  /* 102193dd mov ecx, dword ptr [0x102209d0] */
  ECX = (r32((uint32_t)(0x102209d0)));
  /* 102193e3 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 102193e7 jmp 0x1021943b */
  goto L_1021943b;
L_102193e9:;
  /* 102193e9 mov ecx, eax */
  ECX = (EAX);
  /* 102193eb push esi */
  push32((uint32_t)(ESI));
  /* 102193ec mov esi, dword ptr [0x102209d0] */
  ESI = (r32((uint32_t)(0x102209d0)));
  /* 102193f2 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 102193f5 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 102193f8 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 102193fd pop esi */
  ESI = (pop32());
  /* 102193fe je 0x1021940e */
  if (C.zf) goto L_1021940e;
  /* 10219400 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 10219404 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10219407 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 1021940a push 2 */
  push32((uint32_t)(0x2u));
  /* 1021940c jmp 0x10219417 */
  goto L_10219417;
L_1021940e:;
  /* 1021940e and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10219412 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10219415 push 1 */
  push32((uint32_t)(0x1u));
L_10219417:;
  /* 10219417 pop eax */
  EAX = (pop32());
  /* 10219418 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 1021941b push 1 */
  push32((uint32_t)(0x1u));
  /* 1021941d push 0 */
  push32((uint32_t)(0x0u));
  /* 1021941f push 0 */
  push32((uint32_t)(0x0u));
  /* 10219421 push ecx */
  push32((uint32_t)(ECX));
  /* 10219422 push eax */
  push32((uint32_t)(EAX));
  /* 10219423 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10219426 push eax */
  push32((uint32_t)(EAX));
  /* 10219427 push 1 */
  push32((uint32_t)(0x1u));
  /* 10219429 call 0x1021c27d */
  push32(0x1021942eu); f_1021c27d();
  /* 1021942e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10219431 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10219433 jne 0x10219437 */
  if (!C.zf) goto L_10219437;
  /* 10219435 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10219436 ret  */
  ESPCHK(0x102193cbu, _esp0);
  ESP += 4; return;
L_10219437:;
  /* 10219437 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_1021943b:;
  /* 1021943b and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1021943e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021943f ret  */
  ESPCHK(0x102193cbu, _esp0);
  ESP += 4; return;
}

/* FUN_10009440 @ 0x10219440 (111 bytes, 44 insns) */
void f_10219440(void) {
  FTRACE(0x10219440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10219440 push ebx */
  push32((uint32_t)(EBX));
  /* 10219441 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10219443 cmp dword ptr [0x10226838], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10226838))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219449 jne 0x1021945e */
  if (!C.zf) goto L_1021945e;
  /* 1021944b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1021944f cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219452 jl 0x102194ad */
  if ((C.sf!=C.of)) goto L_102194ad;
  /* 10219454 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219457 jg 0x102194ad */
  if ((!C.zf&&C.sf==C.of)) goto L_102194ad;
  /* 10219459 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021945c pop ebx */
  EBX = (pop32());
  /* 1021945d ret  */
  ESPCHK(0x10219440u, _esp0);
  ESP += 4; return;
L_1021945e:;
  /* 1021945e push esi */
  push32((uint32_t)(ESI));
  /* 1021945f mov esi, 0x102269b4 */
  ESI = (0x102269b4u);
  /* 10219464 push edi */
  push32((uint32_t)(EDI));
  /* 10219465 push esi */
  push32((uint32_t)(ESI));
  /* 10219466 call dword ptr [0x1021e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e090))), 0x1021946cu);
  /* 1021946c cmp dword ptr [0x102269b0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102269b0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219472 mov edi, dword ptr [0x1021e08c] */
  EDI = (r32((uint32_t)(0x1021e08c)));
  /* 10219478 je 0x10219488 */
  if (C.zf) goto L_10219488;
  /* 1021947a push esi */
  push32((uint32_t)(ESI));
  /* 1021947b call edi */
  call_ind((uint32_t)(EDI), 0x1021947du);
  /* 1021947d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1021947f call 0x1021a013 */
  push32(0x10219484u); f_1021a013();
  /* 10219484 pop ecx */
  ECX = (pop32());
  /* 10219485 push 1 */
  push32((uint32_t)(0x1u));
  /* 10219487 pop ebx */
  EBX = (pop32());
L_10219488:;
  /* 10219488 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1021948c call 0x102194af */
  push32(0x10219491u); f_102194af();
  /* 10219491 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10219493 pop ecx */
  ECX = (pop32());
  /* 10219494 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10219498 je 0x102194a4 */
  if (C.zf) goto L_102194a4;
  /* 1021949a push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1021949c call 0x1021a074 */
  push32(0x102194a1u); f_1021a074();
  /* 102194a1 pop ecx */
  ECX = (pop32());
  /* 102194a2 jmp 0x102194a7 */
  goto L_102194a7;
L_102194a4:;
  /* 102194a4 push esi */
  push32((uint32_t)(ESI));
  /* 102194a5 call edi */
  call_ind((uint32_t)(EDI), 0x102194a7u);
L_102194a7:;
  /* 102194a7 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 102194ab pop edi */
  EDI = (pop32());
  /* 102194ac pop esi */
  ESI = (pop32());
L_102194ad:;
  /* 102194ad pop ebx */
  EBX = (pop32());
  /* 102194ae ret  */
  ESPCHK(0x10219440u, _esp0);
  ESP += 4; return;
}

/* FUN_100094af @ 0x102194af (203 bytes, 78 insns) */
void f_102194af(void) {
  FTRACE(0x102194afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102194af push ebp */
  push32((uint32_t)(EBP));
  /* 102194b0 mov ebp, esp */
  EBP = (ESP);
  /* 102194b2 push ecx */
  push32((uint32_t)(ECX));
  /* 102194b3 cmp dword ptr [0x10226838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10226838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102194ba push ebx */
  push32((uint32_t)(EBX));
  /* 102194bb push esi */
  push32((uint32_t)(ESI));
  /* 102194bc push edi */
  push32((uint32_t)(EDI));
  /* 102194bd jne 0x102194dc */
  if (!C.zf) goto L_102194dc;
  /* 102194bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102194c2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102194c5 jl 0x10219575 */
  if ((C.sf!=C.of)) goto L_10219575;
  /* 102194cb cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102194ce jg 0x10219575 */
  if ((!C.zf&&C.sf==C.of)) goto L_10219575;
  /* 102194d4 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102194d7 jmp 0x10219575 */
  goto L_10219575;
L_102194dc:;
  /* 102194dc mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102194df mov edi, 0x100 */
  EDI = (0x100u);
  /* 102194e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 102194e6 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102194e8 pop esi */
  ESI = (pop32());
  /* 102194e9 jge 0x10219510 */
  if ((C.sf==C.of)) goto L_10219510;
  /* 102194eb cmp dword ptr [0x10220be0], esi */
  { uint32_t _a=(r32((uint32_t)(0x10220be0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102194f1 jle 0x102194fe */
  if ((C.zf||C.sf!=C.of)) goto L_102194fe;
  /* 102194f3 push esi */
  push32((uint32_t)(ESI));
  /* 102194f4 push ebx */
  push32((uint32_t)(EBX));
  /* 102194f5 call 0x102193cb */
  push32(0x102194fau); f_102193cb();
  /* 102194fa pop ecx */
  ECX = (pop32());
  /* 102194fb pop ecx */
  ECX = (pop32());
  /* 102194fc jmp 0x10219508 */
  goto L_10219508;
L_102194fe:;
  /* 102194fe mov eax, dword ptr [0x102209d0] */
  EAX = (r32((uint32_t)(0x102209d0)));
  /* 10219503 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 10219506 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_10219508:;
  /* 10219508 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021950a jne 0x10219510 */
  if (!C.zf) goto L_10219510;
L_1021950c:;
  /* 1021950c mov eax, ebx */
  EAX = (EBX);
  /* 1021950e jmp 0x10219575 */
  goto L_10219575;
L_10219510:;
  /* 10219510 mov edx, dword ptr [0x102209d0] */
  EDX = (r32((uint32_t)(0x102209d0)));
  /* 10219516 mov eax, ebx */
  EAX = (EBX);
  /* 10219518 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1021951b movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 1021951e test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 10219523 je 0x10219534 */
  if (C.zf) goto L_10219534;
  /* 10219525 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 10219529 push 2 */
  push32((uint32_t)(0x2u));
  /* 1021952b mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 1021952e mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 10219531 pop eax */
  EAX = (pop32());
  /* 10219532 jmp 0x1021953d */
  goto L_1021953d;
L_10219534:;
  /* 10219534 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 10219538 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 1021953b mov eax, esi */
  EAX = (ESI);
L_1021953d:;
  /* 1021953d push esi */
  push32((uint32_t)(ESI));
  /* 1021953e push 0 */
  push32((uint32_t)(0x0u));
  /* 10219540 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10219543 push 3 */
  push32((uint32_t)(0x3u));
  /* 10219545 push ecx */
  push32((uint32_t)(ECX));
  /* 10219546 push eax */
  push32((uint32_t)(EAX));
  /* 10219547 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1021954a push eax */
  push32((uint32_t)(EAX));
  /* 1021954b push edi */
  push32((uint32_t)(EDI));
  /* 1021954c push dword ptr [0x10226838] */
  push32((uint32_t)(r32((uint32_t)(0x10226838))));
  /* 10219552 call 0x1021c3c6 */
  push32(0x10219557u); f_1021c3c6();
  /* 10219557 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021955a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021955c je 0x1021950c */
  if (C.zf) goto L_1021950c;
  /* 1021955e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219560 jne 0x10219568 */
  if (!C.zf) goto L_10219568;
  /* 10219562 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10219566 jmp 0x10219575 */
  goto L_10219575;
L_10219568:;
  /* 10219568 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 1021956c movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10219570 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10219573 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10219575:;
  /* 10219575 pop edi */
  EDI = (pop32());
  /* 10219576 pop esi */
  ESI = (pop32());
  /* 10219577 pop ebx */
  EBX = (pop32());
  /* 10219578 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10219579 ret  */
  ESPCHK(0x102194afu, _esp0);
  ESP += 4; return;
}

/* FUN_1000957a @ 0x1021957a (73 bytes, 36 insns) */
void f_1021957a(void) {
  FTRACE(0x1021957au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021957a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1021957e push esi */
  push32((uint32_t)(ESI));
  /* 1021957f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10219581 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10219582 pop ecx */
  ECX = (pop32());
  /* 10219583 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10219585 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10219587 mov esi, eax */
  ESI = (EAX);
  /* 10219589 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1021958d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1021958e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10219590 pop ecx */
  ECX = (pop32());
  /* 10219591 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10219595 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10219597 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1021959a shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1021959c not edx */
  EDX = (~(EDX));
  /* 1021959e test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 102195a1 jne 0x102195bf */
  if (!C.zf) goto L_102195bf;
  /* 102195a3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102195a4 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102195a7 jge 0x102195ba */
  if ((C.sf==C.of)) goto L_102195ba;
  /* 102195a9 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_102195ac:;
  /* 102195ac cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102195af jne 0x102195bf */
  if (!C.zf) goto L_102195bf;
  /* 102195b1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102195b2 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102195b5 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102195b8 jl 0x102195ac */
  if ((C.sf!=C.of)) goto L_102195ac;
L_102195ba:;
  /* 102195ba push 1 */
  push32((uint32_t)(0x1u));
  /* 102195bc pop eax */
  EAX = (pop32());
  /* 102195bd pop esi */
  ESI = (pop32());
  /* 102195be ret  */
  ESPCHK(0x1021957au, _esp0);
  ESP += 4; return;
L_102195bf:;
  /* 102195bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102195c1 pop esi */
  ESI = (pop32());
  /* 102195c2 ret  */
  ESPCHK(0x1021957au, _esp0);
  ESP += 4; return;
}

/* FUN_100095c3 @ 0x102195c3 (86 bytes, 43 insns) */
void f_102195c3(void) {
  FTRACE(0x102195c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102195c3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102195c7 push ebx */
  push32((uint32_t)(EBX));
  /* 102195c8 push esi */
  push32((uint32_t)(ESI));
  /* 102195c9 push edi */
  push32((uint32_t)(EDI));
  /* 102195ca push 0x20 */
  push32((uint32_t)(0x20u));
  /* 102195cc mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 102195d0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102195d1 pop ecx */
  ECX = (pop32());
  /* 102195d2 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102195d4 mov esi, eax */
  ESI = (EAX);
  /* 102195d6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 102195da cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102195db idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102195dd lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 102195e0 push edi */
  push32((uint32_t)(EDI));
  /* 102195e1 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 102195e3 pop ecx */
  ECX = (pop32());
  /* 102195e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 102195e6 pop eax */
  EAX = (pop32());
  /* 102195e7 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102195e9 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 102195eb push eax */
  push32((uint32_t)(EAX));
  /* 102195ec push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 102195ee call 0x1021c615 */
  push32(0x102195f3u); f_1021c615();
  /* 102195f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102195f6 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 102195f7 js 0x10219615 */
  if (C.sf) goto L_10219615;
  /* 102195f9 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_102195fc:;
  /* 102195fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102195fe je 0x10219615 */
  if (C.zf) goto L_10219615;
  /* 10219600 push edi */
  push32((uint32_t)(EDI));
  /* 10219601 push 1 */
  push32((uint32_t)(0x1u));
  /* 10219603 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 10219605 call 0x1021c615 */
  push32(0x1021960au); f_1021c615();
  /* 1021960a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021960d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1021960e sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10219611 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10219613 jge 0x102195fc */
  if ((C.sf==C.of)) goto L_102195fc;
L_10219615:;
  /* 10219615 pop edi */
  EDI = (pop32());
  /* 10219616 pop esi */
  ESI = (pop32());
  /* 10219617 pop ebx */
  EBX = (pop32());
  /* 10219618 ret  */
  ESPCHK(0x102195c3u, _esp0);
  ESP += 4; return;
}

/* FUN_10009619 @ 0x10219619 (140 bytes, 71 insns) */
void f_10219619(void) {
  FTRACE(0x10219619u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10219619 push ebp */
  push32((uint32_t)(EBP));
  /* 1021961a mov ebp, esp */
  EBP = (ESP);
  /* 1021961c push ecx */
  push32((uint32_t)(ECX));
  /* 1021961d push ecx */
  push32((uint32_t)(ECX));
  /* 1021961e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10219621 push ebx */
  push32((uint32_t)(EBX));
  /* 10219622 push esi */
  push32((uint32_t)(ESI));
  /* 10219623 push edi */
  push32((uint32_t)(EDI));
  /* 10219624 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 10219627 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10219629 pop ecx */
  ECX = (pop32());
  /* 1021962a and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1021962e lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 10219631 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10219633 mov eax, ebx */
  EAX = (EBX);
  /* 10219635 pop esi */
  ESI = (pop32());
  /* 10219636 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10219637 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10219639 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1021963b mov ecx, eax */
  ECX = (EAX);
  /* 1021963d mov eax, ebx */
  EAX = (EBX);
  /* 1021963f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10219640 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10219642 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10219645 pop esi */
  ESI = (pop32());
  /* 10219646 push 1 */
  push32((uint32_t)(0x1u));
  /* 10219648 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1021964b lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 1021964e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10219651 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10219653 pop edx */
  EDX = (pop32());
  /* 10219654 mov ecx, esi */
  ECX = (ESI);
  /* 10219656 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10219658 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 1021965a je 0x1021967d */
  if (C.zf) goto L_1021967d;
  /* 1021965c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1021965d push ebx */
  push32((uint32_t)(EBX));
  /* 1021965e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10219661 call 0x1021957a */
  push32(0x10219666u); f_1021957a();
  /* 10219666 pop ecx */
  ECX = (pop32());
  /* 10219667 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10219669 pop ecx */
  ECX = (pop32());
  /* 1021966a jne 0x1021967a */
  if (!C.zf) goto L_1021967a;
  /* 1021966c push edi */
  push32((uint32_t)(EDI));
  /* 1021966d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10219670 call 0x102195c3 */
  push32(0x10219675u); f_102195c3();
  /* 10219675 pop ecx */
  ECX = (pop32());
  /* 10219676 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10219679 pop ecx */
  ECX = (pop32());
L_1021967a:;
  /* 1021967a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1021967d:;
  /* 1021967d or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10219680 mov ecx, esi */
  ECX = (ESI);
  /* 10219682 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10219684 push 3 */
  push32((uint32_t)(0x3u));
  /* 10219686 pop ecx */
  ECX = (pop32());
  /* 10219687 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10219689 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1021968c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1021968d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021968f jge 0x1021969d */
  if ((C.sf==C.of)) goto L_1021969d;
  /* 10219691 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10219694 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10219696 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10219699 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021969b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_1021969d:;
  /* 1021969d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102196a0 pop edi */
  EDI = (pop32());
  /* 102196a1 pop esi */
  ESI = (pop32());
  /* 102196a2 pop ebx */
  EBX = (pop32());
  /* 102196a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102196a4 ret  */
  ESPCHK(0x10219619u, _esp0);
  ESP += 4; return;
}

/* FUN_100096a5 @ 0x102196a5 (27 bytes, 13 insns) */
void f_102196a5(void) {
  FTRACE(0x102196a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102196a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102196a9 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102196ad push esi */
  push32((uint32_t)(ESI));
  /* 102196ae push 3 */
  push32((uint32_t)(0x3u));
  /* 102196b0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102196b2 pop edx */
  EDX = (pop32());
L_102196b3:;
  /* 102196b3 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 102196b5 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 102196b8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102196bb dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 102196bc jne 0x102196b3 */
  if (!C.zf) goto L_102196b3;
  /* 102196be pop esi */
  ESI = (pop32());
  /* 102196bf ret  */
  ESPCHK(0x102196a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100096c0 @ 0x102196c0 (12 bytes, 8 insns) */
void f_102196c0(void) {
  FTRACE(0x102196c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102196c0 push edi */
  push32((uint32_t)(EDI));
  /* 102196c1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 102196c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102196c7 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102196c8 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102196c9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102196ca pop edi */
  EDI = (pop32());
  /* 102196cb ret  */
  ESPCHK(0x102196c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096cc @ 0x102196cc (27 bytes, 13 insns) */
void f_102196cc(void) {
  FTRACE(0x102196ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102196cc mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102196d0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_102196d2:;
  /* 102196d2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102196d5 jne 0x102196e4 */
  if (!C.zf) goto L_102196e4;
  /* 102196d7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102196d8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102196db cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102196de jl 0x102196d2 */
  if ((C.sf!=C.of)) goto L_102196d2;
  /* 102196e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 102196e2 pop eax */
  EAX = (pop32());
  /* 102196e3 ret  */
  ESPCHK(0x102196ccu, _esp0);
  ESP += 4; return;
L_102196e4:;
  /* 102196e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102196e6 ret  */
  ESPCHK(0x102196ccu, _esp0);
  ESP += 4; return;
}

/* FUN_100096e7 @ 0x102196e7 (141 bytes, 64 insns) */
void f_102196e7(void) {
  FTRACE(0x102196e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102196e7 push ebp */
  push32((uint32_t)(EBP));
  /* 102196e8 mov ebp, esp */
  EBP = (ESP);
  /* 102196ea sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102196ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102196f0 push ebx */
  push32((uint32_t)(EBX));
  /* 102196f1 push esi */
  push32((uint32_t)(ESI));
  /* 102196f2 push edi */
  push32((uint32_t)(EDI));
  /* 102196f3 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 102196f5 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 102196f8 pop ebx */
  EBX = (pop32());
  /* 102196f9 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 102196fc cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102196fd mov ecx, ebx */
  ECX = (EBX);
  /* 102196ff mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 10219706 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10219708 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1021970b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1021970e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1021970f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10219711 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 10219715 mov ecx, edx */
  ECX = (EDX);
  /* 10219717 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10219719 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021971b not esi */
  ESI = (~(ESI));
L_1021971d:;
  /* 1021971d mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1021971f mov ecx, eax */
  ECX = (EAX);
  /* 10219721 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10219723 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10219726 mov ecx, edx */
  ECX = (EDX);
  /* 10219728 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1021972a or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1021972d mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1021972f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10219732 mov ecx, ebx */
  ECX = (EBX);
  /* 10219734 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10219737 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10219739 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1021973c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1021973f jne 0x1021971d */
  if (!C.zf) goto L_1021971d;
  /* 10219741 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 10219744 push 2 */
  push32((uint32_t)(0x2u));
  /* 10219746 pop ebx */
  EBX = (pop32());
  /* 10219747 mov esi, edi */
  ESI = (EDI);
  /* 10219749 push 8 */
  push32((uint32_t)(0x8u));
  /* 1021974b pop ecx */
  ECX = (pop32());
  /* 1021974c shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_1021974f:;
  /* 1021974f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219751 jl 0x10219762 */
  if ((C.sf!=C.of)) goto L_10219762;
  /* 10219753 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10219756 mov eax, ecx */
  EAX = (ECX);
  /* 10219758 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021975a mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1021975d mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 10219760 jmp 0x10219769 */
  goto L_10219769;
L_10219762:;
  /* 10219762 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10219765 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_10219769:;
  /* 10219769 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1021976a sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021976d jns 0x1021974f */
  if (!C.sf) goto L_1021974f;
  /* 1021976f pop edi */
  EDI = (pop32());
  /* 10219770 pop esi */
  ESI = (pop32());
  /* 10219771 pop ebx */
  EBX = (pop32());
  /* 10219772 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10219773 ret  */
  ESPCHK(0x102196e7u, _esp0);
  ESP += 4; return;
}

/* FUN_10009774 @ 0x10219774 (364 bytes, 138 insns) */
void f_10219774(void) {
  FTRACE(0x10219774u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10219774 push ebp */
  push32((uint32_t)(EBP));
  /* 10219775 mov ebp, esp */
  EBP = (ESP);
  /* 10219777 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021977a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021977d push ebx */
  push32((uint32_t)(EBX));
  /* 1021977e push esi */
  push32((uint32_t)(ESI));
  /* 1021977f push edi */
  push32((uint32_t)(EDI));
  /* 10219780 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 10219784 mov ebx, ecx */
  EBX = (ECX);
  /* 10219786 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1021978c mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1021978f mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 10219792 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10219795 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 10219798 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 1021979b mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1021979e and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 102197a4 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102197aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102197ad shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 102197b0 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102197b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 102197b9 jne 0x102197e1 */
  if (!C.zf) goto L_102197e1;
  /* 102197bb lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102197be xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102197c0 push eax */
  push32((uint32_t)(EAX));
  /* 102197c1 call 0x102196cc */
  push32(0x102197c6u); f_102196cc();
  /* 102197c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102197c8 pop ecx */
  ECX = (pop32());
  /* 102197c9 jne 0x102198a0 */
  if (!C.zf) goto L_102198a0;
  /* 102197cf lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102197d2 push eax */
  push32((uint32_t)(EAX));
  /* 102197d3 call 0x102196c0 */
  push32(0x102197d8u); f_102196c0();
  /* 102197d8 pop ecx */
  ECX = (pop32());
L_102197d9:;
  /* 102197d9 push 2 */
  push32((uint32_t)(0x2u));
L_102197db:;
  /* 102197db pop eax */
  EAX = (pop32());
  /* 102197dc jmp 0x102198a2 */
  goto L_102198a2;
L_102197e1:;
  /* 102197e1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102197e4 push eax */
  push32((uint32_t)(EAX));
  /* 102197e5 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 102197e8 push eax */
  push32((uint32_t)(EAX));
  /* 102197e9 call 0x102196a5 */
  push32(0x102197eeu); f_102196a5();
  /* 102197ee push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 102197f1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102197f4 push eax */
  push32((uint32_t)(EAX));
  /* 102197f5 call 0x10219619 */
  push32(0x102197fau); f_10219619();
  /* 102197fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102197fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102197ff je 0x10219802 */
  if (C.zf) goto L_10219802;
  /* 10219801 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10219802:;
  /* 10219802 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 10219805 mov ecx, eax */
  ECX = (EAX);
  /* 10219807 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021980a cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021980c jge 0x1021981a */
  if ((C.sf==C.of)) goto L_1021981a;
  /* 1021980e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10219811 push eax */
  push32((uint32_t)(EAX));
  /* 10219812 call 0x102196c0 */
  push32(0x10219817u); f_102196c0();
  /* 10219817 pop ecx */
  ECX = (pop32());
  /* 10219818 jmp 0x10219856 */
  goto L_10219856;
L_1021981a:;
  /* 1021981a cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021981c jg 0x1021985d */
  if ((!C.zf&&C.sf==C.of)) goto L_1021985d;
  /* 1021981e sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10219820 mov esi, eax */
  ESI = (EAX);
  /* 10219822 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10219825 push eax */
  push32((uint32_t)(EAX));
  /* 10219826 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10219829 push eax */
  push32((uint32_t)(EAX));
  /* 1021982a call 0x102196a5 */
  push32(0x1021982fu); f_102196a5();
  /* 1021982f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10219832 push esi */
  push32((uint32_t)(ESI));
  /* 10219833 push eax */
  push32((uint32_t)(EAX));
  /* 10219834 call 0x102196e7 */
  push32(0x10219839u); f_102196e7();
  /* 10219839 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 1021983c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1021983f push eax */
  push32((uint32_t)(EAX));
  /* 10219840 call 0x10219619 */
  push32(0x10219845u); f_10219619();
  /* 10219845 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 10219848 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10219849 push eax */
  push32((uint32_t)(EAX));
  /* 1021984a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1021984d push eax */
  push32((uint32_t)(EAX));
  /* 1021984e call 0x102196e7 */
  push32(0x10219853u); f_102196e7();
  /* 10219853 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10219856:;
  /* 10219856 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10219858 jmp 0x102197d9 */
  goto L_102197d9;
L_1021985d:;
  /* 1021985d cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021985f jl 0x10219889 */
  if ((C.sf!=C.of)) goto L_10219889;
  /* 10219861 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10219864 push eax */
  push32((uint32_t)(EAX));
  /* 10219865 call 0x102196c0 */
  push32(0x1021986au); f_102196c0();
  /* 1021986a push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 1021986d or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 10219871 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10219874 push eax */
  push32((uint32_t)(EAX));
  /* 10219875 call 0x102196e7 */
  push32(0x1021987au); f_102196e7();
  /* 1021987a mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 1021987d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10219880 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10219882 push 1 */
  push32((uint32_t)(0x1u));
  /* 10219884 jmp 0x102197db */
  goto L_102197db;
L_10219889:;
  /* 10219889 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 1021988c mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 1021988f and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 10219893 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10219896 push eax */
  push32((uint32_t)(EAX));
  /* 10219897 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10219899 call 0x102196e7 */
  push32(0x1021989eu); f_102196e7();
  /* 1021989e pop ecx */
  ECX = (pop32());
  /* 1021989f pop ecx */
  ECX = (pop32());
L_102198a0:;
  /* 102198a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102198a2:;
  /* 102198a2 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 102198a4 pop ecx */
  ECX = (pop32());
  /* 102198a5 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102198a8 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 102198ab shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 102198ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102198b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102198b2 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102198b4 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 102198ba or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 102198bc or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 102198bf cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102198c2 jne 0x102198d1 */
  if (!C.zf) goto L_102198d1;
  /* 102198c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102198c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 102198ca mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 102198cd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 102198cf jmp 0x102198db */
  goto L_102198db;
L_102198d1:;
  /* 102198d1 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102198d4 jne 0x102198db */
  if (!C.zf) goto L_102198db;
  /* 102198d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102198d9 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_102198db:;
  /* 102198db pop edi */
  EDI = (pop32());
  /* 102198dc pop esi */
  ESI = (pop32());
  /* 102198dd pop ebx */
  EBX = (pop32());
  /* 102198de leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102198df ret  */
  ESPCHK(0x10219774u, _esp0);
  ESP += 4; return;
}

/* FUN_100098e0 @ 0x102198e0 (22 bytes, 6 insns) */
void f_102198e0(void) {
  FTRACE(0x102198e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102198e0 push 0x10220bf0 */
  push32((uint32_t)(0x10220bf0u));
  /* 102198e5 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 102198e9 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 102198ed call 0x10219774 */
  push32(0x102198f2u); f_10219774();
  /* 102198f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102198f5 ret  */
  ESPCHK(0x102198e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100098f6 @ 0x102198f6 (22 bytes, 6 insns) */
void f_102198f6(void) {
  FTRACE(0x102198f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102198f6 push 0x10220c08 */
  push32((uint32_t)(0x10220c08u));
  /* 102198fb push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 102198ff push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10219903 call 0x10219774 */
  push32(0x10219908u); f_10219774();
  /* 10219908 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021990b ret  */
  ESPCHK(0x102198f6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000990c @ 0x1021990c (45 bytes, 21 insns) */
void f_1021990c(void) {
  FTRACE(0x1021990cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021990c push ebp */
  push32((uint32_t)(EBP));
  /* 1021990d mov ebp, esp */
  EBP = (ESP);
  /* 1021990f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10219912 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10219914 push eax */
  push32((uint32_t)(EAX));
  /* 10219915 push eax */
  push32((uint32_t)(EAX));
  /* 10219916 push eax */
  push32((uint32_t)(EAX));
  /* 10219917 push eax */
  push32((uint32_t)(EAX));
  /* 10219918 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1021991b lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1021991e push eax */
  push32((uint32_t)(EAX));
  /* 1021991f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10219922 push eax */
  push32((uint32_t)(EAX));
  /* 10219923 call 0x1021c7b6 */
  push32(0x10219928u); f_1021c7b6();
  /* 10219928 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1021992b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1021992e push eax */
  push32((uint32_t)(EAX));
  /* 1021992f call 0x102198e0 */
  push32(0x10219934u); f_102198e0();
  /* 10219934 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10219937 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10219938 ret  */
  ESPCHK(0x1021990cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009939 @ 0x10219939 (45 bytes, 21 insns) */
void f_10219939(void) {
  FTRACE(0x10219939u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10219939 push ebp */
  push32((uint32_t)(EBP));
  /* 1021993a mov ebp, esp */
  EBP = (ESP);
  /* 1021993c sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021993f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10219941 push eax */
  push32((uint32_t)(EAX));
  /* 10219942 push eax */
  push32((uint32_t)(EAX));
  /* 10219943 push eax */
  push32((uint32_t)(EAX));
  /* 10219944 push eax */
  push32((uint32_t)(EAX));
  /* 10219945 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10219948 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1021994b push eax */
  push32((uint32_t)(EAX));
  /* 1021994c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1021994f push eax */
  push32((uint32_t)(EAX));
  /* 10219950 call 0x1021c7b6 */
  push32(0x10219955u); f_1021c7b6();
  /* 10219955 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10219958 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1021995b push eax */
  push32((uint32_t)(EAX));
  /* 1021995c call 0x102198f6 */
  push32(0x10219961u); f_102198f6();
  /* 10219961 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10219964 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10219965 ret  */
  ESPCHK(0x10219939u, _esp0);
  ESP += 4; return;
}

/* FUN_10009966 @ 0x10219966 (119 bytes, 57 insns) */
void f_10219966(void) {
  FTRACE(0x10219966u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10219966 push ebp */
  push32((uint32_t)(EBP));
  /* 10219967 mov ebp, esp */
  EBP = (ESP);
  /* 10219969 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1021996c push ebx */
  push32((uint32_t)(EBX));
  /* 1021996d mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 10219970 push esi */
  push32((uint32_t)(ESI));
  /* 10219971 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10219974 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 10219977 push edi */
  push32((uint32_t)(EDI));
  /* 10219978 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 1021997b mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 1021997e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10219980 mov eax, edi */
  EAX = (EDI);
  /* 10219982 jle 0x102199a3 */
  if ((C.zf||C.sf!=C.of)) goto L_102199a3;
  /* 10219984 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10219987 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10219989:;
  /* 10219989 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1021998b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1021998d je 0x10219995 */
  if (C.zf) goto L_10219995;
  /* 1021998f movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 10219992 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10219993 jmp 0x10219998 */
  goto L_10219998;
L_10219995:;
  /* 10219995 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10219997 pop edx */
  EDX = (pop32());
L_10219998:;
  /* 10219998 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1021999a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1021999b dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 1021999e jne 0x10219989 */
  if (!C.zf) goto L_10219989;
  /* 102199a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_102199a3:;
  /* 102199a3 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 102199a6 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102199a8 jl 0x102199bc */
  if ((C.sf!=C.of)) goto L_102199bc;
  /* 102199aa cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102199ad jl 0x102199bc */
  if ((C.sf!=C.of)) goto L_102199bc;
L_102199af:;
  /* 102199af dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102199b0 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102199b3 jne 0x102199ba */
  if (!C.zf) goto L_102199ba;
  /* 102199b5 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 102199b8 jmp 0x102199af */
  goto L_102199af;
L_102199ba:;
  /* 102199ba inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_102199bc:;
  /* 102199bc cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102199bf jne 0x102199c6 */
  if (!C.zf) goto L_102199c6;
  /* 102199c1 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 102199c4 jmp 0x102199d8 */
  goto L_102199d8;
L_102199c6:;
  /* 102199c6 push edi */
  push32((uint32_t)(EDI));
  /* 102199c7 call 0x10219040 */
  push32(0x102199ccu); f_10219040();
  /* 102199cc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102199cd push eax */
  push32((uint32_t)(EAX));
  /* 102199ce push edi */
  push32((uint32_t)(EDI));
  /* 102199cf push esi */
  push32((uint32_t)(ESI));
  /* 102199d0 call 0x10219c40 */
  push32(0x102199d5u); f_10219c40();
  /* 102199d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102199d8:;
  /* 102199d8 pop edi */
  EDI = (pop32());
  /* 102199d9 pop esi */
  ESI = (pop32());
  /* 102199da pop ebx */
  EBX = (pop32());
  /* 102199db pop ebp */
  EBP = (pop32());
  /* 102199dc ret  */
  ESPCHK(0x10219966u, _esp0);
  ESP += 4; return;
}

/* FUN_100099dd @ 0x102199dd (92 bytes, 41 insns) */
void f_102199dd(void) {
  FTRACE(0x102199ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102199dd push ebp */
  push32((uint32_t)(EBP));
  /* 102199de mov ebp, esp */
  EBP = (ESP);
  /* 102199e0 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102199e3 push esi */
  push32((uint32_t)(ESI));
  /* 102199e4 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 102199e7 push edi */
  push32((uint32_t)(EDI));
  /* 102199e8 push eax */
  push32((uint32_t)(EAX));
  /* 102199e9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102199ec push eax */
  push32((uint32_t)(EAX));
  /* 102199ed call 0x10219a39 */
  push32(0x102199f2u); f_10219a39();
  /* 102199f2 pop ecx */
  ECX = (pop32());
  /* 102199f3 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 102199f6 pop ecx */
  ECX = (pop32());
  /* 102199f7 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 102199fa push eax */
  push32((uint32_t)(EAX));
  /* 102199fb push 0 */
  push32((uint32_t)(0x0u));
  /* 102199fd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102199ff sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10219a02 mov edi, esp */
  EDI = (ESP);
  /* 10219a04 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10219a05 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10219a06 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 10219a08 call 0x1021cc87 */
  push32(0x10219a0du); f_1021cc87();
  /* 10219a0d mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10219a10 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 10219a13 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 10219a16 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 10219a1a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10219a1c movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 10219a20 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 10219a23 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 10219a26 push eax */
  push32((uint32_t)(EAX));
  /* 10219a27 push edi */
  push32((uint32_t)(EDI));
  /* 10219a28 call 0x10219af0 */
  push32(0x10219a2du); f_10219af0();
  /* 10219a2d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10219a30 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 10219a33 mov eax, esi */
  EAX = (ESI);
  /* 10219a35 pop edi */
  EDI = (pop32());
  /* 10219a36 pop esi */
  ESI = (pop32());
  /* 10219a37 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10219a38 ret  */
  ESPCHK(0x102199ddu, _esp0);
  ESP += 4; return;
}

/* FUN_10009a39 @ 0x10219a39 (182 bytes, 70 insns) */
void f_10219a39(void) {
  FTRACE(0x10219a39u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10219a39 push ebp */
  push32((uint32_t)(EBP));
  /* 10219a3a mov ebp, esp */
  EBP = (ESP);
  /* 10219a3c push ecx */
  push32((uint32_t)(ECX));
  /* 10219a3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10219a40 push ebx */
  push32((uint32_t)(EBX));
  /* 10219a41 push esi */
  push32((uint32_t)(ESI));
  /* 10219a42 push edi */
  push32((uint32_t)(EDI));
  /* 10219a43 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 10219a47 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 10219a4c mov ecx, eax */
  ECX = (EAX);
  /* 10219a4e and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10219a53 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10219a56 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10219a58 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10219a5b mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10219a5e mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 10219a60 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 10219a63 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10219a68 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10219a6d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10219a6f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 10219a72 je 0x10219a87 */
  if (C.zf) goto L_10219a87;
  /* 10219a74 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219a76 je 0x10219a80 */
  if (C.zf) goto L_10219a80;
  /* 10219a78 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 10219a7e jmp 0x10219aa8 */
  goto L_10219aa8;
L_10219a80:;
  /* 10219a80 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 10219a85 jmp 0x10219aa8 */
  goto L_10219aa8;
L_10219a87:;
  /* 10219a87 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10219a89 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219a8b jne 0x10219a9f */
  if (!C.zf) goto L_10219a9f;
  /* 10219a8d cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219a8f jne 0x10219a9f */
  if (!C.zf) goto L_10219a9f;
  /* 10219a91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10219a94 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 10219a97 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 10219a99 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 10219a9d jmp 0x10219aea */
  goto L_10219aea;
L_10219a9f:;
  /* 10219a9f lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 10219aa5 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_10219aa8:;
  /* 10219aa8 mov ecx, edx */
  ECX = (EDX);
  /* 10219aaa shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 10219aad shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 10219ab0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10219ab2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10219ab5 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 10219ab8 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 10219abb mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10219abe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10219ac0:;
  /* 10219ac0 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 10219ac2 jne 0x10219ae1 */
  if (!C.zf) goto L_10219ae1;
  /* 10219ac4 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10219ac6 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10219ac8 mov ebx, edx */
  EBX = (EDX);
  /* 10219aca shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 10219acd or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 10219acf lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 10219ad2 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10219ad4 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 10219ad7 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10219add mov ecx, ebx */
  ECX = (EBX);
  /* 10219adf jmp 0x10219ac0 */
  goto L_10219ac0;
L_10219ae1:;
  /* 10219ae1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10219ae4 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10219ae6 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_10219aea:;
  /* 10219aea pop edi */
  EDI = (pop32());
  /* 10219aeb pop esi */
  ESI = (pop32());
  /* 10219aec pop ebx */
  EBX = (pop32());
  /* 10219aed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10219aee ret  */
  ESPCHK(0x10219a39u, _esp0);
  ESP += 4; return;
}

/* FUN_10009af0 @ 0x10219af0 (7 bytes, 3 insns) */
void f_10219af0(void) {
  FTRACE(0x10219af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10219af0 push edi */
  push32((uint32_t)(EDI));
  /* 10219af1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10219af5 jmp 0x10219b61 */
  jmp_ind(0x10219b61u); return;
}

/* FUN_10009b00 @ 0x10219b00 (224 bytes, 84 insns) */
void f_10219b00(void) {
  FTRACE(0x10219b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10219b00 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10219b04 push edi */
  push32((uint32_t)(EDI));
  /* 10219b05 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10219b0b je 0x10219b1c */
  if (C.zf) goto L_10219b1c;
L_10219b0d:;
  /* 10219b0d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10219b0f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10219b10 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10219b12 je 0x10219b4f */
  if (C.zf) goto L_10219b4f;
  /* 10219b14 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10219b1a jne 0x10219b0d */
  if (!C.zf) goto L_10219b0d;
L_10219b1c:;
  /* 10219b1c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10219b1e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10219b23 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10219b25 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10219b28 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10219b2a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10219b2d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10219b32 je 0x10219b1c */
  if (C.zf) goto L_10219b1c;
  /* 10219b34 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10219b37 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10219b39 je 0x10219b5e */
  if (C.zf) goto L_10219b5e;
  /* 10219b3b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10219b3d je 0x10219b59 */
  if (C.zf) goto L_10219b59;
  /* 10219b3f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10219b44 je 0x10219b54 */
  if (C.zf) goto L_10219b54;
  /* 10219b46 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10219b4b je 0x10219b4f */
  if (C.zf) goto L_10219b4f;
  /* 10219b4d jmp 0x10219b1c */
  goto L_10219b1c;
L_10219b4f:;
  /* 10219b4f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10219b52 jmp 0x10219b61 */
  goto L_10219b61;
L_10219b54:;
  /* 10219b54 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10219b57 jmp 0x10219b61 */
  goto L_10219b61;
L_10219b59:;
  /* 10219b59 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10219b5c jmp 0x10219b61 */
  goto L_10219b61;
L_10219b5e:;
  /* 10219b5e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10219b61:;
  /* 10219b61 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10219b65 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10219b6b je 0x10219b86 */
  if (C.zf) goto L_10219b86;
L_10219b6d:;
  /* 10219b6d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10219b6f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10219b70 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10219b72 je 0x10219bd8 */
  if (C.zf) goto L_10219bd8;
  /* 10219b74 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10219b76 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10219b77 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10219b7d jne 0x10219b6d */
  if (!C.zf) goto L_10219b6d;
  /* 10219b7f jmp 0x10219b86 */
  goto L_10219b86;
L_10219b81:;
  /* 10219b81 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10219b83 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10219b86:;
  /* 10219b86 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10219b8b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10219b8d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10219b8f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10219b92 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10219b94 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10219b96 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10219b99 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10219b9e je 0x10219b81 */
  if (C.zf) goto L_10219b81;
  /* 10219ba0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10219ba2 je 0x10219bd8 */
  if (C.zf) goto L_10219bd8;
  /* 10219ba4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10219ba6 je 0x10219bcf */
  if (C.zf) goto L_10219bcf;
  /* 10219ba8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10219bae je 0x10219bc2 */
  if (C.zf) goto L_10219bc2;
  /* 10219bb0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10219bb6 je 0x10219bba */
  if (C.zf) goto L_10219bba;
  /* 10219bb8 jmp 0x10219b81 */
  goto L_10219b81;
L_10219bba:;
  /* 10219bba mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10219bbc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10219bc0 pop edi */
  EDI = (pop32());
  /* 10219bc1 ret  */
  ESPCHK(0x10219b00u, _esp0);
  ESP += 4; return;
L_10219bc2:;
  /* 10219bc2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10219bc5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10219bc9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10219bcd pop edi */
  EDI = (pop32());
  /* 10219bce ret  */
  ESPCHK(0x10219b00u, _esp0);
  ESP += 4; return;
L_10219bcf:;
  /* 10219bcf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10219bd2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10219bd6 pop edi */
  EDI = (pop32());
  /* 10219bd7 ret  */
  ESPCHK(0x10219b00u, _esp0);
  ESP += 4; return;
L_10219bd8:;
  /* 10219bd8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10219bda mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10219bde pop edi */
  EDI = (pop32());
  /* 10219bdf ret  */
  ESPCHK(0x10219b00u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10219be0 (88 bytes, 40 insns) */
void f_10219be0(void) {
  FTRACE(0x10219be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10219be0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10219be4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10219be8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10219bea je 0x10219c33 */
  if (C.zf) goto L_10219c33;
  /* 10219bec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10219bee mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10219bf2 push edi */
  push32((uint32_t)(EDI));
  /* 10219bf3 mov edi, ecx */
  EDI = (ECX);
  /* 10219bf5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219bf8 jb 0x10219c27 */
  if (C.cf) goto L_10219c27;
  /* 10219bfa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10219bfc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10219bff je 0x10219c09 */
  if (C.zf) goto L_10219c09;
  /* 10219c01 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10219c03:;
  /* 10219c03 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10219c05 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10219c06 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10219c07 jne 0x10219c03 */
  if (!C.zf) goto L_10219c03;
L_10219c09:;
  /* 10219c09 mov ecx, eax */
  ECX = (EAX);
  /* 10219c0b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10219c0e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10219c10 mov ecx, eax */
  ECX = (EAX);
  /* 10219c12 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10219c15 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10219c17 mov ecx, edx */
  ECX = (EDX);
  /* 10219c19 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10219c1c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10219c1f je 0x10219c27 */
  if (C.zf) goto L_10219c27;
  /* 10219c21 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10219c23 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10219c25 je 0x10219c2d */
  if (C.zf) goto L_10219c2d;
L_10219c27:;
  /* 10219c27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10219c29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10219c2a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10219c2b jne 0x10219c27 */
  if (!C.zf) goto L_10219c27;
L_10219c2d:;
  /* 10219c2d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10219c31 pop edi */
  EDI = (pop32());
  /* 10219c32 ret  */
  ESPCHK(0x10219be0u, _esp0);
  ESP += 4; return;
L_10219c33:;
  /* 10219c33 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10219c37 ret  */
  ESPCHK(0x10219be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c40 @ 0x10219c40 (664 bytes, 266 insns) [15 switch table(s)] */
void f_10219c40(void) {
  FTRACE(0x10219c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10219c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10219c41 mov ebp, esp */
  EBP = (ESP);
  /* 10219c43 push edi */
  push32((uint32_t)(EDI));
  /* 10219c44 push esi */
  push32((uint32_t)(ESI));
  /* 10219c45 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10219c48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10219c4b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10219c4e mov eax, ecx */
  EAX = (ECX);
  /* 10219c50 mov edx, ecx */
  EDX = (ECX);
  /* 10219c52 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10219c54 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219c56 jbe 0x10219c60 */
  if ((C.cf||C.zf)) goto L_10219c60;
  /* 10219c58 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219c5a jb 0x10219dd8 */
  if (C.cf) goto L_10219dd8;
L_10219c60:;
  /* 10219c60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10219c66 jne 0x10219c7c */
  if (!C.zf) goto L_10219c7c;
  /* 10219c68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10219c6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10219c6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219c71 jb 0x10219c9c */
  if (C.cf) goto L_10219c9c;
  /* 10219c73 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10219c75 jmp dword ptr [edx*4 + 0x10219d88] */
  switch (EDX) {
    case 0: goto L_10219d98;
    case 1: goto L_10219da0;
    case 2: goto L_10219dac;
    case 3: goto L_10219dc0;
    default: x86_unimpl("switch@0x10219c75 out of table"); return;
  }
L_10219c7c:;
  /* 10219c7c mov eax, edi */
  EAX = (EDI);
  /* 10219c7e mov edx, 3 */
  EDX = (0x3u);
  /* 10219c83 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10219c86 jb 0x10219c94 */
  if (C.cf) goto L_10219c94;
  /* 10219c88 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10219c8b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10219c8d jmp dword ptr [eax*4 + 0x10219ca0] */
  switch (EAX) {
    case 1: goto L_10219cb0;
    case 2: goto L_10219cdc;
    case 3: goto L_10219d00;
    default: x86_unimpl("switch@0x10219c8d out of table"); return;
  }
L_10219c94:;
  /* 10219c94 jmp dword ptr [ecx*4 + 0x10219d98] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10219d98)))); return;
  /* 10219c9b nop  */
  /* nop */
L_10219c9c:;
  /* 10219c9c jmp dword ptr [ecx*4 + 0x10219d1c] */
  switch (ECX) {
    case 0: goto L_10219d7f;
    case 1: goto L_10219d6c;
    case 2: goto L_10219d64;
    case 3: goto L_10219d5c;
    case 4: goto L_10219d54;
    case 5: goto L_10219d4c;
    case 6: goto L_10219d44;
    case 7: goto L_10219d3c;
    default: x86_unimpl("switch@0x10219c9c out of table"); return;
  }
  /* 10219ca3 nop  */
  /* nop */
L_10219cb0:;
  /* 10219cb0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10219cb2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10219cb4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10219cb6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10219cb9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10219cbc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10219cbf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10219cc2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10219cc5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10219cc8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10219ccb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219cce jb 0x10219c9c */
  if (C.cf) goto L_10219c9c;
  /* 10219cd0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10219cd2 jmp dword ptr [edx*4 + 0x10219d88] */
  switch (EDX) {
    case 0: goto L_10219d98;
    case 1: goto L_10219da0;
    case 2: goto L_10219dac;
    case 3: goto L_10219dc0;
    default: x86_unimpl("switch@0x10219cd2 out of table"); return;
  }
  /* 10219cd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10219cdc:;
  /* 10219cdc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10219cde mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10219ce0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10219ce2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10219ce5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10219ce8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10219ceb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10219cee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10219cf1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219cf4 jb 0x10219c9c */
  if (C.cf) goto L_10219c9c;
  /* 10219cf6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10219cf8 jmp dword ptr [edx*4 + 0x10219d88] */
  switch (EDX) {
    case 0: goto L_10219d98;
    case 1: goto L_10219da0;
    case 2: goto L_10219dac;
    case 3: goto L_10219dc0;
    default: x86_unimpl("switch@0x10219cf8 out of table"); return;
  }
  /* 10219cff nop  */
  /* nop */
L_10219d00:;
  /* 10219d00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10219d02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10219d04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10219d06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10219d07 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10219d0a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10219d0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219d0e jb 0x10219c9c */
  if (C.cf) goto L_10219c9c;
  /* 10219d10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10219d12 jmp dword ptr [edx*4 + 0x10219d88] */
  switch (EDX) {
    case 0: goto L_10219d98;
    case 1: goto L_10219da0;
    case 2: goto L_10219dac;
    case 3: goto L_10219dc0;
    default: x86_unimpl("switch@0x10219d12 out of table"); return;
  }
  /* 10219d19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10219d3c:;
  /* 10219d3c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10219d40 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10219d44:;
  /* 10219d44 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10219d48 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10219d4c:;
  /* 10219d4c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10219d50 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10219d54:;
  /* 10219d54 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10219d58 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10219d5c:;
  /* 10219d5c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10219d60 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10219d64:;
  /* 10219d64 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10219d68 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10219d6c:;
  /* 10219d6c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10219d70 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10219d74 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10219d7b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10219d7d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10219d7f:;
  /* 10219d7f jmp dword ptr [edx*4 + 0x10219d88] */
  switch (EDX) {
    case 0: goto L_10219d98;
    case 1: goto L_10219da0;
    case 2: goto L_10219dac;
    case 3: goto L_10219dc0;
    default: x86_unimpl("switch@0x10219d7f out of table"); return;
  }
  /* 10219d86 mov edi, edi */
  EDI = (EDI);
L_10219d98:;
  /* 10219d98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10219d9b pop esi */
  ESI = (pop32());
  /* 10219d9c pop edi */
  EDI = (pop32());
  /* 10219d9d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10219d9e ret  */
  ESPCHK(0x10219c40u, _esp0);
  ESP += 4; return;
  /* 10219d9f nop  */
  /* nop */
L_10219da0:;
  /* 10219da0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10219da2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10219da4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10219da7 pop esi */
  ESI = (pop32());
  /* 10219da8 pop edi */
  EDI = (pop32());
  /* 10219da9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10219daa ret  */
  ESPCHK(0x10219c40u, _esp0);
  ESP += 4; return;
  /* 10219dab nop  */
  /* nop */
L_10219dac:;
  /* 10219dac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10219dae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10219db0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10219db3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10219db6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10219db9 pop esi */
  ESI = (pop32());
  /* 10219dba pop edi */
  EDI = (pop32());
  /* 10219dbb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10219dbc ret  */
  ESPCHK(0x10219c40u, _esp0);
  ESP += 4; return;
  /* 10219dbd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10219dc0:;
  /* 10219dc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10219dc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10219dc4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10219dc7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10219dca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10219dcd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10219dd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10219dd3 pop esi */
  ESI = (pop32());
  /* 10219dd4 pop edi */
  EDI = (pop32());
  /* 10219dd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10219dd6 ret  */
  ESPCHK(0x10219c40u, _esp0);
  ESP += 4; return;
  /* 10219dd7 nop  */
  /* nop */
L_10219dd8:;
  /* 10219dd8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10219ddc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10219de0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10219de6 jne 0x10219e0c */
  if (!C.zf) goto L_10219e0c;
  /* 10219de8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10219deb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10219dee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219df1 jb 0x10219e00 */
  if (C.cf) goto L_10219e00;
  /* 10219df3 std  */
  C.df=1;
  /* 10219df4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10219df6 cld  */
  C.df=0;
  /* 10219df7 jmp dword ptr [edx*4 + 0x10219f20] */
  switch (EDX) {
    case 0: goto L_10219f30;
    case 1: goto L_10219f38;
    case 2: goto L_10219f48;
    case 3: goto L_10219f5c;
    default: x86_unimpl("switch@0x10219df7 out of table"); return;
  }
  /* 10219dfe mov edi, edi */
  EDI = (EDI);
L_10219e00:;
  /* 10219e00 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10219e02 jmp dword ptr [ecx*4 + 0x10219ed0] */
  switch (ECX) {
    case 0: goto L_10219f17;
    default: x86_unimpl("switch@0x10219e02 out of table"); return;
  }
  /* 10219e09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10219e0c:;
  /* 10219e0c mov eax, edi */
  EAX = (EDI);
  /* 10219e0e mov edx, 3 */
  EDX = (0x3u);
  /* 10219e13 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219e16 jb 0x10219e24 */
  if (C.cf) goto L_10219e24;
  /* 10219e18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10219e1b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10219e1d jmp dword ptr [eax*4 + 0x10219e28] */
  switch (EAX) {
    case 1: goto L_10219e38;
    case 2: goto L_10219e58;
    case 3: goto L_10219e80;
    default: x86_unimpl("switch@0x10219e1d out of table"); return;
  }
L_10219e24:;
  /* 10219e24 jmp dword ptr [ecx*4 + 0x10219f20] */
  switch (ECX) {
    case 0: goto L_10219f30;
    case 1: goto L_10219f38;
    case 2: goto L_10219f48;
    case 3: goto L_10219f5c;
    default: x86_unimpl("switch@0x10219e24 out of table"); return;
  }
  /* 10219e2b nop  */
  /* nop */
L_10219e38:;
  /* 10219e38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10219e3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10219e3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10219e40 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10219e41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10219e44 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10219e45 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219e48 jb 0x10219e00 */
  if (C.cf) goto L_10219e00;
  /* 10219e4a std  */
  C.df=1;
  /* 10219e4b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10219e4d cld  */
  C.df=0;
  /* 10219e4e jmp dword ptr [edx*4 + 0x10219f20] */
  switch (EDX) {
    case 0: goto L_10219f30;
    case 1: goto L_10219f38;
    case 2: goto L_10219f48;
    case 3: goto L_10219f5c;
    default: x86_unimpl("switch@0x10219e4e out of table"); return;
  }
  /* 10219e55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10219e58:;
  /* 10219e58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10219e5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10219e5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10219e60 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10219e63 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10219e66 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10219e69 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10219e6c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10219e6f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219e72 jb 0x10219e00 */
  if (C.cf) goto L_10219e00;
  /* 10219e74 std  */
  C.df=1;
  /* 10219e75 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10219e77 cld  */
  C.df=0;
  /* 10219e78 jmp dword ptr [edx*4 + 0x10219f20] */
  switch (EDX) {
    case 0: goto L_10219f30;
    case 1: goto L_10219f38;
    case 2: goto L_10219f48;
    case 3: goto L_10219f5c;
    default: x86_unimpl("switch@0x10219e78 out of table"); return;
  }
  /* 10219e7f nop  */
  /* nop */
L_10219e80:;
  /* 10219e80 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10219e83 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10219e85 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10219e88 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10219e8b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10219e8e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10219e91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10219e94 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10219e97 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10219e9a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10219e9d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219ea0 jb 0x10219e00 */
  if (C.cf) goto L_10219e00;
  /* 10219ea6 std  */
  C.df=1;
  /* 10219ea7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10219ea9 cld  */
  C.df=0;
  /* 10219eaa jmp dword ptr [edx*4 + 0x10219f20] */
  switch (EDX) {
    case 0: goto L_10219f30;
    case 1: goto L_10219f38;
    case 2: goto L_10219f48;
    case 3: goto L_10219f5c;
    default: x86_unimpl("switch@0x10219eaa out of table"); return;
  }
  /* 10219eb1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10219eb4 aam 0x9e */
  x86_unimpl("aam @ 0x10219eb4");
  /* 10219eb6 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10219eb8 fcomp qword ptr [esi - 0x611befdf] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ESI + -0x611befdf)));
  (void)fpu_pop();
  /* 10219ebe and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10219ec0 in al, dx */
  x86_unimpl("in @ 0x10219ec0");
  /* 10219ec1 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10219ec2 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10219ec4 hlt  */
  x86_unimpl("hlt @ 0x10219ec4");
  /* 10219ec5 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10219ec6 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10219ec8 cld  */
  C.df=0;
  /* 10219ec9 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10219eca and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10219ecc add al, 0x9f */
  { uint32_t _a=(AL),_b=(0x9fu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10219ece and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10219ed4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10219ed8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10219edc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10219ee0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10219ee4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10219ee8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10219eec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10219ef0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10219ef4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10219ef8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10219efc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10219f00 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10219f04 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10219f08 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10219f0c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10219f13 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10219f15 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10219f17:;
  /* 10219f17 jmp dword ptr [edx*4 + 0x10219f20] */
  switch (EDX) {
    case 0: goto L_10219f30;
    case 1: goto L_10219f38;
    case 2: goto L_10219f48;
    case 3: goto L_10219f5c;
    default: x86_unimpl("switch@0x10219f17 out of table"); return;
  }
  /* 10219f1e mov edi, edi */
  EDI = (EDI);
L_10219f30:;
  /* 10219f30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10219f33 pop esi */
  ESI = (pop32());
  /* 10219f34 pop edi */
  EDI = (pop32());
  /* 10219f35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10219f36 ret  */
  ESPCHK(0x10219c40u, _esp0);
  ESP += 4; return;
  /* 10219f37 nop  */
  /* nop */
L_10219f38:;
  /* 10219f38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10219f3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10219f3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10219f41 pop esi */
  ESI = (pop32());
  /* 10219f42 pop edi */
  EDI = (pop32());
  /* 10219f43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10219f44 ret  */
  ESPCHK(0x10219c40u, _esp0);
  ESP += 4; return;
  /* 10219f45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10219f48:;
  /* 10219f48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10219f4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10219f4e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10219f51 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10219f54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10219f57 pop esi */
  ESI = (pop32());
  /* 10219f58 pop edi */
  EDI = (pop32());
  /* 10219f59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10219f5a ret  */
  ESPCHK(0x10219c40u, _esp0);
  ESP += 4; return;
  /* 10219f5b nop  */
  /* nop */
L_10219f5c:;
  /* 10219f5c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10219f5f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10219f62 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10219f65 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10219f68 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10219f6b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10219f6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10219f71 pop esi */
  ESI = (pop32());
  /* 10219f72 pop edi */
  EDI = (pop32());
  /* 10219f73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10219f74 ret  */
  ESPCHK(0x10219c40u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10219f75 (9 bytes, 4 insns) */
void f_10219f75(void) {
  FTRACE(0x10219f75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10219f75 push 2 */
  push32((uint32_t)(0x2u));
  /* 10219f77 call 0x102170b1 */
  push32(0x10219f7cu); f_102170b1();
  /* 10219f7c pop ecx */
  ECX = (pop32());
  /* 10219f7d ret  */
  ESPCHK(0x10219f75u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f7e @ 0x10219f7e (41 bytes, 12 insns) */
void f_10219f7e(void) {
  FTRACE(0x10219f7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10219f7e push esi */
  push32((uint32_t)(ESI));
  /* 10219f7f mov esi, dword ptr [0x1021e094] */
  ESI = (r32((uint32_t)(0x1021e094)));
  /* 10219f85 push dword ptr [0x10220c64] */
  push32((uint32_t)(r32((uint32_t)(0x10220c64))));
  /* 10219f8b call esi */
  call_ind((uint32_t)(ESI), 0x10219f8du);
  /* 10219f8d push dword ptr [0x10220c54] */
  push32((uint32_t)(r32((uint32_t)(0x10220c54))));
  /* 10219f93 call esi */
  call_ind((uint32_t)(ESI), 0x10219f95u);
  /* 10219f95 push dword ptr [0x10220c44] */
  push32((uint32_t)(r32((uint32_t)(0x10220c44))));
  /* 10219f9b call esi */
  call_ind((uint32_t)(ESI), 0x10219f9du);
  /* 10219f9d push dword ptr [0x10220c24] */
  push32((uint32_t)(r32((uint32_t)(0x10220c24))));
  /* 10219fa3 call esi */
  call_ind((uint32_t)(ESI), 0x10219fa5u);
  /* 10219fa5 pop esi */
  ESI = (pop32());
  /* 10219fa6 ret  */
  ESPCHK(0x10219f7eu, _esp0);
  ESP += 4; return;
}

/* FUN_10009fa7 @ 0x10219fa7 (108 bytes, 34 insns) */
void f_10219fa7(void) {
  FTRACE(0x10219fa7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10219fa7 push esi */
  push32((uint32_t)(ESI));
  /* 10219fa8 push edi */
  push32((uint32_t)(EDI));
  /* 10219fa9 mov edi, dword ptr [0x1021e050] */
  EDI = (r32((uint32_t)(0x1021e050)));
  /* 10219faf mov esi, 0x10220c20 */
  ESI = (0x10220c20u);
L_10219fb4:;
  /* 10219fb4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10219fb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10219fb8 je 0x10219fe5 */
  if (C.zf) goto L_10219fe5;
  /* 10219fba cmp esi, 0x10220c64 */
  { uint32_t _a=(ESI),_b=(0x10220c64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219fc0 je 0x10219fe5 */
  if (C.zf) goto L_10219fe5;
  /* 10219fc2 cmp esi, 0x10220c54 */
  { uint32_t _a=(ESI),_b=(0x10220c54u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219fc8 je 0x10219fe5 */
  if (C.zf) goto L_10219fe5;
  /* 10219fca cmp esi, 0x10220c44 */
  { uint32_t _a=(ESI),_b=(0x10220c44u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219fd0 je 0x10219fe5 */
  if (C.zf) goto L_10219fe5;
  /* 10219fd2 cmp esi, 0x10220c24 */
  { uint32_t _a=(ESI),_b=(0x10220c24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219fd8 je 0x10219fe5 */
  if (C.zf) goto L_10219fe5;
  /* 10219fda push eax */
  push32((uint32_t)(EAX));
  /* 10219fdb call edi */
  call_ind((uint32_t)(EDI), 0x10219fddu);
  /* 10219fdd push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10219fdf call 0x1021a1c6 */
  push32(0x10219fe4u); f_1021a1c6();
  /* 10219fe4 pop ecx */
  ECX = (pop32());
L_10219fe5:;
  /* 10219fe5 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10219fe8 cmp esi, 0x10220ce0 */
  { uint32_t _a=(ESI),_b=(0x10220ce0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219fee jl 0x10219fb4 */
  if ((C.sf!=C.of)) goto L_10219fb4;
  /* 10219ff0 push dword ptr [0x10220c44] */
  push32((uint32_t)(r32((uint32_t)(0x10220c44))));
  /* 10219ff6 call edi */
  call_ind((uint32_t)(EDI), 0x10219ff8u);
  /* 10219ff8 push dword ptr [0x10220c54] */
  push32((uint32_t)(r32((uint32_t)(0x10220c54))));
  /* 10219ffe call edi */
  call_ind((uint32_t)(EDI), 0x1021a000u);
  /* 1021a000 push dword ptr [0x10220c64] */
  push32((uint32_t)(r32((uint32_t)(0x10220c64))));
  /* 1021a006 call edi */
  call_ind((uint32_t)(EDI), 0x1021a008u);
  /* 1021a008 push dword ptr [0x10220c24] */
  push32((uint32_t)(r32((uint32_t)(0x10220c24))));
  /* 1021a00e call edi */
  call_ind((uint32_t)(EDI), 0x1021a010u);
  /* 1021a010 pop edi */
  EDI = (pop32());
  /* 1021a011 pop esi */
  ESI = (pop32());
  /* 1021a012 ret  */
  ESPCHK(0x10219fa7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a013 @ 0x1021a013 (97 bytes, 37 insns) */
void f_1021a013(void) {
  FTRACE(0x1021a013u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021a013 push ebp */
  push32((uint32_t)(EBP));
  /* 1021a014 mov ebp, esp */
  EBP = (ESP);
  /* 1021a016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021a019 push esi */
  push32((uint32_t)(ESI));
  /* 1021a01a cmp dword ptr [eax*4 + 0x10220c20], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10220c20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a022 lea esi, [eax*4 + 0x10220c20] */
  ESI = ((uint32_t)(EAX*4 + 0x10220c20));
  /* 1021a029 jne 0x1021a069 */
  if (!C.zf) goto L_1021a069;
  /* 1021a02b push edi */
  push32((uint32_t)(EDI));
  /* 1021a02c push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1021a02e call 0x1021a2af */
  push32(0x1021a033u); f_1021a2af();
  /* 1021a033 mov edi, eax */
  EDI = (EAX);
  /* 1021a035 pop ecx */
  ECX = (pop32());
  /* 1021a036 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1021a038 jne 0x1021a042 */
  if (!C.zf) goto L_1021a042;
  /* 1021a03a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1021a03c call 0x102170b1 */
  push32(0x1021a041u); f_102170b1();
  /* 1021a041 pop ecx */
  ECX = (pop32());
L_1021a042:;
  /* 1021a042 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1021a044 call 0x1021a013 */
  push32(0x1021a049u); f_1021a013();
  /* 1021a049 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a04c pop ecx */
  ECX = (pop32());
  /* 1021a04d push edi */
  push32((uint32_t)(EDI));
  /* 1021a04e jne 0x1021a05a */
  if (!C.zf) goto L_1021a05a;
  /* 1021a050 call dword ptr [0x1021e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e094))), 0x1021a056u);
  /* 1021a056 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1021a058 jmp 0x1021a060 */
  goto L_1021a060;
L_1021a05a:;
  /* 1021a05a call 0x1021a1c6 */
  push32(0x1021a05fu); f_1021a1c6();
  /* 1021a05f pop ecx */
  ECX = (pop32());
L_1021a060:;
  /* 1021a060 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1021a062 call 0x1021a074 */
  push32(0x1021a067u); f_1021a074();
  /* 1021a067 pop ecx */
  ECX = (pop32());
  /* 1021a068 pop edi */
  EDI = (pop32());
L_1021a069:;
  /* 1021a069 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1021a06b call dword ptr [0x1021e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e00c))), 0x1021a071u);
  /* 1021a071 pop esi */
  ESI = (pop32());
  /* 1021a072 pop ebp */
  EBP = (pop32());
  /* 1021a073 ret  */
  ESPCHK(0x1021a013u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a074 @ 0x1021a074 (21 bytes, 7 insns) */
void f_1021a074(void) {
  FTRACE(0x1021a074u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021a074 push ebp */
  push32((uint32_t)(EBP));
  /* 1021a075 mov ebp, esp */
  EBP = (ESP);
  /* 1021a077 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021a07a push dword ptr [eax*4 + 0x10220c20] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10220c20))));
  /* 1021a081 call dword ptr [0x1021e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e008))), 0x1021a087u);
  /* 1021a087 pop ebp */
  EBP = (pop32());
  /* 1021a088 ret  */
  ESPCHK(0x1021a074u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a089 @ 0x1021a089 (289 bytes, 98 insns) */
void f_1021a089(void) {
  FTRACE(0x1021a089u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021a089 push ebp */
  push32((uint32_t)(EBP));
  /* 1021a08a mov ebp, esp */
  EBP = (ESP);
  /* 1021a08c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1021a08e push 0x1021e4d0 */
  push32((uint32_t)(0x1021e4d0u));
  /* 1021a093 push 0x1021d030 */
  push32((uint32_t)(0x1021d030u));
  /* 1021a098 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1021a09e push eax */
  push32((uint32_t)(EAX));
  /* 1021a09f mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1021a0a6 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021a0a9 push ebx */
  push32((uint32_t)(EBX));
  /* 1021a0aa push esi */
  push32((uint32_t)(ESI));
  /* 1021a0ab push edi */
  push32((uint32_t)(EDI));
  /* 1021a0ac mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1021a0af imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1021a0b3 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1021a0b6 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 1021a0b9 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a0bc ja 0x1021a0d2 */
  if ((!C.cf&&!C.zf)) goto L_1021a0d2;
  /* 1021a0be xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1021a0c0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a0c2 jne 0x1021a0c7 */
  if (!C.zf) goto L_1021a0c7;
  /* 1021a0c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021a0c6 pop esi */
  ESI = (pop32());
L_1021a0c7:;
  /* 1021a0c7 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021a0ca and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1021a0cd mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1021a0d0 jmp 0x1021a0d4 */
  goto L_1021a0d4;
L_1021a0d2:;
  /* 1021a0d2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1021a0d4:;
  /* 1021a0d4 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 1021a0d7 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a0da ja 0x1021a188 */
  if ((!C.cf&&!C.zf)) goto L_1021a188;
  /* 1021a0e0 mov eax, dword ptr [0x10227c28] */
  EAX = (r32((uint32_t)(0x10227c28)));
  /* 1021a0e5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a0e8 jne 0x1021a12b */
  if (!C.zf) goto L_1021a12b;
  /* 1021a0ea mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 1021a0ed cmp edi, dword ptr [0x102269d0] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x102269d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a0f3 ja 0x1021a171 */
  if ((!C.cf&&!C.zf)) goto L_1021a171;
  /* 1021a0f5 push 9 */
  push32((uint32_t)(0x9u));
  /* 1021a0f7 call 0x1021a013 */
  push32(0x1021a0fcu); f_1021a013();
  /* 1021a0fc pop ecx */
  ECX = (pop32());
  /* 1021a0fd mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1021a100 push edi */
  push32((uint32_t)(EDI));
  /* 1021a101 call 0x1021b29b */
  push32(0x1021a106u); f_1021b29b();
  /* 1021a106 pop ecx */
  ECX = (pop32());
  /* 1021a107 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1021a10a or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1021a10e call 0x1021a122 */
  push32(0x1021a113u); f_1021a122();
  /* 1021a113 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a116 je 0x1021a176 */
  if (C.zf) goto L_1021a176;
  /* 1021a118 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1021a11b jmp 0x1021a165 */
  goto L_1021a165;
  /* 1021a11d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1021a11f mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1021a122 push 9 */
  push32((uint32_t)(0x9u));
  /* 1021a124 call 0x1021a074 */
  push32(0x1021a129u); f_1021a074();
  /* 1021a129 pop ecx */
  ECX = (pop32());
  /* 1021a12a ret  */
  ESPCHK(0x1021a089u, _esp0);
  ESP += 4; return;
L_1021a12b:;
  /* 1021a12b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a12e jne 0x1021a171 */
  if (!C.zf) goto L_1021a171;
  /* 1021a130 cmp esi, dword ptr [0x10222e84] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10222e84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a136 ja 0x1021a171 */
  if ((!C.cf&&!C.zf)) goto L_1021a171;
  /* 1021a138 push 9 */
  push32((uint32_t)(0x9u));
  /* 1021a13a call 0x1021a013 */
  push32(0x1021a13fu); f_1021a013();
  /* 1021a13f pop ecx */
  ECX = (pop32());
  /* 1021a140 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1021a147 mov eax, esi */
  EAX = (ESI);
  /* 1021a149 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1021a14c push eax */
  push32((uint32_t)(EAX));
  /* 1021a14d call 0x1021ba48 */
  push32(0x1021a152u); f_1021ba48();
  /* 1021a152 pop ecx */
  ECX = (pop32());
  /* 1021a153 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1021a156 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1021a15a call 0x1021a1ab */
  push32(0x1021a15fu); f_1021a1ab();
  /* 1021a15f cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a162 je 0x1021a176 */
  if (C.zf) goto L_1021a176;
  /* 1021a164 push esi */
  push32((uint32_t)(ESI));
L_1021a165:;
  /* 1021a165 push ebx */
  push32((uint32_t)(EBX));
  /* 1021a166 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1021a169 call 0x10219be0 */
  push32(0x1021a16eu); f_10219be0();
  /* 1021a16e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021a171:;
  /* 1021a171 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a174 jne 0x1021a1b4 */
  if (!C.zf) { jmp_ind(0x1021a1b4u); return; }
L_1021a176:;
  /* 1021a176 push esi */
  push32((uint32_t)(ESI));
  /* 1021a177 push 8 */
  push32((uint32_t)(0x8u));
  /* 1021a179 push dword ptr [0x10227c24] */
  push32((uint32_t)(r32((uint32_t)(0x10227c24))));
  /* 1021a17f call dword ptr [0x1021e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e098))), 0x1021a185u);
  /* 1021a185 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1021a188:;
  /* 1021a188 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a18b jne 0x1021a1b4 */
  if (!C.zf) { jmp_ind(0x1021a1b4u); return; }
  /* 1021a18d cmp dword ptr [0x10226870], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10226870))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a193 je 0x1021a1b4 */
  if (C.zf) { jmp_ind(0x1021a1b4u); return; }
  /* 1021a195 push esi */
  push32((uint32_t)(ESI));
  /* 1021a196 call 0x1021cf1a */
  push32(0x1021a19bu); f_1021cf1a();
  /* 1021a19b pop ecx */
  ECX = (pop32());
  /* 1021a19c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021a19e jne 0x1021a0d4 */
  if (!C.zf) goto L_1021a0d4;
  /* 1021a1a4 jmp 0x1021a1b7 */
  jmp_ind(0x1021a1b7u); return;
  /* 1021a1a6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_1000a122 @ 0x1021a122 (9 bytes, 4 insns) */
void f_1021a122(void) {
  FTRACE(0x1021a122u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021a122 push 9 */
  push32((uint32_t)(0x9u));
  /* 1021a124 call 0x1021a074 */
  push32(0x1021a129u); f_1021a074();
  /* 1021a129 pop ecx */
  ECX = (pop32());
  /* 1021a12a ret  */
  ESPCHK(0x1021a122u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1ab @ 0x1021a1ab (9 bytes, 4 insns) */
void f_1021a1ab(void) {
  FTRACE(0x1021a1abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021a1ab push 9 */
  push32((uint32_t)(0x9u));
  /* 1021a1ad call 0x1021a074 */
  push32(0x1021a1b2u); f_1021a074();
  /* 1021a1b2 pop ecx */
  ECX = (pop32());
  /* 1021a1b3 ret  */
  ESPCHK(0x1021a1abu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1c6 @ 0x1021a1c6 (215 bytes, 75 insns) */
void f_1021a1c6(void) {
  FTRACE(0x1021a1c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021a1c6 push ebp */
  push32((uint32_t)(EBP));
  /* 1021a1c7 mov ebp, esp */
  EBP = (ESP);
  /* 1021a1c9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1021a1cb push 0x1021e4e8 */
  push32((uint32_t)(0x1021e4e8u));
  /* 1021a1d0 push 0x1021d030 */
  push32((uint32_t)(0x1021d030u));
  /* 1021a1d5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1021a1db push eax */
  push32((uint32_t)(EAX));
  /* 1021a1dc mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1021a1e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021a1e6 push ebx */
  push32((uint32_t)(EBX));
  /* 1021a1e7 push esi */
  push32((uint32_t)(ESI));
  /* 1021a1e8 push edi */
  push32((uint32_t)(EDI));
  /* 1021a1e9 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1021a1ec test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1021a1ee je 0x1021a2a0 */
  if (C.zf) { jmp_ind(0x1021a2a0u); return; }
  /* 1021a1f4 mov eax, dword ptr [0x10227c28] */
  EAX = (r32((uint32_t)(0x10227c28)));
  /* 1021a1f9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a1fc jne 0x1021a239 */
  if (!C.zf) goto L_1021a239;
  /* 1021a1fe push 9 */
  push32((uint32_t)(0x9u));
  /* 1021a200 call 0x1021a013 */
  push32(0x1021a205u); f_1021a013();
  /* 1021a205 pop ecx */
  ECX = (pop32());
  /* 1021a206 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1021a20a push esi */
  push32((uint32_t)(ESI));
  /* 1021a20b call 0x1021af47 */
  push32(0x1021a210u); f_1021af47();
  /* 1021a210 pop ecx */
  ECX = (pop32());
  /* 1021a211 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1021a214 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021a216 je 0x1021a221 */
  if (C.zf) goto L_1021a221;
  /* 1021a218 push esi */
  push32((uint32_t)(ESI));
  /* 1021a219 push eax */
  push32((uint32_t)(EAX));
  /* 1021a21a call 0x1021af72 */
  push32(0x1021a21fu); f_1021af72();
  /* 1021a21f pop ecx */
  ECX = (pop32());
  /* 1021a220 pop ecx */
  ECX = (pop32());
L_1021a221:;
  /* 1021a221 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1021a225 call 0x1021a230 */
  push32(0x1021a22au); f_1021a230();
  /* 1021a22a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a22e jmp 0x1021a281 */
  goto L_1021a281;
  /* 1021a230 push 9 */
  push32((uint32_t)(0x9u));
  /* 1021a232 call 0x1021a074 */
  push32(0x1021a237u); f_1021a074();
  /* 1021a237 pop ecx */
  ECX = (pop32());
  /* 1021a238 ret  */
  ESPCHK(0x1021a1c6u, _esp0);
  ESP += 4; return;
L_1021a239:;
  /* 1021a239 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a23c jne 0x1021a291 */
  if (!C.zf) goto L_1021a291;
  /* 1021a23e push 9 */
  push32((uint32_t)(0x9u));
  /* 1021a240 call 0x1021a013 */
  push32(0x1021a245u); f_1021a013();
  /* 1021a245 pop ecx */
  ECX = (pop32());
  /* 1021a246 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1021a24d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1021a250 push eax */
  push32((uint32_t)(EAX));
  /* 1021a251 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 1021a254 push eax */
  push32((uint32_t)(EAX));
  /* 1021a255 push esi */
  push32((uint32_t)(ESI));
  /* 1021a256 call 0x1021b9ac */
  push32(0x1021a25bu); f_1021b9ac();
  /* 1021a25b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021a25e mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1021a261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021a263 je 0x1021a274 */
  if (C.zf) goto L_1021a274;
  /* 1021a265 push eax */
  push32((uint32_t)(EAX));
  /* 1021a266 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1021a269 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 1021a26c call 0x1021ba03 */
  push32(0x1021a271u); f_1021ba03();
  /* 1021a271 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021a274:;
  /* 1021a274 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1021a278 call 0x1021a288 */
  push32(0x1021a27du); f_1021a288();
  /* 1021a27d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1021a281:;
  /* 1021a281 jne 0x1021a2a0 */
  if (!C.zf) { jmp_ind(0x1021a2a0u); return; }
  /* 1021a283 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1021a286 jmp 0x1021a292 */
  goto L_1021a292;
  /* 1021a288 push 9 */
  push32((uint32_t)(0x9u));
  /* 1021a28a call 0x1021a074 */
  push32(0x1021a28fu); f_1021a074();
  /* 1021a28f pop ecx */
  ECX = (pop32());
  /* 1021a290 ret  */
  ESPCHK(0x1021a1c6u, _esp0);
  ESP += 4; return;
L_1021a291:;
  /* 1021a291 push esi */
  push32((uint32_t)(ESI));
L_1021a292:;
  /* 1021a292 push 0 */
  push32((uint32_t)(0x0u));
  /* 1021a294 push dword ptr [0x10227c24] */
  push32((uint32_t)(r32((uint32_t)(0x10227c24))));
}

/* FUN_1000a230 @ 0x1021a230 (9 bytes, 4 insns) */
void f_1021a230(void) {
  FTRACE(0x1021a230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021a230 push 9 */
  push32((uint32_t)(0x9u));
  /* 1021a232 call 0x1021a074 */
  push32(0x1021a237u); f_1021a074();
  /* 1021a237 pop ecx */
  ECX = (pop32());
  /* 1021a238 ret  */
  ESPCHK(0x1021a230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a288 @ 0x1021a288 (9 bytes, 4 insns) */
void f_1021a288(void) {
  FTRACE(0x1021a288u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021a288 push 9 */
  push32((uint32_t)(0x9u));
  /* 1021a28a call 0x1021a074 */
  push32(0x1021a28fu); f_1021a074();
  /* 1021a28f pop ecx */
  ECX = (pop32());
  /* 1021a290 ret  */
  ESPCHK(0x1021a288u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x1021a2af (18 bytes, 6 insns) */
void f_1021a2af(void) {
  FTRACE(0x1021a2afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021a2af push dword ptr [0x10226870] */
  push32((uint32_t)(r32((uint32_t)(0x10226870))));
  /* 1021a2b5 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1021a2b9 call 0x1021a2c1 */
  push32(0x1021a2beu); f_1021a2c1();
  /* 1021a2be pop ecx */
  ECX = (pop32());
  /* 1021a2bf pop ecx */
  ECX = (pop32());
  /* 1021a2c0 ret  */
  ESPCHK(0x1021a2afu, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x1021a2c1 (44 bytes, 16 insns) */
void f_1021a2c1(void) {
  FTRACE(0x1021a2c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021a2c1 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a2c6 ja 0x1021a2ea */
  if ((!C.cf&&!C.zf)) goto L_1021a2ea;
L_1021a2c8:;
  /* 1021a2c8 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1021a2cc call 0x1021a2ed */
  push32(0x1021a2d1u); f_1021a2ed();
  /* 1021a2d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021a2d3 pop ecx */
  ECX = (pop32());
  /* 1021a2d4 jne 0x1021a2ec */
  if (!C.zf) goto L_1021a2ec;
  /* 1021a2d6 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a2da je 0x1021a2ec */
  if (C.zf) goto L_1021a2ec;
  /* 1021a2dc push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1021a2e0 call 0x1021cf1a */
  push32(0x1021a2e5u); f_1021cf1a();
  /* 1021a2e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021a2e7 pop ecx */
  ECX = (pop32());
  /* 1021a2e8 jne 0x1021a2c8 */
  if (!C.zf) goto L_1021a2c8;
L_1021a2ea:;
  /* 1021a2ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1021a2ec:;
  /* 1021a2ec ret  */
  ESPCHK(0x1021a2c1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2ed @ 0x1021a2ed (231 bytes, 81 insns) */
void f_1021a2ed(void) {
  FTRACE(0x1021a2edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021a2ed push ebp */
  push32((uint32_t)(EBP));
  /* 1021a2ee mov ebp, esp */
  EBP = (ESP);
  /* 1021a2f0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1021a2f2 push 0x1021e500 */
  push32((uint32_t)(0x1021e500u));
  /* 1021a2f7 push 0x1021d030 */
  push32((uint32_t)(0x1021d030u));
  /* 1021a2fc mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1021a302 push eax */
  push32((uint32_t)(EAX));
  /* 1021a303 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1021a30a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021a30d push ebx */
  push32((uint32_t)(EBX));
  /* 1021a30e push esi */
  push32((uint32_t)(ESI));
  /* 1021a30f push edi */
  push32((uint32_t)(EDI));
  /* 1021a310 mov eax, dword ptr [0x10227c28] */
  EAX = (r32((uint32_t)(0x10227c28)));
  /* 1021a315 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a318 jne 0x1021a35d */
  if (!C.zf) goto L_1021a35d;
  /* 1021a31a mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1021a31d cmp esi, dword ptr [0x102269d0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x102269d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a323 ja 0x1021a3bc */
  if ((!C.cf&&!C.zf)) goto L_1021a3bc;
  /* 1021a329 push 9 */
  push32((uint32_t)(0x9u));
  /* 1021a32b call 0x1021a013 */
  push32(0x1021a330u); f_1021a013();
  /* 1021a330 pop ecx */
  ECX = (pop32());
  /* 1021a331 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1021a335 push esi */
  push32((uint32_t)(ESI));
  /* 1021a336 call 0x1021b29b */
  push32(0x1021a33bu); f_1021b29b();
  /* 1021a33b pop ecx */
  ECX = (pop32());
  /* 1021a33c mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1021a33f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1021a343 call 0x1021a354 */
  push32(0x1021a348u); f_1021a354();
  /* 1021a348 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1021a34b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021a34d je 0x1021a3bc */
  if (C.zf) goto L_1021a3bc;
  /* 1021a34f jmp 0x1021a3da */
  jmp_ind(0x1021a3dau); return;
  /* 1021a354 push 9 */
  push32((uint32_t)(0x9u));
  /* 1021a356 call 0x1021a074 */
  push32(0x1021a35bu); f_1021a074();
  /* 1021a35b pop ecx */
  ECX = (pop32());
  /* 1021a35c ret  */
  ESPCHK(0x1021a2edu, _esp0);
  ESP += 4; return;
L_1021a35d:;
  /* 1021a35d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a360 jne 0x1021a3bc */
  if (!C.zf) goto L_1021a3bc;
  /* 1021a362 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021a365 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021a367 je 0x1021a371 */
  if (C.zf) goto L_1021a371;
  /* 1021a369 lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 1021a36c and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1021a36f jmp 0x1021a374 */
  goto L_1021a374;
L_1021a371:;
  /* 1021a371 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1021a373 pop esi */
  ESI = (pop32());
L_1021a374:;
  /* 1021a374 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 1021a377 cmp esi, dword ptr [0x10222e84] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10222e84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a37d ja 0x1021a3ad */
  if ((!C.cf&&!C.zf)) goto L_1021a3ad;
  /* 1021a37f push 9 */
  push32((uint32_t)(0x9u));
  /* 1021a381 call 0x1021a013 */
  push32(0x1021a386u); f_1021a013();
  /* 1021a386 pop ecx */
  ECX = (pop32());
  /* 1021a387 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1021a38e mov eax, esi */
  EAX = (ESI);
  /* 1021a390 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1021a393 push eax */
  push32((uint32_t)(EAX));
  /* 1021a394 call 0x1021ba48 */
  push32(0x1021a399u); f_1021ba48();
  /* 1021a399 pop ecx */
  ECX = (pop32());
  /* 1021a39a mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1021a39d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1021a3a1 call 0x1021a3b3 */
  push32(0x1021a3a6u); f_1021a3b3();
  /* 1021a3a6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1021a3a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021a3ab jne 0x1021a3da */
  if (!C.zf) { jmp_ind(0x1021a3dau); return; }
L_1021a3ad:;
  /* 1021a3ad push esi */
  push32((uint32_t)(ESI));
  /* 1021a3ae jmp 0x1021a3cc */
  goto L_1021a3cc;
  /* 1021a3b0 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1021a3b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1021a3b5 call 0x1021a074 */
  push32(0x1021a3bau); f_1021a074();
  /* 1021a3ba pop ecx */
  ECX = (pop32());
  /* 1021a3bb ret  */
  ESPCHK(0x1021a2edu, _esp0);
  ESP += 4; return;
L_1021a3bc:;
  /* 1021a3bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021a3bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021a3c1 jne 0x1021a3c6 */
  if (!C.zf) goto L_1021a3c6;
  /* 1021a3c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021a3c5 pop eax */
  EAX = (pop32());
L_1021a3c6:;
  /* 1021a3c6 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021a3c9 and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1021a3cb push eax */
  push32((uint32_t)(EAX));
L_1021a3cc:;
  /* 1021a3cc push 0 */
  push32((uint32_t)(0x0u));
  /* 1021a3ce push dword ptr [0x10227c24] */
  push32((uint32_t)(r32((uint32_t)(0x10227c24))));
}

/* FUN_1000a354 @ 0x1021a354 (9 bytes, 4 insns) */
void f_1021a354(void) {
  FTRACE(0x1021a354u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021a354 push 9 */
  push32((uint32_t)(0x9u));
  /* 1021a356 call 0x1021a074 */
  push32(0x1021a35bu); f_1021a074();
  /* 1021a35b pop ecx */
  ECX = (pop32());
  /* 1021a35c ret  */
  ESPCHK(0x1021a354u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3b3 @ 0x1021a3b3 (9 bytes, 4 insns) */
void f_1021a3b3(void) {
  FTRACE(0x1021a3b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021a3b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1021a3b5 call 0x1021a074 */
  push32(0x1021a3bau); f_1021a074();
  /* 1021a3ba pop ecx */
  ECX = (pop32());
  /* 1021a3bb ret  */
  ESPCHK(0x1021a3b3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3e9 @ 0x1021a3e9 (429 bytes, 143 insns) */
void f_1021a3e9(void) {
  FTRACE(0x1021a3e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021a3e9 push ebp */
  push32((uint32_t)(EBP));
  /* 1021a3ea mov ebp, esp */
  EBP = (ESP);
  /* 1021a3ec sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021a3ef push ebx */
  push32((uint32_t)(EBX));
  /* 1021a3f0 push esi */
  push32((uint32_t)(ESI));
  /* 1021a3f1 push edi */
  push32((uint32_t)(EDI));
  /* 1021a3f2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1021a3f4 call 0x1021a013 */
  push32(0x1021a3f9u); f_1021a013();
  /* 1021a3f9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1021a3fc call 0x1021a596 */
  push32(0x1021a401u); f_1021a596();
  /* 1021a401 mov ebx, eax */
  EBX = (EAX);
  /* 1021a403 pop ecx */
  ECX = (pop32());
  /* 1021a404 cmp ebx, dword ptr [0x102269d4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102269d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a40a pop ecx */
  ECX = (pop32());
  /* 1021a40b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1021a40e jne 0x1021a417 */
  if (!C.zf) goto L_1021a417;
L_1021a410:;
  /* 1021a410 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1021a412 jmp 0x1021a587 */
  goto L_1021a587;
L_1021a417:;
  /* 1021a417 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1021a419 je 0x1021a575 */
  if (C.zf) goto L_1021a575;
  /* 1021a41f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1021a421 mov eax, 0x10220d70 */
  EAX = (0x10220d70u);
L_1021a426:;
  /* 1021a426 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a428 je 0x1021a49e */
  if (C.zf) goto L_1021a49e;
  /* 1021a42a add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021a42d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1021a42e cmp eax, 0x10220e60 */
  { uint32_t _a=(EAX),_b=(0x10220e60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a433 jl 0x1021a426 */
  if ((C.sf!=C.of)) goto L_1021a426;
  /* 1021a435 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1021a438 push eax */
  push32((uint32_t)(EAX));
  /* 1021a439 push ebx */
  push32((uint32_t)(EBX));
  /* 1021a43a call dword ptr [0x1021e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e09c))), 0x1021a440u);
  /* 1021a440 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021a442 pop esi */
  ESI = (pop32());
  /* 1021a443 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a445 jne 0x1021a56c */
  if (!C.zf) goto L_1021a56c;
  /* 1021a44b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1021a44d and dword ptr [0x10226c04], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10226c04)))&(0x0u); w32((uint32_t)(0x10226c04), (_r)); fl_logic(_r,32); }
  /* 1021a454 pop ecx */
  ECX = (pop32());
  /* 1021a455 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021a457 mov edi, 0x10226b00 */
  EDI = (0x10226b00u);
  /* 1021a45c cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a45f rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1021a461 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1021a462 mov dword ptr [0x102269d4], ebx */
  w32((uint32_t)(0x102269d4), (EBX));
  /* 1021a468 jbe 0x1021a559 */
  if ((C.cf||C.zf)) goto L_1021a559;
  /* 1021a46e cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021a472 je 0x1021a534 */
  if (C.zf) goto L_1021a534;
  /* 1021a478 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_1021a47b:;
  /* 1021a47b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1021a47d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1021a47f je 0x1021a534 */
  if (C.zf) goto L_1021a534;
  /* 1021a485 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 1021a489 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_1021a48c:;
  /* 1021a48c cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a48e ja 0x1021a528 */
  if ((!C.cf&&!C.zf)) goto L_1021a528;
  /* 1021a494 or byte ptr [eax + 0x10226b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10226b01)))|(0x4u); w8((uint32_t)(EAX + 0x10226b01), (_r)); fl_logic(_r,8); }
  /* 1021a49b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1021a49c jmp 0x1021a48c */
  goto L_1021a48c;
L_1021a49e:;
  /* 1021a49e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1021a4a2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1021a4a4 pop ecx */
  ECX = (pop32());
  /* 1021a4a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021a4a7 mov edi, 0x10226b00 */
  EDI = (0x10226b00u);
  /* 1021a4ac lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 1021a4af rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1021a4b1 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1021a4b4 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1021a4b5 lea ebx, [esi + 0x10220d80] */
  EBX = ((uint32_t)(ESI + 0x10220d80));
L_1021a4bb:;
  /* 1021a4bb cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021a4be mov ecx, ebx */
  ECX = (EBX);
  /* 1021a4c0 je 0x1021a4ee */
  if (C.zf) goto L_1021a4ee;
L_1021a4c2:;
  /* 1021a4c2 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1021a4c5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1021a4c7 je 0x1021a4ee */
  if (C.zf) goto L_1021a4ee;
  /* 1021a4c9 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1021a4cc movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 1021a4cf cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a4d1 ja 0x1021a4e7 */
  if ((!C.cf&&!C.zf)) goto L_1021a4e7;
  /* 1021a4d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1021a4d6 mov dl, byte ptr [edx + 0x10220d68] */
  DL = (r8((uint32_t)(EDX + 0x10220d68)));
L_1021a4dc:;
  /* 1021a4dc or byte ptr [eax + 0x10226b01], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10226b01)))|(DL); w8((uint32_t)(EAX + 0x10226b01), (_r)); fl_logic(_r,8); }
  /* 1021a4e2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1021a4e3 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a4e5 jbe 0x1021a4dc */
  if ((C.cf||C.zf)) goto L_1021a4dc;
L_1021a4e7:;
  /* 1021a4e7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1021a4e8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1021a4e9 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021a4ec jne 0x1021a4c2 */
  if (!C.zf) goto L_1021a4c2;
L_1021a4ee:;
  /* 1021a4ee inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1021a4f1 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021a4f4 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a4f8 jb 0x1021a4bb */
  if (C.cf) goto L_1021a4bb;
  /* 1021a4fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021a4fd mov dword ptr [0x102269ec], 1 */
  w32((uint32_t)(0x102269ec), (0x1u));
  /* 1021a507 push eax */
  push32((uint32_t)(EAX));
  /* 1021a508 mov dword ptr [0x102269d4], eax */
  w32((uint32_t)(0x102269d4), (EAX));
  /* 1021a50d call 0x1021a5e0 */
  push32(0x1021a512u); f_1021a5e0();
  /* 1021a512 lea esi, [esi + 0x10220d74] */
  ESI = ((uint32_t)(ESI + 0x10220d74));
  /* 1021a518 mov edi, 0x102269e0 */
  EDI = (0x102269e0u);
  /* 1021a51d movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1021a51e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1021a51f pop ecx */
  ECX = (pop32());
  /* 1021a520 mov dword ptr [0x10226c04], eax */
  w32((uint32_t)(0x10226c04), (EAX));
  /* 1021a525 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1021a526 jmp 0x1021a57a */
  goto L_1021a57a;
L_1021a528:;
  /* 1021a528 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1021a529 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1021a52a cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021a52e jne 0x1021a47b */
  if (!C.zf) goto L_1021a47b;
L_1021a534:;
  /* 1021a534 mov eax, esi */
  EAX = (ESI);
L_1021a536:;
  /* 1021a536 or byte ptr [eax + 0x10226b01], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10226b01)))|(0x8u); w8((uint32_t)(EAX + 0x10226b01), (_r)); fl_logic(_r,8); }
  /* 1021a53d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1021a53e cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a543 jb 0x1021a536 */
  if (C.cf) goto L_1021a536;
  /* 1021a545 push ebx */
  push32((uint32_t)(EBX));
  /* 1021a546 call 0x1021a5e0 */
  push32(0x1021a54bu); f_1021a5e0();
  /* 1021a54b pop ecx */
  ECX = (pop32());
  /* 1021a54c mov dword ptr [0x10226c04], eax */
  w32((uint32_t)(0x10226c04), (EAX));
  /* 1021a551 mov dword ptr [0x102269ec], esi */
  w32((uint32_t)(0x102269ec), (ESI));
  /* 1021a557 jmp 0x1021a560 */
  goto L_1021a560;
L_1021a559:;
  /* 1021a559 and dword ptr [0x102269ec], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102269ec)))&(0x0u); w32((uint32_t)(0x102269ec), (_r)); fl_logic(_r,32); }
L_1021a560:;
  /* 1021a560 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021a562 mov edi, 0x102269e0 */
  EDI = (0x102269e0u);
  /* 1021a567 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1021a568 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1021a569 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1021a56a jmp 0x1021a57a */
  goto L_1021a57a;
L_1021a56c:;
  /* 1021a56c cmp dword ptr [0x10226810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10226810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a573 je 0x1021a584 */
  if (C.zf) goto L_1021a584;
L_1021a575:;
  /* 1021a575 call 0x1021a613 */
  push32(0x1021a57au); f_1021a613();
L_1021a57a:;
  /* 1021a57a call 0x1021a63c */
  push32(0x1021a57fu); f_1021a63c();
  /* 1021a57f jmp 0x1021a410 */
  goto L_1021a410;
L_1021a584:;
  /* 1021a584 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_1021a587:;
  /* 1021a587 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1021a589 call 0x1021a074 */
  push32(0x1021a58eu); f_1021a074();
  /* 1021a58e pop ecx */
  ECX = (pop32());
  /* 1021a58f mov eax, esi */
  EAX = (ESI);
  /* 1021a591 pop edi */
  EDI = (pop32());
  /* 1021a592 pop esi */
  ESI = (pop32());
  /* 1021a593 pop ebx */
  EBX = (pop32());
  /* 1021a594 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021a595 ret  */
  ESPCHK(0x1021a3e9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a596 @ 0x1021a596 (74 bytes, 15 insns) */
void f_1021a596(void) {
  FTRACE(0x1021a596u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021a596 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1021a59a and dword ptr [0x10226810], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10226810)))&(0x0u); w32((uint32_t)(0x10226810), (_r)); fl_logic(_r,32); }
  /* 1021a5a1 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a5a4 jne 0x1021a5b6 */
  if (!C.zf) goto L_1021a5b6;
  /* 1021a5a6 mov dword ptr [0x10226810], 1 */
  w32((uint32_t)(0x10226810), (0x1u));
  /* 1021a5b0 jmp dword ptr [0x1021e0a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1021e0a4)))); return;
L_1021a5b6:;
  /* 1021a5b6 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a5b9 jne 0x1021a5cb */
  if (!C.zf) goto L_1021a5cb;
  /* 1021a5bb mov dword ptr [0x10226810], 1 */
  w32((uint32_t)(0x10226810), (0x1u));
  /* 1021a5c5 jmp dword ptr [0x1021e0a0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1021e0a0)))); return;
L_1021a5cb:;
  /* 1021a5cb cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a5ce jne 0x1021a5df */
  if (!C.zf) goto L_1021a5df;
  /* 1021a5d0 mov eax, dword ptr [0x10226848] */
  EAX = (r32((uint32_t)(0x10226848)));
  /* 1021a5d5 mov dword ptr [0x10226810], 1 */
  w32((uint32_t)(0x10226810), (0x1u));
L_1021a5df:;
  /* 1021a5df ret  */
  ESPCHK(0x1021a596u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5e0 @ 0x1021a5e0 (51 bytes, 19 insns) */
void f_1021a5e0(void) {
  FTRACE(0x1021a5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021a5e0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1021a5e4 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021a5e9 je 0x1021a60d */
  if (C.zf) goto L_1021a60d;
  /* 1021a5eb sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021a5ee je 0x1021a607 */
  if (C.zf) goto L_1021a607;
  /* 1021a5f0 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021a5f3 je 0x1021a601 */
  if (C.zf) goto L_1021a601;
  /* 1021a5f5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1021a5f6 je 0x1021a5fb */
  if (C.zf) goto L_1021a5fb;
  /* 1021a5f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021a5fa ret  */
  ESPCHK(0x1021a5e0u, _esp0);
  ESP += 4; return;
L_1021a5fb:;
  /* 1021a5fb mov eax, 0x404 */
  EAX = (0x404u);
  /* 1021a600 ret  */
  ESPCHK(0x1021a5e0u, _esp0);
  ESP += 4; return;
L_1021a601:;
  /* 1021a601 mov eax, 0x412 */
  EAX = (0x412u);
  /* 1021a606 ret  */
  ESPCHK(0x1021a5e0u, _esp0);
  ESP += 4; return;
L_1021a607:;
  /* 1021a607 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1021a60c ret  */
  ESPCHK(0x1021a5e0u, _esp0);
  ESP += 4; return;
L_1021a60d:;
  /* 1021a60d mov eax, 0x411 */
  EAX = (0x411u);
  /* 1021a612 ret  */
  ESPCHK(0x1021a5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a613 @ 0x1021a613 (41 bytes, 17 insns) */
void f_1021a613(void) {
  FTRACE(0x1021a613u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021a613 push edi */
  push32((uint32_t)(EDI));
  /* 1021a614 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1021a616 pop ecx */
  ECX = (pop32());
  /* 1021a617 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021a619 mov edi, 0x10226b00 */
  EDI = (0x10226b00u);
  /* 1021a61e rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1021a620 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1021a621 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021a623 mov edi, 0x102269e0 */
  EDI = (0x102269e0u);
  /* 1021a628 mov dword ptr [0x102269d4], eax */
  w32((uint32_t)(0x102269d4), (EAX));
  /* 1021a62d mov dword ptr [0x102269ec], eax */
  w32((uint32_t)(0x102269ec), (EAX));
  /* 1021a632 mov dword ptr [0x10226c04], eax */
  w32((uint32_t)(0x10226c04), (EAX));
  /* 1021a637 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1021a638 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1021a639 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1021a63a pop edi */
  EDI = (pop32());
  /* 1021a63b ret  */
  ESPCHK(0x1021a613u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a63c @ 0x1021a63c (389 bytes, 124 insns) */
void f_1021a63c(void) {
  FTRACE(0x1021a63cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021a63c push ebp */
  push32((uint32_t)(EBP));
  /* 1021a63d mov ebp, esp */
  EBP = (ESP);
  /* 1021a63f sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021a645 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1021a648 push esi */
  push32((uint32_t)(ESI));
  /* 1021a649 push eax */
  push32((uint32_t)(EAX));
  /* 1021a64a push dword ptr [0x102269d4] */
  push32((uint32_t)(r32((uint32_t)(0x102269d4))));
  /* 1021a650 call dword ptr [0x1021e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e09c))), 0x1021a656u);
  /* 1021a656 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a659 jne 0x1021a775 */
  if (!C.zf) goto L_1021a775;
  /* 1021a65f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021a661 mov esi, 0x100 */
  ESI = (0x100u);
L_1021a666:;
  /* 1021a666 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 1021a66d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1021a66e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a670 jb 0x1021a666 */
  if (C.cf) goto L_1021a666;
  /* 1021a672 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 1021a675 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 1021a67c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1021a67e je 0x1021a6b7 */
  if (C.zf) goto L_1021a6b7;
  /* 1021a680 push ebx */
  push32((uint32_t)(EBX));
  /* 1021a681 push edi */
  push32((uint32_t)(EDI));
  /* 1021a682 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_1021a685:;
  /* 1021a685 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 1021a688 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1021a68b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a68d ja 0x1021a6ac */
  if ((!C.cf&&!C.zf)) goto L_1021a6ac;
  /* 1021a68f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021a691 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 1021a698 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1021a699 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 1021a69e mov ebx, ecx */
  EBX = (ECX);
  /* 1021a6a0 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1021a6a3 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1021a6a5 mov ecx, ebx */
  ECX = (EBX);
  /* 1021a6a7 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1021a6aa rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_1021a6ac:;
  /* 1021a6ac inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1021a6ad inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1021a6ae mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 1021a6b1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1021a6b3 jne 0x1021a685 */
  if (!C.zf) goto L_1021a685;
  /* 1021a6b5 pop edi */
  EDI = (pop32());
  /* 1021a6b6 pop ebx */
  EBX = (pop32());
L_1021a6b7:;
  /* 1021a6b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1021a6b9 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 1021a6bf push dword ptr [0x10226c04] */
  push32((uint32_t)(r32((uint32_t)(0x10226c04))));
  /* 1021a6c5 push dword ptr [0x102269d4] */
  push32((uint32_t)(r32((uint32_t)(0x102269d4))));
  /* 1021a6cb push eax */
  push32((uint32_t)(EAX));
  /* 1021a6cc lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1021a6d2 push esi */
  push32((uint32_t)(ESI));
  /* 1021a6d3 push eax */
  push32((uint32_t)(EAX));
  /* 1021a6d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021a6d6 call 0x1021c27d */
  push32(0x1021a6dbu); f_1021c27d();
  /* 1021a6db push 0 */
  push32((uint32_t)(0x0u));
  /* 1021a6dd lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 1021a6e3 push dword ptr [0x102269d4] */
  push32((uint32_t)(r32((uint32_t)(0x102269d4))));
  /* 1021a6e9 push esi */
  push32((uint32_t)(ESI));
  /* 1021a6ea push eax */
  push32((uint32_t)(EAX));
  /* 1021a6eb lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1021a6f1 push esi */
  push32((uint32_t)(ESI));
  /* 1021a6f2 push eax */
  push32((uint32_t)(EAX));
  /* 1021a6f3 push esi */
  push32((uint32_t)(ESI));
  /* 1021a6f4 push dword ptr [0x10226c04] */
  push32((uint32_t)(r32((uint32_t)(0x10226c04))));
  /* 1021a6fa call 0x1021c3c6 */
  push32(0x1021a6ffu); f_1021c3c6();
  /* 1021a6ff push 0 */
  push32((uint32_t)(0x0u));
  /* 1021a701 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 1021a707 push dword ptr [0x102269d4] */
  push32((uint32_t)(r32((uint32_t)(0x102269d4))));
  /* 1021a70d push esi */
  push32((uint32_t)(ESI));
  /* 1021a70e push eax */
  push32((uint32_t)(EAX));
  /* 1021a70f lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1021a715 push esi */
  push32((uint32_t)(ESI));
  /* 1021a716 push eax */
  push32((uint32_t)(EAX));
  /* 1021a717 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1021a71c push dword ptr [0x10226c04] */
  push32((uint32_t)(r32((uint32_t)(0x10226c04))));
  /* 1021a722 call 0x1021c3c6 */
  push32(0x1021a727u); f_1021c3c6();
  /* 1021a727 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021a72a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021a72c lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_1021a732:;
  /* 1021a732 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1021a735 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1021a738 je 0x1021a750 */
  if (C.zf) goto L_1021a750;
  /* 1021a73a or byte ptr [eax + 0x10226b01], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10226b01)))|(0x10u); w8((uint32_t)(EAX + 0x10226b01), (_r)); fl_logic(_r,8); }
  /* 1021a741 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_1021a748:;
  /* 1021a748 mov byte ptr [eax + 0x10226a00], dl */
  w8((uint32_t)(EAX + 0x10226a00), (DL));
  /* 1021a74e jmp 0x1021a76c */
  goto L_1021a76c;
L_1021a750:;
  /* 1021a750 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 1021a753 je 0x1021a765 */
  if (C.zf) goto L_1021a765;
  /* 1021a755 or byte ptr [eax + 0x10226b01], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10226b01)))|(0x20u); w8((uint32_t)(EAX + 0x10226b01), (_r)); fl_logic(_r,8); }
  /* 1021a75c mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 1021a763 jmp 0x1021a748 */
  goto L_1021a748;
L_1021a765:;
  /* 1021a765 and byte ptr [eax + 0x10226a00], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10226a00)))&(0x0u); w8((uint32_t)(EAX + 0x10226a00), (_r)); fl_logic(_r,8); }
L_1021a76c:;
  /* 1021a76c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1021a76d inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1021a76e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1021a76f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a771 jb 0x1021a732 */
  if (C.cf) goto L_1021a732;
  /* 1021a773 jmp 0x1021a7be */
  goto L_1021a7be;
L_1021a775:;
  /* 1021a775 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021a777 mov esi, 0x100 */
  ESI = (0x100u);
L_1021a77c:;
  /* 1021a77c cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a77f jb 0x1021a79a */
  if (C.cf) goto L_1021a79a;
  /* 1021a781 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a784 ja 0x1021a79a */
  if ((!C.cf&&!C.zf)) goto L_1021a79a;
  /* 1021a786 or byte ptr [eax + 0x10226b01], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10226b01)))|(0x10u); w8((uint32_t)(EAX + 0x10226b01), (_r)); fl_logic(_r,8); }
  /* 1021a78d mov cl, al */
  CL = (AL);
  /* 1021a78f add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_1021a792:;
  /* 1021a792 mov byte ptr [eax + 0x10226a00], cl */
  w8((uint32_t)(EAX + 0x10226a00), (CL));
  /* 1021a798 jmp 0x1021a7b9 */
  goto L_1021a7b9;
L_1021a79a:;
  /* 1021a79a cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a79d jb 0x1021a7b2 */
  if (C.cf) goto L_1021a7b2;
  /* 1021a79f cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a7a2 ja 0x1021a7b2 */
  if ((!C.cf&&!C.zf)) goto L_1021a7b2;
  /* 1021a7a4 or byte ptr [eax + 0x10226b01], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10226b01)))|(0x20u); w8((uint32_t)(EAX + 0x10226b01), (_r)); fl_logic(_r,8); }
  /* 1021a7ab mov cl, al */
  CL = (AL);
  /* 1021a7ad sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1021a7b0 jmp 0x1021a792 */
  goto L_1021a792;
L_1021a7b2:;
  /* 1021a7b2 and byte ptr [eax + 0x10226a00], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10226a00)))&(0x0u); w8((uint32_t)(EAX + 0x10226a00), (_r)); fl_logic(_r,8); }
L_1021a7b9:;
  /* 1021a7b9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1021a7ba cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a7bc jb 0x1021a77c */
  if (C.cf) goto L_1021a77c;
L_1021a7be:;
  /* 1021a7be pop esi */
  ESI = (pop32());
  /* 1021a7bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021a7c0 ret  */
  ESPCHK(0x1021a63cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7c1 @ 0x1021a7c1 (28 bytes, 7 insns) */
void f_1021a7c1(void) {
  FTRACE(0x1021a7c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021a7c1 cmp dword ptr [0x10227d48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10227d48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a7c8 jne 0x1021a7dc */
  if (!C.zf) goto L_1021a7dc;
  /* 1021a7ca push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1021a7cc call 0x1021a3e9 */
  push32(0x1021a7d1u); f_1021a3e9();
  /* 1021a7d1 pop ecx */
  ECX = (pop32());
  /* 1021a7d2 mov dword ptr [0x10227d48], 1 */
  w32((uint32_t)(0x10227d48), (0x1u));
L_1021a7dc:;
  /* 1021a7dc ret  */
  ESPCHK(0x1021a7c1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7e0 @ 0x1021a7e0 (664 bytes, 266 insns) [15 switch table(s)] */
void f_1021a7e0(void) {
  FTRACE(0x1021a7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021a7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1021a7e1 mov ebp, esp */
  EBP = (ESP);
  /* 1021a7e3 push edi */
  push32((uint32_t)(EDI));
  /* 1021a7e4 push esi */
  push32((uint32_t)(ESI));
  /* 1021a7e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1021a7e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1021a7eb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1021a7ee mov eax, ecx */
  EAX = (ECX);
  /* 1021a7f0 mov edx, ecx */
  EDX = (ECX);
  /* 1021a7f2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021a7f4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a7f6 jbe 0x1021a800 */
  if ((C.cf||C.zf)) goto L_1021a800;
  /* 1021a7f8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a7fa jb 0x1021a978 */
  if (C.cf) goto L_1021a978;
L_1021a800:;
  /* 1021a800 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1021a806 jne 0x1021a81c */
  if (!C.zf) goto L_1021a81c;
  /* 1021a808 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1021a80b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1021a80e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a811 jb 0x1021a83c */
  if (C.cf) goto L_1021a83c;
  /* 1021a813 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1021a815 jmp dword ptr [edx*4 + 0x1021a928] */
  switch (EDX) {
    case 0: goto L_1021a938;
    case 1: goto L_1021a940;
    case 2: goto L_1021a94c;
    case 3: goto L_1021a960;
    default: x86_unimpl("switch@0x1021a815 out of table"); return;
  }
L_1021a81c:;
  /* 1021a81c mov eax, edi */
  EAX = (EDI);
  /* 1021a81e mov edx, 3 */
  EDX = (0x3u);
  /* 1021a823 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021a826 jb 0x1021a834 */
  if (C.cf) goto L_1021a834;
  /* 1021a828 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1021a82b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021a82d jmp dword ptr [eax*4 + 0x1021a840] */
  switch (EAX) {
    case 1: goto L_1021a850;
    case 2: goto L_1021a87c;
    case 3: goto L_1021a8a0;
    default: x86_unimpl("switch@0x1021a82d out of table"); return;
  }
L_1021a834:;
  /* 1021a834 jmp dword ptr [ecx*4 + 0x1021a938] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1021a938)))); return;
  /* 1021a83b nop  */
  /* nop */
L_1021a83c:;
  /* 1021a83c jmp dword ptr [ecx*4 + 0x1021a8bc] */
  switch (ECX) {
    case 0: goto L_1021a91f;
    case 1: goto L_1021a90c;
    case 2: goto L_1021a904;
    case 3: goto L_1021a8fc;
    case 4: goto L_1021a8f4;
    case 5: goto L_1021a8ec;
    case 6: goto L_1021a8e4;
    case 7: goto L_1021a8dc;
    default: x86_unimpl("switch@0x1021a83c out of table"); return;
  }
  /* 1021a843 nop  */
  /* nop */
L_1021a850:;
  /* 1021a850 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1021a852 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1021a854 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1021a856 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1021a859 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1021a85c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1021a85f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1021a862 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1021a865 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021a868 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021a86b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a86e jb 0x1021a83c */
  if (C.cf) goto L_1021a83c;
  /* 1021a870 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1021a872 jmp dword ptr [edx*4 + 0x1021a928] */
  switch (EDX) {
    case 0: goto L_1021a938;
    case 1: goto L_1021a940;
    case 2: goto L_1021a94c;
    case 3: goto L_1021a960;
    default: x86_unimpl("switch@0x1021a872 out of table"); return;
  }
  /* 1021a879 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1021a87c:;
  /* 1021a87c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1021a87e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1021a880 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1021a882 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1021a885 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1021a888 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1021a88b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021a88e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021a891 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a894 jb 0x1021a83c */
  if (C.cf) goto L_1021a83c;
  /* 1021a896 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1021a898 jmp dword ptr [edx*4 + 0x1021a928] */
  switch (EDX) {
    case 0: goto L_1021a938;
    case 1: goto L_1021a940;
    case 2: goto L_1021a94c;
    case 3: goto L_1021a960;
    default: x86_unimpl("switch@0x1021a898 out of table"); return;
  }
  /* 1021a89f nop  */
  /* nop */
L_1021a8a0:;
  /* 1021a8a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1021a8a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1021a8a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1021a8a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1021a8a7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1021a8aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1021a8ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a8ae jb 0x1021a83c */
  if (C.cf) goto L_1021a83c;
  /* 1021a8b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1021a8b2 jmp dword ptr [edx*4 + 0x1021a928] */
  switch (EDX) {
    case 0: goto L_1021a938;
    case 1: goto L_1021a940;
    case 2: goto L_1021a94c;
    case 3: goto L_1021a960;
    default: x86_unimpl("switch@0x1021a8b2 out of table"); return;
  }
  /* 1021a8b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1021a8dc:;
  /* 1021a8dc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1021a8e0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1021a8e4:;
  /* 1021a8e4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1021a8e8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1021a8ec:;
  /* 1021a8ec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1021a8f0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1021a8f4:;
  /* 1021a8f4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1021a8f8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1021a8fc:;
  /* 1021a8fc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1021a900 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1021a904:;
  /* 1021a904 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1021a908 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1021a90c:;
  /* 1021a90c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1021a910 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1021a914 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1021a91b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021a91d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1021a91f:;
  /* 1021a91f jmp dword ptr [edx*4 + 0x1021a928] */
  switch (EDX) {
    case 0: goto L_1021a938;
    case 1: goto L_1021a940;
    case 2: goto L_1021a94c;
    case 3: goto L_1021a960;
    default: x86_unimpl("switch@0x1021a91f out of table"); return;
  }
  /* 1021a926 mov edi, edi */
  EDI = (EDI);
L_1021a938:;
  /* 1021a938 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021a93b pop esi */
  ESI = (pop32());
  /* 1021a93c pop edi */
  EDI = (pop32());
  /* 1021a93d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021a93e ret  */
  ESPCHK(0x1021a7e0u, _esp0);
  ESP += 4; return;
  /* 1021a93f nop  */
  /* nop */
L_1021a940:;
  /* 1021a940 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1021a942 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1021a944 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021a947 pop esi */
  ESI = (pop32());
  /* 1021a948 pop edi */
  EDI = (pop32());
  /* 1021a949 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021a94a ret  */
  ESPCHK(0x1021a7e0u, _esp0);
  ESP += 4; return;
  /* 1021a94b nop  */
  /* nop */
L_1021a94c:;
  /* 1021a94c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1021a94e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1021a950 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1021a953 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1021a956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021a959 pop esi */
  ESI = (pop32());
  /* 1021a95a pop edi */
  EDI = (pop32());
  /* 1021a95b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021a95c ret  */
  ESPCHK(0x1021a7e0u, _esp0);
  ESP += 4; return;
  /* 1021a95d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1021a960:;
  /* 1021a960 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1021a962 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1021a964 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1021a967 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1021a96a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1021a96d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1021a970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021a973 pop esi */
  ESI = (pop32());
  /* 1021a974 pop edi */
  EDI = (pop32());
  /* 1021a975 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021a976 ret  */
  ESPCHK(0x1021a7e0u, _esp0);
  ESP += 4; return;
  /* 1021a977 nop  */
  /* nop */
L_1021a978:;
  /* 1021a978 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1021a97c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1021a980 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1021a986 jne 0x1021a9ac */
  if (!C.zf) goto L_1021a9ac;
  /* 1021a988 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1021a98b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1021a98e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a991 jb 0x1021a9a0 */
  if (C.cf) goto L_1021a9a0;
  /* 1021a993 std  */
  C.df=1;
  /* 1021a994 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1021a996 cld  */
  C.df=0;
  /* 1021a997 jmp dword ptr [edx*4 + 0x1021aac0] */
  switch (EDX) {
    case 0: goto L_1021aad0;
    case 1: goto L_1021aad8;
    case 2: goto L_1021aae8;
    case 3: goto L_1021aafc;
    default: x86_unimpl("switch@0x1021a997 out of table"); return;
  }
  /* 1021a99e mov edi, edi */
  EDI = (EDI);
L_1021a9a0:;
  /* 1021a9a0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1021a9a2 jmp dword ptr [ecx*4 + 0x1021aa70] */
  switch (ECX) {
    case 0: goto L_1021aab7;
    default: x86_unimpl("switch@0x1021a9a2 out of table"); return;
  }
  /* 1021a9a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1021a9ac:;
  /* 1021a9ac mov eax, edi */
  EAX = (EDI);
  /* 1021a9ae mov edx, 3 */
  EDX = (0x3u);
  /* 1021a9b3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a9b6 jb 0x1021a9c4 */
  if (C.cf) goto L_1021a9c4;
  /* 1021a9b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1021a9bb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021a9bd jmp dword ptr [eax*4 + 0x1021a9c8] */
  switch (EAX) {
    case 1: goto L_1021a9d8;
    case 2: goto L_1021a9f8;
    case 3: goto L_1021aa20;
    default: x86_unimpl("switch@0x1021a9bd out of table"); return;
  }
L_1021a9c4:;
  /* 1021a9c4 jmp dword ptr [ecx*4 + 0x1021aac0] */
  switch (ECX) {
    case 0: goto L_1021aad0;
    case 1: goto L_1021aad8;
    case 2: goto L_1021aae8;
    case 3: goto L_1021aafc;
    default: x86_unimpl("switch@0x1021a9c4 out of table"); return;
  }
  /* 1021a9cb nop  */
  /* nop */
L_1021a9d8:;
  /* 1021a9d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1021a9db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1021a9dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1021a9e0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1021a9e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1021a9e4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1021a9e5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021a9e8 jb 0x1021a9a0 */
  if (C.cf) goto L_1021a9a0;
  /* 1021a9ea std  */
  C.df=1;
  /* 1021a9eb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1021a9ed cld  */
  C.df=0;
  /* 1021a9ee jmp dword ptr [edx*4 + 0x1021aac0] */
  switch (EDX) {
    case 0: goto L_1021aad0;
    case 1: goto L_1021aad8;
    case 2: goto L_1021aae8;
    case 3: goto L_1021aafc;
    default: x86_unimpl("switch@0x1021a9ee out of table"); return;
  }
  /* 1021a9f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1021a9f8:;
  /* 1021a9f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1021a9fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1021a9fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
L_1021aa00:;
  /* 1021aa00 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1021aa03 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1021aa06 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1021aa09 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021aa0c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021aa0f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021aa12 jb 0x1021a9a0 */
  if (C.cf) goto L_1021a9a0;
  /* 1021aa14 std  */
  C.df=1;
  /* 1021aa15 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1021aa17 cld  */
  C.df=0;
  /* 1021aa18 jmp dword ptr [edx*4 + 0x1021aac0] */
  switch (EDX) {
    case 0: goto L_1021aad0;
    case 1: goto L_1021aad8;
    case 2: goto L_1021aae8;
    case 3: goto L_1021aafc;
    default: x86_unimpl("switch@0x1021aa18 out of table"); return;
  }
  /* 1021aa1f nop  */
  /* nop */
L_1021aa20:;
  /* 1021aa20 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1021aa23 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1021aa25 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1021aa28 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1021aa2b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1021aa2e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1021aa31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1021aa34 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1021aa37 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021aa3a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021aa3d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021aa40 jb 0x1021a9a0 */
  if (C.cf) goto L_1021a9a0;
  /* 1021aa46 std  */
  C.df=1;
  /* 1021aa47 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1021aa49 cld  */
  C.df=0;
  /* 1021aa4a jmp dword ptr [edx*4 + 0x1021aac0] */
  switch (EDX) {
    case 0: goto L_1021aad0;
    case 1: goto L_1021aad8;
    case 2: goto L_1021aae8;
    case 3: goto L_1021aafc;
    default: x86_unimpl("switch@0x1021aa4a out of table"); return;
  }
  /* 1021aa51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1021aa54 je 0x1021aa00 */
  if (C.zf) goto L_1021aa00;
  /* 1021aa56 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1021aa58 jl 0x1021aa04 */
  if ((C.sf!=C.of)) goto L_1021aa04;
  /* 1021aa5a and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1021aa5c test byte ptr [edx - 0x5573efdf], ch */
  { uint32_t _r=(r8((uint32_t)(EDX + -0x5573efdf)))&(C.c.b.h); fl_logic(_r,8); }
  /* 1021aa62 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1021aa64 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1021aa65 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1021aa66 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1021aa68 pushfd  */
  x86_unimpl("pushfd @ 0x1021aa68");
  /* 1021aa69 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1021aa6a and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1021aa6c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1021aa6d stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1021aa6e and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1021aa74 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1021aa78 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1021aa7c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1021aa80 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1021aa84 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1021aa88 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1021aa8c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1021aa90 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1021aa94 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1021aa98 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1021aa9c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1021aaa0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1021aaa4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1021aaa8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1021aaac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1021aab3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021aab5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1021aab7:;
  /* 1021aab7 jmp dword ptr [edx*4 + 0x1021aac0] */
  switch (EDX) {
    case 0: goto L_1021aad0;
    case 1: goto L_1021aad8;
    case 2: goto L_1021aae8;
    case 3: goto L_1021aafc;
    default: x86_unimpl("switch@0x1021aab7 out of table"); return;
  }
  /* 1021aabe mov edi, edi */
  EDI = (EDI);
L_1021aad0:;
  /* 1021aad0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021aad3 pop esi */
  ESI = (pop32());
  /* 1021aad4 pop edi */
  EDI = (pop32());
  /* 1021aad5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021aad6 ret  */
  ESPCHK(0x1021a7e0u, _esp0);
  ESP += 4; return;
  /* 1021aad7 nop  */
  /* nop */
L_1021aad8:;
  /* 1021aad8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1021aadb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1021aade mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021aae1 pop esi */
  ESI = (pop32());
  /* 1021aae2 pop edi */
  EDI = (pop32());
  /* 1021aae3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021aae4 ret  */
  ESPCHK(0x1021a7e0u, _esp0);
  ESP += 4; return;
  /* 1021aae5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1021aae8:;
  /* 1021aae8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1021aaeb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1021aaee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1021aaf1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1021aaf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021aaf7 pop esi */
  ESI = (pop32());
  /* 1021aaf8 pop edi */
  EDI = (pop32());
  /* 1021aaf9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021aafa ret  */
  ESPCHK(0x1021a7e0u, _esp0);
  ESP += 4; return;
  /* 1021aafb nop  */
  /* nop */
L_1021aafc:;
  /* 1021aafc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1021aaff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1021ab02 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1021ab05 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1021ab08 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1021ab0b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1021ab0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021ab11 pop esi */
  ESI = (pop32());
  /* 1021ab12 pop edi */
  EDI = (pop32());
  /* 1021ab13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021ab14 ret  */
  ESPCHK(0x1021a7e0u, _esp0);
  ESP += 4; return;
L_1021aa04: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1021aa04 (unresolved jump table)"); return;
}

/* FUN_1000ab15 @ 0x1021ab15 (23 bytes, 7 insns) */
void f_1021ab15(void) {
  FTRACE(0x1021ab15u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021ab15 push 0 */
  push32((uint32_t)(0x0u));
  /* 1021ab17 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1021ab1b push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1021ab1f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1021ab23 call 0x1021ab2c */
  push32(0x1021ab28u); f_1021ab2c();
  /* 1021ab28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021ab2b ret  */
  ESPCHK(0x1021ab15u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab2c @ 0x1021ab2c (517 bytes, 195 insns) */
void f_1021ab2c(void) {
  FTRACE(0x1021ab2cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021ab2c push ebp */
  push32((uint32_t)(EBP));
  /* 1021ab2d mov ebp, esp */
  EBP = (ESP);
  /* 1021ab2f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021ab32 push ebx */
  push32((uint32_t)(EBX));
  /* 1021ab33 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1021ab37 push esi */
  push32((uint32_t)(ESI));
  /* 1021ab38 push edi */
  push32((uint32_t)(EDI));
  /* 1021ab39 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1021ab3c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1021ab3e lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 1021ab41 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1021ab44:;
  /* 1021ab44 cmp dword ptr [0x10220be0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10220be0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021ab4b jle 0x1021ab5c */
  if ((C.zf||C.sf!=C.of)) goto L_1021ab5c;
  /* 1021ab4d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1021ab50 push 8 */
  push32((uint32_t)(0x8u));
  /* 1021ab52 push eax */
  push32((uint32_t)(EAX));
  /* 1021ab53 call 0x102193cb */
  push32(0x1021ab58u); f_102193cb();
  /* 1021ab58 pop ecx */
  ECX = (pop32());
  /* 1021ab59 pop ecx */
  ECX = (pop32());
  /* 1021ab5a jmp 0x1021ab6b */
  goto L_1021ab6b;
L_1021ab5c:;
  /* 1021ab5c mov ecx, dword ptr [0x102209d0] */
  ECX = (r32((uint32_t)(0x102209d0)));
  /* 1021ab62 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1021ab65 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1021ab68 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_1021ab6b:;
  /* 1021ab6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021ab6d je 0x1021ab74 */
  if (C.zf) goto L_1021ab74;
  /* 1021ab6f mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 1021ab71 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1021ab72 jmp 0x1021ab44 */
  goto L_1021ab44;
L_1021ab74:;
  /* 1021ab74 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021ab77 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 1021ab7a jne 0x1021ab82 */
  if (!C.zf) goto L_1021ab82;
  /* 1021ab7c or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1021ab80 jmp 0x1021ab87 */
  goto L_1021ab87;
L_1021ab82:;
  /* 1021ab82 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021ab85 jne 0x1021ab8d */
  if (!C.zf) goto L_1021ab8d;
L_1021ab87:;
  /* 1021ab87 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 1021ab89 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1021ab8a mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1021ab8d:;
  /* 1021ab8d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1021ab90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021ab92 jl 0x1021ad21 */
  if ((C.sf!=C.of)) goto L_1021ad21;
  /* 1021ab98 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021ab9b je 0x1021ad21 */
  if (C.zf) goto L_1021ad21;
  /* 1021aba1 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021aba4 jg 0x1021ad21 */
  if ((!C.zf&&C.sf==C.of)) goto L_1021ad21;
  /* 1021abaa push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1021abac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021abae pop ecx */
  ECX = (pop32());
  /* 1021abaf jne 0x1021abd5 */
  if (!C.zf) goto L_1021abd5;
  /* 1021abb1 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021abb4 je 0x1021abbf */
  if (C.zf) goto L_1021abbf;
  /* 1021abb6 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 1021abbd jmp 0x1021abf1 */
  goto L_1021abf1;
L_1021abbf:;
  /* 1021abbf mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1021abc1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021abc3 je 0x1021abd2 */
  if (C.zf) goto L_1021abd2;
  /* 1021abc5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021abc7 je 0x1021abd2 */
  if (C.zf) goto L_1021abd2;
  /* 1021abc9 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 1021abd0 jmp 0x1021abf1 */
  goto L_1021abf1;
L_1021abd2:;
  /* 1021abd2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1021abd5:;
  /* 1021abd5 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021abd8 jne 0x1021abf1 */
  if (!C.zf) goto L_1021abf1;
  /* 1021abda cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021abdd jne 0x1021abf1 */
  if (!C.zf) goto L_1021abf1;
  /* 1021abdf mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1021abe1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021abe3 je 0x1021abe9 */
  if (C.zf) goto L_1021abe9;
  /* 1021abe5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021abe7 jne 0x1021abf1 */
  if (!C.zf) goto L_1021abf1;
L_1021abe9:;
  /* 1021abe9 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 1021abec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1021abed inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1021abee mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1021abf1:;
  /* 1021abf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1021abf4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1021abf6 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1021abf9 mov edi, 0x103 */
  EDI = (0x103u);
  /* 1021abfe mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1021ac01:;
  /* 1021ac01 cmp dword ptr [0x10220be0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10220be0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021ac08 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1021ac0b jle 0x1021ac19 */
  if ((C.zf||C.sf!=C.of)) goto L_1021ac19;
  /* 1021ac0d push 4 */
  push32((uint32_t)(0x4u));
  /* 1021ac0f push esi */
  push32((uint32_t)(ESI));
  /* 1021ac10 call 0x102193cb */
  push32(0x1021ac15u); f_102193cb();
  /* 1021ac15 pop ecx */
  ECX = (pop32());
  /* 1021ac16 pop ecx */
  ECX = (pop32());
  /* 1021ac17 jmp 0x1021ac24 */
  goto L_1021ac24;
L_1021ac19:;
  /* 1021ac19 mov eax, dword ptr [0x102209d0] */
  EAX = (r32((uint32_t)(0x102209d0)));
  /* 1021ac1e mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 1021ac21 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1021ac24:;
  /* 1021ac24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021ac26 je 0x1021ac30 */
  if (C.zf) goto L_1021ac30;
  /* 1021ac28 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1021ac2b sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021ac2e jmp 0x1021ac62 */
  goto L_1021ac62;
L_1021ac30:;
  /* 1021ac30 cmp dword ptr [0x10220be0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10220be0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021ac37 jle 0x1021ac44 */
  if ((C.zf||C.sf!=C.of)) goto L_1021ac44;
  /* 1021ac39 push edi */
  push32((uint32_t)(EDI));
  /* 1021ac3a push esi */
  push32((uint32_t)(ESI));
  /* 1021ac3b call 0x102193cb */
  push32(0x1021ac40u); f_102193cb();
  /* 1021ac40 pop ecx */
  ECX = (pop32());
  /* 1021ac41 pop ecx */
  ECX = (pop32());
  /* 1021ac42 jmp 0x1021ac4f */
  goto L_1021ac4f;
L_1021ac44:;
  /* 1021ac44 mov eax, dword ptr [0x102209d0] */
  EAX = (r32((uint32_t)(0x102209d0)));
  /* 1021ac49 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 1021ac4d and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_1021ac4f:;
  /* 1021ac4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021ac51 je 0x1021ac9d */
  if (C.zf) goto L_1021ac9d;
  /* 1021ac53 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1021ac56 push eax */
  push32((uint32_t)(EAX));
  /* 1021ac57 call 0x1021d108 */
  push32(0x1021ac5cu); f_1021d108();
  /* 1021ac5c pop ecx */
  ECX = (pop32());
  /* 1021ac5d mov ecx, eax */
  ECX = (EAX);
  /* 1021ac5f sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_1021ac62:;
  /* 1021ac62 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021ac65 jae 0x1021ac9d */
  if (!C.cf) goto L_1021ac9d;
  /* 1021ac67 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 1021ac6a or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1021ac6e cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021ac71 jb 0x1021ac87 */
  if (C.cf) goto L_1021ac87;
  /* 1021ac73 jne 0x1021ac81 */
  if (!C.zf) goto L_1021ac81;
  /* 1021ac75 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1021ac78 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1021ac7a div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1021ac7d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021ac7f jbe 0x1021ac87 */
  if ((C.cf||C.zf)) goto L_1021ac87;
L_1021ac81:;
  /* 1021ac81 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1021ac85 jmp 0x1021ac90 */
  goto L_1021ac90;
L_1021ac87:;
  /* 1021ac87 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1021ac8b add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021ac8d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_1021ac90:;
  /* 1021ac90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1021ac93 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1021ac96 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1021ac98 jmp 0x1021ac01 */
  goto L_1021ac01;
L_1021ac9d:;
  /* 1021ac9d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1021aca0 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1021aca3 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1021aca6 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1021aca8 jne 0x1021acba */
  if (!C.zf) goto L_1021acba;
  /* 1021acaa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1021acac je 0x1021acb4 */
  if (C.zf) goto L_1021acb4;
  /* 1021acae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021acb1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1021acb4:;
  /* 1021acb4 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1021acb8 jmp 0x1021ad05 */
  goto L_1021ad05;
L_1021acba:;
  /* 1021acba test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 1021acbc mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 1021acc1 jne 0x1021acde */
  if (!C.zf) goto L_1021acde;
  /* 1021acc3 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 1021acc5 jne 0x1021ad05 */
  if (!C.zf) goto L_1021ad05;
  /* 1021acc7 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1021acca je 0x1021acd5 */
  if (C.zf) goto L_1021acd5;
  /* 1021accc cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021acd3 ja 0x1021acde */
  if ((!C.cf&&!C.zf)) goto L_1021acde;
L_1021acd5:;
  /* 1021acd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021acd7 jne 0x1021ad05 */
  if (!C.zf) goto L_1021ad05;
  /* 1021acd9 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021acdc jbe 0x1021ad05 */
  if ((C.cf||C.zf)) goto L_1021ad05;
L_1021acde:;
  /* 1021acde call 0x1021bf71 */
  push32(0x1021ace3u); f_1021bf71();
  /* 1021ace3 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 1021ace7 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 1021aced je 0x1021acf5 */
  if (C.zf) goto L_1021acf5;
  /* 1021acef or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1021acf3 jmp 0x1021ad05 */
  goto L_1021ad05;
L_1021acf5:;
  /* 1021acf5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1021acf8 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1021acfa neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 1021acfc sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021acfe neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1021ad00 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021ad02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1021ad05:;
  /* 1021ad05 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1021ad07 je 0x1021ad0e */
  if (C.zf) goto L_1021ad0e;
  /* 1021ad09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1021ad0c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_1021ad0e:;
  /* 1021ad0e test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 1021ad12 je 0x1021ad1c */
  if (C.zf) goto L_1021ad1c;
  /* 1021ad14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1021ad17 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1021ad19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1021ad1c:;
  /* 1021ad1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1021ad1f jmp 0x1021ad2c */
  goto L_1021ad2c;
L_1021ad21:;
  /* 1021ad21 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1021ad24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021ad26 je 0x1021ad2a */
  if (C.zf) goto L_1021ad2a;
  /* 1021ad28 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_1021ad2a:;
  /* 1021ad2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1021ad2c:;
  /* 1021ad2c pop edi */
  EDI = (pop32());
  /* 1021ad2d pop esi */
  ESI = (pop32());
  /* 1021ad2e pop ebx */
  EBX = (pop32());
  /* 1021ad2f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021ad30 ret  */
  ESPCHK(0x1021ab2cu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x1021ad50 (193 bytes, 90 insns) */
void f_1021ad50(void) {
  FTRACE(0x1021ad50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021ad50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021ad52 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1021ad56 push ebx */
  push32((uint32_t)(EBX));
  /* 1021ad57 mov ebx, eax */
  EBX = (EAX);
  /* 1021ad59 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1021ad5c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1021ad60 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1021ad66 je 0x1021ad7b */
  if (C.zf) goto L_1021ad7b;
L_1021ad68:;
  /* 1021ad68 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1021ad6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1021ad6b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021ad6d je 0x1021ad40 */
  if (C.zf) { jmp_ind(0x1021ad40u); return; }
  /* 1021ad6f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 1021ad71 je 0x1021adc4 */
  if (C.zf) goto L_1021adc4;
  /* 1021ad73 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1021ad79 jne 0x1021ad68 */
  if (!C.zf) goto L_1021ad68;
L_1021ad7b:;
  /* 1021ad7b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1021ad7d push edi */
  push32((uint32_t)(EDI));
  /* 1021ad7e mov eax, ebx */
  EAX = (EBX);
  /* 1021ad80 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 1021ad83 push esi */
  push32((uint32_t)(ESI));
  /* 1021ad84 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_1021ad86:;
  /* 1021ad86 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1021ad88 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1021ad8d mov eax, ecx */
  EAX = (ECX);
  /* 1021ad8f mov esi, edi */
  ESI = (EDI);
  /* 1021ad91 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 1021ad93 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021ad95 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021ad97 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1021ad9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1021ad9d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1021ad9f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1021ada1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021ada4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1021adaa jne 0x1021adc8 */
  if (!C.zf) goto L_1021adc8;
  /* 1021adac and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1021adb1 je 0x1021ad86 */
  if (C.zf) goto L_1021ad86;
  /* 1021adb3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1021adb8 jne 0x1021adc2 */
  if (!C.zf) goto L_1021adc2;
  /* 1021adba and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 1021adc0 jne 0x1021ad86 */
  if (!C.zf) goto L_1021ad86;
L_1021adc2:;
  /* 1021adc2 pop esi */
  ESI = (pop32());
  /* 1021adc3 pop edi */
  EDI = (pop32());
L_1021adc4:;
  /* 1021adc4 pop ebx */
  EBX = (pop32());
  /* 1021adc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021adc7 ret  */
  ESPCHK(0x1021ad50u, _esp0);
  ESP += 4; return;
L_1021adc8:;
  /* 1021adc8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1021adcb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021adcd je 0x1021ae05 */
  if (C.zf) goto L_1021ae05;
  /* 1021adcf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1021add1 je 0x1021adc2 */
  if (C.zf) goto L_1021adc2;
  /* 1021add3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021add5 je 0x1021adfe */
  if (C.zf) goto L_1021adfe;
  /* 1021add7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1021add9 je 0x1021adc2 */
  if (C.zf) goto L_1021adc2;
  /* 1021addb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1021adde cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021ade0 je 0x1021adf7 */
  if (C.zf) goto L_1021adf7;
  /* 1021ade2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1021ade4 je 0x1021adc2 */
  if (C.zf) goto L_1021adc2;
  /* 1021ade6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021ade8 je 0x1021adf0 */
  if (C.zf) goto L_1021adf0;
  /* 1021adea test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1021adec je 0x1021adc2 */
  if (C.zf) goto L_1021adc2;
  /* 1021adee jmp 0x1021ad86 */
  goto L_1021ad86;
L_1021adf0:;
  /* 1021adf0 pop esi */
  ESI = (pop32());
  /* 1021adf1 pop edi */
  EDI = (pop32());
  /* 1021adf2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 1021adf5 pop ebx */
  EBX = (pop32());
  /* 1021adf6 ret  */
  ESPCHK(0x1021ad50u, _esp0);
  ESP += 4; return;
L_1021adf7:;
  /* 1021adf7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1021adfa pop esi */
  ESI = (pop32());
  /* 1021adfb pop edi */
  EDI = (pop32());
  /* 1021adfc pop ebx */
  EBX = (pop32());
  /* 1021adfd ret  */
  ESPCHK(0x1021ad50u, _esp0);
  ESP += 4; return;
L_1021adfe:;
  /* 1021adfe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 1021ae01 pop esi */
  ESI = (pop32());
  /* 1021ae02 pop edi */
  EDI = (pop32());
  /* 1021ae03 pop ebx */
  EBX = (pop32());
  /* 1021ae04 ret  */
  ESPCHK(0x1021ad50u, _esp0);
  ESP += 4; return;
L_1021ae05:;
  /* 1021ae05 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 1021ae08 pop esi */
  ESI = (pop32());
  /* 1021ae09 pop edi */
  EDI = (pop32());
  /* 1021ae0a pop ebx */
  EBX = (pop32());
  /* 1021ae0b ret  */
  ESPCHK(0x1021ad50u, _esp0);
  ESP += 4; return;
  /* 1021ae0c int3  */
  x86_unimpl("int3 @ 0x1021ae0c");
  /* 1021ae0d int3  */
  x86_unimpl("int3 @ 0x1021ae0d");
  /* 1021ae0e int3  */
  x86_unimpl("int3 @ 0x1021ae0e");
  /* 1021ae0f int3  */
  x86_unimpl("int3 @ 0x1021ae0f");
}

/* _strstr @ 0x1021ae10 (128 bytes, 66 insns) */
void f_1021ae10(void) {
  FTRACE(0x1021ae10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021ae10 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1021ae14 push edi */
  push32((uint32_t)(EDI));
  /* 1021ae15 push ebx */
  push32((uint32_t)(EBX));
  /* 1021ae16 push esi */
  push32((uint32_t)(ESI));
  /* 1021ae17 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1021ae19 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1021ae1d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1021ae1f je 0x1021ae8a */
  if (C.zf) goto L_1021ae8a;
  /* 1021ae21 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 1021ae24 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1021ae26 je 0x1021ae77 */
  if (C.zf) goto L_1021ae77;
L_1021ae28:;
  /* 1021ae28 mov esi, edi */
  ESI = (EDI);
  /* 1021ae2a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1021ae2e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1021ae30 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1021ae31 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021ae33 je 0x1021ae4a */
  if (C.zf) goto L_1021ae4a;
  /* 1021ae35 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1021ae37 je 0x1021ae44 */
  if (C.zf) goto L_1021ae44;
L_1021ae39:;
  /* 1021ae39 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1021ae3b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1021ae3c:;
  /* 1021ae3c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021ae3e je 0x1021ae4a */
  if (C.zf) goto L_1021ae4a;
  /* 1021ae40 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1021ae42 jne 0x1021ae39 */
  if (!C.zf) goto L_1021ae39;
L_1021ae44:;
  /* 1021ae44 pop esi */
  ESI = (pop32());
  /* 1021ae45 pop ebx */
  EBX = (pop32());
  /* 1021ae46 pop edi */
  EDI = (pop32());
  /* 1021ae47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021ae49 ret  */
  ESPCHK(0x1021ae10u, _esp0);
  ESP += 4; return;
L_1021ae4a:;
  /* 1021ae4a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1021ae4c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1021ae4d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021ae4f jne 0x1021ae3c */
  if (!C.zf) goto L_1021ae3c;
  /* 1021ae51 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_1021ae54:;
  /* 1021ae54 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 1021ae57 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1021ae59 je 0x1021ae83 */
  if (C.zf) goto L_1021ae83;
  /* 1021ae5b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1021ae5d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021ae60 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021ae62 jne 0x1021ae28 */
  if (!C.zf) goto L_1021ae28;
  /* 1021ae64 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 1021ae67 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1021ae69 je 0x1021ae83 */
  if (C.zf) goto L_1021ae83;
  /* 1021ae6b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 1021ae6e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021ae71 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021ae73 je 0x1021ae54 */
  if (C.zf) goto L_1021ae54;
  /* 1021ae75 jmp 0x1021ae28 */
  goto L_1021ae28;
L_1021ae77:;
  /* 1021ae77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021ae79 pop esi */
  ESI = (pop32());
  /* 1021ae7a pop ebx */
  EBX = (pop32());
  /* 1021ae7b pop edi */
  EDI = (pop32());
  /* 1021ae7c mov al, dl */
  AL = (DL);
  /* 1021ae7e jmp 0x1021ad56 */
  jmp_ind(0x1021ad56u); return;
L_1021ae83:;
  /* 1021ae83 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 1021ae86 pop esi */
  ESI = (pop32());
  /* 1021ae87 pop ebx */
  EBX = (pop32());
  /* 1021ae88 pop edi */
  EDI = (pop32());
  /* 1021ae89 ret  */
  ESPCHK(0x1021ae10u, _esp0);
  ESP += 4; return;
L_1021ae8a:;
  /* 1021ae8a mov eax, edi */
  EAX = (EDI);
  /* 1021ae8c pop esi */
  ESI = (pop32());
  /* 1021ae8d pop ebx */
  EBX = (pop32());
  /* 1021ae8e pop edi */
  EDI = (pop32());
  /* 1021ae8f ret  */
  ESPCHK(0x1021ae10u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1021ae90 (56 bytes, 31 insns) */
void f_1021ae90(void) {
  FTRACE(0x1021ae90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021ae90 push ebp */
  push32((uint32_t)(EBP));
  /* 1021ae91 mov ebp, esp */
  EBP = (ESP);
  /* 1021ae93 push edi */
  push32((uint32_t)(EDI));
  /* 1021ae94 push esi */
  push32((uint32_t)(ESI));
  /* 1021ae95 push ebx */
  push32((uint32_t)(EBX));
  /* 1021ae96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1021ae99 jecxz 0x1021aec1 */
  x86_unimpl("jecxz @ 0x1021ae99");
  /* 1021ae9b mov ebx, ecx */
  EBX = (ECX);
  /* 1021ae9d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1021aea0 mov esi, edi */
  ESI = (EDI);
  /* 1021aea2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021aea4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1021aea6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1021aea8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021aeaa mov edi, esi */
  EDI = (ESI);
  /* 1021aeac mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1021aeaf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1021aeb1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1021aeb4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1021aeb6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021aeb9 ja 0x1021aebf */
  if ((!C.cf&&!C.zf)) goto L_1021aebf;
  /* 1021aebb je 0x1021aec1 */
  if (C.zf) goto L_1021aec1;
  /* 1021aebd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1021aebe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1021aebf:;
  /* 1021aebf not ecx */
  ECX = (~(ECX));
L_1021aec1:;
  /* 1021aec1 mov eax, ecx */
  EAX = (ECX);
  /* 1021aec3 pop ebx */
  EBX = (pop32());
  /* 1021aec4 pop esi */
  ESI = (pop32());
  /* 1021aec5 pop edi */
  EDI = (pop32());
  /* 1021aec6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021aec7 ret  */
  ESPCHK(0x1021ae90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aed0 @ 0x1021aed0 (47 bytes, 17 insns) */
void f_1021aed0(void) {
  FTRACE(0x1021aed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021aed0 push ecx */
  push32((uint32_t)(ECX));
  /* 1021aed1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021aed6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1021aeda jb 0x1021aef0 */
  if (C.cf) goto L_1021aef0;
L_1021aedc:;
  /* 1021aedc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021aee2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021aee7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1021aee9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021aeee jae 0x1021aedc */
  if (!C.cf) goto L_1021aedc;
L_1021aef0:;
  /* 1021aef0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021aef2 mov eax, esp */
  EAX = (ESP);
  /* 1021aef4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1021aef6 mov esp, ecx */
  ESP = (ECX);
  /* 1021aef8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1021aefa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1021aefd push eax */
  push32((uint32_t)(EAX));
  /* 1021aefe ret  */
  ESPCHK(0x1021aed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aeff @ 0x1021aeff (72 bytes, 17 insns) */
void f_1021aeff(void) {
  FTRACE(0x1021aeffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021aeff push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1021af04 push 0 */
  push32((uint32_t)(0x0u));
  /* 1021af06 push dword ptr [0x10227c24] */
  push32((uint32_t)(r32((uint32_t)(0x10227c24))));
  /* 1021af0c call dword ptr [0x1021e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e098))), 0x1021af12u);
  /* 1021af12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021af14 mov dword ptr [0x102269cc], eax */
  w32((uint32_t)(0x102269cc), (EAX));
  /* 1021af19 jne 0x1021af1c */
  if (!C.zf) goto L_1021af1c;
  /* 1021af1b ret  */
  ESPCHK(0x1021aeffu, _esp0);
  ESP += 4; return;
L_1021af1c:;
  /* 1021af1c mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1021af20 and dword ptr [0x102269c4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102269c4)))&(0x0u); w32((uint32_t)(0x102269c4), (_r)); fl_logic(_r,32); }
  /* 1021af27 and dword ptr [0x102269c8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102269c8)))&(0x0u); w32((uint32_t)(0x102269c8), (_r)); fl_logic(_r,32); }
  /* 1021af2e push 1 */
  push32((uint32_t)(0x1u));
  /* 1021af30 mov dword ptr [0x102269c0], eax */
  w32((uint32_t)(0x102269c0), (EAX));
  /* 1021af35 mov dword ptr [0x102269d0], ecx */
  w32((uint32_t)(0x102269d0), (ECX));
  /* 1021af3b mov dword ptr [0x102269b8], 0x10 */
  w32((uint32_t)(0x102269b8), (0x10u));
  /* 1021af45 pop eax */
  EAX = (pop32());
  /* 1021af46 ret  */
  ESPCHK(0x1021aeffu, _esp0);
  ESP += 4; return;
}

/* FUN_1000af47 @ 0x1021af47 (43 bytes, 14 insns) */
void f_1021af47(void) {
  FTRACE(0x1021af47u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021af47 mov eax, dword ptr [0x102269c8] */
  EAX = (r32((uint32_t)(0x102269c8)));
  /* 1021af4c lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1021af4f mov eax, dword ptr [0x102269cc] */
  EAX = (r32((uint32_t)(0x102269cc)));
  /* 1021af54 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_1021af57:;
  /* 1021af57 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021af59 jae 0x1021af6f */
  if (!C.cf) goto L_1021af6f;
  /* 1021af5b mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1021af5f sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021af62 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021af68 jb 0x1021af71 */
  if (C.cf) goto L_1021af71;
  /* 1021af6a add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021af6d jmp 0x1021af57 */
  goto L_1021af57;
L_1021af6f:;
  /* 1021af6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1021af71:;
  /* 1021af71 ret  */
  ESPCHK(0x1021af47u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af72 @ 0x1021af72 (809 bytes, 265 insns) */
void f_1021af72(void) {
  FTRACE(0x1021af72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021af72 push ebp */
  push32((uint32_t)(EBP));
  /* 1021af73 mov ebp, esp */
  EBP = (ESP);
  /* 1021af75 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021af78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021af7b push ebx */
  push32((uint32_t)(EBX));
  /* 1021af7c push esi */
  push32((uint32_t)(ESI));
  /* 1021af7d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1021af80 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 1021af83 push edi */
  push32((uint32_t)(EDI));
  /* 1021af84 mov edi, esi */
  EDI = (ESI);
  /* 1021af86 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021af89 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021af8c shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 1021af8f mov ecx, edi */
  ECX = (EDI);
  /* 1021af91 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1021af97 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1021af9e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1021afa1 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1021afa3 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1021afa4 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 1021afa7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1021afaa jne 0x1021b296 */
  if (!C.zf) goto L_1021b296;
  /* 1021afb0 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 1021afb3 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 1021afb6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1021afb9 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 1021afbc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1021afbf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1021afc2 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1021afc5 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 1021afc8 jne 0x1021b048 */
  if (!C.zf) goto L_1021b048;
  /* 1021afca sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1021afcd dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1021afce cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021afd1 jbe 0x1021afd6 */
  if ((C.cf||C.zf)) goto L_1021afd6;
  /* 1021afd3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1021afd5 pop edx */
  EDX = (pop32());
L_1021afd6:;
  /* 1021afd6 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1021afd9 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021afdc jne 0x1021b02a */
  if (!C.zf) goto L_1021b02a;
  /* 1021afde cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021afe1 jae 0x1021b001 */
  if (!C.cf) goto L_1021b001;
  /* 1021afe3 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1021afe8 mov ecx, edx */
  ECX = (EDX);
  /* 1021afea shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1021afec lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1021aff0 not ebx */
  EBX = (~(EBX));
  /* 1021aff2 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1021aff6 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1021aff8 jne 0x1021b022 */
  if (!C.zf) goto L_1021b022;
  /* 1021affa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021affd and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1021afff jmp 0x1021b022 */
  goto L_1021b022;
L_1021b001:;
  /* 1021b001 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1021b004 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1021b009 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1021b00b lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1021b00f not ebx */
  EBX = (~(EBX));
  /* 1021b011 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1021b018 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1021b01a jne 0x1021b022 */
  if (!C.zf) goto L_1021b022;
  /* 1021b01c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021b01f and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1021b022:;
  /* 1021b022 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1021b025 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1021b028 jmp 0x1021b02d */
  goto L_1021b02d;
L_1021b02a:;
  /* 1021b02a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_1021b02d:;
  /* 1021b02d mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 1021b030 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 1021b033 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021b036 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 1021b039 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1021b03c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1021b03f mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 1021b042 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 1021b045 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_1021b048:;
  /* 1021b048 mov edx, ecx */
  EDX = (ECX);
  /* 1021b04a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1021b04d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1021b04e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b051 jbe 0x1021b056 */
  if ((C.cf||C.zf)) goto L_1021b056;
  /* 1021b053 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1021b055 pop edx */
  EDX = (pop32());
L_1021b056:;
  /* 1021b056 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1021b059 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 1021b05c mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 1021b05f jne 0x1021b0f9 */
  if (!C.zf) goto L_1021b0f9;
  /* 1021b065 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021b068 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1021b06b sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 1021b06e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1021b070 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1021b073 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1021b074 pop esi */
  ESI = (pop32());
  /* 1021b075 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b077 jbe 0x1021b07b */
  if ((C.cf||C.zf)) goto L_1021b07b;
  /* 1021b079 mov ebx, esi */
  EBX = (ESI);
L_1021b07b:;
  /* 1021b07b add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021b07e mov edx, ecx */
  EDX = (ECX);
  /* 1021b080 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1021b083 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1021b086 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1021b087 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b089 jbe 0x1021b08d */
  if ((C.cf||C.zf)) goto L_1021b08d;
  /* 1021b08b mov edx, esi */
  EDX = (ESI);
L_1021b08d:;
  /* 1021b08d cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b08f je 0x1021b0f4 */
  if (C.zf) goto L_1021b0f4;
  /* 1021b091 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1021b094 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1021b097 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b09a jne 0x1021b0dc */
  if (!C.zf) goto L_1021b0dc;
  /* 1021b09c cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b09f jae 0x1021b0bd */
  if (!C.cf) goto L_1021b0bd;
  /* 1021b0a1 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1021b0a6 mov ecx, ebx */
  ECX = (EBX);
  /* 1021b0a8 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1021b0aa not esi */
  ESI = (~(ESI));
  /* 1021b0ac and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1021b0b0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 1021b0b4 jne 0x1021b0dc */
  if (!C.zf) goto L_1021b0dc;
  /* 1021b0b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021b0b9 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1021b0bb jmp 0x1021b0dc */
  goto L_1021b0dc;
L_1021b0bd:;
  /* 1021b0bd lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 1021b0c0 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1021b0c5 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1021b0c7 not esi */
  ESI = (~(ESI));
  /* 1021b0c9 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1021b0d0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 1021b0d4 jne 0x1021b0dc */
  if (!C.zf) goto L_1021b0dc;
  /* 1021b0d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021b0d9 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1021b0dc:;
  /* 1021b0dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1021b0df mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 1021b0e2 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 1021b0e5 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 1021b0e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1021b0eb mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1021b0ee mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 1021b0f1 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_1021b0f4:;
  /* 1021b0f4 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1021b0f7 jmp 0x1021b0fc */
  goto L_1021b0fc;
L_1021b0f9:;
  /* 1021b0f9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1021b0fc:;
  /* 1021b0fc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b100 jne 0x1021b10a */
  if (!C.zf) goto L_1021b10a;
  /* 1021b102 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b104 je 0x1021b18b */
  if (C.zf) goto L_1021b18b;
L_1021b10a:;
  /* 1021b10a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1021b10d mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 1021b111 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 1021b114 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 1021b117 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 1021b11a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1021b11d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1021b120 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 1021b123 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1021b126 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b129 jne 0x1021b18b */
  if (!C.zf) goto L_1021b18b;
  /* 1021b12b mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 1021b12f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b132 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 1021b135 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1021b137 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 1021b13b jae 0x1021b162 */
  if (!C.cf) goto L_1021b162;
  /* 1021b13d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021b141 jne 0x1021b151 */
  if (!C.zf) goto L_1021b151;
  /* 1021b143 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1021b148 mov ecx, edx */
  ECX = (EDX);
  /* 1021b14a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1021b14c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021b14f or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1021b151:;
  /* 1021b151 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1021b156 mov ecx, edx */
  ECX = (EDX);
  /* 1021b158 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1021b15a lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 1021b15e or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1021b160 jmp 0x1021b18b */
  goto L_1021b18b;
L_1021b162:;
  /* 1021b162 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021b166 jne 0x1021b178 */
  if (!C.zf) goto L_1021b178;
  /* 1021b168 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1021b16b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1021b170 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1021b172 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021b175 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1021b178:;
  /* 1021b178 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1021b17b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1021b180 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1021b182 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 1021b189 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_1021b18b:;
  /* 1021b18b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1021b18e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1021b190 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 1021b194 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1021b197 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 1021b199 jne 0x1021b296 */
  if (!C.zf) goto L_1021b296;
  /* 1021b19f mov eax, dword ptr [0x102269c4] */
  EAX = (r32((uint32_t)(0x102269c4)));
  /* 1021b1a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021b1a6 je 0x1021b288 */
  if (C.zf) goto L_1021b288;
  /* 1021b1ac mov ecx, dword ptr [0x102269bc] */
  ECX = (r32((uint32_t)(0x102269bc)));
  /* 1021b1b2 mov esi, dword ptr [0x1021e07c] */
  ESI = (r32((uint32_t)(0x1021e07c)));
  /* 1021b1b8 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1021b1bb add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021b1be mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 1021b1c3 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1021b1c8 push ebx */
  push32((uint32_t)(EBX));
  /* 1021b1c9 push ecx */
  push32((uint32_t)(ECX));
  /* 1021b1ca call esi */
  call_ind((uint32_t)(ESI), 0x1021b1ccu);
  /* 1021b1cc mov ecx, dword ptr [0x102269bc] */
  ECX = (r32((uint32_t)(0x102269bc)));
  /* 1021b1d2 mov eax, dword ptr [0x102269c4] */
  EAX = (r32((uint32_t)(0x102269c4)));
  /* 1021b1d7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1021b1dc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1021b1de or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1021b1e1 mov eax, dword ptr [0x102269c4] */
  EAX = (r32((uint32_t)(0x102269c4)));
  /* 1021b1e6 mov ecx, dword ptr [0x102269bc] */
  ECX = (r32((uint32_t)(0x102269bc)));
  /* 1021b1ec mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1021b1ef and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1021b1f7 mov eax, dword ptr [0x102269c4] */
  EAX = (r32((uint32_t)(0x102269c4)));
  /* 1021b1fc mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1021b1ff dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1021b202 mov eax, dword ptr [0x102269c4] */
  EAX = (r32((uint32_t)(0x102269c4)));
  /* 1021b207 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1021b20a cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021b20e jne 0x1021b219 */
  if (!C.zf) goto L_1021b219;
  /* 1021b210 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1021b214 mov eax, dword ptr [0x102269c4] */
  EAX = (r32((uint32_t)(0x102269c4)));
L_1021b219:;
  /* 1021b219 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b21d jne 0x1021b288 */
  if (!C.zf) goto L_1021b288;
  /* 1021b21f push ebx */
  push32((uint32_t)(EBX));
  /* 1021b220 push 0 */
  push32((uint32_t)(0x0u));
  /* 1021b222 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 1021b225 call esi */
  call_ind((uint32_t)(ESI), 0x1021b227u);
  /* 1021b227 mov eax, dword ptr [0x102269c4] */
  EAX = (r32((uint32_t)(0x102269c4)));
  /* 1021b22c push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 1021b22f push 0 */
  push32((uint32_t)(0x0u));
  /* 1021b231 push dword ptr [0x10227c24] */
  push32((uint32_t)(r32((uint32_t)(0x10227c24))));
  /* 1021b237 call dword ptr [0x1021e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e080))), 0x1021b23du);
  /* 1021b23d mov eax, dword ptr [0x102269c8] */
  EAX = (r32((uint32_t)(0x102269c8)));
  /* 1021b242 mov edx, dword ptr [0x102269cc] */
  EDX = (r32((uint32_t)(0x102269cc)));
  /* 1021b248 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1021b24b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1021b24e mov ecx, eax */
  ECX = (EAX);
  /* 1021b250 mov eax, dword ptr [0x102269c4] */
  EAX = (r32((uint32_t)(0x102269c4)));
  /* 1021b255 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021b257 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 1021b25b push ecx */
  push32((uint32_t)(ECX));
  /* 1021b25c lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1021b25f push ecx */
  push32((uint32_t)(ECX));
  /* 1021b260 push eax */
  push32((uint32_t)(EAX));
  /* 1021b261 call 0x10219c40 */
  push32(0x1021b266u); f_10219c40();
  /* 1021b266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021b269 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021b26c dec dword ptr [0x102269c8] */
  { uint32_t _r=(r32((uint32_t)(0x102269c8)))-1; w32((uint32_t)(0x102269c8), (_r)); fl_dec(_r,32); }
  /* 1021b272 cmp eax, dword ptr [0x102269c4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x102269c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b278 jbe 0x1021b27e */
  if ((C.cf||C.zf)) goto L_1021b27e;
  /* 1021b27a sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_1021b27e:;
  /* 1021b27e mov eax, dword ptr [0x102269cc] */
  EAX = (r32((uint32_t)(0x102269cc)));
  /* 1021b283 mov dword ptr [0x102269c0], eax */
  w32((uint32_t)(0x102269c0), (EAX));
L_1021b288:;
  /* 1021b288 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021b28b mov dword ptr [0x102269bc], edi */
  w32((uint32_t)(0x102269bc), (EDI));
  /* 1021b291 mov dword ptr [0x102269c4], eax */
  w32((uint32_t)(0x102269c4), (EAX));
L_1021b296:;
  /* 1021b296 pop edi */
  EDI = (pop32());
  /* 1021b297 pop esi */
  ESI = (pop32());
  /* 1021b298 pop ebx */
  EBX = (pop32());
  /* 1021b299 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021b29a ret  */
  ESPCHK(0x1021af72u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b29b @ 0x1021b29b (777 bytes, 275 insns) */
void f_1021b29b(void) {
  FTRACE(0x1021b29bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021b29b push ebp */
  push32((uint32_t)(EBP));
  /* 1021b29c mov ebp, esp */
  EBP = (ESP);
  /* 1021b29e sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021b2a1 mov eax, dword ptr [0x102269c8] */
  EAX = (r32((uint32_t)(0x102269c8)));
  /* 1021b2a6 mov edx, dword ptr [0x102269cc] */
  EDX = (r32((uint32_t)(0x102269cc)));
  /* 1021b2ac push ebx */
  push32((uint32_t)(EBX));
  /* 1021b2ad push esi */
  push32((uint32_t)(ESI));
  /* 1021b2ae lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1021b2b1 push edi */
  push32((uint32_t)(EDI));
  /* 1021b2b2 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 1021b2b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021b2b8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1021b2bb lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 1021b2be and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1021b2c1 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1021b2c4 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1021b2c7 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1021b2c8 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b2cb jge 0x1021b2db */
  if ((C.sf==C.of)) goto L_1021b2db;
  /* 1021b2cd or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1021b2d0 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1021b2d2 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1021b2d6 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 1021b2d9 jmp 0x1021b2eb */
  goto L_1021b2eb;
L_1021b2db:;
  /* 1021b2db add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021b2de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1021b2e1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1021b2e3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1021b2e5 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 1021b2e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1021b2eb:;
  /* 1021b2eb mov eax, dword ptr [0x102269c0] */
  EAX = (r32((uint32_t)(0x102269c0)));
  /* 1021b2f0 mov ebx, eax */
  EBX = (EAX);
  /* 1021b2f2 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b2f4 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1021b2f7 jae 0x1021b312 */
  if (!C.cf) goto L_1021b312;
L_1021b2f9:;
  /* 1021b2f9 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1021b2fc mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1021b2fe and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1021b301 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1021b303 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1021b305 jne 0x1021b312 */
  if (!C.zf) goto L_1021b312;
  /* 1021b307 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021b30a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b30d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1021b310 jb 0x1021b2f9 */
  if (C.cf) goto L_1021b2f9;
L_1021b312:;
  /* 1021b312 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b315 jne 0x1021b390 */
  if (!C.zf) goto L_1021b390;
  /* 1021b317 mov ebx, edx */
  EBX = (EDX);
L_1021b319:;
  /* 1021b319 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b31b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1021b31e jae 0x1021b335 */
  if (!C.cf) goto L_1021b335;
  /* 1021b320 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1021b323 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1021b325 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1021b328 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1021b32a or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1021b32c jne 0x1021b333 */
  if (!C.zf) goto L_1021b333;
  /* 1021b32e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021b331 jmp 0x1021b319 */
  goto L_1021b319;
L_1021b333:;
  /* 1021b333 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1021b335:;
  /* 1021b335 jne 0x1021b390 */
  if (!C.zf) goto L_1021b390;
L_1021b337:;
  /* 1021b337 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b33a jae 0x1021b34d */
  if (!C.cf) goto L_1021b34d;
  /* 1021b33c cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b340 jne 0x1021b34a */
  if (!C.zf) goto L_1021b34a;
  /* 1021b342 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021b345 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1021b348 jmp 0x1021b337 */
  goto L_1021b337;
L_1021b34a:;
  /* 1021b34a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1021b34d:;
  /* 1021b34d jne 0x1021b375 */
  if (!C.zf) goto L_1021b375;
  /* 1021b34f mov ebx, edx */
  EBX = (EDX);
L_1021b351:;
  /* 1021b351 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b353 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1021b356 jae 0x1021b365 */
  if (!C.cf) goto L_1021b365;
  /* 1021b358 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b35c jne 0x1021b363 */
  if (!C.zf) goto L_1021b363;
  /* 1021b35e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021b361 jmp 0x1021b351 */
  goto L_1021b351;
L_1021b363:;
  /* 1021b363 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1021b365:;
  /* 1021b365 jne 0x1021b375 */
  if (!C.zf) goto L_1021b375;
  /* 1021b367 call 0x1021b5a4 */
  push32(0x1021b36cu); f_1021b5a4();
  /* 1021b36c mov ebx, eax */
  EBX = (EAX);
  /* 1021b36e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1021b370 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1021b373 je 0x1021b389 */
  if (C.zf) goto L_1021b389;
L_1021b375:;
  /* 1021b375 push ebx */
  push32((uint32_t)(EBX));
  /* 1021b376 call 0x1021b655 */
  push32(0x1021b37bu); f_1021b655();
  /* 1021b37b pop ecx */
  ECX = (pop32());
  /* 1021b37c mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1021b37f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1021b381 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 1021b384 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b387 jne 0x1021b390 */
  if (!C.zf) goto L_1021b390;
L_1021b389:;
  /* 1021b389 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021b38b jmp 0x1021b59f */
  goto L_1021b59f;
L_1021b390:;
  /* 1021b390 mov dword ptr [0x102269c0], ebx */
  w32((uint32_t)(0x102269c0), (EBX));
  /* 1021b396 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 1021b399 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1021b39b cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b39e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1021b3a1 je 0x1021b3b7 */
  if (C.zf) goto L_1021b3b7;
  /* 1021b3a3 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1021b3aa mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1021b3ae and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1021b3b1 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1021b3b3 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1021b3b5 jne 0x1021b3ee */
  if (!C.zf) goto L_1021b3ee;
L_1021b3b7:;
  /* 1021b3b7 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 1021b3bd mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 1021b3c0 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1021b3c3 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 1021b3c6 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1021b3ca lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 1021b3cd or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1021b3cf mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1021b3d2 jne 0x1021b3eb */
  if (!C.zf) goto L_1021b3eb;
L_1021b3d4:;
  /* 1021b3d4 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 1021b3da inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1021b3dd and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1021b3e0 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021b3e3 mov edi, esi */
  EDI = (ESI);
  /* 1021b3e5 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 1021b3e7 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 1021b3e9 je 0x1021b3d4 */
  if (C.zf) goto L_1021b3d4;
L_1021b3eb:;
  /* 1021b3eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1021b3ee:;
  /* 1021b3ee mov ecx, edx */
  ECX = (EDX);
  /* 1021b3f0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1021b3f2 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1021b3f8 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1021b3ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1021b402 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1021b406 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 1021b408 jne 0x1021b417 */
  if (!C.zf) goto L_1021b417;
  /* 1021b40a mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1021b411 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1021b413 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1021b416 pop edi */
  EDI = (pop32());
L_1021b417:;
  /* 1021b417 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1021b419 jl 0x1021b420 */
  if ((C.sf!=C.of)) goto L_1021b420;
  /* 1021b41b shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1021b41d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1021b41e jmp 0x1021b417 */
  goto L_1021b417;
L_1021b420:;
  /* 1021b420 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1021b423 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 1021b427 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1021b429 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021b42c mov esi, ecx */
  ESI = (ECX);
  /* 1021b42e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1021b431 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1021b434 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1021b435 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b438 jle 0x1021b43d */
  if ((C.zf||C.sf!=C.of)) goto L_1021b43d;
  /* 1021b43a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1021b43c pop esi */
  ESI = (pop32());
L_1021b43d:;
  /* 1021b43d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b43f je 0x1021b552 */
  if (C.zf) goto L_1021b552;
  /* 1021b445 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1021b448 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b44b jne 0x1021b4ae */
  if (!C.zf) goto L_1021b4ae;
  /* 1021b44d cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b450 jge 0x1021b47d */
  if ((C.sf==C.of)) goto L_1021b47d;
  /* 1021b452 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1021b457 mov ecx, edi */
  ECX = (EDI);
  /* 1021b459 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1021b45b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1021b45e lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1021b462 not ebx */
  EBX = (~(EBX));
  /* 1021b464 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1021b467 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 1021b46b mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1021b46f dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1021b471 jne 0x1021b4ab */
  if (!C.zf) goto L_1021b4ab;
  /* 1021b473 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021b476 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1021b479 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 1021b47b jmp 0x1021b4ae */
  goto L_1021b4ae;
L_1021b47d:;
  /* 1021b47d lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 1021b480 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1021b485 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1021b487 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1021b48a lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1021b48e lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1021b495 not ebx */
  EBX = (~(EBX));
  /* 1021b497 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1021b499 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1021b49b mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1021b49e jne 0x1021b4ab */
  if (!C.zf) goto L_1021b4ab;
  /* 1021b4a0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021b4a3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1021b4a6 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1021b4a9 jmp 0x1021b4ae */
  goto L_1021b4ae;
L_1021b4ab:;
  /* 1021b4ab mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1021b4ae:;
  /* 1021b4ae mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 1021b4b1 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 1021b4b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b4b8 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 1021b4bb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1021b4be mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 1021b4c1 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 1021b4c4 je 0x1021b55e */
  if (C.zf) goto L_1021b55e;
  /* 1021b4ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1021b4cd mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 1021b4d1 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 1021b4d4 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 1021b4d7 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1021b4da mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1021b4dd mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1021b4e0 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1021b4e3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1021b4e6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b4e9 jne 0x1021b54f */
  if (!C.zf) goto L_1021b54f;
  /* 1021b4eb mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1021b4ef cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b4f2 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 1021b4f5 jge 0x1021b520 */
  if ((C.sf==C.of)) goto L_1021b520;
  /* 1021b4f7 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1021b4f9 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021b4fd mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1021b501 jne 0x1021b50e */
  if (!C.zf) goto L_1021b50e;
  /* 1021b503 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1021b508 mov ecx, esi */
  ECX = (ESI);
  /* 1021b50a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1021b50c or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1021b50e:;
  /* 1021b50e mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1021b513 mov ecx, esi */
  ECX = (ESI);
  /* 1021b515 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1021b517 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1021b51a or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1021b51e jmp 0x1021b54f */
  goto L_1021b54f;
L_1021b520:;
  /* 1021b520 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1021b522 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021b526 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1021b52a jne 0x1021b539 */
  if (!C.zf) goto L_1021b539;
  /* 1021b52c lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1021b52f mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1021b534 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1021b536 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_1021b539:;
  /* 1021b539 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1021b53c lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1021b543 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1021b546 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1021b54b shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1021b54d or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1021b54f:;
  /* 1021b54f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1021b552:;
  /* 1021b552 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1021b554 je 0x1021b561 */
  if (C.zf) goto L_1021b561;
  /* 1021b556 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1021b558 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1021b55c jmp 0x1021b561 */
  goto L_1021b561;
L_1021b55e:;
  /* 1021b55e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1021b561:;
  /* 1021b561 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 1021b564 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021b566 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 1021b569 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1021b56b mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1021b56f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1021b572 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1021b574 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1021b576 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 1021b579 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1021b57b jne 0x1021b597 */
  if (!C.zf) goto L_1021b597;
  /* 1021b57d cmp ebx, dword ptr [0x102269c4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102269c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b583 jne 0x1021b597 */
  if (!C.zf) goto L_1021b597;
  /* 1021b585 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1021b588 cmp ecx, dword ptr [0x102269bc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x102269bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b58e jne 0x1021b597 */
  if (!C.zf) goto L_1021b597;
  /* 1021b590 and dword ptr [0x102269c4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102269c4)))&(0x0u); w32((uint32_t)(0x102269c4), (_r)); fl_logic(_r,32); }
L_1021b597:;
  /* 1021b597 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1021b59a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1021b59c lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_1021b59f:;
  /* 1021b59f pop edi */
  EDI = (pop32());
  /* 1021b5a0 pop esi */
  ESI = (pop32());
  /* 1021b5a1 pop ebx */
  EBX = (pop32());
  /* 1021b5a2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021b5a3 ret  */
  ESPCHK(0x1021b29bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5a4 @ 0x1021b5a4 (177 bytes, 53 insns) */
void f_1021b5a4(void) {
  FTRACE(0x1021b5a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021b5a4 mov eax, dword ptr [0x102269c8] */
  EAX = (r32((uint32_t)(0x102269c8)));
  /* 1021b5a9 mov ecx, dword ptr [0x102269b8] */
  ECX = (r32((uint32_t)(0x102269b8)));
  /* 1021b5af push esi */
  push32((uint32_t)(ESI));
  /* 1021b5b0 push edi */
  push32((uint32_t)(EDI));
  /* 1021b5b1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1021b5b3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b5b5 jne 0x1021b5e7 */
  if (!C.zf) goto L_1021b5e7;
  /* 1021b5b7 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 1021b5bb shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1021b5be push eax */
  push32((uint32_t)(EAX));
  /* 1021b5bf push dword ptr [0x102269cc] */
  push32((uint32_t)(r32((uint32_t)(0x102269cc))));
  /* 1021b5c5 push edi */
  push32((uint32_t)(EDI));
  /* 1021b5c6 push dword ptr [0x10227c24] */
  push32((uint32_t)(r32((uint32_t)(0x10227c24))));
  /* 1021b5cc call dword ptr [0x1021e0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e0ac))), 0x1021b5d2u);
  /* 1021b5d2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b5d4 je 0x1021b637 */
  if (C.zf) goto L_1021b637;
  /* 1021b5d6 add dword ptr [0x102269b8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x102269b8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x102269b8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1021b5dd mov dword ptr [0x102269cc], eax */
  w32((uint32_t)(0x102269cc), (EAX));
  /* 1021b5e2 mov eax, dword ptr [0x102269c8] */
  EAX = (r32((uint32_t)(0x102269c8)));
L_1021b5e7:;
  /* 1021b5e7 mov ecx, dword ptr [0x102269cc] */
  ECX = (r32((uint32_t)(0x102269cc)));
  /* 1021b5ed push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1021b5f2 push 8 */
  push32((uint32_t)(0x8u));
  /* 1021b5f4 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1021b5f7 push dword ptr [0x10227c24] */
  push32((uint32_t)(r32((uint32_t)(0x10227c24))));
  /* 1021b5fd lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1021b600 call dword ptr [0x1021e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e098))), 0x1021b606u);
  /* 1021b606 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b608 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 1021b60b je 0x1021b637 */
  if (C.zf) goto L_1021b637;
  /* 1021b60d push 4 */
  push32((uint32_t)(0x4u));
  /* 1021b60f push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1021b614 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1021b619 push edi */
  push32((uint32_t)(EDI));
  /* 1021b61a call dword ptr [0x1021e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e0a8))), 0x1021b620u);
  /* 1021b620 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b622 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1021b625 jne 0x1021b63b */
  if (!C.zf) goto L_1021b63b;
  /* 1021b627 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1021b62a push edi */
  push32((uint32_t)(EDI));
  /* 1021b62b push dword ptr [0x10227c24] */
  push32((uint32_t)(r32((uint32_t)(0x10227c24))));
  /* 1021b631 call dword ptr [0x1021e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e080))), 0x1021b637u);
L_1021b637:;
  /* 1021b637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021b639 jmp 0x1021b652 */
  goto L_1021b652;
L_1021b63b:;
  /* 1021b63b or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1021b63f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1021b641 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 1021b644 inc dword ptr [0x102269c8] */
  { uint32_t _r=(r32((uint32_t)(0x102269c8)))+1; w32((uint32_t)(0x102269c8), (_r)); fl_inc(_r,32); }
  /* 1021b64a mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1021b64d or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1021b650 mov eax, esi */
  EAX = (ESI);
L_1021b652:;
  /* 1021b652 pop edi */
  EDI = (pop32());
  /* 1021b653 pop esi */
  ESI = (pop32());
  /* 1021b654 ret  */
  ESPCHK(0x1021b5a4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b655 @ 0x1021b655 (251 bytes, 85 insns) */
void f_1021b655(void) {
  FTRACE(0x1021b655u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021b655 push ebp */
  push32((uint32_t)(EBP));
  /* 1021b656 mov ebp, esp */
  EBP = (ESP);
  /* 1021b658 push ecx */
  push32((uint32_t)(ECX));
  /* 1021b659 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021b65c push ebx */
  push32((uint32_t)(EBX));
  /* 1021b65d push esi */
  push32((uint32_t)(ESI));
  /* 1021b65e push edi */
  push32((uint32_t)(EDI));
  /* 1021b65f mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 1021b662 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 1021b665 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1021b667:;
  /* 1021b667 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021b669 jl 0x1021b670 */
  if ((C.sf!=C.of)) goto L_1021b670;
  /* 1021b66b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1021b66d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1021b66e jmp 0x1021b667 */
  goto L_1021b667;
L_1021b670:;
  /* 1021b670 mov eax, ebx */
  EAX = (EBX);
  /* 1021b672 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1021b674 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1021b67a pop edx */
  EDX = (pop32());
  /* 1021b67b lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 1021b682 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1021b685:;
  /* 1021b685 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 1021b688 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 1021b68b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021b68e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1021b68f jne 0x1021b685 */
  if (!C.zf) goto L_1021b685;
  /* 1021b691 mov edi, ebx */
  EDI = (EBX);
  /* 1021b693 push 4 */
  push32((uint32_t)(0x4u));
  /* 1021b695 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 1021b698 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021b69b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1021b6a0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1021b6a5 push edi */
  push32((uint32_t)(EDI));
  /* 1021b6a6 call dword ptr [0x1021e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e0a8))), 0x1021b6acu);
  /* 1021b6ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021b6ae jne 0x1021b6b8 */
  if (!C.zf) goto L_1021b6b8;
  /* 1021b6b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1021b6b3 jmp 0x1021b74b */
  goto L_1021b74b;
L_1021b6b8:;
  /* 1021b6b8 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 1021b6be cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b6c0 ja 0x1021b6fe */
  if ((!C.cf&&!C.zf)) goto L_1021b6fe;
  /* 1021b6c2 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_1021b6c5:;
  /* 1021b6c5 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 1021b6c9 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 1021b6d0 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 1021b6d6 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1021b6dd mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1021b6df lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 1021b6e5 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1021b6e8 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 1021b6f2 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021b6f7 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 1021b6fa cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b6fc jbe 0x1021b6c5 */
  if ((C.cf||C.zf)) goto L_1021b6c5;
L_1021b6fe:;
  /* 1021b6fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1021b701 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 1021b704 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021b709 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021b70b pop edi */
  EDI = (pop32());
  /* 1021b70c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1021b70f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1021b712 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 1021b715 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1021b718 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1021b71b and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1021b720 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 1021b727 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 1021b72a mov cl, al */
  CL = (AL);
  /* 1021b72c inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1021b72e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1021b730 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021b733 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 1021b736 jne 0x1021b73b */
  if (!C.zf) goto L_1021b73b;
  /* 1021b738 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_1021b73b:;
  /* 1021b73b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1021b740 mov ecx, ebx */
  ECX = (EBX);
  /* 1021b742 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1021b744 not edx */
  EDX = (~(EDX));
  /* 1021b746 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1021b749 mov eax, ebx */
  EAX = (EBX);
L_1021b74b:;
  /* 1021b74b pop edi */
  EDI = (pop32());
  /* 1021b74c pop esi */
  ESI = (pop32());
  /* 1021b74d pop ebx */
  EBX = (pop32());
  /* 1021b74e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021b74f ret  */
  ESPCHK(0x1021b655u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b750 @ 0x1021b750 (324 bytes, 102 insns) */
void f_1021b750(void) {
  FTRACE(0x1021b750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021b750 cmp dword ptr [0x10220e70], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10220e70))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b757 push ebx */
  push32((uint32_t)(EBX));
  /* 1021b758 push ebp */
  push32((uint32_t)(EBP));
  /* 1021b759 push esi */
  push32((uint32_t)(ESI));
  /* 1021b75a push edi */
  push32((uint32_t)(EDI));
  /* 1021b75b jne 0x1021b764 */
  if (!C.zf) goto L_1021b764;
  /* 1021b75d mov esi, 0x10220e60 */
  ESI = (0x10220e60u);
  /* 1021b762 jmp 0x1021b781 */
  goto L_1021b781;
L_1021b764:;
  /* 1021b764 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 1021b769 push 0 */
  push32((uint32_t)(0x0u));
  /* 1021b76b push dword ptr [0x10227c24] */
  push32((uint32_t)(r32((uint32_t)(0x10227c24))));
  /* 1021b771 call dword ptr [0x1021e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e098))), 0x1021b777u);
  /* 1021b777 mov esi, eax */
  ESI = (EAX);
  /* 1021b779 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1021b77b je 0x1021b88d */
  if (C.zf) goto L_1021b88d;
L_1021b781:;
  /* 1021b781 mov ebp, dword ptr [0x1021e0a8] */
  EBP = (r32((uint32_t)(0x1021e0a8)));
  /* 1021b787 push 4 */
  push32((uint32_t)(0x4u));
  /* 1021b789 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1021b78e push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 1021b793 push 0 */
  push32((uint32_t)(0x0u));
  /* 1021b795 call ebp */
  call_ind((uint32_t)(EBP), 0x1021b797u);
  /* 1021b797 mov edi, eax */
  EDI = (EAX);
  /* 1021b799 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1021b79b je 0x1021b876 */
  if (C.zf) goto L_1021b876;
  /* 1021b7a1 push 4 */
  push32((uint32_t)(0x4u));
  /* 1021b7a3 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 1021b7a8 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1021b7ad push ebx */
  push32((uint32_t)(EBX));
  /* 1021b7ae push edi */
  push32((uint32_t)(EDI));
  /* 1021b7af call ebp */
  call_ind((uint32_t)(EBP), 0x1021b7b1u);
  /* 1021b7b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021b7b3 je 0x1021b868 */
  if (C.zf) goto L_1021b868;
  /* 1021b7b9 mov eax, 0x10220e60 */
  EAX = (0x10220e60u);
  /* 1021b7be cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b7c0 jne 0x1021b7e0 */
  if (!C.zf) goto L_1021b7e0;
  /* 1021b7c2 cmp dword ptr [0x10220e60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10220e60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b7c9 jne 0x1021b7d0 */
  if (!C.zf) goto L_1021b7d0;
  /* 1021b7cb mov dword ptr [0x10220e60], eax */
  w32((uint32_t)(0x10220e60), (EAX));
L_1021b7d0:;
  /* 1021b7d0 cmp dword ptr [0x10220e64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10220e64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b7d7 jne 0x1021b7f5 */
  if (!C.zf) goto L_1021b7f5;
  /* 1021b7d9 mov dword ptr [0x10220e64], eax */
  w32((uint32_t)(0x10220e64), (EAX));
  /* 1021b7de jmp 0x1021b7f5 */
  goto L_1021b7f5;
L_1021b7e0:;
  /* 1021b7e0 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1021b7e2 mov eax, dword ptr [0x10220e64] */
  EAX = (r32((uint32_t)(0x10220e64)));
  /* 1021b7e7 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1021b7ea mov dword ptr [0x10220e64], esi */
  w32((uint32_t)(0x10220e64), (ESI));
  /* 1021b7f0 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1021b7f3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1021b7f5:;
  /* 1021b7f5 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 1021b7fb lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 1021b801 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 1021b804 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 1021b807 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 1021b80a mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 1021b80d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1021b810 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 1021b812 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_1021b817:;
  /* 1021b817 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1021b819 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b81c setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 1021b81f dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1021b820 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1021b822 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1021b823 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1021b824 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1021b826 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1021b829 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021b82c cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b832 jl 0x1021b817 */
  if ((C.sf!=C.of)) goto L_1021b817;
  /* 1021b834 push ebx */
  push32((uint32_t)(EBX));
  /* 1021b835 push 0 */
  push32((uint32_t)(0x0u));
  /* 1021b837 push edi */
  push32((uint32_t)(EDI));
  /* 1021b838 call 0x10219be0 */
  push32(0x1021b83du); f_10219be0();
  /* 1021b83d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021b840:;
  /* 1021b840 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1021b843 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021b845 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b847 jae 0x1021b864 */
  if (!C.cf) goto L_1021b864;
  /* 1021b849 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 1021b850 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 1021b853 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1021b855 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 1021b85c add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021b862 jmp 0x1021b840 */
  goto L_1021b840;
L_1021b864:;
  /* 1021b864 mov eax, esi */
  EAX = (ESI);
  /* 1021b866 jmp 0x1021b88f */
  goto L_1021b88f;
L_1021b868:;
  /* 1021b868 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1021b86d push 0 */
  push32((uint32_t)(0x0u));
  /* 1021b86f push edi */
  push32((uint32_t)(EDI));
  /* 1021b870 call dword ptr [0x1021e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e07c))), 0x1021b876u);
L_1021b876:;
  /* 1021b876 cmp esi, 0x10220e60 */
  { uint32_t _a=(ESI),_b=(0x10220e60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b87c je 0x1021b88d */
  if (C.zf) goto L_1021b88d;
  /* 1021b87e push esi */
  push32((uint32_t)(ESI));
  /* 1021b87f push 0 */
  push32((uint32_t)(0x0u));
  /* 1021b881 push dword ptr [0x10227c24] */
  push32((uint32_t)(r32((uint32_t)(0x10227c24))));
  /* 1021b887 call dword ptr [0x1021e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e080))), 0x1021b88du);
L_1021b88d:;
  /* 1021b88d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1021b88f:;
  /* 1021b88f pop edi */
  EDI = (pop32());
  /* 1021b890 pop esi */
  ESI = (pop32());
  /* 1021b891 pop ebp */
  EBP = (pop32());
  /* 1021b892 pop ebx */
  EBX = (pop32());
  /* 1021b893 ret  */
  ESPCHK(0x1021b750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b894 @ 0x1021b894 (86 bytes, 27 insns) */
void f_1021b894(void) {
  FTRACE(0x1021b894u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021b894 push esi */
  push32((uint32_t)(ESI));
  /* 1021b895 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1021b899 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1021b89e push 0 */
  push32((uint32_t)(0x0u));
  /* 1021b8a0 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1021b8a3 call dword ptr [0x1021e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e07c))), 0x1021b8a9u);
  /* 1021b8a9 cmp dword ptr [0x10222e80], esi */
  { uint32_t _a=(r32((uint32_t)(0x10222e80))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b8af jne 0x1021b8b9 */
  if (!C.zf) goto L_1021b8b9;
  /* 1021b8b1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1021b8b4 mov dword ptr [0x10222e80], eax */
  w32((uint32_t)(0x10222e80), (EAX));
L_1021b8b9:;
  /* 1021b8b9 cmp esi, 0x10220e60 */
  { uint32_t _a=(ESI),_b=(0x10220e60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b8bf je 0x1021b8e1 */
  if (C.zf) goto L_1021b8e1;
  /* 1021b8c1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1021b8c4 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1021b8c6 push esi */
  push32((uint32_t)(ESI));
  /* 1021b8c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1021b8c9 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1021b8cb mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1021b8cd mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1021b8d0 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1021b8d3 push dword ptr [0x10227c24] */
  push32((uint32_t)(r32((uint32_t)(0x10227c24))));
  /* 1021b8d9 call dword ptr [0x1021e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e080))), 0x1021b8dfu);
  /* 1021b8df pop esi */
  ESI = (pop32());
  /* 1021b8e0 ret  */
  ESPCHK(0x1021b894u, _esp0);
  ESP += 4; return;
L_1021b8e1:;
  /* 1021b8e1 or dword ptr [0x10220e70], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10220e70)))|(0xffffffffu); w32((uint32_t)(0x10220e70), (_r)); fl_logic(_r,32); }
  /* 1021b8e8 pop esi */
  ESI = (pop32());
  /* 1021b8e9 ret  */
  ESPCHK(0x1021b894u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8ea @ 0x1021b8ea (194 bytes, 66 insns) */
void f_1021b8ea(void) {
  FTRACE(0x1021b8eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021b8ea push ebp */
  push32((uint32_t)(EBP));
  /* 1021b8eb mov ebp, esp */
  EBP = (ESP);
  /* 1021b8ed push ecx */
  push32((uint32_t)(ECX));
  /* 1021b8ee push ebx */
  push32((uint32_t)(EBX));
  /* 1021b8ef push esi */
  push32((uint32_t)(ESI));
  /* 1021b8f0 mov esi, dword ptr [0x10220e64] */
  ESI = (r32((uint32_t)(0x10220e64)));
  /* 1021b8f6 push edi */
  push32((uint32_t)(EDI));
L_1021b8f7:;
  /* 1021b8f7 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b8fb je 0x1021b995 */
  if (C.zf) goto L_1021b995;
  /* 1021b901 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1021b905 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 1021b90b mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_1021b910:;
  /* 1021b910 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b916 jne 0x1021b951 */
  if (!C.zf) goto L_1021b951;
  /* 1021b918 mov eax, ebx */
  EAX = (EBX);
  /* 1021b91a push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1021b91f add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021b922 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1021b927 push eax */
  push32((uint32_t)(EAX));
  /* 1021b928 call dword ptr [0x1021e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e07c))), 0x1021b92eu);
  /* 1021b92e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021b930 je 0x1021b951 */
  if (C.zf) goto L_1021b951;
  /* 1021b932 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 1021b935 dec dword ptr [0x10226814] */
  { uint32_t _r=(r32((uint32_t)(0x10226814)))-1; w32((uint32_t)(0x10226814), (_r)); fl_dec(_r,32); }
  /* 1021b93b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1021b93e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021b940 je 0x1021b946 */
  if (C.zf) goto L_1021b946;
  /* 1021b942 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b944 jbe 0x1021b949 */
  if ((C.cf||C.zf)) goto L_1021b949;
L_1021b946:;
  /* 1021b946 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_1021b949:;
  /* 1021b949 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1021b94c dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 1021b94f je 0x1021b95e */
  if (C.zf) goto L_1021b95e;
L_1021b951:;
  /* 1021b951 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021b957 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021b95a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1021b95c jge 0x1021b910 */
  if ((C.sf==C.of)) goto L_1021b910;
L_1021b95e:;
  /* 1021b95e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b962 mov ecx, esi */
  ECX = (ESI);
  /* 1021b964 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 1021b967 je 0x1021b995 */
  if (C.zf) goto L_1021b995;
  /* 1021b969 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b96d jne 0x1021b995 */
  if (!C.zf) goto L_1021b995;
  /* 1021b96f push 1 */
  push32((uint32_t)(0x1u));
  /* 1021b971 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 1021b974 pop edx */
  EDX = (pop32());
L_1021b975:;
  /* 1021b975 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b978 jne 0x1021b986 */
  if (!C.zf) goto L_1021b986;
  /* 1021b97a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1021b97b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021b97e cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b984 jl 0x1021b975 */
  if ((C.sf!=C.of)) goto L_1021b975;
L_1021b986:;
  /* 1021b986 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b98c jne 0x1021b995 */
  if (!C.zf) goto L_1021b995;
  /* 1021b98e push ecx */
  push32((uint32_t)(ECX));
  /* 1021b98f call 0x1021b894 */
  push32(0x1021b994u); f_1021b894();
  /* 1021b994 pop ecx */
  ECX = (pop32());
L_1021b995:;
  /* 1021b995 cmp esi, dword ptr [0x10220e64] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10220e64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b99b je 0x1021b9a7 */
  if (C.zf) goto L_1021b9a7;
  /* 1021b99d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b9a1 jg 0x1021b8f7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1021b8f7;
L_1021b9a7:;
  /* 1021b9a7 pop edi */
  EDI = (pop32());
  /* 1021b9a8 pop esi */
  ESI = (pop32());
  /* 1021b9a9 pop ebx */
  EBX = (pop32());
  /* 1021b9aa leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021b9ab ret  */
  ESPCHK(0x1021b8eau, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9ac @ 0x1021b9ac (87 bytes, 34 insns) */
void f_1021b9ac(void) {
  FTRACE(0x1021b9acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021b9ac mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1021b9b0 mov edx, 0x10220e60 */
  EDX = (0x10220e60u);
  /* 1021b9b5 push esi */
  push32((uint32_t)(ESI));
  /* 1021b9b6 mov ecx, edx */
  ECX = (EDX);
L_1021b9b8:;
  /* 1021b9b8 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b9bb jbe 0x1021b9c2 */
  if ((C.cf||C.zf)) goto L_1021b9c2;
  /* 1021b9bd cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b9c0 jb 0x1021b9ca */
  if (C.cf) goto L_1021b9ca;
L_1021b9c2:;
  /* 1021b9c2 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1021b9c4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b9c6 je 0x1021b9ff */
  if (C.zf) goto L_1021b9ff;
  /* 1021b9c8 jmp 0x1021b9b8 */
  goto L_1021b9b8;
L_1021b9ca:;
  /* 1021b9ca test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 1021b9cc jne 0x1021b9ff */
  if (!C.zf) goto L_1021b9ff;
  /* 1021b9ce mov esi, eax */
  ESI = (EAX);
  /* 1021b9d0 mov edx, 0x100 */
  EDX = (0x100u);
  /* 1021b9d5 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 1021b9db cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021b9dd jb 0x1021b9ff */
  if (C.cf) goto L_1021b9ff;
  /* 1021b9df mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1021b9e3 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1021b9e5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 1021b9e9 mov ecx, eax */
  ECX = (EAX);
  /* 1021b9eb and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 1021b9f0 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021b9f2 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1021b9f4 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021b9f6 pop esi */
  ESI = (pop32());
  /* 1021b9f7 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1021b9fa lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 1021b9fe ret  */
  ESPCHK(0x1021b9acu, _esp0);
  ESP += 4; return;
L_1021b9ff:;
  /* 1021b9ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021ba01 pop esi */
  ESI = (pop32());
  /* 1021ba02 ret  */
  ESPCHK(0x1021b9acu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba03 @ 0x1021ba03 (69 bytes, 19 insns) */
void f_1021ba03(void) {
  FTRACE(0x1021ba03u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021ba03 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1021ba07 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1021ba0b sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021ba0e sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 1021ba11 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 1021ba15 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1021ba19 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1021ba1c add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1021ba1e and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1021ba21 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021ba27 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 1021ba2e jne 0x1021ba47 */
  if (!C.zf) goto L_1021ba47;
  /* 1021ba30 inc dword ptr [0x10226814] */
  { uint32_t _r=(r32((uint32_t)(0x10226814)))+1; w32((uint32_t)(0x10226814), (_r)); fl_inc(_r,32); }
  /* 1021ba36 cmp dword ptr [0x10226814], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10226814))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021ba3d jne 0x1021ba47 */
  if (!C.zf) goto L_1021ba47;
  /* 1021ba3f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1021ba41 call 0x1021b8ea */
  push32(0x1021ba46u); f_1021b8ea();
  /* 1021ba46 pop ecx */
  ECX = (pop32());
L_1021ba47:;
  /* 1021ba47 ret  */
  ESPCHK(0x1021ba03u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba48 @ 0x1021ba48 (520 bytes, 180 insns) */
void f_1021ba48(void) {
  FTRACE(0x1021ba48u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021ba48 push ebp */
  push32((uint32_t)(EBP));
  /* 1021ba49 mov ebp, esp */
  EBP = (ESP);
  /* 1021ba4b push ecx */
  push32((uint32_t)(ECX));
  /* 1021ba4c push ecx */
  push32((uint32_t)(ECX));
  /* 1021ba4d push ebx */
  push32((uint32_t)(EBX));
  /* 1021ba4e push esi */
  push32((uint32_t)(ESI));
  /* 1021ba4f mov esi, dword ptr [0x10222e80] */
  ESI = (r32((uint32_t)(0x10222e80)));
  /* 1021ba55 push edi */
  push32((uint32_t)(EDI));
L_1021ba56:;
  /* 1021ba56 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 1021ba59 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021ba5c je 0x1021bb01 */
  if (C.zf) goto L_1021bb01;
  /* 1021ba62 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 1021ba65 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 1021ba6b mov eax, edi */
  EAX = (EDI);
  /* 1021ba6d sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021ba6f sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021ba72 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 1021ba75 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 1021ba78 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021ba7a cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021ba7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1021ba7f jae 0x1021babb */
  if (!C.cf) goto L_1021babb;
L_1021ba81:;
  /* 1021ba81 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 1021ba83 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021ba86 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021ba88 jl 0x1021baa4 */
  if ((C.sf!=C.of)) goto L_1021baa4;
  /* 1021ba8a cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021ba8d jbe 0x1021baa4 */
  if ((C.cf||C.zf)) goto L_1021baa4;
  /* 1021ba8f push ebx */
  push32((uint32_t)(EBX));
  /* 1021ba90 push ecx */
  push32((uint32_t)(ECX));
  /* 1021ba91 push eax */
  push32((uint32_t)(EAX));
  /* 1021ba92 call 0x1021bc50 */
  push32(0x1021ba97u); f_1021bc50();
  /* 1021ba97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021ba9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021ba9c jne 0x1021bb13 */
  if (!C.zf) goto L_1021bb13;
  /* 1021ba9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1021baa1 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_1021baa4:;
  /* 1021baa4 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021baa7 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 1021baad add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021bab2 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bab4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1021bab7 jb 0x1021ba81 */
  if (C.cf) goto L_1021ba81;
  /* 1021bab9 jmp 0x1021babe */
  goto L_1021babe;
L_1021babb:;
  /* 1021babb mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1021babe:;
  /* 1021babe mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1021bac1 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 1021bac4 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 1021bac7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1021baca cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bacc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1021bacf jae 0x1021bb04 */
  if (!C.cf) goto L_1021bb04;
L_1021bad1:;
  /* 1021bad1 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1021bad3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bad5 jl 0x1021baf0 */
  if ((C.sf!=C.of)) goto L_1021baf0;
  /* 1021bad7 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bada jbe 0x1021baf0 */
  if ((C.cf||C.zf)) goto L_1021baf0;
  /* 1021badc push ebx */
  push32((uint32_t)(EBX));
  /* 1021badd push eax */
  push32((uint32_t)(EAX));
  /* 1021bade push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 1021bae1 call 0x1021bc50 */
  push32(0x1021bae6u); f_1021bc50();
  /* 1021bae6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021bae9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021baeb jne 0x1021bb13 */
  if (!C.zf) goto L_1021bb13;
  /* 1021baed mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_1021baf0:;
  /* 1021baf0 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1021baf7 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021bafa cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bafd jb 0x1021bad1 */
  if (C.cf) goto L_1021bad1;
  /* 1021baff jmp 0x1021bb04 */
  goto L_1021bb04;
L_1021bb01:;
  /* 1021bb01 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1021bb04:;
  /* 1021bb04 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 1021bb06 cmp esi, dword ptr [0x10222e80] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10222e80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bb0c je 0x1021bb23 */
  if (C.zf) goto L_1021bb23;
  /* 1021bb0e jmp 0x1021ba56 */
  goto L_1021ba56;
L_1021bb13:;
  /* 1021bb13 mov dword ptr [0x10222e80], esi */
  w32((uint32_t)(0x10222e80), (ESI));
  /* 1021bb19 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1021bb1b mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 1021bb1e jmp 0x1021bc4b */
  goto L_1021bc4b;
L_1021bb23:;
  /* 1021bb23 mov eax, 0x10220e60 */
  EAX = (0x10220e60u);
  /* 1021bb28 mov edi, eax */
  EDI = (EAX);
L_1021bb2a:;
  /* 1021bb2a cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bb2e je 0x1021bb36 */
  if (C.zf) goto L_1021bb36;
  /* 1021bb30 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bb34 jne 0x1021bb42 */
  if (!C.zf) goto L_1021bb42;
L_1021bb36:;
  /* 1021bb36 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 1021bb38 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bb3a je 0x1021bc17 */
  if (C.zf) goto L_1021bc17;
  /* 1021bb40 jmp 0x1021bb2a */
  goto L_1021bb2a;
L_1021bb42:;
  /* 1021bb42 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 1021bb45 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1021bb49 mov esi, ebx */
  ESI = (EBX);
  /* 1021bb4b mov eax, ebx */
  EAX = (EBX);
  /* 1021bb4d sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021bb4f sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021bb52 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 1021bb55 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 1021bb58 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021bb5b cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bb5e jne 0x1021bb71 */
  if (!C.zf) goto L_1021bb71;
L_1021bb60:;
  /* 1021bb60 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bb64 jge 0x1021bb71 */
  if ((C.sf==C.of)) goto L_1021bb71;
  /* 1021bb66 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021bb69 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1021bb6c cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bb6f je 0x1021bb60 */
  if (C.zf) goto L_1021bb60;
L_1021bb71:;
  /* 1021bb71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1021bb74 push 4 */
  push32((uint32_t)(0x4u));
  /* 1021bb76 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 1021bb79 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1021bb7e push eax */
  push32((uint32_t)(EAX));
  /* 1021bb7f push esi */
  push32((uint32_t)(ESI));
  /* 1021bb80 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1021bb83 call dword ptr [0x1021e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e0a8))), 0x1021bb89u);
  /* 1021bb89 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bb8b jne 0x1021bc49 */
  if (!C.zf) goto L_1021bc49;
  /* 1021bb91 push 0 */
  push32((uint32_t)(0x0u));
  /* 1021bb93 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 1021bb96 push esi */
  push32((uint32_t)(ESI));
  /* 1021bb97 call 0x10219be0 */
  push32(0x1021bb9cu); f_10219be0();
  /* 1021bb9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1021bb9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021bba2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1021bba4 mov ecx, ebx */
  ECX = (EBX);
  /* 1021bba6 jle 0x1021bbd8 */
  if ((C.zf||C.sf!=C.of)) goto L_1021bbd8;
  /* 1021bba8 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1021bbab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1021bbae:;
  /* 1021bbae or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 1021bbb5 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 1021bbb8 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 1021bbbb mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1021bbc0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1021bbc2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1021bbc4 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 1021bbcb add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021bbd0 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021bbd3 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1021bbd6 jne 0x1021bbae */
  if (!C.zf) goto L_1021bbae;
L_1021bbd8:;
  /* 1021bbd8 mov dword ptr [0x10222e80], edi */
  w32((uint32_t)(0x10222e80), (EDI));
  /* 1021bbde lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_1021bbe4:;
  /* 1021bbe4 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bbe6 jae 0x1021bbf4 */
  if (!C.cf) goto L_1021bbf4;
  /* 1021bbe8 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bbeb je 0x1021bbf2 */
  if (C.zf) goto L_1021bbf2;
  /* 1021bbed add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021bbf0 jmp 0x1021bbe4 */
  goto L_1021bbe4;
L_1021bbf2:;
  /* 1021bbf2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1021bbf4:;
  /* 1021bbf4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021bbf6 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 1021bbf8 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 1021bbfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021bbfe mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 1021bc01 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 1021bc04 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1021bc06 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1021bc09 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 1021bc0d lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 1021bc13 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1021bc15 jmp 0x1021bc4b */
  goto L_1021bc4b;
L_1021bc17:;
  /* 1021bc17 call 0x1021b750 */
  push32(0x1021bc1cu); f_1021b750();
  /* 1021bc1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021bc1e je 0x1021bc49 */
  if (C.zf) goto L_1021bc49;
  /* 1021bc20 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1021bc23 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 1021bc26 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 1021bc2a mov dword ptr [0x10222e80], eax */
  w32((uint32_t)(0x10222e80), (EAX));
  /* 1021bc2f mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1021bc31 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1021bc36 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021bc38 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1021bc3b movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 1021bc3e sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1021bc41 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 1021bc47 jmp 0x1021bc4b */
  goto L_1021bc4b;
L_1021bc49:;
  /* 1021bc49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1021bc4b:;
  /* 1021bc4b pop edi */
  EDI = (pop32());
  /* 1021bc4c pop esi */
  ESI = (pop32());
  /* 1021bc4d pop ebx */
  EBX = (pop32());
  /* 1021bc4e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021bc4f ret  */
  ESPCHK(0x1021ba48u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc50 @ 0x1021bc50 (292 bytes, 125 insns) */
void f_1021bc50(void) {
  FTRACE(0x1021bc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021bc50 push ebp */
  push32((uint32_t)(EBP));
  /* 1021bc51 mov ebp, esp */
  EBP = (ESP);
  /* 1021bc53 push ecx */
  push32((uint32_t)(ECX));
  /* 1021bc54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021bc57 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1021bc5a push ebx */
  push32((uint32_t)(EBX));
  /* 1021bc5b push esi */
  push32((uint32_t)(ESI));
  /* 1021bc5c mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1021bc5f push edi */
  push32((uint32_t)(EDI));
  /* 1021bc60 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 1021bc62 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 1021bc68 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bc6a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1021bc6d mov eax, edi */
  EAX = (EDI);
  /* 1021bc6f mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1021bc72 jb 0x1021bc95 */
  if (C.cf) goto L_1021bc95;
  /* 1021bc74 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 1021bc77 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1021bc79 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bc7b jae 0x1021bc84 */
  if (!C.cf) goto L_1021bc84;
  /* 1021bc7d add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1021bc7f sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1021bc82 jmp 0x1021bc8d */
  goto L_1021bc8d;
L_1021bc84:;
  /* 1021bc84 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1021bc88 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 1021bc8b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1021bc8d:;
  /* 1021bc8d lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 1021bc90 jmp 0x1021bd63 */
  goto L_1021bd63;
L_1021bc95:;
  /* 1021bc95 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021bc97 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021bc9a je 0x1021bc9e */
  if (C.zf) goto L_1021bc9e;
  /* 1021bc9c mov eax, esi */
  EAX = (ESI);
L_1021bc9e:;
  /* 1021bc9e lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 1021bca1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bca3 jae 0x1021bce8 */
  if (!C.cf) goto L_1021bce8;
L_1021bca5:;
  /* 1021bca5 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1021bca7 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 1021bca9 jne 0x1021bcdb */
  if (!C.zf) goto L_1021bcdb;
  /* 1021bcab push 1 */
  push32((uint32_t)(0x1u));
  /* 1021bcad lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 1021bcb0 pop esi */
  ESI = (pop32());
L_1021bcb1:;
  /* 1021bcb1 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021bcb4 jne 0x1021bcba */
  if (!C.zf) goto L_1021bcba;
  /* 1021bcb6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1021bcb7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1021bcb8 jmp 0x1021bcb1 */
  goto L_1021bcb1;
L_1021bcba:;
  /* 1021bcba cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bcbc jae 0x1021bd0c */
  if (!C.cf) goto L_1021bd0c;
  /* 1021bcbe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bcc1 jne 0x1021bcc8 */
  if (!C.zf) goto L_1021bcc8;
  /* 1021bcc3 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1021bcc6 jmp 0x1021bcd4 */
  goto L_1021bcd4;
L_1021bcc8:;
  /* 1021bcc8 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1021bccb cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bcce jb 0x1021bd6d */
  if (C.cf) goto L_1021bd6d;
L_1021bcd4:;
  /* 1021bcd4 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 1021bcd7 mov eax, ebx */
  EAX = (EBX);
  /* 1021bcd9 jmp 0x1021bce0 */
  goto L_1021bce0;
L_1021bcdb:;
  /* 1021bcdb movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1021bcde add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1021bce0:;
  /* 1021bce0 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 1021bce3 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bce6 jb 0x1021bca5 */
  if (C.cf) goto L_1021bca5;
L_1021bce8:;
  /* 1021bce8 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_1021bceb:;
  /* 1021bceb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bced jae 0x1021bd6d */
  if (!C.cf) goto L_1021bd6d;
  /* 1021bcef lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 1021bcf2 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bcf5 jae 0x1021bd6d */
  if (!C.cf) goto L_1021bd6d;
  /* 1021bcf7 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1021bcf9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1021bcfb jne 0x1021bd3d */
  if (!C.zf) goto L_1021bd3d;
  /* 1021bcfd push 1 */
  push32((uint32_t)(0x1u));
  /* 1021bcff lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 1021bd02 pop eax */
  EAX = (pop32());
L_1021bd03:;
  /* 1021bd03 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021bd06 jne 0x1021bd2d */
  if (!C.zf) goto L_1021bd2d;
  /* 1021bd08 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1021bd09 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1021bd0a jmp 0x1021bd03 */
  goto L_1021bd03;
L_1021bd0c:;
  /* 1021bd0c lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 1021bd0f cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bd12 jae 0x1021bd1d */
  if (!C.cf) goto L_1021bd1d;
  /* 1021bd14 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021bd16 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1021bd18 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1021bd1b jmp 0x1021bd26 */
  goto L_1021bd26;
L_1021bd1d:;
  /* 1021bd1d and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1021bd21 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 1021bd24 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_1021bd26:;
  /* 1021bd26 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1021bd28 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021bd2b jmp 0x1021bd63 */
  goto L_1021bd63;
L_1021bd2d:;
  /* 1021bd2d cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bd2f jae 0x1021bd44 */
  if (!C.cf) goto L_1021bd44;
  /* 1021bd31 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1021bd34 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bd37 jb 0x1021bd6d */
  if (C.cf) goto L_1021bd6d;
  /* 1021bd39 mov esi, ebx */
  ESI = (EBX);
  /* 1021bd3b jmp 0x1021bceb */
  goto L_1021bceb;
L_1021bd3d:;
  /* 1021bd3d movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1021bd40 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021bd42 jmp 0x1021bceb */
  goto L_1021bceb;
L_1021bd44:;
  /* 1021bd44 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 1021bd47 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bd4a jae 0x1021bd55 */
  if (!C.cf) goto L_1021bd55;
  /* 1021bd4c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021bd4e mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1021bd50 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1021bd53 jmp 0x1021bd5e */
  goto L_1021bd5e;
L_1021bd55:;
  /* 1021bd55 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1021bd59 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 1021bd5c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1021bd5e:;
  /* 1021bd5e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1021bd60 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_1021bd63:;
  /* 1021bd63 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1021bd66 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1021bd69 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021bd6b jmp 0x1021bd6f */
  goto L_1021bd6f;
L_1021bd6d:;
  /* 1021bd6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1021bd6f:;
  /* 1021bd6f pop edi */
  EDI = (pop32());
  /* 1021bd70 pop esi */
  ESI = (pop32());
  /* 1021bd71 pop ebx */
  EBX = (pop32());
  /* 1021bd72 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021bd73 ret  */
  ESPCHK(0x1021bc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd74 @ 0x1021bd74 (137 bytes, 50 insns) */
void f_1021bd74(void) {
  FTRACE(0x1021bd74u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021bd74 push ebx */
  push32((uint32_t)(EBX));
  /* 1021bd75 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1021bd77 cmp dword ptr [0x10226818], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10226818))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bd7d push esi */
  push32((uint32_t)(ESI));
  /* 1021bd7e push edi */
  push32((uint32_t)(EDI));
  /* 1021bd7f jne 0x1021bdc3 */
  if (!C.zf) goto L_1021bdc3;
  /* 1021bd81 push 0x1021e548 */
  push32((uint32_t)(0x1021e548u));
  /* 1021bd86 call dword ptr [0x1021e0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e0b0))), 0x1021bd8cu);
  /* 1021bd8c mov edi, eax */
  EDI = (EAX);
  /* 1021bd8e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bd90 je 0x1021bdf9 */
  if (C.zf) goto L_1021bdf9;
  /* 1021bd92 mov esi, dword ptr [0x1021e088] */
  ESI = (r32((uint32_t)(0x1021e088)));
  /* 1021bd98 push 0x1021e53c */
  push32((uint32_t)(0x1021e53cu));
  /* 1021bd9d push edi */
  push32((uint32_t)(EDI));
  /* 1021bd9e call esi */
  call_ind((uint32_t)(ESI), 0x1021bda0u);
  /* 1021bda0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021bda2 mov dword ptr [0x10226818], eax */
  w32((uint32_t)(0x10226818), (EAX));
  /* 1021bda7 je 0x1021bdf9 */
  if (C.zf) goto L_1021bdf9;
  /* 1021bda9 push 0x1021e52c */
  push32((uint32_t)(0x1021e52cu));
  /* 1021bdae push edi */
  push32((uint32_t)(EDI));
  /* 1021bdaf call esi */
  call_ind((uint32_t)(ESI), 0x1021bdb1u);
  /* 1021bdb1 push 0x1021e518 */
  push32((uint32_t)(0x1021e518u));
  /* 1021bdb6 push edi */
  push32((uint32_t)(EDI));
  /* 1021bdb7 mov dword ptr [0x1022681c], eax */
  w32((uint32_t)(0x1022681c), (EAX));
  /* 1021bdbc call esi */
  call_ind((uint32_t)(ESI), 0x1021bdbeu);
  /* 1021bdbe mov dword ptr [0x10226820], eax */
  w32((uint32_t)(0x10226820), (EAX));
L_1021bdc3:;
  /* 1021bdc3 mov eax, dword ptr [0x1022681c] */
  EAX = (r32((uint32_t)(0x1022681c)));
  /* 1021bdc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021bdca je 0x1021bde2 */
  if (C.zf) goto L_1021bde2;
  /* 1021bdcc call eax */
  call_ind((uint32_t)(EAX), 0x1021bdceu);
  /* 1021bdce mov ebx, eax */
  EBX = (EAX);
  /* 1021bdd0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1021bdd2 je 0x1021bde2 */
  if (C.zf) goto L_1021bde2;
  /* 1021bdd4 mov eax, dword ptr [0x10226820] */
  EAX = (r32((uint32_t)(0x10226820)));
  /* 1021bdd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021bddb je 0x1021bde2 */
  if (C.zf) goto L_1021bde2;
  /* 1021bddd push ebx */
  push32((uint32_t)(EBX));
  /* 1021bdde call eax */
  call_ind((uint32_t)(EAX), 0x1021bde0u);
  /* 1021bde0 mov ebx, eax */
  EBX = (EAX);
L_1021bde2:;
  /* 1021bde2 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1021bde6 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1021bdea push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1021bdee push ebx */
  push32((uint32_t)(EBX));
  /* 1021bdef call dword ptr [0x10226818] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226818))), 0x1021bdf5u);
L_1021bdf5:;
  /* 1021bdf5 pop edi */
  EDI = (pop32());
  /* 1021bdf6 pop esi */
  ESI = (pop32());
  /* 1021bdf7 pop ebx */
  EBX = (pop32());
  /* 1021bdf8 ret  */
  ESPCHK(0x1021bd74u, _esp0);
  ESP += 4; return;
L_1021bdf9:;
  /* 1021bdf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021bdfb jmp 0x1021bdf5 */
  goto L_1021bdf5;
}

/* _strncpy @ 0x1021be00 (254 bytes, 109 insns) */
void f_1021be00(void) {
  FTRACE(0x1021be00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021be00 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1021be04 push edi */
  push32((uint32_t)(EDI));
  /* 1021be05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1021be07 je 0x1021be83 */
  if (C.zf) goto L_1021be83;
  /* 1021be09 push esi */
  push32((uint32_t)(ESI));
  /* 1021be0a push ebx */
  push32((uint32_t)(EBX));
  /* 1021be0b mov ebx, ecx */
  EBX = (ECX);
  /* 1021be0d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1021be11 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1021be17 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1021be1b jne 0x1021be24 */
  if (!C.zf) goto L_1021be24;
  /* 1021be1d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1021be20 jne 0x1021be91 */
  if (!C.zf) goto L_1021be91;
  /* 1021be22 jmp 0x1021be45 */
  goto L_1021be45;
L_1021be24:;
  /* 1021be24 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1021be26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1021be27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1021be29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1021be2a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1021be2b je 0x1021be52 */
  if (C.zf) goto L_1021be52;
  /* 1021be2d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1021be2f je 0x1021be5a */
  if (C.zf) goto L_1021be5a;
  /* 1021be31 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1021be37 jne 0x1021be24 */
  if (!C.zf) goto L_1021be24;
  /* 1021be39 mov ebx, ecx */
  EBX = (ECX);
  /* 1021be3b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1021be3e jne 0x1021be91 */
  if (!C.zf) goto L_1021be91;
L_1021be40:;
  /* 1021be40 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1021be43 je 0x1021be52 */
  if (C.zf) goto L_1021be52;
L_1021be45:;
  /* 1021be45 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1021be47 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1021be48 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1021be4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1021be4b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1021be4d je 0x1021be7e */
  if (C.zf) goto L_1021be7e;
  /* 1021be4f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1021be50 jne 0x1021be45 */
  if (!C.zf) goto L_1021be45;
L_1021be52:;
  /* 1021be52 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1021be56 pop ebx */
  EBX = (pop32());
  /* 1021be57 pop esi */
  ESI = (pop32());
  /* 1021be58 pop edi */
  EDI = (pop32());
  /* 1021be59 ret  */
  ESPCHK(0x1021be00u, _esp0);
  ESP += 4; return;
L_1021be5a:;
  /* 1021be5a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1021be60 je 0x1021be74 */
  if (C.zf) goto L_1021be74;
L_1021be62:;
  /* 1021be62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1021be64 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1021be65 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1021be66 je 0x1021bef6 */
  if (C.zf) goto L_1021bef6;
  /* 1021be6c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1021be72 jne 0x1021be62 */
  if (!C.zf) goto L_1021be62;
L_1021be74:;
  /* 1021be74 mov ebx, ecx */
  EBX = (ECX);
  /* 1021be76 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1021be79 jne 0x1021bee7 */
  if (!C.zf) goto L_1021bee7;
L_1021be7b:;
  /* 1021be7b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1021be7d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1021be7e:;
  /* 1021be7e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1021be7f jne 0x1021be7b */
  if (!C.zf) goto L_1021be7b;
  /* 1021be81 pop ebx */
  EBX = (pop32());
  /* 1021be82 pop esi */
  ESI = (pop32());
L_1021be83:;
  /* 1021be83 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1021be87 pop edi */
  EDI = (pop32());
  /* 1021be88 ret  */
  ESPCHK(0x1021be00u, _esp0);
  ESP += 4; return;
L_1021be89:;
  /* 1021be89 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1021be8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021be8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1021be8f je 0x1021be40 */
  if (C.zf) goto L_1021be40;
L_1021be91:;
  /* 1021be91 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1021be96 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1021be98 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021be9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1021be9d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1021be9f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1021bea1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021bea4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1021bea9 je 0x1021be89 */
  if (C.zf) goto L_1021be89;
  /* 1021beab test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1021bead je 0x1021bedb */
  if (C.zf) goto L_1021bedb;
  /* 1021beaf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1021beb1 je 0x1021bed1 */
  if (C.zf) goto L_1021bed1;
  /* 1021beb3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1021beb9 je 0x1021bec7 */
  if (C.zf) goto L_1021bec7;
  /* 1021bebb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1021bec1 jne 0x1021be89 */
  if (!C.zf) goto L_1021be89;
  /* 1021bec3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1021bec5 jmp 0x1021bedf */
  goto L_1021bedf;
L_1021bec7:;
  /* 1021bec7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1021becd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1021becf jmp 0x1021bedf */
  goto L_1021bedf;
L_1021bed1:;
  /* 1021bed1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1021bed7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1021bed9 jmp 0x1021bedf */
  goto L_1021bedf;
L_1021bedb:;
  /* 1021bedb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1021bedd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1021bedf:;
  /* 1021bedf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021bee2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021bee4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1021bee5 je 0x1021bef1 */
  if (C.zf) goto L_1021bef1;
L_1021bee7:;
  /* 1021bee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1021bee9:;
  /* 1021bee9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1021beeb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021beee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1021beef jne 0x1021bee9 */
  if (!C.zf) goto L_1021bee9;
L_1021bef1:;
  /* 1021bef1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1021bef4 jne 0x1021be7b */
  if (!C.zf) goto L_1021be7b;
L_1021bef6:;
  /* 1021bef6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1021befa pop ebx */
  EBX = (pop32());
  /* 1021befb pop esi */
  ESI = (pop32());
  /* 1021befc pop edi */
  EDI = (pop32());
  /* 1021befd ret  */
  ESPCHK(0x1021be00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000befe @ 0x1021befe (115 bytes, 37 insns) */
void f_1021befe(void) {
  FTRACE(0x1021befeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021befe push esi */
  push32((uint32_t)(ESI));
  /* 1021beff call 0x1021bf7a */
  push32(0x1021bf04u); f_1021bf7a();
  /* 1021bf04 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1021bf08 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1021bf0a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1021bf0c mov eax, 0x10222e90 */
  EAX = (0x10222e90u);
L_1021bf11:;
  /* 1021bf11 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bf13 je 0x1021bf37 */
  if (C.zf) goto L_1021bf37;
  /* 1021bf15 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021bf18 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1021bf19 cmp eax, 0x10222ff8 */
  { uint32_t _a=(EAX),_b=(0x10222ff8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bf1e jl 0x1021bf11 */
  if ((C.sf!=C.of)) goto L_1021bf11;
  /* 1021bf20 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bf23 jb 0x1021bf47 */
  if (C.cf) goto L_1021bf47;
  /* 1021bf25 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bf28 ja 0x1021bf47 */
  if ((!C.cf&&!C.zf)) goto L_1021bf47;
  /* 1021bf2a call 0x1021bf71 */
  push32(0x1021bf2fu); f_1021bf71();
  /* 1021bf2f mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1021bf35 pop esi */
  ESI = (pop32());
  /* 1021bf36 ret  */
  ESPCHK(0x1021befeu, _esp0);
  ESP += 4; return;
L_1021bf37:;
  /* 1021bf37 call 0x1021bf71 */
  push32(0x1021bf3cu); f_1021bf71();
  /* 1021bf3c mov ecx, dword ptr [esi*8 + 0x10222e94] */
  ECX = (r32((uint32_t)(ESI*8 + 0x10222e94)));
  /* 1021bf43 pop esi */
  ESI = (pop32());
  /* 1021bf44 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1021bf46 ret  */
  ESPCHK(0x1021befeu, _esp0);
  ESP += 4; return;
L_1021bf47:;
  /* 1021bf47 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bf4d jb 0x1021bf64 */
  if (C.cf) goto L_1021bf64;
  /* 1021bf4f cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bf55 ja 0x1021bf64 */
  if ((!C.cf&&!C.zf)) goto L_1021bf64;
  /* 1021bf57 call 0x1021bf71 */
  push32(0x1021bf5cu); f_1021bf71();
  /* 1021bf5c mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1021bf62 pop esi */
  ESI = (pop32());
  /* 1021bf63 ret  */
  ESPCHK(0x1021befeu, _esp0);
  ESP += 4; return;
L_1021bf64:;
  /* 1021bf64 call 0x1021bf71 */
  push32(0x1021bf69u); f_1021bf71();
  /* 1021bf69 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1021bf6f pop esi */
  ESI = (pop32());
  /* 1021bf70 ret  */
  ESPCHK(0x1021befeu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf71 @ 0x1021bf71 (9 bytes, 3 insns) */
void f_1021bf71(void) {
  FTRACE(0x1021bf71u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021bf71 call 0x10218048 */
  push32(0x1021bf76u); f_10218048();
  /* 1021bf76 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021bf79 ret  */
  ESPCHK(0x1021bf71u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf7a @ 0x1021bf7a (9 bytes, 3 insns) */
void f_1021bf7a(void) {
  FTRACE(0x1021bf7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021bf7a call 0x10218048 */
  push32(0x1021bf7fu); f_10218048();
  /* 1021bf7f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021bf82 ret  */
  ESPCHK(0x1021bf7au, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf83 @ 0x1021bf83 (127 bytes, 48 insns) */
void f_1021bf83(void) {
  FTRACE(0x1021bf83u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021bf83 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1021bf87 push esi */
  push32((uint32_t)(ESI));
  /* 1021bf88 cmp ecx, dword ptr [0x10227d40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10227d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bf8e push edi */
  push32((uint32_t)(EDI));
  /* 1021bf8f jae 0x1021bfe9 */
  if (!C.cf) goto L_1021bfe9;
  /* 1021bf91 mov eax, ecx */
  EAX = (ECX);
  /* 1021bf93 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1021bf96 lea edi, [eax*4 + 0x10227c40] */
  EDI = ((uint32_t)(EAX*4 + 0x10227c40));
  /* 1021bf9d mov eax, ecx */
  EAX = (ECX);
  /* 1021bf9f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1021bfa2 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1021bfa5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1021bfa7 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1021bfaa add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021bfac test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1021bfb0 je 0x1021bfe9 */
  if (C.zf) goto L_1021bfe9;
  /* 1021bfb2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bfb5 je 0x1021bfe9 */
  if (C.zf) goto L_1021bfe9;
  /* 1021bfb7 cmp dword ptr [0x10226654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10226654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021bfbe jne 0x1021bfdf */
  if (!C.zf) goto L_1021bfdf;
  /* 1021bfc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021bfc2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021bfc4 je 0x1021bfd6 */
  if (C.zf) goto L_1021bfd6;
  /* 1021bfc6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1021bfc7 je 0x1021bfd1 */
  if (C.zf) goto L_1021bfd1;
  /* 1021bfc9 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1021bfca jne 0x1021bfdf */
  if (!C.zf) goto L_1021bfdf;
  /* 1021bfcc push eax */
  push32((uint32_t)(EAX));
  /* 1021bfcd push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1021bfcf jmp 0x1021bfd9 */
  goto L_1021bfd9;
L_1021bfd1:;
  /* 1021bfd1 push eax */
  push32((uint32_t)(EAX));
  /* 1021bfd2 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1021bfd4 jmp 0x1021bfd9 */
  goto L_1021bfd9;
L_1021bfd6:;
  /* 1021bfd6 push eax */
  push32((uint32_t)(EAX));
  /* 1021bfd7 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_1021bfd9:;
  /* 1021bfd9 call dword ptr [0x1021e0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e0b4))), 0x1021bfdfu);
L_1021bfdf:;
  /* 1021bfdf mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1021bfe1 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 1021bfe5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021bfe7 jmp 0x1021bfff */
  goto L_1021bfff;
L_1021bfe9:;
  /* 1021bfe9 call 0x1021bf71 */
  push32(0x1021bfeeu); f_1021bf71();
  /* 1021bfee mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1021bff4 call 0x1021bf7a */
  push32(0x1021bff9u); f_1021bf7a();
  /* 1021bff9 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1021bffc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1021bfff:;
  /* 1021bfff pop edi */
  EDI = (pop32());
  /* 1021c000 pop esi */
  ESI = (pop32());
  /* 1021c001 ret  */
  ESPCHK(0x1021bf83u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c002 @ 0x1021c002 (66 bytes, 19 insns) */
void f_1021c002(void) {
  FTRACE(0x1021c002u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021c002 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1021c006 cmp eax, dword ptr [0x10227d40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10227d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c00c jae 0x1021c02d */
  if (!C.cf) goto L_1021c02d;
  /* 1021c00e mov ecx, eax */
  ECX = (EAX);
  /* 1021c010 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1021c013 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1021c016 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1021c019 mov ecx, dword ptr [ecx*4 + 0x10227c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10227c40)));
  /* 1021c020 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1021c025 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 1021c028 je 0x1021c02d */
  if (C.zf) goto L_1021c02d;
  /* 1021c02a mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 1021c02c ret  */
  ESPCHK(0x1021c002u, _esp0);
  ESP += 4; return;
L_1021c02d:;
  /* 1021c02d call 0x1021bf71 */
  push32(0x1021c032u); f_1021bf71();
  /* 1021c032 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1021c038 call 0x1021bf7a */
  push32(0x1021c03du); f_1021bf7a();
  /* 1021c03d and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1021c040 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1021c043 ret  */
  ESPCHK(0x1021c002u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c044 @ 0x1021c044 (95 bytes, 34 insns) */
void f_1021c044(void) {
  FTRACE(0x1021c044u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021c044 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1021c048 push ebx */
  push32((uint32_t)(EBX));
  /* 1021c049 mov ecx, eax */
  ECX = (EAX);
  /* 1021c04b and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1021c04e sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1021c051 push esi */
  push32((uint32_t)(ESI));
  /* 1021c052 push edi */
  push32((uint32_t)(EDI));
  /* 1021c053 mov esi, dword ptr [ecx*4 + 0x10227c40] */
  ESI = (r32((uint32_t)(ECX*4 + 0x10227c40)));
  /* 1021c05a lea ebx, [ecx*4 + 0x10227c40] */
  EBX = ((uint32_t)(ECX*4 + 0x10227c40));
  /* 1021c061 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 1021c064 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 1021c067 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021c069 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c06d jne 0x1021c092 */
  if (!C.zf) goto L_1021c092;
  /* 1021c06f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1021c071 call 0x1021a013 */
  push32(0x1021c076u); f_1021a013();
  /* 1021c076 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c07a pop ecx */
  ECX = (pop32());
  /* 1021c07b jne 0x1021c08a */
  if (!C.zf) goto L_1021c08a;
  /* 1021c07d lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 1021c080 push eax */
  push32((uint32_t)(EAX));
  /* 1021c081 call dword ptr [0x1021e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e094))), 0x1021c087u);
  /* 1021c087 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1021c08a:;
  /* 1021c08a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1021c08c call 0x1021a074 */
  push32(0x1021c091u); f_1021a074();
  /* 1021c091 pop ecx */
  ECX = (pop32());
L_1021c092:;
  /* 1021c092 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1021c094 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 1021c098 push eax */
  push32((uint32_t)(EAX));
  /* 1021c099 call dword ptr [0x1021e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e00c))), 0x1021c09fu);
  /* 1021c09f pop edi */
  EDI = (pop32());
  /* 1021c0a0 pop esi */
  ESI = (pop32());
  /* 1021c0a1 pop ebx */
  EBX = (pop32());
  /* 1021c0a2 ret  */
  ESPCHK(0x1021c044u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0a3 @ 0x1021c0a3 (34 bytes, 10 insns) */
void f_1021c0a3(void) {
  FTRACE(0x1021c0a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021c0a3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1021c0a7 mov ecx, eax */
  ECX = (EAX);
  /* 1021c0a9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1021c0ac sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1021c0af lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1021c0b2 mov ecx, dword ptr [ecx*4 + 0x10227c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10227c40)));
  /* 1021c0b9 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 1021c0bd push eax */
  push32((uint32_t)(EAX));
  /* 1021c0be call dword ptr [0x1021e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e008))), 0x1021c0c4u);
  /* 1021c0c4 ret  */
  ESPCHK(0x1021c0a3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c146 @ 0x1021c146 (46 bytes, 22 insns) */
void f_1021c146(void) {
  FTRACE(0x1021c146u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021c146 push esi */
  push32((uint32_t)(ESI));
  /* 1021c147 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1021c14b push esi */
  push32((uint32_t)(ESI));
  /* 1021c14c call 0x1021c174 */
  push32(0x1021c151u); f_1021c174();
  /* 1021c151 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021c153 pop ecx */
  ECX = (pop32());
  /* 1021c154 je 0x1021c15b */
  if (C.zf) goto L_1021c15b;
  /* 1021c156 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1021c159 pop esi */
  ESI = (pop32());
  /* 1021c15a ret  */
  ESPCHK(0x1021c146u, _esp0);
  ESP += 4; return;
L_1021c15b:;
  /* 1021c15b test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 1021c15f je 0x1021c170 */
  if (C.zf) goto L_1021c170;
  /* 1021c161 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1021c164 call 0x1021d2c0 */
  push32(0x1021c169u); f_1021d2c0();
  /* 1021c169 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1021c16b pop ecx */
  ECX = (pop32());
  /* 1021c16c pop esi */
  ESI = (pop32());
  /* 1021c16d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021c16f ret  */
  ESPCHK(0x1021c146u, _esp0);
  ESP += 4; return;
L_1021c170:;
  /* 1021c170 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021c172 pop esi */
  ESI = (pop32());
  /* 1021c173 ret  */
  ESPCHK(0x1021c146u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c174 @ 0x1021c174 (92 bytes, 40 insns) */
void f_1021c174(void) {
  FTRACE(0x1021c174u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021c174 push ebx */
  push32((uint32_t)(EBX));
  /* 1021c175 push esi */
  push32((uint32_t)(ESI));
  /* 1021c176 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1021c17a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1021c17c push edi */
  push32((uint32_t)(EDI));
  /* 1021c17d mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1021c180 mov ecx, eax */
  ECX = (EAX);
  /* 1021c182 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1021c185 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c188 jne 0x1021c1c1 */
  if (!C.zf) goto L_1021c1c1;
  /* 1021c18a test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 1021c18e je 0x1021c1c1 */
  if (C.zf) goto L_1021c1c1;
  /* 1021c190 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1021c193 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 1021c195 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021c197 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1021c199 jle 0x1021c1c1 */
  if ((C.zf||C.sf!=C.of)) goto L_1021c1c1;
  /* 1021c19b push edi */
  push32((uint32_t)(EDI));
  /* 1021c19c push eax */
  push32((uint32_t)(EAX));
  /* 1021c19d push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1021c1a0 call 0x10218c75 */
  push32(0x1021c1a5u); f_10218c75();
  /* 1021c1a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021c1a8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c1aa jne 0x1021c1ba */
  if (!C.zf) goto L_1021c1ba;
  /* 1021c1ac mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1021c1af test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 1021c1b1 je 0x1021c1c1 */
  if (C.zf) goto L_1021c1c1;
  /* 1021c1b3 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 1021c1b5 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1021c1b8 jmp 0x1021c1c1 */
  goto L_1021c1c1;
L_1021c1ba:;
  /* 1021c1ba or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1021c1be or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_1021c1c1:;
  /* 1021c1c1 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1021c1c4 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1021c1c8 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1021c1ca pop edi */
  EDI = (pop32());
  /* 1021c1cb mov eax, ebx */
  EAX = (EBX);
  /* 1021c1cd pop esi */
  ESI = (pop32());
  /* 1021c1ce pop ebx */
  EBX = (pop32());
  /* 1021c1cf ret  */
  ESPCHK(0x1021c174u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1d9 @ 0x1021c1d9 (164 bytes, 66 insns) */
void f_1021c1d9(void) {
  FTRACE(0x1021c1d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021c1d9 push ebx */
  push32((uint32_t)(EBX));
  /* 1021c1da push esi */
  push32((uint32_t)(ESI));
  /* 1021c1db push edi */
  push32((uint32_t)(EDI));
  /* 1021c1dc push 2 */
  push32((uint32_t)(0x2u));
  /* 1021c1de xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1021c1e0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1021c1e2 call 0x1021a013 */
  push32(0x1021c1e7u); f_1021a013();
  /* 1021c1e7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1021c1e9 pop ecx */
  ECX = (pop32());
  /* 1021c1ea cmp dword ptr [0x10227c20], esi */
  { uint32_t _a=(r32((uint32_t)(0x10227c20))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c1f0 jle 0x1021c266 */
  if ((C.zf||C.sf!=C.of)) goto L_1021c266;
L_1021c1f2:;
  /* 1021c1f2 mov eax, dword ptr [0x10226c08] */
  EAX = (r32((uint32_t)(0x10226c08)));
  /* 1021c1f7 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1021c1fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021c1fc je 0x1021c25d */
  if (C.zf) goto L_1021c25d;
  /* 1021c1fe test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1021c202 je 0x1021c25d */
  if (C.zf) goto L_1021c25d;
  /* 1021c204 push eax */
  push32((uint32_t)(EAX));
  /* 1021c205 push esi */
  push32((uint32_t)(ESI));
  /* 1021c206 call 0x10218fbd */
  push32(0x1021c20bu); f_10218fbd();
  /* 1021c20b mov eax, dword ptr [0x10226c08] */
  EAX = (r32((uint32_t)(0x10226c08)));
  /* 1021c210 pop ecx */
  ECX = (pop32());
  /* 1021c211 pop ecx */
  ECX = (pop32());
  /* 1021c212 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1021c215 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1021c218 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 1021c21b je 0x1021c24d */
  if (C.zf) goto L_1021c24d;
  /* 1021c21d cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c222 jne 0x1021c233 */
  if (!C.zf) goto L_1021c233;
  /* 1021c224 push eax */
  push32((uint32_t)(EAX));
  /* 1021c225 call 0x1021c146 */
  push32(0x1021c22au); f_1021c146();
  /* 1021c22a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c22d pop ecx */
  ECX = (pop32());
  /* 1021c22e je 0x1021c24d */
  if (C.zf) goto L_1021c24d;
  /* 1021c230 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1021c231 jmp 0x1021c24d */
  goto L_1021c24d;
L_1021c233:;
  /* 1021c233 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c238 jne 0x1021c24d */
  if (!C.zf) goto L_1021c24d;
  /* 1021c23a test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 1021c23d je 0x1021c24d */
  if (C.zf) goto L_1021c24d;
  /* 1021c23f push eax */
  push32((uint32_t)(EAX));
  /* 1021c240 call 0x1021c146 */
  push32(0x1021c245u); f_1021c146();
  /* 1021c245 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c248 pop ecx */
  ECX = (pop32());
  /* 1021c249 jne 0x1021c24d */
  if (!C.zf) goto L_1021c24d;
  /* 1021c24b or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_1021c24d:;
  /* 1021c24d mov eax, dword ptr [0x10226c08] */
  EAX = (r32((uint32_t)(0x10226c08)));
  /* 1021c252 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 1021c255 push esi */
  push32((uint32_t)(ESI));
  /* 1021c256 call 0x1021900f */
  push32(0x1021c25bu); f_1021900f();
  /* 1021c25b pop ecx */
  ECX = (pop32());
  /* 1021c25c pop ecx */
  ECX = (pop32());
L_1021c25d:;
  /* 1021c25d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1021c25e cmp esi, dword ptr [0x10227c20] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10227c20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c264 jl 0x1021c1f2 */
  if ((C.sf!=C.of)) goto L_1021c1f2;
L_1021c266:;
  /* 1021c266 push 2 */
  push32((uint32_t)(0x2u));
  /* 1021c268 call 0x1021a074 */
  push32(0x1021c26du); f_1021a074();
  /* 1021c26d cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c272 pop ecx */
  ECX = (pop32());
  /* 1021c273 mov eax, ebx */
  EAX = (EBX);
  /* 1021c275 je 0x1021c279 */
  if (C.zf) goto L_1021c279;
  /* 1021c277 mov eax, edi */
  EAX = (EDI);
L_1021c279:;
  /* 1021c279 pop edi */
  EDI = (pop32());
  /* 1021c27a pop esi */
  ESI = (pop32());
  /* 1021c27b pop ebx */
  EBX = (pop32());
  /* 1021c27c ret  */
  ESPCHK(0x1021c1d9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c27d @ 0x1021c27d (318 bytes, 123 insns) */
void f_1021c27d(void) {
  FTRACE(0x1021c27du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021c27d push ebp */
  push32((uint32_t)(EBP));
  /* 1021c27e mov ebp, esp */
  EBP = (ESP);
  /* 1021c280 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1021c282 push 0x1021e560 */
  push32((uint32_t)(0x1021e560u));
  /* 1021c287 push 0x1021d030 */
  push32((uint32_t)(0x1021d030u));
  /* 1021c28c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1021c292 push eax */
  push32((uint32_t)(EAX));
  /* 1021c293 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1021c29a sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021c29d push ebx */
  push32((uint32_t)(EBX));
  /* 1021c29e push esi */
  push32((uint32_t)(ESI));
  /* 1021c29f push edi */
  push32((uint32_t)(EDI));
  /* 1021c2a0 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1021c2a3 mov eax, dword ptr [0x10226864] */
  EAX = (r32((uint32_t)(0x10226864)));
  /* 1021c2a8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1021c2aa cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c2ac jne 0x1021c2ec */
  if (!C.zf) goto L_1021c2ec;
  /* 1021c2ae lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1021c2b1 push eax */
  push32((uint32_t)(EAX));
  /* 1021c2b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021c2b4 pop esi */
  ESI = (pop32());
  /* 1021c2b5 push esi */
  push32((uint32_t)(ESI));
  /* 1021c2b6 push 0x1021e558 */
  push32((uint32_t)(0x1021e558u));
  /* 1021c2bb push esi */
  push32((uint32_t)(ESI));
  /* 1021c2bc call dword ptr [0x1021e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e0c0))), 0x1021c2c2u);
  /* 1021c2c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021c2c4 je 0x1021c2ca */
  if (C.zf) goto L_1021c2ca;
  /* 1021c2c6 mov eax, esi */
  EAX = (ESI);
  /* 1021c2c8 jmp 0x1021c2e7 */
  goto L_1021c2e7;
L_1021c2ca:;
  /* 1021c2ca lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1021c2cd push eax */
  push32((uint32_t)(EAX));
  /* 1021c2ce push esi */
  push32((uint32_t)(ESI));
  /* 1021c2cf push 0x1021e554 */
  push32((uint32_t)(0x1021e554u));
  /* 1021c2d4 push esi */
  push32((uint32_t)(ESI));
  /* 1021c2d5 push ebx */
  push32((uint32_t)(EBX));
  /* 1021c2d6 call dword ptr [0x1021e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e0bc))), 0x1021c2dcu);
  /* 1021c2dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021c2de je 0x1021c3b2 */
  if (C.zf) goto L_1021c3b2;
  /* 1021c2e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1021c2e6 pop eax */
  EAX = (pop32());
L_1021c2e7:;
  /* 1021c2e7 mov dword ptr [0x10226864], eax */
  w32((uint32_t)(0x10226864), (EAX));
L_1021c2ec:;
  /* 1021c2ec cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c2ef jne 0x1021c315 */
  if (!C.zf) goto L_1021c315;
  /* 1021c2f1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1021c2f4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c2f6 jne 0x1021c2fd */
  if (!C.zf) goto L_1021c2fd;
  /* 1021c2f8 mov eax, dword ptr [0x10226838] */
  EAX = (r32((uint32_t)(0x10226838)));
L_1021c2fd:;
  /* 1021c2fd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1021c300 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1021c303 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1021c306 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1021c309 push eax */
  push32((uint32_t)(EAX));
  /* 1021c30a call dword ptr [0x1021e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e0bc))), 0x1021c310u);
  /* 1021c310 jmp 0x1021c3b4 */
  goto L_1021c3b4;
L_1021c315:;
  /* 1021c315 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c318 jne 0x1021c3b2 */
  if (!C.zf) goto L_1021c3b2;
  /* 1021c31e cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c321 jne 0x1021c32b */
  if (!C.zf) goto L_1021c32b;
  /* 1021c323 mov eax, dword ptr [0x10226848] */
  EAX = (r32((uint32_t)(0x10226848)));
  /* 1021c328 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1021c32b:;
  /* 1021c32b push ebx */
  push32((uint32_t)(EBX));
  /* 1021c32c push ebx */
  push32((uint32_t)(EBX));
  /* 1021c32d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1021c330 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1021c333 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1021c336 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1021c338 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021c33a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1021c33d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1021c33e push eax */
  push32((uint32_t)(EAX));
  /* 1021c33f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1021c342 call dword ptr [0x1021e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e0b8))), 0x1021c348u);
  /* 1021c348 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1021c34b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c34d je 0x1021c3b2 */
  if (C.zf) goto L_1021c3b2;
  /* 1021c34f mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1021c352 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 1021c355 mov eax, edi */
  EAX = (EDI);
  /* 1021c357 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021c35a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1021c35c call 0x1021aed0 */
  push32(0x1021c361u); f_1021aed0();
  /* 1021c361 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1021c364 mov esi, esp */
  ESI = (ESP);
  /* 1021c366 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 1021c369 push edi */
  push32((uint32_t)(EDI));
  /* 1021c36a push ebx */
  push32((uint32_t)(EBX));
  /* 1021c36b push esi */
  push32((uint32_t)(ESI));
  /* 1021c36c call 0x10219be0 */
  push32(0x1021c371u); f_10219be0();
  /* 1021c371 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021c374 jmp 0x1021c381 */
  goto L_1021c381;
  /* 1021c376 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021c378 pop eax */
  EAX = (pop32());
  /* 1021c379 ret  */
  ESPCHK(0x1021c27du, _esp0);
  ESP += 4; return;
  /* 1021c37a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1021c37d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1021c37f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1021c381:;
  /* 1021c381 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1021c385 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c387 je 0x1021c3b2 */
  if (C.zf) goto L_1021c3b2;
  /* 1021c389 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1021c38c push esi */
  push32((uint32_t)(ESI));
  /* 1021c38d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1021c390 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1021c393 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021c395 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1021c398 call dword ptr [0x1021e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e0b8))), 0x1021c39eu);
  /* 1021c39e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c3a0 je 0x1021c3b2 */
  if (C.zf) goto L_1021c3b2;
  /* 1021c3a2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1021c3a5 push eax */
  push32((uint32_t)(EAX));
  /* 1021c3a6 push esi */
  push32((uint32_t)(ESI));
  /* 1021c3a7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1021c3aa call dword ptr [0x1021e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e0c0))), 0x1021c3b0u);
  /* 1021c3b0 jmp 0x1021c3b4 */
  goto L_1021c3b4;
L_1021c3b2:;
  /* 1021c3b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1021c3b4:;
  /* 1021c3b4 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 1021c3b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1021c3ba mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1021c3c1 pop edi */
  EDI = (pop32());
  /* 1021c3c2 pop esi */
  ESI = (pop32());
  /* 1021c3c3 pop ebx */
  EBX = (pop32());
  /* 1021c3c4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021c3c5 ret  */
  ESPCHK(0x1021c27du, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3c6 @ 0x1021c3c6 (511 bytes, 193 insns) */
void f_1021c3c6(void) {
  FTRACE(0x1021c3c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021c3c6 push ebp */
  push32((uint32_t)(EBP));
  /* 1021c3c7 mov ebp, esp */
  EBP = (ESP);
  /* 1021c3c9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1021c3cb push 0x1021e570 */
  push32((uint32_t)(0x1021e570u));
  /* 1021c3d0 push 0x1021d030 */
  push32((uint32_t)(0x1021d030u));
  /* 1021c3d5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1021c3db push eax */
  push32((uint32_t)(EAX));
  /* 1021c3dc mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1021c3e3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021c3e6 push ebx */
  push32((uint32_t)(EBX));
  /* 1021c3e7 push esi */
  push32((uint32_t)(ESI));
  /* 1021c3e8 push edi */
  push32((uint32_t)(EDI));
  /* 1021c3e9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1021c3ec xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1021c3ee cmp dword ptr [0x10226868], edi */
  { uint32_t _a=(r32((uint32_t)(0x10226868))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c3f4 jne 0x1021c43c */
  if (!C.zf) goto L_1021c43c;
  /* 1021c3f6 push edi */
  push32((uint32_t)(EDI));
  /* 1021c3f7 push edi */
  push32((uint32_t)(EDI));
  /* 1021c3f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021c3fa pop ebx */
  EBX = (pop32());
  /* 1021c3fb push ebx */
  push32((uint32_t)(EBX));
  /* 1021c3fc push 0x1021e558 */
  push32((uint32_t)(0x1021e558u));
  /* 1021c401 mov esi, 0x100 */
  ESI = (0x100u);
  /* 1021c406 push esi */
  push32((uint32_t)(ESI));
  /* 1021c407 push edi */
  push32((uint32_t)(EDI));
  /* 1021c408 call dword ptr [0x1021e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e0c8))), 0x1021c40eu);
  /* 1021c40e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021c410 je 0x1021c41a */
  if (C.zf) goto L_1021c41a;
  /* 1021c412 mov dword ptr [0x10226868], ebx */
  w32((uint32_t)(0x10226868), (EBX));
  /* 1021c418 jmp 0x1021c43c */
  goto L_1021c43c;
L_1021c41a:;
  /* 1021c41a push edi */
  push32((uint32_t)(EDI));
  /* 1021c41b push edi */
  push32((uint32_t)(EDI));
  /* 1021c41c push ebx */
  push32((uint32_t)(EBX));
  /* 1021c41d push 0x1021e554 */
  push32((uint32_t)(0x1021e554u));
  /* 1021c422 push esi */
  push32((uint32_t)(ESI));
  /* 1021c423 push edi */
  push32((uint32_t)(EDI));
  /* 1021c424 call dword ptr [0x1021e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e0c4))), 0x1021c42au);
  /* 1021c42a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021c42c je 0x1021c554 */
  if (C.zf) goto L_1021c554;
  /* 1021c432 mov dword ptr [0x10226868], 2 */
  w32((uint32_t)(0x10226868), (0x2u));
L_1021c43c:;
  /* 1021c43c cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c43f jle 0x1021c451 */
  if ((C.zf||C.sf!=C.of)) goto L_1021c451;
  /* 1021c441 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1021c444 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1021c447 call 0x1021c5ea */
  push32(0x1021c44cu); f_1021c5ea();
  /* 1021c44c pop ecx */
  ECX = (pop32());
  /* 1021c44d pop ecx */
  ECX = (pop32());
  /* 1021c44e mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1021c451:;
  /* 1021c451 mov eax, dword ptr [0x10226868] */
  EAX = (r32((uint32_t)(0x10226868)));
  /* 1021c456 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c459 jne 0x1021c478 */
  if (!C.zf) goto L_1021c478;
  /* 1021c45b push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1021c45e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1021c461 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1021c464 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1021c467 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1021c46a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1021c46d call dword ptr [0x1021e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e0c4))), 0x1021c473u);
  /* 1021c473 jmp 0x1021c556 */
  goto L_1021c556;
L_1021c478:;
  /* 1021c478 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c47b jne 0x1021c554 */
  if (!C.zf) goto L_1021c554;
  /* 1021c481 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c484 jne 0x1021c48e */
  if (!C.zf) goto L_1021c48e;
  /* 1021c486 mov eax, dword ptr [0x10226848] */
  EAX = (r32((uint32_t)(0x10226848)));
  /* 1021c48b mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_1021c48e:;
  /* 1021c48e push edi */
  push32((uint32_t)(EDI));
  /* 1021c48f push edi */
  push32((uint32_t)(EDI));
  /* 1021c490 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1021c493 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1021c496 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 1021c499 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1021c49b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021c49d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1021c4a0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1021c4a1 push eax */
  push32((uint32_t)(EAX));
  /* 1021c4a2 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1021c4a5 call dword ptr [0x1021e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e0b8))), 0x1021c4abu);
  /* 1021c4ab mov ebx, eax */
  EBX = (EAX);
  /* 1021c4ad mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 1021c4b0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c4b2 je 0x1021c554 */
  if (C.zf) goto L_1021c554;
  /* 1021c4b8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1021c4bb lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 1021c4be add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021c4c1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1021c4c3 call 0x1021aed0 */
  push32(0x1021c4c8u); f_1021aed0();
  /* 1021c4c8 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1021c4cb mov eax, esp */
  EAX = (ESP);
  /* 1021c4cd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1021c4d0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1021c4d4 jmp 0x1021c4e9 */
  goto L_1021c4e9;
  /* 1021c4d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021c4d8 pop eax */
  EAX = (pop32());
  /* 1021c4d9 ret  */
  ESPCHK(0x1021c3c6u, _esp0);
  ESP += 4; return;
  /* 1021c4da mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1021c4dd xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1021c4df mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 1021c4e2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1021c4e6 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_1021c4e9:;
  /* 1021c4e9 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c4ec je 0x1021c554 */
  if (C.zf) goto L_1021c554;
  /* 1021c4ee push ebx */
  push32((uint32_t)(EBX));
  /* 1021c4ef push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1021c4f2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1021c4f5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1021c4f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021c4fa push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1021c4fd call dword ptr [0x1021e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e0b8))), 0x1021c503u);
  /* 1021c503 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021c505 je 0x1021c554 */
  if (C.zf) goto L_1021c554;
  /* 1021c507 push edi */
  push32((uint32_t)(EDI));
  /* 1021c508 push edi */
  push32((uint32_t)(EDI));
  /* 1021c509 push ebx */
  push32((uint32_t)(EBX));
  /* 1021c50a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1021c50d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1021c510 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1021c513 call dword ptr [0x1021e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e0c8))), 0x1021c519u);
  /* 1021c519 mov esi, eax */
  ESI = (EAX);
  /* 1021c51b mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 1021c51e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c520 je 0x1021c554 */
  if (C.zf) goto L_1021c554;
  /* 1021c522 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 1021c526 je 0x1021c568 */
  if (C.zf) goto L_1021c568;
  /* 1021c528 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c52b je 0x1021c5e3 */
  if (C.zf) goto L_1021c5e3;
  /* 1021c531 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c534 jg 0x1021c554 */
  if ((!C.zf&&C.sf==C.of)) goto L_1021c554;
  /* 1021c536 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1021c539 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1021c53c push ebx */
  push32((uint32_t)(EBX));
  /* 1021c53d push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1021c540 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1021c543 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1021c546 call dword ptr [0x1021e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e0c8))), 0x1021c54cu);
  /* 1021c54c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021c54e jne 0x1021c5e3 */
  if (!C.zf) goto L_1021c5e3;
L_1021c554:;
  /* 1021c554 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1021c556:;
  /* 1021c556 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1021c559 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1021c55c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1021c563 pop edi */
  EDI = (pop32());
  /* 1021c564 pop esi */
  ESI = (pop32());
  /* 1021c565 pop ebx */
  EBX = (pop32());
  /* 1021c566 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021c567 ret  */
  ESPCHK(0x1021c3c6u, _esp0);
  ESP += 4; return;
L_1021c568:;
  /* 1021c568 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1021c56f lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 1021c572 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021c575 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1021c577 call 0x1021aed0 */
  push32(0x1021c57cu); f_1021aed0();
  /* 1021c57c mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1021c57f mov ebx, esp */
  EBX = (ESP);
  /* 1021c581 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 1021c584 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1021c588 jmp 0x1021c59c */
  goto L_1021c59c;
  /* 1021c58a push 1 */
  push32((uint32_t)(0x1u));
  /* 1021c58c pop eax */
  EAX = (pop32());
  /* 1021c58d ret  */
  ESPCHK(0x1021c3c6u, _esp0);
  ESP += 4; return;
  /* 1021c58e mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1021c591 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1021c593 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1021c595 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1021c599 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_1021c59c:;
  /* 1021c59c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c59e je 0x1021c554 */
  if (C.zf) goto L_1021c554;
  /* 1021c5a0 push esi */
  push32((uint32_t)(ESI));
  /* 1021c5a1 push ebx */
  push32((uint32_t)(EBX));
  /* 1021c5a2 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1021c5a5 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1021c5a8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1021c5ab push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1021c5ae call dword ptr [0x1021e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e0c8))), 0x1021c5b4u);
  /* 1021c5b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021c5b6 je 0x1021c554 */
  if (C.zf) goto L_1021c554;
  /* 1021c5b8 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c5bb push edi */
  push32((uint32_t)(EDI));
  /* 1021c5bc push edi */
  push32((uint32_t)(EDI));
  /* 1021c5bd jne 0x1021c5c3 */
  if (!C.zf) goto L_1021c5c3;
  /* 1021c5bf push edi */
  push32((uint32_t)(EDI));
  /* 1021c5c0 push edi */
  push32((uint32_t)(EDI));
  /* 1021c5c1 jmp 0x1021c5c9 */
  goto L_1021c5c9;
L_1021c5c3:;
  /* 1021c5c3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1021c5c6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_1021c5c9:;
  /* 1021c5c9 push esi */
  push32((uint32_t)(ESI));
  /* 1021c5ca push ebx */
  push32((uint32_t)(EBX));
  /* 1021c5cb push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1021c5d0 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1021c5d3 call dword ptr [0x1021e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e060))), 0x1021c5d9u);
  /* 1021c5d9 mov esi, eax */
  ESI = (EAX);
  /* 1021c5db cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c5dd je 0x1021c554 */
  if (C.zf) goto L_1021c554;
L_1021c5e3:;
  /* 1021c5e3 mov eax, esi */
  EAX = (ESI);
  /* 1021c5e5 jmp 0x1021c556 */
  goto L_1021c556;
}

/* FUN_1000c5ea @ 0x1021c5ea (43 bytes, 20 insns) */
void f_1021c5ea(void) {
  FTRACE(0x1021c5eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021c5ea mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1021c5ee mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1021c5f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1021c5f4 push esi */
  push32((uint32_t)(ESI));
  /* 1021c5f5 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 1021c5f8 je 0x1021c607 */
  if (C.zf) goto L_1021c607;
L_1021c5fa:;
  /* 1021c5fa cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c5fd je 0x1021c607 */
  if (C.zf) goto L_1021c607;
  /* 1021c5ff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1021c600 mov esi, ecx */
  ESI = (ECX);
  /* 1021c602 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1021c603 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1021c605 jne 0x1021c5fa */
  if (!C.zf) goto L_1021c5fa;
L_1021c607:;
  /* 1021c607 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c60a pop esi */
  ESI = (pop32());
  /* 1021c60b jne 0x1021c612 */
  if (!C.zf) goto L_1021c612;
  /* 1021c60d sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021c611 ret  */
  ESPCHK(0x1021c5eau, _esp0);
  ESP += 4; return;
L_1021c612:;
  /* 1021c612 mov eax, edx */
  EAX = (EDX);
  /* 1021c614 ret  */
  ESPCHK(0x1021c5eau, _esp0);
  ESP += 4; return;
}

/* FUN_1000c615 @ 0x1021c615 (33 bytes, 15 insns) */
void f_1021c615(void) {
  FTRACE(0x1021c615u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021c615 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1021c619 push esi */
  push32((uint32_t)(ESI));
  /* 1021c61a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1021c61e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021c620 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 1021c623 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c625 jb 0x1021c62b */
  if (C.cf) goto L_1021c62b;
  /* 1021c627 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c629 jae 0x1021c62e */
  if (!C.cf) goto L_1021c62e;
L_1021c62b:;
  /* 1021c62b push 1 */
  push32((uint32_t)(0x1u));
  /* 1021c62d pop eax */
  EAX = (pop32());
L_1021c62e:;
  /* 1021c62e mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1021c632 pop esi */
  ESI = (pop32());
  /* 1021c633 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1021c635 ret  */
  ESPCHK(0x1021c615u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x1021c636 (94 bytes, 38 insns) */
void f_1021c636(void) {
  FTRACE(0x1021c636u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021c636 push esi */
  push32((uint32_t)(ESI));
  /* 1021c637 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1021c63b push edi */
  push32((uint32_t)(EDI));
  /* 1021c63c mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1021c640 push esi */
  push32((uint32_t)(ESI));
  /* 1021c641 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 1021c643 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1021c645 call 0x1021c615 */
  push32(0x1021c64au); f_1021c615();
  /* 1021c64a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021c64d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021c64f je 0x1021c668 */
  if (C.zf) goto L_1021c668;
  /* 1021c651 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1021c654 push eax */
  push32((uint32_t)(EAX));
  /* 1021c655 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021c657 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1021c659 call 0x1021c615 */
  push32(0x1021c65eu); f_1021c615();
  /* 1021c65e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021c661 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021c663 je 0x1021c668 */
  if (C.zf) goto L_1021c668;
  /* 1021c665 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1021c668:;
  /* 1021c668 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1021c66b push eax */
  push32((uint32_t)(EAX));
  /* 1021c66c push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 1021c66f push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1021c671 call 0x1021c615 */
  push32(0x1021c676u); f_1021c615();
  /* 1021c676 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021c679 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021c67b je 0x1021c680 */
  if (C.zf) goto L_1021c680;
  /* 1021c67d inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1021c680:;
  /* 1021c680 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 1021c683 push eax */
  push32((uint32_t)(EAX));
  /* 1021c684 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 1021c687 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1021c689 call 0x1021c615 */
  push32(0x1021c68eu); f_1021c615();
  /* 1021c68e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021c691 pop edi */
  EDI = (pop32());
  /* 1021c692 pop esi */
  ESI = (pop32());
  /* 1021c693 ret  */
  ESPCHK(0x1021c636u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c694 @ 0x1021c694 (46 bytes, 21 insns) */
void f_1021c694(void) {
  FTRACE(0x1021c694u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021c694 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1021c698 push esi */
  push32((uint32_t)(ESI));
  /* 1021c699 push edi */
  push32((uint32_t)(EDI));
  /* 1021c69a mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 1021c69c mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 1021c69f mov ecx, esi */
  ECX = (ESI);
  /* 1021c6a1 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021c6a3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1021c6a5 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 1021c6a8 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1021c6ab or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1021c6ad mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1021c6b0 mov edx, edi */
  EDX = (EDI);
  /* 1021c6b2 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 1021c6b5 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 1021c6b8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1021c6ba or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1021c6bc pop edi */
  EDI = (pop32());
  /* 1021c6bd mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1021c6c0 pop esi */
  ESI = (pop32());
  /* 1021c6c1 ret  */
  ESPCHK(0x1021c694u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6c2 @ 0x1021c6c2 (45 bytes, 21 insns) */
void f_1021c6c2(void) {
  FTRACE(0x1021c6c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021c6c2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1021c6c6 push esi */
  push32((uint32_t)(ESI));
  /* 1021c6c7 push edi */
  push32((uint32_t)(EDI));
  /* 1021c6c8 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 1021c6cb mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1021c6ce mov esi, edx */
  ESI = (EDX);
  /* 1021c6d0 mov edi, ecx */
  EDI = (ECX);
  /* 1021c6d2 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 1021c6d5 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1021c6d7 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 1021c6d9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1021c6dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1021c6de shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 1021c6e1 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1021c6e3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1021c6e5 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1021c6e7 pop edi */
  EDI = (pop32());
  /* 1021c6e8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1021c6eb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1021c6ed pop esi */
  ESI = (pop32());
  /* 1021c6ee ret  */
  ESPCHK(0x1021c6c2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6ef @ 0x1021c6ef (199 bytes, 76 insns) */
void f_1021c6ef(void) {
  FTRACE(0x1021c6efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021c6ef push ebp */
  push32((uint32_t)(EBP));
  /* 1021c6f0 mov ebp, esp */
  EBP = (ESP);
  /* 1021c6f2 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021c6f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1021c6f8 push ebx */
  push32((uint32_t)(EBX));
  /* 1021c6f9 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1021c6fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1021c6fe cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c700 push esi */
  push32((uint32_t)(ESI));
  /* 1021c701 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 1021c708 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 1021c70a mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 1021c70d mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 1021c710 jbe 0x1021c763 */
  if ((C.cf||C.zf)) goto L_1021c763;
  /* 1021c712 push edi */
  push32((uint32_t)(EDI));
  /* 1021c713 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1021c716:;
  /* 1021c716 mov esi, ebx */
  ESI = (EBX);
  /* 1021c718 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 1021c71b movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1021c71c movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1021c71d push ebx */
  push32((uint32_t)(EBX));
  /* 1021c71e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1021c71f call 0x1021c694 */
  push32(0x1021c724u); f_1021c694();
  /* 1021c724 push ebx */
  push32((uint32_t)(EBX));
  /* 1021c725 call 0x1021c694 */
  push32(0x1021c72au); f_1021c694();
  /* 1021c72a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1021c72d push eax */
  push32((uint32_t)(EAX));
  /* 1021c72e push ebx */
  push32((uint32_t)(EBX));
  /* 1021c72f call 0x1021c636 */
  push32(0x1021c734u); f_1021c636();
  /* 1021c734 push ebx */
  push32((uint32_t)(EBX));
  /* 1021c735 call 0x1021c694 */
  push32(0x1021c73au); f_1021c694();
  /* 1021c73a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021c73d and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 1021c741 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1021c745 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1021c748 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1021c74b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1021c74e push eax */
  push32((uint32_t)(EAX));
  /* 1021c74f push ebx */
  push32((uint32_t)(EBX));
  /* 1021c750 call 0x1021c636 */
  push32(0x1021c755u); f_1021c636();
  /* 1021c755 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021c758 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1021c75b dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 1021c75e jne 0x1021c716 */
  if (!C.zf) goto L_1021c716;
  /* 1021c760 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1021c762 pop edi */
  EDI = (pop32());
L_1021c763:;
  /* 1021c763 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c766 jne 0x1021c790 */
  if (!C.zf) goto L_1021c790;
  /* 1021c768 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1021c76b mov eax, ecx */
  EAX = (ECX);
  /* 1021c76d shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1021c770 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 1021c773 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1021c775 mov esi, eax */
  ESI = (EAX);
  /* 1021c777 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1021c77a shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 1021c77d or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1021c77f shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1021c782 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1021c789 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 1021c78c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 1021c78e jmp 0x1021c763 */
  goto L_1021c763;
L_1021c790:;
  /* 1021c790 mov esi, 0x8000 */
  ESI = (0x8000u);
L_1021c795:;
  /* 1021c795 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 1021c798 jne 0x1021c7aa */
  if (!C.zf) goto L_1021c7aa;
  /* 1021c79a push ebx */
  push32((uint32_t)(EBX));
  /* 1021c79b call 0x1021c694 */
  push32(0x1021c7a0u); f_1021c694();
  /* 1021c7a0 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1021c7a7 pop ecx */
  ECX = (pop32());
  /* 1021c7a8 jmp 0x1021c795 */
  goto L_1021c795;
L_1021c7aa:;
  /* 1021c7aa mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1021c7ae pop esi */
  ESI = (pop32());
  /* 1021c7af mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 1021c7b3 pop ebx */
  EBX = (pop32());
  /* 1021c7b4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021c7b5 ret  */
  ESPCHK(0x1021c6efu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7b6 @ 0x1021c7b6 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_1021c7b6(void) {
  FTRACE(0x1021c7b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021c7b6 push ebp */
  push32((uint32_t)(EBP));
  /* 1021c7b7 mov ebp, esp */
  EBP = (ESP);
  /* 1021c7b9 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021c7bc push ebx */
  push32((uint32_t)(EBX));
  /* 1021c7bd push esi */
  push32((uint32_t)(ESI));
  /* 1021c7be push edi */
  push32((uint32_t)(EDI));
  /* 1021c7bf mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1021c7c2 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1021c7c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021c7c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1021c7ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021c7cc pop edx */
  EDX = (pop32());
  /* 1021c7cd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1021c7d0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1021c7d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1021c7d6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1021c7d9 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1021c7dc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1021c7df mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1021c7e2 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1021c7e5 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1021c7e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1021c7eb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1021c7ee mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_1021c7f1:;
  /* 1021c7f1 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 1021c7f3 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c7f6 je 0x1021c807 */
  if (C.zf) goto L_1021c807;
  /* 1021c7f8 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c7fb je 0x1021c807 */
  if (C.zf) goto L_1021c807;
  /* 1021c7fd cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c800 je 0x1021c807 */
  if (C.zf) goto L_1021c807;
  /* 1021c802 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c805 jne 0x1021c80a */
  if (!C.zf) goto L_1021c80a;
L_1021c807:;
  /* 1021c807 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1021c808 jmp 0x1021c7f1 */
  goto L_1021c7f1;
L_1021c80a:;
  /* 1021c80a push 4 */
  push32((uint32_t)(0x4u));
  /* 1021c80c pop esi */
  ESI = (pop32());
L_1021c80d:;
  /* 1021c80d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1021c80f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1021c810 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c813 ja 0x1021ca90 */
  if ((!C.cf&&!C.zf)) goto L_1021ca90;
  /* 1021c819 jmp dword ptr [eax*4 + 0x1021cc57] */
  switch (EAX) {
    case 0: goto L_1021c820;
    case 1: goto L_1021c86f;
    case 2: goto L_1021c8c6;
    case 3: goto L_1021c8f0;
    case 4: goto L_1021c94b;
    case 5: goto L_1021c9c2;
    case 6: goto L_1021c9f8;
    case 7: goto L_1021ca42;
    case 8: goto L_1021ca21;
    case 9: goto L_1021caa6;
    case 10: goto L_1021ca90;
    case 11: goto L_1021ca5c;
    default: x86_unimpl("switch@0x1021c819 out of table"); return;
  }
L_1021c820:;
  /* 1021c820 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c823 jl 0x1021c831 */
  if ((C.sf!=C.of)) goto L_1021c831;
  /* 1021c825 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c828 jg 0x1021c831 */
  if ((!C.zf&&C.sf==C.of)) goto L_1021c831;
L_1021c82a:;
  /* 1021c82a push 3 */
  push32((uint32_t)(0x3u));
  /* 1021c82c jmp 0x1021ca4e */
  goto L_1021ca4e;
L_1021c831:;
  /* 1021c831 cmp bl, byte ptr [0x10220be4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10220be4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c837 jne 0x1021c840 */
  if (!C.zf) goto L_1021c840;
L_1021c839:;
  /* 1021c839 push 5 */
  push32((uint32_t)(0x5u));
  /* 1021c83b jmp 0x1021ca86 */
  goto L_1021ca86;
L_1021c840:;
  /* 1021c840 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1021c843 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021c846 je 0x1021c866 */
  if (C.zf) goto L_1021c866;
  /* 1021c848 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1021c849 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1021c84a je 0x1021c85a */
  if (C.zf) goto L_1021c85a;
  /* 1021c84c sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021c84f jne 0x1021cb29 */
  if (!C.zf) goto L_1021cb29;
  /* 1021c855 jmp 0x1021c8e9 */
  goto L_1021c8e9;
L_1021c85a:;
  /* 1021c85a push 2 */
  push32((uint32_t)(0x2u));
  /* 1021c85c mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 1021c863 pop eax */
  EAX = (pop32());
  /* 1021c864 jmp 0x1021c80d */
  goto L_1021c80d;
L_1021c866:;
  /* 1021c866 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 1021c86a push 2 */
  push32((uint32_t)(0x2u));
  /* 1021c86c pop eax */
  EAX = (pop32());
  /* 1021c86d jmp 0x1021c80d */
  goto L_1021c80d;
L_1021c86f:;
  /* 1021c86f cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c872 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1021c875 jl 0x1021c87c */
  if ((C.sf!=C.of)) goto L_1021c87c;
  /* 1021c877 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c87a jle 0x1021c82a */
  if ((C.zf||C.sf!=C.of)) goto L_1021c82a;
L_1021c87c:;
  /* 1021c87c cmp bl, byte ptr [0x10220be4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10220be4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c882 je 0x1021c944 */
  if (C.zf) goto L_1021c944;
  /* 1021c888 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c88b je 0x1021c8be */
  if (C.zf) goto L_1021c8be;
  /* 1021c88d cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c890 je 0x1021c8be */
  if (C.zf) goto L_1021c8be;
  /* 1021c892 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c895 je 0x1021c8e9 */
  if (C.zf) goto L_1021c8e9;
L_1021c897:;
  /* 1021c897 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c89a jle 0x1021cb29 */
  if ((C.zf||C.sf!=C.of)) goto L_1021cb29;
  /* 1021c8a0 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c8a3 jle 0x1021c8b7 */
  if ((C.zf||C.sf!=C.of)) goto L_1021c8b7;
  /* 1021c8a5 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c8a8 jle 0x1021cb29 */
  if ((C.zf||C.sf!=C.of)) goto L_1021cb29;
  /* 1021c8ae cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c8b1 jg 0x1021cb29 */
  if ((!C.zf&&C.sf==C.of)) goto L_1021cb29;
L_1021c8b7:;
  /* 1021c8b7 push 6 */
  push32((uint32_t)(0x6u));
  /* 1021c8b9 jmp 0x1021ca86 */
  goto L_1021ca86;
L_1021c8be:;
  /* 1021c8be dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1021c8bf push 0xb */
  push32((uint32_t)(0xbu));
  /* 1021c8c1 jmp 0x1021ca86 */
  goto L_1021ca86;
L_1021c8c6:;
  /* 1021c8c6 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c8c9 jl 0x1021c8d4 */
  if ((C.sf!=C.of)) goto L_1021c8d4;
  /* 1021c8cb cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c8ce jle 0x1021c82a */
  if ((C.zf||C.sf!=C.of)) goto L_1021c82a;
L_1021c8d4:;
  /* 1021c8d4 cmp bl, byte ptr [0x10220be4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10220be4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c8da je 0x1021c839 */
  if (C.zf) goto L_1021c839;
  /* 1021c8e0 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c8e3 jne 0x1021ca9e */
  if (!C.zf) goto L_1021ca9e;
L_1021c8e9:;
  /* 1021c8e9 mov eax, edx */
  EAX = (EDX);
  /* 1021c8eb jmp 0x1021c80d */
  goto L_1021c80d;
L_1021c8f0:;
  /* 1021c8f0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1021c8f3:;
  /* 1021c8f3 cmp dword ptr [0x10220be0], edx */
  { uint32_t _a=(r32((uint32_t)(0x10220be0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c8f9 jle 0x1021c90c */
  if ((C.zf||C.sf!=C.of)) goto L_1021c90c;
  /* 1021c8fb movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1021c8fe push esi */
  push32((uint32_t)(ESI));
  /* 1021c8ff push eax */
  push32((uint32_t)(EAX));
  /* 1021c900 call 0x102193cb */
  push32(0x1021c905u); f_102193cb();
  /* 1021c905 pop ecx */
  ECX = (pop32());
  /* 1021c906 pop ecx */
  ECX = (pop32());
  /* 1021c907 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021c909 pop edx */
  EDX = (pop32());
  /* 1021c90a jmp 0x1021c91a */
  goto L_1021c91a;
L_1021c90c:;
  /* 1021c90c mov ecx, dword ptr [0x102209d0] */
  ECX = (r32((uint32_t)(0x102209d0)));
  /* 1021c912 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1021c915 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1021c918 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1021c91a:;
  /* 1021c91a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021c91c je 0x1021c93c */
  if (C.zf) goto L_1021c93c;
  /* 1021c91e cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c922 jae 0x1021c934 */
  if (!C.cf) goto L_1021c934;
  /* 1021c924 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1021c927 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1021c92a sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1021c92d inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 1021c930 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 1021c932 jmp 0x1021c937 */
  goto L_1021c937;
L_1021c934:;
  /* 1021c934 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_1021c937:;
  /* 1021c937 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1021c939 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1021c93a jmp 0x1021c8f3 */
  goto L_1021c8f3;
L_1021c93c:;
  /* 1021c93c cmp bl, byte ptr [0x10220be4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10220be4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c942 jne 0x1021c9ab */
  if (!C.zf) goto L_1021c9ab;
L_1021c944:;
  /* 1021c944 mov eax, esi */
  EAX = (ESI);
  /* 1021c946 jmp 0x1021c80d */
  goto L_1021c80d;
L_1021c94b:;
  /* 1021c94b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c94f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1021c952 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1021c955 jne 0x1021c964 */
  if (!C.zf) goto L_1021c964;
L_1021c957:;
  /* 1021c957 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c95a jne 0x1021c964 */
  if (!C.zf) goto L_1021c964;
  /* 1021c95c dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1021c95f mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1021c961 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1021c962 jmp 0x1021c957 */
  goto L_1021c957;
L_1021c964:;
  /* 1021c964 cmp dword ptr [0x10220be0], edx */
  { uint32_t _a=(r32((uint32_t)(0x10220be0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c96a jle 0x1021c97d */
  if ((C.zf||C.sf!=C.of)) goto L_1021c97d;
  /* 1021c96c movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1021c96f push esi */
  push32((uint32_t)(ESI));
  /* 1021c970 push eax */
  push32((uint32_t)(EAX));
  /* 1021c971 call 0x102193cb */
  push32(0x1021c976u); f_102193cb();
  /* 1021c976 pop ecx */
  ECX = (pop32());
  /* 1021c977 pop ecx */
  ECX = (pop32());
  /* 1021c978 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021c97a pop edx */
  EDX = (pop32());
  /* 1021c97b jmp 0x1021c98b */
  goto L_1021c98b;
L_1021c97d:;
  /* 1021c97d mov ecx, dword ptr [0x102209d0] */
  ECX = (r32((uint32_t)(0x102209d0)));
  /* 1021c983 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1021c986 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1021c989 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1021c98b:;
  /* 1021c98b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021c98d je 0x1021c9ab */
  if (C.zf) goto L_1021c9ab;
  /* 1021c98f cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c993 jae 0x1021c9a6 */
  if (!C.cf) goto L_1021c9a6;
  /* 1021c995 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1021c998 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1021c99b sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1021c99e inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 1021c9a1 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1021c9a4 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_1021c9a6:;
  /* 1021c9a6 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1021c9a8 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1021c9a9 jmp 0x1021c964 */
  goto L_1021c964;
L_1021c9ab:;
  /* 1021c9ab cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c9ae je 0x1021c8be */
  if (C.zf) goto L_1021c8be;
  /* 1021c9b4 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c9b7 je 0x1021c8be */
  if (C.zf) goto L_1021c8be;
  /* 1021c9bd jmp 0x1021c897 */
  goto L_1021c897;
L_1021c9c2:;
  /* 1021c9c2 cmp dword ptr [0x10220be0], edx */
  { uint32_t _a=(r32((uint32_t)(0x10220be0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021c9c8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1021c9cb jle 0x1021c9de */
  if ((C.zf||C.sf!=C.of)) goto L_1021c9de;
  /* 1021c9cd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1021c9d0 push esi */
  push32((uint32_t)(ESI));
  /* 1021c9d1 push eax */
  push32((uint32_t)(EAX));
  /* 1021c9d2 call 0x102193cb */
  push32(0x1021c9d7u); f_102193cb();
  /* 1021c9d7 pop ecx */
  ECX = (pop32());
  /* 1021c9d8 pop ecx */
  ECX = (pop32());
  /* 1021c9d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021c9db pop edx */
  EDX = (pop32());
  /* 1021c9dc jmp 0x1021c9ec */
  goto L_1021c9ec;
L_1021c9de:;
  /* 1021c9de mov ecx, dword ptr [0x102209d0] */
  ECX = (r32((uint32_t)(0x102209d0)));
  /* 1021c9e4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1021c9e7 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1021c9ea and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1021c9ec:;
  /* 1021c9ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021c9ee je 0x1021ca9e */
  if (C.zf) goto L_1021ca9e;
  /* 1021c9f4 mov eax, esi */
  EAX = (ESI);
  /* 1021c9f6 jmp 0x1021ca4f */
  goto L_1021ca4f;
L_1021c9f8:;
  /* 1021c9f8 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 1021c9fb cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021c9fe mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1021ca01 jl 0x1021ca08 */
  if ((C.sf!=C.of)) goto L_1021ca08;
  /* 1021ca03 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021ca06 jle 0x1021ca4c */
  if ((C.zf||C.sf!=C.of)) goto L_1021ca4c;
L_1021ca08:;
  /* 1021ca08 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1021ca0b sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021ca0e je 0x1021ca84 */
  if (C.zf) goto L_1021ca84;
  /* 1021ca10 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1021ca11 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1021ca12 je 0x1021ca78 */
  if (C.zf) goto L_1021ca78;
  /* 1021ca14 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021ca17 jne 0x1021cb2c */
  if (!C.zf) goto L_1021cb2c;
L_1021ca1d:;
  /* 1021ca1d push 8 */
  push32((uint32_t)(0x8u));
  /* 1021ca1f jmp 0x1021ca86 */
  goto L_1021ca86;
L_1021ca21:;
  /* 1021ca21 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1021ca24:;
  /* 1021ca24 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021ca27 jne 0x1021ca2e */
  if (!C.zf) goto L_1021ca2e;
  /* 1021ca29 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1021ca2b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1021ca2c jmp 0x1021ca24 */
  goto L_1021ca24;
L_1021ca2e:;
  /* 1021ca2e cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021ca31 jl 0x1021cb29 */
  if ((C.sf!=C.of)) goto L_1021cb29;
  /* 1021ca37 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021ca3a jg 0x1021cb29 */
  if ((!C.zf&&C.sf==C.of)) goto L_1021cb29;
  /* 1021ca40 jmp 0x1021ca4c */
  goto L_1021ca4c;
L_1021ca42:;
  /* 1021ca42 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021ca45 jl 0x1021ca55 */
  if ((C.sf!=C.of)) goto L_1021ca55;
  /* 1021ca47 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021ca4a jg 0x1021ca55 */
  if ((!C.zf&&C.sf==C.of)) goto L_1021ca55;
L_1021ca4c:;
  /* 1021ca4c push 9 */
  push32((uint32_t)(0x9u));
L_1021ca4e:;
  /* 1021ca4e pop eax */
  EAX = (pop32());
L_1021ca4f:;
  /* 1021ca4f dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1021ca50 jmp 0x1021c80d */
  goto L_1021c80d;
L_1021ca55:;
  /* 1021ca55 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021ca58 jne 0x1021ca9e */
  if (!C.zf) goto L_1021ca9e;
  /* 1021ca5a jmp 0x1021ca1d */
  goto L_1021ca1d;
L_1021ca5c:;
  /* 1021ca5c cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021ca60 je 0x1021ca8c */
  if (C.zf) goto L_1021ca8c;
  /* 1021ca62 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1021ca65 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 1021ca68 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021ca6b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1021ca6e je 0x1021ca84 */
  if (C.zf) goto L_1021ca84;
  /* 1021ca70 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1021ca71 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1021ca72 jne 0x1021cb2c */
  if (!C.zf) goto L_1021cb2c;
L_1021ca78:;
  /* 1021ca78 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 1021ca7c push 7 */
  push32((uint32_t)(0x7u));
  /* 1021ca7e pop eax */
  EAX = (pop32());
  /* 1021ca7f jmp 0x1021c80d */
  goto L_1021c80d;
L_1021ca84:;
  /* 1021ca84 push 7 */
  push32((uint32_t)(0x7u));
L_1021ca86:;
  /* 1021ca86 pop eax */
  EAX = (pop32());
  /* 1021ca87 jmp 0x1021c80d */
  goto L_1021c80d;
L_1021ca8c:;
  /* 1021ca8c push 0xa */
  push32((uint32_t)(0xau));
  /* 1021ca8e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1021ca8f pop eax */
  EAX = (pop32());
L_1021ca90:;
  /* 1021ca90 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021ca93 je 0x1021cb2e */
  if (C.zf) goto L_1021cb2e;
  /* 1021ca99 jmp 0x1021c80d */
  goto L_1021c80d;
L_1021ca9e:;
  /* 1021ca9e mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1021caa1 jmp 0x1021cb2e */
  goto L_1021cb2e;
L_1021caa6:;
  /* 1021caa6 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 1021caad xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1021caaf:;
  /* 1021caaf cmp dword ptr [0x10220be0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10220be0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021cab6 jle 0x1021cac7 */
  if ((C.zf||C.sf!=C.of)) goto L_1021cac7;
  /* 1021cab8 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1021cabb push 4 */
  push32((uint32_t)(0x4u));
  /* 1021cabd push eax */
  push32((uint32_t)(EAX));
  /* 1021cabe call 0x102193cb */
  push32(0x1021cac3u); f_102193cb();
  /* 1021cac3 pop ecx */
  ECX = (pop32());
  /* 1021cac4 pop ecx */
  ECX = (pop32());
  /* 1021cac5 jmp 0x1021cad6 */
  goto L_1021cad6;
L_1021cac7:;
  /* 1021cac7 mov ecx, dword ptr [0x102209d0] */
  ECX = (r32((uint32_t)(0x102209d0)));
  /* 1021cacd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1021cad0 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1021cad3 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1021cad6:;
  /* 1021cad6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021cad8 je 0x1021caf6 */
  if (C.zf) goto L_1021caf6;
  /* 1021cada movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1021cadd lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 1021cae0 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 1021cae4 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021caea jg 0x1021caf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_1021caf1;
  /* 1021caec mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1021caee inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1021caef jmp 0x1021caaf */
  goto L_1021caaf;
L_1021caf1:;
  /* 1021caf1 mov esi, 0x1451 */
  ESI = (0x1451u);
L_1021caf6:;
  /* 1021caf6 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_1021caf9:;
  /* 1021caf9 cmp dword ptr [0x10220be0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10220be0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021cb00 jle 0x1021cb11 */
  if ((C.zf||C.sf!=C.of)) goto L_1021cb11;
  /* 1021cb02 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1021cb05 push 4 */
  push32((uint32_t)(0x4u));
  /* 1021cb07 push eax */
  push32((uint32_t)(EAX));
  /* 1021cb08 call 0x102193cb */
  push32(0x1021cb0du); f_102193cb();
  /* 1021cb0d pop ecx */
  ECX = (pop32());
  /* 1021cb0e pop ecx */
  ECX = (pop32());
  /* 1021cb0f jmp 0x1021cb20 */
  goto L_1021cb20;
L_1021cb11:;
  /* 1021cb11 mov ecx, dword ptr [0x102209d0] */
  ECX = (r32((uint32_t)(0x102209d0)));
  /* 1021cb17 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1021cb1a mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1021cb1d and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1021cb20:;
  /* 1021cb20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021cb22 je 0x1021cb29 */
  if (C.zf) goto L_1021cb29;
  /* 1021cb24 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1021cb26 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1021cb27 jmp 0x1021caf9 */
  goto L_1021caf9;
L_1021cb29:;
  /* 1021cb29 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1021cb2a jmp 0x1021cb2e */
  goto L_1021cb2e;
L_1021cb2c:;
  /* 1021cb2c mov edi, ecx */
  EDI = (ECX);
L_1021cb2e:;
  /* 1021cb2e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1021cb31 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021cb35 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 1021cb37 je 0x1021cc16 */
  if (C.zf) goto L_1021cc16;
  /* 1021cb3d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1021cb3f pop eax */
  EAX = (pop32());
  /* 1021cb40 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021cb43 jbe 0x1021cb5a */
  if ((C.cf||C.zf)) goto L_1021cb5a;
  /* 1021cb45 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021cb49 jl 0x1021cb4e */
  if ((C.sf!=C.of)) goto L_1021cb4e;
  /* 1021cb4b inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_1021cb4e:;
  /* 1021cb4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1021cb51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1021cb54 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1021cb55 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 1021cb58 jmp 0x1021cb5d */
  goto L_1021cb5d;
L_1021cb5a:;
  /* 1021cb5a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1021cb5d:;
  /* 1021cb5d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021cb61 jbe 0x1021cc0c */
  if ((C.cf||C.zf)) goto L_1021cc0c;
L_1021cb67:;
  /* 1021cb67 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1021cb68 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021cb6b jne 0x1021cb75 */
  if (!C.zf) goto L_1021cb75;
  /* 1021cb6d dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1021cb70 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 1021cb73 jmp 0x1021cb67 */
  goto L_1021cb67;
L_1021cb75:;
  /* 1021cb75 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1021cb78 push eax */
  push32((uint32_t)(EAX));
  /* 1021cb79 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1021cb7c push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 1021cb7f push eax */
  push32((uint32_t)(EAX));
  /* 1021cb80 call 0x1021c6ef */
  push32(0x1021cb85u); f_1021c6ef();
  /* 1021cb85 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1021cb88 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1021cb8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021cb8d cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021cb90 jge 0x1021cb94 */
  if ((C.sf==C.of)) goto L_1021cb94;
  /* 1021cb92 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_1021cb94:;
  /* 1021cb94 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021cb97 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021cb9a jne 0x1021cb9f */
  if (!C.zf) goto L_1021cb9f;
  /* 1021cb9c add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1021cb9f:;
  /* 1021cb9f cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021cba2 jne 0x1021cba7 */
  if (!C.zf) goto L_1021cba7;
  /* 1021cba4 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1021cba7:;
  /* 1021cba7 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021cbac jle 0x1021cbde */
  if ((C.zf||C.sf!=C.of)) goto L_1021cbde;
  /* 1021cbae mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_1021cbb5:;
  /* 1021cbb5 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1021cbb8 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 1021cbbb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1021cbbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_1021cbc1:;
  /* 1021cbc1 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021cbc5 je 0x1021cc27 */
  if (C.zf) goto L_1021cc27;
  /* 1021cbc7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1021cbc9 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 1021cbce mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1021cbd3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1021cbd5 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 1021cbdc jmp 0x1021cc3c */
  goto L_1021cc3c;
L_1021cbde:;
  /* 1021cbde cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021cbe3 jge 0x1021cbee */
  if ((C.sf==C.of)) goto L_1021cbee;
  /* 1021cbe5 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 1021cbec jmp 0x1021cbb5 */
  goto L_1021cbb5;
L_1021cbee:;
  /* 1021cbee push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1021cbf1 push eax */
  push32((uint32_t)(EAX));
  /* 1021cbf2 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1021cbf5 push eax */
  push32((uint32_t)(EAX));
  /* 1021cbf6 call 0x1021d68a */
  push32(0x1021cbfbu); f_1021d68a();
  /* 1021cbfb mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1021cbfe mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 1021cc01 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 1021cc04 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 1021cc07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021cc0a jmp 0x1021cbc1 */
  goto L_1021cbc1;
L_1021cc0c:;
  /* 1021cc0c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1021cc0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021cc10 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1021cc12 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1021cc14 jmp 0x1021cbc1 */
  goto L_1021cbc1;
L_1021cc16:;
  /* 1021cc16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1021cc18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021cc1a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1021cc1c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1021cc1e mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 1021cc25 jmp 0x1021cc3c */
  goto L_1021cc3c;
L_1021cc27:;
  /* 1021cc27 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021cc2b je 0x1021cc3c */
  if (C.zf) goto L_1021cc3c;
  /* 1021cc2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1021cc2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021cc31 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1021cc33 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1021cc35 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_1021cc3c:;
  /* 1021cc3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021cc3f or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 1021cc42 pop edi */
  EDI = (pop32());
  /* 1021cc43 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 1021cc46 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 1021cc49 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 1021cc4d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1021cc50 pop esi */
  ESI = (pop32());
  /* 1021cc51 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1021cc54 pop ebx */
  EBX = (pop32());
  /* 1021cc55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021cc56 ret  */
  ESPCHK(0x1021c7b6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc87 @ 0x1021cc87 (659 bytes, 232 insns) */
void f_1021cc87(void) {
  FTRACE(0x1021cc87u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021cc87 push ebp */
  push32((uint32_t)(EBP));
  /* 1021cc88 mov ebp, esp */
  EBP = (ESP);
  /* 1021cc8a sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021cc8d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1021cc90 push ebx */
  push32((uint32_t)(EBX));
  /* 1021cc91 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1021cc94 push esi */
  push32((uint32_t)(ESI));
  /* 1021cc95 mov ecx, eax */
  ECX = (EAX);
  /* 1021cc97 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 1021cc9c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1021cca2 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1021cca4 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1021cca7 push edi */
  push32((uint32_t)(EDI));
  /* 1021cca8 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 1021ccac mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 1021ccb0 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 1021ccb4 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 1021ccb8 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 1021ccbc mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 1021ccc0 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 1021ccc4 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 1021ccc8 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 1021cccc mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 1021ccd0 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 1021ccd4 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 1021ccd8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1021ccdf mov edx, eax */
  EDX = (EAX);
  /* 1021cce1 je 0x1021cce9 */
  if (C.zf) goto L_1021cce9;
  /* 1021cce3 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 1021cce7 jmp 0x1021cced */
  goto L_1021cced;
L_1021cce9:;
  /* 1021cce9 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_1021cced:;
  /* 1021cced mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1021ccf0 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 1021ccf3 jne 0x1021cd13 */
  if (!C.zf) goto L_1021cd13;
  /* 1021ccf5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1021ccf7 jne 0x1021cd13 */
  if (!C.zf) goto L_1021cd13;
  /* 1021ccf9 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021ccfc jne 0x1021cd13 */
  if (!C.zf) goto L_1021cd13;
L_1021ccfe:;
  /* 1021ccfe and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1021cd02 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1021cd06 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 1021cd0a mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 1021cd0e jmp 0x1021cf11 */
  goto L_1021cf11;
L_1021cd13:;
  /* 1021cd13 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1021cd16 jne 0x1021cd92 */
  if (!C.zf) goto L_1021cd92;
  /* 1021cd18 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1021cd1d mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 1021cd22 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021cd24 jne 0x1021cd2c */
  if (!C.zf) goto L_1021cd2c;
  /* 1021cd26 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021cd2a je 0x1021cd3b */
  if (C.zf) goto L_1021cd3b;
L_1021cd2c:;
  /* 1021cd2c test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 1021cd32 jne 0x1021cd3b */
  if (!C.zf) goto L_1021cd3b;
  /* 1021cd34 push 0x1021e5a0 */
  push32((uint32_t)(0x1021e5a0u));
  /* 1021cd39 jmp 0x1021cd81 */
  goto L_1021cd81;
L_1021cd3b:;
  /* 1021cd3b test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1021cd3e je 0x1021cd55 */
  if (C.zf) goto L_1021cd55;
  /* 1021cd40 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021cd46 jne 0x1021cd55 */
  if (!C.zf) goto L_1021cd55;
  /* 1021cd48 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021cd4c jne 0x1021cd7c */
  if (!C.zf) goto L_1021cd7c;
  /* 1021cd4e push 0x1021e598 */
  push32((uint32_t)(0x1021e598u));
  /* 1021cd53 jmp 0x1021cd64 */
  goto L_1021cd64;
L_1021cd55:;
  /* 1021cd55 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021cd57 jne 0x1021cd7c */
  if (!C.zf) goto L_1021cd7c;
  /* 1021cd59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021cd5d jne 0x1021cd7c */
  if (!C.zf) goto L_1021cd7c;
  /* 1021cd5f push 0x1021e590 */
  push32((uint32_t)(0x1021e590u));
L_1021cd64:;
  /* 1021cd64 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1021cd67 push eax */
  push32((uint32_t)(EAX));
  /* 1021cd68 call 0x10219af0 */
  push32(0x1021cd6du); f_10219af0();
  /* 1021cd6d pop ecx */
  ECX = (pop32());
  /* 1021cd6e mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 1021cd72 pop ecx */
  ECX = (pop32());
L_1021cd73:;
  /* 1021cd73 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1021cd77 jmp 0x1021ceea */
  goto L_1021ceea;
L_1021cd7c:;
  /* 1021cd7c push 0x1021e588 */
  push32((uint32_t)(0x1021e588u));
L_1021cd81:;
  /* 1021cd81 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1021cd84 push eax */
  push32((uint32_t)(EAX));
  /* 1021cd85 call 0x10219af0 */
  push32(0x1021cd8au); f_10219af0();
  /* 1021cd8a pop ecx */
  ECX = (pop32());
  /* 1021cd8b mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 1021cd8f pop ecx */
  ECX = (pop32());
  /* 1021cd90 jmp 0x1021cd73 */
  goto L_1021cd73;
L_1021cd92:;
  /* 1021cd92 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 1021cd95 mov ecx, edi */
  ECX = (EDI);
  /* 1021cd97 mov esi, eax */
  ESI = (EAX);
  /* 1021cd99 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 1021cd9c imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1021cda2 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 1021cda5 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 1021cdaa push 1 */
  push32((uint32_t)(0x1u));
  /* 1021cdac lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 1021cdaf mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 1021cdb3 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1021cdb6 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 1021cdb9 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 1021cdc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021cdc3 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1021cdc6 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 1021cdc9 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 1021cdcc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1021cdce push eax */
  push32((uint32_t)(EAX));
  /* 1021cdcf lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1021cdd2 push eax */
  push32((uint32_t)(EAX));
  /* 1021cdd3 call 0x1021d68a */
  push32(0x1021cdd8u); f_1021d68a();
  /* 1021cdd8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021cddb cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1021cde1 jb 0x1021cdf3 */
  if (C.cf) goto L_1021cdf3;
  /* 1021cde3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1021cde6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1021cde7 push eax */
  push32((uint32_t)(EAX));
  /* 1021cde8 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1021cdeb push eax */
  push32((uint32_t)(EAX));
  /* 1021cdec call 0x1021d46a */
  push32(0x1021cdf1u); f_1021d46a();
  /* 1021cdf1 pop ecx */
  ECX = (pop32());
  /* 1021cdf2 pop ecx */
  ECX = (pop32());
L_1021cdf3:;
  /* 1021cdf3 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 1021cdf7 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 1021cdfa je 0x1021ce0d */
  if (C.zf) goto L_1021ce0d;
  /* 1021cdfc mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 1021cdff movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 1021ce02 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021ce04 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1021ce06 jg 0x1021ce10 */
  if ((!C.zf&&C.sf==C.of)) goto L_1021ce10;
  /* 1021ce08 jmp 0x1021ccfe */
  goto L_1021ccfe;
L_1021ce0d:;
  /* 1021ce0d mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_1021ce10:;
  /* 1021ce10 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021ce13 jle 0x1021ce18 */
  if ((C.zf||C.sf!=C.of)) goto L_1021ce18;
  /* 1021ce15 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1021ce17 pop edi */
  EDI = (pop32());
L_1021ce18:;
  /* 1021ce18 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 1021ce1c sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021ce22 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 1021ce27 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_1021ce2e:;
  /* 1021ce2e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1021ce31 push eax */
  push32((uint32_t)(EAX));
  /* 1021ce32 call 0x1021c694 */
  push32(0x1021ce37u); f_1021c694();
  /* 1021ce37 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 1021ce3a pop ecx */
  ECX = (pop32());
  /* 1021ce3b jne 0x1021ce2e */
  if (!C.zf) goto L_1021ce2e;
  /* 1021ce3d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1021ce3f jge 0x1021ce58 */
  if ((C.sf==C.of)) goto L_1021ce58;
  /* 1021ce41 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 1021ce43 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 1021ce49 jle 0x1021ce58 */
  if ((C.zf||C.sf!=C.of)) goto L_1021ce58;
L_1021ce4b:;
  /* 1021ce4b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1021ce4e push eax */
  push32((uint32_t)(EAX));
  /* 1021ce4f call 0x1021c6c2 */
  push32(0x1021ce54u); f_1021c6c2();
  /* 1021ce54 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1021ce55 pop ecx */
  ECX = (pop32());
  /* 1021ce56 jne 0x1021ce4b */
  if (!C.zf) goto L_1021ce4b;
L_1021ce58:;
  /* 1021ce58 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 1021ce5b lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1021ce5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1021ce60 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 1021ce63 jle 0x1021ceb5 */
  if ((C.zf||C.sf!=C.of)) goto L_1021ceb5;
  /* 1021ce65 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_1021ce68:;
  /* 1021ce68 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 1021ce6b lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 1021ce6e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1021ce6f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1021ce70 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1021ce73 push eax */
  push32((uint32_t)(EAX));
  /* 1021ce74 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1021ce75 call 0x1021c694 */
  push32(0x1021ce7au); f_1021c694();
  /* 1021ce7a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1021ce7d push eax */
  push32((uint32_t)(EAX));
  /* 1021ce7e call 0x1021c694 */
  push32(0x1021ce83u); f_1021c694();
  /* 1021ce83 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1021ce86 push eax */
  push32((uint32_t)(EAX));
  /* 1021ce87 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1021ce8a push eax */
  push32((uint32_t)(EAX));
  /* 1021ce8b call 0x1021c636 */
  push32(0x1021ce90u); f_1021c636();
  /* 1021ce90 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1021ce93 push eax */
  push32((uint32_t)(EAX));
  /* 1021ce94 call 0x1021c694 */
  push32(0x1021ce99u); f_1021c694();
  /* 1021ce99 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 1021ce9c mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1021ce9f and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 1021cea3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021cea6 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1021cea8 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 1021ceab dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 1021ceae mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1021ceb0 jne 0x1021ce68 */
  if (!C.zf) goto L_1021ce68;
  /* 1021ceb2 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_1021ceb5:;
  /* 1021ceb5 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 1021ceb8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1021ceb9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1021ceba cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021cebd lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 1021cec0 jl 0x1021cef2 */
  if ((C.sf!=C.of)) goto L_1021cef2;
L_1021cec2:;
  /* 1021cec2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021cec4 jb 0x1021ced5 */
  if (C.cf) goto L_1021ced5;
  /* 1021cec6 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021cec9 jne 0x1021ced1 */
  if (!C.zf) goto L_1021ced1;
  /* 1021cecb mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 1021cece dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1021cecf jmp 0x1021cec2 */
  goto L_1021cec2;
L_1021ced1:;
  /* 1021ced1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021ced3 jae 0x1021ced9 */
  if (!C.cf) goto L_1021ced9;
L_1021ced5:;
  /* 1021ced5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1021ced6 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_1021ced9:;
  /* 1021ced9 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_1021cedb:;
  /* 1021cedb sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1021cedd sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1021cedf mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 1021cee2 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1021cee5 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_1021ceea:;
  /* 1021ceea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1021ceed:;
  /* 1021ceed pop edi */
  EDI = (pop32());
  /* 1021ceee pop esi */
  ESI = (pop32());
  /* 1021ceef pop ebx */
  EBX = (pop32());
  /* 1021cef0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021cef1 ret  */
  ESPCHK(0x1021cc87u, _esp0);
  ESP += 4; return;
L_1021cef2:;
  /* 1021cef2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021cef4 jb 0x1021cf02 */
  if (C.cf) goto L_1021cf02;
  /* 1021cef6 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021cef9 jne 0x1021cefe */
  if (!C.zf) goto L_1021cefe;
  /* 1021cefb dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1021cefc jmp 0x1021cef2 */
  goto L_1021cef2;
L_1021cefe:;
  /* 1021cefe cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021cf00 jae 0x1021cedb */
  if (!C.cf) goto L_1021cedb;
L_1021cf02:;
  /* 1021cf02 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1021cf06 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1021cf0a mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 1021cf0e mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_1021cf11:;
  /* 1021cf11 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 1021cf15 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021cf17 pop eax */
  EAX = (pop32());
  /* 1021cf18 jmp 0x1021ceed */
  goto L_1021ceed;
}

/* FUN_1000cf1a @ 0x1021cf1a (27 bytes, 13 insns) */
void f_1021cf1a(void) {
  FTRACE(0x1021cf1au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021cf1a mov eax, dword ptr [0x1022686c] */
  EAX = (r32((uint32_t)(0x1022686c)));
  /* 1021cf1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021cf21 je 0x1021cf32 */
  if (C.zf) goto L_1021cf32;
  /* 1021cf23 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1021cf27 call eax */
  call_ind((uint32_t)(EAX), 0x1021cf29u);
  /* 1021cf29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021cf2b pop ecx */
  ECX = (pop32());
  /* 1021cf2c je 0x1021cf32 */
  if (C.zf) goto L_1021cf32;
  /* 1021cf2e push 1 */
  push32((uint32_t)(0x1u));
  /* 1021cf30 pop eax */
  EAX = (pop32());
  /* 1021cf31 ret  */
  ESPCHK(0x1021cf1au, _esp0);
  ESP += 4; return;
L_1021cf32:;
  /* 1021cf32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021cf34 ret  */
  ESPCHK(0x1021cf1au, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1021cf38 (32 bytes, 18 insns) */
void f_1021cf38(void) {
  FTRACE(0x1021cf38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021cf38 push ebp */
  push32((uint32_t)(EBP));
  /* 1021cf39 mov ebp, esp */
  EBP = (ESP);
  /* 1021cf3b push ebx */
  push32((uint32_t)(EBX));
  /* 1021cf3c push esi */
  push32((uint32_t)(ESI));
  /* 1021cf3d push edi */
  push32((uint32_t)(EDI));
  /* 1021cf3e push ebp */
  push32((uint32_t)(EBP));
  /* 1021cf3f push 0 */
  push32((uint32_t)(0x0u));
  /* 1021cf41 push 0 */
  push32((uint32_t)(0x0u));
  /* 1021cf43 push 0x1021cf50 */
  push32((uint32_t)(0x1021cf50u));
  /* 1021cf48 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1021cf4b call 0x1021da34 */
  push32(0x1021cf50u); f_1021da34();
  /* 1021cf50 pop ebp */
  EBP = (pop32());
  /* 1021cf51 pop edi */
  EDI = (pop32());
  /* 1021cf52 pop esi */
  ESI = (pop32());
  /* 1021cf53 pop ebx */
  EBX = (pop32());
  /* 1021cf54 mov esp, ebp */
  ESP = (EBP);
  /* 1021cf56 pop ebp */
  EBP = (pop32());
  /* 1021cf57 ret  */
  ESPCHK(0x1021cf38u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1021cf7a (104 bytes, 33 insns) */
void f_1021cf7a(void) {
  FTRACE(0x1021cf7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021cf7a push ebx */
  push32((uint32_t)(EBX));
  /* 1021cf7b push esi */
  push32((uint32_t)(ESI));
  /* 1021cf7c push edi */
  push32((uint32_t)(EDI));
  /* 1021cf7d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1021cf81 push eax */
  push32((uint32_t)(EAX));
  /* 1021cf82 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1021cf84 push 0x1021cf58 */
  push32((uint32_t)(0x1021cf58u));
  /* 1021cf89 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1021cf90 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1021cf97:;
  /* 1021cf97 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1021cf9b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1021cf9e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1021cfa1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021cfa4 je 0x1021cfd4 */
  if (C.zf) goto L_1021cfd4;
  /* 1021cfa6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021cfaa je 0x1021cfd4 */
  if (C.zf) goto L_1021cfd4;
  /* 1021cfac lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1021cfaf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1021cfb2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1021cfb6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1021cfb9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021cfbe jne 0x1021cfd2 */
  if (!C.zf) goto L_1021cfd2;
  /* 1021cfc0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1021cfc5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1021cfc9 call 0x1021d00e */
  push32(0x1021cfceu); f_1021d00e();
  /* 1021cfce call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1021cfd2u);
L_1021cfd2:;
  /* 1021cfd2 jmp 0x1021cf97 */
  goto L_1021cf97;
L_1021cfd4:;
  /* 1021cfd4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1021cfdb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021cfde pop edi */
  EDI = (pop32());
  /* 1021cfdf pop esi */
  ESI = (pop32());
  /* 1021cfe0 pop ebx */
  EBX = (pop32());
  /* 1021cfe1 ret  */
  ESPCHK(0x1021cf7au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d00e @ 0x1021d00e (24 bytes, 10 insns) */
void f_1021d00e(void) {
  FTRACE(0x1021d00eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021d00e push ebx */
  push32((uint32_t)(EBX));
  /* 1021d00f push ecx */
  push32((uint32_t)(ECX));
  /* 1021d010 mov ebx, 0x10223104 */
  EBX = (0x10223104u);
  /* 1021d015 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021d018 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1021d01b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1021d01e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1021d021 pop ecx */
  ECX = (pop32());
  /* 1021d022 pop ebx */
  EBX = (pop32());
  /* 1021d023 ret 4 */
  ESPCHK(0x1021d00eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d0ed @ 0x1021d0ed (27 bytes, 11 insns) */
void f_1021d0ed(void) {
  FTRACE(0x1021d0edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021d0ed push ebp */
  push32((uint32_t)(EBP));
  /* 1021d0ee mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1021d0f2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1021d0f4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1021d0f7 push eax */
  push32((uint32_t)(EAX));
  /* 1021d0f8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1021d0fb push eax */
  push32((uint32_t)(EAX));
  /* 1021d0fc call 0x1021cf7a */
  push32(0x1021d101u); f_1021cf7a();
  /* 1021d101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021d104 pop ebp */
  EBP = (pop32());
  /* 1021d105 ret 4 */
  ESPCHK(0x1021d0edu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d108 @ 0x1021d108 (111 bytes, 44 insns) */
void f_1021d108(void) {
  FTRACE(0x1021d108u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021d108 push ebx */
  push32((uint32_t)(EBX));
  /* 1021d109 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1021d10b cmp dword ptr [0x10226838], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10226838))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d111 jne 0x1021d126 */
  if (!C.zf) goto L_1021d126;
  /* 1021d113 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1021d117 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d11a jl 0x1021d175 */
  if ((C.sf!=C.of)) goto L_1021d175;
  /* 1021d11c cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d11f jg 0x1021d175 */
  if ((!C.zf&&C.sf==C.of)) goto L_1021d175;
  /* 1021d121 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021d124 pop ebx */
  EBX = (pop32());
  /* 1021d125 ret  */
  ESPCHK(0x1021d108u, _esp0);
  ESP += 4; return;
L_1021d126:;
  /* 1021d126 push esi */
  push32((uint32_t)(ESI));
  /* 1021d127 mov esi, 0x102269b4 */
  ESI = (0x102269b4u);
  /* 1021d12c push edi */
  push32((uint32_t)(EDI));
  /* 1021d12d push esi */
  push32((uint32_t)(ESI));
  /* 1021d12e call dword ptr [0x1021e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e090))), 0x1021d134u);
  /* 1021d134 cmp dword ptr [0x102269b0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102269b0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d13a mov edi, dword ptr [0x1021e08c] */
  EDI = (r32((uint32_t)(0x1021e08c)));
  /* 1021d140 je 0x1021d150 */
  if (C.zf) goto L_1021d150;
  /* 1021d142 push esi */
  push32((uint32_t)(ESI));
  /* 1021d143 call edi */
  call_ind((uint32_t)(EDI), 0x1021d145u);
  /* 1021d145 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1021d147 call 0x1021a013 */
  push32(0x1021d14cu); f_1021a013();
  /* 1021d14c pop ecx */
  ECX = (pop32());
  /* 1021d14d push 1 */
  push32((uint32_t)(0x1u));
  /* 1021d14f pop ebx */
  EBX = (pop32());
L_1021d150:;
  /* 1021d150 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1021d154 call 0x1021d177 */
  push32(0x1021d159u); f_1021d177();
  /* 1021d159 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1021d15b pop ecx */
  ECX = (pop32());
  /* 1021d15c mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1021d160 je 0x1021d16c */
  if (C.zf) goto L_1021d16c;
  /* 1021d162 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1021d164 call 0x1021a074 */
  push32(0x1021d169u); f_1021a074();
  /* 1021d169 pop ecx */
  ECX = (pop32());
  /* 1021d16a jmp 0x1021d16f */
  goto L_1021d16f;
L_1021d16c:;
  /* 1021d16c push esi */
  push32((uint32_t)(ESI));
  /* 1021d16d call edi */
  call_ind((uint32_t)(EDI), 0x1021d16fu);
L_1021d16f:;
  /* 1021d16f mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1021d173 pop edi */
  EDI = (pop32());
  /* 1021d174 pop esi */
  ESI = (pop32());
L_1021d175:;
  /* 1021d175 pop ebx */
  EBX = (pop32());
  /* 1021d176 ret  */
  ESPCHK(0x1021d108u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d177 @ 0x1021d177 (204 bytes, 71 insns) */
void f_1021d177(void) {
  FTRACE(0x1021d177u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021d177 push ebp */
  push32((uint32_t)(EBP));
  /* 1021d178 mov ebp, esp */
  EBP = (ESP);
  /* 1021d17a push ecx */
  push32((uint32_t)(ECX));
  /* 1021d17b cmp dword ptr [0x10226838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10226838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d182 push ebx */
  push32((uint32_t)(EBX));
  /* 1021d183 jne 0x1021d1a2 */
  if (!C.zf) goto L_1021d1a2;
  /* 1021d185 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021d188 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d18b jl 0x1021d240 */
  if ((C.sf!=C.of)) goto L_1021d240;
  /* 1021d191 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d194 jg 0x1021d240 */
  if ((!C.zf&&C.sf==C.of)) goto L_1021d240;
  /* 1021d19a sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021d19d jmp 0x1021d240 */
  goto L_1021d240;
L_1021d1a2:;
  /* 1021d1a2 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021d1a5 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d1ab jge 0x1021d1d5 */
  if ((C.sf==C.of)) goto L_1021d1d5;
  /* 1021d1ad cmp dword ptr [0x10220be0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10220be0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d1b4 jle 0x1021d1c2 */
  if ((C.zf||C.sf!=C.of)) goto L_1021d1c2;
  /* 1021d1b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1021d1b8 push ebx */
  push32((uint32_t)(EBX));
  /* 1021d1b9 call 0x102193cb */
  push32(0x1021d1beu); f_102193cb();
  /* 1021d1be pop ecx */
  ECX = (pop32());
  /* 1021d1bf pop ecx */
  ECX = (pop32());
  /* 1021d1c0 jmp 0x1021d1cd */
  goto L_1021d1cd;
L_1021d1c2:;
  /* 1021d1c2 mov eax, dword ptr [0x102209d0] */
  EAX = (r32((uint32_t)(0x102209d0)));
  /* 1021d1c7 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 1021d1ca and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_1021d1cd:;
  /* 1021d1cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021d1cf jne 0x1021d1d5 */
  if (!C.zf) goto L_1021d1d5;
L_1021d1d1:;
  /* 1021d1d1 mov eax, ebx */
  EAX = (EBX);
  /* 1021d1d3 jmp 0x1021d240 */
  goto L_1021d240;
L_1021d1d5:;
  /* 1021d1d5 mov edx, dword ptr [0x102209d0] */
  EDX = (r32((uint32_t)(0x102209d0)));
  /* 1021d1db mov eax, ebx */
  EAX = (EBX);
  /* 1021d1dd sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1021d1e0 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 1021d1e3 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1021d1e8 je 0x1021d1f8 */
  if (C.zf) goto L_1021d1f8;
  /* 1021d1ea and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 1021d1ee mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 1021d1f1 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 1021d1f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1021d1f6 jmp 0x1021d201 */
  goto L_1021d201;
L_1021d1f8:;
  /* 1021d1f8 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 1021d1fc mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 1021d1ff push 1 */
  push32((uint32_t)(0x1u));
L_1021d201:;
  /* 1021d201 pop eax */
  EAX = (pop32());
  /* 1021d202 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1021d205 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021d207 push 0 */
  push32((uint32_t)(0x0u));
  /* 1021d209 push 3 */
  push32((uint32_t)(0x3u));
  /* 1021d20b push ecx */
  push32((uint32_t)(ECX));
  /* 1021d20c push eax */
  push32((uint32_t)(EAX));
  /* 1021d20d lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1021d210 push eax */
  push32((uint32_t)(EAX));
  /* 1021d211 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1021d216 push dword ptr [0x10226838] */
  push32((uint32_t)(r32((uint32_t)(0x10226838))));
  /* 1021d21c call 0x1021c3c6 */
  push32(0x1021d221u); f_1021c3c6();
  /* 1021d221 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021d224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021d226 je 0x1021d1d1 */
  if (C.zf) goto L_1021d1d1;
  /* 1021d228 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d22b jne 0x1021d233 */
  if (!C.zf) goto L_1021d233;
  /* 1021d22d movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1021d231 jmp 0x1021d240 */
  goto L_1021d240;
L_1021d233:;
  /* 1021d233 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 1021d237 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1021d23b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1021d23e or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_1021d240:;
  /* 1021d240 pop ebx */
  EBX = (pop32());
  /* 1021d241 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021d242 ret  */
  ESPCHK(0x1021d177u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d243 @ 0x1021d243 (49 bytes, 20 insns) */
void f_1021d243(void) {
  FTRACE(0x1021d243u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021d243 push esi */
  push32((uint32_t)(ESI));
  /* 1021d244 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1021d248 push edi */
  push32((uint32_t)(EDI));
  /* 1021d249 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1021d24c test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 1021d250 je 0x1021d258 */
  if (C.zf) goto L_1021d258;
  /* 1021d252 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1021d256 jmp 0x1021d26f */
  goto L_1021d26f;
L_1021d258:;
  /* 1021d258 push esi */
  push32((uint32_t)(ESI));
  /* 1021d259 call 0x10218f8e */
  push32(0x1021d25eu); f_10218f8e();
  /* 1021d25e push esi */
  push32((uint32_t)(ESI));
  /* 1021d25f call 0x1021d274 */
  push32(0x1021d264u); f_1021d274();
  /* 1021d264 push esi */
  push32((uint32_t)(ESI));
  /* 1021d265 mov edi, eax */
  EDI = (EAX);
  /* 1021d267 call 0x10218fe0 */
  push32(0x1021d26cu); f_10218fe0();
  /* 1021d26c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021d26f:;
  /* 1021d26f mov eax, edi */
  EAX = (EDI);
  /* 1021d271 pop edi */
  EDI = (pop32());
  /* 1021d272 pop esi */
  ESI = (pop32());
  /* 1021d273 ret  */
  ESPCHK(0x1021d243u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x1021d274 (76 bytes, 30 insns) */
void f_1021d274(void) {
  FTRACE(0x1021d274u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021d274 push esi */
  push32((uint32_t)(ESI));
  /* 1021d275 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1021d279 push edi */
  push32((uint32_t)(EDI));
  /* 1021d27a or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1021d27d test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1021d281 je 0x1021d2b7 */
  if (C.zf) goto L_1021d2b7;
  /* 1021d283 push esi */
  push32((uint32_t)(ESI));
  /* 1021d284 call 0x1021c174 */
  push32(0x1021d289u); f_1021c174();
  /* 1021d289 push esi */
  push32((uint32_t)(ESI));
  /* 1021d28a mov edi, eax */
  EDI = (EAX);
  /* 1021d28c call 0x1021d7e6 */
  push32(0x1021d291u); f_1021d7e6();
  /* 1021d291 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1021d294 call 0x1021d706 */
  push32(0x1021d299u); f_1021d706();
  /* 1021d299 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021d29c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021d29e jge 0x1021d2a5 */
  if ((C.sf==C.of)) goto L_1021d2a5;
  /* 1021d2a0 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1021d2a3 jmp 0x1021d2b7 */
  goto L_1021d2b7;
L_1021d2a5:;
  /* 1021d2a5 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 1021d2a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021d2aa je 0x1021d2b7 */
  if (C.zf) goto L_1021d2b7;
  /* 1021d2ac push eax */
  push32((uint32_t)(EAX));
  /* 1021d2ad call 0x1021a1c6 */
  push32(0x1021d2b2u); f_1021a1c6();
  /* 1021d2b2 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 1021d2b6 pop ecx */
  ECX = (pop32());
L_1021d2b7:;
  /* 1021d2b7 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1021d2bb mov eax, edi */
  EAX = (EDI);
  /* 1021d2bd pop edi */
  EDI = (pop32());
  /* 1021d2be pop esi */
  ESI = (pop32());
  /* 1021d2bf ret  */
  ESPCHK(0x1021d274u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2c0 @ 0x1021d2c0 (147 bytes, 52 insns) */
void f_1021d2c0(void) {
  FTRACE(0x1021d2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021d2c0 push ebx */
  push32((uint32_t)(EBX));
  /* 1021d2c1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 1021d2c5 cmp ebx, dword ptr [0x10227d40] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10227d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d2cb push esi */
  push32((uint32_t)(ESI));
  /* 1021d2cc push edi */
  push32((uint32_t)(EDI));
  /* 1021d2cd jae 0x1021d341 */
  if (!C.cf) goto L_1021d341;
  /* 1021d2cf mov eax, ebx */
  EAX = (EBX);
  /* 1021d2d1 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1021d2d4 lea edi, [eax*4 + 0x10227c40] */
  EDI = ((uint32_t)(EAX*4 + 0x10227c40));
  /* 1021d2db mov eax, ebx */
  EAX = (EBX);
  /* 1021d2dd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1021d2e0 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1021d2e3 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1021d2e5 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1021d2e8 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1021d2ed je 0x1021d341 */
  if (C.zf) goto L_1021d341;
  /* 1021d2ef push ebx */
  push32((uint32_t)(EBX));
  /* 1021d2f0 call 0x1021c044 */
  push32(0x1021d2f5u); f_1021c044();
  /* 1021d2f5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1021d2f7 pop ecx */
  ECX = (pop32());
  /* 1021d2f8 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1021d2fd je 0x1021d328 */
  if (C.zf) goto L_1021d328;
  /* 1021d2ff push ebx */
  push32((uint32_t)(EBX));
  /* 1021d300 call 0x1021c002 */
  push32(0x1021d305u); f_1021c002();
  /* 1021d305 pop ecx */
  ECX = (pop32());
  /* 1021d306 push eax */
  push32((uint32_t)(EAX));
  /* 1021d307 call dword ptr [0x1021e0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e0d0))), 0x1021d30du);
  /* 1021d30d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021d30f jne 0x1021d31b */
  if (!C.zf) goto L_1021d31b;
  /* 1021d311 call dword ptr [0x1021e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e03c))), 0x1021d317u);
  /* 1021d317 mov esi, eax */
  ESI = (EAX);
  /* 1021d319 jmp 0x1021d31d */
  goto L_1021d31d;
L_1021d31b:;
  /* 1021d31b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1021d31d:;
  /* 1021d31d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1021d31f je 0x1021d336 */
  if (C.zf) goto L_1021d336;
  /* 1021d321 call 0x1021bf7a */
  push32(0x1021d326u); f_1021bf7a();
  /* 1021d326 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1021d328:;
  /* 1021d328 call 0x1021bf71 */
  push32(0x1021d32du); f_1021bf71();
  /* 1021d32d mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1021d333 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_1021d336:;
  /* 1021d336 push ebx */
  push32((uint32_t)(EBX));
  /* 1021d337 call 0x1021c0a3 */
  push32(0x1021d33cu); f_1021c0a3();
  /* 1021d33c pop ecx */
  ECX = (pop32());
  /* 1021d33d mov eax, esi */
  EAX = (ESI);
  /* 1021d33f jmp 0x1021d34f */
  goto L_1021d34f;
L_1021d341:;
  /* 1021d341 call 0x1021bf71 */
  push32(0x1021d346u); f_1021bf71();
  /* 1021d346 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1021d34c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1021d34f:;
  /* 1021d34f pop edi */
  EDI = (pop32());
  /* 1021d350 pop esi */
  ESI = (pop32());
  /* 1021d351 pop ebx */
  EBX = (pop32());
  /* 1021d352 ret  */
  ESPCHK(0x1021d2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3f0 @ 0x1021d3f0 (62 bytes, 35 insns) */
void f_1021d3f0(void) {
  FTRACE(0x1021d3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021d3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1021d3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1021d3f3 push esi */
  push32((uint32_t)(ESI));
  /* 1021d3f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021d3f6 push eax */
  push32((uint32_t)(EAX));
  /* 1021d3f7 push eax */
  push32((uint32_t)(EAX));
  /* 1021d3f8 push eax */
  push32((uint32_t)(EAX));
  /* 1021d3f9 push eax */
  push32((uint32_t)(EAX));
  /* 1021d3fa push eax */
  push32((uint32_t)(EAX));
  /* 1021d3fb push eax */
  push32((uint32_t)(EAX));
  /* 1021d3fc push eax */
  push32((uint32_t)(EAX));
  /* 1021d3fd push eax */
  push32((uint32_t)(EAX));
  /* 1021d3fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1021d401 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1021d404:;
  /* 1021d404 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1021d406 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1021d408 je 0x1021d411 */
  if (C.zf) goto L_1021d411;
  /* 1021d40a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1021d40b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1021d40b");
  /* 1021d40f jmp 0x1021d404 */
  goto L_1021d404;
L_1021d411:;
  /* 1021d411 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1021d414 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1021d417 nop  */
  /* nop */
L_1021d418:;
  /* 1021d418 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1021d419 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1021d41b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1021d41d je 0x1021d426 */
  if (C.zf) goto L_1021d426;
  /* 1021d41f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1021d420 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1021d420");
  /* 1021d424 jae 0x1021d418 */
  if (!C.cf) goto L_1021d418;
L_1021d426:;
  /* 1021d426 mov eax, ecx */
  EAX = (ECX);
  /* 1021d428 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021d42b pop esi */
  ESI = (pop32());
  /* 1021d42c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021d42d ret  */
  ESPCHK(0x1021d3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d430 @ 0x1021d430 (58 bytes, 32 insns) */
void f_1021d430(void) {
  FTRACE(0x1021d430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021d430 push ebp */
  push32((uint32_t)(EBP));
  /* 1021d431 mov ebp, esp */
  EBP = (ESP);
  /* 1021d433 push esi */
  push32((uint32_t)(ESI));
  /* 1021d434 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021d436 push eax */
  push32((uint32_t)(EAX));
  /* 1021d437 push eax */
  push32((uint32_t)(EAX));
  /* 1021d438 push eax */
  push32((uint32_t)(EAX));
  /* 1021d439 push eax */
  push32((uint32_t)(EAX));
  /* 1021d43a push eax */
  push32((uint32_t)(EAX));
  /* 1021d43b push eax */
  push32((uint32_t)(EAX));
  /* 1021d43c push eax */
  push32((uint32_t)(EAX));
  /* 1021d43d push eax */
  push32((uint32_t)(EAX));
  /* 1021d43e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1021d441 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1021d444:;
  /* 1021d444 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1021d446 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1021d448 je 0x1021d451 */
  if (C.zf) goto L_1021d451;
  /* 1021d44a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1021d44b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1021d44b");
  /* 1021d44f jmp 0x1021d444 */
  goto L_1021d444;
L_1021d451:;
  /* 1021d451 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1021d454:;
  /* 1021d454 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1021d456 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1021d458 je 0x1021d464 */
  if (C.zf) goto L_1021d464;
  /* 1021d45a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1021d45b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1021d45b");
  /* 1021d45f jae 0x1021d454 */
  if (!C.cf) goto L_1021d454;
  /* 1021d461 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1021d464:;
  /* 1021d464 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021d467 pop esi */
  ESI = (pop32());
  /* 1021d468 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021d469 ret  */
  ESPCHK(0x1021d430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d46a @ 0x1021d46a (544 bytes, 177 insns) */
void f_1021d46a(void) {
  FTRACE(0x1021d46au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021d46a push ebp */
  push32((uint32_t)(EBP));
  /* 1021d46b mov ebp, esp */
  EBP = (ESP);
  /* 1021d46d sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021d470 push ebx */
  push32((uint32_t)(EBX));
  /* 1021d471 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1021d474 push esi */
  push32((uint32_t)(ESI));
  /* 1021d475 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1021d478 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 1021d47c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021d47e push edi */
  push32((uint32_t)(EDI));
  /* 1021d47f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1021d482 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1021d485 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1021d488 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1021d48b mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 1021d48f mov edi, ecx */
  EDI = (ECX);
  /* 1021d491 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 1021d496 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 1021d498 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1021d49a and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1021d49c and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 1021d4a2 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1021d4a6 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 1021d4a9 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1021d4ac jae 0x1021d66a */
  if (!C.cf) goto L_1021d66a;
  /* 1021d4b2 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1021d4b7 jae 0x1021d66a */
  if (!C.cf) goto L_1021d66a;
  /* 1021d4bd cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1021d4c2 ja 0x1021d66a */
  if ((!C.cf&&!C.zf)) goto L_1021d66a;
  /* 1021d4c8 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1021d4cd ja 0x1021d4d3 */
  if ((!C.cf&&!C.zf)) goto L_1021d4d3;
  /* 1021d4cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021d4d1 jmp 0x1021d50d */
  goto L_1021d50d;
L_1021d4d3:;
  /* 1021d4d3 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 1021d4d6 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 1021d4db jne 0x1021d4f5 */
  if (!C.zf) goto L_1021d4f5;
  /* 1021d4dd inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1021d4e0 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 1021d4e3 jne 0x1021d4f5 */
  if (!C.zf) goto L_1021d4f5;
  /* 1021d4e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021d4e7 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d4ea jne 0x1021d4f7 */
  if (!C.zf) goto L_1021d4f7;
  /* 1021d4ec cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d4ee jne 0x1021d4f7 */
  if (!C.zf) goto L_1021d4f7;
  /* 1021d4f0 jmp 0x1021d664 */
  goto L_1021d664;
L_1021d4f5:;
  /* 1021d4f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1021d4f7:;
  /* 1021d4f7 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1021d4fa jne 0x1021d51a */
  if (!C.zf) goto L_1021d51a;
  /* 1021d4fc inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1021d4ff test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 1021d502 jne 0x1021d51a */
  if (!C.zf) goto L_1021d51a;
  /* 1021d504 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d507 jne 0x1021d51a */
  if (!C.zf) goto L_1021d51a;
  /* 1021d509 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d50b jne 0x1021d51a */
  if (!C.zf) goto L_1021d51a;
L_1021d50d:;
  /* 1021d50d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1021d510 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1021d513 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1021d515 jmp 0x1021d685 */
  goto L_1021d685;
L_1021d51a:;
  /* 1021d51a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1021d51d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1021d520 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1021d523 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_1021d52a:;
  /* 1021d52a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1021d52d add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021d52f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d533 jle 0x1021d57e */
  if ((C.zf||C.sf!=C.of)) goto L_1021d57e;
  /* 1021d535 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021d537 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 1021d53a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1021d53d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1021d540 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1021d543 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1021d546:;
  /* 1021d546 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1021d549 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1021d54c movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 1021d54f movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 1021d552 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1021d555 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1021d558 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021d55b push ecx */
  push32((uint32_t)(ECX));
  /* 1021d55c push eax */
  push32((uint32_t)(EAX));
  /* 1021d55d push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 1021d55f call 0x1021c615 */
  push32(0x1021d564u); f_1021c615();
  /* 1021d564 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021d567 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021d569 je 0x1021d571 */
  if (C.zf) goto L_1021d571;
  /* 1021d56b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1021d56e inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_1021d571:;
  /* 1021d571 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1021d575 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1021d579 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 1021d57c jne 0x1021d546 */
  if (!C.zf) goto L_1021d546;
L_1021d57e:;
  /* 1021d57e add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1021d582 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 1021d585 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 1021d588 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d58c jg 0x1021d52a */
  if ((!C.zf&&C.sf==C.of)) goto L_1021d52a;
  /* 1021d58e add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1021d595 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1021d59a jle 0x1021d5c1 */
  if ((C.zf||C.sf!=C.of)) goto L_1021d5c1;
L_1021d59c:;
  /* 1021d59c test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 1021d5a0 jne 0x1021d5ba */
  if (!C.zf) goto L_1021d5ba;
  /* 1021d5a2 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1021d5a5 push eax */
  push32((uint32_t)(EAX));
  /* 1021d5a6 call 0x1021c694 */
  push32(0x1021d5abu); f_1021c694();
  /* 1021d5ab add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1021d5b2 pop ecx */
  ECX = (pop32());
  /* 1021d5b3 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1021d5b8 jg 0x1021d59c */
  if ((!C.zf&&C.sf==C.of)) goto L_1021d59c;
L_1021d5ba:;
  /* 1021d5ba cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1021d5bf jg 0x1021d5fa */
  if ((!C.zf&&C.sf==C.of)) goto L_1021d5fa;
L_1021d5c1:;
  /* 1021d5c1 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1021d5c8 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1021d5cd jge 0x1021d5fa */
  if ((C.sf==C.of)) goto L_1021d5fa;
  /* 1021d5cf movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 1021d5d3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1021d5d5 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1021d5d8 mov ebx, eax */
  EBX = (EAX);
L_1021d5da:;
  /* 1021d5da test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 1021d5de je 0x1021d5e3 */
  if (C.zf) goto L_1021d5e3;
  /* 1021d5e0 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_1021d5e3:;
  /* 1021d5e3 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1021d5e6 push eax */
  push32((uint32_t)(EAX));
  /* 1021d5e7 call 0x1021c6c2 */
  push32(0x1021d5ecu); f_1021c6c2();
  /* 1021d5ec dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1021d5ed pop ecx */
  ECX = (pop32());
  /* 1021d5ee jne 0x1021d5da */
  if (!C.zf) goto L_1021d5da;
  /* 1021d5f0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d5f4 je 0x1021d5fa */
  if (C.zf) goto L_1021d5fa;
  /* 1021d5f6 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_1021d5fa:;
  /* 1021d5fa cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1021d600 ja 0x1021d611 */
  if ((!C.cf&&!C.zf)) goto L_1021d611;
  /* 1021d602 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1021d605 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1021d60a cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d60f jne 0x1021d646 */
  if (!C.zf) goto L_1021d646;
L_1021d611:;
  /* 1021d611 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d615 jne 0x1021d643 */
  if (!C.zf) goto L_1021d643;
  /* 1021d617 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 1021d61b cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d61f jne 0x1021d63e */
  if (!C.zf) goto L_1021d63e;
  /* 1021d621 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 1021d625 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1021d62b jne 0x1021d638 */
  if (!C.zf) goto L_1021d638;
  /* 1021d62d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1021d630 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 1021d636 jmp 0x1021d646 */
  goto L_1021d646;
L_1021d638:;
  /* 1021d638 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 1021d63c jmp 0x1021d646 */
  goto L_1021d646;
L_1021d63e:;
  /* 1021d63e inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 1021d641 jmp 0x1021d646 */
  goto L_1021d646;
L_1021d643:;
  /* 1021d643 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_1021d646:;
  /* 1021d646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021d649 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1021d64d jae 0x1021d66a */
  if (!C.cf) goto L_1021d66a;
  /* 1021d64f mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 1021d653 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 1021d655 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 1021d658 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1021d65b mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 1021d65e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1021d661 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_1021d664:;
  /* 1021d664 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 1021d668 jmp 0x1021d685 */
  goto L_1021d685;
L_1021d66a:;
  /* 1021d66a neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 1021d66d sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021d66f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1021d673 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 1021d679 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021d67f and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1021d682 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_1021d685:;
  /* 1021d685 pop edi */
  EDI = (pop32());
  /* 1021d686 pop esi */
  ESI = (pop32());
  /* 1021d687 pop ebx */
  EBX = (pop32());
  /* 1021d688 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021d689 ret  */
  ESPCHK(0x1021d46au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d68a @ 0x1021d68a (124 bytes, 52 insns) */
void f_1021d68a(void) {
  FTRACE(0x1021d68au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021d68a push ebp */
  push32((uint32_t)(EBP));
  /* 1021d68b mov ebp, esp */
  EBP = (ESP);
  /* 1021d68d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021d690 push ebx */
  push32((uint32_t)(EBX));
  /* 1021d691 mov ebx, 0x10223220 */
  EBX = (0x10223220u);
  /* 1021d696 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1021d698 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021d69b cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d69e je 0x1021d703 */
  if (C.zf) goto L_1021d703;
  /* 1021d6a0 jge 0x1021d6b2 */
  if ((C.sf==C.of)) goto L_1021d6b2;
  /* 1021d6a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1021d6a5 mov ebx, 0x10223380 */
  EBX = (0x10223380u);
  /* 1021d6aa neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1021d6ac mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1021d6af sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_1021d6b2:;
  /* 1021d6b2 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d6b5 jne 0x1021d6bd */
  if (!C.zf) goto L_1021d6bd;
  /* 1021d6b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021d6ba mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_1021d6bd:;
  /* 1021d6bd cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d6c0 je 0x1021d703 */
  if (C.zf) goto L_1021d703;
  /* 1021d6c2 push esi */
  push32((uint32_t)(ESI));
  /* 1021d6c3 push edi */
  push32((uint32_t)(EDI));
L_1021d6c4:;
  /* 1021d6c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1021d6c7 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021d6ca sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 1021d6ce and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1021d6d1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d6d3 je 0x1021d6fc */
  if (C.zf) goto L_1021d6fc;
  /* 1021d6d5 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 1021d6d8 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1021d6de lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 1021d6e1 jb 0x1021d6ef */
  if (C.cf) goto L_1021d6ef;
  /* 1021d6e3 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 1021d6e6 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1021d6e7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1021d6e8 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1021d6e9 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 1021d6ec lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_1021d6ef:;
  /* 1021d6ef push esi */
  push32((uint32_t)(ESI));
  /* 1021d6f0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1021d6f3 call 0x1021d46a */
  push32(0x1021d6f8u); f_1021d46a();
  /* 1021d6f8 pop ecx */
  ECX = (pop32());
  /* 1021d6f9 pop ecx */
  ECX = (pop32());
  /* 1021d6fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_1021d6fc:;
  /* 1021d6fc cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d6ff jne 0x1021d6c4 */
  if (!C.zf) goto L_1021d6c4;
  /* 1021d701 pop edi */
  EDI = (pop32());
  /* 1021d702 pop esi */
  ESI = (pop32());
L_1021d703:;
  /* 1021d703 pop ebx */
  EBX = (pop32());
  /* 1021d704 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021d705 ret  */
  ESPCHK(0x1021d68au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d706 @ 0x1021d706 (93 bytes, 32 insns) */
void f_1021d706(void) {
  FTRACE(0x1021d706u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021d706 push esi */
  push32((uint32_t)(ESI));
  /* 1021d707 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1021d70b cmp esi, dword ptr [0x10227d40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10227d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d711 jae 0x1021d74b */
  if (!C.cf) goto L_1021d74b;
  /* 1021d713 mov ecx, esi */
  ECX = (ESI);
  /* 1021d715 mov eax, esi */
  EAX = (ESI);
  /* 1021d717 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1021d71a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1021d71d mov ecx, dword ptr [ecx*4 + 0x10227c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10227c40)));
  /* 1021d724 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1021d727 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1021d72c je 0x1021d74b */
  if (C.zf) goto L_1021d74b;
  /* 1021d72e push edi */
  push32((uint32_t)(EDI));
  /* 1021d72f push esi */
  push32((uint32_t)(ESI));
  /* 1021d730 call 0x1021c044 */
  push32(0x1021d735u); f_1021c044();
  /* 1021d735 push esi */
  push32((uint32_t)(ESI));
  /* 1021d736 call 0x1021d763 */
  push32(0x1021d73bu); f_1021d763();
  /* 1021d73b push esi */
  push32((uint32_t)(ESI));
  /* 1021d73c mov edi, eax */
  EDI = (EAX);
  /* 1021d73e call 0x1021c0a3 */
  push32(0x1021d743u); f_1021c0a3();
  /* 1021d743 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021d746 mov eax, edi */
  EAX = (EDI);
  /* 1021d748 pop edi */
  EDI = (pop32());
  /* 1021d749 pop esi */
  ESI = (pop32());
  /* 1021d74a ret  */
  ESPCHK(0x1021d706u, _esp0);
  ESP += 4; return;
L_1021d74b:;
  /* 1021d74b call 0x1021bf71 */
  push32(0x1021d750u); f_1021bf71();
  /* 1021d750 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1021d756 call 0x1021bf7a */
  push32(0x1021d75bu); f_1021bf7a();
  /* 1021d75b and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1021d75e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1021d761 pop esi */
  ESI = (pop32());
  /* 1021d762 ret  */
  ESPCHK(0x1021d706u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d763 @ 0x1021d763 (131 bytes, 52 insns) */
void f_1021d763(void) {
  FTRACE(0x1021d763u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021d763 push esi */
  push32((uint32_t)(ESI));
  /* 1021d764 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1021d768 push edi */
  push32((uint32_t)(EDI));
  /* 1021d769 push esi */
  push32((uint32_t)(ESI));
  /* 1021d76a call 0x1021c002 */
  push32(0x1021d76fu); f_1021c002();
  /* 1021d76f cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d772 pop ecx */
  ECX = (pop32());
  /* 1021d773 je 0x1021d7b1 */
  if (C.zf) goto L_1021d7b1;
  /* 1021d775 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d778 je 0x1021d77f */
  if (C.zf) goto L_1021d77f;
  /* 1021d77a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d77d jne 0x1021d795 */
  if (!C.zf) goto L_1021d795;
L_1021d77f:;
  /* 1021d77f push 2 */
  push32((uint32_t)(0x2u));
  /* 1021d781 call 0x1021c002 */
  push32(0x1021d786u); f_1021c002();
  /* 1021d786 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021d788 mov edi, eax */
  EDI = (EAX);
  /* 1021d78a call 0x1021c002 */
  push32(0x1021d78fu); f_1021c002();
  /* 1021d78f pop ecx */
  ECX = (pop32());
  /* 1021d790 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d792 pop ecx */
  ECX = (pop32());
  /* 1021d793 je 0x1021d7b1 */
  if (C.zf) goto L_1021d7b1;
L_1021d795:;
  /* 1021d795 push esi */
  push32((uint32_t)(ESI));
  /* 1021d796 call 0x1021c002 */
  push32(0x1021d79bu); f_1021c002();
  /* 1021d79b pop ecx */
  ECX = (pop32());
  /* 1021d79c push eax */
  push32((uint32_t)(EAX));
  /* 1021d79d call dword ptr [0x1021e0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e0d4))), 0x1021d7a3u);
  /* 1021d7a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021d7a5 jne 0x1021d7b1 */
  if (!C.zf) goto L_1021d7b1;
  /* 1021d7a7 call dword ptr [0x1021e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e03c))), 0x1021d7adu);
  /* 1021d7ad mov edi, eax */
  EDI = (EAX);
  /* 1021d7af jmp 0x1021d7b3 */
  goto L_1021d7b3;
L_1021d7b1:;
  /* 1021d7b1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_1021d7b3:;
  /* 1021d7b3 push esi */
  push32((uint32_t)(ESI));
  /* 1021d7b4 call 0x1021bf83 */
  push32(0x1021d7b9u); f_1021bf83();
  /* 1021d7b9 mov eax, esi */
  EAX = (ESI);
  /* 1021d7bb and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 1021d7be sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1021d7c1 pop ecx */
  ECX = (pop32());
  /* 1021d7c2 mov eax, dword ptr [eax*4 + 0x10227c40] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10227c40)));
  /* 1021d7c9 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 1021d7cc and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 1021d7d1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1021d7d3 je 0x1021d7e1 */
  if (C.zf) goto L_1021d7e1;
  /* 1021d7d5 push edi */
  push32((uint32_t)(EDI));
  /* 1021d7d6 call 0x1021befe */
  push32(0x1021d7dbu); f_1021befe();
  /* 1021d7db pop ecx */
  ECX = (pop32());
  /* 1021d7dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1021d7df jmp 0x1021d7e3 */
  goto L_1021d7e3;
L_1021d7e1:;
  /* 1021d7e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1021d7e3:;
  /* 1021d7e3 pop edi */
  EDI = (pop32());
  /* 1021d7e4 pop esi */
  ESI = (pop32());
  /* 1021d7e5 ret  */
  ESPCHK(0x1021d763u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x1021d7e6 (43 bytes, 17 insns) */
void f_1021d7e6(void) {
  FTRACE(0x1021d7e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021d7e6 push esi */
  push32((uint32_t)(ESI));
  /* 1021d7e7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1021d7eb mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1021d7ee test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 1021d7f0 je 0x1021d80f */
  if (C.zf) goto L_1021d80f;
  /* 1021d7f2 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1021d7f4 je 0x1021d80f */
  if (C.zf) goto L_1021d80f;
  /* 1021d7f6 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 1021d7f9 call 0x1021a1c6 */
  push32(0x1021d7feu); f_1021a1c6();
  /* 1021d7fe and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 1021d804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021d806 pop ecx */
  ECX = (pop32());
  /* 1021d807 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1021d809 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1021d80c mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_1021d80f:;
  /* 1021d80f pop esi */
  ESI = (pop32());
  /* 1021d810 ret  */
  ESPCHK(0x1021d7e6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d820 @ 0x1021d820 (208 bytes, 85 insns) */
void f_1021d820(void) {
  FTRACE(0x1021d820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021d820 push ebp */
  push32((uint32_t)(EBP));
  /* 1021d821 mov ebp, esp */
  EBP = (ESP);
  /* 1021d823 push edi */
  push32((uint32_t)(EDI));
  /* 1021d824 push esi */
  push32((uint32_t)(ESI));
  /* 1021d825 push ebx */
  push32((uint32_t)(EBX));
  /* 1021d826 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1021d829 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1021d82c lea eax, [0x10226830] */
  EAX = ((uint32_t)(0x10226830));
  /* 1021d832 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d836 jne 0x1021d873 */
  if (!C.zf) goto L_1021d873;
  /* 1021d838 mov al, 0xff */
  AL = (0xffu);
  /* 1021d83a mov edi, edi */
  EDI = (EDI);
L_1021d83c:;
  /* 1021d83c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1021d83e je 0x1021d86e */
  if (C.zf) goto L_1021d86e;
  /* 1021d840 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1021d842 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1021d843 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 1021d845 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1021d846 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021d848 je 0x1021d83c */
  if (C.zf) goto L_1021d83c;
  /* 1021d84a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1021d84c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021d84e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1021d850 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1021d853 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1021d855 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1021d857 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 1021d859 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1021d85b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021d85d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1021d85f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1021d862 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1021d864 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1021d866 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021d868 je 0x1021d83c */
  if (C.zf) goto L_1021d83c;
  /* 1021d86a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1021d86c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1021d86e:;
  /* 1021d86e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1021d871 jmp 0x1021d8eb */
  goto L_1021d8eb;
L_1021d873:;
  /* 1021d873 lock inc dword ptr [0x102269b4] */
  x86_unimpl("lock inc @ 0x1021d873");
  /* 1021d87a cmp dword ptr [0x102269b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102269b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d881 jg 0x1021d887 */
  if ((!C.zf&&C.sf==C.of)) goto L_1021d887;
  /* 1021d883 push 0 */
  push32((uint32_t)(0x0u));
  /* 1021d885 jmp 0x1021d89c */
  goto L_1021d89c;
L_1021d887:;
  /* 1021d887 lock dec dword ptr [0x102269b4] */
  x86_unimpl("lock dec @ 0x1021d887");
  /* 1021d88e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1021d890 call 0x1021a013 */
  push32(0x1021d895u); f_1021a013();
  /* 1021d895 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1021d89c:;
  /* 1021d89c mov eax, 0xff */
  EAX = (0xffu);
  /* 1021d8a1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1021d8a3 nop  */
  /* nop */
L_1021d8a4:;
  /* 1021d8a4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1021d8a6 je 0x1021d8cf */
  if (C.zf) goto L_1021d8cf;
  /* 1021d8a8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1021d8aa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1021d8ab mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1021d8ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1021d8ae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021d8b0 je 0x1021d8a4 */
  if (C.zf) goto L_1021d8a4;
  /* 1021d8b2 push eax */
  push32((uint32_t)(EAX));
  /* 1021d8b3 push ebx */
  push32((uint32_t)(EBX));
  /* 1021d8b4 call 0x102194af */
  push32(0x1021d8b9u); f_102194af();
  /* 1021d8b9 mov ebx, eax */
  EBX = (EAX);
  /* 1021d8bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021d8be call 0x102194af */
  push32(0x1021d8c3u); f_102194af();
  /* 1021d8c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021d8c6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021d8c8 je 0x1021d8a4 */
  if (C.zf) goto L_1021d8a4;
  /* 1021d8ca sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021d8cc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1021d8cf:;
  /* 1021d8cf mov ebx, eax */
  EBX = (EAX);
  /* 1021d8d1 pop eax */
  EAX = (pop32());
  /* 1021d8d2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021d8d4 jne 0x1021d8df */
  if (!C.zf) goto L_1021d8df;
  /* 1021d8d6 lock dec dword ptr [0x102269b4] */
  x86_unimpl("lock dec @ 0x1021d8d6");
  /* 1021d8dd jmp 0x1021d8e9 */
  goto L_1021d8e9;
L_1021d8df:;
  /* 1021d8df push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1021d8e1 call 0x1021a074 */
  push32(0x1021d8e6u); f_1021a074();
  /* 1021d8e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021d8e9:;
  /* 1021d8e9 mov eax, ebx */
  EAX = (EBX);
L_1021d8eb:;
  /* 1021d8eb pop ebx */
  EBX = (pop32());
  /* 1021d8ec pop esi */
  ESI = (pop32());
  /* 1021d8ed pop edi */
  EDI = (pop32());
  /* 1021d8ee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021d8ef ret  */
  ESPCHK(0x1021d820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8f0 @ 0x1021d8f0 (257 bytes, 103 insns) */
void f_1021d8f0(void) {
  FTRACE(0x1021d8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021d8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1021d8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1021d8f3 push edi */
  push32((uint32_t)(EDI));
  /* 1021d8f4 push esi */
  push32((uint32_t)(ESI));
  /* 1021d8f5 push ebx */
  push32((uint32_t)(EBX));
  /* 1021d8f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1021d8f9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1021d8fb je 0x1021d9ea */
  if (C.zf) goto L_1021d9ea;
  /* 1021d901 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1021d904 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1021d907 lea eax, [0x10226830] */
  EAX = ((uint32_t)(0x10226830));
  /* 1021d90d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d911 jne 0x1021d961 */
  if (!C.zf) goto L_1021d961;
  /* 1021d913 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 1021d915 mov bl, 0x5a */
  BL = (0x5au);
  /* 1021d917 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 1021d919 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1021d91c:;
  /* 1021d91c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1021d91e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1021d920 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1021d922 je 0x1021d945 */
  if (C.zf) goto L_1021d945;
  /* 1021d924 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1021d926 je 0x1021d945 */
  if (C.zf) goto L_1021d945;
  /* 1021d928 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1021d929 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1021d92a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021d92c jb 0x1021d934 */
  if (C.cf) goto L_1021d934;
  /* 1021d92e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021d930 ja 0x1021d934 */
  if ((!C.cf&&!C.zf)) goto L_1021d934;
  /* 1021d932 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_1021d934:;
  /* 1021d934 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021d936 jb 0x1021d93e */
  if (C.cf) goto L_1021d93e;
  /* 1021d938 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021d93a ja 0x1021d93e */
  if ((!C.cf&&!C.zf)) goto L_1021d93e;
  /* 1021d93c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1021d93e:;
  /* 1021d93e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021d940 jne 0x1021d94f */
  if (!C.zf) goto L_1021d94f;
  /* 1021d942 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1021d943 jne 0x1021d91c */
  if (!C.zf) goto L_1021d91c;
L_1021d945:;
  /* 1021d945 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1021d947 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021d949 je 0x1021d9ea */
  if (C.zf) goto L_1021d9ea;
L_1021d94f:;
  /* 1021d94f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1021d954 jb 0x1021d9ea */
  if (C.cf) goto L_1021d9ea;
  /* 1021d95a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1021d95c jmp 0x1021d9ea */
  goto L_1021d9ea;
L_1021d961:;
  /* 1021d961 lock inc dword ptr [0x102269b4] */
  x86_unimpl("lock inc @ 0x1021d961");
  /* 1021d968 cmp dword ptr [0x102269b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102269b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d96f jg 0x1021d975 */
  if ((!C.zf&&C.sf==C.of)) goto L_1021d975;
  /* 1021d971 push 0 */
  push32((uint32_t)(0x0u));
  /* 1021d973 jmp 0x1021d98e */
  goto L_1021d98e;
L_1021d975:;
  /* 1021d975 lock dec dword ptr [0x102269b4] */
  x86_unimpl("lock dec @ 0x1021d975");
  /* 1021d97c mov ebx, ecx */
  EBX = (ECX);
  /* 1021d97e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1021d980 call 0x1021a013 */
  push32(0x1021d985u); f_1021a013();
  /* 1021d985 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1021d98c mov ecx, ebx */
  ECX = (EBX);
L_1021d98e:;
  /* 1021d98e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021d990 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1021d992 mov edi, edi */
  EDI = (EDI);
L_1021d994:;
  /* 1021d994 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1021d996 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021d998 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1021d99a je 0x1021d9bf */
  if (C.zf) goto L_1021d9bf;
  /* 1021d99c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1021d99e je 0x1021d9bf */
  if (C.zf) goto L_1021d9bf;
  /* 1021d9a0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1021d9a1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1021d9a2 push ecx */
  push32((uint32_t)(ECX));
  /* 1021d9a3 push eax */
  push32((uint32_t)(EAX));
  /* 1021d9a4 push ebx */
  push32((uint32_t)(EBX));
  /* 1021d9a5 call 0x102194af */
  push32(0x1021d9aau); f_102194af();
  /* 1021d9aa mov ebx, eax */
  EBX = (EAX);
  /* 1021d9ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021d9af call 0x102194af */
  push32(0x1021d9b4u); f_102194af();
  /* 1021d9b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021d9b7 pop ecx */
  ECX = (pop32());
  /* 1021d9b8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d9ba jne 0x1021d9c5 */
  if (!C.zf) goto L_1021d9c5;
  /* 1021d9bc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1021d9bd jne 0x1021d994 */
  if (!C.zf) goto L_1021d994;
L_1021d9bf:;
  /* 1021d9bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1021d9c1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021d9c3 je 0x1021d9ce */
  if (C.zf) goto L_1021d9ce;
L_1021d9c5:;
  /* 1021d9c5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1021d9ca jb 0x1021d9ce */
  if (C.cf) goto L_1021d9ce;
  /* 1021d9cc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1021d9ce:;
  /* 1021d9ce pop eax */
  EAX = (pop32());
  /* 1021d9cf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021d9d1 jne 0x1021d9dc */
  if (!C.zf) goto L_1021d9dc;
  /* 1021d9d3 lock dec dword ptr [0x102269b4] */
  x86_unimpl("lock dec @ 0x1021d9d3");
  /* 1021d9da jmp 0x1021d9ea */
  goto L_1021d9ea;
L_1021d9dc:;
  /* 1021d9dc mov ebx, ecx */
  EBX = (ECX);
  /* 1021d9de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1021d9e0 call 0x1021a074 */
  push32(0x1021d9e5u); f_1021a074();
  /* 1021d9e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021d9e8 mov ecx, ebx */
  ECX = (EBX);
L_1021d9ea:;
  /* 1021d9ea mov eax, ecx */
  EAX = (ECX);
  /* 1021d9ec pop ebx */
  EBX = (pop32());
  /* 1021d9ed pop esi */
  ESI = (pop32());
  /* 1021d9ee pop edi */
  EDI = (pop32());
  /* 1021d9ef leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021d9f0 ret  */
  ESPCHK(0x1021d8f0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x1021da34 (6 bytes, 1 insns) */
void f_1021da34(void) {
  FTRACE(0x1021da34u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021da34 jmp dword ptr [0x1021e0cc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1021e0cc)))); return;
}

