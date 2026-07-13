#include "recomp.h"

/* __aullrem @ 0x10239290 (117 bytes, 44 insns) */
void f_10239290(void) {
  FTRACE(0x10239290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10239290 push ebx */
  push32((uint32_t)(EBX));
  /* 10239291 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10239295 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10239297 jne 0x102392b1 */
  if (!C.zf) goto L_102392b1;
  /* 10239299 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1023929d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 102392a1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102392a3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102392a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102392a9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102392ab mov eax, edx */
  EAX = (EDX);
  /* 102392ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102392af jmp 0x10239301 */
  goto L_10239301;
L_102392b1:;
  /* 102392b1 mov ecx, eax */
  ECX = (EAX);
  /* 102392b3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 102392b7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 102392bb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_102392bf:;
  /* 102392bf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 102392c1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 102392c3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 102392c5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 102392c7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102392c9 jne 0x102392bf */
  if (!C.zf) goto L_102392bf;
  /* 102392cb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102392cd mov ecx, eax */
  ECX = (EAX);
  /* 102392cf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 102392d3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 102392d4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 102392d8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102392da jb 0x102392ea */
  if (C.cf) goto L_102392ea;
  /* 102392dc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102392e0 ja 0x102392ea */
  if ((!C.cf&&!C.zf)) goto L_102392ea;
  /* 102392e2 jb 0x102392f2 */
  if (C.cf) goto L_102392f2;
  /* 102392e4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102392e8 jbe 0x102392f2 */
  if ((C.cf||C.zf)) goto L_102392f2;
L_102392ea:;
  /* 102392ea sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102392ee sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_102392f2:;
  /* 102392f2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102392f6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102392fa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 102392fc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102392fe sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10239301:;
  /* 10239301 pop ebx */
  EBX = (pop32());
  /* 10239302 ret 0x10 */
  ESPCHK(0x10239290u, _esp0);
  ESP += 20; return;
}

/* FUN_10009305 @ 0x10239305 (53 bytes, 25 insns) */
void f_10239305(void) {
  FTRACE(0x10239305u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10239305 push ebp */
  push32((uint32_t)(EBP));
  /* 10239306 mov ebp, esp */
  EBP = (ESP);
  /* 10239308 push ecx */
  push32((uint32_t)(ECX));
  /* 10239309 push esi */
  push32((uint32_t)(ESI));
  /* 1023930a wait  */
  /* wait (no observable integer/reg state) */
  /* 1023930b fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 1023930e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 10239311 call 0x10239350 */
  push32(0x10239316u); f_10239350();
  /* 10239316 mov esi, eax */
  ESI = (EAX);
  /* 10239318 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1023931b not eax */
  EAX = (~(EAX));
  /* 1023931d and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 1023931f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10239322 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10239325 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 10239327 push esi */
  push32((uint32_t)(ESI));
  /* 10239328 call 0x102393e2 */
  push32(0x1023932du); f_102393e2();
  /* 1023932d pop ecx */
  ECX = (pop32());
  /* 1023932e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10239331 pop ecx */
  ECX = (pop32());
  /* 10239332 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 10239335 mov eax, esi */
  EAX = (ESI);
  /* 10239337 pop esi */
  ESI = (pop32());
  /* 10239338 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10239339 ret  */
  ESPCHK(0x10239305u, _esp0);
  ESP += 4; return;
}

/* FUN_1000933a @ 0x1023933a (22 bytes, 8 insns) */
void f_1023933a(void) {
  FTRACE(0x1023933au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023933a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1023933e and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10239343 push eax */
  push32((uint32_t)(EAX));
  /* 10239344 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10239348 call 0x10239305 */
  push32(0x1023934du); f_10239305();
  /* 1023934d pop ecx */
  ECX = (pop32());
  /* 1023934e pop ecx */
  ECX = (pop32());
  /* 1023934f ret  */
  ESPCHK(0x1023933au, _esp0);
  ESP += 4; return;
}

/* FUN_10009350 @ 0x10239350 (146 bytes, 58 insns) */
void f_10239350(void) {
  FTRACE(0x10239350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10239350 push ebx */
  push32((uint32_t)(EBX));
  /* 10239351 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 10239355 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10239357 push ebp */
  push32((uint32_t)(EBP));
  /* 10239358 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 1023935b push edi */
  push32((uint32_t)(EDI));
  /* 1023935c je 0x10239361 */
  if (C.zf) goto L_10239361;
  /* 1023935e push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10239360 pop eax */
  EAX = (pop32());
L_10239361:;
  /* 10239361 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 10239364 je 0x10239368 */
  if (C.zf) goto L_10239368;
  /* 10239366 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_10239368:;
  /* 10239368 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 1023936b je 0x1023936f */
  if (C.zf) goto L_1023936f;
  /* 1023936d or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_1023936f:;
  /* 1023936f test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 10239372 je 0x10239376 */
  if (C.zf) goto L_10239376;
  /* 10239374 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_10239376:;
  /* 10239376 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 10239379 je 0x1023937d */
  if (C.zf) goto L_1023937d;
  /* 1023937b or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_1023937d:;
  /* 1023937d test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10239380 je 0x10239387 */
  if (C.zf) goto L_10239387;
  /* 10239382 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_10239387:;
  /* 10239387 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 1023938a push esi */
  push32((uint32_t)(ESI));
  /* 1023938b mov edx, ecx */
  EDX = (ECX);
  /* 1023938d mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 10239392 mov edi, 0x300 */
  EDI = (0x300u);
  /* 10239397 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10239399 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 1023939e je 0x102393bf */
  if (C.zf) goto L_102393bf;
  /* 102393a0 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102393a6 je 0x102393bc */
  if (C.zf) goto L_102393bc;
  /* 102393a8 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102393ae je 0x102393b8 */
  if (C.zf) goto L_102393b8;
  /* 102393b0 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102393b2 jne 0x102393bf */
  if (!C.zf) goto L_102393bf;
  /* 102393b4 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 102393b6 jmp 0x102393bf */
  goto L_102393bf;
L_102393b8:;
  /* 102393b8 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 102393ba jmp 0x102393bf */
  goto L_102393bf;
L_102393bc:;
  /* 102393bc or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_102393bf:;
  /* 102393bf and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 102393c1 pop esi */
  ESI = (pop32());
  /* 102393c2 je 0x102393cf */
  if (C.zf) goto L_102393cf;
  /* 102393c4 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102393c6 jne 0x102393d4 */
  if (!C.zf) goto L_102393d4;
  /* 102393c8 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 102393cd jmp 0x102393d4 */
  goto L_102393d4;
L_102393cf:;
  /* 102393cf or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_102393d4:;
  /* 102393d4 pop edi */
  EDI = (pop32());
  /* 102393d5 pop ebp */
  EBP = (pop32());
  /* 102393d6 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 102393d9 pop ebx */
  EBX = (pop32());
  /* 102393da je 0x102393e1 */
  if (C.zf) goto L_102393e1;
  /* 102393dc or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_102393e1:;
  /* 102393e1 ret  */
  ESPCHK(0x10239350u, _esp0);
  ESP += 4; return;
}

/* FUN_100093e2 @ 0x102393e2 (137 bytes, 53 insns) */
void f_102393e2(void) {
  FTRACE(0x102393e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102393e2 push ebx */
  push32((uint32_t)(EBX));
  /* 102393e3 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 102393e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102393e9 push esi */
  push32((uint32_t)(ESI));
  /* 102393ea test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 102393ed je 0x102393f2 */
  if (C.zf) goto L_102393f2;
  /* 102393ef push 1 */
  push32((uint32_t)(0x1u));
  /* 102393f1 pop eax */
  EAX = (pop32());
L_102393f2:;
  /* 102393f2 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 102393f5 je 0x102393f9 */
  if (C.zf) goto L_102393f9;
  /* 102393f7 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_102393f9:;
  /* 102393f9 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 102393fc je 0x10239400 */
  if (C.zf) goto L_10239400;
  /* 102393fe or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_10239400:;
  /* 10239400 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10239403 je 0x10239407 */
  if (C.zf) goto L_10239407;
  /* 10239405 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_10239407:;
  /* 10239407 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 1023940a je 0x1023940e */
  if (C.zf) goto L_1023940e;
  /* 1023940c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_1023940e:;
  /* 1023940e test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 10239414 je 0x10239418 */
  if (C.zf) goto L_10239418;
  /* 10239416 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_10239418:;
  /* 10239418 mov ecx, ebx */
  ECX = (EBX);
  /* 1023941a mov edx, 0x300 */
  EDX = (0x300u);
  /* 1023941f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10239421 mov esi, 0x200 */
  ESI = (0x200u);
  /* 10239426 je 0x10239445 */
  if (C.zf) goto L_10239445;
  /* 10239428 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023942e je 0x10239442 */
  if (C.zf) goto L_10239442;
  /* 10239430 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239432 je 0x1023943d */
  if (C.zf) goto L_1023943d;
  /* 10239434 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239436 jne 0x10239445 */
  if (!C.zf) goto L_10239445;
  /* 10239438 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 1023943b jmp 0x10239445 */
  goto L_10239445;
L_1023943d:;
  /* 1023943d or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 10239440 jmp 0x10239445 */
  goto L_10239445;
L_10239442:;
  /* 10239442 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_10239445:;
  /* 10239445 mov ecx, ebx */
  ECX = (EBX);
  /* 10239447 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 1023944d je 0x1023945b */
  if (C.zf) goto L_1023945b;
  /* 1023944f cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239455 jne 0x1023945d */
  if (!C.zf) goto L_1023945d;
  /* 10239457 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10239459 jmp 0x1023945d */
  goto L_1023945d;
L_1023945b:;
  /* 1023945b or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_1023945d:;
  /* 1023945d pop esi */
  ESI = (pop32());
  /* 1023945e test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 10239464 pop ebx */
  EBX = (pop32());
  /* 10239465 je 0x1023946a */
  if (C.zf) goto L_1023946a;
  /* 10239467 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_1023946a:;
  /* 1023946a ret  */
  ESPCHK(0x102393e2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000946b @ 0x1023946b (117 bytes, 46 insns) */
void f_1023946b(void) {
  FTRACE(0x1023946bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023946b push ebp */
  push32((uint32_t)(EBP));
  /* 1023946c mov ebp, esp */
  EBP = (ESP);
  /* 1023946e push ecx */
  push32((uint32_t)(ECX));
  /* 1023946f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10239472 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10239475 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023947b ja 0x10239489 */
  if ((!C.cf&&!C.zf)) goto L_10239489;
  /* 1023947d mov ecx, dword ptr [0x10240970] */
  ECX = (r32((uint32_t)(0x10240970)));
  /* 10239483 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 10239487 jmp 0x102394db */
  goto L_102394db;
L_10239489:;
  /* 10239489 mov ecx, eax */
  ECX = (EAX);
  /* 1023948b push esi */
  push32((uint32_t)(ESI));
  /* 1023948c mov esi, dword ptr [0x10240970] */
  ESI = (r32((uint32_t)(0x10240970)));
  /* 10239492 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10239495 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 10239498 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1023949d pop esi */
  ESI = (pop32());
  /* 1023949e je 0x102394ae */
  if (C.zf) goto L_102394ae;
  /* 102394a0 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 102394a4 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 102394a7 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 102394aa push 2 */
  push32((uint32_t)(0x2u));
  /* 102394ac jmp 0x102394b7 */
  goto L_102394b7;
L_102394ae:;
  /* 102394ae and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 102394b2 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 102394b5 push 1 */
  push32((uint32_t)(0x1u));
L_102394b7:;
  /* 102394b7 pop eax */
  EAX = (pop32());
  /* 102394b8 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 102394bb push 1 */
  push32((uint32_t)(0x1u));
  /* 102394bd push 0 */
  push32((uint32_t)(0x0u));
  /* 102394bf push 0 */
  push32((uint32_t)(0x0u));
  /* 102394c1 push ecx */
  push32((uint32_t)(ECX));
  /* 102394c2 push eax */
  push32((uint32_t)(EAX));
  /* 102394c3 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 102394c6 push eax */
  push32((uint32_t)(EAX));
  /* 102394c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 102394c9 call 0x1023c31d */
  push32(0x102394ceu); f_1023c31d();
  /* 102394ce add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102394d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102394d3 jne 0x102394d7 */
  if (!C.zf) goto L_102394d7;
  /* 102394d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102394d6 ret  */
  ESPCHK(0x1023946bu, _esp0);
  ESP += 4; return;
L_102394d7:;
  /* 102394d7 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_102394db:;
  /* 102394db and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 102394de leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102394df ret  */
  ESPCHK(0x1023946bu, _esp0);
  ESP += 4; return;
}

/* FUN_100094e0 @ 0x102394e0 (111 bytes, 44 insns) */
void f_102394e0(void) {
  FTRACE(0x102394e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102394e0 push ebx */
  push32((uint32_t)(EBX));
  /* 102394e1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102394e3 cmp dword ptr [0x102467d8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102467d8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102394e9 jne 0x102394fe */
  if (!C.zf) goto L_102394fe;
  /* 102394eb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102394ef cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102394f2 jl 0x1023954d */
  if ((C.sf!=C.of)) goto L_1023954d;
  /* 102394f4 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102394f7 jg 0x1023954d */
  if ((!C.zf&&C.sf==C.of)) goto L_1023954d;
  /* 102394f9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102394fc pop ebx */
  EBX = (pop32());
  /* 102394fd ret  */
  ESPCHK(0x102394e0u, _esp0);
  ESP += 4; return;
L_102394fe:;
  /* 102394fe push esi */
  push32((uint32_t)(ESI));
  /* 102394ff mov esi, 0x10246954 */
  ESI = (0x10246954u);
  /* 10239504 push edi */
  push32((uint32_t)(EDI));
  /* 10239505 push esi */
  push32((uint32_t)(ESI));
  /* 10239506 call dword ptr [0x1023e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e090))), 0x1023950cu);
  /* 1023950c cmp dword ptr [0x10246950], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10246950))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239512 mov edi, dword ptr [0x1023e08c] */
  EDI = (r32((uint32_t)(0x1023e08c)));
  /* 10239518 je 0x10239528 */
  if (C.zf) goto L_10239528;
  /* 1023951a push esi */
  push32((uint32_t)(ESI));
  /* 1023951b call edi */
  call_ind((uint32_t)(EDI), 0x1023951du);
  /* 1023951d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1023951f call 0x1023a0b3 */
  push32(0x10239524u); f_1023a0b3();
  /* 10239524 pop ecx */
  ECX = (pop32());
  /* 10239525 push 1 */
  push32((uint32_t)(0x1u));
  /* 10239527 pop ebx */
  EBX = (pop32());
L_10239528:;
  /* 10239528 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1023952c call 0x1023954f */
  push32(0x10239531u); f_1023954f();
  /* 10239531 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10239533 pop ecx */
  ECX = (pop32());
  /* 10239534 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10239538 je 0x10239544 */
  if (C.zf) goto L_10239544;
  /* 1023953a push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1023953c call 0x1023a114 */
  push32(0x10239541u); f_1023a114();
  /* 10239541 pop ecx */
  ECX = (pop32());
  /* 10239542 jmp 0x10239547 */
  goto L_10239547;
L_10239544:;
  /* 10239544 push esi */
  push32((uint32_t)(ESI));
  /* 10239545 call edi */
  call_ind((uint32_t)(EDI), 0x10239547u);
L_10239547:;
  /* 10239547 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1023954b pop edi */
  EDI = (pop32());
  /* 1023954c pop esi */
  ESI = (pop32());
L_1023954d:;
  /* 1023954d pop ebx */
  EBX = (pop32());
  /* 1023954e ret  */
  ESPCHK(0x102394e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000954f @ 0x1023954f (203 bytes, 78 insns) */
void f_1023954f(void) {
  FTRACE(0x1023954fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023954f push ebp */
  push32((uint32_t)(EBP));
  /* 10239550 mov ebp, esp */
  EBP = (ESP);
  /* 10239552 push ecx */
  push32((uint32_t)(ECX));
  /* 10239553 cmp dword ptr [0x102467d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102467d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023955a push ebx */
  push32((uint32_t)(EBX));
  /* 1023955b push esi */
  push32((uint32_t)(ESI));
  /* 1023955c push edi */
  push32((uint32_t)(EDI));
  /* 1023955d jne 0x1023957c */
  if (!C.zf) goto L_1023957c;
  /* 1023955f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10239562 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239565 jl 0x10239615 */
  if ((C.sf!=C.of)) goto L_10239615;
  /* 1023956b cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023956e jg 0x10239615 */
  if ((!C.zf&&C.sf==C.of)) goto L_10239615;
  /* 10239574 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10239577 jmp 0x10239615 */
  goto L_10239615;
L_1023957c:;
  /* 1023957c mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023957f mov edi, 0x100 */
  EDI = (0x100u);
  /* 10239584 push 1 */
  push32((uint32_t)(0x1u));
  /* 10239586 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239588 pop esi */
  ESI = (pop32());
  /* 10239589 jge 0x102395b0 */
  if ((C.sf==C.of)) goto L_102395b0;
  /* 1023958b cmp dword ptr [0x10240b80], esi */
  { uint32_t _a=(r32((uint32_t)(0x10240b80))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239591 jle 0x1023959e */
  if ((C.zf||C.sf!=C.of)) goto L_1023959e;
  /* 10239593 push esi */
  push32((uint32_t)(ESI));
  /* 10239594 push ebx */
  push32((uint32_t)(EBX));
  /* 10239595 call 0x1023946b */
  push32(0x1023959au); f_1023946b();
  /* 1023959a pop ecx */
  ECX = (pop32());
  /* 1023959b pop ecx */
  ECX = (pop32());
  /* 1023959c jmp 0x102395a8 */
  goto L_102395a8;
L_1023959e:;
  /* 1023959e mov eax, dword ptr [0x10240970] */
  EAX = (r32((uint32_t)(0x10240970)));
  /* 102395a3 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 102395a6 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_102395a8:;
  /* 102395a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102395aa jne 0x102395b0 */
  if (!C.zf) goto L_102395b0;
L_102395ac:;
  /* 102395ac mov eax, ebx */
  EAX = (EBX);
  /* 102395ae jmp 0x10239615 */
  goto L_10239615;
L_102395b0:;
  /* 102395b0 mov edx, dword ptr [0x10240970] */
  EDX = (r32((uint32_t)(0x10240970)));
  /* 102395b6 mov eax, ebx */
  EAX = (EBX);
  /* 102395b8 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 102395bb movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 102395be test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 102395c3 je 0x102395d4 */
  if (C.zf) goto L_102395d4;
  /* 102395c5 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 102395c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 102395cb mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 102395ce mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 102395d1 pop eax */
  EAX = (pop32());
  /* 102395d2 jmp 0x102395dd */
  goto L_102395dd;
L_102395d4:;
  /* 102395d4 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 102395d8 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 102395db mov eax, esi */
  EAX = (ESI);
L_102395dd:;
  /* 102395dd push esi */
  push32((uint32_t)(ESI));
  /* 102395de push 0 */
  push32((uint32_t)(0x0u));
  /* 102395e0 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 102395e3 push 3 */
  push32((uint32_t)(0x3u));
  /* 102395e5 push ecx */
  push32((uint32_t)(ECX));
  /* 102395e6 push eax */
  push32((uint32_t)(EAX));
  /* 102395e7 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 102395ea push eax */
  push32((uint32_t)(EAX));
  /* 102395eb push edi */
  push32((uint32_t)(EDI));
  /* 102395ec push dword ptr [0x102467d8] */
  push32((uint32_t)(r32((uint32_t)(0x102467d8))));
  /* 102395f2 call 0x1023c466 */
  push32(0x102395f7u); f_1023c466();
  /* 102395f7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102395fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102395fc je 0x102395ac */
  if (C.zf) goto L_102395ac;
  /* 102395fe cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239600 jne 0x10239608 */
  if (!C.zf) goto L_10239608;
  /* 10239602 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10239606 jmp 0x10239615 */
  goto L_10239615;
L_10239608:;
  /* 10239608 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 1023960c movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10239610 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10239613 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10239615:;
  /* 10239615 pop edi */
  EDI = (pop32());
  /* 10239616 pop esi */
  ESI = (pop32());
  /* 10239617 pop ebx */
  EBX = (pop32());
  /* 10239618 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10239619 ret  */
  ESPCHK(0x1023954fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000961a @ 0x1023961a (73 bytes, 36 insns) */
void f_1023961a(void) {
  FTRACE(0x1023961au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023961a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1023961e push esi */
  push32((uint32_t)(ESI));
  /* 1023961f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10239621 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10239622 pop ecx */
  ECX = (pop32());
  /* 10239623 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10239625 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10239627 mov esi, eax */
  ESI = (EAX);
  /* 10239629 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1023962d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1023962e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10239630 pop ecx */
  ECX = (pop32());
  /* 10239631 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10239635 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10239637 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1023963a shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1023963c not edx */
  EDX = (~(EDX));
  /* 1023963e test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 10239641 jne 0x1023965f */
  if (!C.zf) goto L_1023965f;
  /* 10239643 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10239644 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239647 jge 0x1023965a */
  if ((C.sf==C.of)) goto L_1023965a;
  /* 10239649 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_1023964c:;
  /* 1023964c cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023964f jne 0x1023965f */
  if (!C.zf) goto L_1023965f;
  /* 10239651 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10239652 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10239655 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239658 jl 0x1023964c */
  if ((C.sf!=C.of)) goto L_1023964c;
L_1023965a:;
  /* 1023965a push 1 */
  push32((uint32_t)(0x1u));
  /* 1023965c pop eax */
  EAX = (pop32());
  /* 1023965d pop esi */
  ESI = (pop32());
  /* 1023965e ret  */
  ESPCHK(0x1023961au, _esp0);
  ESP += 4; return;
L_1023965f:;
  /* 1023965f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10239661 pop esi */
  ESI = (pop32());
  /* 10239662 ret  */
  ESPCHK(0x1023961au, _esp0);
  ESP += 4; return;
}

/* FUN_10009663 @ 0x10239663 (86 bytes, 43 insns) */
void f_10239663(void) {
  FTRACE(0x10239663u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10239663 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10239667 push ebx */
  push32((uint32_t)(EBX));
  /* 10239668 push esi */
  push32((uint32_t)(ESI));
  /* 10239669 push edi */
  push32((uint32_t)(EDI));
  /* 1023966a push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1023966c mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10239670 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10239671 pop ecx */
  ECX = (pop32());
  /* 10239672 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10239674 mov esi, eax */
  ESI = (EAX);
  /* 10239676 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1023967a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1023967b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1023967d lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 10239680 push edi */
  push32((uint32_t)(EDI));
  /* 10239681 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10239683 pop ecx */
  ECX = (pop32());
  /* 10239684 push 1 */
  push32((uint32_t)(0x1u));
  /* 10239686 pop eax */
  EAX = (pop32());
  /* 10239687 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10239689 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1023968b push eax */
  push32((uint32_t)(EAX));
  /* 1023968c push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 1023968e call 0x1023c6b5 */
  push32(0x10239693u); f_1023c6b5();
  /* 10239693 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10239696 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10239697 js 0x102396b5 */
  if (C.sf) goto L_102396b5;
  /* 10239699 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_1023969c:;
  /* 1023969c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023969e je 0x102396b5 */
  if (C.zf) goto L_102396b5;
  /* 102396a0 push edi */
  push32((uint32_t)(EDI));
  /* 102396a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 102396a3 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 102396a5 call 0x1023c6b5 */
  push32(0x102396aau); f_1023c6b5();
  /* 102396aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102396ad dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 102396ae sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102396b1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102396b3 jge 0x1023969c */
  if ((C.sf==C.of)) goto L_1023969c;
L_102396b5:;
  /* 102396b5 pop edi */
  EDI = (pop32());
  /* 102396b6 pop esi */
  ESI = (pop32());
  /* 102396b7 pop ebx */
  EBX = (pop32());
  /* 102396b8 ret  */
  ESPCHK(0x10239663u, _esp0);
  ESP += 4; return;
}

/* FUN_100096b9 @ 0x102396b9 (140 bytes, 71 insns) */
void f_102396b9(void) {
  FTRACE(0x102396b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102396b9 push ebp */
  push32((uint32_t)(EBP));
  /* 102396ba mov ebp, esp */
  EBP = (ESP);
  /* 102396bc push ecx */
  push32((uint32_t)(ECX));
  /* 102396bd push ecx */
  push32((uint32_t)(ECX));
  /* 102396be mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102396c1 push ebx */
  push32((uint32_t)(EBX));
  /* 102396c2 push esi */
  push32((uint32_t)(ESI));
  /* 102396c3 push edi */
  push32((uint32_t)(EDI));
  /* 102396c4 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 102396c7 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 102396c9 pop ecx */
  ECX = (pop32());
  /* 102396ca and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102396ce lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 102396d1 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 102396d3 mov eax, ebx */
  EAX = (EBX);
  /* 102396d5 pop esi */
  ESI = (pop32());
  /* 102396d6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102396d7 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102396d9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 102396db mov ecx, eax */
  ECX = (EAX);
  /* 102396dd mov eax, ebx */
  EAX = (EBX);
  /* 102396df cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102396e0 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102396e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102396e5 pop esi */
  ESI = (pop32());
  /* 102396e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102396e8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102396eb lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 102396ee mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 102396f1 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102396f3 pop edx */
  EDX = (pop32());
  /* 102396f4 mov ecx, esi */
  ECX = (ESI);
  /* 102396f6 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102396f8 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 102396fa je 0x1023971d */
  if (C.zf) goto L_1023971d;
  /* 102396fc inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102396fd push ebx */
  push32((uint32_t)(EBX));
  /* 102396fe push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10239701 call 0x1023961a */
  push32(0x10239706u); f_1023961a();
  /* 10239706 pop ecx */
  ECX = (pop32());
  /* 10239707 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10239709 pop ecx */
  ECX = (pop32());
  /* 1023970a jne 0x1023971a */
  if (!C.zf) goto L_1023971a;
  /* 1023970c push edi */
  push32((uint32_t)(EDI));
  /* 1023970d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10239710 call 0x10239663 */
  push32(0x10239715u); f_10239663();
  /* 10239715 pop ecx */
  ECX = (pop32());
  /* 10239716 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10239719 pop ecx */
  ECX = (pop32());
L_1023971a:;
  /* 1023971a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1023971d:;
  /* 1023971d or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10239720 mov ecx, esi */
  ECX = (ESI);
  /* 10239722 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10239724 push 3 */
  push32((uint32_t)(0x3u));
  /* 10239726 pop ecx */
  ECX = (pop32());
  /* 10239727 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10239729 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1023972c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1023972d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023972f jge 0x1023973d */
  if ((C.sf==C.of)) goto L_1023973d;
  /* 10239731 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10239734 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10239736 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10239739 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023973b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_1023973d:;
  /* 1023973d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10239740 pop edi */
  EDI = (pop32());
  /* 10239741 pop esi */
  ESI = (pop32());
  /* 10239742 pop ebx */
  EBX = (pop32());
  /* 10239743 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10239744 ret  */
  ESPCHK(0x102396b9u, _esp0);
  ESP += 4; return;
}

/* FUN_10009745 @ 0x10239745 (27 bytes, 13 insns) */
void f_10239745(void) {
  FTRACE(0x10239745u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10239745 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10239749 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1023974d push esi */
  push32((uint32_t)(ESI));
  /* 1023974e push 3 */
  push32((uint32_t)(0x3u));
  /* 10239750 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10239752 pop edx */
  EDX = (pop32());
L_10239753:;
  /* 10239753 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 10239755 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 10239758 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023975b dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1023975c jne 0x10239753 */
  if (!C.zf) goto L_10239753;
  /* 1023975e pop esi */
  ESI = (pop32());
  /* 1023975f ret  */
  ESPCHK(0x10239745u, _esp0);
  ESP += 4; return;
}

/* FUN_10009760 @ 0x10239760 (12 bytes, 8 insns) */
void f_10239760(void) {
  FTRACE(0x10239760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10239760 push edi */
  push32((uint32_t)(EDI));
  /* 10239761 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10239765 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10239767 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10239768 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10239769 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1023976a pop edi */
  EDI = (pop32());
  /* 1023976b ret  */
  ESPCHK(0x10239760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000976c @ 0x1023976c (27 bytes, 13 insns) */
void f_1023976c(void) {
  FTRACE(0x1023976cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023976c mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10239770 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_10239772:;
  /* 10239772 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239775 jne 0x10239784 */
  if (!C.zf) goto L_10239784;
  /* 10239777 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10239778 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023977b cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023977e jl 0x10239772 */
  if ((C.sf!=C.of)) goto L_10239772;
  /* 10239780 push 1 */
  push32((uint32_t)(0x1u));
  /* 10239782 pop eax */
  EAX = (pop32());
  /* 10239783 ret  */
  ESPCHK(0x1023976cu, _esp0);
  ESP += 4; return;
L_10239784:;
  /* 10239784 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10239786 ret  */
  ESPCHK(0x1023976cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009787 @ 0x10239787 (141 bytes, 64 insns) */
void f_10239787(void) {
  FTRACE(0x10239787u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10239787 push ebp */
  push32((uint32_t)(EBP));
  /* 10239788 mov ebp, esp */
  EBP = (ESP);
  /* 1023978a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023978d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10239790 push ebx */
  push32((uint32_t)(EBX));
  /* 10239791 push esi */
  push32((uint32_t)(ESI));
  /* 10239792 push edi */
  push32((uint32_t)(EDI));
  /* 10239793 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10239795 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10239798 pop ebx */
  EBX = (pop32());
  /* 10239799 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1023979c cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1023979d mov ecx, ebx */
  ECX = (EBX);
  /* 1023979f mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 102397a6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102397a8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 102397ab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102397ae cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102397af idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102397b1 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 102397b5 mov ecx, edx */
  ECX = (EDX);
  /* 102397b7 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 102397b9 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102397bb not esi */
  ESI = (~(ESI));
L_102397bd:;
  /* 102397bd mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 102397bf mov ecx, eax */
  ECX = (EAX);
  /* 102397c1 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 102397c3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102397c6 mov ecx, edx */
  ECX = (EDX);
  /* 102397c8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 102397ca or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 102397cd mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 102397cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102397d2 mov ecx, ebx */
  ECX = (EBX);
  /* 102397d4 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102397d7 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 102397d9 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 102397dc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 102397df jne 0x102397bd */
  if (!C.zf) goto L_102397bd;
  /* 102397e1 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 102397e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 102397e6 pop ebx */
  EBX = (pop32());
  /* 102397e7 mov esi, edi */
  ESI = (EDI);
  /* 102397e9 push 8 */
  push32((uint32_t)(0x8u));
  /* 102397eb pop ecx */
  ECX = (pop32());
  /* 102397ec shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_102397ef:;
  /* 102397ef cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102397f1 jl 0x10239802 */
  if ((C.sf!=C.of)) goto L_10239802;
  /* 102397f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102397f6 mov eax, ecx */
  EAX = (ECX);
  /* 102397f8 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102397fa mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 102397fd mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 10239800 jmp 0x10239809 */
  goto L_10239809;
L_10239802:;
  /* 10239802 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10239805 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_10239809:;
  /* 10239809 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1023980a sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023980d jns 0x102397ef */
  if (!C.sf) goto L_102397ef;
  /* 1023980f pop edi */
  EDI = (pop32());
  /* 10239810 pop esi */
  ESI = (pop32());
  /* 10239811 pop ebx */
  EBX = (pop32());
  /* 10239812 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10239813 ret  */
  ESPCHK(0x10239787u, _esp0);
  ESP += 4; return;
}

/* FUN_10009814 @ 0x10239814 (364 bytes, 138 insns) */
void f_10239814(void) {
  FTRACE(0x10239814u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10239814 push ebp */
  push32((uint32_t)(EBP));
  /* 10239815 mov ebp, esp */
  EBP = (ESP);
  /* 10239817 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023981a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023981d push ebx */
  push32((uint32_t)(EBX));
  /* 1023981e push esi */
  push32((uint32_t)(ESI));
  /* 1023981f push edi */
  push32((uint32_t)(EDI));
  /* 10239820 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 10239824 mov ebx, ecx */
  EBX = (ECX);
  /* 10239826 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1023982c mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1023982f mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 10239832 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10239835 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 10239838 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 1023983b mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1023983e and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 10239844 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023984a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1023984d shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10239850 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239856 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10239859 jne 0x10239881 */
  if (!C.zf) goto L_10239881;
  /* 1023985b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1023985e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10239860 push eax */
  push32((uint32_t)(EAX));
  /* 10239861 call 0x1023976c */
  push32(0x10239866u); f_1023976c();
  /* 10239866 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10239868 pop ecx */
  ECX = (pop32());
  /* 10239869 jne 0x10239940 */
  if (!C.zf) goto L_10239940;
  /* 1023986f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10239872 push eax */
  push32((uint32_t)(EAX));
  /* 10239873 call 0x10239760 */
  push32(0x10239878u); f_10239760();
  /* 10239878 pop ecx */
  ECX = (pop32());
L_10239879:;
  /* 10239879 push 2 */
  push32((uint32_t)(0x2u));
L_1023987b:;
  /* 1023987b pop eax */
  EAX = (pop32());
  /* 1023987c jmp 0x10239942 */
  goto L_10239942;
L_10239881:;
  /* 10239881 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10239884 push eax */
  push32((uint32_t)(EAX));
  /* 10239885 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10239888 push eax */
  push32((uint32_t)(EAX));
  /* 10239889 call 0x10239745 */
  push32(0x1023988eu); f_10239745();
  /* 1023988e push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 10239891 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10239894 push eax */
  push32((uint32_t)(EAX));
  /* 10239895 call 0x102396b9 */
  push32(0x1023989au); f_102396b9();
  /* 1023989a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023989d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023989f je 0x102398a2 */
  if (C.zf) goto L_102398a2;
  /* 102398a1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_102398a2:;
  /* 102398a2 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 102398a5 mov ecx, eax */
  ECX = (EAX);
  /* 102398a7 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102398aa cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102398ac jge 0x102398ba */
  if ((C.sf==C.of)) goto L_102398ba;
  /* 102398ae lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102398b1 push eax */
  push32((uint32_t)(EAX));
  /* 102398b2 call 0x10239760 */
  push32(0x102398b7u); f_10239760();
  /* 102398b7 pop ecx */
  ECX = (pop32());
  /* 102398b8 jmp 0x102398f6 */
  goto L_102398f6;
L_102398ba:;
  /* 102398ba cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102398bc jg 0x102398fd */
  if ((!C.zf&&C.sf==C.of)) goto L_102398fd;
  /* 102398be sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102398c0 mov esi, eax */
  ESI = (EAX);
  /* 102398c2 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 102398c5 push eax */
  push32((uint32_t)(EAX));
  /* 102398c6 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102398c9 push eax */
  push32((uint32_t)(EAX));
  /* 102398ca call 0x10239745 */
  push32(0x102398cfu); f_10239745();
  /* 102398cf lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102398d2 push esi */
  push32((uint32_t)(ESI));
  /* 102398d3 push eax */
  push32((uint32_t)(EAX));
  /* 102398d4 call 0x10239787 */
  push32(0x102398d9u); f_10239787();
  /* 102398d9 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 102398dc lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102398df push eax */
  push32((uint32_t)(EAX));
  /* 102398e0 call 0x102396b9 */
  push32(0x102398e5u); f_102396b9();
  /* 102398e5 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 102398e8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102398e9 push eax */
  push32((uint32_t)(EAX));
  /* 102398ea lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102398ed push eax */
  push32((uint32_t)(EAX));
  /* 102398ee call 0x10239787 */
  push32(0x102398f3u); f_10239787();
  /* 102398f3 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102398f6:;
  /* 102398f6 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102398f8 jmp 0x10239879 */
  goto L_10239879;
L_102398fd:;
  /* 102398fd cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102398ff jl 0x10239929 */
  if ((C.sf!=C.of)) goto L_10239929;
  /* 10239901 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10239904 push eax */
  push32((uint32_t)(EAX));
  /* 10239905 call 0x10239760 */
  push32(0x1023990au); f_10239760();
  /* 1023990a push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 1023990d or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 10239911 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10239914 push eax */
  push32((uint32_t)(EAX));
  /* 10239915 call 0x10239787 */
  push32(0x1023991au); f_10239787();
  /* 1023991a mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 1023991d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10239920 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10239922 push 1 */
  push32((uint32_t)(0x1u));
  /* 10239924 jmp 0x1023987b */
  goto L_1023987b;
L_10239929:;
  /* 10239929 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 1023992c mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 1023992f and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 10239933 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10239936 push eax */
  push32((uint32_t)(EAX));
  /* 10239937 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10239939 call 0x10239787 */
  push32(0x1023993eu); f_10239787();
  /* 1023993e pop ecx */
  ECX = (pop32());
  /* 1023993f pop ecx */
  ECX = (pop32());
L_10239940:;
  /* 10239940 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10239942:;
  /* 10239942 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10239944 pop ecx */
  ECX = (pop32());
  /* 10239945 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10239948 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 1023994b shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1023994d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10239950 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10239952 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10239954 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 1023995a or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1023995c or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 1023995f cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239962 jne 0x10239971 */
  if (!C.zf) goto L_10239971;
  /* 10239964 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10239967 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1023996a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1023996d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1023996f jmp 0x1023997b */
  goto L_1023997b;
L_10239971:;
  /* 10239971 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239974 jne 0x1023997b */
  if (!C.zf) goto L_1023997b;
  /* 10239976 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10239979 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_1023997b:;
  /* 1023997b pop edi */
  EDI = (pop32());
  /* 1023997c pop esi */
  ESI = (pop32());
  /* 1023997d pop ebx */
  EBX = (pop32());
  /* 1023997e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023997f ret  */
  ESPCHK(0x10239814u, _esp0);
  ESP += 4; return;
}

/* FUN_10009980 @ 0x10239980 (22 bytes, 6 insns) */
void f_10239980(void) {
  FTRACE(0x10239980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10239980 push 0x10240b90 */
  push32((uint32_t)(0x10240b90u));
  /* 10239985 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10239989 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 1023998d call 0x10239814 */
  push32(0x10239992u); f_10239814();
  /* 10239992 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10239995 ret  */
  ESPCHK(0x10239980u, _esp0);
  ESP += 4; return;
}

/* FUN_10009996 @ 0x10239996 (22 bytes, 6 insns) */
void f_10239996(void) {
  FTRACE(0x10239996u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10239996 push 0x10240ba8 */
  push32((uint32_t)(0x10240ba8u));
  /* 1023999b push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 1023999f push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 102399a3 call 0x10239814 */
  push32(0x102399a8u); f_10239814();
  /* 102399a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102399ab ret  */
  ESPCHK(0x10239996u, _esp0);
  ESP += 4; return;
}

/* FUN_100099ac @ 0x102399ac (45 bytes, 21 insns) */
void f_102399ac(void) {
  FTRACE(0x102399acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102399ac push ebp */
  push32((uint32_t)(EBP));
  /* 102399ad mov ebp, esp */
  EBP = (ESP);
  /* 102399af sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102399b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102399b4 push eax */
  push32((uint32_t)(EAX));
  /* 102399b5 push eax */
  push32((uint32_t)(EAX));
  /* 102399b6 push eax */
  push32((uint32_t)(EAX));
  /* 102399b7 push eax */
  push32((uint32_t)(EAX));
  /* 102399b8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102399bb lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 102399be push eax */
  push32((uint32_t)(EAX));
  /* 102399bf lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102399c2 push eax */
  push32((uint32_t)(EAX));
  /* 102399c3 call 0x1023c856 */
  push32(0x102399c8u); f_1023c856();
  /* 102399c8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102399cb lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102399ce push eax */
  push32((uint32_t)(EAX));
  /* 102399cf call 0x10239980 */
  push32(0x102399d4u); f_10239980();
  /* 102399d4 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102399d7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102399d8 ret  */
  ESPCHK(0x102399acu, _esp0);
  ESP += 4; return;
}

/* FUN_100099d9 @ 0x102399d9 (45 bytes, 21 insns) */
void f_102399d9(void) {
  FTRACE(0x102399d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102399d9 push ebp */
  push32((uint32_t)(EBP));
  /* 102399da mov ebp, esp */
  EBP = (ESP);
  /* 102399dc sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102399df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102399e1 push eax */
  push32((uint32_t)(EAX));
  /* 102399e2 push eax */
  push32((uint32_t)(EAX));
  /* 102399e3 push eax */
  push32((uint32_t)(EAX));
  /* 102399e4 push eax */
  push32((uint32_t)(EAX));
  /* 102399e5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102399e8 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 102399eb push eax */
  push32((uint32_t)(EAX));
  /* 102399ec lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102399ef push eax */
  push32((uint32_t)(EAX));
  /* 102399f0 call 0x1023c856 */
  push32(0x102399f5u); f_1023c856();
  /* 102399f5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102399f8 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102399fb push eax */
  push32((uint32_t)(EAX));
  /* 102399fc call 0x10239996 */
  push32(0x10239a01u); f_10239996();
  /* 10239a01 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10239a04 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10239a05 ret  */
  ESPCHK(0x102399d9u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a06 @ 0x10239a06 (119 bytes, 57 insns) */
void f_10239a06(void) {
  FTRACE(0x10239a06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10239a06 push ebp */
  push32((uint32_t)(EBP));
  /* 10239a07 mov ebp, esp */
  EBP = (ESP);
  /* 10239a09 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10239a0c push ebx */
  push32((uint32_t)(EBX));
  /* 10239a0d mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 10239a10 push esi */
  push32((uint32_t)(ESI));
  /* 10239a11 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10239a14 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 10239a17 push edi */
  push32((uint32_t)(EDI));
  /* 10239a18 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 10239a1b mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 10239a1e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10239a20 mov eax, edi */
  EAX = (EDI);
  /* 10239a22 jle 0x10239a43 */
  if ((C.zf||C.sf!=C.of)) goto L_10239a43;
  /* 10239a24 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10239a27 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10239a29:;
  /* 10239a29 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10239a2b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10239a2d je 0x10239a35 */
  if (C.zf) goto L_10239a35;
  /* 10239a2f movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 10239a32 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10239a33 jmp 0x10239a38 */
  goto L_10239a38;
L_10239a35:;
  /* 10239a35 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10239a37 pop edx */
  EDX = (pop32());
L_10239a38:;
  /* 10239a38 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10239a3a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10239a3b dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 10239a3e jne 0x10239a29 */
  if (!C.zf) goto L_10239a29;
  /* 10239a40 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_10239a43:;
  /* 10239a43 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10239a46 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10239a48 jl 0x10239a5c */
  if ((C.sf!=C.of)) goto L_10239a5c;
  /* 10239a4a cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10239a4d jl 0x10239a5c */
  if ((C.sf!=C.of)) goto L_10239a5c;
L_10239a4f:;
  /* 10239a4f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10239a50 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10239a53 jne 0x10239a5a */
  if (!C.zf) goto L_10239a5a;
  /* 10239a55 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 10239a58 jmp 0x10239a4f */
  goto L_10239a4f;
L_10239a5a:;
  /* 10239a5a inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_10239a5c:;
  /* 10239a5c cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10239a5f jne 0x10239a66 */
  if (!C.zf) goto L_10239a66;
  /* 10239a61 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 10239a64 jmp 0x10239a78 */
  goto L_10239a78;
L_10239a66:;
  /* 10239a66 push edi */
  push32((uint32_t)(EDI));
  /* 10239a67 call 0x102390e0 */
  push32(0x10239a6cu); f_102390e0();
  /* 10239a6c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10239a6d push eax */
  push32((uint32_t)(EAX));
  /* 10239a6e push edi */
  push32((uint32_t)(EDI));
  /* 10239a6f push esi */
  push32((uint32_t)(ESI));
  /* 10239a70 call 0x10239ce0 */
  push32(0x10239a75u); f_10239ce0();
  /* 10239a75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10239a78:;
  /* 10239a78 pop edi */
  EDI = (pop32());
  /* 10239a79 pop esi */
  ESI = (pop32());
  /* 10239a7a pop ebx */
  EBX = (pop32());
  /* 10239a7b pop ebp */
  EBP = (pop32());
  /* 10239a7c ret  */
  ESPCHK(0x10239a06u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a7d @ 0x10239a7d (92 bytes, 41 insns) */
void f_10239a7d(void) {
  FTRACE(0x10239a7du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10239a7d push ebp */
  push32((uint32_t)(EBP));
  /* 10239a7e mov ebp, esp */
  EBP = (ESP);
  /* 10239a80 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10239a83 push esi */
  push32((uint32_t)(ESI));
  /* 10239a84 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10239a87 push edi */
  push32((uint32_t)(EDI));
  /* 10239a88 push eax */
  push32((uint32_t)(EAX));
  /* 10239a89 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10239a8c push eax */
  push32((uint32_t)(EAX));
  /* 10239a8d call 0x10239ad9 */
  push32(0x10239a92u); f_10239ad9();
  /* 10239a92 pop ecx */
  ECX = (pop32());
  /* 10239a93 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10239a96 pop ecx */
  ECX = (pop32());
  /* 10239a97 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 10239a9a push eax */
  push32((uint32_t)(EAX));
  /* 10239a9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10239a9d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10239a9f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10239aa2 mov edi, esp */
  EDI = (ESP);
  /* 10239aa4 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10239aa5 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10239aa6 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 10239aa8 call 0x1023cd27 */
  push32(0x10239aadu); f_1023cd27();
  /* 10239aad mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10239ab0 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 10239ab3 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 10239ab6 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 10239aba mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10239abc movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 10239ac0 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 10239ac3 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 10239ac6 push eax */
  push32((uint32_t)(EAX));
  /* 10239ac7 push edi */
  push32((uint32_t)(EDI));
  /* 10239ac8 call 0x10239b90 */
  push32(0x10239acdu); f_10239b90();
  /* 10239acd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10239ad0 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 10239ad3 mov eax, esi */
  EAX = (ESI);
  /* 10239ad5 pop edi */
  EDI = (pop32());
  /* 10239ad6 pop esi */
  ESI = (pop32());
  /* 10239ad7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10239ad8 ret  */
  ESPCHK(0x10239a7du, _esp0);
  ESP += 4; return;
}

/* FUN_10009ad9 @ 0x10239ad9 (182 bytes, 70 insns) */
void f_10239ad9(void) {
  FTRACE(0x10239ad9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10239ad9 push ebp */
  push32((uint32_t)(EBP));
  /* 10239ada mov ebp, esp */
  EBP = (ESP);
  /* 10239adc push ecx */
  push32((uint32_t)(ECX));
  /* 10239add mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10239ae0 push ebx */
  push32((uint32_t)(EBX));
  /* 10239ae1 push esi */
  push32((uint32_t)(ESI));
  /* 10239ae2 push edi */
  push32((uint32_t)(EDI));
  /* 10239ae3 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 10239ae7 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 10239aec mov ecx, eax */
  ECX = (EAX);
  /* 10239aee and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10239af3 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10239af6 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10239af8 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10239afb mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10239afe mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 10239b00 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 10239b03 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10239b08 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10239b0d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10239b0f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 10239b12 je 0x10239b27 */
  if (C.zf) goto L_10239b27;
  /* 10239b14 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239b16 je 0x10239b20 */
  if (C.zf) goto L_10239b20;
  /* 10239b18 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 10239b1e jmp 0x10239b48 */
  goto L_10239b48;
L_10239b20:;
  /* 10239b20 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 10239b25 jmp 0x10239b48 */
  goto L_10239b48;
L_10239b27:;
  /* 10239b27 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10239b29 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239b2b jne 0x10239b3f */
  if (!C.zf) goto L_10239b3f;
  /* 10239b2d cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239b2f jne 0x10239b3f */
  if (!C.zf) goto L_10239b3f;
  /* 10239b31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10239b34 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 10239b37 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 10239b39 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 10239b3d jmp 0x10239b8a */
  goto L_10239b8a;
L_10239b3f:;
  /* 10239b3f lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 10239b45 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_10239b48:;
  /* 10239b48 mov ecx, edx */
  ECX = (EDX);
  /* 10239b4a shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 10239b4d shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 10239b50 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10239b52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10239b55 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 10239b58 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 10239b5b mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10239b5e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10239b60:;
  /* 10239b60 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 10239b62 jne 0x10239b81 */
  if (!C.zf) goto L_10239b81;
  /* 10239b64 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10239b66 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10239b68 mov ebx, edx */
  EBX = (EDX);
  /* 10239b6a shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 10239b6d or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 10239b6f lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 10239b72 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10239b74 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 10239b77 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10239b7d mov ecx, ebx */
  ECX = (EBX);
  /* 10239b7f jmp 0x10239b60 */
  goto L_10239b60;
L_10239b81:;
  /* 10239b81 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10239b84 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10239b86 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_10239b8a:;
  /* 10239b8a pop edi */
  EDI = (pop32());
  /* 10239b8b pop esi */
  ESI = (pop32());
  /* 10239b8c pop ebx */
  EBX = (pop32());
  /* 10239b8d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10239b8e ret  */
  ESPCHK(0x10239ad9u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b90 @ 0x10239b90 (7 bytes, 3 insns) */
void f_10239b90(void) {
  FTRACE(0x10239b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10239b90 push edi */
  push32((uint32_t)(EDI));
  /* 10239b91 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10239b95 jmp 0x10239c01 */
  jmp_ind(0x10239c01u); return;
}

/* FUN_10009ba0 @ 0x10239ba0 (224 bytes, 84 insns) */
void f_10239ba0(void) {
  FTRACE(0x10239ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10239ba0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10239ba4 push edi */
  push32((uint32_t)(EDI));
  /* 10239ba5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10239bab je 0x10239bbc */
  if (C.zf) goto L_10239bbc;
L_10239bad:;
  /* 10239bad mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10239baf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10239bb0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10239bb2 je 0x10239bef */
  if (C.zf) goto L_10239bef;
  /* 10239bb4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10239bba jne 0x10239bad */
  if (!C.zf) goto L_10239bad;
L_10239bbc:;
  /* 10239bbc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10239bbe mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10239bc3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10239bc5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10239bc8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10239bca add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10239bcd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10239bd2 je 0x10239bbc */
  if (C.zf) goto L_10239bbc;
  /* 10239bd4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10239bd7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10239bd9 je 0x10239bfe */
  if (C.zf) goto L_10239bfe;
  /* 10239bdb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10239bdd je 0x10239bf9 */
  if (C.zf) goto L_10239bf9;
  /* 10239bdf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10239be4 je 0x10239bf4 */
  if (C.zf) goto L_10239bf4;
  /* 10239be6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10239beb je 0x10239bef */
  if (C.zf) goto L_10239bef;
  /* 10239bed jmp 0x10239bbc */
  goto L_10239bbc;
L_10239bef:;
  /* 10239bef lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10239bf2 jmp 0x10239c01 */
  goto L_10239c01;
L_10239bf4:;
  /* 10239bf4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10239bf7 jmp 0x10239c01 */
  goto L_10239c01;
L_10239bf9:;
  /* 10239bf9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10239bfc jmp 0x10239c01 */
  goto L_10239c01;
L_10239bfe:;
  /* 10239bfe lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10239c01:;
  /* 10239c01 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10239c05 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10239c0b je 0x10239c26 */
  if (C.zf) goto L_10239c26;
L_10239c0d:;
  /* 10239c0d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10239c0f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10239c10 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10239c12 je 0x10239c78 */
  if (C.zf) goto L_10239c78;
  /* 10239c14 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10239c16 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10239c17 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10239c1d jne 0x10239c0d */
  if (!C.zf) goto L_10239c0d;
  /* 10239c1f jmp 0x10239c26 */
  goto L_10239c26;
L_10239c21:;
  /* 10239c21 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10239c23 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10239c26:;
  /* 10239c26 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10239c2b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10239c2d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10239c2f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10239c32 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10239c34 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10239c36 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10239c39 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10239c3e je 0x10239c21 */
  if (C.zf) goto L_10239c21;
  /* 10239c40 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10239c42 je 0x10239c78 */
  if (C.zf) goto L_10239c78;
  /* 10239c44 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10239c46 je 0x10239c6f */
  if (C.zf) goto L_10239c6f;
  /* 10239c48 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10239c4e je 0x10239c62 */
  if (C.zf) goto L_10239c62;
  /* 10239c50 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10239c56 je 0x10239c5a */
  if (C.zf) goto L_10239c5a;
  /* 10239c58 jmp 0x10239c21 */
  goto L_10239c21;
L_10239c5a:;
  /* 10239c5a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10239c5c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10239c60 pop edi */
  EDI = (pop32());
  /* 10239c61 ret  */
  ESPCHK(0x10239ba0u, _esp0);
  ESP += 4; return;
L_10239c62:;
  /* 10239c62 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10239c65 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10239c69 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10239c6d pop edi */
  EDI = (pop32());
  /* 10239c6e ret  */
  ESPCHK(0x10239ba0u, _esp0);
  ESP += 4; return;
L_10239c6f:;
  /* 10239c6f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10239c72 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10239c76 pop edi */
  EDI = (pop32());
  /* 10239c77 ret  */
  ESPCHK(0x10239ba0u, _esp0);
  ESP += 4; return;
L_10239c78:;
  /* 10239c78 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10239c7a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10239c7e pop edi */
  EDI = (pop32());
  /* 10239c7f ret  */
  ESPCHK(0x10239ba0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10239c80 (88 bytes, 40 insns) */
void f_10239c80(void) {
  FTRACE(0x10239c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10239c80 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10239c84 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10239c88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10239c8a je 0x10239cd3 */
  if (C.zf) goto L_10239cd3;
  /* 10239c8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10239c8e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10239c92 push edi */
  push32((uint32_t)(EDI));
  /* 10239c93 mov edi, ecx */
  EDI = (ECX);
  /* 10239c95 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239c98 jb 0x10239cc7 */
  if (C.cf) goto L_10239cc7;
  /* 10239c9a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10239c9c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10239c9f je 0x10239ca9 */
  if (C.zf) goto L_10239ca9;
  /* 10239ca1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10239ca3:;
  /* 10239ca3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10239ca5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10239ca6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10239ca7 jne 0x10239ca3 */
  if (!C.zf) goto L_10239ca3;
L_10239ca9:;
  /* 10239ca9 mov ecx, eax */
  ECX = (EAX);
  /* 10239cab shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10239cae add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10239cb0 mov ecx, eax */
  ECX = (EAX);
  /* 10239cb2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10239cb5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10239cb7 mov ecx, edx */
  ECX = (EDX);
  /* 10239cb9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10239cbc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10239cbf je 0x10239cc7 */
  if (C.zf) goto L_10239cc7;
  /* 10239cc1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10239cc3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10239cc5 je 0x10239ccd */
  if (C.zf) goto L_10239ccd;
L_10239cc7:;
  /* 10239cc7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10239cc9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10239cca dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10239ccb jne 0x10239cc7 */
  if (!C.zf) goto L_10239cc7;
L_10239ccd:;
  /* 10239ccd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10239cd1 pop edi */
  EDI = (pop32());
  /* 10239cd2 ret  */
  ESPCHK(0x10239c80u, _esp0);
  ESP += 4; return;
L_10239cd3:;
  /* 10239cd3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10239cd7 ret  */
  ESPCHK(0x10239c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ce0 @ 0x10239ce0 (664 bytes, 266 insns) [15 switch table(s)] */
void f_10239ce0(void) {
  FTRACE(0x10239ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10239ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10239ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10239ce3 push edi */
  push32((uint32_t)(EDI));
  /* 10239ce4 push esi */
  push32((uint32_t)(ESI));
  /* 10239ce5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10239ce8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10239ceb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10239cee mov eax, ecx */
  EAX = (ECX);
  /* 10239cf0 mov edx, ecx */
  EDX = (ECX);
  /* 10239cf2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10239cf4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239cf6 jbe 0x10239d00 */
  if ((C.cf||C.zf)) goto L_10239d00;
  /* 10239cf8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239cfa jb 0x10239e78 */
  if (C.cf) goto L_10239e78;
L_10239d00:;
  /* 10239d00 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10239d06 jne 0x10239d1c */
  if (!C.zf) goto L_10239d1c;
  /* 10239d08 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10239d0b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10239d0e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239d11 jb 0x10239d3c */
  if (C.cf) goto L_10239d3c;
  /* 10239d13 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10239d15 jmp dword ptr [edx*4 + 0x10239e28] */
  switch (EDX) {
    case 0: goto L_10239e38;
    case 1: goto L_10239e40;
    case 2: goto L_10239e4c;
    case 3: goto L_10239e60;
    default: x86_unimpl("switch@0x10239d15 out of table"); return;
  }
L_10239d1c:;
  /* 10239d1c mov eax, edi */
  EAX = (EDI);
  /* 10239d1e mov edx, 3 */
  EDX = (0x3u);
  /* 10239d23 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10239d26 jb 0x10239d34 */
  if (C.cf) goto L_10239d34;
  /* 10239d28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10239d2b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10239d2d jmp dword ptr [eax*4 + 0x10239d40] */
  switch (EAX) {
    case 1: goto L_10239d50;
    case 2: goto L_10239d7c;
    case 3: goto L_10239da0;
    default: x86_unimpl("switch@0x10239d2d out of table"); return;
  }
L_10239d34:;
  /* 10239d34 jmp dword ptr [ecx*4 + 0x10239e38] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10239e38)))); return;
  /* 10239d3b nop  */
  /* nop */
L_10239d3c:;
  /* 10239d3c jmp dword ptr [ecx*4 + 0x10239dbc] */
  switch (ECX) {
    case 0: goto L_10239e1f;
    case 1: goto L_10239e0c;
    case 2: goto L_10239e04;
    case 3: goto L_10239dfc;
    case 4: goto L_10239df4;
    case 5: goto L_10239dec;
    case 6: goto L_10239de4;
    case 7: goto L_10239ddc;
    default: x86_unimpl("switch@0x10239d3c out of table"); return;
  }
  /* 10239d43 nop  */
  /* nop */
L_10239d50:;
  /* 10239d50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10239d52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10239d54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10239d56 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10239d59 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10239d5c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10239d5f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10239d62 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10239d65 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10239d68 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10239d6b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239d6e jb 0x10239d3c */
  if (C.cf) goto L_10239d3c;
  /* 10239d70 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10239d72 jmp dword ptr [edx*4 + 0x10239e28] */
  switch (EDX) {
    case 0: goto L_10239e38;
    case 1: goto L_10239e40;
    case 2: goto L_10239e4c;
    case 3: goto L_10239e60;
    default: x86_unimpl("switch@0x10239d72 out of table"); return;
  }
  /* 10239d79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10239d7c:;
  /* 10239d7c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10239d7e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10239d80 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10239d82 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10239d85 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10239d88 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10239d8b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10239d8e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10239d91 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239d94 jb 0x10239d3c */
  if (C.cf) goto L_10239d3c;
  /* 10239d96 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10239d98 jmp dword ptr [edx*4 + 0x10239e28] */
  switch (EDX) {
    case 0: goto L_10239e38;
    case 1: goto L_10239e40;
    case 2: goto L_10239e4c;
    case 3: goto L_10239e60;
    default: x86_unimpl("switch@0x10239d98 out of table"); return;
  }
  /* 10239d9f nop  */
  /* nop */
L_10239da0:;
  /* 10239da0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10239da2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10239da4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10239da6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10239da7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10239daa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10239dab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239dae jb 0x10239d3c */
  if (C.cf) goto L_10239d3c;
  /* 10239db0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10239db2 jmp dword ptr [edx*4 + 0x10239e28] */
  switch (EDX) {
    case 0: goto L_10239e38;
    case 1: goto L_10239e40;
    case 2: goto L_10239e4c;
    case 3: goto L_10239e60;
    default: x86_unimpl("switch@0x10239db2 out of table"); return;
  }
  /* 10239db9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10239ddc:;
  /* 10239ddc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10239de0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10239de4:;
  /* 10239de4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10239de8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10239dec:;
  /* 10239dec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10239df0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10239df4:;
  /* 10239df4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10239df8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10239dfc:;
  /* 10239dfc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10239e00 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10239e04:;
  /* 10239e04 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10239e08 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10239e0c:;
  /* 10239e0c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10239e10 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10239e14 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10239e1b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10239e1d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10239e1f:;
  /* 10239e1f jmp dword ptr [edx*4 + 0x10239e28] */
  switch (EDX) {
    case 0: goto L_10239e38;
    case 1: goto L_10239e40;
    case 2: goto L_10239e4c;
    case 3: goto L_10239e60;
    default: x86_unimpl("switch@0x10239e1f out of table"); return;
  }
  /* 10239e26 mov edi, edi */
  EDI = (EDI);
L_10239e38:;
  /* 10239e38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10239e3b pop esi */
  ESI = (pop32());
  /* 10239e3c pop edi */
  EDI = (pop32());
  /* 10239e3d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10239e3e ret  */
  ESPCHK(0x10239ce0u, _esp0);
  ESP += 4; return;
  /* 10239e3f nop  */
  /* nop */
L_10239e40:;
  /* 10239e40 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10239e42 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10239e44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10239e47 pop esi */
  ESI = (pop32());
  /* 10239e48 pop edi */
  EDI = (pop32());
  /* 10239e49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10239e4a ret  */
  ESPCHK(0x10239ce0u, _esp0);
  ESP += 4; return;
  /* 10239e4b nop  */
  /* nop */
L_10239e4c:;
  /* 10239e4c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10239e4e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10239e50 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10239e53 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10239e56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10239e59 pop esi */
  ESI = (pop32());
  /* 10239e5a pop edi */
  EDI = (pop32());
  /* 10239e5b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10239e5c ret  */
  ESPCHK(0x10239ce0u, _esp0);
  ESP += 4; return;
  /* 10239e5d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10239e60:;
  /* 10239e60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10239e62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10239e64 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10239e67 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10239e6a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10239e6d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10239e70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10239e73 pop esi */
  ESI = (pop32());
  /* 10239e74 pop edi */
  EDI = (pop32());
  /* 10239e75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10239e76 ret  */
  ESPCHK(0x10239ce0u, _esp0);
  ESP += 4; return;
  /* 10239e77 nop  */
  /* nop */
L_10239e78:;
  /* 10239e78 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10239e7c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10239e80 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10239e86 jne 0x10239eac */
  if (!C.zf) goto L_10239eac;
  /* 10239e88 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10239e8b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10239e8e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239e91 jb 0x10239ea0 */
  if (C.cf) goto L_10239ea0;
  /* 10239e93 std  */
  C.df=1;
  /* 10239e94 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10239e96 cld  */
  C.df=0;
  /* 10239e97 jmp dword ptr [edx*4 + 0x10239fc0] */
  switch (EDX) {
    case 0: goto L_10239fd0;
    case 1: goto L_10239fd8;
    case 2: goto L_10239fe8;
    case 3: goto L_10239ffc;
    default: x86_unimpl("switch@0x10239e97 out of table"); return;
  }
  /* 10239e9e mov edi, edi */
  EDI = (EDI);
L_10239ea0:;
  /* 10239ea0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10239ea2 jmp dword ptr [ecx*4 + 0x10239f70] */
  switch (ECX) {
    case 0: goto L_10239fb7;
    default: x86_unimpl("switch@0x10239ea2 out of table"); return;
  }
  /* 10239ea9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10239eac:;
  /* 10239eac mov eax, edi */
  EAX = (EDI);
  /* 10239eae mov edx, 3 */
  EDX = (0x3u);
  /* 10239eb3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239eb6 jb 0x10239ec4 */
  if (C.cf) goto L_10239ec4;
  /* 10239eb8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10239ebb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10239ebd jmp dword ptr [eax*4 + 0x10239ec8] */
  switch (EAX) {
    case 1: goto L_10239ed8;
    case 2: goto L_10239ef8;
    case 3: goto L_10239f20;
    default: x86_unimpl("switch@0x10239ebd out of table"); return;
  }
L_10239ec4:;
  /* 10239ec4 jmp dword ptr [ecx*4 + 0x10239fc0] */
  switch (ECX) {
    case 0: goto L_10239fd0;
    case 1: goto L_10239fd8;
    case 2: goto L_10239fe8;
    case 3: goto L_10239ffc;
    default: x86_unimpl("switch@0x10239ec4 out of table"); return;
  }
  /* 10239ecb nop  */
  /* nop */
L_10239ed8:;
  /* 10239ed8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10239edb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10239edd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10239ee0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10239ee1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10239ee4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10239ee5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239ee8 jb 0x10239ea0 */
  if (C.cf) goto L_10239ea0;
  /* 10239eea std  */
  C.df=1;
  /* 10239eeb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10239eed cld  */
  C.df=0;
  /* 10239eee jmp dword ptr [edx*4 + 0x10239fc0] */
  switch (EDX) {
    case 0: goto L_10239fd0;
    case 1: goto L_10239fd8;
    case 2: goto L_10239fe8;
    case 3: goto L_10239ffc;
    default: x86_unimpl("switch@0x10239eee out of table"); return;
  }
L_10239ef5:;
  /* 10239ef5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10239ef8:;
  /* 10239ef8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10239efb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10239efd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10239f00 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10239f03 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10239f06 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10239f09 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10239f0c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10239f0f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239f12 jb 0x10239ea0 */
  if (C.cf) goto L_10239ea0;
  /* 10239f14 std  */
  C.df=1;
  /* 10239f15 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10239f17 cld  */
  C.df=0;
  /* 10239f18 jmp dword ptr [edx*4 + 0x10239fc0] */
  switch (EDX) {
    case 0: goto L_10239fd0;
    case 1: goto L_10239fd8;
    case 2: goto L_10239fe8;
    case 3: goto L_10239ffc;
    default: x86_unimpl("switch@0x10239f18 out of table"); return;
  }
  /* 10239f1f nop  */
  /* nop */
L_10239f20:;
  /* 10239f20 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10239f23 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10239f25 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10239f28 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10239f2b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10239f2e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10239f31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10239f34 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10239f37 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10239f3a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10239f3d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10239f40 jb 0x10239ea0 */
  if (C.cf) goto L_10239ea0;
  /* 10239f46 std  */
  C.df=1;
  /* 10239f47 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10239f49 cld  */
  C.df=0;
  /* 10239f4a jmp dword ptr [edx*4 + 0x10239fc0] */
  switch (EDX) {
    case 0: goto L_10239fd0;
    case 1: goto L_10239fd8;
    case 2: goto L_10239fe8;
    case 3: goto L_10239ffc;
    default: x86_unimpl("switch@0x10239f4a out of table"); return;
  }
  /* 10239f51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10239f54 je 0x10239ef5 */
  if (C.zf) goto L_10239ef5;
  /* 10239f56 and edx, dword ptr [eax] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EAX))); EDX = (_r); fl_logic(_r,32); }
  /* 10239f58 jl 0x10239ef9 */
  if ((C.sf!=C.of)) goto L_10239ef9;
  /* 10239f5a and edx, dword ptr [eax] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EAX))); EDX = (_r); fl_logic(_r,32); }
  /* 10239f5c test byte ptr [edi - 0x6073efdd], bl */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x6073efdd)))&(BL); fl_logic(_r,8); }
  /* 10239f62 and edx, dword ptr [eax] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EAX))); EDX = (_r); fl_logic(_r,32); }
  /* 10239f64 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 10239f65 lahf  */
  AH=(uint8_t)((C.sf<<7)|(C.zf<<6)|(C.af<<4)|(C.pf<<2)|0x02u|C.cf);
  /* 10239f66 and edx, dword ptr [eax] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EAX))); EDX = (_r); fl_logic(_r,32); }
  /* 10239f68 pushfd  */
  x86_unimpl("pushfd @ 0x10239f68");
  /* 10239f69 lahf  */
  AH=(uint8_t)((C.sf<<7)|(C.zf<<6)|(C.af<<4)|(C.pf<<2)|0x02u|C.cf);
  /* 10239f6a and edx, dword ptr [eax] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EAX))); EDX = (_r); fl_logic(_r,32); }
  /* 10239f6c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 10239f6d lahf  */
  AH=(uint8_t)((C.sf<<7)|(C.zf<<6)|(C.af<<4)|(C.pf<<2)|0x02u|C.cf);
  /* 10239f6e and edx, dword ptr [eax] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EAX))); EDX = (_r); fl_logic(_r,32); }
  /* 10239f74 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10239f78 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10239f7c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10239f80 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10239f84 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10239f88 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10239f8c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10239f90 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10239f94 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10239f98 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10239f9c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10239fa0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10239fa4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10239fa8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10239fac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10239fb3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10239fb5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10239fb7:;
  /* 10239fb7 jmp dword ptr [edx*4 + 0x10239fc0] */
  switch (EDX) {
    case 0: goto L_10239fd0;
    case 1: goto L_10239fd8;
    case 2: goto L_10239fe8;
    case 3: goto L_10239ffc;
    default: x86_unimpl("switch@0x10239fb7 out of table"); return;
  }
  /* 10239fbe mov edi, edi */
  EDI = (EDI);
L_10239fd0:;
  /* 10239fd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10239fd3 pop esi */
  ESI = (pop32());
  /* 10239fd4 pop edi */
  EDI = (pop32());
  /* 10239fd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10239fd6 ret  */
  ESPCHK(0x10239ce0u, _esp0);
  ESP += 4; return;
  /* 10239fd7 nop  */
  /* nop */
L_10239fd8:;
  /* 10239fd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10239fdb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10239fde mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10239fe1 pop esi */
  ESI = (pop32());
  /* 10239fe2 pop edi */
  EDI = (pop32());
  /* 10239fe3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10239fe4 ret  */
  ESPCHK(0x10239ce0u, _esp0);
  ESP += 4; return;
  /* 10239fe5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10239fe8:;
  /* 10239fe8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10239feb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10239fee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10239ff1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10239ff4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10239ff7 pop esi */
  ESI = (pop32());
  /* 10239ff8 pop edi */
  EDI = (pop32());
  /* 10239ff9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10239ffa ret  */
  ESPCHK(0x10239ce0u, _esp0);
  ESP += 4; return;
  /* 10239ffb nop  */
  /* nop */
L_10239ffc:;
  /* 10239ffc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10239fff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1023a002 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1023a005 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1023a008 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1023a00b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1023a00e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023a011 pop esi */
  ESI = (pop32());
  /* 1023a012 pop edi */
  EDI = (pop32());
  /* 1023a013 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023a014 ret  */
  ESPCHK(0x10239ce0u, _esp0);
  ESP += 4; return;
L_10239ef9: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x10239ef9 (unresolved jump table)"); return;
}

/* __fptrap @ 0x1023a015 (9 bytes, 4 insns) */
void f_1023a015(void) {
  FTRACE(0x1023a015u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023a015 push 2 */
  push32((uint32_t)(0x2u));
  /* 1023a017 call 0x10237151 */
  push32(0x1023a01cu); f_10237151();
  /* 1023a01c pop ecx */
  ECX = (pop32());
  /* 1023a01d ret  */
  ESPCHK(0x1023a015u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a01e @ 0x1023a01e (41 bytes, 12 insns) */
void f_1023a01e(void) {
  FTRACE(0x1023a01eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023a01e push esi */
  push32((uint32_t)(ESI));
  /* 1023a01f mov esi, dword ptr [0x1023e094] */
  ESI = (r32((uint32_t)(0x1023e094)));
  /* 1023a025 push dword ptr [0x10240c04] */
  push32((uint32_t)(r32((uint32_t)(0x10240c04))));
  /* 1023a02b call esi */
  call_ind((uint32_t)(ESI), 0x1023a02du);
  /* 1023a02d push dword ptr [0x10240bf4] */
  push32((uint32_t)(r32((uint32_t)(0x10240bf4))));
  /* 1023a033 call esi */
  call_ind((uint32_t)(ESI), 0x1023a035u);
  /* 1023a035 push dword ptr [0x10240be4] */
  push32((uint32_t)(r32((uint32_t)(0x10240be4))));
  /* 1023a03b call esi */
  call_ind((uint32_t)(ESI), 0x1023a03du);
  /* 1023a03d push dword ptr [0x10240bc4] */
  push32((uint32_t)(r32((uint32_t)(0x10240bc4))));
  /* 1023a043 call esi */
  call_ind((uint32_t)(ESI), 0x1023a045u);
  /* 1023a045 pop esi */
  ESI = (pop32());
  /* 1023a046 ret  */
  ESPCHK(0x1023a01eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a047 @ 0x1023a047 (108 bytes, 34 insns) */
void f_1023a047(void) {
  FTRACE(0x1023a047u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023a047 push esi */
  push32((uint32_t)(ESI));
  /* 1023a048 push edi */
  push32((uint32_t)(EDI));
  /* 1023a049 mov edi, dword ptr [0x1023e050] */
  EDI = (r32((uint32_t)(0x1023e050)));
  /* 1023a04f mov esi, 0x10240bc0 */
  ESI = (0x10240bc0u);
L_1023a054:;
  /* 1023a054 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1023a056 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023a058 je 0x1023a085 */
  if (C.zf) goto L_1023a085;
  /* 1023a05a cmp esi, 0x10240c04 */
  { uint32_t _a=(ESI),_b=(0x10240c04u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a060 je 0x1023a085 */
  if (C.zf) goto L_1023a085;
  /* 1023a062 cmp esi, 0x10240bf4 */
  { uint32_t _a=(ESI),_b=(0x10240bf4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a068 je 0x1023a085 */
  if (C.zf) goto L_1023a085;
  /* 1023a06a cmp esi, 0x10240be4 */
  { uint32_t _a=(ESI),_b=(0x10240be4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a070 je 0x1023a085 */
  if (C.zf) goto L_1023a085;
  /* 1023a072 cmp esi, 0x10240bc4 */
  { uint32_t _a=(ESI),_b=(0x10240bc4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a078 je 0x1023a085 */
  if (C.zf) goto L_1023a085;
  /* 1023a07a push eax */
  push32((uint32_t)(EAX));
  /* 1023a07b call edi */
  call_ind((uint32_t)(EDI), 0x1023a07du);
  /* 1023a07d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1023a07f call 0x1023a266 */
  push32(0x1023a084u); f_1023a266();
  /* 1023a084 pop ecx */
  ECX = (pop32());
L_1023a085:;
  /* 1023a085 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023a088 cmp esi, 0x10240c80 */
  { uint32_t _a=(ESI),_b=(0x10240c80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a08e jl 0x1023a054 */
  if ((C.sf!=C.of)) goto L_1023a054;
  /* 1023a090 push dword ptr [0x10240be4] */
  push32((uint32_t)(r32((uint32_t)(0x10240be4))));
  /* 1023a096 call edi */
  call_ind((uint32_t)(EDI), 0x1023a098u);
  /* 1023a098 push dword ptr [0x10240bf4] */
  push32((uint32_t)(r32((uint32_t)(0x10240bf4))));
  /* 1023a09e call edi */
  call_ind((uint32_t)(EDI), 0x1023a0a0u);
  /* 1023a0a0 push dword ptr [0x10240c04] */
  push32((uint32_t)(r32((uint32_t)(0x10240c04))));
  /* 1023a0a6 call edi */
  call_ind((uint32_t)(EDI), 0x1023a0a8u);
  /* 1023a0a8 push dword ptr [0x10240bc4] */
  push32((uint32_t)(r32((uint32_t)(0x10240bc4))));
  /* 1023a0ae call edi */
  call_ind((uint32_t)(EDI), 0x1023a0b0u);
  /* 1023a0b0 pop edi */
  EDI = (pop32());
  /* 1023a0b1 pop esi */
  ESI = (pop32());
  /* 1023a0b2 ret  */
  ESPCHK(0x1023a047u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0b3 @ 0x1023a0b3 (97 bytes, 37 insns) */
void f_1023a0b3(void) {
  FTRACE(0x1023a0b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023a0b3 push ebp */
  push32((uint32_t)(EBP));
  /* 1023a0b4 mov ebp, esp */
  EBP = (ESP);
  /* 1023a0b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023a0b9 push esi */
  push32((uint32_t)(ESI));
  /* 1023a0ba cmp dword ptr [eax*4 + 0x10240bc0], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10240bc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a0c2 lea esi, [eax*4 + 0x10240bc0] */
  ESI = ((uint32_t)(EAX*4 + 0x10240bc0));
  /* 1023a0c9 jne 0x1023a109 */
  if (!C.zf) goto L_1023a109;
  /* 1023a0cb push edi */
  push32((uint32_t)(EDI));
  /* 1023a0cc push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1023a0ce call 0x1023a34f */
  push32(0x1023a0d3u); f_1023a34f();
  /* 1023a0d3 mov edi, eax */
  EDI = (EAX);
  /* 1023a0d5 pop ecx */
  ECX = (pop32());
  /* 1023a0d6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1023a0d8 jne 0x1023a0e2 */
  if (!C.zf) goto L_1023a0e2;
  /* 1023a0da push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1023a0dc call 0x10237151 */
  push32(0x1023a0e1u); f_10237151();
  /* 1023a0e1 pop ecx */
  ECX = (pop32());
L_1023a0e2:;
  /* 1023a0e2 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1023a0e4 call 0x1023a0b3 */
  push32(0x1023a0e9u); f_1023a0b3();
  /* 1023a0e9 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a0ec pop ecx */
  ECX = (pop32());
  /* 1023a0ed push edi */
  push32((uint32_t)(EDI));
  /* 1023a0ee jne 0x1023a0fa */
  if (!C.zf) goto L_1023a0fa;
  /* 1023a0f0 call dword ptr [0x1023e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e094))), 0x1023a0f6u);
  /* 1023a0f6 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1023a0f8 jmp 0x1023a100 */
  goto L_1023a100;
L_1023a0fa:;
  /* 1023a0fa call 0x1023a266 */
  push32(0x1023a0ffu); f_1023a266();
  /* 1023a0ff pop ecx */
  ECX = (pop32());
L_1023a100:;
  /* 1023a100 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1023a102 call 0x1023a114 */
  push32(0x1023a107u); f_1023a114();
  /* 1023a107 pop ecx */
  ECX = (pop32());
  /* 1023a108 pop edi */
  EDI = (pop32());
L_1023a109:;
  /* 1023a109 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1023a10b call dword ptr [0x1023e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e00c))), 0x1023a111u);
  /* 1023a111 pop esi */
  ESI = (pop32());
  /* 1023a112 pop ebp */
  EBP = (pop32());
  /* 1023a113 ret  */
  ESPCHK(0x1023a0b3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a114 @ 0x1023a114 (21 bytes, 7 insns) */
void f_1023a114(void) {
  FTRACE(0x1023a114u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023a114 push ebp */
  push32((uint32_t)(EBP));
  /* 1023a115 mov ebp, esp */
  EBP = (ESP);
  /* 1023a117 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023a11a push dword ptr [eax*4 + 0x10240bc0] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10240bc0))));
  /* 1023a121 call dword ptr [0x1023e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e008))), 0x1023a127u);
  /* 1023a127 pop ebp */
  EBP = (pop32());
  /* 1023a128 ret  */
  ESPCHK(0x1023a114u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a129 @ 0x1023a129 (289 bytes, 98 insns) */
void f_1023a129(void) {
  FTRACE(0x1023a129u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023a129 push ebp */
  push32((uint32_t)(EBP));
  /* 1023a12a mov ebp, esp */
  EBP = (ESP);
  /* 1023a12c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1023a12e push 0x1023e4d0 */
  push32((uint32_t)(0x1023e4d0u));
  /* 1023a133 push 0x1023d0d0 */
  push32((uint32_t)(0x1023d0d0u));
  /* 1023a138 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1023a13e push eax */
  push32((uint32_t)(EAX));
  /* 1023a13f mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1023a146 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023a149 push ebx */
  push32((uint32_t)(EBX));
  /* 1023a14a push esi */
  push32((uint32_t)(ESI));
  /* 1023a14b push edi */
  push32((uint32_t)(EDI));
  /* 1023a14c mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1023a14f imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1023a153 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1023a156 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 1023a159 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a15c ja 0x1023a172 */
  if ((!C.cf&&!C.zf)) goto L_1023a172;
  /* 1023a15e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1023a160 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a162 jne 0x1023a167 */
  if (!C.zf) goto L_1023a167;
  /* 1023a164 push 1 */
  push32((uint32_t)(0x1u));
  /* 1023a166 pop esi */
  ESI = (pop32());
L_1023a167:;
  /* 1023a167 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023a16a and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1023a16d mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1023a170 jmp 0x1023a174 */
  goto L_1023a174;
L_1023a172:;
  /* 1023a172 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1023a174:;
  /* 1023a174 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 1023a177 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a17a ja 0x1023a228 */
  if ((!C.cf&&!C.zf)) goto L_1023a228;
  /* 1023a180 mov eax, dword ptr [0x10247bc8] */
  EAX = (r32((uint32_t)(0x10247bc8)));
  /* 1023a185 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a188 jne 0x1023a1cb */
  if (!C.zf) goto L_1023a1cb;
  /* 1023a18a mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 1023a18d cmp edi, dword ptr [0x10246970] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x10246970))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a193 ja 0x1023a211 */
  if ((!C.cf&&!C.zf)) goto L_1023a211;
  /* 1023a195 push 9 */
  push32((uint32_t)(0x9u));
  /* 1023a197 call 0x1023a0b3 */
  push32(0x1023a19cu); f_1023a0b3();
  /* 1023a19c pop ecx */
  ECX = (pop32());
  /* 1023a19d mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1023a1a0 push edi */
  push32((uint32_t)(EDI));
  /* 1023a1a1 call 0x1023b33b */
  push32(0x1023a1a6u); f_1023b33b();
  /* 1023a1a6 pop ecx */
  ECX = (pop32());
  /* 1023a1a7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1023a1aa or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1023a1ae call 0x1023a1c2 */
  push32(0x1023a1b3u); f_1023a1c2();
  /* 1023a1b3 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a1b6 je 0x1023a216 */
  if (C.zf) goto L_1023a216;
  /* 1023a1b8 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1023a1bb jmp 0x1023a205 */
  goto L_1023a205;
  /* 1023a1bd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1023a1bf mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1023a1c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 1023a1c4 call 0x1023a114 */
  push32(0x1023a1c9u); f_1023a114();
  /* 1023a1c9 pop ecx */
  ECX = (pop32());
  /* 1023a1ca ret  */
  ESPCHK(0x1023a129u, _esp0);
  ESP += 4; return;
L_1023a1cb:;
  /* 1023a1cb cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a1ce jne 0x1023a211 */
  if (!C.zf) goto L_1023a211;
  /* 1023a1d0 cmp esi, dword ptr [0x10242e24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10242e24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a1d6 ja 0x1023a211 */
  if ((!C.cf&&!C.zf)) goto L_1023a211;
  /* 1023a1d8 push 9 */
  push32((uint32_t)(0x9u));
  /* 1023a1da call 0x1023a0b3 */
  push32(0x1023a1dfu); f_1023a0b3();
  /* 1023a1df pop ecx */
  ECX = (pop32());
  /* 1023a1e0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1023a1e7 mov eax, esi */
  EAX = (ESI);
  /* 1023a1e9 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1023a1ec push eax */
  push32((uint32_t)(EAX));
  /* 1023a1ed call 0x1023bae8 */
  push32(0x1023a1f2u); f_1023bae8();
  /* 1023a1f2 pop ecx */
  ECX = (pop32());
  /* 1023a1f3 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1023a1f6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1023a1fa call 0x1023a24b */
  push32(0x1023a1ffu); f_1023a24b();
  /* 1023a1ff cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a202 je 0x1023a216 */
  if (C.zf) goto L_1023a216;
  /* 1023a204 push esi */
  push32((uint32_t)(ESI));
L_1023a205:;
  /* 1023a205 push ebx */
  push32((uint32_t)(EBX));
  /* 1023a206 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1023a209 call 0x10239c80 */
  push32(0x1023a20eu); f_10239c80();
  /* 1023a20e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023a211:;
  /* 1023a211 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a214 jne 0x1023a254 */
  if (!C.zf) { jmp_ind(0x1023a254u); return; }
L_1023a216:;
  /* 1023a216 push esi */
  push32((uint32_t)(ESI));
  /* 1023a217 push 8 */
  push32((uint32_t)(0x8u));
  /* 1023a219 push dword ptr [0x10247bc4] */
  push32((uint32_t)(r32((uint32_t)(0x10247bc4))));
  /* 1023a21f call dword ptr [0x1023e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e098))), 0x1023a225u);
  /* 1023a225 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1023a228:;
  /* 1023a228 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a22b jne 0x1023a254 */
  if (!C.zf) { jmp_ind(0x1023a254u); return; }
  /* 1023a22d cmp dword ptr [0x10246810], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10246810))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a233 je 0x1023a254 */
  if (C.zf) { jmp_ind(0x1023a254u); return; }
  /* 1023a235 push esi */
  push32((uint32_t)(ESI));
  /* 1023a236 call 0x1023cfba */
  push32(0x1023a23bu); f_1023cfba();
  /* 1023a23b pop ecx */
  ECX = (pop32());
  /* 1023a23c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023a23e jne 0x1023a174 */
  if (!C.zf) goto L_1023a174;
  /* 1023a244 jmp 0x1023a257 */
  jmp_ind(0x1023a257u); return;
  /* 1023a246 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_1000a1c2 @ 0x1023a1c2 (9 bytes, 4 insns) */
void f_1023a1c2(void) {
  FTRACE(0x1023a1c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023a1c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 1023a1c4 call 0x1023a114 */
  push32(0x1023a1c9u); f_1023a114();
  /* 1023a1c9 pop ecx */
  ECX = (pop32());
  /* 1023a1ca ret  */
  ESPCHK(0x1023a1c2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a24b @ 0x1023a24b (9 bytes, 4 insns) */
void f_1023a24b(void) {
  FTRACE(0x1023a24bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023a24b push 9 */
  push32((uint32_t)(0x9u));
  /* 1023a24d call 0x1023a114 */
  push32(0x1023a252u); f_1023a114();
  /* 1023a252 pop ecx */
  ECX = (pop32());
  /* 1023a253 ret  */
  ESPCHK(0x1023a24bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a266 @ 0x1023a266 (215 bytes, 75 insns) */
void f_1023a266(void) {
  FTRACE(0x1023a266u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023a266 push ebp */
  push32((uint32_t)(EBP));
  /* 1023a267 mov ebp, esp */
  EBP = (ESP);
  /* 1023a269 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1023a26b push 0x1023e4e8 */
  push32((uint32_t)(0x1023e4e8u));
  /* 1023a270 push 0x1023d0d0 */
  push32((uint32_t)(0x1023d0d0u));
  /* 1023a275 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1023a27b push eax */
  push32((uint32_t)(EAX));
  /* 1023a27c mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1023a283 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023a286 push ebx */
  push32((uint32_t)(EBX));
  /* 1023a287 push esi */
  push32((uint32_t)(ESI));
  /* 1023a288 push edi */
  push32((uint32_t)(EDI));
  /* 1023a289 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1023a28c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1023a28e je 0x1023a340 */
  if (C.zf) { jmp_ind(0x1023a340u); return; }
  /* 1023a294 mov eax, dword ptr [0x10247bc8] */
  EAX = (r32((uint32_t)(0x10247bc8)));
  /* 1023a299 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a29c jne 0x1023a2d9 */
  if (!C.zf) goto L_1023a2d9;
  /* 1023a29e push 9 */
  push32((uint32_t)(0x9u));
  /* 1023a2a0 call 0x1023a0b3 */
  push32(0x1023a2a5u); f_1023a0b3();
  /* 1023a2a5 pop ecx */
  ECX = (pop32());
  /* 1023a2a6 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1023a2aa push esi */
  push32((uint32_t)(ESI));
  /* 1023a2ab call 0x1023afe7 */
  push32(0x1023a2b0u); f_1023afe7();
  /* 1023a2b0 pop ecx */
  ECX = (pop32());
  /* 1023a2b1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1023a2b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023a2b6 je 0x1023a2c1 */
  if (C.zf) goto L_1023a2c1;
  /* 1023a2b8 push esi */
  push32((uint32_t)(ESI));
  /* 1023a2b9 push eax */
  push32((uint32_t)(EAX));
  /* 1023a2ba call 0x1023b012 */
  push32(0x1023a2bfu); f_1023b012();
  /* 1023a2bf pop ecx */
  ECX = (pop32());
  /* 1023a2c0 pop ecx */
  ECX = (pop32());
L_1023a2c1:;
  /* 1023a2c1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1023a2c5 call 0x1023a2d0 */
  push32(0x1023a2cau); f_1023a2d0();
  /* 1023a2ca cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a2ce jmp 0x1023a321 */
  goto L_1023a321;
  /* 1023a2d0 push 9 */
  push32((uint32_t)(0x9u));
  /* 1023a2d2 call 0x1023a114 */
  push32(0x1023a2d7u); f_1023a114();
  /* 1023a2d7 pop ecx */
  ECX = (pop32());
  /* 1023a2d8 ret  */
  ESPCHK(0x1023a266u, _esp0);
  ESP += 4; return;
L_1023a2d9:;
  /* 1023a2d9 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a2dc jne 0x1023a331 */
  if (!C.zf) goto L_1023a331;
  /* 1023a2de push 9 */
  push32((uint32_t)(0x9u));
  /* 1023a2e0 call 0x1023a0b3 */
  push32(0x1023a2e5u); f_1023a0b3();
  /* 1023a2e5 pop ecx */
  ECX = (pop32());
  /* 1023a2e6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1023a2ed lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1023a2f0 push eax */
  push32((uint32_t)(EAX));
  /* 1023a2f1 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 1023a2f4 push eax */
  push32((uint32_t)(EAX));
  /* 1023a2f5 push esi */
  push32((uint32_t)(ESI));
  /* 1023a2f6 call 0x1023ba4c */
  push32(0x1023a2fbu); f_1023ba4c();
  /* 1023a2fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023a2fe mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1023a301 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023a303 je 0x1023a314 */
  if (C.zf) goto L_1023a314;
  /* 1023a305 push eax */
  push32((uint32_t)(EAX));
  /* 1023a306 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1023a309 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 1023a30c call 0x1023baa3 */
  push32(0x1023a311u); f_1023baa3();
  /* 1023a311 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023a314:;
  /* 1023a314 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1023a318 call 0x1023a328 */
  push32(0x1023a31du); f_1023a328();
  /* 1023a31d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1023a321:;
  /* 1023a321 jne 0x1023a340 */
  if (!C.zf) { jmp_ind(0x1023a340u); return; }
  /* 1023a323 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1023a326 jmp 0x1023a332 */
  goto L_1023a332;
  /* 1023a328 push 9 */
  push32((uint32_t)(0x9u));
  /* 1023a32a call 0x1023a114 */
  push32(0x1023a32fu); f_1023a114();
  /* 1023a32f pop ecx */
  ECX = (pop32());
  /* 1023a330 ret  */
  ESPCHK(0x1023a266u, _esp0);
  ESP += 4; return;
L_1023a331:;
  /* 1023a331 push esi */
  push32((uint32_t)(ESI));
L_1023a332:;
  /* 1023a332 push 0 */
  push32((uint32_t)(0x0u));
  /* 1023a334 push dword ptr [0x10247bc4] */
  push32((uint32_t)(r32((uint32_t)(0x10247bc4))));
}

/* FUN_1000a2d0 @ 0x1023a2d0 (9 bytes, 4 insns) */
void f_1023a2d0(void) {
  FTRACE(0x1023a2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023a2d0 push 9 */
  push32((uint32_t)(0x9u));
  /* 1023a2d2 call 0x1023a114 */
  push32(0x1023a2d7u); f_1023a114();
  /* 1023a2d7 pop ecx */
  ECX = (pop32());
  /* 1023a2d8 ret  */
  ESPCHK(0x1023a2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a328 @ 0x1023a328 (9 bytes, 4 insns) */
void f_1023a328(void) {
  FTRACE(0x1023a328u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023a328 push 9 */
  push32((uint32_t)(0x9u));
  /* 1023a32a call 0x1023a114 */
  push32(0x1023a32fu); f_1023a114();
  /* 1023a32f pop ecx */
  ECX = (pop32());
  /* 1023a330 ret  */
  ESPCHK(0x1023a328u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x1023a34f (18 bytes, 6 insns) */
void f_1023a34f(void) {
  FTRACE(0x1023a34fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023a34f push dword ptr [0x10246810] */
  push32((uint32_t)(r32((uint32_t)(0x10246810))));
  /* 1023a355 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1023a359 call 0x1023a361 */
  push32(0x1023a35eu); f_1023a361();
  /* 1023a35e pop ecx */
  ECX = (pop32());
  /* 1023a35f pop ecx */
  ECX = (pop32());
  /* 1023a360 ret  */
  ESPCHK(0x1023a34fu, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x1023a361 (44 bytes, 16 insns) */
void f_1023a361(void) {
  FTRACE(0x1023a361u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023a361 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a366 ja 0x1023a38a */
  if ((!C.cf&&!C.zf)) goto L_1023a38a;
L_1023a368:;
  /* 1023a368 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1023a36c call 0x1023a38d */
  push32(0x1023a371u); f_1023a38d();
  /* 1023a371 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023a373 pop ecx */
  ECX = (pop32());
  /* 1023a374 jne 0x1023a38c */
  if (!C.zf) goto L_1023a38c;
  /* 1023a376 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a37a je 0x1023a38c */
  if (C.zf) goto L_1023a38c;
  /* 1023a37c push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1023a380 call 0x1023cfba */
  push32(0x1023a385u); f_1023cfba();
  /* 1023a385 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023a387 pop ecx */
  ECX = (pop32());
  /* 1023a388 jne 0x1023a368 */
  if (!C.zf) goto L_1023a368;
L_1023a38a:;
  /* 1023a38a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1023a38c:;
  /* 1023a38c ret  */
  ESPCHK(0x1023a361u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a38d @ 0x1023a38d (231 bytes, 81 insns) */
void f_1023a38d(void) {
  FTRACE(0x1023a38du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023a38d push ebp */
  push32((uint32_t)(EBP));
  /* 1023a38e mov ebp, esp */
  EBP = (ESP);
  /* 1023a390 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1023a392 push 0x1023e500 */
  push32((uint32_t)(0x1023e500u));
  /* 1023a397 push 0x1023d0d0 */
  push32((uint32_t)(0x1023d0d0u));
  /* 1023a39c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1023a3a2 push eax */
  push32((uint32_t)(EAX));
  /* 1023a3a3 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1023a3aa sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023a3ad push ebx */
  push32((uint32_t)(EBX));
  /* 1023a3ae push esi */
  push32((uint32_t)(ESI));
  /* 1023a3af push edi */
  push32((uint32_t)(EDI));
  /* 1023a3b0 mov eax, dword ptr [0x10247bc8] */
  EAX = (r32((uint32_t)(0x10247bc8)));
  /* 1023a3b5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a3b8 jne 0x1023a3fd */
  if (!C.zf) goto L_1023a3fd;
  /* 1023a3ba mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1023a3bd cmp esi, dword ptr [0x10246970] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10246970))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a3c3 ja 0x1023a45c */
  if ((!C.cf&&!C.zf)) goto L_1023a45c;
  /* 1023a3c9 push 9 */
  push32((uint32_t)(0x9u));
  /* 1023a3cb call 0x1023a0b3 */
  push32(0x1023a3d0u); f_1023a0b3();
  /* 1023a3d0 pop ecx */
  ECX = (pop32());
  /* 1023a3d1 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1023a3d5 push esi */
  push32((uint32_t)(ESI));
  /* 1023a3d6 call 0x1023b33b */
  push32(0x1023a3dbu); f_1023b33b();
  /* 1023a3db pop ecx */
  ECX = (pop32());
  /* 1023a3dc mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1023a3df or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1023a3e3 call 0x1023a3f4 */
  push32(0x1023a3e8u); f_1023a3f4();
  /* 1023a3e8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1023a3eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023a3ed je 0x1023a45c */
  if (C.zf) goto L_1023a45c;
  /* 1023a3ef jmp 0x1023a47a */
  jmp_ind(0x1023a47au); return;
  /* 1023a3f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 1023a3f6 call 0x1023a114 */
  push32(0x1023a3fbu); f_1023a114();
  /* 1023a3fb pop ecx */
  ECX = (pop32());
  /* 1023a3fc ret  */
  ESPCHK(0x1023a38du, _esp0);
  ESP += 4; return;
L_1023a3fd:;
  /* 1023a3fd cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a400 jne 0x1023a45c */
  if (!C.zf) goto L_1023a45c;
  /* 1023a402 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023a405 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023a407 je 0x1023a411 */
  if (C.zf) goto L_1023a411;
  /* 1023a409 lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 1023a40c and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1023a40f jmp 0x1023a414 */
  goto L_1023a414;
L_1023a411:;
  /* 1023a411 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1023a413 pop esi */
  ESI = (pop32());
L_1023a414:;
  /* 1023a414 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 1023a417 cmp esi, dword ptr [0x10242e24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10242e24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a41d ja 0x1023a44d */
  if ((!C.cf&&!C.zf)) goto L_1023a44d;
  /* 1023a41f push 9 */
  push32((uint32_t)(0x9u));
  /* 1023a421 call 0x1023a0b3 */
  push32(0x1023a426u); f_1023a0b3();
  /* 1023a426 pop ecx */
  ECX = (pop32());
  /* 1023a427 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1023a42e mov eax, esi */
  EAX = (ESI);
  /* 1023a430 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1023a433 push eax */
  push32((uint32_t)(EAX));
  /* 1023a434 call 0x1023bae8 */
  push32(0x1023a439u); f_1023bae8();
  /* 1023a439 pop ecx */
  ECX = (pop32());
  /* 1023a43a mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1023a43d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1023a441 call 0x1023a453 */
  push32(0x1023a446u); f_1023a453();
  /* 1023a446 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1023a449 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023a44b jne 0x1023a47a */
  if (!C.zf) { jmp_ind(0x1023a47au); return; }
L_1023a44d:;
  /* 1023a44d push esi */
  push32((uint32_t)(ESI));
  /* 1023a44e jmp 0x1023a46c */
  goto L_1023a46c;
  /* 1023a450 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1023a453 push 9 */
  push32((uint32_t)(0x9u));
  /* 1023a455 call 0x1023a114 */
  push32(0x1023a45au); f_1023a114();
  /* 1023a45a pop ecx */
  ECX = (pop32());
  /* 1023a45b ret  */
  ESPCHK(0x1023a38du, _esp0);
  ESP += 4; return;
L_1023a45c:;
  /* 1023a45c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023a45f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023a461 jne 0x1023a466 */
  if (!C.zf) goto L_1023a466;
  /* 1023a463 push 1 */
  push32((uint32_t)(0x1u));
  /* 1023a465 pop eax */
  EAX = (pop32());
L_1023a466:;
  /* 1023a466 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023a469 and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1023a46b push eax */
  push32((uint32_t)(EAX));
L_1023a46c:;
  /* 1023a46c push 0 */
  push32((uint32_t)(0x0u));
  /* 1023a46e push dword ptr [0x10247bc4] */
  push32((uint32_t)(r32((uint32_t)(0x10247bc4))));
}

/* FUN_1000a3f4 @ 0x1023a3f4 (9 bytes, 4 insns) */
void f_1023a3f4(void) {
  FTRACE(0x1023a3f4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023a3f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 1023a3f6 call 0x1023a114 */
  push32(0x1023a3fbu); f_1023a114();
  /* 1023a3fb pop ecx */
  ECX = (pop32());
  /* 1023a3fc ret  */
  ESPCHK(0x1023a3f4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a453 @ 0x1023a453 (9 bytes, 4 insns) */
void f_1023a453(void) {
  FTRACE(0x1023a453u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023a453 push 9 */
  push32((uint32_t)(0x9u));
  /* 1023a455 call 0x1023a114 */
  push32(0x1023a45au); f_1023a114();
  /* 1023a45a pop ecx */
  ECX = (pop32());
  /* 1023a45b ret  */
  ESPCHK(0x1023a453u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a489 @ 0x1023a489 (429 bytes, 143 insns) */
void f_1023a489(void) {
  FTRACE(0x1023a489u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023a489 push ebp */
  push32((uint32_t)(EBP));
  /* 1023a48a mov ebp, esp */
  EBP = (ESP);
  /* 1023a48c sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023a48f push ebx */
  push32((uint32_t)(EBX));
  /* 1023a490 push esi */
  push32((uint32_t)(ESI));
  /* 1023a491 push edi */
  push32((uint32_t)(EDI));
  /* 1023a492 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1023a494 call 0x1023a0b3 */
  push32(0x1023a499u); f_1023a0b3();
  /* 1023a499 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1023a49c call 0x1023a636 */
  push32(0x1023a4a1u); f_1023a636();
  /* 1023a4a1 mov ebx, eax */
  EBX = (EAX);
  /* 1023a4a3 pop ecx */
  ECX = (pop32());
  /* 1023a4a4 cmp ebx, dword ptr [0x10246974] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10246974))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a4aa pop ecx */
  ECX = (pop32());
  /* 1023a4ab mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1023a4ae jne 0x1023a4b7 */
  if (!C.zf) goto L_1023a4b7;
L_1023a4b0:;
  /* 1023a4b0 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1023a4b2 jmp 0x1023a627 */
  goto L_1023a627;
L_1023a4b7:;
  /* 1023a4b7 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1023a4b9 je 0x1023a615 */
  if (C.zf) goto L_1023a615;
  /* 1023a4bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1023a4c1 mov eax, 0x10240d10 */
  EAX = (0x10240d10u);
L_1023a4c6:;
  /* 1023a4c6 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a4c8 je 0x1023a53e */
  if (C.zf) goto L_1023a53e;
  /* 1023a4ca add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023a4cd inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1023a4ce cmp eax, 0x10240e00 */
  { uint32_t _a=(EAX),_b=(0x10240e00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a4d3 jl 0x1023a4c6 */
  if ((C.sf!=C.of)) goto L_1023a4c6;
  /* 1023a4d5 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1023a4d8 push eax */
  push32((uint32_t)(EAX));
  /* 1023a4d9 push ebx */
  push32((uint32_t)(EBX));
  /* 1023a4da call dword ptr [0x1023e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e09c))), 0x1023a4e0u);
  /* 1023a4e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1023a4e2 pop esi */
  ESI = (pop32());
  /* 1023a4e3 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a4e5 jne 0x1023a60c */
  if (!C.zf) goto L_1023a60c;
  /* 1023a4eb push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1023a4ed and dword ptr [0x10246ba4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10246ba4)))&(0x0u); w32((uint32_t)(0x10246ba4), (_r)); fl_logic(_r,32); }
  /* 1023a4f4 pop ecx */
  ECX = (pop32());
  /* 1023a4f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023a4f7 mov edi, 0x10246aa0 */
  EDI = (0x10246aa0u);
  /* 1023a4fc cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a4ff rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1023a501 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1023a502 mov dword ptr [0x10246974], ebx */
  w32((uint32_t)(0x10246974), (EBX));
  /* 1023a508 jbe 0x1023a5f9 */
  if ((C.cf||C.zf)) goto L_1023a5f9;
  /* 1023a50e cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023a512 je 0x1023a5d4 */
  if (C.zf) goto L_1023a5d4;
  /* 1023a518 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_1023a51b:;
  /* 1023a51b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1023a51d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1023a51f je 0x1023a5d4 */
  if (C.zf) goto L_1023a5d4;
  /* 1023a525 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 1023a529 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_1023a52c:;
  /* 1023a52c cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a52e ja 0x1023a5c8 */
  if ((!C.cf&&!C.zf)) goto L_1023a5c8;
  /* 1023a534 or byte ptr [eax + 0x10246aa1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10246aa1)))|(0x4u); w8((uint32_t)(EAX + 0x10246aa1), (_r)); fl_logic(_r,8); }
  /* 1023a53b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1023a53c jmp 0x1023a52c */
  goto L_1023a52c;
L_1023a53e:;
  /* 1023a53e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1023a542 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1023a544 pop ecx */
  ECX = (pop32());
  /* 1023a545 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023a547 mov edi, 0x10246aa0 */
  EDI = (0x10246aa0u);
  /* 1023a54c lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 1023a54f rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1023a551 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1023a554 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1023a555 lea ebx, [esi + 0x10240d20] */
  EBX = ((uint32_t)(ESI + 0x10240d20));
L_1023a55b:;
  /* 1023a55b cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023a55e mov ecx, ebx */
  ECX = (EBX);
  /* 1023a560 je 0x1023a58e */
  if (C.zf) goto L_1023a58e;
L_1023a562:;
  /* 1023a562 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1023a565 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1023a567 je 0x1023a58e */
  if (C.zf) goto L_1023a58e;
  /* 1023a569 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1023a56c movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 1023a56f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a571 ja 0x1023a587 */
  if ((!C.cf&&!C.zf)) goto L_1023a587;
  /* 1023a573 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1023a576 mov dl, byte ptr [edx + 0x10240d08] */
  DL = (r8((uint32_t)(EDX + 0x10240d08)));
L_1023a57c:;
  /* 1023a57c or byte ptr [eax + 0x10246aa1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10246aa1)))|(DL); w8((uint32_t)(EAX + 0x10246aa1), (_r)); fl_logic(_r,8); }
  /* 1023a582 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1023a583 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a585 jbe 0x1023a57c */
  if ((C.cf||C.zf)) goto L_1023a57c;
L_1023a587:;
  /* 1023a587 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1023a588 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1023a589 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023a58c jne 0x1023a562 */
  if (!C.zf) goto L_1023a562;
L_1023a58e:;
  /* 1023a58e inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1023a591 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023a594 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a598 jb 0x1023a55b */
  if (C.cf) goto L_1023a55b;
  /* 1023a59a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023a59d mov dword ptr [0x1024698c], 1 */
  w32((uint32_t)(0x1024698c), (0x1u));
  /* 1023a5a7 push eax */
  push32((uint32_t)(EAX));
  /* 1023a5a8 mov dword ptr [0x10246974], eax */
  w32((uint32_t)(0x10246974), (EAX));
  /* 1023a5ad call 0x1023a680 */
  push32(0x1023a5b2u); f_1023a680();
  /* 1023a5b2 lea esi, [esi + 0x10240d14] */
  ESI = ((uint32_t)(ESI + 0x10240d14));
  /* 1023a5b8 mov edi, 0x10246980 */
  EDI = (0x10246980u);
  /* 1023a5bd movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1023a5be movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1023a5bf pop ecx */
  ECX = (pop32());
  /* 1023a5c0 mov dword ptr [0x10246ba4], eax */
  w32((uint32_t)(0x10246ba4), (EAX));
  /* 1023a5c5 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1023a5c6 jmp 0x1023a61a */
  goto L_1023a61a;
L_1023a5c8:;
  /* 1023a5c8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1023a5c9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1023a5ca cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023a5ce jne 0x1023a51b */
  if (!C.zf) goto L_1023a51b;
L_1023a5d4:;
  /* 1023a5d4 mov eax, esi */
  EAX = (ESI);
L_1023a5d6:;
  /* 1023a5d6 or byte ptr [eax + 0x10246aa1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10246aa1)))|(0x8u); w8((uint32_t)(EAX + 0x10246aa1), (_r)); fl_logic(_r,8); }
  /* 1023a5dd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1023a5de cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a5e3 jb 0x1023a5d6 */
  if (C.cf) goto L_1023a5d6;
  /* 1023a5e5 push ebx */
  push32((uint32_t)(EBX));
  /* 1023a5e6 call 0x1023a680 */
  push32(0x1023a5ebu); f_1023a680();
  /* 1023a5eb pop ecx */
  ECX = (pop32());
  /* 1023a5ec mov dword ptr [0x10246ba4], eax */
  w32((uint32_t)(0x10246ba4), (EAX));
  /* 1023a5f1 mov dword ptr [0x1024698c], esi */
  w32((uint32_t)(0x1024698c), (ESI));
  /* 1023a5f7 jmp 0x1023a600 */
  goto L_1023a600;
L_1023a5f9:;
  /* 1023a5f9 and dword ptr [0x1024698c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1024698c)))&(0x0u); w32((uint32_t)(0x1024698c), (_r)); fl_logic(_r,32); }
L_1023a600:;
  /* 1023a600 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023a602 mov edi, 0x10246980 */
  EDI = (0x10246980u);
  /* 1023a607 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1023a608 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1023a609 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1023a60a jmp 0x1023a61a */
  goto L_1023a61a;
L_1023a60c:;
  /* 1023a60c cmp dword ptr [0x102467b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102467b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a613 je 0x1023a624 */
  if (C.zf) goto L_1023a624;
L_1023a615:;
  /* 1023a615 call 0x1023a6b3 */
  push32(0x1023a61au); f_1023a6b3();
L_1023a61a:;
  /* 1023a61a call 0x1023a6dc */
  push32(0x1023a61fu); f_1023a6dc();
  /* 1023a61f jmp 0x1023a4b0 */
  goto L_1023a4b0;
L_1023a624:;
  /* 1023a624 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_1023a627:;
  /* 1023a627 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1023a629 call 0x1023a114 */
  push32(0x1023a62eu); f_1023a114();
  /* 1023a62e pop ecx */
  ECX = (pop32());
  /* 1023a62f mov eax, esi */
  EAX = (ESI);
  /* 1023a631 pop edi */
  EDI = (pop32());
  /* 1023a632 pop esi */
  ESI = (pop32());
  /* 1023a633 pop ebx */
  EBX = (pop32());
  /* 1023a634 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023a635 ret  */
  ESPCHK(0x1023a489u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a636 @ 0x1023a636 (74 bytes, 15 insns) */
void f_1023a636(void) {
  FTRACE(0x1023a636u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023a636 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1023a63a and dword ptr [0x102467b0], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102467b0)))&(0x0u); w32((uint32_t)(0x102467b0), (_r)); fl_logic(_r,32); }
  /* 1023a641 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a644 jne 0x1023a656 */
  if (!C.zf) goto L_1023a656;
  /* 1023a646 mov dword ptr [0x102467b0], 1 */
  w32((uint32_t)(0x102467b0), (0x1u));
  /* 1023a650 jmp dword ptr [0x1023e0a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1023e0a4)))); return;
L_1023a656:;
  /* 1023a656 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a659 jne 0x1023a66b */
  if (!C.zf) goto L_1023a66b;
  /* 1023a65b mov dword ptr [0x102467b0], 1 */
  w32((uint32_t)(0x102467b0), (0x1u));
  /* 1023a665 jmp dword ptr [0x1023e0a0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1023e0a0)))); return;
L_1023a66b:;
  /* 1023a66b cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a66e jne 0x1023a67f */
  if (!C.zf) goto L_1023a67f;
  /* 1023a670 mov eax, dword ptr [0x102467e8] */
  EAX = (r32((uint32_t)(0x102467e8)));
  /* 1023a675 mov dword ptr [0x102467b0], 1 */
  w32((uint32_t)(0x102467b0), (0x1u));
L_1023a67f:;
  /* 1023a67f ret  */
  ESPCHK(0x1023a636u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a680 @ 0x1023a680 (51 bytes, 19 insns) */
void f_1023a680(void) {
  FTRACE(0x1023a680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023a680 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1023a684 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023a689 je 0x1023a6ad */
  if (C.zf) goto L_1023a6ad;
  /* 1023a68b sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023a68e je 0x1023a6a7 */
  if (C.zf) goto L_1023a6a7;
  /* 1023a690 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023a693 je 0x1023a6a1 */
  if (C.zf) goto L_1023a6a1;
  /* 1023a695 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1023a696 je 0x1023a69b */
  if (C.zf) goto L_1023a69b;
  /* 1023a698 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023a69a ret  */
  ESPCHK(0x1023a680u, _esp0);
  ESP += 4; return;
L_1023a69b:;
  /* 1023a69b mov eax, 0x404 */
  EAX = (0x404u);
  /* 1023a6a0 ret  */
  ESPCHK(0x1023a680u, _esp0);
  ESP += 4; return;
L_1023a6a1:;
  /* 1023a6a1 mov eax, 0x412 */
  EAX = (0x412u);
  /* 1023a6a6 ret  */
  ESPCHK(0x1023a680u, _esp0);
  ESP += 4; return;
L_1023a6a7:;
  /* 1023a6a7 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1023a6ac ret  */
  ESPCHK(0x1023a680u, _esp0);
  ESP += 4; return;
L_1023a6ad:;
  /* 1023a6ad mov eax, 0x411 */
  EAX = (0x411u);
  /* 1023a6b2 ret  */
  ESPCHK(0x1023a680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6b3 @ 0x1023a6b3 (41 bytes, 17 insns) */
void f_1023a6b3(void) {
  FTRACE(0x1023a6b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023a6b3 push edi */
  push32((uint32_t)(EDI));
  /* 1023a6b4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1023a6b6 pop ecx */
  ECX = (pop32());
  /* 1023a6b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023a6b9 mov edi, 0x10246aa0 */
  EDI = (0x10246aa0u);
  /* 1023a6be rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1023a6c0 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1023a6c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023a6c3 mov edi, 0x10246980 */
  EDI = (0x10246980u);
  /* 1023a6c8 mov dword ptr [0x10246974], eax */
  w32((uint32_t)(0x10246974), (EAX));
  /* 1023a6cd mov dword ptr [0x1024698c], eax */
  w32((uint32_t)(0x1024698c), (EAX));
  /* 1023a6d2 mov dword ptr [0x10246ba4], eax */
  w32((uint32_t)(0x10246ba4), (EAX));
  /* 1023a6d7 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1023a6d8 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1023a6d9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1023a6da pop edi */
  EDI = (pop32());
  /* 1023a6db ret  */
  ESPCHK(0x1023a6b3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6dc @ 0x1023a6dc (389 bytes, 124 insns) */
void f_1023a6dc(void) {
  FTRACE(0x1023a6dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023a6dc push ebp */
  push32((uint32_t)(EBP));
  /* 1023a6dd mov ebp, esp */
  EBP = (ESP);
  /* 1023a6df sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023a6e5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1023a6e8 push esi */
  push32((uint32_t)(ESI));
  /* 1023a6e9 push eax */
  push32((uint32_t)(EAX));
  /* 1023a6ea push dword ptr [0x10246974] */
  push32((uint32_t)(r32((uint32_t)(0x10246974))));
  /* 1023a6f0 call dword ptr [0x1023e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e09c))), 0x1023a6f6u);
  /* 1023a6f6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a6f9 jne 0x1023a815 */
  if (!C.zf) goto L_1023a815;
  /* 1023a6ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023a701 mov esi, 0x100 */
  ESI = (0x100u);
L_1023a706:;
  /* 1023a706 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 1023a70d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1023a70e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a710 jb 0x1023a706 */
  if (C.cf) goto L_1023a706;
  /* 1023a712 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 1023a715 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 1023a71c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023a71e je 0x1023a757 */
  if (C.zf) goto L_1023a757;
  /* 1023a720 push ebx */
  push32((uint32_t)(EBX));
  /* 1023a721 push edi */
  push32((uint32_t)(EDI));
  /* 1023a722 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_1023a725:;
  /* 1023a725 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 1023a728 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1023a72b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a72d ja 0x1023a74c */
  if ((!C.cf&&!C.zf)) goto L_1023a74c;
  /* 1023a72f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023a731 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 1023a738 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1023a739 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 1023a73e mov ebx, ecx */
  EBX = (ECX);
  /* 1023a740 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1023a743 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1023a745 mov ecx, ebx */
  ECX = (EBX);
  /* 1023a747 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1023a74a rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_1023a74c:;
  /* 1023a74c inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1023a74d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1023a74e mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 1023a751 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023a753 jne 0x1023a725 */
  if (!C.zf) goto L_1023a725;
  /* 1023a755 pop edi */
  EDI = (pop32());
  /* 1023a756 pop ebx */
  EBX = (pop32());
L_1023a757:;
  /* 1023a757 push 0 */
  push32((uint32_t)(0x0u));
  /* 1023a759 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 1023a75f push dword ptr [0x10246ba4] */
  push32((uint32_t)(r32((uint32_t)(0x10246ba4))));
  /* 1023a765 push dword ptr [0x10246974] */
  push32((uint32_t)(r32((uint32_t)(0x10246974))));
  /* 1023a76b push eax */
  push32((uint32_t)(EAX));
  /* 1023a76c lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1023a772 push esi */
  push32((uint32_t)(ESI));
  /* 1023a773 push eax */
  push32((uint32_t)(EAX));
  /* 1023a774 push 1 */
  push32((uint32_t)(0x1u));
  /* 1023a776 call 0x1023c31d */
  push32(0x1023a77bu); f_1023c31d();
  /* 1023a77b push 0 */
  push32((uint32_t)(0x0u));
  /* 1023a77d lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 1023a783 push dword ptr [0x10246974] */
  push32((uint32_t)(r32((uint32_t)(0x10246974))));
  /* 1023a789 push esi */
  push32((uint32_t)(ESI));
  /* 1023a78a push eax */
  push32((uint32_t)(EAX));
  /* 1023a78b lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1023a791 push esi */
  push32((uint32_t)(ESI));
  /* 1023a792 push eax */
  push32((uint32_t)(EAX));
  /* 1023a793 push esi */
  push32((uint32_t)(ESI));
  /* 1023a794 push dword ptr [0x10246ba4] */
  push32((uint32_t)(r32((uint32_t)(0x10246ba4))));
  /* 1023a79a call 0x1023c466 */
  push32(0x1023a79fu); f_1023c466();
  /* 1023a79f push 0 */
  push32((uint32_t)(0x0u));
  /* 1023a7a1 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 1023a7a7 push dword ptr [0x10246974] */
  push32((uint32_t)(r32((uint32_t)(0x10246974))));
  /* 1023a7ad push esi */
  push32((uint32_t)(ESI));
  /* 1023a7ae push eax */
  push32((uint32_t)(EAX));
  /* 1023a7af lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1023a7b5 push esi */
  push32((uint32_t)(ESI));
  /* 1023a7b6 push eax */
  push32((uint32_t)(EAX));
  /* 1023a7b7 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1023a7bc push dword ptr [0x10246ba4] */
  push32((uint32_t)(r32((uint32_t)(0x10246ba4))));
  /* 1023a7c2 call 0x1023c466 */
  push32(0x1023a7c7u); f_1023c466();
  /* 1023a7c7 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023a7ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023a7cc lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_1023a7d2:;
  /* 1023a7d2 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1023a7d5 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1023a7d8 je 0x1023a7f0 */
  if (C.zf) goto L_1023a7f0;
  /* 1023a7da or byte ptr [eax + 0x10246aa1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10246aa1)))|(0x10u); w8((uint32_t)(EAX + 0x10246aa1), (_r)); fl_logic(_r,8); }
  /* 1023a7e1 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_1023a7e8:;
  /* 1023a7e8 mov byte ptr [eax + 0x102469a0], dl */
  w8((uint32_t)(EAX + 0x102469a0), (DL));
  /* 1023a7ee jmp 0x1023a80c */
  goto L_1023a80c;
L_1023a7f0:;
  /* 1023a7f0 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 1023a7f3 je 0x1023a805 */
  if (C.zf) goto L_1023a805;
  /* 1023a7f5 or byte ptr [eax + 0x10246aa1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10246aa1)))|(0x20u); w8((uint32_t)(EAX + 0x10246aa1), (_r)); fl_logic(_r,8); }
  /* 1023a7fc mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 1023a803 jmp 0x1023a7e8 */
  goto L_1023a7e8;
L_1023a805:;
  /* 1023a805 and byte ptr [eax + 0x102469a0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102469a0)))&(0x0u); w8((uint32_t)(EAX + 0x102469a0), (_r)); fl_logic(_r,8); }
L_1023a80c:;
  /* 1023a80c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1023a80d inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1023a80e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1023a80f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a811 jb 0x1023a7d2 */
  if (C.cf) goto L_1023a7d2;
  /* 1023a813 jmp 0x1023a85e */
  goto L_1023a85e;
L_1023a815:;
  /* 1023a815 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023a817 mov esi, 0x100 */
  ESI = (0x100u);
L_1023a81c:;
  /* 1023a81c cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a81f jb 0x1023a83a */
  if (C.cf) goto L_1023a83a;
  /* 1023a821 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a824 ja 0x1023a83a */
  if ((!C.cf&&!C.zf)) goto L_1023a83a;
  /* 1023a826 or byte ptr [eax + 0x10246aa1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10246aa1)))|(0x10u); w8((uint32_t)(EAX + 0x10246aa1), (_r)); fl_logic(_r,8); }
  /* 1023a82d mov cl, al */
  CL = (AL);
  /* 1023a82f add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_1023a832:;
  /* 1023a832 mov byte ptr [eax + 0x102469a0], cl */
  w8((uint32_t)(EAX + 0x102469a0), (CL));
  /* 1023a838 jmp 0x1023a859 */
  goto L_1023a859;
L_1023a83a:;
  /* 1023a83a cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a83d jb 0x1023a852 */
  if (C.cf) goto L_1023a852;
  /* 1023a83f cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a842 ja 0x1023a852 */
  if ((!C.cf&&!C.zf)) goto L_1023a852;
  /* 1023a844 or byte ptr [eax + 0x10246aa1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10246aa1)))|(0x20u); w8((uint32_t)(EAX + 0x10246aa1), (_r)); fl_logic(_r,8); }
  /* 1023a84b mov cl, al */
  CL = (AL);
  /* 1023a84d sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1023a850 jmp 0x1023a832 */
  goto L_1023a832;
L_1023a852:;
  /* 1023a852 and byte ptr [eax + 0x102469a0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102469a0)))&(0x0u); w8((uint32_t)(EAX + 0x102469a0), (_r)); fl_logic(_r,8); }
L_1023a859:;
  /* 1023a859 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1023a85a cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a85c jb 0x1023a81c */
  if (C.cf) goto L_1023a81c;
L_1023a85e:;
  /* 1023a85e pop esi */
  ESI = (pop32());
  /* 1023a85f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023a860 ret  */
  ESPCHK(0x1023a6dcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a861 @ 0x1023a861 (28 bytes, 7 insns) */
void f_1023a861(void) {
  FTRACE(0x1023a861u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023a861 cmp dword ptr [0x10247ce8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10247ce8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a868 jne 0x1023a87c */
  if (!C.zf) goto L_1023a87c;
  /* 1023a86a push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1023a86c call 0x1023a489 */
  push32(0x1023a871u); f_1023a489();
  /* 1023a871 pop ecx */
  ECX = (pop32());
  /* 1023a872 mov dword ptr [0x10247ce8], 1 */
  w32((uint32_t)(0x10247ce8), (0x1u));
L_1023a87c:;
  /* 1023a87c ret  */
  ESPCHK(0x1023a861u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a880 @ 0x1023a880 (664 bytes, 266 insns) [15 switch table(s)] */
void f_1023a880(void) {
  FTRACE(0x1023a880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023a880 push ebp */
  push32((uint32_t)(EBP));
  /* 1023a881 mov ebp, esp */
  EBP = (ESP);
  /* 1023a883 push edi */
  push32((uint32_t)(EDI));
  /* 1023a884 push esi */
  push32((uint32_t)(ESI));
  /* 1023a885 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1023a888 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1023a88b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1023a88e mov eax, ecx */
  EAX = (ECX);
  /* 1023a890 mov edx, ecx */
  EDX = (ECX);
  /* 1023a892 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023a894 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a896 jbe 0x1023a8a0 */
  if ((C.cf||C.zf)) goto L_1023a8a0;
  /* 1023a898 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a89a jb 0x1023aa18 */
  if (C.cf) goto L_1023aa18;
L_1023a8a0:;
  /* 1023a8a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1023a8a6 jne 0x1023a8bc */
  if (!C.zf) goto L_1023a8bc;
  /* 1023a8a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1023a8ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1023a8ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a8b1 jb 0x1023a8dc */
  if (C.cf) goto L_1023a8dc;
  /* 1023a8b3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1023a8b5 jmp dword ptr [edx*4 + 0x1023a9c8] */
  switch (EDX) {
    case 0: goto L_1023a9d8;
    case 1: goto L_1023a9e0;
    case 2: goto L_1023a9ec;
    case 3: goto L_1023aa00;
    default: x86_unimpl("switch@0x1023a8b5 out of table"); return;
  }
L_1023a8bc:;
  /* 1023a8bc mov eax, edi */
  EAX = (EDI);
  /* 1023a8be mov edx, 3 */
  EDX = (0x3u);
  /* 1023a8c3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023a8c6 jb 0x1023a8d4 */
  if (C.cf) goto L_1023a8d4;
  /* 1023a8c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1023a8cb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023a8cd jmp dword ptr [eax*4 + 0x1023a8e0] */
  switch (EAX) {
    case 1: goto L_1023a8f0;
    case 2: goto L_1023a91c;
    case 3: goto L_1023a940;
    default: x86_unimpl("switch@0x1023a8cd out of table"); return;
  }
L_1023a8d4:;
  /* 1023a8d4 jmp dword ptr [ecx*4 + 0x1023a9d8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1023a9d8)))); return;
  /* 1023a8db nop  */
  /* nop */
L_1023a8dc:;
  /* 1023a8dc jmp dword ptr [ecx*4 + 0x1023a95c] */
  switch (ECX) {
    case 0: goto L_1023a9bf;
    case 1: goto L_1023a9ac;
    case 2: goto L_1023a9a4;
    case 3: goto L_1023a99c;
    case 4: goto L_1023a994;
    case 5: goto L_1023a98c;
    case 6: goto L_1023a984;
    case 7: goto L_1023a97c;
    default: x86_unimpl("switch@0x1023a8dc out of table"); return;
  }
  /* 1023a8e3 nop  */
  /* nop */
L_1023a8f0:;
  /* 1023a8f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1023a8f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1023a8f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1023a8f6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1023a8f9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1023a8fc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1023a8ff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1023a902 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1023a905 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023a908 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023a90b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a90e jb 0x1023a8dc */
  if (C.cf) goto L_1023a8dc;
  /* 1023a910 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1023a912 jmp dword ptr [edx*4 + 0x1023a9c8] */
  switch (EDX) {
    case 0: goto L_1023a9d8;
    case 1: goto L_1023a9e0;
    case 2: goto L_1023a9ec;
    case 3: goto L_1023aa00;
    default: x86_unimpl("switch@0x1023a912 out of table"); return;
  }
  /* 1023a919 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1023a91c:;
  /* 1023a91c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1023a91e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1023a920 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1023a922 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1023a925 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1023a928 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1023a92b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023a92e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023a931 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a934 jb 0x1023a8dc */
  if (C.cf) goto L_1023a8dc;
  /* 1023a936 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1023a938 jmp dword ptr [edx*4 + 0x1023a9c8] */
  switch (EDX) {
    case 0: goto L_1023a9d8;
    case 1: goto L_1023a9e0;
    case 2: goto L_1023a9ec;
    case 3: goto L_1023aa00;
    default: x86_unimpl("switch@0x1023a938 out of table"); return;
  }
  /* 1023a93f nop  */
  /* nop */
L_1023a940:;
  /* 1023a940 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1023a942 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1023a944 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1023a946 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1023a947 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1023a94a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1023a94b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023a94e jb 0x1023a8dc */
  if (C.cf) goto L_1023a8dc;
  /* 1023a950 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1023a952 jmp dword ptr [edx*4 + 0x1023a9c8] */
  switch (EDX) {
    case 0: goto L_1023a9d8;
    case 1: goto L_1023a9e0;
    case 2: goto L_1023a9ec;
    case 3: goto L_1023aa00;
    default: x86_unimpl("switch@0x1023a952 out of table"); return;
  }
  /* 1023a959 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1023a97c:;
  /* 1023a97c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1023a980 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1023a984:;
  /* 1023a984 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1023a988 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1023a98c:;
  /* 1023a98c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1023a990 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1023a994:;
  /* 1023a994 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1023a998 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1023a99c:;
  /* 1023a99c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1023a9a0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1023a9a4:;
  /* 1023a9a4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1023a9a8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1023a9ac:;
  /* 1023a9ac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1023a9b0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1023a9b4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1023a9bb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023a9bd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1023a9bf:;
  /* 1023a9bf jmp dword ptr [edx*4 + 0x1023a9c8] */
  switch (EDX) {
    case 0: goto L_1023a9d8;
    case 1: goto L_1023a9e0;
    case 2: goto L_1023a9ec;
    case 3: goto L_1023aa00;
    default: x86_unimpl("switch@0x1023a9bf out of table"); return;
  }
  /* 1023a9c6 mov edi, edi */
  EDI = (EDI);
L_1023a9d8:;
  /* 1023a9d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023a9db pop esi */
  ESI = (pop32());
  /* 1023a9dc pop edi */
  EDI = (pop32());
  /* 1023a9dd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023a9de ret  */
  ESPCHK(0x1023a880u, _esp0);
  ESP += 4; return;
  /* 1023a9df nop  */
  /* nop */
L_1023a9e0:;
  /* 1023a9e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1023a9e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1023a9e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023a9e7 pop esi */
  ESI = (pop32());
  /* 1023a9e8 pop edi */
  EDI = (pop32());
  /* 1023a9e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023a9ea ret  */
  ESPCHK(0x1023a880u, _esp0);
  ESP += 4; return;
  /* 1023a9eb nop  */
  /* nop */
L_1023a9ec:;
  /* 1023a9ec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1023a9ee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1023a9f0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1023a9f3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1023a9f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023a9f9 pop esi */
  ESI = (pop32());
  /* 1023a9fa pop edi */
  EDI = (pop32());
  /* 1023a9fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023a9fc ret  */
  ESPCHK(0x1023a880u, _esp0);
  ESP += 4; return;
  /* 1023a9fd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1023aa00:;
  /* 1023aa00 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1023aa02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1023aa04 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1023aa07 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1023aa0a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1023aa0d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1023aa10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023aa13 pop esi */
  ESI = (pop32());
  /* 1023aa14 pop edi */
  EDI = (pop32());
  /* 1023aa15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023aa16 ret  */
  ESPCHK(0x1023a880u, _esp0);
  ESP += 4; return;
  /* 1023aa17 nop  */
  /* nop */
L_1023aa18:;
  /* 1023aa18 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1023aa1c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1023aa20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1023aa26 jne 0x1023aa4c */
  if (!C.zf) goto L_1023aa4c;
  /* 1023aa28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1023aa2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1023aa2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023aa31 jb 0x1023aa40 */
  if (C.cf) goto L_1023aa40;
  /* 1023aa33 std  */
  C.df=1;
  /* 1023aa34 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1023aa36 cld  */
  C.df=0;
  /* 1023aa37 jmp dword ptr [edx*4 + 0x1023ab60] */
  switch (EDX) {
    case 0: goto L_1023ab70;
    case 1: goto L_1023ab78;
    case 2: goto L_1023ab88;
    case 3: goto L_1023ab9c;
    default: x86_unimpl("switch@0x1023aa37 out of table"); return;
  }
  /* 1023aa3e mov edi, edi */
  EDI = (EDI);
L_1023aa40:;
  /* 1023aa40 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1023aa42 jmp dword ptr [ecx*4 + 0x1023ab10] */
  switch (ECX) {
    case 0: goto L_1023ab57;
    default: x86_unimpl("switch@0x1023aa42 out of table"); return;
  }
  /* 1023aa49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1023aa4c:;
  /* 1023aa4c mov eax, edi */
  EAX = (EDI);
  /* 1023aa4e mov edx, 3 */
  EDX = (0x3u);
  /* 1023aa53 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023aa56 jb 0x1023aa64 */
  if (C.cf) goto L_1023aa64;
  /* 1023aa58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1023aa5b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023aa5d jmp dword ptr [eax*4 + 0x1023aa68] */
  switch (EAX) {
    case 1: goto L_1023aa78;
    case 2: goto L_1023aa98;
    case 3: goto L_1023aac0;
    default: x86_unimpl("switch@0x1023aa5d out of table"); return;
  }
L_1023aa64:;
  /* 1023aa64 jmp dword ptr [ecx*4 + 0x1023ab60] */
  switch (ECX) {
    case 0: goto L_1023ab70;
    case 1: goto L_1023ab78;
    case 2: goto L_1023ab88;
    case 3: goto L_1023ab9c;
    default: x86_unimpl("switch@0x1023aa64 out of table"); return;
  }
  /* 1023aa6b nop  */
  /* nop */
L_1023aa78:;
  /* 1023aa78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1023aa7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1023aa7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1023aa80 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1023aa81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1023aa84 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1023aa85 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023aa88 jb 0x1023aa40 */
  if (C.cf) goto L_1023aa40;
  /* 1023aa8a std  */
  C.df=1;
  /* 1023aa8b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1023aa8d cld  */
  C.df=0;
  /* 1023aa8e jmp dword ptr [edx*4 + 0x1023ab60] */
  switch (EDX) {
    case 0: goto L_1023ab70;
    case 1: goto L_1023ab78;
    case 2: goto L_1023ab88;
    case 3: goto L_1023ab9c;
    default: x86_unimpl("switch@0x1023aa8e out of table"); return;
  }
  /* 1023aa95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1023aa98:;
  /* 1023aa98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1023aa9b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1023aa9d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1023aaa0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1023aaa3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1023aaa6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1023aaa9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023aaac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023aaaf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023aab2 jb 0x1023aa40 */
  if (C.cf) goto L_1023aa40;
  /* 1023aab4 std  */
  C.df=1;
  /* 1023aab5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1023aab7 cld  */
  C.df=0;
  /* 1023aab8 jmp dword ptr [edx*4 + 0x1023ab60] */
  switch (EDX) {
    case 0: goto L_1023ab70;
    case 1: goto L_1023ab78;
    case 2: goto L_1023ab88;
    case 3: goto L_1023ab9c;
    default: x86_unimpl("switch@0x1023aab8 out of table"); return;
  }
  /* 1023aabf nop  */
  /* nop */
L_1023aac0:;
  /* 1023aac0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1023aac3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1023aac5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1023aac8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1023aacb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1023aace mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1023aad1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1023aad4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1023aad7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023aada sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023aadd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023aae0 jb 0x1023aa40 */
  if (C.cf) goto L_1023aa40;
  /* 1023aae6 std  */
  C.df=1;
  /* 1023aae7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1023aae9 cld  */
  C.df=0;
  /* 1023aaea jmp dword ptr [edx*4 + 0x1023ab60] */
  switch (EDX) {
    case 0: goto L_1023ab70;
    case 1: goto L_1023ab78;
    case 2: goto L_1023ab88;
    case 3: goto L_1023ab9c;
    default: x86_unimpl("switch@0x1023aaea out of table"); return;
  }
  /* 1023aaf1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1023aaf4 adc al, 0xab */
  { uint32_t _a=(AL),_b=(0xabu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1023aaf6 and edx, dword ptr [eax] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EAX))); EDX = (_r); fl_logic(_r,32); }
  /* 1023aaf8 sbb al, 0xab */
  { uint32_t _a=(AL),_b=(0xabu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1023aafa and edx, dword ptr [eax] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EAX))); EDX = (_r); fl_logic(_r,32); }
  /* 1023aafc and al, 0xab */
  { uint32_t _r=(AL)&(0xabu); AL = (_r); fl_logic(_r,8); }
  /* 1023aafe and edx, dword ptr [eax] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EAX))); EDX = (_r); fl_logic(_r,32); }
  /* 1023ab00 sub al, 0xab */
  { uint32_t _a=(AL),_b=(0xabu),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1023ab02 and edx, dword ptr [eax] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EAX))); EDX = (_r); fl_logic(_r,32); }
  /* 1023ab04 xor al, 0xab */
  { uint32_t _r=(AL)^(0xabu); AL = (_r); fl_logic(_r,8); }
  /* 1023ab06 and edx, dword ptr [eax] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EAX))); EDX = (_r); fl_logic(_r,32); }
  /* 1023ab08 cmp al, 0xab */
  { uint32_t _a=(AL),_b=(0xabu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023ab0a and edx, dword ptr [eax] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EAX))); EDX = (_r); fl_logic(_r,32); }
  /* 1023ab0c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1023ab0d stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1023ab0e and edx, dword ptr [eax] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EAX))); EDX = (_r); fl_logic(_r,32); }
  /* 1023ab14 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1023ab18 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1023ab1c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1023ab20 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1023ab24 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1023ab28 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1023ab2c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1023ab30 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1023ab34 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1023ab38 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1023ab3c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1023ab40 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1023ab44 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1023ab48 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1023ab4c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1023ab53 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023ab55 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1023ab57:;
  /* 1023ab57 jmp dword ptr [edx*4 + 0x1023ab60] */
  switch (EDX) {
    case 0: goto L_1023ab70;
    case 1: goto L_1023ab78;
    case 2: goto L_1023ab88;
    case 3: goto L_1023ab9c;
    default: x86_unimpl("switch@0x1023ab57 out of table"); return;
  }
  /* 1023ab5e mov edi, edi */
  EDI = (EDI);
L_1023ab70:;
  /* 1023ab70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023ab73 pop esi */
  ESI = (pop32());
  /* 1023ab74 pop edi */
  EDI = (pop32());
  /* 1023ab75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023ab76 ret  */
  ESPCHK(0x1023a880u, _esp0);
  ESP += 4; return;
  /* 1023ab77 nop  */
  /* nop */
L_1023ab78:;
  /* 1023ab78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1023ab7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1023ab7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023ab81 pop esi */
  ESI = (pop32());
  /* 1023ab82 pop edi */
  EDI = (pop32());
  /* 1023ab83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023ab84 ret  */
  ESPCHK(0x1023a880u, _esp0);
  ESP += 4; return;
  /* 1023ab85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1023ab88:;
  /* 1023ab88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1023ab8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1023ab8e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1023ab91 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1023ab94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023ab97 pop esi */
  ESI = (pop32());
  /* 1023ab98 pop edi */
  EDI = (pop32());
  /* 1023ab99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023ab9a ret  */
  ESPCHK(0x1023a880u, _esp0);
  ESP += 4; return;
  /* 1023ab9b nop  */
  /* nop */
L_1023ab9c:;
  /* 1023ab9c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1023ab9f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1023aba2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1023aba5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1023aba8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1023abab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1023abae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023abb1 pop esi */
  ESI = (pop32());
  /* 1023abb2 pop edi */
  EDI = (pop32());
  /* 1023abb3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023abb4 ret  */
  ESPCHK(0x1023a880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abb5 @ 0x1023abb5 (23 bytes, 7 insns) */
void f_1023abb5(void) {
  FTRACE(0x1023abb5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023abb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1023abb7 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1023abbb push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1023abbf push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1023abc3 call 0x1023abcc */
  push32(0x1023abc8u); f_1023abcc();
  /* 1023abc8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023abcb ret  */
  ESPCHK(0x1023abb5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abcc @ 0x1023abcc (517 bytes, 195 insns) */
void f_1023abcc(void) {
  FTRACE(0x1023abccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023abcc push ebp */
  push32((uint32_t)(EBP));
  /* 1023abcd mov ebp, esp */
  EBP = (ESP);
  /* 1023abcf sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023abd2 push ebx */
  push32((uint32_t)(EBX));
  /* 1023abd3 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1023abd7 push esi */
  push32((uint32_t)(ESI));
  /* 1023abd8 push edi */
  push32((uint32_t)(EDI));
  /* 1023abd9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1023abdc mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1023abde lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 1023abe1 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1023abe4:;
  /* 1023abe4 cmp dword ptr [0x10240b80], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10240b80))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023abeb jle 0x1023abfc */
  if ((C.zf||C.sf!=C.of)) goto L_1023abfc;
  /* 1023abed movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1023abf0 push 8 */
  push32((uint32_t)(0x8u));
  /* 1023abf2 push eax */
  push32((uint32_t)(EAX));
  /* 1023abf3 call 0x1023946b */
  push32(0x1023abf8u); f_1023946b();
  /* 1023abf8 pop ecx */
  ECX = (pop32());
  /* 1023abf9 pop ecx */
  ECX = (pop32());
  /* 1023abfa jmp 0x1023ac0b */
  goto L_1023ac0b;
L_1023abfc:;
  /* 1023abfc mov ecx, dword ptr [0x10240970] */
  ECX = (r32((uint32_t)(0x10240970)));
  /* 1023ac02 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1023ac05 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1023ac08 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_1023ac0b:;
  /* 1023ac0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023ac0d je 0x1023ac14 */
  if (C.zf) goto L_1023ac14;
  /* 1023ac0f mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 1023ac11 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1023ac12 jmp 0x1023abe4 */
  goto L_1023abe4;
L_1023ac14:;
  /* 1023ac14 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023ac17 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 1023ac1a jne 0x1023ac22 */
  if (!C.zf) goto L_1023ac22;
  /* 1023ac1c or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1023ac20 jmp 0x1023ac27 */
  goto L_1023ac27;
L_1023ac22:;
  /* 1023ac22 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023ac25 jne 0x1023ac2d */
  if (!C.zf) goto L_1023ac2d;
L_1023ac27:;
  /* 1023ac27 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 1023ac29 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1023ac2a mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1023ac2d:;
  /* 1023ac2d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1023ac30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023ac32 jl 0x1023adc1 */
  if ((C.sf!=C.of)) goto L_1023adc1;
  /* 1023ac38 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023ac3b je 0x1023adc1 */
  if (C.zf) goto L_1023adc1;
  /* 1023ac41 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023ac44 jg 0x1023adc1 */
  if ((!C.zf&&C.sf==C.of)) goto L_1023adc1;
  /* 1023ac4a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1023ac4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023ac4e pop ecx */
  ECX = (pop32());
  /* 1023ac4f jne 0x1023ac75 */
  if (!C.zf) goto L_1023ac75;
  /* 1023ac51 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023ac54 je 0x1023ac5f */
  if (C.zf) goto L_1023ac5f;
  /* 1023ac56 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 1023ac5d jmp 0x1023ac91 */
  goto L_1023ac91;
L_1023ac5f:;
  /* 1023ac5f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1023ac61 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023ac63 je 0x1023ac72 */
  if (C.zf) goto L_1023ac72;
  /* 1023ac65 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023ac67 je 0x1023ac72 */
  if (C.zf) goto L_1023ac72;
  /* 1023ac69 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 1023ac70 jmp 0x1023ac91 */
  goto L_1023ac91;
L_1023ac72:;
  /* 1023ac72 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1023ac75:;
  /* 1023ac75 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023ac78 jne 0x1023ac91 */
  if (!C.zf) goto L_1023ac91;
  /* 1023ac7a cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023ac7d jne 0x1023ac91 */
  if (!C.zf) goto L_1023ac91;
  /* 1023ac7f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1023ac81 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023ac83 je 0x1023ac89 */
  if (C.zf) goto L_1023ac89;
  /* 1023ac85 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023ac87 jne 0x1023ac91 */
  if (!C.zf) goto L_1023ac91;
L_1023ac89:;
  /* 1023ac89 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 1023ac8c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1023ac8d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1023ac8e mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1023ac91:;
  /* 1023ac91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1023ac94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1023ac96 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1023ac99 mov edi, 0x103 */
  EDI = (0x103u);
  /* 1023ac9e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1023aca1:;
  /* 1023aca1 cmp dword ptr [0x10240b80], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10240b80))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023aca8 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1023acab jle 0x1023acb9 */
  if ((C.zf||C.sf!=C.of)) goto L_1023acb9;
  /* 1023acad push 4 */
  push32((uint32_t)(0x4u));
  /* 1023acaf push esi */
  push32((uint32_t)(ESI));
  /* 1023acb0 call 0x1023946b */
  push32(0x1023acb5u); f_1023946b();
  /* 1023acb5 pop ecx */
  ECX = (pop32());
  /* 1023acb6 pop ecx */
  ECX = (pop32());
  /* 1023acb7 jmp 0x1023acc4 */
  goto L_1023acc4;
L_1023acb9:;
  /* 1023acb9 mov eax, dword ptr [0x10240970] */
  EAX = (r32((uint32_t)(0x10240970)));
  /* 1023acbe mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 1023acc1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1023acc4:;
  /* 1023acc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023acc6 je 0x1023acd0 */
  if (C.zf) goto L_1023acd0;
  /* 1023acc8 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1023accb sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023acce jmp 0x1023ad02 */
  goto L_1023ad02;
L_1023acd0:;
  /* 1023acd0 cmp dword ptr [0x10240b80], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10240b80))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023acd7 jle 0x1023ace4 */
  if ((C.zf||C.sf!=C.of)) goto L_1023ace4;
  /* 1023acd9 push edi */
  push32((uint32_t)(EDI));
  /* 1023acda push esi */
  push32((uint32_t)(ESI));
  /* 1023acdb call 0x1023946b */
  push32(0x1023ace0u); f_1023946b();
  /* 1023ace0 pop ecx */
  ECX = (pop32());
  /* 1023ace1 pop ecx */
  ECX = (pop32());
  /* 1023ace2 jmp 0x1023acef */
  goto L_1023acef;
L_1023ace4:;
  /* 1023ace4 mov eax, dword ptr [0x10240970] */
  EAX = (r32((uint32_t)(0x10240970)));
  /* 1023ace9 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 1023aced and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_1023acef:;
  /* 1023acef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023acf1 je 0x1023ad3d */
  if (C.zf) goto L_1023ad3d;
  /* 1023acf3 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1023acf6 push eax */
  push32((uint32_t)(EAX));
  /* 1023acf7 call 0x1023d1a8 */
  push32(0x1023acfcu); f_1023d1a8();
  /* 1023acfc pop ecx */
  ECX = (pop32());
  /* 1023acfd mov ecx, eax */
  ECX = (EAX);
  /* 1023acff sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_1023ad02:;
  /* 1023ad02 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023ad05 jae 0x1023ad3d */
  if (!C.cf) goto L_1023ad3d;
  /* 1023ad07 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 1023ad0a or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1023ad0e cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023ad11 jb 0x1023ad27 */
  if (C.cf) goto L_1023ad27;
  /* 1023ad13 jne 0x1023ad21 */
  if (!C.zf) goto L_1023ad21;
  /* 1023ad15 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1023ad18 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1023ad1a div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1023ad1d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023ad1f jbe 0x1023ad27 */
  if ((C.cf||C.zf)) goto L_1023ad27;
L_1023ad21:;
  /* 1023ad21 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1023ad25 jmp 0x1023ad30 */
  goto L_1023ad30;
L_1023ad27:;
  /* 1023ad27 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1023ad2b add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023ad2d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_1023ad30:;
  /* 1023ad30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1023ad33 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1023ad36 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1023ad38 jmp 0x1023aca1 */
  goto L_1023aca1;
L_1023ad3d:;
  /* 1023ad3d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1023ad40 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1023ad43 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1023ad46 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1023ad48 jne 0x1023ad5a */
  if (!C.zf) goto L_1023ad5a;
  /* 1023ad4a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1023ad4c je 0x1023ad54 */
  if (C.zf) goto L_1023ad54;
  /* 1023ad4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023ad51 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1023ad54:;
  /* 1023ad54 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1023ad58 jmp 0x1023ada5 */
  goto L_1023ada5;
L_1023ad5a:;
  /* 1023ad5a test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 1023ad5c mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 1023ad61 jne 0x1023ad7e */
  if (!C.zf) goto L_1023ad7e;
  /* 1023ad63 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 1023ad65 jne 0x1023ada5 */
  if (!C.zf) goto L_1023ada5;
  /* 1023ad67 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1023ad6a je 0x1023ad75 */
  if (C.zf) goto L_1023ad75;
  /* 1023ad6c cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023ad73 ja 0x1023ad7e */
  if ((!C.cf&&!C.zf)) goto L_1023ad7e;
L_1023ad75:;
  /* 1023ad75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023ad77 jne 0x1023ada5 */
  if (!C.zf) goto L_1023ada5;
  /* 1023ad79 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023ad7c jbe 0x1023ada5 */
  if ((C.cf||C.zf)) goto L_1023ada5;
L_1023ad7e:;
  /* 1023ad7e call 0x1023c011 */
  push32(0x1023ad83u); f_1023c011();
  /* 1023ad83 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 1023ad87 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 1023ad8d je 0x1023ad95 */
  if (C.zf) goto L_1023ad95;
  /* 1023ad8f or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1023ad93 jmp 0x1023ada5 */
  goto L_1023ada5;
L_1023ad95:;
  /* 1023ad95 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1023ad98 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1023ad9a neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 1023ad9c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023ad9e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1023ada0 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023ada2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1023ada5:;
  /* 1023ada5 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1023ada7 je 0x1023adae */
  if (C.zf) goto L_1023adae;
  /* 1023ada9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1023adac mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_1023adae:;
  /* 1023adae test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 1023adb2 je 0x1023adbc */
  if (C.zf) goto L_1023adbc;
  /* 1023adb4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1023adb7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1023adb9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1023adbc:;
  /* 1023adbc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1023adbf jmp 0x1023adcc */
  goto L_1023adcc;
L_1023adc1:;
  /* 1023adc1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1023adc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023adc6 je 0x1023adca */
  if (C.zf) goto L_1023adca;
  /* 1023adc8 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_1023adca:;
  /* 1023adca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1023adcc:;
  /* 1023adcc pop edi */
  EDI = (pop32());
  /* 1023adcd pop esi */
  ESI = (pop32());
  /* 1023adce pop ebx */
  EBX = (pop32());
  /* 1023adcf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023add0 ret  */
  ESPCHK(0x1023abccu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x1023adf0 (193 bytes, 90 insns) */
void f_1023adf0(void) {
  FTRACE(0x1023adf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023adf0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023adf2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1023adf6 push ebx */
  push32((uint32_t)(EBX));
  /* 1023adf7 mov ebx, eax */
  EBX = (EAX);
  /* 1023adf9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1023adfc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1023ae00 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1023ae06 je 0x1023ae1b */
  if (C.zf) goto L_1023ae1b;
L_1023ae08:;
  /* 1023ae08 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1023ae0a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1023ae0b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023ae0d je 0x1023ade0 */
  if (C.zf) { jmp_ind(0x1023ade0u); return; }
  /* 1023ae0f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 1023ae11 je 0x1023ae64 */
  if (C.zf) goto L_1023ae64;
  /* 1023ae13 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1023ae19 jne 0x1023ae08 */
  if (!C.zf) goto L_1023ae08;
L_1023ae1b:;
  /* 1023ae1b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1023ae1d push edi */
  push32((uint32_t)(EDI));
  /* 1023ae1e mov eax, ebx */
  EAX = (EBX);
  /* 1023ae20 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 1023ae23 push esi */
  push32((uint32_t)(ESI));
  /* 1023ae24 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_1023ae26:;
  /* 1023ae26 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1023ae28 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1023ae2d mov eax, ecx */
  EAX = (ECX);
  /* 1023ae2f mov esi, edi */
  ESI = (EDI);
  /* 1023ae31 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 1023ae33 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023ae35 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023ae37 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1023ae3a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1023ae3d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1023ae3f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1023ae41 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023ae44 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1023ae4a jne 0x1023ae68 */
  if (!C.zf) goto L_1023ae68;
  /* 1023ae4c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1023ae51 je 0x1023ae26 */
  if (C.zf) goto L_1023ae26;
  /* 1023ae53 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1023ae58 jne 0x1023ae62 */
  if (!C.zf) goto L_1023ae62;
  /* 1023ae5a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 1023ae60 jne 0x1023ae26 */
  if (!C.zf) goto L_1023ae26;
L_1023ae62:;
  /* 1023ae62 pop esi */
  ESI = (pop32());
  /* 1023ae63 pop edi */
  EDI = (pop32());
L_1023ae64:;
  /* 1023ae64 pop ebx */
  EBX = (pop32());
  /* 1023ae65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023ae67 ret  */
  ESPCHK(0x1023adf0u, _esp0);
  ESP += 4; return;
L_1023ae68:;
  /* 1023ae68 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1023ae6b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023ae6d je 0x1023aea5 */
  if (C.zf) goto L_1023aea5;
  /* 1023ae6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023ae71 je 0x1023ae62 */
  if (C.zf) goto L_1023ae62;
  /* 1023ae73 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023ae75 je 0x1023ae9e */
  if (C.zf) goto L_1023ae9e;
  /* 1023ae77 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1023ae79 je 0x1023ae62 */
  if (C.zf) goto L_1023ae62;
  /* 1023ae7b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1023ae7e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023ae80 je 0x1023ae97 */
  if (C.zf) goto L_1023ae97;
  /* 1023ae82 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023ae84 je 0x1023ae62 */
  if (C.zf) goto L_1023ae62;
  /* 1023ae86 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023ae88 je 0x1023ae90 */
  if (C.zf) goto L_1023ae90;
  /* 1023ae8a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1023ae8c je 0x1023ae62 */
  if (C.zf) goto L_1023ae62;
  /* 1023ae8e jmp 0x1023ae26 */
  goto L_1023ae26;
L_1023ae90:;
  /* 1023ae90 pop esi */
  ESI = (pop32());
  /* 1023ae91 pop edi */
  EDI = (pop32());
  /* 1023ae92 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 1023ae95 pop ebx */
  EBX = (pop32());
  /* 1023ae96 ret  */
  ESPCHK(0x1023adf0u, _esp0);
  ESP += 4; return;
L_1023ae97:;
  /* 1023ae97 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1023ae9a pop esi */
  ESI = (pop32());
  /* 1023ae9b pop edi */
  EDI = (pop32());
  /* 1023ae9c pop ebx */
  EBX = (pop32());
  /* 1023ae9d ret  */
  ESPCHK(0x1023adf0u, _esp0);
  ESP += 4; return;
L_1023ae9e:;
  /* 1023ae9e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 1023aea1 pop esi */
  ESI = (pop32());
  /* 1023aea2 pop edi */
  EDI = (pop32());
  /* 1023aea3 pop ebx */
  EBX = (pop32());
  /* 1023aea4 ret  */
  ESPCHK(0x1023adf0u, _esp0);
  ESP += 4; return;
L_1023aea5:;
  /* 1023aea5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 1023aea8 pop esi */
  ESI = (pop32());
  /* 1023aea9 pop edi */
  EDI = (pop32());
  /* 1023aeaa pop ebx */
  EBX = (pop32());
  /* 1023aeab ret  */
  ESPCHK(0x1023adf0u, _esp0);
  ESP += 4; return;
  /* 1023aeac int3  */
  x86_unimpl("int3 @ 0x1023aeac");
  /* 1023aead int3  */
  x86_unimpl("int3 @ 0x1023aead");
  /* 1023aeae int3  */
  x86_unimpl("int3 @ 0x1023aeae");
  /* 1023aeaf int3  */
  x86_unimpl("int3 @ 0x1023aeaf");
}

/* _strstr @ 0x1023aeb0 (128 bytes, 66 insns) */
void f_1023aeb0(void) {
  FTRACE(0x1023aeb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023aeb0 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1023aeb4 push edi */
  push32((uint32_t)(EDI));
  /* 1023aeb5 push ebx */
  push32((uint32_t)(EBX));
  /* 1023aeb6 push esi */
  push32((uint32_t)(ESI));
  /* 1023aeb7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1023aeb9 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1023aebd test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1023aebf je 0x1023af2a */
  if (C.zf) goto L_1023af2a;
  /* 1023aec1 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 1023aec4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1023aec6 je 0x1023af17 */
  if (C.zf) goto L_1023af17;
L_1023aec8:;
  /* 1023aec8 mov esi, edi */
  ESI = (EDI);
  /* 1023aeca mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1023aece mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1023aed0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1023aed1 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023aed3 je 0x1023aeea */
  if (C.zf) goto L_1023aeea;
  /* 1023aed5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023aed7 je 0x1023aee4 */
  if (C.zf) goto L_1023aee4;
L_1023aed9:;
  /* 1023aed9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1023aedb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1023aedc:;
  /* 1023aedc cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023aede je 0x1023aeea */
  if (C.zf) goto L_1023aeea;
  /* 1023aee0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023aee2 jne 0x1023aed9 */
  if (!C.zf) goto L_1023aed9;
L_1023aee4:;
  /* 1023aee4 pop esi */
  ESI = (pop32());
  /* 1023aee5 pop ebx */
  EBX = (pop32());
  /* 1023aee6 pop edi */
  EDI = (pop32());
  /* 1023aee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023aee9 ret  */
  ESPCHK(0x1023aeb0u, _esp0);
  ESP += 4; return;
L_1023aeea:;
  /* 1023aeea mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1023aeec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1023aeed cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023aeef jne 0x1023aedc */
  if (!C.zf) goto L_1023aedc;
  /* 1023aef1 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_1023aef4:;
  /* 1023aef4 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 1023aef7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1023aef9 je 0x1023af23 */
  if (C.zf) goto L_1023af23;
  /* 1023aefb mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1023aefd add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023af00 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023af02 jne 0x1023aec8 */
  if (!C.zf) goto L_1023aec8;
  /* 1023af04 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 1023af07 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023af09 je 0x1023af23 */
  if (C.zf) goto L_1023af23;
  /* 1023af0b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 1023af0e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023af11 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023af13 je 0x1023aef4 */
  if (C.zf) goto L_1023aef4;
  /* 1023af15 jmp 0x1023aec8 */
  goto L_1023aec8;
L_1023af17:;
  /* 1023af17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023af19 pop esi */
  ESI = (pop32());
  /* 1023af1a pop ebx */
  EBX = (pop32());
  /* 1023af1b pop edi */
  EDI = (pop32());
  /* 1023af1c mov al, dl */
  AL = (DL);
  /* 1023af1e jmp 0x1023adf6 */
  jmp_ind(0x1023adf6u); return;
L_1023af23:;
  /* 1023af23 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 1023af26 pop esi */
  ESI = (pop32());
  /* 1023af27 pop ebx */
  EBX = (pop32());
  /* 1023af28 pop edi */
  EDI = (pop32());
  /* 1023af29 ret  */
  ESPCHK(0x1023aeb0u, _esp0);
  ESP += 4; return;
L_1023af2a:;
  /* 1023af2a mov eax, edi */
  EAX = (EDI);
  /* 1023af2c pop esi */
  ESI = (pop32());
  /* 1023af2d pop ebx */
  EBX = (pop32());
  /* 1023af2e pop edi */
  EDI = (pop32());
  /* 1023af2f ret  */
  ESPCHK(0x1023aeb0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1023af30 (56 bytes, 31 insns) */
void f_1023af30(void) {
  FTRACE(0x1023af30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023af30 push ebp */
  push32((uint32_t)(EBP));
  /* 1023af31 mov ebp, esp */
  EBP = (ESP);
  /* 1023af33 push edi */
  push32((uint32_t)(EDI));
  /* 1023af34 push esi */
  push32((uint32_t)(ESI));
  /* 1023af35 push ebx */
  push32((uint32_t)(EBX));
  /* 1023af36 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1023af39 jecxz 0x1023af61 */
  x86_unimpl("jecxz @ 0x1023af39");
  /* 1023af3b mov ebx, ecx */
  EBX = (ECX);
  /* 1023af3d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1023af40 mov esi, edi */
  ESI = (EDI);
  /* 1023af42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023af44 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1023af46 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1023af48 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023af4a mov edi, esi */
  EDI = (ESI);
  /* 1023af4c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1023af4f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1023af51 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1023af54 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1023af56 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023af59 ja 0x1023af5f */
  if ((!C.cf&&!C.zf)) goto L_1023af5f;
  /* 1023af5b je 0x1023af61 */
  if (C.zf) goto L_1023af61;
  /* 1023af5d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1023af5e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1023af5f:;
  /* 1023af5f not ecx */
  ECX = (~(ECX));
L_1023af61:;
  /* 1023af61 mov eax, ecx */
  EAX = (ECX);
  /* 1023af63 pop ebx */
  EBX = (pop32());
  /* 1023af64 pop esi */
  ESI = (pop32());
  /* 1023af65 pop edi */
  EDI = (pop32());
  /* 1023af66 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023af67 ret  */
  ESPCHK(0x1023af30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af70 @ 0x1023af70 (47 bytes, 17 insns) */
void f_1023af70(void) {
  FTRACE(0x1023af70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023af70 push ecx */
  push32((uint32_t)(ECX));
  /* 1023af71 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023af76 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1023af7a jb 0x1023af90 */
  if (C.cf) goto L_1023af90;
L_1023af7c:;
  /* 1023af7c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023af82 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023af87 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1023af89 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023af8e jae 0x1023af7c */
  if (!C.cf) goto L_1023af7c;
L_1023af90:;
  /* 1023af90 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023af92 mov eax, esp */
  EAX = (ESP);
  /* 1023af94 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1023af96 mov esp, ecx */
  ESP = (ECX);
  /* 1023af98 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1023af9a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1023af9d push eax */
  push32((uint32_t)(EAX));
  /* 1023af9e ret  */
  ESPCHK(0x1023af70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af9f @ 0x1023af9f (72 bytes, 17 insns) */
void f_1023af9f(void) {
  FTRACE(0x1023af9fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023af9f push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1023afa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1023afa6 push dword ptr [0x10247bc4] */
  push32((uint32_t)(r32((uint32_t)(0x10247bc4))));
  /* 1023afac call dword ptr [0x1023e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e098))), 0x1023afb2u);
  /* 1023afb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023afb4 mov dword ptr [0x1024696c], eax */
  w32((uint32_t)(0x1024696c), (EAX));
  /* 1023afb9 jne 0x1023afbc */
  if (!C.zf) goto L_1023afbc;
  /* 1023afbb ret  */
  ESPCHK(0x1023af9fu, _esp0);
  ESP += 4; return;
L_1023afbc:;
  /* 1023afbc mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1023afc0 and dword ptr [0x10246964], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10246964)))&(0x0u); w32((uint32_t)(0x10246964), (_r)); fl_logic(_r,32); }
  /* 1023afc7 and dword ptr [0x10246968], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10246968)))&(0x0u); w32((uint32_t)(0x10246968), (_r)); fl_logic(_r,32); }
  /* 1023afce push 1 */
  push32((uint32_t)(0x1u));
  /* 1023afd0 mov dword ptr [0x10246960], eax */
  w32((uint32_t)(0x10246960), (EAX));
  /* 1023afd5 mov dword ptr [0x10246970], ecx */
  w32((uint32_t)(0x10246970), (ECX));
  /* 1023afdb mov dword ptr [0x10246958], 0x10 */
  w32((uint32_t)(0x10246958), (0x10u));
  /* 1023afe5 pop eax */
  EAX = (pop32());
  /* 1023afe6 ret  */
  ESPCHK(0x1023af9fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000afe7 @ 0x1023afe7 (43 bytes, 14 insns) */
void f_1023afe7(void) {
  FTRACE(0x1023afe7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023afe7 mov eax, dword ptr [0x10246968] */
  EAX = (r32((uint32_t)(0x10246968)));
  /* 1023afec lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1023afef mov eax, dword ptr [0x1024696c] */
  EAX = (r32((uint32_t)(0x1024696c)));
  /* 1023aff4 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_1023aff7:;
  /* 1023aff7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023aff9 jae 0x1023b00f */
  if (!C.cf) goto L_1023b00f;
  /* 1023affb mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1023afff sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023b002 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b008 jb 0x1023b011 */
  if (C.cf) goto L_1023b011;
  /* 1023b00a add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023b00d jmp 0x1023aff7 */
  goto L_1023aff7;
L_1023b00f:;
  /* 1023b00f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1023b011:;
  /* 1023b011 ret  */
  ESPCHK(0x1023afe7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b012 @ 0x1023b012 (809 bytes, 265 insns) */
void f_1023b012(void) {
  FTRACE(0x1023b012u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023b012 push ebp */
  push32((uint32_t)(EBP));
  /* 1023b013 mov ebp, esp */
  EBP = (ESP);
  /* 1023b015 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023b018 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023b01b push ebx */
  push32((uint32_t)(EBX));
  /* 1023b01c push esi */
  push32((uint32_t)(ESI));
  /* 1023b01d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1023b020 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 1023b023 push edi */
  push32((uint32_t)(EDI));
  /* 1023b024 mov edi, esi */
  EDI = (ESI);
  /* 1023b026 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023b029 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023b02c shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 1023b02f mov ecx, edi */
  ECX = (EDI);
  /* 1023b031 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1023b037 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1023b03e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1023b041 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1023b043 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1023b044 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 1023b047 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1023b04a jne 0x1023b336 */
  if (!C.zf) goto L_1023b336;
  /* 1023b050 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 1023b053 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 1023b056 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1023b059 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 1023b05c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1023b05f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1023b062 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1023b065 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 1023b068 jne 0x1023b0e8 */
  if (!C.zf) goto L_1023b0e8;
  /* 1023b06a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1023b06d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1023b06e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b071 jbe 0x1023b076 */
  if ((C.cf||C.zf)) goto L_1023b076;
  /* 1023b073 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1023b075 pop edx */
  EDX = (pop32());
L_1023b076:;
  /* 1023b076 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1023b079 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b07c jne 0x1023b0ca */
  if (!C.zf) goto L_1023b0ca;
  /* 1023b07e cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b081 jae 0x1023b0a1 */
  if (!C.cf) goto L_1023b0a1;
  /* 1023b083 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1023b088 mov ecx, edx */
  ECX = (EDX);
  /* 1023b08a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1023b08c lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1023b090 not ebx */
  EBX = (~(EBX));
  /* 1023b092 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1023b096 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1023b098 jne 0x1023b0c2 */
  if (!C.zf) goto L_1023b0c2;
  /* 1023b09a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023b09d and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1023b09f jmp 0x1023b0c2 */
  goto L_1023b0c2;
L_1023b0a1:;
  /* 1023b0a1 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1023b0a4 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1023b0a9 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1023b0ab lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1023b0af not ebx */
  EBX = (~(EBX));
  /* 1023b0b1 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1023b0b8 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1023b0ba jne 0x1023b0c2 */
  if (!C.zf) goto L_1023b0c2;
  /* 1023b0bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023b0bf and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1023b0c2:;
  /* 1023b0c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1023b0c5 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1023b0c8 jmp 0x1023b0cd */
  goto L_1023b0cd;
L_1023b0ca:;
  /* 1023b0ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_1023b0cd:;
  /* 1023b0cd mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 1023b0d0 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 1023b0d3 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023b0d6 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 1023b0d9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1023b0dc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1023b0df mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 1023b0e2 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 1023b0e5 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_1023b0e8:;
  /* 1023b0e8 mov edx, ecx */
  EDX = (ECX);
  /* 1023b0ea sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1023b0ed dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1023b0ee cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b0f1 jbe 0x1023b0f6 */
  if ((C.cf||C.zf)) goto L_1023b0f6;
  /* 1023b0f3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1023b0f5 pop edx */
  EDX = (pop32());
L_1023b0f6:;
  /* 1023b0f6 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1023b0f9 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 1023b0fc mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 1023b0ff jne 0x1023b199 */
  if (!C.zf) goto L_1023b199;
  /* 1023b105 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023b108 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1023b10b sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 1023b10e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1023b110 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1023b113 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1023b114 pop esi */
  ESI = (pop32());
  /* 1023b115 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b117 jbe 0x1023b11b */
  if ((C.cf||C.zf)) goto L_1023b11b;
  /* 1023b119 mov ebx, esi */
  EBX = (ESI);
L_1023b11b:;
  /* 1023b11b add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023b11e mov edx, ecx */
  EDX = (ECX);
  /* 1023b120 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1023b123 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1023b126 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1023b127 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b129 jbe 0x1023b12d */
  if ((C.cf||C.zf)) goto L_1023b12d;
  /* 1023b12b mov edx, esi */
  EDX = (ESI);
L_1023b12d:;
  /* 1023b12d cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b12f je 0x1023b194 */
  if (C.zf) goto L_1023b194;
  /* 1023b131 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1023b134 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1023b137 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b13a jne 0x1023b17c */
  if (!C.zf) goto L_1023b17c;
  /* 1023b13c cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b13f jae 0x1023b15d */
  if (!C.cf) goto L_1023b15d;
  /* 1023b141 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1023b146 mov ecx, ebx */
  ECX = (EBX);
  /* 1023b148 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1023b14a not esi */
  ESI = (~(ESI));
  /* 1023b14c and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1023b150 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 1023b154 jne 0x1023b17c */
  if (!C.zf) goto L_1023b17c;
  /* 1023b156 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023b159 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1023b15b jmp 0x1023b17c */
  goto L_1023b17c;
L_1023b15d:;
  /* 1023b15d lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 1023b160 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1023b165 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1023b167 not esi */
  ESI = (~(ESI));
  /* 1023b169 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1023b170 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 1023b174 jne 0x1023b17c */
  if (!C.zf) goto L_1023b17c;
  /* 1023b176 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023b179 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1023b17c:;
  /* 1023b17c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1023b17f mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 1023b182 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 1023b185 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 1023b188 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1023b18b mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1023b18e mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 1023b191 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_1023b194:;
  /* 1023b194 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1023b197 jmp 0x1023b19c */
  goto L_1023b19c;
L_1023b199:;
  /* 1023b199 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1023b19c:;
  /* 1023b19c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b1a0 jne 0x1023b1aa */
  if (!C.zf) goto L_1023b1aa;
  /* 1023b1a2 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b1a4 je 0x1023b22b */
  if (C.zf) goto L_1023b22b;
L_1023b1aa:;
  /* 1023b1aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1023b1ad mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 1023b1b1 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 1023b1b4 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 1023b1b7 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 1023b1ba mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1023b1bd mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1023b1c0 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 1023b1c3 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1023b1c6 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b1c9 jne 0x1023b22b */
  if (!C.zf) goto L_1023b22b;
  /* 1023b1cb mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 1023b1cf cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b1d2 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 1023b1d5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1023b1d7 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 1023b1db jae 0x1023b202 */
  if (!C.cf) goto L_1023b202;
  /* 1023b1dd cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023b1e1 jne 0x1023b1f1 */
  if (!C.zf) goto L_1023b1f1;
  /* 1023b1e3 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1023b1e8 mov ecx, edx */
  ECX = (EDX);
  /* 1023b1ea shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1023b1ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023b1ef or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1023b1f1:;
  /* 1023b1f1 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1023b1f6 mov ecx, edx */
  ECX = (EDX);
  /* 1023b1f8 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1023b1fa lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 1023b1fe or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1023b200 jmp 0x1023b22b */
  goto L_1023b22b;
L_1023b202:;
  /* 1023b202 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023b206 jne 0x1023b218 */
  if (!C.zf) goto L_1023b218;
  /* 1023b208 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1023b20b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1023b210 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1023b212 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023b215 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1023b218:;
  /* 1023b218 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1023b21b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1023b220 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1023b222 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 1023b229 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_1023b22b:;
  /* 1023b22b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1023b22e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1023b230 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 1023b234 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1023b237 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 1023b239 jne 0x1023b336 */
  if (!C.zf) goto L_1023b336;
  /* 1023b23f mov eax, dword ptr [0x10246964] */
  EAX = (r32((uint32_t)(0x10246964)));
  /* 1023b244 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023b246 je 0x1023b328 */
  if (C.zf) goto L_1023b328;
  /* 1023b24c mov ecx, dword ptr [0x1024695c] */
  ECX = (r32((uint32_t)(0x1024695c)));
  /* 1023b252 mov esi, dword ptr [0x1023e07c] */
  ESI = (r32((uint32_t)(0x1023e07c)));
  /* 1023b258 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1023b25b add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023b25e mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 1023b263 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1023b268 push ebx */
  push32((uint32_t)(EBX));
  /* 1023b269 push ecx */
  push32((uint32_t)(ECX));
  /* 1023b26a call esi */
  call_ind((uint32_t)(ESI), 0x1023b26cu);
  /* 1023b26c mov ecx, dword ptr [0x1024695c] */
  ECX = (r32((uint32_t)(0x1024695c)));
  /* 1023b272 mov eax, dword ptr [0x10246964] */
  EAX = (r32((uint32_t)(0x10246964)));
  /* 1023b277 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1023b27c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1023b27e or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1023b281 mov eax, dword ptr [0x10246964] */
  EAX = (r32((uint32_t)(0x10246964)));
  /* 1023b286 mov ecx, dword ptr [0x1024695c] */
  ECX = (r32((uint32_t)(0x1024695c)));
  /* 1023b28c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1023b28f and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1023b297 mov eax, dword ptr [0x10246964] */
  EAX = (r32((uint32_t)(0x10246964)));
  /* 1023b29c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1023b29f dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1023b2a2 mov eax, dword ptr [0x10246964] */
  EAX = (r32((uint32_t)(0x10246964)));
  /* 1023b2a7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1023b2aa cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023b2ae jne 0x1023b2b9 */
  if (!C.zf) goto L_1023b2b9;
  /* 1023b2b0 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1023b2b4 mov eax, dword ptr [0x10246964] */
  EAX = (r32((uint32_t)(0x10246964)));
L_1023b2b9:;
  /* 1023b2b9 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b2bd jne 0x1023b328 */
  if (!C.zf) goto L_1023b328;
  /* 1023b2bf push ebx */
  push32((uint32_t)(EBX));
  /* 1023b2c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1023b2c2 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 1023b2c5 call esi */
  call_ind((uint32_t)(ESI), 0x1023b2c7u);
  /* 1023b2c7 mov eax, dword ptr [0x10246964] */
  EAX = (r32((uint32_t)(0x10246964)));
  /* 1023b2cc push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 1023b2cf push 0 */
  push32((uint32_t)(0x0u));
  /* 1023b2d1 push dword ptr [0x10247bc4] */
  push32((uint32_t)(r32((uint32_t)(0x10247bc4))));
  /* 1023b2d7 call dword ptr [0x1023e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e080))), 0x1023b2ddu);
  /* 1023b2dd mov eax, dword ptr [0x10246968] */
  EAX = (r32((uint32_t)(0x10246968)));
  /* 1023b2e2 mov edx, dword ptr [0x1024696c] */
  EDX = (r32((uint32_t)(0x1024696c)));
  /* 1023b2e8 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1023b2eb shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1023b2ee mov ecx, eax */
  ECX = (EAX);
  /* 1023b2f0 mov eax, dword ptr [0x10246964] */
  EAX = (r32((uint32_t)(0x10246964)));
  /* 1023b2f5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023b2f7 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 1023b2fb push ecx */
  push32((uint32_t)(ECX));
  /* 1023b2fc lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1023b2ff push ecx */
  push32((uint32_t)(ECX));
  /* 1023b300 push eax */
  push32((uint32_t)(EAX));
  /* 1023b301 call 0x10239ce0 */
  push32(0x1023b306u); f_10239ce0();
  /* 1023b306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023b309 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023b30c dec dword ptr [0x10246968] */
  { uint32_t _r=(r32((uint32_t)(0x10246968)))-1; w32((uint32_t)(0x10246968), (_r)); fl_dec(_r,32); }
  /* 1023b312 cmp eax, dword ptr [0x10246964] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10246964))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b318 jbe 0x1023b31e */
  if ((C.cf||C.zf)) goto L_1023b31e;
  /* 1023b31a sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_1023b31e:;
  /* 1023b31e mov eax, dword ptr [0x1024696c] */
  EAX = (r32((uint32_t)(0x1024696c)));
  /* 1023b323 mov dword ptr [0x10246960], eax */
  w32((uint32_t)(0x10246960), (EAX));
L_1023b328:;
  /* 1023b328 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023b32b mov dword ptr [0x1024695c], edi */
  w32((uint32_t)(0x1024695c), (EDI));
  /* 1023b331 mov dword ptr [0x10246964], eax */
  w32((uint32_t)(0x10246964), (EAX));
L_1023b336:;
  /* 1023b336 pop edi */
  EDI = (pop32());
  /* 1023b337 pop esi */
  ESI = (pop32());
  /* 1023b338 pop ebx */
  EBX = (pop32());
  /* 1023b339 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023b33a ret  */
  ESPCHK(0x1023b012u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b33b @ 0x1023b33b (777 bytes, 275 insns) */
void f_1023b33b(void) {
  FTRACE(0x1023b33bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023b33b push ebp */
  push32((uint32_t)(EBP));
  /* 1023b33c mov ebp, esp */
  EBP = (ESP);
  /* 1023b33e sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023b341 mov eax, dword ptr [0x10246968] */
  EAX = (r32((uint32_t)(0x10246968)));
  /* 1023b346 mov edx, dword ptr [0x1024696c] */
  EDX = (r32((uint32_t)(0x1024696c)));
  /* 1023b34c push ebx */
  push32((uint32_t)(EBX));
  /* 1023b34d push esi */
  push32((uint32_t)(ESI));
  /* 1023b34e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1023b351 push edi */
  push32((uint32_t)(EDI));
  /* 1023b352 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 1023b355 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023b358 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1023b35b lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 1023b35e and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1023b361 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1023b364 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1023b367 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1023b368 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b36b jge 0x1023b37b */
  if ((C.sf==C.of)) goto L_1023b37b;
  /* 1023b36d or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1023b370 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1023b372 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1023b376 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 1023b379 jmp 0x1023b38b */
  goto L_1023b38b;
L_1023b37b:;
  /* 1023b37b add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023b37e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1023b381 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1023b383 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1023b385 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 1023b388 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1023b38b:;
  /* 1023b38b mov eax, dword ptr [0x10246960] */
  EAX = (r32((uint32_t)(0x10246960)));
  /* 1023b390 mov ebx, eax */
  EBX = (EAX);
  /* 1023b392 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b394 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1023b397 jae 0x1023b3b2 */
  if (!C.cf) goto L_1023b3b2;
L_1023b399:;
  /* 1023b399 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1023b39c mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1023b39e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1023b3a1 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1023b3a3 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1023b3a5 jne 0x1023b3b2 */
  if (!C.zf) goto L_1023b3b2;
  /* 1023b3a7 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023b3aa cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b3ad mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1023b3b0 jb 0x1023b399 */
  if (C.cf) goto L_1023b399;
L_1023b3b2:;
  /* 1023b3b2 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b3b5 jne 0x1023b430 */
  if (!C.zf) goto L_1023b430;
  /* 1023b3b7 mov ebx, edx */
  EBX = (EDX);
L_1023b3b9:;
  /* 1023b3b9 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b3bb mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1023b3be jae 0x1023b3d5 */
  if (!C.cf) goto L_1023b3d5;
  /* 1023b3c0 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1023b3c3 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1023b3c5 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1023b3c8 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1023b3ca or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1023b3cc jne 0x1023b3d3 */
  if (!C.zf) goto L_1023b3d3;
  /* 1023b3ce add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023b3d1 jmp 0x1023b3b9 */
  goto L_1023b3b9;
L_1023b3d3:;
  /* 1023b3d3 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1023b3d5:;
  /* 1023b3d5 jne 0x1023b430 */
  if (!C.zf) goto L_1023b430;
L_1023b3d7:;
  /* 1023b3d7 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b3da jae 0x1023b3ed */
  if (!C.cf) goto L_1023b3ed;
  /* 1023b3dc cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b3e0 jne 0x1023b3ea */
  if (!C.zf) goto L_1023b3ea;
  /* 1023b3e2 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023b3e5 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1023b3e8 jmp 0x1023b3d7 */
  goto L_1023b3d7;
L_1023b3ea:;
  /* 1023b3ea cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1023b3ed:;
  /* 1023b3ed jne 0x1023b415 */
  if (!C.zf) goto L_1023b415;
  /* 1023b3ef mov ebx, edx */
  EBX = (EDX);
L_1023b3f1:;
  /* 1023b3f1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b3f3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1023b3f6 jae 0x1023b405 */
  if (!C.cf) goto L_1023b405;
  /* 1023b3f8 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b3fc jne 0x1023b403 */
  if (!C.zf) goto L_1023b403;
  /* 1023b3fe add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023b401 jmp 0x1023b3f1 */
  goto L_1023b3f1;
L_1023b403:;
  /* 1023b403 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1023b405:;
  /* 1023b405 jne 0x1023b415 */
  if (!C.zf) goto L_1023b415;
  /* 1023b407 call 0x1023b644 */
  push32(0x1023b40cu); f_1023b644();
  /* 1023b40c mov ebx, eax */
  EBX = (EAX);
  /* 1023b40e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1023b410 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1023b413 je 0x1023b429 */
  if (C.zf) goto L_1023b429;
L_1023b415:;
  /* 1023b415 push ebx */
  push32((uint32_t)(EBX));
  /* 1023b416 call 0x1023b6f5 */
  push32(0x1023b41bu); f_1023b6f5();
  /* 1023b41b pop ecx */
  ECX = (pop32());
  /* 1023b41c mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1023b41f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1023b421 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 1023b424 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b427 jne 0x1023b430 */
  if (!C.zf) goto L_1023b430;
L_1023b429:;
  /* 1023b429 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023b42b jmp 0x1023b63f */
  goto L_1023b63f;
L_1023b430:;
  /* 1023b430 mov dword ptr [0x10246960], ebx */
  w32((uint32_t)(0x10246960), (EBX));
  /* 1023b436 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 1023b439 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1023b43b cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b43e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1023b441 je 0x1023b457 */
  if (C.zf) goto L_1023b457;
  /* 1023b443 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1023b44a mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1023b44e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1023b451 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1023b453 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1023b455 jne 0x1023b48e */
  if (!C.zf) goto L_1023b48e;
L_1023b457:;
  /* 1023b457 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 1023b45d mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 1023b460 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1023b463 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 1023b466 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1023b46a lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 1023b46d or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1023b46f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1023b472 jne 0x1023b48b */
  if (!C.zf) goto L_1023b48b;
L_1023b474:;
  /* 1023b474 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 1023b47a inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1023b47d and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1023b480 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023b483 mov edi, esi */
  EDI = (ESI);
  /* 1023b485 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 1023b487 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 1023b489 je 0x1023b474 */
  if (C.zf) goto L_1023b474;
L_1023b48b:;
  /* 1023b48b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1023b48e:;
  /* 1023b48e mov ecx, edx */
  ECX = (EDX);
  /* 1023b490 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1023b492 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1023b498 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1023b49f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1023b4a2 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1023b4a6 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 1023b4a8 jne 0x1023b4b7 */
  if (!C.zf) goto L_1023b4b7;
  /* 1023b4aa mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1023b4b1 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1023b4b3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1023b4b6 pop edi */
  EDI = (pop32());
L_1023b4b7:;
  /* 1023b4b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1023b4b9 jl 0x1023b4c0 */
  if ((C.sf!=C.of)) goto L_1023b4c0;
  /* 1023b4bb shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1023b4bd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1023b4be jmp 0x1023b4b7 */
  goto L_1023b4b7;
L_1023b4c0:;
  /* 1023b4c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1023b4c3 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 1023b4c7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1023b4c9 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023b4cc mov esi, ecx */
  ESI = (ECX);
  /* 1023b4ce mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1023b4d1 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1023b4d4 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1023b4d5 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b4d8 jle 0x1023b4dd */
  if ((C.zf||C.sf!=C.of)) goto L_1023b4dd;
  /* 1023b4da push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1023b4dc pop esi */
  ESI = (pop32());
L_1023b4dd:;
  /* 1023b4dd cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b4df je 0x1023b5f2 */
  if (C.zf) goto L_1023b5f2;
  /* 1023b4e5 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1023b4e8 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b4eb jne 0x1023b54e */
  if (!C.zf) goto L_1023b54e;
  /* 1023b4ed cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b4f0 jge 0x1023b51d */
  if ((C.sf==C.of)) goto L_1023b51d;
  /* 1023b4f2 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1023b4f7 mov ecx, edi */
  ECX = (EDI);
  /* 1023b4f9 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1023b4fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1023b4fe lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1023b502 not ebx */
  EBX = (~(EBX));
  /* 1023b504 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1023b507 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 1023b50b mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1023b50f dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1023b511 jne 0x1023b54b */
  if (!C.zf) goto L_1023b54b;
  /* 1023b513 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023b516 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1023b519 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 1023b51b jmp 0x1023b54e */
  goto L_1023b54e;
L_1023b51d:;
  /* 1023b51d lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 1023b520 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1023b525 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1023b527 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1023b52a lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1023b52e lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1023b535 not ebx */
  EBX = (~(EBX));
  /* 1023b537 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1023b539 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1023b53b mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1023b53e jne 0x1023b54b */
  if (!C.zf) goto L_1023b54b;
  /* 1023b540 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023b543 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1023b546 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1023b549 jmp 0x1023b54e */
  goto L_1023b54e;
L_1023b54b:;
  /* 1023b54b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1023b54e:;
  /* 1023b54e mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 1023b551 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 1023b554 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b558 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 1023b55b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1023b55e mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 1023b561 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 1023b564 je 0x1023b5fe */
  if (C.zf) goto L_1023b5fe;
  /* 1023b56a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1023b56d mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 1023b571 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 1023b574 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 1023b577 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1023b57a mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1023b57d mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1023b580 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1023b583 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1023b586 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b589 jne 0x1023b5ef */
  if (!C.zf) goto L_1023b5ef;
  /* 1023b58b mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1023b58f cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b592 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 1023b595 jge 0x1023b5c0 */
  if ((C.sf==C.of)) goto L_1023b5c0;
  /* 1023b597 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1023b599 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023b59d mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1023b5a1 jne 0x1023b5ae */
  if (!C.zf) goto L_1023b5ae;
  /* 1023b5a3 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1023b5a8 mov ecx, esi */
  ECX = (ESI);
  /* 1023b5aa shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1023b5ac or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1023b5ae:;
  /* 1023b5ae mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1023b5b3 mov ecx, esi */
  ECX = (ESI);
  /* 1023b5b5 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1023b5b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1023b5ba or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1023b5be jmp 0x1023b5ef */
  goto L_1023b5ef;
L_1023b5c0:;
  /* 1023b5c0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1023b5c2 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023b5c6 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1023b5ca jne 0x1023b5d9 */
  if (!C.zf) goto L_1023b5d9;
  /* 1023b5cc lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1023b5cf mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1023b5d4 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1023b5d6 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_1023b5d9:;
  /* 1023b5d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1023b5dc lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1023b5e3 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1023b5e6 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1023b5eb shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1023b5ed or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1023b5ef:;
  /* 1023b5ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1023b5f2:;
  /* 1023b5f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1023b5f4 je 0x1023b601 */
  if (C.zf) goto L_1023b601;
  /* 1023b5f6 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1023b5f8 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1023b5fc jmp 0x1023b601 */
  goto L_1023b601;
L_1023b5fe:;
  /* 1023b5fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1023b601:;
  /* 1023b601 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 1023b604 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023b606 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 1023b609 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1023b60b mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1023b60f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1023b612 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1023b614 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1023b616 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 1023b619 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1023b61b jne 0x1023b637 */
  if (!C.zf) goto L_1023b637;
  /* 1023b61d cmp ebx, dword ptr [0x10246964] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10246964))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b623 jne 0x1023b637 */
  if (!C.zf) goto L_1023b637;
  /* 1023b625 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1023b628 cmp ecx, dword ptr [0x1024695c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1024695c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b62e jne 0x1023b637 */
  if (!C.zf) goto L_1023b637;
  /* 1023b630 and dword ptr [0x10246964], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10246964)))&(0x0u); w32((uint32_t)(0x10246964), (_r)); fl_logic(_r,32); }
L_1023b637:;
  /* 1023b637 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1023b63a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1023b63c lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_1023b63f:;
  /* 1023b63f pop edi */
  EDI = (pop32());
  /* 1023b640 pop esi */
  ESI = (pop32());
  /* 1023b641 pop ebx */
  EBX = (pop32());
  /* 1023b642 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023b643 ret  */
  ESPCHK(0x1023b33bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b644 @ 0x1023b644 (177 bytes, 53 insns) */
void f_1023b644(void) {
  FTRACE(0x1023b644u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023b644 mov eax, dword ptr [0x10246968] */
  EAX = (r32((uint32_t)(0x10246968)));
  /* 1023b649 mov ecx, dword ptr [0x10246958] */
  ECX = (r32((uint32_t)(0x10246958)));
  /* 1023b64f push esi */
  push32((uint32_t)(ESI));
  /* 1023b650 push edi */
  push32((uint32_t)(EDI));
  /* 1023b651 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1023b653 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b655 jne 0x1023b687 */
  if (!C.zf) goto L_1023b687;
  /* 1023b657 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 1023b65b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1023b65e push eax */
  push32((uint32_t)(EAX));
  /* 1023b65f push dword ptr [0x1024696c] */
  push32((uint32_t)(r32((uint32_t)(0x1024696c))));
  /* 1023b665 push edi */
  push32((uint32_t)(EDI));
  /* 1023b666 push dword ptr [0x10247bc4] */
  push32((uint32_t)(r32((uint32_t)(0x10247bc4))));
  /* 1023b66c call dword ptr [0x1023e0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e0ac))), 0x1023b672u);
  /* 1023b672 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b674 je 0x1023b6d7 */
  if (C.zf) goto L_1023b6d7;
  /* 1023b676 add dword ptr [0x10246958], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x10246958))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x10246958), (_r)); fl_add(_a,_b,_r,32); }
  /* 1023b67d mov dword ptr [0x1024696c], eax */
  w32((uint32_t)(0x1024696c), (EAX));
  /* 1023b682 mov eax, dword ptr [0x10246968] */
  EAX = (r32((uint32_t)(0x10246968)));
L_1023b687:;
  /* 1023b687 mov ecx, dword ptr [0x1024696c] */
  ECX = (r32((uint32_t)(0x1024696c)));
  /* 1023b68d push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1023b692 push 8 */
  push32((uint32_t)(0x8u));
  /* 1023b694 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1023b697 push dword ptr [0x10247bc4] */
  push32((uint32_t)(r32((uint32_t)(0x10247bc4))));
  /* 1023b69d lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1023b6a0 call dword ptr [0x1023e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e098))), 0x1023b6a6u);
  /* 1023b6a6 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b6a8 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 1023b6ab je 0x1023b6d7 */
  if (C.zf) goto L_1023b6d7;
  /* 1023b6ad push 4 */
  push32((uint32_t)(0x4u));
  /* 1023b6af push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1023b6b4 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1023b6b9 push edi */
  push32((uint32_t)(EDI));
  /* 1023b6ba call dword ptr [0x1023e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e0a8))), 0x1023b6c0u);
  /* 1023b6c0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b6c2 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1023b6c5 jne 0x1023b6db */
  if (!C.zf) goto L_1023b6db;
  /* 1023b6c7 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1023b6ca push edi */
  push32((uint32_t)(EDI));
  /* 1023b6cb push dword ptr [0x10247bc4] */
  push32((uint32_t)(r32((uint32_t)(0x10247bc4))));
  /* 1023b6d1 call dword ptr [0x1023e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e080))), 0x1023b6d7u);
L_1023b6d7:;
  /* 1023b6d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023b6d9 jmp 0x1023b6f2 */
  goto L_1023b6f2;
L_1023b6db:;
  /* 1023b6db or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1023b6df mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1023b6e1 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 1023b6e4 inc dword ptr [0x10246968] */
  { uint32_t _r=(r32((uint32_t)(0x10246968)))+1; w32((uint32_t)(0x10246968), (_r)); fl_inc(_r,32); }
  /* 1023b6ea mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1023b6ed or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1023b6f0 mov eax, esi */
  EAX = (ESI);
L_1023b6f2:;
  /* 1023b6f2 pop edi */
  EDI = (pop32());
  /* 1023b6f3 pop esi */
  ESI = (pop32());
  /* 1023b6f4 ret  */
  ESPCHK(0x1023b644u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6f5 @ 0x1023b6f5 (251 bytes, 85 insns) */
void f_1023b6f5(void) {
  FTRACE(0x1023b6f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023b6f5 push ebp */
  push32((uint32_t)(EBP));
  /* 1023b6f6 mov ebp, esp */
  EBP = (ESP);
  /* 1023b6f8 push ecx */
  push32((uint32_t)(ECX));
  /* 1023b6f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023b6fc push ebx */
  push32((uint32_t)(EBX));
  /* 1023b6fd push esi */
  push32((uint32_t)(ESI));
  /* 1023b6fe push edi */
  push32((uint32_t)(EDI));
  /* 1023b6ff mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 1023b702 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 1023b705 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1023b707:;
  /* 1023b707 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023b709 jl 0x1023b710 */
  if ((C.sf!=C.of)) goto L_1023b710;
  /* 1023b70b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1023b70d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1023b70e jmp 0x1023b707 */
  goto L_1023b707;
L_1023b710:;
  /* 1023b710 mov eax, ebx */
  EAX = (EBX);
  /* 1023b712 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1023b714 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1023b71a pop edx */
  EDX = (pop32());
  /* 1023b71b lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 1023b722 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1023b725:;
  /* 1023b725 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 1023b728 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 1023b72b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023b72e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1023b72f jne 0x1023b725 */
  if (!C.zf) goto L_1023b725;
  /* 1023b731 mov edi, ebx */
  EDI = (EBX);
  /* 1023b733 push 4 */
  push32((uint32_t)(0x4u));
  /* 1023b735 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 1023b738 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023b73b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1023b740 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1023b745 push edi */
  push32((uint32_t)(EDI));
  /* 1023b746 call dword ptr [0x1023e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e0a8))), 0x1023b74cu);
  /* 1023b74c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023b74e jne 0x1023b758 */
  if (!C.zf) goto L_1023b758;
  /* 1023b750 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1023b753 jmp 0x1023b7eb */
  goto L_1023b7eb;
L_1023b758:;
  /* 1023b758 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 1023b75e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b760 ja 0x1023b79e */
  if ((!C.cf&&!C.zf)) goto L_1023b79e;
  /* 1023b762 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_1023b765:;
  /* 1023b765 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 1023b769 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 1023b770 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 1023b776 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1023b77d mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1023b77f lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 1023b785 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1023b788 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 1023b792 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023b797 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 1023b79a cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b79c jbe 0x1023b765 */
  if ((C.cf||C.zf)) goto L_1023b765;
L_1023b79e:;
  /* 1023b79e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1023b7a1 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 1023b7a4 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023b7a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1023b7ab pop edi */
  EDI = (pop32());
  /* 1023b7ac mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1023b7af mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1023b7b2 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 1023b7b5 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1023b7b8 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1023b7bb and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1023b7c0 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 1023b7c7 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 1023b7ca mov cl, al */
  CL = (AL);
  /* 1023b7cc inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1023b7ce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023b7d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023b7d3 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 1023b7d6 jne 0x1023b7db */
  if (!C.zf) goto L_1023b7db;
  /* 1023b7d8 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_1023b7db:;
  /* 1023b7db mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1023b7e0 mov ecx, ebx */
  ECX = (EBX);
  /* 1023b7e2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1023b7e4 not edx */
  EDX = (~(EDX));
  /* 1023b7e6 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1023b7e9 mov eax, ebx */
  EAX = (EBX);
L_1023b7eb:;
  /* 1023b7eb pop edi */
  EDI = (pop32());
  /* 1023b7ec pop esi */
  ESI = (pop32());
  /* 1023b7ed pop ebx */
  EBX = (pop32());
  /* 1023b7ee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023b7ef ret  */
  ESPCHK(0x1023b6f5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7f0 @ 0x1023b7f0 (324 bytes, 102 insns) */
void f_1023b7f0(void) {
  FTRACE(0x1023b7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023b7f0 cmp dword ptr [0x10240e10], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10240e10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b7f7 push ebx */
  push32((uint32_t)(EBX));
  /* 1023b7f8 push ebp */
  push32((uint32_t)(EBP));
  /* 1023b7f9 push esi */
  push32((uint32_t)(ESI));
  /* 1023b7fa push edi */
  push32((uint32_t)(EDI));
  /* 1023b7fb jne 0x1023b804 */
  if (!C.zf) goto L_1023b804;
  /* 1023b7fd mov esi, 0x10240e00 */
  ESI = (0x10240e00u);
  /* 1023b802 jmp 0x1023b821 */
  goto L_1023b821;
L_1023b804:;
  /* 1023b804 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 1023b809 push 0 */
  push32((uint32_t)(0x0u));
  /* 1023b80b push dword ptr [0x10247bc4] */
  push32((uint32_t)(r32((uint32_t)(0x10247bc4))));
  /* 1023b811 call dword ptr [0x1023e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e098))), 0x1023b817u);
  /* 1023b817 mov esi, eax */
  ESI = (EAX);
  /* 1023b819 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1023b81b je 0x1023b92d */
  if (C.zf) goto L_1023b92d;
L_1023b821:;
  /* 1023b821 mov ebp, dword ptr [0x1023e0a8] */
  EBP = (r32((uint32_t)(0x1023e0a8)));
  /* 1023b827 push 4 */
  push32((uint32_t)(0x4u));
  /* 1023b829 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1023b82e push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 1023b833 push 0 */
  push32((uint32_t)(0x0u));
  /* 1023b835 call ebp */
  call_ind((uint32_t)(EBP), 0x1023b837u);
  /* 1023b837 mov edi, eax */
  EDI = (EAX);
  /* 1023b839 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1023b83b je 0x1023b916 */
  if (C.zf) goto L_1023b916;
  /* 1023b841 push 4 */
  push32((uint32_t)(0x4u));
  /* 1023b843 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 1023b848 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1023b84d push ebx */
  push32((uint32_t)(EBX));
  /* 1023b84e push edi */
  push32((uint32_t)(EDI));
  /* 1023b84f call ebp */
  call_ind((uint32_t)(EBP), 0x1023b851u);
  /* 1023b851 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023b853 je 0x1023b908 */
  if (C.zf) goto L_1023b908;
  /* 1023b859 mov eax, 0x10240e00 */
  EAX = (0x10240e00u);
  /* 1023b85e cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b860 jne 0x1023b880 */
  if (!C.zf) goto L_1023b880;
  /* 1023b862 cmp dword ptr [0x10240e00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10240e00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b869 jne 0x1023b870 */
  if (!C.zf) goto L_1023b870;
  /* 1023b86b mov dword ptr [0x10240e00], eax */
  w32((uint32_t)(0x10240e00), (EAX));
L_1023b870:;
  /* 1023b870 cmp dword ptr [0x10240e04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10240e04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b877 jne 0x1023b895 */
  if (!C.zf) goto L_1023b895;
  /* 1023b879 mov dword ptr [0x10240e04], eax */
  w32((uint32_t)(0x10240e04), (EAX));
  /* 1023b87e jmp 0x1023b895 */
  goto L_1023b895;
L_1023b880:;
  /* 1023b880 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1023b882 mov eax, dword ptr [0x10240e04] */
  EAX = (r32((uint32_t)(0x10240e04)));
  /* 1023b887 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1023b88a mov dword ptr [0x10240e04], esi */
  w32((uint32_t)(0x10240e04), (ESI));
  /* 1023b890 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1023b893 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1023b895:;
  /* 1023b895 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 1023b89b lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 1023b8a1 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 1023b8a4 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 1023b8a7 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 1023b8aa mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 1023b8ad mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1023b8b0 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 1023b8b2 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_1023b8b7:;
  /* 1023b8b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1023b8b9 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b8bc setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 1023b8bf dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1023b8c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1023b8c2 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1023b8c3 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1023b8c4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1023b8c6 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1023b8c9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023b8cc cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b8d2 jl 0x1023b8b7 */
  if ((C.sf!=C.of)) goto L_1023b8b7;
  /* 1023b8d4 push ebx */
  push32((uint32_t)(EBX));
  /* 1023b8d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1023b8d7 push edi */
  push32((uint32_t)(EDI));
  /* 1023b8d8 call 0x10239c80 */
  push32(0x1023b8ddu); f_10239c80();
  /* 1023b8dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023b8e0:;
  /* 1023b8e0 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1023b8e3 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023b8e5 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b8e7 jae 0x1023b904 */
  if (!C.cf) goto L_1023b904;
  /* 1023b8e9 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 1023b8f0 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 1023b8f3 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1023b8f5 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 1023b8fc add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023b902 jmp 0x1023b8e0 */
  goto L_1023b8e0;
L_1023b904:;
  /* 1023b904 mov eax, esi */
  EAX = (ESI);
  /* 1023b906 jmp 0x1023b92f */
  goto L_1023b92f;
L_1023b908:;
  /* 1023b908 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1023b90d push 0 */
  push32((uint32_t)(0x0u));
  /* 1023b90f push edi */
  push32((uint32_t)(EDI));
  /* 1023b910 call dword ptr [0x1023e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e07c))), 0x1023b916u);
L_1023b916:;
  /* 1023b916 cmp esi, 0x10240e00 */
  { uint32_t _a=(ESI),_b=(0x10240e00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b91c je 0x1023b92d */
  if (C.zf) goto L_1023b92d;
  /* 1023b91e push esi */
  push32((uint32_t)(ESI));
  /* 1023b91f push 0 */
  push32((uint32_t)(0x0u));
  /* 1023b921 push dword ptr [0x10247bc4] */
  push32((uint32_t)(r32((uint32_t)(0x10247bc4))));
  /* 1023b927 call dword ptr [0x1023e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e080))), 0x1023b92du);
L_1023b92d:;
  /* 1023b92d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1023b92f:;
  /* 1023b92f pop edi */
  EDI = (pop32());
  /* 1023b930 pop esi */
  ESI = (pop32());
  /* 1023b931 pop ebp */
  EBP = (pop32());
  /* 1023b932 pop ebx */
  EBX = (pop32());
  /* 1023b933 ret  */
  ESPCHK(0x1023b7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b934 @ 0x1023b934 (86 bytes, 27 insns) */
void f_1023b934(void) {
  FTRACE(0x1023b934u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023b934 push esi */
  push32((uint32_t)(ESI));
  /* 1023b935 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1023b939 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1023b93e push 0 */
  push32((uint32_t)(0x0u));
  /* 1023b940 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1023b943 call dword ptr [0x1023e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e07c))), 0x1023b949u);
  /* 1023b949 cmp dword ptr [0x10242e20], esi */
  { uint32_t _a=(r32((uint32_t)(0x10242e20))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b94f jne 0x1023b959 */
  if (!C.zf) goto L_1023b959;
  /* 1023b951 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1023b954 mov dword ptr [0x10242e20], eax */
  w32((uint32_t)(0x10242e20), (EAX));
L_1023b959:;
  /* 1023b959 cmp esi, 0x10240e00 */
  { uint32_t _a=(ESI),_b=(0x10240e00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b95f je 0x1023b981 */
  if (C.zf) goto L_1023b981;
  /* 1023b961 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1023b964 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1023b966 push esi */
  push32((uint32_t)(ESI));
  /* 1023b967 push 0 */
  push32((uint32_t)(0x0u));
  /* 1023b969 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1023b96b mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1023b96d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1023b970 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1023b973 push dword ptr [0x10247bc4] */
  push32((uint32_t)(r32((uint32_t)(0x10247bc4))));
  /* 1023b979 call dword ptr [0x1023e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e080))), 0x1023b97fu);
  /* 1023b97f pop esi */
  ESI = (pop32());
  /* 1023b980 ret  */
  ESPCHK(0x1023b934u, _esp0);
  ESP += 4; return;
L_1023b981:;
  /* 1023b981 or dword ptr [0x10240e10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10240e10)))|(0xffffffffu); w32((uint32_t)(0x10240e10), (_r)); fl_logic(_r,32); }
  /* 1023b988 pop esi */
  ESI = (pop32());
  /* 1023b989 ret  */
  ESPCHK(0x1023b934u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b98a @ 0x1023b98a (194 bytes, 66 insns) */
void f_1023b98a(void) {
  FTRACE(0x1023b98au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023b98a push ebp */
  push32((uint32_t)(EBP));
  /* 1023b98b mov ebp, esp */
  EBP = (ESP);
  /* 1023b98d push ecx */
  push32((uint32_t)(ECX));
  /* 1023b98e push ebx */
  push32((uint32_t)(EBX));
  /* 1023b98f push esi */
  push32((uint32_t)(ESI));
  /* 1023b990 mov esi, dword ptr [0x10240e04] */
  ESI = (r32((uint32_t)(0x10240e04)));
  /* 1023b996 push edi */
  push32((uint32_t)(EDI));
L_1023b997:;
  /* 1023b997 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b99b je 0x1023ba35 */
  if (C.zf) goto L_1023ba35;
  /* 1023b9a1 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1023b9a5 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 1023b9ab mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_1023b9b0:;
  /* 1023b9b0 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b9b6 jne 0x1023b9f1 */
  if (!C.zf) goto L_1023b9f1;
  /* 1023b9b8 mov eax, ebx */
  EAX = (EBX);
  /* 1023b9ba push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1023b9bf add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023b9c2 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1023b9c7 push eax */
  push32((uint32_t)(EAX));
  /* 1023b9c8 call dword ptr [0x1023e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e07c))), 0x1023b9ceu);
  /* 1023b9ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023b9d0 je 0x1023b9f1 */
  if (C.zf) goto L_1023b9f1;
  /* 1023b9d2 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 1023b9d5 dec dword ptr [0x102467b4] */
  { uint32_t _r=(r32((uint32_t)(0x102467b4)))-1; w32((uint32_t)(0x102467b4), (_r)); fl_dec(_r,32); }
  /* 1023b9db mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1023b9de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023b9e0 je 0x1023b9e6 */
  if (C.zf) goto L_1023b9e6;
  /* 1023b9e2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023b9e4 jbe 0x1023b9e9 */
  if ((C.cf||C.zf)) goto L_1023b9e9;
L_1023b9e6:;
  /* 1023b9e6 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_1023b9e9:;
  /* 1023b9e9 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1023b9ec dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 1023b9ef je 0x1023b9fe */
  if (C.zf) goto L_1023b9fe;
L_1023b9f1:;
  /* 1023b9f1 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023b9f7 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023b9fa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1023b9fc jge 0x1023b9b0 */
  if ((C.sf==C.of)) goto L_1023b9b0;
L_1023b9fe:;
  /* 1023b9fe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023ba02 mov ecx, esi */
  ECX = (ESI);
  /* 1023ba04 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 1023ba07 je 0x1023ba35 */
  if (C.zf) goto L_1023ba35;
  /* 1023ba09 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023ba0d jne 0x1023ba35 */
  if (!C.zf) goto L_1023ba35;
  /* 1023ba0f push 1 */
  push32((uint32_t)(0x1u));
  /* 1023ba11 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 1023ba14 pop edx */
  EDX = (pop32());
L_1023ba15:;
  /* 1023ba15 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023ba18 jne 0x1023ba26 */
  if (!C.zf) goto L_1023ba26;
  /* 1023ba1a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1023ba1b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023ba1e cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023ba24 jl 0x1023ba15 */
  if ((C.sf!=C.of)) goto L_1023ba15;
L_1023ba26:;
  /* 1023ba26 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023ba2c jne 0x1023ba35 */
  if (!C.zf) goto L_1023ba35;
  /* 1023ba2e push ecx */
  push32((uint32_t)(ECX));
  /* 1023ba2f call 0x1023b934 */
  push32(0x1023ba34u); f_1023b934();
  /* 1023ba34 pop ecx */
  ECX = (pop32());
L_1023ba35:;
  /* 1023ba35 cmp esi, dword ptr [0x10240e04] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10240e04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023ba3b je 0x1023ba47 */
  if (C.zf) goto L_1023ba47;
  /* 1023ba3d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023ba41 jg 0x1023b997 */
  if ((!C.zf&&C.sf==C.of)) goto L_1023b997;
L_1023ba47:;
  /* 1023ba47 pop edi */
  EDI = (pop32());
  /* 1023ba48 pop esi */
  ESI = (pop32());
  /* 1023ba49 pop ebx */
  EBX = (pop32());
  /* 1023ba4a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023ba4b ret  */
  ESPCHK(0x1023b98au, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba4c @ 0x1023ba4c (87 bytes, 34 insns) */
void f_1023ba4c(void) {
  FTRACE(0x1023ba4cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023ba4c mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1023ba50 mov edx, 0x10240e00 */
  EDX = (0x10240e00u);
  /* 1023ba55 push esi */
  push32((uint32_t)(ESI));
  /* 1023ba56 mov ecx, edx */
  ECX = (EDX);
L_1023ba58:;
  /* 1023ba58 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023ba5b jbe 0x1023ba62 */
  if ((C.cf||C.zf)) goto L_1023ba62;
  /* 1023ba5d cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023ba60 jb 0x1023ba6a */
  if (C.cf) goto L_1023ba6a;
L_1023ba62:;
  /* 1023ba62 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1023ba64 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023ba66 je 0x1023ba9f */
  if (C.zf) goto L_1023ba9f;
  /* 1023ba68 jmp 0x1023ba58 */
  goto L_1023ba58;
L_1023ba6a:;
  /* 1023ba6a test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 1023ba6c jne 0x1023ba9f */
  if (!C.zf) goto L_1023ba9f;
  /* 1023ba6e mov esi, eax */
  ESI = (EAX);
  /* 1023ba70 mov edx, 0x100 */
  EDX = (0x100u);
  /* 1023ba75 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 1023ba7b cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023ba7d jb 0x1023ba9f */
  if (C.cf) goto L_1023ba9f;
  /* 1023ba7f mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1023ba83 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1023ba85 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 1023ba89 mov ecx, eax */
  ECX = (EAX);
  /* 1023ba8b and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 1023ba90 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023ba92 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1023ba94 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023ba96 pop esi */
  ESI = (pop32());
  /* 1023ba97 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1023ba9a lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 1023ba9e ret  */
  ESPCHK(0x1023ba4cu, _esp0);
  ESP += 4; return;
L_1023ba9f:;
  /* 1023ba9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023baa1 pop esi */
  ESI = (pop32());
  /* 1023baa2 ret  */
  ESPCHK(0x1023ba4cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000baa3 @ 0x1023baa3 (69 bytes, 19 insns) */
void f_1023baa3(void) {
  FTRACE(0x1023baa3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023baa3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1023baa7 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1023baab sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023baae sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 1023bab1 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 1023bab5 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1023bab9 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1023babc add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1023babe and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1023bac1 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bac7 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 1023bace jne 0x1023bae7 */
  if (!C.zf) goto L_1023bae7;
  /* 1023bad0 inc dword ptr [0x102467b4] */
  { uint32_t _r=(r32((uint32_t)(0x102467b4)))+1; w32((uint32_t)(0x102467b4), (_r)); fl_inc(_r,32); }
  /* 1023bad6 cmp dword ptr [0x102467b4], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x102467b4))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023badd jne 0x1023bae7 */
  if (!C.zf) goto L_1023bae7;
  /* 1023badf push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1023bae1 call 0x1023b98a */
  push32(0x1023bae6u); f_1023b98a();
  /* 1023bae6 pop ecx */
  ECX = (pop32());
L_1023bae7:;
  /* 1023bae7 ret  */
  ESPCHK(0x1023baa3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bae8 @ 0x1023bae8 (520 bytes, 180 insns) */
void f_1023bae8(void) {
  FTRACE(0x1023bae8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023bae8 push ebp */
  push32((uint32_t)(EBP));
  /* 1023bae9 mov ebp, esp */
  EBP = (ESP);
  /* 1023baeb push ecx */
  push32((uint32_t)(ECX));
  /* 1023baec push ecx */
  push32((uint32_t)(ECX));
  /* 1023baed push ebx */
  push32((uint32_t)(EBX));
  /* 1023baee push esi */
  push32((uint32_t)(ESI));
  /* 1023baef mov esi, dword ptr [0x10242e20] */
  ESI = (r32((uint32_t)(0x10242e20)));
  /* 1023baf5 push edi */
  push32((uint32_t)(EDI));
L_1023baf6:;
  /* 1023baf6 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 1023baf9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bafc je 0x1023bba1 */
  if (C.zf) goto L_1023bba1;
  /* 1023bb02 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 1023bb05 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 1023bb0b mov eax, edi */
  EAX = (EDI);
  /* 1023bb0d sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023bb0f sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023bb12 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 1023bb15 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 1023bb18 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023bb1a cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bb1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1023bb1f jae 0x1023bb5b */
  if (!C.cf) goto L_1023bb5b;
L_1023bb21:;
  /* 1023bb21 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 1023bb23 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023bb26 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bb28 jl 0x1023bb44 */
  if ((C.sf!=C.of)) goto L_1023bb44;
  /* 1023bb2a cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bb2d jbe 0x1023bb44 */
  if ((C.cf||C.zf)) goto L_1023bb44;
  /* 1023bb2f push ebx */
  push32((uint32_t)(EBX));
  /* 1023bb30 push ecx */
  push32((uint32_t)(ECX));
  /* 1023bb31 push eax */
  push32((uint32_t)(EAX));
  /* 1023bb32 call 0x1023bcf0 */
  push32(0x1023bb37u); f_1023bcf0();
  /* 1023bb37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023bb3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023bb3c jne 0x1023bbb3 */
  if (!C.zf) goto L_1023bbb3;
  /* 1023bb3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1023bb41 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_1023bb44:;
  /* 1023bb44 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023bb47 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 1023bb4d add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023bb52 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bb54 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1023bb57 jb 0x1023bb21 */
  if (C.cf) goto L_1023bb21;
  /* 1023bb59 jmp 0x1023bb5e */
  goto L_1023bb5e;
L_1023bb5b:;
  /* 1023bb5b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1023bb5e:;
  /* 1023bb5e mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1023bb61 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 1023bb64 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 1023bb67 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1023bb6a cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bb6c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1023bb6f jae 0x1023bba4 */
  if (!C.cf) goto L_1023bba4;
L_1023bb71:;
  /* 1023bb71 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1023bb73 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bb75 jl 0x1023bb90 */
  if ((C.sf!=C.of)) goto L_1023bb90;
  /* 1023bb77 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bb7a jbe 0x1023bb90 */
  if ((C.cf||C.zf)) goto L_1023bb90;
  /* 1023bb7c push ebx */
  push32((uint32_t)(EBX));
  /* 1023bb7d push eax */
  push32((uint32_t)(EAX));
  /* 1023bb7e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 1023bb81 call 0x1023bcf0 */
  push32(0x1023bb86u); f_1023bcf0();
  /* 1023bb86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023bb89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023bb8b jne 0x1023bbb3 */
  if (!C.zf) goto L_1023bbb3;
  /* 1023bb8d mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_1023bb90:;
  /* 1023bb90 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1023bb97 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023bb9a cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bb9d jb 0x1023bb71 */
  if (C.cf) goto L_1023bb71;
  /* 1023bb9f jmp 0x1023bba4 */
  goto L_1023bba4;
L_1023bba1:;
  /* 1023bba1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1023bba4:;
  /* 1023bba4 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 1023bba6 cmp esi, dword ptr [0x10242e20] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10242e20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bbac je 0x1023bbc3 */
  if (C.zf) goto L_1023bbc3;
  /* 1023bbae jmp 0x1023baf6 */
  goto L_1023baf6;
L_1023bbb3:;
  /* 1023bbb3 mov dword ptr [0x10242e20], esi */
  w32((uint32_t)(0x10242e20), (ESI));
  /* 1023bbb9 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1023bbbb mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 1023bbbe jmp 0x1023bceb */
  goto L_1023bceb;
L_1023bbc3:;
  /* 1023bbc3 mov eax, 0x10240e00 */
  EAX = (0x10240e00u);
  /* 1023bbc8 mov edi, eax */
  EDI = (EAX);
L_1023bbca:;
  /* 1023bbca cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bbce je 0x1023bbd6 */
  if (C.zf) goto L_1023bbd6;
  /* 1023bbd0 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bbd4 jne 0x1023bbe2 */
  if (!C.zf) goto L_1023bbe2;
L_1023bbd6:;
  /* 1023bbd6 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 1023bbd8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bbda je 0x1023bcb7 */
  if (C.zf) goto L_1023bcb7;
  /* 1023bbe0 jmp 0x1023bbca */
  goto L_1023bbca;
L_1023bbe2:;
  /* 1023bbe2 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 1023bbe5 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1023bbe9 mov esi, ebx */
  ESI = (EBX);
  /* 1023bbeb mov eax, ebx */
  EAX = (EBX);
  /* 1023bbed sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023bbef sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023bbf2 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 1023bbf5 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 1023bbf8 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023bbfb cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bbfe jne 0x1023bc11 */
  if (!C.zf) goto L_1023bc11;
L_1023bc00:;
  /* 1023bc00 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bc04 jge 0x1023bc11 */
  if ((C.sf==C.of)) goto L_1023bc11;
  /* 1023bc06 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023bc09 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1023bc0c cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bc0f je 0x1023bc00 */
  if (C.zf) goto L_1023bc00;
L_1023bc11:;
  /* 1023bc11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1023bc14 push 4 */
  push32((uint32_t)(0x4u));
  /* 1023bc16 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 1023bc19 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1023bc1e push eax */
  push32((uint32_t)(EAX));
  /* 1023bc1f push esi */
  push32((uint32_t)(ESI));
  /* 1023bc20 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1023bc23 call dword ptr [0x1023e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e0a8))), 0x1023bc29u);
  /* 1023bc29 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bc2b jne 0x1023bce9 */
  if (!C.zf) goto L_1023bce9;
  /* 1023bc31 push 0 */
  push32((uint32_t)(0x0u));
  /* 1023bc33 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 1023bc36 push esi */
  push32((uint32_t)(ESI));
  /* 1023bc37 call 0x10239c80 */
  push32(0x1023bc3cu); f_10239c80();
  /* 1023bc3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1023bc3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023bc42 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1023bc44 mov ecx, ebx */
  ECX = (EBX);
  /* 1023bc46 jle 0x1023bc78 */
  if ((C.zf||C.sf!=C.of)) goto L_1023bc78;
  /* 1023bc48 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1023bc4b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1023bc4e:;
  /* 1023bc4e or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 1023bc55 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 1023bc58 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 1023bc5b mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1023bc60 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1023bc62 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1023bc64 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 1023bc6b add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023bc70 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023bc73 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1023bc76 jne 0x1023bc4e */
  if (!C.zf) goto L_1023bc4e;
L_1023bc78:;
  /* 1023bc78 mov dword ptr [0x10242e20], edi */
  w32((uint32_t)(0x10242e20), (EDI));
  /* 1023bc7e lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_1023bc84:;
  /* 1023bc84 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bc86 jae 0x1023bc94 */
  if (!C.cf) goto L_1023bc94;
  /* 1023bc88 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bc8b je 0x1023bc92 */
  if (C.zf) goto L_1023bc92;
  /* 1023bc8d add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023bc90 jmp 0x1023bc84 */
  goto L_1023bc84;
L_1023bc92:;
  /* 1023bc92 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1023bc94:;
  /* 1023bc94 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023bc96 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 1023bc98 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 1023bc9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023bc9e mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 1023bca1 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 1023bca4 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1023bca6 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1023bca9 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 1023bcad lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 1023bcb3 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1023bcb5 jmp 0x1023bceb */
  goto L_1023bceb;
L_1023bcb7:;
  /* 1023bcb7 call 0x1023b7f0 */
  push32(0x1023bcbcu); f_1023b7f0();
  /* 1023bcbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023bcbe je 0x1023bce9 */
  if (C.zf) goto L_1023bce9;
  /* 1023bcc0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1023bcc3 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 1023bcc6 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 1023bcca mov dword ptr [0x10242e20], eax */
  w32((uint32_t)(0x10242e20), (EAX));
  /* 1023bccf mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1023bcd1 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1023bcd6 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023bcd8 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1023bcdb movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 1023bcde sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1023bce1 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 1023bce7 jmp 0x1023bceb */
  goto L_1023bceb;
L_1023bce9:;
  /* 1023bce9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1023bceb:;
  /* 1023bceb pop edi */
  EDI = (pop32());
  /* 1023bcec pop esi */
  ESI = (pop32());
  /* 1023bced pop ebx */
  EBX = (pop32());
  /* 1023bcee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023bcef ret  */
  ESPCHK(0x1023bae8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bcf0 @ 0x1023bcf0 (292 bytes, 125 insns) */
void f_1023bcf0(void) {
  FTRACE(0x1023bcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023bcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1023bcf1 mov ebp, esp */
  EBP = (ESP);
  /* 1023bcf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1023bcf4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023bcf7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1023bcfa push ebx */
  push32((uint32_t)(EBX));
  /* 1023bcfb push esi */
  push32((uint32_t)(ESI));
  /* 1023bcfc mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1023bcff push edi */
  push32((uint32_t)(EDI));
  /* 1023bd00 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 1023bd02 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 1023bd08 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bd0a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1023bd0d mov eax, edi */
  EAX = (EDI);
  /* 1023bd0f mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1023bd12 jb 0x1023bd35 */
  if (C.cf) goto L_1023bd35;
  /* 1023bd14 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 1023bd17 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1023bd19 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bd1b jae 0x1023bd24 */
  if (!C.cf) goto L_1023bd24;
  /* 1023bd1d add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1023bd1f sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1023bd22 jmp 0x1023bd2d */
  goto L_1023bd2d;
L_1023bd24:;
  /* 1023bd24 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1023bd28 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 1023bd2b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1023bd2d:;
  /* 1023bd2d lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 1023bd30 jmp 0x1023be03 */
  goto L_1023be03;
L_1023bd35:;
  /* 1023bd35 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023bd37 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023bd3a je 0x1023bd3e */
  if (C.zf) goto L_1023bd3e;
  /* 1023bd3c mov eax, esi */
  EAX = (ESI);
L_1023bd3e:;
  /* 1023bd3e lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 1023bd41 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bd43 jae 0x1023bd88 */
  if (!C.cf) goto L_1023bd88;
L_1023bd45:;
  /* 1023bd45 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1023bd47 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 1023bd49 jne 0x1023bd7b */
  if (!C.zf) goto L_1023bd7b;
  /* 1023bd4b push 1 */
  push32((uint32_t)(0x1u));
  /* 1023bd4d lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 1023bd50 pop esi */
  ESI = (pop32());
L_1023bd51:;
  /* 1023bd51 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023bd54 jne 0x1023bd5a */
  if (!C.zf) goto L_1023bd5a;
  /* 1023bd56 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1023bd57 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1023bd58 jmp 0x1023bd51 */
  goto L_1023bd51;
L_1023bd5a:;
  /* 1023bd5a cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bd5c jae 0x1023bdac */
  if (!C.cf) goto L_1023bdac;
  /* 1023bd5e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bd61 jne 0x1023bd68 */
  if (!C.zf) goto L_1023bd68;
  /* 1023bd63 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1023bd66 jmp 0x1023bd74 */
  goto L_1023bd74;
L_1023bd68:;
  /* 1023bd68 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1023bd6b cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bd6e jb 0x1023be0d */
  if (C.cf) goto L_1023be0d;
L_1023bd74:;
  /* 1023bd74 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 1023bd77 mov eax, ebx */
  EAX = (EBX);
  /* 1023bd79 jmp 0x1023bd80 */
  goto L_1023bd80;
L_1023bd7b:;
  /* 1023bd7b movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1023bd7e add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1023bd80:;
  /* 1023bd80 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 1023bd83 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bd86 jb 0x1023bd45 */
  if (C.cf) goto L_1023bd45;
L_1023bd88:;
  /* 1023bd88 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_1023bd8b:;
  /* 1023bd8b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bd8d jae 0x1023be0d */
  if (!C.cf) goto L_1023be0d;
  /* 1023bd8f lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 1023bd92 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bd95 jae 0x1023be0d */
  if (!C.cf) goto L_1023be0d;
  /* 1023bd97 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1023bd99 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023bd9b jne 0x1023bddd */
  if (!C.zf) goto L_1023bddd;
  /* 1023bd9d push 1 */
  push32((uint32_t)(0x1u));
  /* 1023bd9f lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 1023bda2 pop eax */
  EAX = (pop32());
L_1023bda3:;
  /* 1023bda3 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023bda6 jne 0x1023bdcd */
  if (!C.zf) goto L_1023bdcd;
  /* 1023bda8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1023bda9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1023bdaa jmp 0x1023bda3 */
  goto L_1023bda3;
L_1023bdac:;
  /* 1023bdac lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 1023bdaf cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bdb2 jae 0x1023bdbd */
  if (!C.cf) goto L_1023bdbd;
  /* 1023bdb4 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023bdb6 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1023bdb8 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1023bdbb jmp 0x1023bdc6 */
  goto L_1023bdc6;
L_1023bdbd:;
  /* 1023bdbd and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1023bdc1 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 1023bdc4 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_1023bdc6:;
  /* 1023bdc6 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1023bdc8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023bdcb jmp 0x1023be03 */
  goto L_1023be03;
L_1023bdcd:;
  /* 1023bdcd cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bdcf jae 0x1023bde4 */
  if (!C.cf) goto L_1023bde4;
  /* 1023bdd1 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1023bdd4 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bdd7 jb 0x1023be0d */
  if (C.cf) goto L_1023be0d;
  /* 1023bdd9 mov esi, ebx */
  ESI = (EBX);
  /* 1023bddb jmp 0x1023bd8b */
  goto L_1023bd8b;
L_1023bddd:;
  /* 1023bddd movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1023bde0 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023bde2 jmp 0x1023bd8b */
  goto L_1023bd8b;
L_1023bde4:;
  /* 1023bde4 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 1023bde7 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bdea jae 0x1023bdf5 */
  if (!C.cf) goto L_1023bdf5;
  /* 1023bdec sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023bdee mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1023bdf0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1023bdf3 jmp 0x1023bdfe */
  goto L_1023bdfe;
L_1023bdf5:;
  /* 1023bdf5 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1023bdf9 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 1023bdfc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1023bdfe:;
  /* 1023bdfe mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1023be00 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_1023be03:;
  /* 1023be03 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1023be06 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1023be09 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023be0b jmp 0x1023be0f */
  goto L_1023be0f;
L_1023be0d:;
  /* 1023be0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1023be0f:;
  /* 1023be0f pop edi */
  EDI = (pop32());
  /* 1023be10 pop esi */
  ESI = (pop32());
  /* 1023be11 pop ebx */
  EBX = (pop32());
  /* 1023be12 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023be13 ret  */
  ESPCHK(0x1023bcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be14 @ 0x1023be14 (137 bytes, 50 insns) */
void f_1023be14(void) {
  FTRACE(0x1023be14u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023be14 push ebx */
  push32((uint32_t)(EBX));
  /* 1023be15 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1023be17 cmp dword ptr [0x102467b8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102467b8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023be1d push esi */
  push32((uint32_t)(ESI));
  /* 1023be1e push edi */
  push32((uint32_t)(EDI));
  /* 1023be1f jne 0x1023be63 */
  if (!C.zf) goto L_1023be63;
  /* 1023be21 push 0x1023e548 */
  push32((uint32_t)(0x1023e548u));
  /* 1023be26 call dword ptr [0x1023e0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e0b0))), 0x1023be2cu);
  /* 1023be2c mov edi, eax */
  EDI = (EAX);
  /* 1023be2e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023be30 je 0x1023be99 */
  if (C.zf) goto L_1023be99;
  /* 1023be32 mov esi, dword ptr [0x1023e088] */
  ESI = (r32((uint32_t)(0x1023e088)));
  /* 1023be38 push 0x1023e53c */
  push32((uint32_t)(0x1023e53cu));
  /* 1023be3d push edi */
  push32((uint32_t)(EDI));
  /* 1023be3e call esi */
  call_ind((uint32_t)(ESI), 0x1023be40u);
  /* 1023be40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023be42 mov dword ptr [0x102467b8], eax */
  w32((uint32_t)(0x102467b8), (EAX));
  /* 1023be47 je 0x1023be99 */
  if (C.zf) goto L_1023be99;
  /* 1023be49 push 0x1023e52c */
  push32((uint32_t)(0x1023e52cu));
  /* 1023be4e push edi */
  push32((uint32_t)(EDI));
  /* 1023be4f call esi */
  call_ind((uint32_t)(ESI), 0x1023be51u);
  /* 1023be51 push 0x1023e518 */
  push32((uint32_t)(0x1023e518u));
  /* 1023be56 push edi */
  push32((uint32_t)(EDI));
  /* 1023be57 mov dword ptr [0x102467bc], eax */
  w32((uint32_t)(0x102467bc), (EAX));
  /* 1023be5c call esi */
  call_ind((uint32_t)(ESI), 0x1023be5eu);
  /* 1023be5e mov dword ptr [0x102467c0], eax */
  w32((uint32_t)(0x102467c0), (EAX));
L_1023be63:;
  /* 1023be63 mov eax, dword ptr [0x102467bc] */
  EAX = (r32((uint32_t)(0x102467bc)));
  /* 1023be68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023be6a je 0x1023be82 */
  if (C.zf) goto L_1023be82;
  /* 1023be6c call eax */
  call_ind((uint32_t)(EAX), 0x1023be6eu);
  /* 1023be6e mov ebx, eax */
  EBX = (EAX);
  /* 1023be70 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1023be72 je 0x1023be82 */
  if (C.zf) goto L_1023be82;
  /* 1023be74 mov eax, dword ptr [0x102467c0] */
  EAX = (r32((uint32_t)(0x102467c0)));
  /* 1023be79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023be7b je 0x1023be82 */
  if (C.zf) goto L_1023be82;
  /* 1023be7d push ebx */
  push32((uint32_t)(EBX));
  /* 1023be7e call eax */
  call_ind((uint32_t)(EAX), 0x1023be80u);
  /* 1023be80 mov ebx, eax */
  EBX = (EAX);
L_1023be82:;
  /* 1023be82 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1023be86 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1023be8a push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1023be8e push ebx */
  push32((uint32_t)(EBX));
  /* 1023be8f call dword ptr [0x102467b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102467b8))), 0x1023be95u);
L_1023be95:;
  /* 1023be95 pop edi */
  EDI = (pop32());
  /* 1023be96 pop esi */
  ESI = (pop32());
  /* 1023be97 pop ebx */
  EBX = (pop32());
  /* 1023be98 ret  */
  ESPCHK(0x1023be14u, _esp0);
  ESP += 4; return;
L_1023be99:;
  /* 1023be99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023be9b jmp 0x1023be95 */
  goto L_1023be95;
}

/* _strncpy @ 0x1023bea0 (254 bytes, 109 insns) */
void f_1023bea0(void) {
  FTRACE(0x1023bea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023bea0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1023bea4 push edi */
  push32((uint32_t)(EDI));
  /* 1023bea5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1023bea7 je 0x1023bf23 */
  if (C.zf) goto L_1023bf23;
  /* 1023bea9 push esi */
  push32((uint32_t)(ESI));
  /* 1023beaa push ebx */
  push32((uint32_t)(EBX));
  /* 1023beab mov ebx, ecx */
  EBX = (ECX);
  /* 1023bead mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1023beb1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1023beb7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1023bebb jne 0x1023bec4 */
  if (!C.zf) goto L_1023bec4;
  /* 1023bebd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1023bec0 jne 0x1023bf31 */
  if (!C.zf) goto L_1023bf31;
  /* 1023bec2 jmp 0x1023bee5 */
  goto L_1023bee5;
L_1023bec4:;
  /* 1023bec4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1023bec6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1023bec7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1023bec9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1023beca dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1023becb je 0x1023bef2 */
  if (C.zf) goto L_1023bef2;
  /* 1023becd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023becf je 0x1023befa */
  if (C.zf) goto L_1023befa;
  /* 1023bed1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1023bed7 jne 0x1023bec4 */
  if (!C.zf) goto L_1023bec4;
  /* 1023bed9 mov ebx, ecx */
  EBX = (ECX);
  /* 1023bedb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1023bede jne 0x1023bf31 */
  if (!C.zf) goto L_1023bf31;
L_1023bee0:;
  /* 1023bee0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1023bee3 je 0x1023bef2 */
  if (C.zf) goto L_1023bef2;
L_1023bee5:;
  /* 1023bee5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1023bee7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1023bee8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1023beea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1023beeb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1023beed je 0x1023bf1e */
  if (C.zf) goto L_1023bf1e;
  /* 1023beef dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1023bef0 jne 0x1023bee5 */
  if (!C.zf) goto L_1023bee5;
L_1023bef2:;
  /* 1023bef2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1023bef6 pop ebx */
  EBX = (pop32());
  /* 1023bef7 pop esi */
  ESI = (pop32());
  /* 1023bef8 pop edi */
  EDI = (pop32());
  /* 1023bef9 ret  */
  ESPCHK(0x1023bea0u, _esp0);
  ESP += 4; return;
L_1023befa:;
  /* 1023befa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1023bf00 je 0x1023bf14 */
  if (C.zf) goto L_1023bf14;
L_1023bf02:;
  /* 1023bf02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1023bf04 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1023bf05 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1023bf06 je 0x1023bf96 */
  if (C.zf) goto L_1023bf96;
  /* 1023bf0c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1023bf12 jne 0x1023bf02 */
  if (!C.zf) goto L_1023bf02;
L_1023bf14:;
  /* 1023bf14 mov ebx, ecx */
  EBX = (ECX);
  /* 1023bf16 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1023bf19 jne 0x1023bf87 */
  if (!C.zf) goto L_1023bf87;
L_1023bf1b:;
  /* 1023bf1b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1023bf1d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1023bf1e:;
  /* 1023bf1e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1023bf1f jne 0x1023bf1b */
  if (!C.zf) goto L_1023bf1b;
  /* 1023bf21 pop ebx */
  EBX = (pop32());
  /* 1023bf22 pop esi */
  ESI = (pop32());
L_1023bf23:;
  /* 1023bf23 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1023bf27 pop edi */
  EDI = (pop32());
  /* 1023bf28 ret  */
  ESPCHK(0x1023bea0u, _esp0);
  ESP += 4; return;
L_1023bf29:;
  /* 1023bf29 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1023bf2b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023bf2e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1023bf2f je 0x1023bee0 */
  if (C.zf) goto L_1023bee0;
L_1023bf31:;
  /* 1023bf31 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1023bf36 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1023bf38 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023bf3a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1023bf3d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1023bf3f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1023bf41 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023bf44 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1023bf49 je 0x1023bf29 */
  if (C.zf) goto L_1023bf29;
  /* 1023bf4b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1023bf4d je 0x1023bf7b */
  if (C.zf) goto L_1023bf7b;
  /* 1023bf4f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1023bf51 je 0x1023bf71 */
  if (C.zf) goto L_1023bf71;
  /* 1023bf53 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1023bf59 je 0x1023bf67 */
  if (C.zf) goto L_1023bf67;
  /* 1023bf5b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1023bf61 jne 0x1023bf29 */
  if (!C.zf) goto L_1023bf29;
  /* 1023bf63 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1023bf65 jmp 0x1023bf7f */
  goto L_1023bf7f;
L_1023bf67:;
  /* 1023bf67 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1023bf6d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1023bf6f jmp 0x1023bf7f */
  goto L_1023bf7f;
L_1023bf71:;
  /* 1023bf71 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1023bf77 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1023bf79 jmp 0x1023bf7f */
  goto L_1023bf7f;
L_1023bf7b:;
  /* 1023bf7b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1023bf7d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1023bf7f:;
  /* 1023bf7f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023bf82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023bf84 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1023bf85 je 0x1023bf91 */
  if (C.zf) goto L_1023bf91;
L_1023bf87:;
  /* 1023bf87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1023bf89:;
  /* 1023bf89 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1023bf8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023bf8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1023bf8f jne 0x1023bf89 */
  if (!C.zf) goto L_1023bf89;
L_1023bf91:;
  /* 1023bf91 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1023bf94 jne 0x1023bf1b */
  if (!C.zf) goto L_1023bf1b;
L_1023bf96:;
  /* 1023bf96 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1023bf9a pop ebx */
  EBX = (pop32());
  /* 1023bf9b pop esi */
  ESI = (pop32());
  /* 1023bf9c pop edi */
  EDI = (pop32());
  /* 1023bf9d ret  */
  ESPCHK(0x1023bea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf9e @ 0x1023bf9e (115 bytes, 37 insns) */
void f_1023bf9e(void) {
  FTRACE(0x1023bf9eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023bf9e push esi */
  push32((uint32_t)(ESI));
  /* 1023bf9f call 0x1023c01a */
  push32(0x1023bfa4u); f_1023c01a();
  /* 1023bfa4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1023bfa8 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1023bfaa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1023bfac mov eax, 0x10242e30 */
  EAX = (0x10242e30u);
L_1023bfb1:;
  /* 1023bfb1 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bfb3 je 0x1023bfd7 */
  if (C.zf) goto L_1023bfd7;
  /* 1023bfb5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023bfb8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1023bfb9 cmp eax, 0x10242f98 */
  { uint32_t _a=(EAX),_b=(0x10242f98u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bfbe jl 0x1023bfb1 */
  if ((C.sf!=C.of)) goto L_1023bfb1;
  /* 1023bfc0 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bfc3 jb 0x1023bfe7 */
  if (C.cf) goto L_1023bfe7;
  /* 1023bfc5 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bfc8 ja 0x1023bfe7 */
  if ((!C.cf&&!C.zf)) goto L_1023bfe7;
  /* 1023bfca call 0x1023c011 */
  push32(0x1023bfcfu); f_1023c011();
  /* 1023bfcf mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1023bfd5 pop esi */
  ESI = (pop32());
  /* 1023bfd6 ret  */
  ESPCHK(0x1023bf9eu, _esp0);
  ESP += 4; return;
L_1023bfd7:;
  /* 1023bfd7 call 0x1023c011 */
  push32(0x1023bfdcu); f_1023c011();
  /* 1023bfdc mov ecx, dword ptr [esi*8 + 0x10242e34] */
  ECX = (r32((uint32_t)(ESI*8 + 0x10242e34)));
  /* 1023bfe3 pop esi */
  ESI = (pop32());
  /* 1023bfe4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1023bfe6 ret  */
  ESPCHK(0x1023bf9eu, _esp0);
  ESP += 4; return;
L_1023bfe7:;
  /* 1023bfe7 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bfed jb 0x1023c004 */
  if (C.cf) goto L_1023c004;
  /* 1023bfef cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023bff5 ja 0x1023c004 */
  if ((!C.cf&&!C.zf)) goto L_1023c004;
  /* 1023bff7 call 0x1023c011 */
  push32(0x1023bffcu); f_1023c011();
  /* 1023bffc mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1023c002 pop esi */
  ESI = (pop32());
  /* 1023c003 ret  */
  ESPCHK(0x1023bf9eu, _esp0);
  ESP += 4; return;
L_1023c004:;
  /* 1023c004 call 0x1023c011 */
  push32(0x1023c009u); f_1023c011();
  /* 1023c009 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1023c00f pop esi */
  ESI = (pop32());
  /* 1023c010 ret  */
  ESPCHK(0x1023bf9eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c011 @ 0x1023c011 (9 bytes, 3 insns) */
void f_1023c011(void) {
  FTRACE(0x1023c011u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023c011 call 0x102380e8 */
  push32(0x1023c016u); f_102380e8();
  /* 1023c016 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023c019 ret  */
  ESPCHK(0x1023c011u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c01a @ 0x1023c01a (9 bytes, 3 insns) */
void f_1023c01a(void) {
  FTRACE(0x1023c01au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023c01a call 0x102380e8 */
  push32(0x1023c01fu); f_102380e8();
  /* 1023c01f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023c022 ret  */
  ESPCHK(0x1023c01au, _esp0);
  ESP += 4; return;
}

/* FUN_1000c023 @ 0x1023c023 (127 bytes, 48 insns) */
void f_1023c023(void) {
  FTRACE(0x1023c023u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023c023 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1023c027 push esi */
  push32((uint32_t)(ESI));
  /* 1023c028 cmp ecx, dword ptr [0x10247ce0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10247ce0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c02e push edi */
  push32((uint32_t)(EDI));
  /* 1023c02f jae 0x1023c089 */
  if (!C.cf) goto L_1023c089;
  /* 1023c031 mov eax, ecx */
  EAX = (ECX);
  /* 1023c033 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1023c036 lea edi, [eax*4 + 0x10247be0] */
  EDI = ((uint32_t)(EAX*4 + 0x10247be0));
  /* 1023c03d mov eax, ecx */
  EAX = (ECX);
  /* 1023c03f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1023c042 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1023c045 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1023c047 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1023c04a add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023c04c test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1023c050 je 0x1023c089 */
  if (C.zf) goto L_1023c089;
  /* 1023c052 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c055 je 0x1023c089 */
  if (C.zf) goto L_1023c089;
  /* 1023c057 cmp dword ptr [0x102465f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102465f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c05e jne 0x1023c07f */
  if (!C.zf) goto L_1023c07f;
  /* 1023c060 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023c062 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023c064 je 0x1023c076 */
  if (C.zf) goto L_1023c076;
  /* 1023c066 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1023c067 je 0x1023c071 */
  if (C.zf) goto L_1023c071;
  /* 1023c069 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1023c06a jne 0x1023c07f */
  if (!C.zf) goto L_1023c07f;
  /* 1023c06c push eax */
  push32((uint32_t)(EAX));
  /* 1023c06d push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1023c06f jmp 0x1023c079 */
  goto L_1023c079;
L_1023c071:;
  /* 1023c071 push eax */
  push32((uint32_t)(EAX));
  /* 1023c072 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1023c074 jmp 0x1023c079 */
  goto L_1023c079;
L_1023c076:;
  /* 1023c076 push eax */
  push32((uint32_t)(EAX));
  /* 1023c077 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_1023c079:;
  /* 1023c079 call dword ptr [0x1023e0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e0b4))), 0x1023c07fu);
L_1023c07f:;
  /* 1023c07f mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1023c081 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 1023c085 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023c087 jmp 0x1023c09f */
  goto L_1023c09f;
L_1023c089:;
  /* 1023c089 call 0x1023c011 */
  push32(0x1023c08eu); f_1023c011();
  /* 1023c08e mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1023c094 call 0x1023c01a */
  push32(0x1023c099u); f_1023c01a();
  /* 1023c099 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1023c09c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1023c09f:;
  /* 1023c09f pop edi */
  EDI = (pop32());
  /* 1023c0a0 pop esi */
  ESI = (pop32());
  /* 1023c0a1 ret  */
  ESPCHK(0x1023c023u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0a2 @ 0x1023c0a2 (66 bytes, 19 insns) */
void f_1023c0a2(void) {
  FTRACE(0x1023c0a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023c0a2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1023c0a6 cmp eax, dword ptr [0x10247ce0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10247ce0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c0ac jae 0x1023c0cd */
  if (!C.cf) goto L_1023c0cd;
  /* 1023c0ae mov ecx, eax */
  ECX = (EAX);
  /* 1023c0b0 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1023c0b3 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1023c0b6 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1023c0b9 mov ecx, dword ptr [ecx*4 + 0x10247be0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10247be0)));
  /* 1023c0c0 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1023c0c5 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 1023c0c8 je 0x1023c0cd */
  if (C.zf) goto L_1023c0cd;
  /* 1023c0ca mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 1023c0cc ret  */
  ESPCHK(0x1023c0a2u, _esp0);
  ESP += 4; return;
L_1023c0cd:;
  /* 1023c0cd call 0x1023c011 */
  push32(0x1023c0d2u); f_1023c011();
  /* 1023c0d2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1023c0d8 call 0x1023c01a */
  push32(0x1023c0ddu); f_1023c01a();
  /* 1023c0dd and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1023c0e0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1023c0e3 ret  */
  ESPCHK(0x1023c0a2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0e4 @ 0x1023c0e4 (95 bytes, 34 insns) */
void f_1023c0e4(void) {
  FTRACE(0x1023c0e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023c0e4 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1023c0e8 push ebx */
  push32((uint32_t)(EBX));
  /* 1023c0e9 mov ecx, eax */
  ECX = (EAX);
  /* 1023c0eb and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1023c0ee sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1023c0f1 push esi */
  push32((uint32_t)(ESI));
  /* 1023c0f2 push edi */
  push32((uint32_t)(EDI));
  /* 1023c0f3 mov esi, dword ptr [ecx*4 + 0x10247be0] */
  ESI = (r32((uint32_t)(ECX*4 + 0x10247be0)));
  /* 1023c0fa lea ebx, [ecx*4 + 0x10247be0] */
  EBX = ((uint32_t)(ECX*4 + 0x10247be0));
  /* 1023c101 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 1023c104 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 1023c107 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023c109 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c10d jne 0x1023c132 */
  if (!C.zf) goto L_1023c132;
  /* 1023c10f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1023c111 call 0x1023a0b3 */
  push32(0x1023c116u); f_1023a0b3();
  /* 1023c116 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c11a pop ecx */
  ECX = (pop32());
  /* 1023c11b jne 0x1023c12a */
  if (!C.zf) goto L_1023c12a;
  /* 1023c11d lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 1023c120 push eax */
  push32((uint32_t)(EAX));
  /* 1023c121 call dword ptr [0x1023e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e094))), 0x1023c127u);
  /* 1023c127 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1023c12a:;
  /* 1023c12a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1023c12c call 0x1023a114 */
  push32(0x1023c131u); f_1023a114();
  /* 1023c131 pop ecx */
  ECX = (pop32());
L_1023c132:;
  /* 1023c132 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1023c134 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 1023c138 push eax */
  push32((uint32_t)(EAX));
  /* 1023c139 call dword ptr [0x1023e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e00c))), 0x1023c13fu);
  /* 1023c13f pop edi */
  EDI = (pop32());
  /* 1023c140 pop esi */
  ESI = (pop32());
  /* 1023c141 pop ebx */
  EBX = (pop32());
  /* 1023c142 ret  */
  ESPCHK(0x1023c0e4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c143 @ 0x1023c143 (34 bytes, 10 insns) */
void f_1023c143(void) {
  FTRACE(0x1023c143u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023c143 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1023c147 mov ecx, eax */
  ECX = (EAX);
  /* 1023c149 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1023c14c sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1023c14f lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1023c152 mov ecx, dword ptr [ecx*4 + 0x10247be0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10247be0)));
  /* 1023c159 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 1023c15d push eax */
  push32((uint32_t)(EAX));
  /* 1023c15e call dword ptr [0x1023e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e008))), 0x1023c164u);
  /* 1023c164 ret  */
  ESPCHK(0x1023c143u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1e6 @ 0x1023c1e6 (46 bytes, 22 insns) */
void f_1023c1e6(void) {
  FTRACE(0x1023c1e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023c1e6 push esi */
  push32((uint32_t)(ESI));
  /* 1023c1e7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1023c1eb push esi */
  push32((uint32_t)(ESI));
  /* 1023c1ec call 0x1023c214 */
  push32(0x1023c1f1u); f_1023c214();
  /* 1023c1f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023c1f3 pop ecx */
  ECX = (pop32());
  /* 1023c1f4 je 0x1023c1fb */
  if (C.zf) goto L_1023c1fb;
  /* 1023c1f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1023c1f9 pop esi */
  ESI = (pop32());
  /* 1023c1fa ret  */
  ESPCHK(0x1023c1e6u, _esp0);
  ESP += 4; return;
L_1023c1fb:;
  /* 1023c1fb test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 1023c1ff je 0x1023c210 */
  if (C.zf) goto L_1023c210;
  /* 1023c201 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1023c204 call 0x1023d360 */
  push32(0x1023c209u); f_1023d360();
  /* 1023c209 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1023c20b pop ecx */
  ECX = (pop32());
  /* 1023c20c pop esi */
  ESI = (pop32());
  /* 1023c20d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023c20f ret  */
  ESPCHK(0x1023c1e6u, _esp0);
  ESP += 4; return;
L_1023c210:;
  /* 1023c210 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023c212 pop esi */
  ESI = (pop32());
  /* 1023c213 ret  */
  ESPCHK(0x1023c1e6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c214 @ 0x1023c214 (92 bytes, 40 insns) */
void f_1023c214(void) {
  FTRACE(0x1023c214u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023c214 push ebx */
  push32((uint32_t)(EBX));
  /* 1023c215 push esi */
  push32((uint32_t)(ESI));
  /* 1023c216 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1023c21a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1023c21c push edi */
  push32((uint32_t)(EDI));
  /* 1023c21d mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1023c220 mov ecx, eax */
  ECX = (EAX);
  /* 1023c222 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1023c225 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c228 jne 0x1023c261 */
  if (!C.zf) goto L_1023c261;
  /* 1023c22a test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 1023c22e je 0x1023c261 */
  if (C.zf) goto L_1023c261;
  /* 1023c230 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1023c233 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 1023c235 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023c237 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1023c239 jle 0x1023c261 */
  if ((C.zf||C.sf!=C.of)) goto L_1023c261;
  /* 1023c23b push edi */
  push32((uint32_t)(EDI));
  /* 1023c23c push eax */
  push32((uint32_t)(EAX));
  /* 1023c23d push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1023c240 call 0x10238d15 */
  push32(0x1023c245u); f_10238d15();
  /* 1023c245 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023c248 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c24a jne 0x1023c25a */
  if (!C.zf) goto L_1023c25a;
  /* 1023c24c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1023c24f test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 1023c251 je 0x1023c261 */
  if (C.zf) goto L_1023c261;
  /* 1023c253 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 1023c255 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1023c258 jmp 0x1023c261 */
  goto L_1023c261;
L_1023c25a:;
  /* 1023c25a or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1023c25e or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_1023c261:;
  /* 1023c261 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1023c264 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1023c268 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1023c26a pop edi */
  EDI = (pop32());
  /* 1023c26b mov eax, ebx */
  EAX = (EBX);
  /* 1023c26d pop esi */
  ESI = (pop32());
  /* 1023c26e pop ebx */
  EBX = (pop32());
  /* 1023c26f ret  */
  ESPCHK(0x1023c214u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c279 @ 0x1023c279 (164 bytes, 66 insns) */
void f_1023c279(void) {
  FTRACE(0x1023c279u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023c279 push ebx */
  push32((uint32_t)(EBX));
  /* 1023c27a push esi */
  push32((uint32_t)(ESI));
  /* 1023c27b push edi */
  push32((uint32_t)(EDI));
  /* 1023c27c push 2 */
  push32((uint32_t)(0x2u));
  /* 1023c27e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1023c280 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1023c282 call 0x1023a0b3 */
  push32(0x1023c287u); f_1023a0b3();
  /* 1023c287 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1023c289 pop ecx */
  ECX = (pop32());
  /* 1023c28a cmp dword ptr [0x10247bc0], esi */
  { uint32_t _a=(r32((uint32_t)(0x10247bc0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c290 jle 0x1023c306 */
  if ((C.zf||C.sf!=C.of)) goto L_1023c306;
L_1023c292:;
  /* 1023c292 mov eax, dword ptr [0x10246ba8] */
  EAX = (r32((uint32_t)(0x10246ba8)));
  /* 1023c297 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1023c29a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023c29c je 0x1023c2fd */
  if (C.zf) goto L_1023c2fd;
  /* 1023c29e test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1023c2a2 je 0x1023c2fd */
  if (C.zf) goto L_1023c2fd;
  /* 1023c2a4 push eax */
  push32((uint32_t)(EAX));
  /* 1023c2a5 push esi */
  push32((uint32_t)(ESI));
  /* 1023c2a6 call 0x1023905d */
  push32(0x1023c2abu); f_1023905d();
  /* 1023c2ab mov eax, dword ptr [0x10246ba8] */
  EAX = (r32((uint32_t)(0x10246ba8)));
  /* 1023c2b0 pop ecx */
  ECX = (pop32());
  /* 1023c2b1 pop ecx */
  ECX = (pop32());
  /* 1023c2b2 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1023c2b5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1023c2b8 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 1023c2bb je 0x1023c2ed */
  if (C.zf) goto L_1023c2ed;
  /* 1023c2bd cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c2c2 jne 0x1023c2d3 */
  if (!C.zf) goto L_1023c2d3;
  /* 1023c2c4 push eax */
  push32((uint32_t)(EAX));
  /* 1023c2c5 call 0x1023c1e6 */
  push32(0x1023c2cau); f_1023c1e6();
  /* 1023c2ca cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c2cd pop ecx */
  ECX = (pop32());
  /* 1023c2ce je 0x1023c2ed */
  if (C.zf) goto L_1023c2ed;
  /* 1023c2d0 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1023c2d1 jmp 0x1023c2ed */
  goto L_1023c2ed;
L_1023c2d3:;
  /* 1023c2d3 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c2d8 jne 0x1023c2ed */
  if (!C.zf) goto L_1023c2ed;
  /* 1023c2da test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 1023c2dd je 0x1023c2ed */
  if (C.zf) goto L_1023c2ed;
  /* 1023c2df push eax */
  push32((uint32_t)(EAX));
  /* 1023c2e0 call 0x1023c1e6 */
  push32(0x1023c2e5u); f_1023c1e6();
  /* 1023c2e5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c2e8 pop ecx */
  ECX = (pop32());
  /* 1023c2e9 jne 0x1023c2ed */
  if (!C.zf) goto L_1023c2ed;
  /* 1023c2eb or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_1023c2ed:;
  /* 1023c2ed mov eax, dword ptr [0x10246ba8] */
  EAX = (r32((uint32_t)(0x10246ba8)));
  /* 1023c2f2 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 1023c2f5 push esi */
  push32((uint32_t)(ESI));
  /* 1023c2f6 call 0x102390af */
  push32(0x1023c2fbu); f_102390af();
  /* 1023c2fb pop ecx */
  ECX = (pop32());
  /* 1023c2fc pop ecx */
  ECX = (pop32());
L_1023c2fd:;
  /* 1023c2fd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1023c2fe cmp esi, dword ptr [0x10247bc0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10247bc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c304 jl 0x1023c292 */
  if ((C.sf!=C.of)) goto L_1023c292;
L_1023c306:;
  /* 1023c306 push 2 */
  push32((uint32_t)(0x2u));
  /* 1023c308 call 0x1023a114 */
  push32(0x1023c30du); f_1023a114();
  /* 1023c30d cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c312 pop ecx */
  ECX = (pop32());
  /* 1023c313 mov eax, ebx */
  EAX = (EBX);
  /* 1023c315 je 0x1023c319 */
  if (C.zf) goto L_1023c319;
  /* 1023c317 mov eax, edi */
  EAX = (EDI);
L_1023c319:;
  /* 1023c319 pop edi */
  EDI = (pop32());
  /* 1023c31a pop esi */
  ESI = (pop32());
  /* 1023c31b pop ebx */
  EBX = (pop32());
  /* 1023c31c ret  */
  ESPCHK(0x1023c279u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c31d @ 0x1023c31d (318 bytes, 123 insns) */
void f_1023c31d(void) {
  FTRACE(0x1023c31du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023c31d push ebp */
  push32((uint32_t)(EBP));
  /* 1023c31e mov ebp, esp */
  EBP = (ESP);
  /* 1023c320 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1023c322 push 0x1023e560 */
  push32((uint32_t)(0x1023e560u));
  /* 1023c327 push 0x1023d0d0 */
  push32((uint32_t)(0x1023d0d0u));
  /* 1023c32c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1023c332 push eax */
  push32((uint32_t)(EAX));
  /* 1023c333 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1023c33a sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023c33d push ebx */
  push32((uint32_t)(EBX));
  /* 1023c33e push esi */
  push32((uint32_t)(ESI));
  /* 1023c33f push edi */
  push32((uint32_t)(EDI));
  /* 1023c340 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1023c343 mov eax, dword ptr [0x10246804] */
  EAX = (r32((uint32_t)(0x10246804)));
  /* 1023c348 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1023c34a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c34c jne 0x1023c38c */
  if (!C.zf) goto L_1023c38c;
  /* 1023c34e lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1023c351 push eax */
  push32((uint32_t)(EAX));
  /* 1023c352 push 1 */
  push32((uint32_t)(0x1u));
  /* 1023c354 pop esi */
  ESI = (pop32());
  /* 1023c355 push esi */
  push32((uint32_t)(ESI));
  /* 1023c356 push 0x1023e558 */
  push32((uint32_t)(0x1023e558u));
  /* 1023c35b push esi */
  push32((uint32_t)(ESI));
  /* 1023c35c call dword ptr [0x1023e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e0c0))), 0x1023c362u);
  /* 1023c362 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023c364 je 0x1023c36a */
  if (C.zf) goto L_1023c36a;
  /* 1023c366 mov eax, esi */
  EAX = (ESI);
  /* 1023c368 jmp 0x1023c387 */
  goto L_1023c387;
L_1023c36a:;
  /* 1023c36a lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1023c36d push eax */
  push32((uint32_t)(EAX));
  /* 1023c36e push esi */
  push32((uint32_t)(ESI));
  /* 1023c36f push 0x1023e554 */
  push32((uint32_t)(0x1023e554u));
  /* 1023c374 push esi */
  push32((uint32_t)(ESI));
  /* 1023c375 push ebx */
  push32((uint32_t)(EBX));
  /* 1023c376 call dword ptr [0x1023e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e0bc))), 0x1023c37cu);
  /* 1023c37c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023c37e je 0x1023c452 */
  if (C.zf) goto L_1023c452;
  /* 1023c384 push 2 */
  push32((uint32_t)(0x2u));
  /* 1023c386 pop eax */
  EAX = (pop32());
L_1023c387:;
  /* 1023c387 mov dword ptr [0x10246804], eax */
  w32((uint32_t)(0x10246804), (EAX));
L_1023c38c:;
  /* 1023c38c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c38f jne 0x1023c3b5 */
  if (!C.zf) goto L_1023c3b5;
  /* 1023c391 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1023c394 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c396 jne 0x1023c39d */
  if (!C.zf) goto L_1023c39d;
  /* 1023c398 mov eax, dword ptr [0x102467d8] */
  EAX = (r32((uint32_t)(0x102467d8)));
L_1023c39d:;
  /* 1023c39d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1023c3a0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1023c3a3 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1023c3a6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1023c3a9 push eax */
  push32((uint32_t)(EAX));
  /* 1023c3aa call dword ptr [0x1023e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e0bc))), 0x1023c3b0u);
  /* 1023c3b0 jmp 0x1023c454 */
  goto L_1023c454;
L_1023c3b5:;
  /* 1023c3b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c3b8 jne 0x1023c452 */
  if (!C.zf) goto L_1023c452;
  /* 1023c3be cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c3c1 jne 0x1023c3cb */
  if (!C.zf) goto L_1023c3cb;
  /* 1023c3c3 mov eax, dword ptr [0x102467e8] */
  EAX = (r32((uint32_t)(0x102467e8)));
  /* 1023c3c8 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1023c3cb:;
  /* 1023c3cb push ebx */
  push32((uint32_t)(EBX));
  /* 1023c3cc push ebx */
  push32((uint32_t)(EBX));
  /* 1023c3cd push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1023c3d0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1023c3d3 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1023c3d6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1023c3d8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023c3da and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1023c3dd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1023c3de push eax */
  push32((uint32_t)(EAX));
  /* 1023c3df push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1023c3e2 call dword ptr [0x1023e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e0b8))), 0x1023c3e8u);
  /* 1023c3e8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1023c3eb cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c3ed je 0x1023c452 */
  if (C.zf) goto L_1023c452;
  /* 1023c3ef mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1023c3f2 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 1023c3f5 mov eax, edi */
  EAX = (EDI);
  /* 1023c3f7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023c3fa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1023c3fc call 0x1023af70 */
  push32(0x1023c401u); f_1023af70();
  /* 1023c401 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1023c404 mov esi, esp */
  ESI = (ESP);
  /* 1023c406 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 1023c409 push edi */
  push32((uint32_t)(EDI));
  /* 1023c40a push ebx */
  push32((uint32_t)(EBX));
  /* 1023c40b push esi */
  push32((uint32_t)(ESI));
  /* 1023c40c call 0x10239c80 */
  push32(0x1023c411u); f_10239c80();
  /* 1023c411 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023c414 jmp 0x1023c421 */
  goto L_1023c421;
  /* 1023c416 push 1 */
  push32((uint32_t)(0x1u));
  /* 1023c418 pop eax */
  EAX = (pop32());
  /* 1023c419 ret  */
  ESPCHK(0x1023c31du, _esp0);
  ESP += 4; return;
  /* 1023c41a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1023c41d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1023c41f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1023c421:;
  /* 1023c421 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1023c425 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c427 je 0x1023c452 */
  if (C.zf) goto L_1023c452;
  /* 1023c429 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1023c42c push esi */
  push32((uint32_t)(ESI));
  /* 1023c42d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1023c430 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1023c433 push 1 */
  push32((uint32_t)(0x1u));
  /* 1023c435 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1023c438 call dword ptr [0x1023e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e0b8))), 0x1023c43eu);
  /* 1023c43e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c440 je 0x1023c452 */
  if (C.zf) goto L_1023c452;
  /* 1023c442 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1023c445 push eax */
  push32((uint32_t)(EAX));
  /* 1023c446 push esi */
  push32((uint32_t)(ESI));
  /* 1023c447 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1023c44a call dword ptr [0x1023e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e0c0))), 0x1023c450u);
  /* 1023c450 jmp 0x1023c454 */
  goto L_1023c454;
L_1023c452:;
  /* 1023c452 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1023c454:;
  /* 1023c454 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 1023c457 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1023c45a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1023c461 pop edi */
  EDI = (pop32());
  /* 1023c462 pop esi */
  ESI = (pop32());
  /* 1023c463 pop ebx */
  EBX = (pop32());
  /* 1023c464 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023c465 ret  */
  ESPCHK(0x1023c31du, _esp0);
  ESP += 4; return;
}

/* FUN_1000c466 @ 0x1023c466 (511 bytes, 193 insns) */
void f_1023c466(void) {
  FTRACE(0x1023c466u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023c466 push ebp */
  push32((uint32_t)(EBP));
  /* 1023c467 mov ebp, esp */
  EBP = (ESP);
  /* 1023c469 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1023c46b push 0x1023e570 */
  push32((uint32_t)(0x1023e570u));
  /* 1023c470 push 0x1023d0d0 */
  push32((uint32_t)(0x1023d0d0u));
  /* 1023c475 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1023c47b push eax */
  push32((uint32_t)(EAX));
  /* 1023c47c mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1023c483 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023c486 push ebx */
  push32((uint32_t)(EBX));
  /* 1023c487 push esi */
  push32((uint32_t)(ESI));
  /* 1023c488 push edi */
  push32((uint32_t)(EDI));
  /* 1023c489 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1023c48c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1023c48e cmp dword ptr [0x10246808], edi */
  { uint32_t _a=(r32((uint32_t)(0x10246808))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c494 jne 0x1023c4dc */
  if (!C.zf) goto L_1023c4dc;
  /* 1023c496 push edi */
  push32((uint32_t)(EDI));
  /* 1023c497 push edi */
  push32((uint32_t)(EDI));
  /* 1023c498 push 1 */
  push32((uint32_t)(0x1u));
  /* 1023c49a pop ebx */
  EBX = (pop32());
  /* 1023c49b push ebx */
  push32((uint32_t)(EBX));
  /* 1023c49c push 0x1023e558 */
  push32((uint32_t)(0x1023e558u));
  /* 1023c4a1 mov esi, 0x100 */
  ESI = (0x100u);
  /* 1023c4a6 push esi */
  push32((uint32_t)(ESI));
  /* 1023c4a7 push edi */
  push32((uint32_t)(EDI));
  /* 1023c4a8 call dword ptr [0x1023e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e0c8))), 0x1023c4aeu);
  /* 1023c4ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023c4b0 je 0x1023c4ba */
  if (C.zf) goto L_1023c4ba;
  /* 1023c4b2 mov dword ptr [0x10246808], ebx */
  w32((uint32_t)(0x10246808), (EBX));
  /* 1023c4b8 jmp 0x1023c4dc */
  goto L_1023c4dc;
L_1023c4ba:;
  /* 1023c4ba push edi */
  push32((uint32_t)(EDI));
  /* 1023c4bb push edi */
  push32((uint32_t)(EDI));
  /* 1023c4bc push ebx */
  push32((uint32_t)(EBX));
  /* 1023c4bd push 0x1023e554 */
  push32((uint32_t)(0x1023e554u));
  /* 1023c4c2 push esi */
  push32((uint32_t)(ESI));
  /* 1023c4c3 push edi */
  push32((uint32_t)(EDI));
  /* 1023c4c4 call dword ptr [0x1023e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e0c4))), 0x1023c4cau);
  /* 1023c4ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023c4cc je 0x1023c5f4 */
  if (C.zf) goto L_1023c5f4;
  /* 1023c4d2 mov dword ptr [0x10246808], 2 */
  w32((uint32_t)(0x10246808), (0x2u));
L_1023c4dc:;
  /* 1023c4dc cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c4df jle 0x1023c4f1 */
  if ((C.zf||C.sf!=C.of)) goto L_1023c4f1;
  /* 1023c4e1 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1023c4e4 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1023c4e7 call 0x1023c68a */
  push32(0x1023c4ecu); f_1023c68a();
  /* 1023c4ec pop ecx */
  ECX = (pop32());
  /* 1023c4ed pop ecx */
  ECX = (pop32());
  /* 1023c4ee mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1023c4f1:;
  /* 1023c4f1 mov eax, dword ptr [0x10246808] */
  EAX = (r32((uint32_t)(0x10246808)));
  /* 1023c4f6 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c4f9 jne 0x1023c518 */
  if (!C.zf) goto L_1023c518;
  /* 1023c4fb push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1023c4fe push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1023c501 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1023c504 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1023c507 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1023c50a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1023c50d call dword ptr [0x1023e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e0c4))), 0x1023c513u);
  /* 1023c513 jmp 0x1023c5f6 */
  goto L_1023c5f6;
L_1023c518:;
  /* 1023c518 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c51b jne 0x1023c5f4 */
  if (!C.zf) goto L_1023c5f4;
  /* 1023c521 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c524 jne 0x1023c52e */
  if (!C.zf) goto L_1023c52e;
  /* 1023c526 mov eax, dword ptr [0x102467e8] */
  EAX = (r32((uint32_t)(0x102467e8)));
  /* 1023c52b mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_1023c52e:;
  /* 1023c52e push edi */
  push32((uint32_t)(EDI));
  /* 1023c52f push edi */
  push32((uint32_t)(EDI));
  /* 1023c530 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1023c533 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1023c536 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 1023c539 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1023c53b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023c53d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1023c540 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1023c541 push eax */
  push32((uint32_t)(EAX));
  /* 1023c542 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1023c545 call dword ptr [0x1023e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e0b8))), 0x1023c54bu);
  /* 1023c54b mov ebx, eax */
  EBX = (EAX);
  /* 1023c54d mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 1023c550 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c552 je 0x1023c5f4 */
  if (C.zf) goto L_1023c5f4;
  /* 1023c558 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1023c55b lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 1023c55e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023c561 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1023c563 call 0x1023af70 */
  push32(0x1023c568u); f_1023af70();
  /* 1023c568 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1023c56b mov eax, esp */
  EAX = (ESP);
  /* 1023c56d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1023c570 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1023c574 jmp 0x1023c589 */
  goto L_1023c589;
  /* 1023c576 push 1 */
  push32((uint32_t)(0x1u));
  /* 1023c578 pop eax */
  EAX = (pop32());
  /* 1023c579 ret  */
  ESPCHK(0x1023c466u, _esp0);
  ESP += 4; return;
  /* 1023c57a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1023c57d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1023c57f mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 1023c582 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1023c586 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_1023c589:;
  /* 1023c589 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c58c je 0x1023c5f4 */
  if (C.zf) goto L_1023c5f4;
  /* 1023c58e push ebx */
  push32((uint32_t)(EBX));
  /* 1023c58f push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1023c592 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1023c595 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1023c598 push 1 */
  push32((uint32_t)(0x1u));
  /* 1023c59a push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1023c59d call dword ptr [0x1023e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e0b8))), 0x1023c5a3u);
  /* 1023c5a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023c5a5 je 0x1023c5f4 */
  if (C.zf) goto L_1023c5f4;
  /* 1023c5a7 push edi */
  push32((uint32_t)(EDI));
  /* 1023c5a8 push edi */
  push32((uint32_t)(EDI));
  /* 1023c5a9 push ebx */
  push32((uint32_t)(EBX));
  /* 1023c5aa push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1023c5ad push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1023c5b0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1023c5b3 call dword ptr [0x1023e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e0c8))), 0x1023c5b9u);
  /* 1023c5b9 mov esi, eax */
  ESI = (EAX);
  /* 1023c5bb mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 1023c5be cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c5c0 je 0x1023c5f4 */
  if (C.zf) goto L_1023c5f4;
  /* 1023c5c2 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 1023c5c6 je 0x1023c608 */
  if (C.zf) goto L_1023c608;
  /* 1023c5c8 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c5cb je 0x1023c683 */
  if (C.zf) goto L_1023c683;
  /* 1023c5d1 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c5d4 jg 0x1023c5f4 */
  if ((!C.zf&&C.sf==C.of)) goto L_1023c5f4;
  /* 1023c5d6 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1023c5d9 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1023c5dc push ebx */
  push32((uint32_t)(EBX));
  /* 1023c5dd push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1023c5e0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1023c5e3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1023c5e6 call dword ptr [0x1023e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e0c8))), 0x1023c5ecu);
  /* 1023c5ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023c5ee jne 0x1023c683 */
  if (!C.zf) goto L_1023c683;
L_1023c5f4:;
  /* 1023c5f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1023c5f6:;
  /* 1023c5f6 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1023c5f9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1023c5fc mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1023c603 pop edi */
  EDI = (pop32());
  /* 1023c604 pop esi */
  ESI = (pop32());
  /* 1023c605 pop ebx */
  EBX = (pop32());
  /* 1023c606 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023c607 ret  */
  ESPCHK(0x1023c466u, _esp0);
  ESP += 4; return;
L_1023c608:;
  /* 1023c608 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1023c60f lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 1023c612 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023c615 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1023c617 call 0x1023af70 */
  push32(0x1023c61cu); f_1023af70();
  /* 1023c61c mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1023c61f mov ebx, esp */
  EBX = (ESP);
  /* 1023c621 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 1023c624 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1023c628 jmp 0x1023c63c */
  goto L_1023c63c;
  /* 1023c62a push 1 */
  push32((uint32_t)(0x1u));
  /* 1023c62c pop eax */
  EAX = (pop32());
  /* 1023c62d ret  */
  ESPCHK(0x1023c466u, _esp0);
  ESP += 4; return;
  /* 1023c62e mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1023c631 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1023c633 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1023c635 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1023c639 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_1023c63c:;
  /* 1023c63c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c63e je 0x1023c5f4 */
  if (C.zf) goto L_1023c5f4;
  /* 1023c640 push esi */
  push32((uint32_t)(ESI));
  /* 1023c641 push ebx */
  push32((uint32_t)(EBX));
  /* 1023c642 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1023c645 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1023c648 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1023c64b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1023c64e call dword ptr [0x1023e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e0c8))), 0x1023c654u);
  /* 1023c654 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023c656 je 0x1023c5f4 */
  if (C.zf) goto L_1023c5f4;
  /* 1023c658 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c65b push edi */
  push32((uint32_t)(EDI));
  /* 1023c65c push edi */
  push32((uint32_t)(EDI));
  /* 1023c65d jne 0x1023c663 */
  if (!C.zf) goto L_1023c663;
  /* 1023c65f push edi */
  push32((uint32_t)(EDI));
  /* 1023c660 push edi */
  push32((uint32_t)(EDI));
  /* 1023c661 jmp 0x1023c669 */
  goto L_1023c669;
L_1023c663:;
  /* 1023c663 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1023c666 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_1023c669:;
  /* 1023c669 push esi */
  push32((uint32_t)(ESI));
  /* 1023c66a push ebx */
  push32((uint32_t)(EBX));
  /* 1023c66b push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1023c670 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1023c673 call dword ptr [0x1023e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e060))), 0x1023c679u);
  /* 1023c679 mov esi, eax */
  ESI = (EAX);
  /* 1023c67b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c67d je 0x1023c5f4 */
  if (C.zf) goto L_1023c5f4;
L_1023c683:;
  /* 1023c683 mov eax, esi */
  EAX = (ESI);
  /* 1023c685 jmp 0x1023c5f6 */
  goto L_1023c5f6;
}

/* FUN_1000c68a @ 0x1023c68a (43 bytes, 20 insns) */
void f_1023c68a(void) {
  FTRACE(0x1023c68au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023c68a mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1023c68e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1023c692 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1023c694 push esi */
  push32((uint32_t)(ESI));
  /* 1023c695 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 1023c698 je 0x1023c6a7 */
  if (C.zf) goto L_1023c6a7;
L_1023c69a:;
  /* 1023c69a cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c69d je 0x1023c6a7 */
  if (C.zf) goto L_1023c6a7;
  /* 1023c69f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1023c6a0 mov esi, ecx */
  ESI = (ECX);
  /* 1023c6a2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1023c6a3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1023c6a5 jne 0x1023c69a */
  if (!C.zf) goto L_1023c69a;
L_1023c6a7:;
  /* 1023c6a7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c6aa pop esi */
  ESI = (pop32());
  /* 1023c6ab jne 0x1023c6b2 */
  if (!C.zf) goto L_1023c6b2;
  /* 1023c6ad sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023c6b1 ret  */
  ESPCHK(0x1023c68au, _esp0);
  ESP += 4; return;
L_1023c6b2:;
  /* 1023c6b2 mov eax, edx */
  EAX = (EDX);
  /* 1023c6b4 ret  */
  ESPCHK(0x1023c68au, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6b5 @ 0x1023c6b5 (33 bytes, 15 insns) */
void f_1023c6b5(void) {
  FTRACE(0x1023c6b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023c6b5 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1023c6b9 push esi */
  push32((uint32_t)(ESI));
  /* 1023c6ba mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1023c6be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023c6c0 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 1023c6c3 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c6c5 jb 0x1023c6cb */
  if (C.cf) goto L_1023c6cb;
  /* 1023c6c7 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c6c9 jae 0x1023c6ce */
  if (!C.cf) goto L_1023c6ce;
L_1023c6cb:;
  /* 1023c6cb push 1 */
  push32((uint32_t)(0x1u));
  /* 1023c6cd pop eax */
  EAX = (pop32());
L_1023c6ce:;
  /* 1023c6ce mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1023c6d2 pop esi */
  ESI = (pop32());
  /* 1023c6d3 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1023c6d5 ret  */
  ESPCHK(0x1023c6b5u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x1023c6d6 (94 bytes, 38 insns) */
void f_1023c6d6(void) {
  FTRACE(0x1023c6d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023c6d6 push esi */
  push32((uint32_t)(ESI));
  /* 1023c6d7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1023c6db push edi */
  push32((uint32_t)(EDI));
  /* 1023c6dc mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1023c6e0 push esi */
  push32((uint32_t)(ESI));
  /* 1023c6e1 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 1023c6e3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1023c6e5 call 0x1023c6b5 */
  push32(0x1023c6eau); f_1023c6b5();
  /* 1023c6ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023c6ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023c6ef je 0x1023c708 */
  if (C.zf) goto L_1023c708;
  /* 1023c6f1 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1023c6f4 push eax */
  push32((uint32_t)(EAX));
  /* 1023c6f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1023c6f7 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1023c6f9 call 0x1023c6b5 */
  push32(0x1023c6feu); f_1023c6b5();
  /* 1023c6fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023c701 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023c703 je 0x1023c708 */
  if (C.zf) goto L_1023c708;
  /* 1023c705 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1023c708:;
  /* 1023c708 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1023c70b push eax */
  push32((uint32_t)(EAX));
  /* 1023c70c push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 1023c70f push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1023c711 call 0x1023c6b5 */
  push32(0x1023c716u); f_1023c6b5();
  /* 1023c716 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023c719 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023c71b je 0x1023c720 */
  if (C.zf) goto L_1023c720;
  /* 1023c71d inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1023c720:;
  /* 1023c720 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 1023c723 push eax */
  push32((uint32_t)(EAX));
  /* 1023c724 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 1023c727 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1023c729 call 0x1023c6b5 */
  push32(0x1023c72eu); f_1023c6b5();
  /* 1023c72e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023c731 pop edi */
  EDI = (pop32());
  /* 1023c732 pop esi */
  ESI = (pop32());
  /* 1023c733 ret  */
  ESPCHK(0x1023c6d6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c734 @ 0x1023c734 (46 bytes, 21 insns) */
void f_1023c734(void) {
  FTRACE(0x1023c734u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023c734 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1023c738 push esi */
  push32((uint32_t)(ESI));
  /* 1023c739 push edi */
  push32((uint32_t)(EDI));
  /* 1023c73a mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 1023c73c mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 1023c73f mov ecx, esi */
  ECX = (ESI);
  /* 1023c741 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023c743 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1023c745 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 1023c748 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1023c74b or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1023c74d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1023c750 mov edx, edi */
  EDX = (EDI);
  /* 1023c752 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 1023c755 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 1023c758 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1023c75a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1023c75c pop edi */
  EDI = (pop32());
  /* 1023c75d mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1023c760 pop esi */
  ESI = (pop32());
  /* 1023c761 ret  */
  ESPCHK(0x1023c734u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c762 @ 0x1023c762 (45 bytes, 21 insns) */
void f_1023c762(void) {
  FTRACE(0x1023c762u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023c762 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1023c766 push esi */
  push32((uint32_t)(ESI));
  /* 1023c767 push edi */
  push32((uint32_t)(EDI));
  /* 1023c768 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 1023c76b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1023c76e mov esi, edx */
  ESI = (EDX);
  /* 1023c770 mov edi, ecx */
  EDI = (ECX);
  /* 1023c772 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 1023c775 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1023c777 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 1023c779 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1023c77c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1023c77e shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 1023c781 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1023c783 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1023c785 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1023c787 pop edi */
  EDI = (pop32());
  /* 1023c788 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1023c78b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1023c78d pop esi */
  ESI = (pop32());
  /* 1023c78e ret  */
  ESPCHK(0x1023c762u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c78f @ 0x1023c78f (199 bytes, 76 insns) */
void f_1023c78f(void) {
  FTRACE(0x1023c78fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023c78f push ebp */
  push32((uint32_t)(EBP));
  /* 1023c790 mov ebp, esp */
  EBP = (ESP);
  /* 1023c792 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023c795 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1023c798 push ebx */
  push32((uint32_t)(EBX));
  /* 1023c799 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1023c79c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1023c79e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c7a0 push esi */
  push32((uint32_t)(ESI));
  /* 1023c7a1 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 1023c7a8 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 1023c7aa mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 1023c7ad mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 1023c7b0 jbe 0x1023c803 */
  if ((C.cf||C.zf)) goto L_1023c803;
  /* 1023c7b2 push edi */
  push32((uint32_t)(EDI));
  /* 1023c7b3 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1023c7b6:;
  /* 1023c7b6 mov esi, ebx */
  ESI = (EBX);
  /* 1023c7b8 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 1023c7bb movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1023c7bc movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1023c7bd push ebx */
  push32((uint32_t)(EBX));
  /* 1023c7be movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1023c7bf call 0x1023c734 */
  push32(0x1023c7c4u); f_1023c734();
  /* 1023c7c4 push ebx */
  push32((uint32_t)(EBX));
  /* 1023c7c5 call 0x1023c734 */
  push32(0x1023c7cau); f_1023c734();
  /* 1023c7ca lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1023c7cd push eax */
  push32((uint32_t)(EAX));
  /* 1023c7ce push ebx */
  push32((uint32_t)(EBX));
  /* 1023c7cf call 0x1023c6d6 */
  push32(0x1023c7d4u); f_1023c6d6();
  /* 1023c7d4 push ebx */
  push32((uint32_t)(EBX));
  /* 1023c7d5 call 0x1023c734 */
  push32(0x1023c7dau); f_1023c734();
  /* 1023c7da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023c7dd and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 1023c7e1 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1023c7e5 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1023c7e8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1023c7eb lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1023c7ee push eax */
  push32((uint32_t)(EAX));
  /* 1023c7ef push ebx */
  push32((uint32_t)(EBX));
  /* 1023c7f0 call 0x1023c6d6 */
  push32(0x1023c7f5u); f_1023c6d6();
  /* 1023c7f5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023c7f8 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1023c7fb dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 1023c7fe jne 0x1023c7b6 */
  if (!C.zf) goto L_1023c7b6;
  /* 1023c800 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1023c802 pop edi */
  EDI = (pop32());
L_1023c803:;
  /* 1023c803 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c806 jne 0x1023c830 */
  if (!C.zf) goto L_1023c830;
  /* 1023c808 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1023c80b mov eax, ecx */
  EAX = (ECX);
  /* 1023c80d shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1023c810 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 1023c813 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1023c815 mov esi, eax */
  ESI = (EAX);
  /* 1023c817 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1023c81a shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 1023c81d or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1023c81f shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1023c822 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1023c829 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 1023c82c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 1023c82e jmp 0x1023c803 */
  goto L_1023c803;
L_1023c830:;
  /* 1023c830 mov esi, 0x8000 */
  ESI = (0x8000u);
L_1023c835:;
  /* 1023c835 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 1023c838 jne 0x1023c84a */
  if (!C.zf) goto L_1023c84a;
  /* 1023c83a push ebx */
  push32((uint32_t)(EBX));
  /* 1023c83b call 0x1023c734 */
  push32(0x1023c840u); f_1023c734();
  /* 1023c840 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1023c847 pop ecx */
  ECX = (pop32());
  /* 1023c848 jmp 0x1023c835 */
  goto L_1023c835;
L_1023c84a:;
  /* 1023c84a mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1023c84e pop esi */
  ESI = (pop32());
  /* 1023c84f mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 1023c853 pop ebx */
  EBX = (pop32());
  /* 1023c854 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023c855 ret  */
  ESPCHK(0x1023c78fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c856 @ 0x1023c856 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_1023c856(void) {
  FTRACE(0x1023c856u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023c856 push ebp */
  push32((uint32_t)(EBP));
  /* 1023c857 mov ebp, esp */
  EBP = (ESP);
  /* 1023c859 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023c85c push ebx */
  push32((uint32_t)(EBX));
  /* 1023c85d push esi */
  push32((uint32_t)(ESI));
  /* 1023c85e push edi */
  push32((uint32_t)(EDI));
  /* 1023c85f mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1023c862 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1023c865 push 1 */
  push32((uint32_t)(0x1u));
  /* 1023c867 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1023c86a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023c86c pop edx */
  EDX = (pop32());
  /* 1023c86d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1023c870 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1023c873 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1023c876 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1023c879 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1023c87c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1023c87f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1023c882 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1023c885 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1023c888 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1023c88b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1023c88e mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_1023c891:;
  /* 1023c891 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 1023c893 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c896 je 0x1023c8a7 */
  if (C.zf) goto L_1023c8a7;
  /* 1023c898 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c89b je 0x1023c8a7 */
  if (C.zf) goto L_1023c8a7;
  /* 1023c89d cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c8a0 je 0x1023c8a7 */
  if (C.zf) goto L_1023c8a7;
  /* 1023c8a2 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c8a5 jne 0x1023c8aa */
  if (!C.zf) goto L_1023c8aa;
L_1023c8a7:;
  /* 1023c8a7 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1023c8a8 jmp 0x1023c891 */
  goto L_1023c891;
L_1023c8aa:;
  /* 1023c8aa push 4 */
  push32((uint32_t)(0x4u));
  /* 1023c8ac pop esi */
  ESI = (pop32());
L_1023c8ad:;
  /* 1023c8ad mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1023c8af inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1023c8b0 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c8b3 ja 0x1023cb30 */
  if ((!C.cf&&!C.zf)) goto L_1023cb30;
  /* 1023c8b9 jmp dword ptr [eax*4 + 0x1023ccf7] */
  switch (EAX) {
    case 0: goto L_1023c8c0;
    case 1: goto L_1023c90f;
    case 2: goto L_1023c966;
    case 3: goto L_1023c990;
    case 4: goto L_1023c9eb;
    case 5: goto L_1023ca62;
    case 6: goto L_1023ca98;
    case 7: goto L_1023cae2;
    case 8: goto L_1023cac1;
    case 9: goto L_1023cb46;
    case 10: goto L_1023cb30;
    case 11: goto L_1023cafc;
    default: x86_unimpl("switch@0x1023c8b9 out of table"); return;
  }
L_1023c8c0:;
  /* 1023c8c0 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c8c3 jl 0x1023c8d1 */
  if ((C.sf!=C.of)) goto L_1023c8d1;
  /* 1023c8c5 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c8c8 jg 0x1023c8d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_1023c8d1;
L_1023c8ca:;
  /* 1023c8ca push 3 */
  push32((uint32_t)(0x3u));
  /* 1023c8cc jmp 0x1023caee */
  goto L_1023caee;
L_1023c8d1:;
  /* 1023c8d1 cmp bl, byte ptr [0x10240b84] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10240b84))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c8d7 jne 0x1023c8e0 */
  if (!C.zf) goto L_1023c8e0;
L_1023c8d9:;
  /* 1023c8d9 push 5 */
  push32((uint32_t)(0x5u));
  /* 1023c8db jmp 0x1023cb26 */
  goto L_1023cb26;
L_1023c8e0:;
  /* 1023c8e0 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1023c8e3 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023c8e6 je 0x1023c906 */
  if (C.zf) goto L_1023c906;
  /* 1023c8e8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1023c8e9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1023c8ea je 0x1023c8fa */
  if (C.zf) goto L_1023c8fa;
  /* 1023c8ec sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023c8ef jne 0x1023cbc9 */
  if (!C.zf) goto L_1023cbc9;
  /* 1023c8f5 jmp 0x1023c989 */
  goto L_1023c989;
L_1023c8fa:;
  /* 1023c8fa push 2 */
  push32((uint32_t)(0x2u));
  /* 1023c8fc mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 1023c903 pop eax */
  EAX = (pop32());
  /* 1023c904 jmp 0x1023c8ad */
  goto L_1023c8ad;
L_1023c906:;
  /* 1023c906 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 1023c90a push 2 */
  push32((uint32_t)(0x2u));
  /* 1023c90c pop eax */
  EAX = (pop32());
  /* 1023c90d jmp 0x1023c8ad */
  goto L_1023c8ad;
L_1023c90f:;
  /* 1023c90f cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c912 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1023c915 jl 0x1023c91c */
  if ((C.sf!=C.of)) goto L_1023c91c;
  /* 1023c917 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c91a jle 0x1023c8ca */
  if ((C.zf||C.sf!=C.of)) goto L_1023c8ca;
L_1023c91c:;
  /* 1023c91c cmp bl, byte ptr [0x10240b84] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10240b84))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c922 je 0x1023c9e4 */
  if (C.zf) goto L_1023c9e4;
  /* 1023c928 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c92b je 0x1023c95e */
  if (C.zf) goto L_1023c95e;
  /* 1023c92d cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c930 je 0x1023c95e */
  if (C.zf) goto L_1023c95e;
  /* 1023c932 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c935 je 0x1023c989 */
  if (C.zf) goto L_1023c989;
L_1023c937:;
  /* 1023c937 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c93a jle 0x1023cbc9 */
  if ((C.zf||C.sf!=C.of)) goto L_1023cbc9;
  /* 1023c940 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c943 jle 0x1023c957 */
  if ((C.zf||C.sf!=C.of)) goto L_1023c957;
  /* 1023c945 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c948 jle 0x1023cbc9 */
  if ((C.zf||C.sf!=C.of)) goto L_1023cbc9;
  /* 1023c94e cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c951 jg 0x1023cbc9 */
  if ((!C.zf&&C.sf==C.of)) goto L_1023cbc9;
L_1023c957:;
  /* 1023c957 push 6 */
  push32((uint32_t)(0x6u));
  /* 1023c959 jmp 0x1023cb26 */
  goto L_1023cb26;
L_1023c95e:;
  /* 1023c95e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1023c95f push 0xb */
  push32((uint32_t)(0xbu));
  /* 1023c961 jmp 0x1023cb26 */
  goto L_1023cb26;
L_1023c966:;
  /* 1023c966 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c969 jl 0x1023c974 */
  if ((C.sf!=C.of)) goto L_1023c974;
  /* 1023c96b cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c96e jle 0x1023c8ca */
  if ((C.zf||C.sf!=C.of)) goto L_1023c8ca;
L_1023c974:;
  /* 1023c974 cmp bl, byte ptr [0x10240b84] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10240b84))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c97a je 0x1023c8d9 */
  if (C.zf) goto L_1023c8d9;
  /* 1023c980 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c983 jne 0x1023cb3e */
  if (!C.zf) goto L_1023cb3e;
L_1023c989:;
  /* 1023c989 mov eax, edx */
  EAX = (EDX);
  /* 1023c98b jmp 0x1023c8ad */
  goto L_1023c8ad;
L_1023c990:;
  /* 1023c990 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1023c993:;
  /* 1023c993 cmp dword ptr [0x10240b80], edx */
  { uint32_t _a=(r32((uint32_t)(0x10240b80))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c999 jle 0x1023c9ac */
  if ((C.zf||C.sf!=C.of)) goto L_1023c9ac;
  /* 1023c99b movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1023c99e push esi */
  push32((uint32_t)(ESI));
  /* 1023c99f push eax */
  push32((uint32_t)(EAX));
  /* 1023c9a0 call 0x1023946b */
  push32(0x1023c9a5u); f_1023946b();
  /* 1023c9a5 pop ecx */
  ECX = (pop32());
  /* 1023c9a6 pop ecx */
  ECX = (pop32());
  /* 1023c9a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1023c9a9 pop edx */
  EDX = (pop32());
  /* 1023c9aa jmp 0x1023c9ba */
  goto L_1023c9ba;
L_1023c9ac:;
  /* 1023c9ac mov ecx, dword ptr [0x10240970] */
  ECX = (r32((uint32_t)(0x10240970)));
  /* 1023c9b2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1023c9b5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1023c9b8 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1023c9ba:;
  /* 1023c9ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023c9bc je 0x1023c9dc */
  if (C.zf) goto L_1023c9dc;
  /* 1023c9be cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c9c2 jae 0x1023c9d4 */
  if (!C.cf) goto L_1023c9d4;
  /* 1023c9c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1023c9c7 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1023c9ca sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1023c9cd inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 1023c9d0 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 1023c9d2 jmp 0x1023c9d7 */
  goto L_1023c9d7;
L_1023c9d4:;
  /* 1023c9d4 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_1023c9d7:;
  /* 1023c9d7 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1023c9d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1023c9da jmp 0x1023c993 */
  goto L_1023c993;
L_1023c9dc:;
  /* 1023c9dc cmp bl, byte ptr [0x10240b84] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10240b84))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c9e2 jne 0x1023ca4b */
  if (!C.zf) goto L_1023ca4b;
L_1023c9e4:;
  /* 1023c9e4 mov eax, esi */
  EAX = (ESI);
  /* 1023c9e6 jmp 0x1023c8ad */
  goto L_1023c8ad;
L_1023c9eb:;
  /* 1023c9eb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023c9ef mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1023c9f2 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1023c9f5 jne 0x1023ca04 */
  if (!C.zf) goto L_1023ca04;
L_1023c9f7:;
  /* 1023c9f7 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023c9fa jne 0x1023ca04 */
  if (!C.zf) goto L_1023ca04;
  /* 1023c9fc dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1023c9ff mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1023ca01 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1023ca02 jmp 0x1023c9f7 */
  goto L_1023c9f7;
L_1023ca04:;
  /* 1023ca04 cmp dword ptr [0x10240b80], edx */
  { uint32_t _a=(r32((uint32_t)(0x10240b80))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023ca0a jle 0x1023ca1d */
  if ((C.zf||C.sf!=C.of)) goto L_1023ca1d;
  /* 1023ca0c movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1023ca0f push esi */
  push32((uint32_t)(ESI));
  /* 1023ca10 push eax */
  push32((uint32_t)(EAX));
  /* 1023ca11 call 0x1023946b */
  push32(0x1023ca16u); f_1023946b();
  /* 1023ca16 pop ecx */
  ECX = (pop32());
  /* 1023ca17 pop ecx */
  ECX = (pop32());
  /* 1023ca18 push 1 */
  push32((uint32_t)(0x1u));
  /* 1023ca1a pop edx */
  EDX = (pop32());
  /* 1023ca1b jmp 0x1023ca2b */
  goto L_1023ca2b;
L_1023ca1d:;
  /* 1023ca1d mov ecx, dword ptr [0x10240970] */
  ECX = (r32((uint32_t)(0x10240970)));
  /* 1023ca23 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1023ca26 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1023ca29 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1023ca2b:;
  /* 1023ca2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023ca2d je 0x1023ca4b */
  if (C.zf) goto L_1023ca4b;
  /* 1023ca2f cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023ca33 jae 0x1023ca46 */
  if (!C.cf) goto L_1023ca46;
  /* 1023ca35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1023ca38 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1023ca3b sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1023ca3e inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 1023ca41 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1023ca44 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_1023ca46:;
  /* 1023ca46 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1023ca48 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1023ca49 jmp 0x1023ca04 */
  goto L_1023ca04;
L_1023ca4b:;
  /* 1023ca4b cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023ca4e je 0x1023c95e */
  if (C.zf) goto L_1023c95e;
  /* 1023ca54 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023ca57 je 0x1023c95e */
  if (C.zf) goto L_1023c95e;
  /* 1023ca5d jmp 0x1023c937 */
  goto L_1023c937;
L_1023ca62:;
  /* 1023ca62 cmp dword ptr [0x10240b80], edx */
  { uint32_t _a=(r32((uint32_t)(0x10240b80))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023ca68 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1023ca6b jle 0x1023ca7e */
  if ((C.zf||C.sf!=C.of)) goto L_1023ca7e;
  /* 1023ca6d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1023ca70 push esi */
  push32((uint32_t)(ESI));
  /* 1023ca71 push eax */
  push32((uint32_t)(EAX));
  /* 1023ca72 call 0x1023946b */
  push32(0x1023ca77u); f_1023946b();
  /* 1023ca77 pop ecx */
  ECX = (pop32());
  /* 1023ca78 pop ecx */
  ECX = (pop32());
  /* 1023ca79 push 1 */
  push32((uint32_t)(0x1u));
  /* 1023ca7b pop edx */
  EDX = (pop32());
  /* 1023ca7c jmp 0x1023ca8c */
  goto L_1023ca8c;
L_1023ca7e:;
  /* 1023ca7e mov ecx, dword ptr [0x10240970] */
  ECX = (r32((uint32_t)(0x10240970)));
  /* 1023ca84 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1023ca87 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1023ca8a and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1023ca8c:;
  /* 1023ca8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023ca8e je 0x1023cb3e */
  if (C.zf) goto L_1023cb3e;
  /* 1023ca94 mov eax, esi */
  EAX = (ESI);
  /* 1023ca96 jmp 0x1023caef */
  goto L_1023caef;
L_1023ca98:;
  /* 1023ca98 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 1023ca9b cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023ca9e mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1023caa1 jl 0x1023caa8 */
  if ((C.sf!=C.of)) goto L_1023caa8;
  /* 1023caa3 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023caa6 jle 0x1023caec */
  if ((C.zf||C.sf!=C.of)) goto L_1023caec;
L_1023caa8:;
  /* 1023caa8 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1023caab sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023caae je 0x1023cb24 */
  if (C.zf) goto L_1023cb24;
  /* 1023cab0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1023cab1 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1023cab2 je 0x1023cb18 */
  if (C.zf) goto L_1023cb18;
  /* 1023cab4 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023cab7 jne 0x1023cbcc */
  if (!C.zf) goto L_1023cbcc;
L_1023cabd:;
  /* 1023cabd push 8 */
  push32((uint32_t)(0x8u));
  /* 1023cabf jmp 0x1023cb26 */
  goto L_1023cb26;
L_1023cac1:;
  /* 1023cac1 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1023cac4:;
  /* 1023cac4 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023cac7 jne 0x1023cace */
  if (!C.zf) goto L_1023cace;
  /* 1023cac9 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1023cacb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1023cacc jmp 0x1023cac4 */
  goto L_1023cac4;
L_1023cace:;
  /* 1023cace cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023cad1 jl 0x1023cbc9 */
  if ((C.sf!=C.of)) goto L_1023cbc9;
  /* 1023cad7 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023cada jg 0x1023cbc9 */
  if ((!C.zf&&C.sf==C.of)) goto L_1023cbc9;
  /* 1023cae0 jmp 0x1023caec */
  goto L_1023caec;
L_1023cae2:;
  /* 1023cae2 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023cae5 jl 0x1023caf5 */
  if ((C.sf!=C.of)) goto L_1023caf5;
  /* 1023cae7 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023caea jg 0x1023caf5 */
  if ((!C.zf&&C.sf==C.of)) goto L_1023caf5;
L_1023caec:;
  /* 1023caec push 9 */
  push32((uint32_t)(0x9u));
L_1023caee:;
  /* 1023caee pop eax */
  EAX = (pop32());
L_1023caef:;
  /* 1023caef dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1023caf0 jmp 0x1023c8ad */
  goto L_1023c8ad;
L_1023caf5:;
  /* 1023caf5 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023caf8 jne 0x1023cb3e */
  if (!C.zf) goto L_1023cb3e;
  /* 1023cafa jmp 0x1023cabd */
  goto L_1023cabd;
L_1023cafc:;
  /* 1023cafc cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cb00 je 0x1023cb2c */
  if (C.zf) goto L_1023cb2c;
  /* 1023cb02 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1023cb05 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 1023cb08 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023cb0b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1023cb0e je 0x1023cb24 */
  if (C.zf) goto L_1023cb24;
  /* 1023cb10 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1023cb11 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1023cb12 jne 0x1023cbcc */
  if (!C.zf) goto L_1023cbcc;
L_1023cb18:;
  /* 1023cb18 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 1023cb1c push 7 */
  push32((uint32_t)(0x7u));
  /* 1023cb1e pop eax */
  EAX = (pop32());
  /* 1023cb1f jmp 0x1023c8ad */
  goto L_1023c8ad;
L_1023cb24:;
  /* 1023cb24 push 7 */
  push32((uint32_t)(0x7u));
L_1023cb26:;
  /* 1023cb26 pop eax */
  EAX = (pop32());
  /* 1023cb27 jmp 0x1023c8ad */
  goto L_1023c8ad;
L_1023cb2c:;
  /* 1023cb2c push 0xa */
  push32((uint32_t)(0xau));
  /* 1023cb2e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1023cb2f pop eax */
  EAX = (pop32());
L_1023cb30:;
  /* 1023cb30 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cb33 je 0x1023cbce */
  if (C.zf) goto L_1023cbce;
  /* 1023cb39 jmp 0x1023c8ad */
  goto L_1023c8ad;
L_1023cb3e:;
  /* 1023cb3e mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1023cb41 jmp 0x1023cbce */
  goto L_1023cbce;
L_1023cb46:;
  /* 1023cb46 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 1023cb4d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1023cb4f:;
  /* 1023cb4f cmp dword ptr [0x10240b80], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10240b80))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cb56 jle 0x1023cb67 */
  if ((C.zf||C.sf!=C.of)) goto L_1023cb67;
  /* 1023cb58 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1023cb5b push 4 */
  push32((uint32_t)(0x4u));
  /* 1023cb5d push eax */
  push32((uint32_t)(EAX));
  /* 1023cb5e call 0x1023946b */
  push32(0x1023cb63u); f_1023946b();
  /* 1023cb63 pop ecx */
  ECX = (pop32());
  /* 1023cb64 pop ecx */
  ECX = (pop32());
  /* 1023cb65 jmp 0x1023cb76 */
  goto L_1023cb76;
L_1023cb67:;
  /* 1023cb67 mov ecx, dword ptr [0x10240970] */
  ECX = (r32((uint32_t)(0x10240970)));
  /* 1023cb6d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1023cb70 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1023cb73 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1023cb76:;
  /* 1023cb76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023cb78 je 0x1023cb96 */
  if (C.zf) goto L_1023cb96;
  /* 1023cb7a movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1023cb7d lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 1023cb80 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 1023cb84 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cb8a jg 0x1023cb91 */
  if ((!C.zf&&C.sf==C.of)) goto L_1023cb91;
  /* 1023cb8c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1023cb8e inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1023cb8f jmp 0x1023cb4f */
  goto L_1023cb4f;
L_1023cb91:;
  /* 1023cb91 mov esi, 0x1451 */
  ESI = (0x1451u);
L_1023cb96:;
  /* 1023cb96 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_1023cb99:;
  /* 1023cb99 cmp dword ptr [0x10240b80], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10240b80))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cba0 jle 0x1023cbb1 */
  if ((C.zf||C.sf!=C.of)) goto L_1023cbb1;
  /* 1023cba2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1023cba5 push 4 */
  push32((uint32_t)(0x4u));
  /* 1023cba7 push eax */
  push32((uint32_t)(EAX));
  /* 1023cba8 call 0x1023946b */
  push32(0x1023cbadu); f_1023946b();
  /* 1023cbad pop ecx */
  ECX = (pop32());
  /* 1023cbae pop ecx */
  ECX = (pop32());
  /* 1023cbaf jmp 0x1023cbc0 */
  goto L_1023cbc0;
L_1023cbb1:;
  /* 1023cbb1 mov ecx, dword ptr [0x10240970] */
  ECX = (r32((uint32_t)(0x10240970)));
  /* 1023cbb7 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1023cbba mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1023cbbd and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1023cbc0:;
  /* 1023cbc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023cbc2 je 0x1023cbc9 */
  if (C.zf) goto L_1023cbc9;
  /* 1023cbc4 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1023cbc6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1023cbc7 jmp 0x1023cb99 */
  goto L_1023cb99;
L_1023cbc9:;
  /* 1023cbc9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1023cbca jmp 0x1023cbce */
  goto L_1023cbce;
L_1023cbcc:;
  /* 1023cbcc mov edi, ecx */
  EDI = (ECX);
L_1023cbce:;
  /* 1023cbce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1023cbd1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cbd5 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 1023cbd7 je 0x1023ccb6 */
  if (C.zf) goto L_1023ccb6;
  /* 1023cbdd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1023cbdf pop eax */
  EAX = (pop32());
  /* 1023cbe0 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cbe3 jbe 0x1023cbfa */
  if ((C.cf||C.zf)) goto L_1023cbfa;
  /* 1023cbe5 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023cbe9 jl 0x1023cbee */
  if ((C.sf!=C.of)) goto L_1023cbee;
  /* 1023cbeb inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_1023cbee:;
  /* 1023cbee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1023cbf1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1023cbf4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1023cbf5 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 1023cbf8 jmp 0x1023cbfd */
  goto L_1023cbfd;
L_1023cbfa:;
  /* 1023cbfa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1023cbfd:;
  /* 1023cbfd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cc01 jbe 0x1023ccac */
  if ((C.cf||C.zf)) goto L_1023ccac;
L_1023cc07:;
  /* 1023cc07 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1023cc08 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023cc0b jne 0x1023cc15 */
  if (!C.zf) goto L_1023cc15;
  /* 1023cc0d dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1023cc10 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 1023cc13 jmp 0x1023cc07 */
  goto L_1023cc07;
L_1023cc15:;
  /* 1023cc15 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1023cc18 push eax */
  push32((uint32_t)(EAX));
  /* 1023cc19 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1023cc1c push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 1023cc1f push eax */
  push32((uint32_t)(EAX));
  /* 1023cc20 call 0x1023c78f */
  push32(0x1023cc25u); f_1023c78f();
  /* 1023cc25 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1023cc28 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1023cc2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023cc2d cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cc30 jge 0x1023cc34 */
  if ((C.sf==C.of)) goto L_1023cc34;
  /* 1023cc32 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_1023cc34:;
  /* 1023cc34 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023cc37 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cc3a jne 0x1023cc3f */
  if (!C.zf) goto L_1023cc3f;
  /* 1023cc3c add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1023cc3f:;
  /* 1023cc3f cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cc42 jne 0x1023cc47 */
  if (!C.zf) goto L_1023cc47;
  /* 1023cc44 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1023cc47:;
  /* 1023cc47 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cc4c jle 0x1023cc7e */
  if ((C.zf||C.sf!=C.of)) goto L_1023cc7e;
  /* 1023cc4e mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_1023cc55:;
  /* 1023cc55 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1023cc58 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 1023cc5b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1023cc5e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_1023cc61:;
  /* 1023cc61 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cc65 je 0x1023ccc7 */
  if (C.zf) goto L_1023ccc7;
  /* 1023cc67 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1023cc69 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 1023cc6e mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1023cc73 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1023cc75 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 1023cc7c jmp 0x1023ccdc */
  goto L_1023ccdc;
L_1023cc7e:;
  /* 1023cc7e cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cc83 jge 0x1023cc8e */
  if ((C.sf==C.of)) goto L_1023cc8e;
  /* 1023cc85 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 1023cc8c jmp 0x1023cc55 */
  goto L_1023cc55;
L_1023cc8e:;
  /* 1023cc8e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1023cc91 push eax */
  push32((uint32_t)(EAX));
  /* 1023cc92 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1023cc95 push eax */
  push32((uint32_t)(EAX));
  /* 1023cc96 call 0x1023d72a */
  push32(0x1023cc9bu); f_1023d72a();
  /* 1023cc9b mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1023cc9e mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 1023cca1 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 1023cca4 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 1023cca7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023ccaa jmp 0x1023cc61 */
  goto L_1023cc61;
L_1023ccac:;
  /* 1023ccac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1023ccae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023ccb0 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1023ccb2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1023ccb4 jmp 0x1023cc61 */
  goto L_1023cc61;
L_1023ccb6:;
  /* 1023ccb6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1023ccb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023ccba xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1023ccbc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1023ccbe mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 1023ccc5 jmp 0x1023ccdc */
  goto L_1023ccdc;
L_1023ccc7:;
  /* 1023ccc7 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cccb je 0x1023ccdc */
  if (C.zf) goto L_1023ccdc;
  /* 1023cccd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1023cccf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023ccd1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1023ccd3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1023ccd5 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_1023ccdc:;
  /* 1023ccdc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023ccdf or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 1023cce2 pop edi */
  EDI = (pop32());
  /* 1023cce3 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 1023cce6 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 1023cce9 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 1023cced mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1023ccf0 pop esi */
  ESI = (pop32());
  /* 1023ccf1 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1023ccf4 pop ebx */
  EBX = (pop32());
  /* 1023ccf5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023ccf6 ret  */
  ESPCHK(0x1023c856u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd27 @ 0x1023cd27 (659 bytes, 232 insns) */
void f_1023cd27(void) {
  FTRACE(0x1023cd27u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023cd27 push ebp */
  push32((uint32_t)(EBP));
  /* 1023cd28 mov ebp, esp */
  EBP = (ESP);
  /* 1023cd2a sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023cd2d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1023cd30 push ebx */
  push32((uint32_t)(EBX));
  /* 1023cd31 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1023cd34 push esi */
  push32((uint32_t)(ESI));
  /* 1023cd35 mov ecx, eax */
  ECX = (EAX);
  /* 1023cd37 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 1023cd3c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1023cd42 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1023cd44 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1023cd47 push edi */
  push32((uint32_t)(EDI));
  /* 1023cd48 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 1023cd4c mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 1023cd50 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 1023cd54 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 1023cd58 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 1023cd5c mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 1023cd60 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 1023cd64 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 1023cd68 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 1023cd6c mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 1023cd70 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 1023cd74 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 1023cd78 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1023cd7f mov edx, eax */
  EDX = (EAX);
  /* 1023cd81 je 0x1023cd89 */
  if (C.zf) goto L_1023cd89;
  /* 1023cd83 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 1023cd87 jmp 0x1023cd8d */
  goto L_1023cd8d;
L_1023cd89:;
  /* 1023cd89 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_1023cd8d:;
  /* 1023cd8d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1023cd90 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 1023cd93 jne 0x1023cdb3 */
  if (!C.zf) goto L_1023cdb3;
  /* 1023cd95 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1023cd97 jne 0x1023cdb3 */
  if (!C.zf) goto L_1023cdb3;
  /* 1023cd99 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cd9c jne 0x1023cdb3 */
  if (!C.zf) goto L_1023cdb3;
L_1023cd9e:;
  /* 1023cd9e and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1023cda2 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1023cda6 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 1023cdaa mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 1023cdae jmp 0x1023cfb1 */
  goto L_1023cfb1;
L_1023cdb3:;
  /* 1023cdb3 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1023cdb6 jne 0x1023ce32 */
  if (!C.zf) goto L_1023ce32;
  /* 1023cdb8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1023cdbd mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 1023cdc2 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cdc4 jne 0x1023cdcc */
  if (!C.zf) goto L_1023cdcc;
  /* 1023cdc6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cdca je 0x1023cddb */
  if (C.zf) goto L_1023cddb;
L_1023cdcc:;
  /* 1023cdcc test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 1023cdd2 jne 0x1023cddb */
  if (!C.zf) goto L_1023cddb;
  /* 1023cdd4 push 0x1023e5a0 */
  push32((uint32_t)(0x1023e5a0u));
  /* 1023cdd9 jmp 0x1023ce21 */
  goto L_1023ce21;
L_1023cddb:;
  /* 1023cddb test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1023cdde je 0x1023cdf5 */
  if (C.zf) goto L_1023cdf5;
  /* 1023cde0 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cde6 jne 0x1023cdf5 */
  if (!C.zf) goto L_1023cdf5;
  /* 1023cde8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cdec jne 0x1023ce1c */
  if (!C.zf) goto L_1023ce1c;
  /* 1023cdee push 0x1023e598 */
  push32((uint32_t)(0x1023e598u));
  /* 1023cdf3 jmp 0x1023ce04 */
  goto L_1023ce04;
L_1023cdf5:;
  /* 1023cdf5 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cdf7 jne 0x1023ce1c */
  if (!C.zf) goto L_1023ce1c;
  /* 1023cdf9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cdfd jne 0x1023ce1c */
  if (!C.zf) goto L_1023ce1c;
  /* 1023cdff push 0x1023e590 */
  push32((uint32_t)(0x1023e590u));
L_1023ce04:;
  /* 1023ce04 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1023ce07 push eax */
  push32((uint32_t)(EAX));
  /* 1023ce08 call 0x10239b90 */
  push32(0x1023ce0du); f_10239b90();
  /* 1023ce0d pop ecx */
  ECX = (pop32());
  /* 1023ce0e mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 1023ce12 pop ecx */
  ECX = (pop32());
L_1023ce13:;
  /* 1023ce13 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1023ce17 jmp 0x1023cf8a */
  goto L_1023cf8a;
L_1023ce1c:;
  /* 1023ce1c push 0x1023e588 */
  push32((uint32_t)(0x1023e588u));
L_1023ce21:;
  /* 1023ce21 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1023ce24 push eax */
  push32((uint32_t)(EAX));
  /* 1023ce25 call 0x10239b90 */
  push32(0x1023ce2au); f_10239b90();
  /* 1023ce2a pop ecx */
  ECX = (pop32());
  /* 1023ce2b mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 1023ce2f pop ecx */
  ECX = (pop32());
  /* 1023ce30 jmp 0x1023ce13 */
  goto L_1023ce13;
L_1023ce32:;
  /* 1023ce32 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 1023ce35 mov ecx, edi */
  ECX = (EDI);
  /* 1023ce37 mov esi, eax */
  ESI = (EAX);
  /* 1023ce39 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 1023ce3c imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1023ce42 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 1023ce45 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 1023ce4a push 1 */
  push32((uint32_t)(0x1u));
  /* 1023ce4c lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 1023ce4f mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 1023ce53 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1023ce56 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 1023ce59 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 1023ce60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023ce63 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1023ce66 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 1023ce69 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 1023ce6c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1023ce6e push eax */
  push32((uint32_t)(EAX));
  /* 1023ce6f lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1023ce72 push eax */
  push32((uint32_t)(EAX));
  /* 1023ce73 call 0x1023d72a */
  push32(0x1023ce78u); f_1023d72a();
  /* 1023ce78 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023ce7b cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1023ce81 jb 0x1023ce93 */
  if (C.cf) goto L_1023ce93;
  /* 1023ce83 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1023ce86 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1023ce87 push eax */
  push32((uint32_t)(EAX));
  /* 1023ce88 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1023ce8b push eax */
  push32((uint32_t)(EAX));
  /* 1023ce8c call 0x1023d50a */
  push32(0x1023ce91u); f_1023d50a();
  /* 1023ce91 pop ecx */
  ECX = (pop32());
  /* 1023ce92 pop ecx */
  ECX = (pop32());
L_1023ce93:;
  /* 1023ce93 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 1023ce97 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 1023ce9a je 0x1023cead */
  if (C.zf) goto L_1023cead;
  /* 1023ce9c mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 1023ce9f movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 1023cea2 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023cea4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1023cea6 jg 0x1023ceb0 */
  if ((!C.zf&&C.sf==C.of)) goto L_1023ceb0;
  /* 1023cea8 jmp 0x1023cd9e */
  goto L_1023cd9e;
L_1023cead:;
  /* 1023cead mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_1023ceb0:;
  /* 1023ceb0 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023ceb3 jle 0x1023ceb8 */
  if ((C.zf||C.sf!=C.of)) goto L_1023ceb8;
  /* 1023ceb5 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1023ceb7 pop edi */
  EDI = (pop32());
L_1023ceb8:;
  /* 1023ceb8 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 1023cebc sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023cec2 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 1023cec7 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_1023cece:;
  /* 1023cece lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1023ced1 push eax */
  push32((uint32_t)(EAX));
  /* 1023ced2 call 0x1023c734 */
  push32(0x1023ced7u); f_1023c734();
  /* 1023ced7 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 1023ceda pop ecx */
  ECX = (pop32());
  /* 1023cedb jne 0x1023cece */
  if (!C.zf) goto L_1023cece;
  /* 1023cedd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1023cedf jge 0x1023cef8 */
  if ((C.sf==C.of)) goto L_1023cef8;
  /* 1023cee1 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 1023cee3 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 1023cee9 jle 0x1023cef8 */
  if ((C.zf||C.sf!=C.of)) goto L_1023cef8;
L_1023ceeb:;
  /* 1023ceeb lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1023ceee push eax */
  push32((uint32_t)(EAX));
  /* 1023ceef call 0x1023c762 */
  push32(0x1023cef4u); f_1023c762();
  /* 1023cef4 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1023cef5 pop ecx */
  ECX = (pop32());
  /* 1023cef6 jne 0x1023ceeb */
  if (!C.zf) goto L_1023ceeb;
L_1023cef8:;
  /* 1023cef8 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 1023cefb lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1023cefe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1023cf00 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 1023cf03 jle 0x1023cf55 */
  if ((C.zf||C.sf!=C.of)) goto L_1023cf55;
  /* 1023cf05 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_1023cf08:;
  /* 1023cf08 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 1023cf0b lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 1023cf0e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1023cf0f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1023cf10 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1023cf13 push eax */
  push32((uint32_t)(EAX));
  /* 1023cf14 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1023cf15 call 0x1023c734 */
  push32(0x1023cf1au); f_1023c734();
  /* 1023cf1a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1023cf1d push eax */
  push32((uint32_t)(EAX));
  /* 1023cf1e call 0x1023c734 */
  push32(0x1023cf23u); f_1023c734();
  /* 1023cf23 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1023cf26 push eax */
  push32((uint32_t)(EAX));
  /* 1023cf27 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1023cf2a push eax */
  push32((uint32_t)(EAX));
  /* 1023cf2b call 0x1023c6d6 */
  push32(0x1023cf30u); f_1023c6d6();
  /* 1023cf30 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1023cf33 push eax */
  push32((uint32_t)(EAX));
  /* 1023cf34 call 0x1023c734 */
  push32(0x1023cf39u); f_1023c734();
  /* 1023cf39 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 1023cf3c mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1023cf3f and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 1023cf43 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023cf46 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1023cf48 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 1023cf4b dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 1023cf4e mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1023cf50 jne 0x1023cf08 */
  if (!C.zf) goto L_1023cf08;
  /* 1023cf52 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_1023cf55:;
  /* 1023cf55 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 1023cf58 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1023cf59 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1023cf5a cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023cf5d lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 1023cf60 jl 0x1023cf92 */
  if ((C.sf!=C.of)) goto L_1023cf92;
L_1023cf62:;
  /* 1023cf62 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cf64 jb 0x1023cf75 */
  if (C.cf) goto L_1023cf75;
  /* 1023cf66 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023cf69 jne 0x1023cf71 */
  if (!C.zf) goto L_1023cf71;
  /* 1023cf6b mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 1023cf6e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1023cf6f jmp 0x1023cf62 */
  goto L_1023cf62;
L_1023cf71:;
  /* 1023cf71 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cf73 jae 0x1023cf79 */
  if (!C.cf) goto L_1023cf79;
L_1023cf75:;
  /* 1023cf75 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1023cf76 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_1023cf79:;
  /* 1023cf79 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_1023cf7b:;
  /* 1023cf7b sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1023cf7d sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1023cf7f mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 1023cf82 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1023cf85 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_1023cf8a:;
  /* 1023cf8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1023cf8d:;
  /* 1023cf8d pop edi */
  EDI = (pop32());
  /* 1023cf8e pop esi */
  ESI = (pop32());
  /* 1023cf8f pop ebx */
  EBX = (pop32());
  /* 1023cf90 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023cf91 ret  */
  ESPCHK(0x1023cd27u, _esp0);
  ESP += 4; return;
L_1023cf92:;
  /* 1023cf92 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cf94 jb 0x1023cfa2 */
  if (C.cf) goto L_1023cfa2;
  /* 1023cf96 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023cf99 jne 0x1023cf9e */
  if (!C.zf) goto L_1023cf9e;
  /* 1023cf9b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1023cf9c jmp 0x1023cf92 */
  goto L_1023cf92;
L_1023cf9e:;
  /* 1023cf9e cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023cfa0 jae 0x1023cf7b */
  if (!C.cf) goto L_1023cf7b;
L_1023cfa2:;
  /* 1023cfa2 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1023cfa6 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1023cfaa mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 1023cfae mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_1023cfb1:;
  /* 1023cfb1 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 1023cfb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1023cfb7 pop eax */
  EAX = (pop32());
  /* 1023cfb8 jmp 0x1023cf8d */
  goto L_1023cf8d;
}

/* FUN_1000cfba @ 0x1023cfba (27 bytes, 13 insns) */
void f_1023cfba(void) {
  FTRACE(0x1023cfbau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023cfba mov eax, dword ptr [0x1024680c] */
  EAX = (r32((uint32_t)(0x1024680c)));
  /* 1023cfbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023cfc1 je 0x1023cfd2 */
  if (C.zf) goto L_1023cfd2;
  /* 1023cfc3 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1023cfc7 call eax */
  call_ind((uint32_t)(EAX), 0x1023cfc9u);
  /* 1023cfc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023cfcb pop ecx */
  ECX = (pop32());
  /* 1023cfcc je 0x1023cfd2 */
  if (C.zf) goto L_1023cfd2;
  /* 1023cfce push 1 */
  push32((uint32_t)(0x1u));
  /* 1023cfd0 pop eax */
  EAX = (pop32());
  /* 1023cfd1 ret  */
  ESPCHK(0x1023cfbau, _esp0);
  ESP += 4; return;
L_1023cfd2:;
  /* 1023cfd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023cfd4 ret  */
  ESPCHK(0x1023cfbau, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1023cfd8 (32 bytes, 18 insns) */
void f_1023cfd8(void) {
  FTRACE(0x1023cfd8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023cfd8 push ebp */
  push32((uint32_t)(EBP));
  /* 1023cfd9 mov ebp, esp */
  EBP = (ESP);
  /* 1023cfdb push ebx */
  push32((uint32_t)(EBX));
  /* 1023cfdc push esi */
  push32((uint32_t)(ESI));
  /* 1023cfdd push edi */
  push32((uint32_t)(EDI));
  /* 1023cfde push ebp */
  push32((uint32_t)(EBP));
  /* 1023cfdf push 0 */
  push32((uint32_t)(0x0u));
  /* 1023cfe1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1023cfe3 push 0x1023cff0 */
  push32((uint32_t)(0x1023cff0u));
  /* 1023cfe8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1023cfeb call 0x1023dad4 */
  push32(0x1023cff0u); f_1023dad4();
  /* 1023cff0 pop ebp */
  EBP = (pop32());
  /* 1023cff1 pop edi */
  EDI = (pop32());
  /* 1023cff2 pop esi */
  ESI = (pop32());
  /* 1023cff3 pop ebx */
  EBX = (pop32());
  /* 1023cff4 mov esp, ebp */
  ESP = (EBP);
  /* 1023cff6 pop ebp */
  EBP = (pop32());
  /* 1023cff7 ret  */
  ESPCHK(0x1023cfd8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1023d01a (104 bytes, 33 insns) */
void f_1023d01a(void) {
  FTRACE(0x1023d01au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023d01a push ebx */
  push32((uint32_t)(EBX));
  /* 1023d01b push esi */
  push32((uint32_t)(ESI));
  /* 1023d01c push edi */
  push32((uint32_t)(EDI));
  /* 1023d01d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1023d021 push eax */
  push32((uint32_t)(EAX));
  /* 1023d022 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1023d024 push 0x1023cff8 */
  push32((uint32_t)(0x1023cff8u));
  /* 1023d029 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1023d030 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1023d037:;
  /* 1023d037 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1023d03b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1023d03e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1023d041 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d044 je 0x1023d074 */
  if (C.zf) goto L_1023d074;
  /* 1023d046 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d04a je 0x1023d074 */
  if (C.zf) goto L_1023d074;
  /* 1023d04c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1023d04f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1023d052 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1023d056 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1023d059 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d05e jne 0x1023d072 */
  if (!C.zf) goto L_1023d072;
  /* 1023d060 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1023d065 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1023d069 call 0x1023d0ae */
  push32(0x1023d06eu); f_1023d0ae();
  /* 1023d06e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1023d072u);
L_1023d072:;
  /* 1023d072 jmp 0x1023d037 */
  goto L_1023d037;
L_1023d074:;
  /* 1023d074 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1023d07b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023d07e pop edi */
  EDI = (pop32());
  /* 1023d07f pop esi */
  ESI = (pop32());
  /* 1023d080 pop ebx */
  EBX = (pop32());
  /* 1023d081 ret  */
  ESPCHK(0x1023d01au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0ae @ 0x1023d0ae (24 bytes, 10 insns) */
void f_1023d0ae(void) {
  FTRACE(0x1023d0aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023d0ae push ebx */
  push32((uint32_t)(EBX));
  /* 1023d0af push ecx */
  push32((uint32_t)(ECX));
  /* 1023d0b0 mov ebx, 0x102430a4 */
  EBX = (0x102430a4u);
  /* 1023d0b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023d0b8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1023d0bb mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1023d0be mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1023d0c1 pop ecx */
  ECX = (pop32());
  /* 1023d0c2 pop ebx */
  EBX = (pop32());
  /* 1023d0c3 ret 4 */
  ESPCHK(0x1023d0aeu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d18d @ 0x1023d18d (27 bytes, 11 insns) */
void f_1023d18d(void) {
  FTRACE(0x1023d18du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023d18d push ebp */
  push32((uint32_t)(EBP));
  /* 1023d18e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1023d192 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1023d194 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1023d197 push eax */
  push32((uint32_t)(EAX));
  /* 1023d198 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1023d19b push eax */
  push32((uint32_t)(EAX));
  /* 1023d19c call 0x1023d01a */
  push32(0x1023d1a1u); f_1023d01a();
  /* 1023d1a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023d1a4 pop ebp */
  EBP = (pop32());
  /* 1023d1a5 ret 4 */
  ESPCHK(0x1023d18du, _esp0);
  ESP += 8; return;
}

/* FUN_1000d1a8 @ 0x1023d1a8 (111 bytes, 44 insns) */
void f_1023d1a8(void) {
  FTRACE(0x1023d1a8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023d1a8 push ebx */
  push32((uint32_t)(EBX));
  /* 1023d1a9 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1023d1ab cmp dword ptr [0x102467d8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102467d8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d1b1 jne 0x1023d1c6 */
  if (!C.zf) goto L_1023d1c6;
  /* 1023d1b3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1023d1b7 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d1ba jl 0x1023d215 */
  if ((C.sf!=C.of)) goto L_1023d215;
  /* 1023d1bc cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d1bf jg 0x1023d215 */
  if ((!C.zf&&C.sf==C.of)) goto L_1023d215;
  /* 1023d1c1 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023d1c4 pop ebx */
  EBX = (pop32());
  /* 1023d1c5 ret  */
  ESPCHK(0x1023d1a8u, _esp0);
  ESP += 4; return;
L_1023d1c6:;
  /* 1023d1c6 push esi */
  push32((uint32_t)(ESI));
  /* 1023d1c7 mov esi, 0x10246954 */
  ESI = (0x10246954u);
  /* 1023d1cc push edi */
  push32((uint32_t)(EDI));
  /* 1023d1cd push esi */
  push32((uint32_t)(ESI));
  /* 1023d1ce call dword ptr [0x1023e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e090))), 0x1023d1d4u);
  /* 1023d1d4 cmp dword ptr [0x10246950], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10246950))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d1da mov edi, dword ptr [0x1023e08c] */
  EDI = (r32((uint32_t)(0x1023e08c)));
  /* 1023d1e0 je 0x1023d1f0 */
  if (C.zf) goto L_1023d1f0;
  /* 1023d1e2 push esi */
  push32((uint32_t)(ESI));
  /* 1023d1e3 call edi */
  call_ind((uint32_t)(EDI), 0x1023d1e5u);
  /* 1023d1e5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1023d1e7 call 0x1023a0b3 */
  push32(0x1023d1ecu); f_1023a0b3();
  /* 1023d1ec pop ecx */
  ECX = (pop32());
  /* 1023d1ed push 1 */
  push32((uint32_t)(0x1u));
  /* 1023d1ef pop ebx */
  EBX = (pop32());
L_1023d1f0:;
  /* 1023d1f0 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1023d1f4 call 0x1023d217 */
  push32(0x1023d1f9u); f_1023d217();
  /* 1023d1f9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1023d1fb pop ecx */
  ECX = (pop32());
  /* 1023d1fc mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1023d200 je 0x1023d20c */
  if (C.zf) goto L_1023d20c;
  /* 1023d202 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1023d204 call 0x1023a114 */
  push32(0x1023d209u); f_1023a114();
  /* 1023d209 pop ecx */
  ECX = (pop32());
  /* 1023d20a jmp 0x1023d20f */
  goto L_1023d20f;
L_1023d20c:;
  /* 1023d20c push esi */
  push32((uint32_t)(ESI));
  /* 1023d20d call edi */
  call_ind((uint32_t)(EDI), 0x1023d20fu);
L_1023d20f:;
  /* 1023d20f mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1023d213 pop edi */
  EDI = (pop32());
  /* 1023d214 pop esi */
  ESI = (pop32());
L_1023d215:;
  /* 1023d215 pop ebx */
  EBX = (pop32());
  /* 1023d216 ret  */
  ESPCHK(0x1023d1a8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d217 @ 0x1023d217 (204 bytes, 71 insns) */
void f_1023d217(void) {
  FTRACE(0x1023d217u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023d217 push ebp */
  push32((uint32_t)(EBP));
  /* 1023d218 mov ebp, esp */
  EBP = (ESP);
  /* 1023d21a push ecx */
  push32((uint32_t)(ECX));
  /* 1023d21b cmp dword ptr [0x102467d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102467d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d222 push ebx */
  push32((uint32_t)(EBX));
  /* 1023d223 jne 0x1023d242 */
  if (!C.zf) goto L_1023d242;
  /* 1023d225 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023d228 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d22b jl 0x1023d2e0 */
  if ((C.sf!=C.of)) goto L_1023d2e0;
  /* 1023d231 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d234 jg 0x1023d2e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_1023d2e0;
  /* 1023d23a sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023d23d jmp 0x1023d2e0 */
  goto L_1023d2e0;
L_1023d242:;
  /* 1023d242 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023d245 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d24b jge 0x1023d275 */
  if ((C.sf==C.of)) goto L_1023d275;
  /* 1023d24d cmp dword ptr [0x10240b80], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10240b80))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d254 jle 0x1023d262 */
  if ((C.zf||C.sf!=C.of)) goto L_1023d262;
  /* 1023d256 push 2 */
  push32((uint32_t)(0x2u));
  /* 1023d258 push ebx */
  push32((uint32_t)(EBX));
  /* 1023d259 call 0x1023946b */
  push32(0x1023d25eu); f_1023946b();
  /* 1023d25e pop ecx */
  ECX = (pop32());
  /* 1023d25f pop ecx */
  ECX = (pop32());
  /* 1023d260 jmp 0x1023d26d */
  goto L_1023d26d;
L_1023d262:;
  /* 1023d262 mov eax, dword ptr [0x10240970] */
  EAX = (r32((uint32_t)(0x10240970)));
  /* 1023d267 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 1023d26a and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_1023d26d:;
  /* 1023d26d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023d26f jne 0x1023d275 */
  if (!C.zf) goto L_1023d275;
L_1023d271:;
  /* 1023d271 mov eax, ebx */
  EAX = (EBX);
  /* 1023d273 jmp 0x1023d2e0 */
  goto L_1023d2e0;
L_1023d275:;
  /* 1023d275 mov edx, dword ptr [0x10240970] */
  EDX = (r32((uint32_t)(0x10240970)));
  /* 1023d27b mov eax, ebx */
  EAX = (EBX);
  /* 1023d27d sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1023d280 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 1023d283 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1023d288 je 0x1023d298 */
  if (C.zf) goto L_1023d298;
  /* 1023d28a and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 1023d28e mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 1023d291 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 1023d294 push 2 */
  push32((uint32_t)(0x2u));
  /* 1023d296 jmp 0x1023d2a1 */
  goto L_1023d2a1;
L_1023d298:;
  /* 1023d298 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 1023d29c mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 1023d29f push 1 */
  push32((uint32_t)(0x1u));
L_1023d2a1:;
  /* 1023d2a1 pop eax */
  EAX = (pop32());
  /* 1023d2a2 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1023d2a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1023d2a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1023d2a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 1023d2ab push ecx */
  push32((uint32_t)(ECX));
  /* 1023d2ac push eax */
  push32((uint32_t)(EAX));
  /* 1023d2ad lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1023d2b0 push eax */
  push32((uint32_t)(EAX));
  /* 1023d2b1 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1023d2b6 push dword ptr [0x102467d8] */
  push32((uint32_t)(r32((uint32_t)(0x102467d8))));
  /* 1023d2bc call 0x1023c466 */
  push32(0x1023d2c1u); f_1023c466();
  /* 1023d2c1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023d2c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023d2c6 je 0x1023d271 */
  if (C.zf) goto L_1023d271;
  /* 1023d2c8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d2cb jne 0x1023d2d3 */
  if (!C.zf) goto L_1023d2d3;
  /* 1023d2cd movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1023d2d1 jmp 0x1023d2e0 */
  goto L_1023d2e0;
L_1023d2d3:;
  /* 1023d2d3 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 1023d2d7 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1023d2db shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1023d2de or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_1023d2e0:;
  /* 1023d2e0 pop ebx */
  EBX = (pop32());
  /* 1023d2e1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023d2e2 ret  */
  ESPCHK(0x1023d217u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2e3 @ 0x1023d2e3 (49 bytes, 20 insns) */
void f_1023d2e3(void) {
  FTRACE(0x1023d2e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023d2e3 push esi */
  push32((uint32_t)(ESI));
  /* 1023d2e4 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1023d2e8 push edi */
  push32((uint32_t)(EDI));
  /* 1023d2e9 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1023d2ec test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 1023d2f0 je 0x1023d2f8 */
  if (C.zf) goto L_1023d2f8;
  /* 1023d2f2 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1023d2f6 jmp 0x1023d30f */
  goto L_1023d30f;
L_1023d2f8:;
  /* 1023d2f8 push esi */
  push32((uint32_t)(ESI));
  /* 1023d2f9 call 0x1023902e */
  push32(0x1023d2feu); f_1023902e();
  /* 1023d2fe push esi */
  push32((uint32_t)(ESI));
  /* 1023d2ff call 0x1023d314 */
  push32(0x1023d304u); f_1023d314();
  /* 1023d304 push esi */
  push32((uint32_t)(ESI));
  /* 1023d305 mov edi, eax */
  EDI = (EAX);
  /* 1023d307 call 0x10239080 */
  push32(0x1023d30cu); f_10239080();
  /* 1023d30c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023d30f:;
  /* 1023d30f mov eax, edi */
  EAX = (EDI);
  /* 1023d311 pop edi */
  EDI = (pop32());
  /* 1023d312 pop esi */
  ESI = (pop32());
  /* 1023d313 ret  */
  ESPCHK(0x1023d2e3u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x1023d314 (76 bytes, 30 insns) */
void f_1023d314(void) {
  FTRACE(0x1023d314u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023d314 push esi */
  push32((uint32_t)(ESI));
  /* 1023d315 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1023d319 push edi */
  push32((uint32_t)(EDI));
  /* 1023d31a or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1023d31d test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1023d321 je 0x1023d357 */
  if (C.zf) goto L_1023d357;
  /* 1023d323 push esi */
  push32((uint32_t)(ESI));
  /* 1023d324 call 0x1023c214 */
  push32(0x1023d329u); f_1023c214();
  /* 1023d329 push esi */
  push32((uint32_t)(ESI));
  /* 1023d32a mov edi, eax */
  EDI = (EAX);
  /* 1023d32c call 0x1023d886 */
  push32(0x1023d331u); f_1023d886();
  /* 1023d331 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1023d334 call 0x1023d7a6 */
  push32(0x1023d339u); f_1023d7a6();
  /* 1023d339 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023d33c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023d33e jge 0x1023d345 */
  if ((C.sf==C.of)) goto L_1023d345;
  /* 1023d340 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1023d343 jmp 0x1023d357 */
  goto L_1023d357;
L_1023d345:;
  /* 1023d345 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 1023d348 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023d34a je 0x1023d357 */
  if (C.zf) goto L_1023d357;
  /* 1023d34c push eax */
  push32((uint32_t)(EAX));
  /* 1023d34d call 0x1023a266 */
  push32(0x1023d352u); f_1023a266();
  /* 1023d352 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 1023d356 pop ecx */
  ECX = (pop32());
L_1023d357:;
  /* 1023d357 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1023d35b mov eax, edi */
  EAX = (EDI);
  /* 1023d35d pop edi */
  EDI = (pop32());
  /* 1023d35e pop esi */
  ESI = (pop32());
  /* 1023d35f ret  */
  ESPCHK(0x1023d314u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d360 @ 0x1023d360 (147 bytes, 52 insns) */
void f_1023d360(void) {
  FTRACE(0x1023d360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023d360 push ebx */
  push32((uint32_t)(EBX));
  /* 1023d361 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 1023d365 cmp ebx, dword ptr [0x10247ce0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10247ce0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d36b push esi */
  push32((uint32_t)(ESI));
  /* 1023d36c push edi */
  push32((uint32_t)(EDI));
  /* 1023d36d jae 0x1023d3e1 */
  if (!C.cf) goto L_1023d3e1;
  /* 1023d36f mov eax, ebx */
  EAX = (EBX);
  /* 1023d371 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1023d374 lea edi, [eax*4 + 0x10247be0] */
  EDI = ((uint32_t)(EAX*4 + 0x10247be0));
  /* 1023d37b mov eax, ebx */
  EAX = (EBX);
  /* 1023d37d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1023d380 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1023d383 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1023d385 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1023d388 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1023d38d je 0x1023d3e1 */
  if (C.zf) goto L_1023d3e1;
  /* 1023d38f push ebx */
  push32((uint32_t)(EBX));
  /* 1023d390 call 0x1023c0e4 */
  push32(0x1023d395u); f_1023c0e4();
  /* 1023d395 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1023d397 pop ecx */
  ECX = (pop32());
  /* 1023d398 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1023d39d je 0x1023d3c8 */
  if (C.zf) goto L_1023d3c8;
  /* 1023d39f push ebx */
  push32((uint32_t)(EBX));
  /* 1023d3a0 call 0x1023c0a2 */
  push32(0x1023d3a5u); f_1023c0a2();
  /* 1023d3a5 pop ecx */
  ECX = (pop32());
  /* 1023d3a6 push eax */
  push32((uint32_t)(EAX));
  /* 1023d3a7 call dword ptr [0x1023e0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e0d0))), 0x1023d3adu);
  /* 1023d3ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023d3af jne 0x1023d3bb */
  if (!C.zf) goto L_1023d3bb;
  /* 1023d3b1 call dword ptr [0x1023e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e03c))), 0x1023d3b7u);
  /* 1023d3b7 mov esi, eax */
  ESI = (EAX);
  /* 1023d3b9 jmp 0x1023d3bd */
  goto L_1023d3bd;
L_1023d3bb:;
  /* 1023d3bb xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1023d3bd:;
  /* 1023d3bd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1023d3bf je 0x1023d3d6 */
  if (C.zf) goto L_1023d3d6;
  /* 1023d3c1 call 0x1023c01a */
  push32(0x1023d3c6u); f_1023c01a();
  /* 1023d3c6 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1023d3c8:;
  /* 1023d3c8 call 0x1023c011 */
  push32(0x1023d3cdu); f_1023c011();
  /* 1023d3cd mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1023d3d3 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_1023d3d6:;
  /* 1023d3d6 push ebx */
  push32((uint32_t)(EBX));
  /* 1023d3d7 call 0x1023c143 */
  push32(0x1023d3dcu); f_1023c143();
  /* 1023d3dc pop ecx */
  ECX = (pop32());
  /* 1023d3dd mov eax, esi */
  EAX = (ESI);
  /* 1023d3df jmp 0x1023d3ef */
  goto L_1023d3ef;
L_1023d3e1:;
  /* 1023d3e1 call 0x1023c011 */
  push32(0x1023d3e6u); f_1023c011();
  /* 1023d3e6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1023d3ec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1023d3ef:;
  /* 1023d3ef pop edi */
  EDI = (pop32());
  /* 1023d3f0 pop esi */
  ESI = (pop32());
  /* 1023d3f1 pop ebx */
  EBX = (pop32());
  /* 1023d3f2 ret  */
  ESPCHK(0x1023d360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d490 @ 0x1023d490 (62 bytes, 35 insns) */
void f_1023d490(void) {
  FTRACE(0x1023d490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023d490 push ebp */
  push32((uint32_t)(EBP));
  /* 1023d491 mov ebp, esp */
  EBP = (ESP);
  /* 1023d493 push esi */
  push32((uint32_t)(ESI));
  /* 1023d494 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023d496 push eax */
  push32((uint32_t)(EAX));
  /* 1023d497 push eax */
  push32((uint32_t)(EAX));
  /* 1023d498 push eax */
  push32((uint32_t)(EAX));
  /* 1023d499 push eax */
  push32((uint32_t)(EAX));
  /* 1023d49a push eax */
  push32((uint32_t)(EAX));
  /* 1023d49b push eax */
  push32((uint32_t)(EAX));
  /* 1023d49c push eax */
  push32((uint32_t)(EAX));
  /* 1023d49d push eax */
  push32((uint32_t)(EAX));
  /* 1023d49e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1023d4a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1023d4a4:;
  /* 1023d4a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1023d4a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1023d4a8 je 0x1023d4b1 */
  if (C.zf) goto L_1023d4b1;
  /* 1023d4aa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1023d4ab bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1023d4ab");
  /* 1023d4af jmp 0x1023d4a4 */
  goto L_1023d4a4;
L_1023d4b1:;
  /* 1023d4b1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1023d4b4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1023d4b7 nop  */
  /* nop */
L_1023d4b8:;
  /* 1023d4b8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1023d4b9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1023d4bb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1023d4bd je 0x1023d4c6 */
  if (C.zf) goto L_1023d4c6;
  /* 1023d4bf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1023d4c0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1023d4c0");
  /* 1023d4c4 jae 0x1023d4b8 */
  if (!C.cf) goto L_1023d4b8;
L_1023d4c6:;
  /* 1023d4c6 mov eax, ecx */
  EAX = (ECX);
  /* 1023d4c8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023d4cb pop esi */
  ESI = (pop32());
  /* 1023d4cc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023d4cd ret  */
  ESPCHK(0x1023d490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4d0 @ 0x1023d4d0 (58 bytes, 32 insns) */
void f_1023d4d0(void) {
  FTRACE(0x1023d4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023d4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1023d4d1 mov ebp, esp */
  EBP = (ESP);
  /* 1023d4d3 push esi */
  push32((uint32_t)(ESI));
  /* 1023d4d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023d4d6 push eax */
  push32((uint32_t)(EAX));
  /* 1023d4d7 push eax */
  push32((uint32_t)(EAX));
  /* 1023d4d8 push eax */
  push32((uint32_t)(EAX));
  /* 1023d4d9 push eax */
  push32((uint32_t)(EAX));
  /* 1023d4da push eax */
  push32((uint32_t)(EAX));
  /* 1023d4db push eax */
  push32((uint32_t)(EAX));
  /* 1023d4dc push eax */
  push32((uint32_t)(EAX));
  /* 1023d4dd push eax */
  push32((uint32_t)(EAX));
  /* 1023d4de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1023d4e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1023d4e4:;
  /* 1023d4e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1023d4e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1023d4e8 je 0x1023d4f1 */
  if (C.zf) goto L_1023d4f1;
  /* 1023d4ea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1023d4eb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1023d4eb");
  /* 1023d4ef jmp 0x1023d4e4 */
  goto L_1023d4e4;
L_1023d4f1:;
  /* 1023d4f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1023d4f4:;
  /* 1023d4f4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1023d4f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1023d4f8 je 0x1023d504 */
  if (C.zf) goto L_1023d504;
  /* 1023d4fa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1023d4fb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1023d4fb");
  /* 1023d4ff jae 0x1023d4f4 */
  if (!C.cf) goto L_1023d4f4;
  /* 1023d501 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1023d504:;
  /* 1023d504 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023d507 pop esi */
  ESI = (pop32());
  /* 1023d508 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023d509 ret  */
  ESPCHK(0x1023d4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d50a @ 0x1023d50a (544 bytes, 177 insns) */
void f_1023d50a(void) {
  FTRACE(0x1023d50au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023d50a push ebp */
  push32((uint32_t)(EBP));
  /* 1023d50b mov ebp, esp */
  EBP = (ESP);
  /* 1023d50d sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023d510 push ebx */
  push32((uint32_t)(EBX));
  /* 1023d511 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1023d514 push esi */
  push32((uint32_t)(ESI));
  /* 1023d515 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1023d518 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 1023d51c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023d51e push edi */
  push32((uint32_t)(EDI));
  /* 1023d51f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1023d522 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1023d525 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1023d528 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1023d52b mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 1023d52f mov edi, ecx */
  EDI = (ECX);
  /* 1023d531 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 1023d536 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 1023d538 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1023d53a and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1023d53c and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 1023d542 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1023d546 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 1023d549 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1023d54c jae 0x1023d70a */
  if (!C.cf) goto L_1023d70a;
  /* 1023d552 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1023d557 jae 0x1023d70a */
  if (!C.cf) goto L_1023d70a;
  /* 1023d55d cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1023d562 ja 0x1023d70a */
  if ((!C.cf&&!C.zf)) goto L_1023d70a;
  /* 1023d568 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1023d56d ja 0x1023d573 */
  if ((!C.cf&&!C.zf)) goto L_1023d573;
  /* 1023d56f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023d571 jmp 0x1023d5ad */
  goto L_1023d5ad;
L_1023d573:;
  /* 1023d573 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 1023d576 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 1023d57b jne 0x1023d595 */
  if (!C.zf) goto L_1023d595;
  /* 1023d57d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1023d580 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 1023d583 jne 0x1023d595 */
  if (!C.zf) goto L_1023d595;
  /* 1023d585 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023d587 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d58a jne 0x1023d597 */
  if (!C.zf) goto L_1023d597;
  /* 1023d58c cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d58e jne 0x1023d597 */
  if (!C.zf) goto L_1023d597;
  /* 1023d590 jmp 0x1023d704 */
  goto L_1023d704;
L_1023d595:;
  /* 1023d595 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1023d597:;
  /* 1023d597 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1023d59a jne 0x1023d5ba */
  if (!C.zf) goto L_1023d5ba;
  /* 1023d59c inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1023d59f test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 1023d5a2 jne 0x1023d5ba */
  if (!C.zf) goto L_1023d5ba;
  /* 1023d5a4 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d5a7 jne 0x1023d5ba */
  if (!C.zf) goto L_1023d5ba;
  /* 1023d5a9 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d5ab jne 0x1023d5ba */
  if (!C.zf) goto L_1023d5ba;
L_1023d5ad:;
  /* 1023d5ad mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1023d5b0 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1023d5b3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1023d5b5 jmp 0x1023d725 */
  goto L_1023d725;
L_1023d5ba:;
  /* 1023d5ba mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1023d5bd lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1023d5c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1023d5c3 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_1023d5ca:;
  /* 1023d5ca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1023d5cd add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023d5cf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d5d3 jle 0x1023d61e */
  if ((C.zf||C.sf!=C.of)) goto L_1023d61e;
  /* 1023d5d5 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023d5d7 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 1023d5da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1023d5dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1023d5e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1023d5e3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1023d5e6:;
  /* 1023d5e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1023d5e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1023d5ec movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 1023d5ef movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 1023d5f2 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1023d5f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1023d5f8 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023d5fb push ecx */
  push32((uint32_t)(ECX));
  /* 1023d5fc push eax */
  push32((uint32_t)(EAX));
  /* 1023d5fd push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 1023d5ff call 0x1023c6b5 */
  push32(0x1023d604u); f_1023c6b5();
  /* 1023d604 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023d607 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023d609 je 0x1023d611 */
  if (C.zf) goto L_1023d611;
  /* 1023d60b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1023d60e inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_1023d611:;
  /* 1023d611 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1023d615 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1023d619 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 1023d61c jne 0x1023d5e6 */
  if (!C.zf) goto L_1023d5e6;
L_1023d61e:;
  /* 1023d61e add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1023d622 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 1023d625 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 1023d628 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d62c jg 0x1023d5ca */
  if ((!C.zf&&C.sf==C.of)) goto L_1023d5ca;
  /* 1023d62e add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1023d635 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1023d63a jle 0x1023d661 */
  if ((C.zf||C.sf!=C.of)) goto L_1023d661;
L_1023d63c:;
  /* 1023d63c test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 1023d640 jne 0x1023d65a */
  if (!C.zf) goto L_1023d65a;
  /* 1023d642 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1023d645 push eax */
  push32((uint32_t)(EAX));
  /* 1023d646 call 0x1023c734 */
  push32(0x1023d64bu); f_1023c734();
  /* 1023d64b add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1023d652 pop ecx */
  ECX = (pop32());
  /* 1023d653 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1023d658 jg 0x1023d63c */
  if ((!C.zf&&C.sf==C.of)) goto L_1023d63c;
L_1023d65a:;
  /* 1023d65a cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1023d65f jg 0x1023d69a */
  if ((!C.zf&&C.sf==C.of)) goto L_1023d69a;
L_1023d661:;
  /* 1023d661 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1023d668 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1023d66d jge 0x1023d69a */
  if ((C.sf==C.of)) goto L_1023d69a;
  /* 1023d66f movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 1023d673 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1023d675 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1023d678 mov ebx, eax */
  EBX = (EAX);
L_1023d67a:;
  /* 1023d67a test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 1023d67e je 0x1023d683 */
  if (C.zf) goto L_1023d683;
  /* 1023d680 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_1023d683:;
  /* 1023d683 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1023d686 push eax */
  push32((uint32_t)(EAX));
  /* 1023d687 call 0x1023c762 */
  push32(0x1023d68cu); f_1023c762();
  /* 1023d68c dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1023d68d pop ecx */
  ECX = (pop32());
  /* 1023d68e jne 0x1023d67a */
  if (!C.zf) goto L_1023d67a;
  /* 1023d690 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d694 je 0x1023d69a */
  if (C.zf) goto L_1023d69a;
  /* 1023d696 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_1023d69a:;
  /* 1023d69a cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1023d6a0 ja 0x1023d6b1 */
  if ((!C.cf&&!C.zf)) goto L_1023d6b1;
  /* 1023d6a2 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1023d6a5 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1023d6aa cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d6af jne 0x1023d6e6 */
  if (!C.zf) goto L_1023d6e6;
L_1023d6b1:;
  /* 1023d6b1 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d6b5 jne 0x1023d6e3 */
  if (!C.zf) goto L_1023d6e3;
  /* 1023d6b7 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 1023d6bb cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d6bf jne 0x1023d6de */
  if (!C.zf) goto L_1023d6de;
  /* 1023d6c1 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 1023d6c5 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1023d6cb jne 0x1023d6d8 */
  if (!C.zf) goto L_1023d6d8;
  /* 1023d6cd inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1023d6d0 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 1023d6d6 jmp 0x1023d6e6 */
  goto L_1023d6e6;
L_1023d6d8:;
  /* 1023d6d8 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 1023d6dc jmp 0x1023d6e6 */
  goto L_1023d6e6;
L_1023d6de:;
  /* 1023d6de inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 1023d6e1 jmp 0x1023d6e6 */
  goto L_1023d6e6;
L_1023d6e3:;
  /* 1023d6e3 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_1023d6e6:;
  /* 1023d6e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023d6e9 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1023d6ed jae 0x1023d70a */
  if (!C.cf) goto L_1023d70a;
  /* 1023d6ef mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 1023d6f3 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 1023d6f5 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 1023d6f8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1023d6fb mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 1023d6fe mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1023d701 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_1023d704:;
  /* 1023d704 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 1023d708 jmp 0x1023d725 */
  goto L_1023d725;
L_1023d70a:;
  /* 1023d70a neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 1023d70d sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023d70f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1023d713 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 1023d719 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1023d71f and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1023d722 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_1023d725:;
  /* 1023d725 pop edi */
  EDI = (pop32());
  /* 1023d726 pop esi */
  ESI = (pop32());
  /* 1023d727 pop ebx */
  EBX = (pop32());
  /* 1023d728 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023d729 ret  */
  ESPCHK(0x1023d50au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d72a @ 0x1023d72a (124 bytes, 52 insns) */
void f_1023d72a(void) {
  FTRACE(0x1023d72au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023d72a push ebp */
  push32((uint32_t)(EBP));
  /* 1023d72b mov ebp, esp */
  EBP = (ESP);
  /* 1023d72d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023d730 push ebx */
  push32((uint32_t)(EBX));
  /* 1023d731 mov ebx, 0x102431c0 */
  EBX = (0x102431c0u);
  /* 1023d736 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1023d738 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023d73b cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d73e je 0x1023d7a3 */
  if (C.zf) goto L_1023d7a3;
  /* 1023d740 jge 0x1023d752 */
  if ((C.sf==C.of)) goto L_1023d752;
  /* 1023d742 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1023d745 mov ebx, 0x10243320 */
  EBX = (0x10243320u);
  /* 1023d74a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1023d74c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1023d74f sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_1023d752:;
  /* 1023d752 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d755 jne 0x1023d75d */
  if (!C.zf) goto L_1023d75d;
  /* 1023d757 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1023d75a mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_1023d75d:;
  /* 1023d75d cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d760 je 0x1023d7a3 */
  if (C.zf) goto L_1023d7a3;
  /* 1023d762 push esi */
  push32((uint32_t)(ESI));
  /* 1023d763 push edi */
  push32((uint32_t)(EDI));
L_1023d764:;
  /* 1023d764 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1023d767 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1023d76a sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 1023d76e and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1023d771 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d773 je 0x1023d79c */
  if (C.zf) goto L_1023d79c;
  /* 1023d775 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 1023d778 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1023d77e lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 1023d781 jb 0x1023d78f */
  if (C.cf) goto L_1023d78f;
  /* 1023d783 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 1023d786 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1023d787 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1023d788 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1023d789 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 1023d78c lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_1023d78f:;
  /* 1023d78f push esi */
  push32((uint32_t)(ESI));
  /* 1023d790 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1023d793 call 0x1023d50a */
  push32(0x1023d798u); f_1023d50a();
  /* 1023d798 pop ecx */
  ECX = (pop32());
  /* 1023d799 pop ecx */
  ECX = (pop32());
  /* 1023d79a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_1023d79c:;
  /* 1023d79c cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d79f jne 0x1023d764 */
  if (!C.zf) goto L_1023d764;
  /* 1023d7a1 pop edi */
  EDI = (pop32());
  /* 1023d7a2 pop esi */
  ESI = (pop32());
L_1023d7a3:;
  /* 1023d7a3 pop ebx */
  EBX = (pop32());
  /* 1023d7a4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023d7a5 ret  */
  ESPCHK(0x1023d72au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7a6 @ 0x1023d7a6 (93 bytes, 32 insns) */
void f_1023d7a6(void) {
  FTRACE(0x1023d7a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023d7a6 push esi */
  push32((uint32_t)(ESI));
  /* 1023d7a7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1023d7ab cmp esi, dword ptr [0x10247ce0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10247ce0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d7b1 jae 0x1023d7eb */
  if (!C.cf) goto L_1023d7eb;
  /* 1023d7b3 mov ecx, esi */
  ECX = (ESI);
  /* 1023d7b5 mov eax, esi */
  EAX = (ESI);
  /* 1023d7b7 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1023d7ba and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1023d7bd mov ecx, dword ptr [ecx*4 + 0x10247be0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10247be0)));
  /* 1023d7c4 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1023d7c7 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1023d7cc je 0x1023d7eb */
  if (C.zf) goto L_1023d7eb;
  /* 1023d7ce push edi */
  push32((uint32_t)(EDI));
  /* 1023d7cf push esi */
  push32((uint32_t)(ESI));
  /* 1023d7d0 call 0x1023c0e4 */
  push32(0x1023d7d5u); f_1023c0e4();
  /* 1023d7d5 push esi */
  push32((uint32_t)(ESI));
  /* 1023d7d6 call 0x1023d803 */
  push32(0x1023d7dbu); f_1023d803();
  /* 1023d7db push esi */
  push32((uint32_t)(ESI));
  /* 1023d7dc mov edi, eax */
  EDI = (EAX);
  /* 1023d7de call 0x1023c143 */
  push32(0x1023d7e3u); f_1023c143();
  /* 1023d7e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023d7e6 mov eax, edi */
  EAX = (EDI);
  /* 1023d7e8 pop edi */
  EDI = (pop32());
  /* 1023d7e9 pop esi */
  ESI = (pop32());
  /* 1023d7ea ret  */
  ESPCHK(0x1023d7a6u, _esp0);
  ESP += 4; return;
L_1023d7eb:;
  /* 1023d7eb call 0x1023c011 */
  push32(0x1023d7f0u); f_1023c011();
  /* 1023d7f0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1023d7f6 call 0x1023c01a */
  push32(0x1023d7fbu); f_1023c01a();
  /* 1023d7fb and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1023d7fe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1023d801 pop esi */
  ESI = (pop32());
  /* 1023d802 ret  */
  ESPCHK(0x1023d7a6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d803 @ 0x1023d803 (131 bytes, 52 insns) */
void f_1023d803(void) {
  FTRACE(0x1023d803u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023d803 push esi */
  push32((uint32_t)(ESI));
  /* 1023d804 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1023d808 push edi */
  push32((uint32_t)(EDI));
  /* 1023d809 push esi */
  push32((uint32_t)(ESI));
  /* 1023d80a call 0x1023c0a2 */
  push32(0x1023d80fu); f_1023c0a2();
  /* 1023d80f cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d812 pop ecx */
  ECX = (pop32());
  /* 1023d813 je 0x1023d851 */
  if (C.zf) goto L_1023d851;
  /* 1023d815 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d818 je 0x1023d81f */
  if (C.zf) goto L_1023d81f;
  /* 1023d81a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d81d jne 0x1023d835 */
  if (!C.zf) goto L_1023d835;
L_1023d81f:;
  /* 1023d81f push 2 */
  push32((uint32_t)(0x2u));
  /* 1023d821 call 0x1023c0a2 */
  push32(0x1023d826u); f_1023c0a2();
  /* 1023d826 push 1 */
  push32((uint32_t)(0x1u));
  /* 1023d828 mov edi, eax */
  EDI = (EAX);
  /* 1023d82a call 0x1023c0a2 */
  push32(0x1023d82fu); f_1023c0a2();
  /* 1023d82f pop ecx */
  ECX = (pop32());
  /* 1023d830 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d832 pop ecx */
  ECX = (pop32());
  /* 1023d833 je 0x1023d851 */
  if (C.zf) goto L_1023d851;
L_1023d835:;
  /* 1023d835 push esi */
  push32((uint32_t)(ESI));
  /* 1023d836 call 0x1023c0a2 */
  push32(0x1023d83bu); f_1023c0a2();
  /* 1023d83b pop ecx */
  ECX = (pop32());
  /* 1023d83c push eax */
  push32((uint32_t)(EAX));
  /* 1023d83d call dword ptr [0x1023e0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e0d4))), 0x1023d843u);
  /* 1023d843 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1023d845 jne 0x1023d851 */
  if (!C.zf) goto L_1023d851;
  /* 1023d847 call dword ptr [0x1023e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1023e03c))), 0x1023d84du);
  /* 1023d84d mov edi, eax */
  EDI = (EAX);
  /* 1023d84f jmp 0x1023d853 */
  goto L_1023d853;
L_1023d851:;
  /* 1023d851 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_1023d853:;
  /* 1023d853 push esi */
  push32((uint32_t)(ESI));
  /* 1023d854 call 0x1023c023 */
  push32(0x1023d859u); f_1023c023();
  /* 1023d859 mov eax, esi */
  EAX = (ESI);
  /* 1023d85b and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 1023d85e sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1023d861 pop ecx */
  ECX = (pop32());
  /* 1023d862 mov eax, dword ptr [eax*4 + 0x10247be0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10247be0)));
  /* 1023d869 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 1023d86c and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 1023d871 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1023d873 je 0x1023d881 */
  if (C.zf) goto L_1023d881;
  /* 1023d875 push edi */
  push32((uint32_t)(EDI));
  /* 1023d876 call 0x1023bf9e */
  push32(0x1023d87bu); f_1023bf9e();
  /* 1023d87b pop ecx */
  ECX = (pop32());
  /* 1023d87c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1023d87f jmp 0x1023d883 */
  goto L_1023d883;
L_1023d881:;
  /* 1023d881 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1023d883:;
  /* 1023d883 pop edi */
  EDI = (pop32());
  /* 1023d884 pop esi */
  ESI = (pop32());
  /* 1023d885 ret  */
  ESPCHK(0x1023d803u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x1023d886 (43 bytes, 17 insns) */
void f_1023d886(void) {
  FTRACE(0x1023d886u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023d886 push esi */
  push32((uint32_t)(ESI));
  /* 1023d887 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1023d88b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1023d88e test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 1023d890 je 0x1023d8af */
  if (C.zf) goto L_1023d8af;
  /* 1023d892 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1023d894 je 0x1023d8af */
  if (C.zf) goto L_1023d8af;
  /* 1023d896 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 1023d899 call 0x1023a266 */
  push32(0x1023d89eu); f_1023a266();
  /* 1023d89e and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 1023d8a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023d8a6 pop ecx */
  ECX = (pop32());
  /* 1023d8a7 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1023d8a9 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1023d8ac mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_1023d8af:;
  /* 1023d8af pop esi */
  ESI = (pop32());
  /* 1023d8b0 ret  */
  ESPCHK(0x1023d886u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8c0 @ 0x1023d8c0 (208 bytes, 85 insns) */
void f_1023d8c0(void) {
  FTRACE(0x1023d8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023d8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1023d8c1 mov ebp, esp */
  EBP = (ESP);
  /* 1023d8c3 push edi */
  push32((uint32_t)(EDI));
  /* 1023d8c4 push esi */
  push32((uint32_t)(ESI));
  /* 1023d8c5 push ebx */
  push32((uint32_t)(EBX));
  /* 1023d8c6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1023d8c9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1023d8cc lea eax, [0x102467d0] */
  EAX = ((uint32_t)(0x102467d0));
  /* 1023d8d2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d8d6 jne 0x1023d913 */
  if (!C.zf) goto L_1023d913;
  /* 1023d8d8 mov al, 0xff */
  AL = (0xffu);
  /* 1023d8da mov edi, edi */
  EDI = (EDI);
L_1023d8dc:;
  /* 1023d8dc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1023d8de je 0x1023d90e */
  if (C.zf) goto L_1023d90e;
  /* 1023d8e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1023d8e2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1023d8e3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 1023d8e5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1023d8e6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023d8e8 je 0x1023d8dc */
  if (C.zf) goto L_1023d8dc;
  /* 1023d8ea sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1023d8ec cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023d8ee sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1023d8f0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1023d8f3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1023d8f5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1023d8f7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 1023d8f9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1023d8fb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023d8fd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1023d8ff and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1023d902 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1023d904 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1023d906 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023d908 je 0x1023d8dc */
  if (C.zf) goto L_1023d8dc;
  /* 1023d90a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1023d90c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1023d90e:;
  /* 1023d90e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1023d911 jmp 0x1023d98b */
  goto L_1023d98b;
L_1023d913:;
  /* 1023d913 lock inc dword ptr [0x10246954] */
  x86_unimpl("lock inc @ 0x1023d913");
  /* 1023d91a cmp dword ptr [0x10246950], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10246950))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d921 jg 0x1023d927 */
  if ((!C.zf&&C.sf==C.of)) goto L_1023d927;
  /* 1023d923 push 0 */
  push32((uint32_t)(0x0u));
  /* 1023d925 jmp 0x1023d93c */
  goto L_1023d93c;
L_1023d927:;
  /* 1023d927 lock dec dword ptr [0x10246954] */
  x86_unimpl("lock dec @ 0x1023d927");
  /* 1023d92e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1023d930 call 0x1023a0b3 */
  push32(0x1023d935u); f_1023a0b3();
  /* 1023d935 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1023d93c:;
  /* 1023d93c mov eax, 0xff */
  EAX = (0xffu);
  /* 1023d941 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1023d943 nop  */
  /* nop */
L_1023d944:;
  /* 1023d944 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1023d946 je 0x1023d96f */
  if (C.zf) goto L_1023d96f;
  /* 1023d948 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1023d94a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1023d94b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1023d94d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1023d94e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023d950 je 0x1023d944 */
  if (C.zf) goto L_1023d944;
  /* 1023d952 push eax */
  push32((uint32_t)(EAX));
  /* 1023d953 push ebx */
  push32((uint32_t)(EBX));
  /* 1023d954 call 0x1023954f */
  push32(0x1023d959u); f_1023954f();
  /* 1023d959 mov ebx, eax */
  EBX = (EAX);
  /* 1023d95b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023d95e call 0x1023954f */
  push32(0x1023d963u); f_1023954f();
  /* 1023d963 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023d966 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023d968 je 0x1023d944 */
  if (C.zf) goto L_1023d944;
  /* 1023d96a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1023d96c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1023d96f:;
  /* 1023d96f mov ebx, eax */
  EBX = (EAX);
  /* 1023d971 pop eax */
  EAX = (pop32());
  /* 1023d972 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023d974 jne 0x1023d97f */
  if (!C.zf) goto L_1023d97f;
  /* 1023d976 lock dec dword ptr [0x10246954] */
  x86_unimpl("lock dec @ 0x1023d976");
  /* 1023d97d jmp 0x1023d989 */
  goto L_1023d989;
L_1023d97f:;
  /* 1023d97f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1023d981 call 0x1023a114 */
  push32(0x1023d986u); f_1023a114();
  /* 1023d986 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1023d989:;
  /* 1023d989 mov eax, ebx */
  EAX = (EBX);
L_1023d98b:;
  /* 1023d98b pop ebx */
  EBX = (pop32());
  /* 1023d98c pop esi */
  ESI = (pop32());
  /* 1023d98d pop edi */
  EDI = (pop32());
  /* 1023d98e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023d98f ret  */
  ESPCHK(0x1023d8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d990 @ 0x1023d990 (257 bytes, 103 insns) */
void f_1023d990(void) {
  FTRACE(0x1023d990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023d990 push ebp */
  push32((uint32_t)(EBP));
  /* 1023d991 mov ebp, esp */
  EBP = (ESP);
  /* 1023d993 push edi */
  push32((uint32_t)(EDI));
  /* 1023d994 push esi */
  push32((uint32_t)(ESI));
  /* 1023d995 push ebx */
  push32((uint32_t)(EBX));
  /* 1023d996 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1023d999 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1023d99b je 0x1023da8a */
  if (C.zf) goto L_1023da8a;
  /* 1023d9a1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1023d9a4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1023d9a7 lea eax, [0x102467d0] */
  EAX = ((uint32_t)(0x102467d0));
  /* 1023d9ad cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023d9b1 jne 0x1023da01 */
  if (!C.zf) goto L_1023da01;
  /* 1023d9b3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 1023d9b5 mov bl, 0x5a */
  BL = (0x5au);
  /* 1023d9b7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 1023d9b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1023d9bc:;
  /* 1023d9bc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1023d9be or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1023d9c0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1023d9c2 je 0x1023d9e5 */
  if (C.zf) goto L_1023d9e5;
  /* 1023d9c4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1023d9c6 je 0x1023d9e5 */
  if (C.zf) goto L_1023d9e5;
  /* 1023d9c8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1023d9c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1023d9ca cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023d9cc jb 0x1023d9d4 */
  if (C.cf) goto L_1023d9d4;
  /* 1023d9ce cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023d9d0 ja 0x1023d9d4 */
  if ((!C.cf&&!C.zf)) goto L_1023d9d4;
  /* 1023d9d2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_1023d9d4:;
  /* 1023d9d4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023d9d6 jb 0x1023d9de */
  if (C.cf) goto L_1023d9de;
  /* 1023d9d8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023d9da ja 0x1023d9de */
  if ((!C.cf&&!C.zf)) goto L_1023d9de;
  /* 1023d9dc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1023d9de:;
  /* 1023d9de cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023d9e0 jne 0x1023d9ef */
  if (!C.zf) goto L_1023d9ef;
  /* 1023d9e2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1023d9e3 jne 0x1023d9bc */
  if (!C.zf) goto L_1023d9bc;
L_1023d9e5:;
  /* 1023d9e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1023d9e7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1023d9e9 je 0x1023da8a */
  if (C.zf) goto L_1023da8a;
L_1023d9ef:;
  /* 1023d9ef mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1023d9f4 jb 0x1023da8a */
  if (C.cf) goto L_1023da8a;
  /* 1023d9fa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1023d9fc jmp 0x1023da8a */
  goto L_1023da8a;
L_1023da01:;
  /* 1023da01 lock inc dword ptr [0x10246954] */
  x86_unimpl("lock inc @ 0x1023da01");
  /* 1023da08 cmp dword ptr [0x10246950], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10246950))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023da0f jg 0x1023da15 */
  if ((!C.zf&&C.sf==C.of)) goto L_1023da15;
  /* 1023da11 push 0 */
  push32((uint32_t)(0x0u));
  /* 1023da13 jmp 0x1023da2e */
  goto L_1023da2e;
L_1023da15:;
  /* 1023da15 lock dec dword ptr [0x10246954] */
  x86_unimpl("lock dec @ 0x1023da15");
  /* 1023da1c mov ebx, ecx */
  EBX = (ECX);
  /* 1023da1e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1023da20 call 0x1023a0b3 */
  push32(0x1023da25u); f_1023a0b3();
  /* 1023da25 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1023da2c mov ecx, ebx */
  ECX = (EBX);
L_1023da2e:;
  /* 1023da2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023da30 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1023da32 mov edi, edi */
  EDI = (EDI);
L_1023da34:;
  /* 1023da34 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1023da36 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023da38 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1023da3a je 0x1023da5f */
  if (C.zf) goto L_1023da5f;
  /* 1023da3c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1023da3e je 0x1023da5f */
  if (C.zf) goto L_1023da5f;
  /* 1023da40 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1023da41 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1023da42 push ecx */
  push32((uint32_t)(ECX));
  /* 1023da43 push eax */
  push32((uint32_t)(EAX));
  /* 1023da44 push ebx */
  push32((uint32_t)(EBX));
  /* 1023da45 call 0x1023954f */
  push32(0x1023da4au); f_1023954f();
  /* 1023da4a mov ebx, eax */
  EBX = (EAX);
  /* 1023da4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023da4f call 0x1023954f */
  push32(0x1023da54u); f_1023954f();
  /* 1023da54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023da57 pop ecx */
  ECX = (pop32());
  /* 1023da58 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023da5a jne 0x1023da65 */
  if (!C.zf) goto L_1023da65;
  /* 1023da5c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1023da5d jne 0x1023da34 */
  if (!C.zf) goto L_1023da34;
L_1023da5f:;
  /* 1023da5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1023da61 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1023da63 je 0x1023da6e */
  if (C.zf) goto L_1023da6e;
L_1023da65:;
  /* 1023da65 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1023da6a jb 0x1023da6e */
  if (C.cf) goto L_1023da6e;
  /* 1023da6c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1023da6e:;
  /* 1023da6e pop eax */
  EAX = (pop32());
  /* 1023da6f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1023da71 jne 0x1023da7c */
  if (!C.zf) goto L_1023da7c;
  /* 1023da73 lock dec dword ptr [0x10246954] */
  x86_unimpl("lock dec @ 0x1023da73");
  /* 1023da7a jmp 0x1023da8a */
  goto L_1023da8a;
L_1023da7c:;
  /* 1023da7c mov ebx, ecx */
  EBX = (ECX);
  /* 1023da7e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1023da80 call 0x1023a114 */
  push32(0x1023da85u); f_1023a114();
  /* 1023da85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1023da88 mov ecx, ebx */
  ECX = (EBX);
L_1023da8a:;
  /* 1023da8a mov eax, ecx */
  EAX = (ECX);
  /* 1023da8c pop ebx */
  EBX = (pop32());
  /* 1023da8d pop esi */
  ESI = (pop32());
  /* 1023da8e pop edi */
  EDI = (pop32());
  /* 1023da8f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1023da90 ret  */
  ESPCHK(0x1023d990u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x1023dad4 (6 bytes, 1 insns) */
void f_1023dad4(void) {
  FTRACE(0x1023dad4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1023dad4 jmp dword ptr [0x1023e0cc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1023e0cc)))); return;
}

