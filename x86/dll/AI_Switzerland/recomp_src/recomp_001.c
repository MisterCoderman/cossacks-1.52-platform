#include "recomp.h"

/* __aullrem @ 0x101c9290 (117 bytes, 44 insns) */
void f_101c9290(void) {
  FTRACE(0x101c9290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c9290 push ebx */
  push32((uint32_t)(EBX));
  /* 101c9291 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 101c9295 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c9297 jne 0x101c92b1 */
  if (!C.zf) goto L_101c92b1;
  /* 101c9299 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 101c929d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 101c92a1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101c92a3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101c92a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c92a9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101c92ab mov eax, edx */
  EAX = (EDX);
  /* 101c92ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101c92af jmp 0x101c9301 */
  goto L_101c9301;
L_101c92b1:;
  /* 101c92b1 mov ecx, eax */
  ECX = (EAX);
  /* 101c92b3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 101c92b7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 101c92bb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_101c92bf:;
  /* 101c92bf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 101c92c1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 101c92c3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 101c92c5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 101c92c7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101c92c9 jne 0x101c92bf */
  if (!C.zf) goto L_101c92bf;
  /* 101c92cb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101c92cd mov ecx, eax */
  ECX = (EAX);
  /* 101c92cf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 101c92d3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 101c92d4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 101c92d8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c92da jb 0x101c92ea */
  if (C.cf) goto L_101c92ea;
  /* 101c92dc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c92e0 ja 0x101c92ea */
  if ((!C.cf&&!C.zf)) goto L_101c92ea;
  /* 101c92e2 jb 0x101c92f2 */
  if (C.cf) goto L_101c92f2;
  /* 101c92e4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c92e8 jbe 0x101c92f2 */
  if ((C.cf||C.zf)) goto L_101c92f2;
L_101c92ea:;
  /* 101c92ea sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c92ee sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_101c92f2:;
  /* 101c92f2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c92f6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c92fa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 101c92fc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101c92fe sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_101c9301:;
  /* 101c9301 pop ebx */
  EBX = (pop32());
  /* 101c9302 ret 0x10 */
  ESPCHK(0x101c9290u, _esp0);
  ESP += 20; return;
}

/* FUN_10009305 @ 0x101c9305 (53 bytes, 25 insns) */
void f_101c9305(void) {
  FTRACE(0x101c9305u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c9305 push ebp */
  push32((uint32_t)(EBP));
  /* 101c9306 mov ebp, esp */
  EBP = (ESP);
  /* 101c9308 push ecx */
  push32((uint32_t)(ECX));
  /* 101c9309 push esi */
  push32((uint32_t)(ESI));
  /* 101c930a wait  */
  /* wait (no observable integer/reg state) */
  /* 101c930b fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 101c930e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 101c9311 call 0x101c9350 */
  push32(0x101c9316u); f_101c9350();
  /* 101c9316 mov esi, eax */
  ESI = (EAX);
  /* 101c9318 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101c931b not eax */
  EAX = (~(EAX));
  /* 101c931d and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 101c931f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c9322 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 101c9325 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 101c9327 push esi */
  push32((uint32_t)(ESI));
  /* 101c9328 call 0x101c93e2 */
  push32(0x101c932du); f_101c93e2();
  /* 101c932d pop ecx */
  ECX = (pop32());
  /* 101c932e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101c9331 pop ecx */
  ECX = (pop32());
  /* 101c9332 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 101c9335 mov eax, esi */
  EAX = (ESI);
  /* 101c9337 pop esi */
  ESI = (pop32());
  /* 101c9338 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c9339 ret  */
  ESPCHK(0x101c9305u, _esp0);
  ESP += 4; return;
}

/* FUN_1000933a @ 0x101c933a (22 bytes, 8 insns) */
void f_101c933a(void) {
  FTRACE(0x101c933au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c933a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c933e and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101c9343 push eax */
  push32((uint32_t)(EAX));
  /* 101c9344 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 101c9348 call 0x101c9305 */
  push32(0x101c934du); f_101c9305();
  /* 101c934d pop ecx */
  ECX = (pop32());
  /* 101c934e pop ecx */
  ECX = (pop32());
  /* 101c934f ret  */
  ESPCHK(0x101c933au, _esp0);
  ESP += 4; return;
}

/* FUN_10009350 @ 0x101c9350 (146 bytes, 58 insns) */
void f_101c9350(void) {
  FTRACE(0x101c9350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c9350 push ebx */
  push32((uint32_t)(EBX));
  /* 101c9351 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c9355 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c9357 push ebp */
  push32((uint32_t)(EBP));
  /* 101c9358 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 101c935b push edi */
  push32((uint32_t)(EDI));
  /* 101c935c je 0x101c9361 */
  if (C.zf) goto L_101c9361;
  /* 101c935e push 0x10 */
  push32((uint32_t)(0x10u));
  /* 101c9360 pop eax */
  EAX = (pop32());
L_101c9361:;
  /* 101c9361 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 101c9364 je 0x101c9368 */
  if (C.zf) goto L_101c9368;
  /* 101c9366 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_101c9368:;
  /* 101c9368 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 101c936b je 0x101c936f */
  if (C.zf) goto L_101c936f;
  /* 101c936d or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_101c936f:;
  /* 101c936f test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 101c9372 je 0x101c9376 */
  if (C.zf) goto L_101c9376;
  /* 101c9374 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_101c9376:;
  /* 101c9376 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 101c9379 je 0x101c937d */
  if (C.zf) goto L_101c937d;
  /* 101c937b or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_101c937d:;
  /* 101c937d test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 101c9380 je 0x101c9387 */
  if (C.zf) goto L_101c9387;
  /* 101c9382 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_101c9387:;
  /* 101c9387 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 101c938a push esi */
  push32((uint32_t)(ESI));
  /* 101c938b mov edx, ecx */
  EDX = (ECX);
  /* 101c938d mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 101c9392 mov edi, 0x300 */
  EDI = (0x300u);
  /* 101c9397 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 101c9399 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 101c939e je 0x101c93bf */
  if (C.zf) goto L_101c93bf;
  /* 101c93a0 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c93a6 je 0x101c93bc */
  if (C.zf) goto L_101c93bc;
  /* 101c93a8 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c93ae je 0x101c93b8 */
  if (C.zf) goto L_101c93b8;
  /* 101c93b0 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c93b2 jne 0x101c93bf */
  if (!C.zf) goto L_101c93bf;
  /* 101c93b4 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 101c93b6 jmp 0x101c93bf */
  goto L_101c93bf;
L_101c93b8:;
  /* 101c93b8 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 101c93ba jmp 0x101c93bf */
  goto L_101c93bf;
L_101c93bc:;
  /* 101c93bc or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_101c93bf:;
  /* 101c93bf and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 101c93c1 pop esi */
  ESI = (pop32());
  /* 101c93c2 je 0x101c93cf */
  if (C.zf) goto L_101c93cf;
  /* 101c93c4 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c93c6 jne 0x101c93d4 */
  if (!C.zf) goto L_101c93d4;
  /* 101c93c8 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 101c93cd jmp 0x101c93d4 */
  goto L_101c93d4;
L_101c93cf:;
  /* 101c93cf or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_101c93d4:;
  /* 101c93d4 pop edi */
  EDI = (pop32());
  /* 101c93d5 pop ebp */
  EBP = (pop32());
  /* 101c93d6 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 101c93d9 pop ebx */
  EBX = (pop32());
  /* 101c93da je 0x101c93e1 */
  if (C.zf) goto L_101c93e1;
  /* 101c93dc or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_101c93e1:;
  /* 101c93e1 ret  */
  ESPCHK(0x101c9350u, _esp0);
  ESP += 4; return;
}

/* FUN_100093e2 @ 0x101c93e2 (137 bytes, 53 insns) */
void f_101c93e2(void) {
  FTRACE(0x101c93e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c93e2 push ebx */
  push32((uint32_t)(EBX));
  /* 101c93e3 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c93e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c93e9 push esi */
  push32((uint32_t)(ESI));
  /* 101c93ea test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 101c93ed je 0x101c93f2 */
  if (C.zf) goto L_101c93f2;
  /* 101c93ef push 1 */
  push32((uint32_t)(0x1u));
  /* 101c93f1 pop eax */
  EAX = (pop32());
L_101c93f2:;
  /* 101c93f2 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 101c93f5 je 0x101c93f9 */
  if (C.zf) goto L_101c93f9;
  /* 101c93f7 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_101c93f9:;
  /* 101c93f9 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 101c93fc je 0x101c9400 */
  if (C.zf) goto L_101c9400;
  /* 101c93fe or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_101c9400:;
  /* 101c9400 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 101c9403 je 0x101c9407 */
  if (C.zf) goto L_101c9407;
  /* 101c9405 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_101c9407:;
  /* 101c9407 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 101c940a je 0x101c940e */
  if (C.zf) goto L_101c940e;
  /* 101c940c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_101c940e:;
  /* 101c940e test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 101c9414 je 0x101c9418 */
  if (C.zf) goto L_101c9418;
  /* 101c9416 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_101c9418:;
  /* 101c9418 mov ecx, ebx */
  ECX = (EBX);
  /* 101c941a mov edx, 0x300 */
  EDX = (0x300u);
  /* 101c941f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 101c9421 mov esi, 0x200 */
  ESI = (0x200u);
  /* 101c9426 je 0x101c9445 */
  if (C.zf) goto L_101c9445;
  /* 101c9428 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c942e je 0x101c9442 */
  if (C.zf) goto L_101c9442;
  /* 101c9430 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9432 je 0x101c943d */
  if (C.zf) goto L_101c943d;
  /* 101c9434 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9436 jne 0x101c9445 */
  if (!C.zf) goto L_101c9445;
  /* 101c9438 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 101c943b jmp 0x101c9445 */
  goto L_101c9445;
L_101c943d:;
  /* 101c943d or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 101c9440 jmp 0x101c9445 */
  goto L_101c9445;
L_101c9442:;
  /* 101c9442 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_101c9445:;
  /* 101c9445 mov ecx, ebx */
  ECX = (EBX);
  /* 101c9447 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 101c944d je 0x101c945b */
  if (C.zf) goto L_101c945b;
  /* 101c944f cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9455 jne 0x101c945d */
  if (!C.zf) goto L_101c945d;
  /* 101c9457 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 101c9459 jmp 0x101c945d */
  goto L_101c945d;
L_101c945b:;
  /* 101c945b or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_101c945d:;
  /* 101c945d pop esi */
  ESI = (pop32());
  /* 101c945e test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 101c9464 pop ebx */
  EBX = (pop32());
  /* 101c9465 je 0x101c946a */
  if (C.zf) goto L_101c946a;
  /* 101c9467 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_101c946a:;
  /* 101c946a ret  */
  ESPCHK(0x101c93e2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000946b @ 0x101c946b (117 bytes, 46 insns) */
void f_101c946b(void) {
  FTRACE(0x101c946bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c946b push ebp */
  push32((uint32_t)(EBP));
  /* 101c946c mov ebp, esp */
  EBP = (ESP);
  /* 101c946e push ecx */
  push32((uint32_t)(ECX));
  /* 101c946f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c9472 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 101c9475 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c947b ja 0x101c9489 */
  if ((!C.cf&&!C.zf)) goto L_101c9489;
  /* 101c947d mov ecx, dword ptr [0x101d0940] */
  ECX = (r32((uint32_t)(0x101d0940)));
  /* 101c9483 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 101c9487 jmp 0x101c94db */
  goto L_101c94db;
L_101c9489:;
  /* 101c9489 mov ecx, eax */
  ECX = (EAX);
  /* 101c948b push esi */
  push32((uint32_t)(ESI));
  /* 101c948c mov esi, dword ptr [0x101d0940] */
  ESI = (r32((uint32_t)(0x101d0940)));
  /* 101c9492 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 101c9495 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 101c9498 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 101c949d pop esi */
  ESI = (pop32());
  /* 101c949e je 0x101c94ae */
  if (C.zf) goto L_101c94ae;
  /* 101c94a0 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 101c94a4 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 101c94a7 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 101c94aa push 2 */
  push32((uint32_t)(0x2u));
  /* 101c94ac jmp 0x101c94b7 */
  goto L_101c94b7;
L_101c94ae:;
  /* 101c94ae and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101c94b2 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 101c94b5 push 1 */
  push32((uint32_t)(0x1u));
L_101c94b7:;
  /* 101c94b7 pop eax */
  EAX = (pop32());
  /* 101c94b8 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 101c94bb push 1 */
  push32((uint32_t)(0x1u));
  /* 101c94bd push 0 */
  push32((uint32_t)(0x0u));
  /* 101c94bf push 0 */
  push32((uint32_t)(0x0u));
  /* 101c94c1 push ecx */
  push32((uint32_t)(ECX));
  /* 101c94c2 push eax */
  push32((uint32_t)(EAX));
  /* 101c94c3 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 101c94c6 push eax */
  push32((uint32_t)(EAX));
  /* 101c94c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c94c9 call 0x101cc31d */
  push32(0x101c94ceu); f_101cc31d();
  /* 101c94ce add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c94d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c94d3 jne 0x101c94d7 */
  if (!C.zf) goto L_101c94d7;
  /* 101c94d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c94d6 ret  */
  ESPCHK(0x101c946bu, _esp0);
  ESP += 4; return;
L_101c94d7:;
  /* 101c94d7 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_101c94db:;
  /* 101c94db and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 101c94de leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c94df ret  */
  ESPCHK(0x101c946bu, _esp0);
  ESP += 4; return;
}

/* FUN_100094e0 @ 0x101c94e0 (111 bytes, 44 insns) */
void f_101c94e0(void) {
  FTRACE(0x101c94e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c94e0 push ebx */
  push32((uint32_t)(EBX));
  /* 101c94e1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101c94e3 cmp dword ptr [0x101d67a8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101d67a8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c94e9 jne 0x101c94fe */
  if (!C.zf) goto L_101c94fe;
  /* 101c94eb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c94ef cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c94f2 jl 0x101c954d */
  if ((C.sf!=C.of)) goto L_101c954d;
  /* 101c94f4 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c94f7 jg 0x101c954d */
  if ((!C.zf&&C.sf==C.of)) goto L_101c954d;
  /* 101c94f9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c94fc pop ebx */
  EBX = (pop32());
  /* 101c94fd ret  */
  ESPCHK(0x101c94e0u, _esp0);
  ESP += 4; return;
L_101c94fe:;
  /* 101c94fe push esi */
  push32((uint32_t)(ESI));
  /* 101c94ff mov esi, 0x101d6924 */
  ESI = (0x101d6924u);
  /* 101c9504 push edi */
  push32((uint32_t)(EDI));
  /* 101c9505 push esi */
  push32((uint32_t)(ESI));
  /* 101c9506 call dword ptr [0x101ce090] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce090))), 0x101c950cu);
  /* 101c950c cmp dword ptr [0x101d6920], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101d6920))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9512 mov edi, dword ptr [0x101ce08c] */
  EDI = (r32((uint32_t)(0x101ce08c)));
  /* 101c9518 je 0x101c9528 */
  if (C.zf) goto L_101c9528;
  /* 101c951a push esi */
  push32((uint32_t)(ESI));
  /* 101c951b call edi */
  call_ind((uint32_t)(EDI), 0x101c951du);
  /* 101c951d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101c951f call 0x101ca0b3 */
  push32(0x101c9524u); f_101ca0b3();
  /* 101c9524 pop ecx */
  ECX = (pop32());
  /* 101c9525 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c9527 pop ebx */
  EBX = (pop32());
L_101c9528:;
  /* 101c9528 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 101c952c call 0x101c954f */
  push32(0x101c9531u); f_101c954f();
  /* 101c9531 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101c9533 pop ecx */
  ECX = (pop32());
  /* 101c9534 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 101c9538 je 0x101c9544 */
  if (C.zf) goto L_101c9544;
  /* 101c953a push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101c953c call 0x101ca114 */
  push32(0x101c9541u); f_101ca114();
  /* 101c9541 pop ecx */
  ECX = (pop32());
  /* 101c9542 jmp 0x101c9547 */
  goto L_101c9547;
L_101c9544:;
  /* 101c9544 push esi */
  push32((uint32_t)(ESI));
  /* 101c9545 call edi */
  call_ind((uint32_t)(EDI), 0x101c9547u);
L_101c9547:;
  /* 101c9547 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101c954b pop edi */
  EDI = (pop32());
  /* 101c954c pop esi */
  ESI = (pop32());
L_101c954d:;
  /* 101c954d pop ebx */
  EBX = (pop32());
  /* 101c954e ret  */
  ESPCHK(0x101c94e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000954f @ 0x101c954f (203 bytes, 78 insns) */
void f_101c954f(void) {
  FTRACE(0x101c954fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c954f push ebp */
  push32((uint32_t)(EBP));
  /* 101c9550 mov ebp, esp */
  EBP = (ESP);
  /* 101c9552 push ecx */
  push32((uint32_t)(ECX));
  /* 101c9553 cmp dword ptr [0x101d67a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101d67a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c955a push ebx */
  push32((uint32_t)(EBX));
  /* 101c955b push esi */
  push32((uint32_t)(ESI));
  /* 101c955c push edi */
  push32((uint32_t)(EDI));
  /* 101c955d jne 0x101c957c */
  if (!C.zf) goto L_101c957c;
  /* 101c955f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c9562 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9565 jl 0x101c9615 */
  if ((C.sf!=C.of)) goto L_101c9615;
  /* 101c956b cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c956e jg 0x101c9615 */
  if ((!C.zf&&C.sf==C.of)) goto L_101c9615;
  /* 101c9574 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9577 jmp 0x101c9615 */
  goto L_101c9615;
L_101c957c:;
  /* 101c957c mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c957f mov edi, 0x100 */
  EDI = (0x100u);
  /* 101c9584 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c9586 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9588 pop esi */
  ESI = (pop32());
  /* 101c9589 jge 0x101c95b0 */
  if ((C.sf==C.of)) goto L_101c95b0;
  /* 101c958b cmp dword ptr [0x101d0b50], esi */
  { uint32_t _a=(r32((uint32_t)(0x101d0b50))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9591 jle 0x101c959e */
  if ((C.zf||C.sf!=C.of)) goto L_101c959e;
  /* 101c9593 push esi */
  push32((uint32_t)(ESI));
  /* 101c9594 push ebx */
  push32((uint32_t)(EBX));
  /* 101c9595 call 0x101c946b */
  push32(0x101c959au); f_101c946b();
  /* 101c959a pop ecx */
  ECX = (pop32());
  /* 101c959b pop ecx */
  ECX = (pop32());
  /* 101c959c jmp 0x101c95a8 */
  goto L_101c95a8;
L_101c959e:;
  /* 101c959e mov eax, dword ptr [0x101d0940] */
  EAX = (r32((uint32_t)(0x101d0940)));
  /* 101c95a3 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 101c95a6 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_101c95a8:;
  /* 101c95a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c95aa jne 0x101c95b0 */
  if (!C.zf) goto L_101c95b0;
L_101c95ac:;
  /* 101c95ac mov eax, ebx */
  EAX = (EBX);
  /* 101c95ae jmp 0x101c9615 */
  goto L_101c9615;
L_101c95b0:;
  /* 101c95b0 mov edx, dword ptr [0x101d0940] */
  EDX = (r32((uint32_t)(0x101d0940)));
  /* 101c95b6 mov eax, ebx */
  EAX = (EBX);
  /* 101c95b8 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 101c95bb movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 101c95be test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 101c95c3 je 0x101c95d4 */
  if (C.zf) goto L_101c95d4;
  /* 101c95c5 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 101c95c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c95cb mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 101c95ce mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 101c95d1 pop eax */
  EAX = (pop32());
  /* 101c95d2 jmp 0x101c95dd */
  goto L_101c95dd;
L_101c95d4:;
  /* 101c95d4 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 101c95d8 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 101c95db mov eax, esi */
  EAX = (ESI);
L_101c95dd:;
  /* 101c95dd push esi */
  push32((uint32_t)(ESI));
  /* 101c95de push 0 */
  push32((uint32_t)(0x0u));
  /* 101c95e0 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 101c95e3 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c95e5 push ecx */
  push32((uint32_t)(ECX));
  /* 101c95e6 push eax */
  push32((uint32_t)(EAX));
  /* 101c95e7 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101c95ea push eax */
  push32((uint32_t)(EAX));
  /* 101c95eb push edi */
  push32((uint32_t)(EDI));
  /* 101c95ec push dword ptr [0x101d67a8] */
  push32((uint32_t)(r32((uint32_t)(0x101d67a8))));
  /* 101c95f2 call 0x101cc466 */
  push32(0x101c95f7u); f_101cc466();
  /* 101c95f7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c95fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c95fc je 0x101c95ac */
  if (C.zf) goto L_101c95ac;
  /* 101c95fe cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9600 jne 0x101c9608 */
  if (!C.zf) goto L_101c9608;
  /* 101c9602 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 101c9606 jmp 0x101c9615 */
  goto L_101c9615;
L_101c9608:;
  /* 101c9608 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 101c960c movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 101c9610 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 101c9613 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_101c9615:;
  /* 101c9615 pop edi */
  EDI = (pop32());
  /* 101c9616 pop esi */
  ESI = (pop32());
  /* 101c9617 pop ebx */
  EBX = (pop32());
  /* 101c9618 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c9619 ret  */
  ESPCHK(0x101c954fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000961a @ 0x101c961a (73 bytes, 36 insns) */
void f_101c961a(void) {
  FTRACE(0x101c961au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c961a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c961e push esi */
  push32((uint32_t)(ESI));
  /* 101c961f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101c9621 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101c9622 pop ecx */
  ECX = (pop32());
  /* 101c9623 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101c9625 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101c9627 mov esi, eax */
  ESI = (EAX);
  /* 101c9629 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101c962d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101c962e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101c9630 pop ecx */
  ECX = (pop32());
  /* 101c9631 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c9635 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c9637 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 101c963a shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 101c963c not edx */
  EDX = (~(EDX));
  /* 101c963e test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 101c9641 jne 0x101c965f */
  if (!C.zf) goto L_101c965f;
  /* 101c9643 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101c9644 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9647 jge 0x101c965a */
  if ((C.sf==C.of)) goto L_101c965a;
  /* 101c9649 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_101c964c:;
  /* 101c964c cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c964f jne 0x101c965f */
  if (!C.zf) goto L_101c965f;
  /* 101c9651 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101c9652 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9655 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9658 jl 0x101c964c */
  if ((C.sf!=C.of)) goto L_101c964c;
L_101c965a:;
  /* 101c965a push 1 */
  push32((uint32_t)(0x1u));
  /* 101c965c pop eax */
  EAX = (pop32());
  /* 101c965d pop esi */
  ESI = (pop32());
  /* 101c965e ret  */
  ESPCHK(0x101c961au, _esp0);
  ESP += 4; return;
L_101c965f:;
  /* 101c965f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c9661 pop esi */
  ESI = (pop32());
  /* 101c9662 ret  */
  ESPCHK(0x101c961au, _esp0);
  ESP += 4; return;
}

/* FUN_10009663 @ 0x101c9663 (86 bytes, 43 insns) */
void f_101c9663(void) {
  FTRACE(0x101c9663u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c9663 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c9667 push ebx */
  push32((uint32_t)(EBX));
  /* 101c9668 push esi */
  push32((uint32_t)(ESI));
  /* 101c9669 push edi */
  push32((uint32_t)(EDI));
  /* 101c966a push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101c966c mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 101c9670 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101c9671 pop ecx */
  ECX = (pop32());
  /* 101c9672 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101c9674 mov esi, eax */
  ESI = (EAX);
  /* 101c9676 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 101c967a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101c967b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101c967d lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 101c9680 push edi */
  push32((uint32_t)(EDI));
  /* 101c9681 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101c9683 pop ecx */
  ECX = (pop32());
  /* 101c9684 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c9686 pop eax */
  EAX = (pop32());
  /* 101c9687 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c9689 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 101c968b push eax */
  push32((uint32_t)(EAX));
  /* 101c968c push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 101c968e call 0x101cc6b5 */
  push32(0x101c9693u); f_101cc6b5();
  /* 101c9693 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9696 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101c9697 js 0x101c96b5 */
  if (C.sf) goto L_101c96b5;
  /* 101c9699 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_101c969c:;
  /* 101c969c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c969e je 0x101c96b5 */
  if (C.zf) goto L_101c96b5;
  /* 101c96a0 push edi */
  push32((uint32_t)(EDI));
  /* 101c96a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c96a3 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 101c96a5 call 0x101cc6b5 */
  push32(0x101c96aau); f_101cc6b5();
  /* 101c96aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c96ad dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101c96ae sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c96b1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101c96b3 jge 0x101c969c */
  if ((C.sf==C.of)) goto L_101c969c;
L_101c96b5:;
  /* 101c96b5 pop edi */
  EDI = (pop32());
  /* 101c96b6 pop esi */
  ESI = (pop32());
  /* 101c96b7 pop ebx */
  EBX = (pop32());
  /* 101c96b8 ret  */
  ESPCHK(0x101c9663u, _esp0);
  ESP += 4; return;
}

/* FUN_100096b9 @ 0x101c96b9 (140 bytes, 71 insns) */
void f_101c96b9(void) {
  FTRACE(0x101c96b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c96b9 push ebp */
  push32((uint32_t)(EBP));
  /* 101c96ba mov ebp, esp */
  EBP = (ESP);
  /* 101c96bc push ecx */
  push32((uint32_t)(ECX));
  /* 101c96bd push ecx */
  push32((uint32_t)(ECX));
  /* 101c96be mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101c96c1 push ebx */
  push32((uint32_t)(EBX));
  /* 101c96c2 push esi */
  push32((uint32_t)(ESI));
  /* 101c96c3 push edi */
  push32((uint32_t)(EDI));
  /* 101c96c4 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 101c96c7 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101c96c9 pop ecx */
  ECX = (pop32());
  /* 101c96ca and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101c96ce lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 101c96d1 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101c96d3 mov eax, ebx */
  EAX = (EBX);
  /* 101c96d5 pop esi */
  ESI = (pop32());
  /* 101c96d6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101c96d7 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101c96d9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101c96db mov ecx, eax */
  ECX = (EAX);
  /* 101c96dd mov eax, ebx */
  EAX = (EBX);
  /* 101c96df cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101c96e0 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101c96e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c96e5 pop esi */
  ESI = (pop32());
  /* 101c96e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c96e8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101c96eb lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 101c96ee mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101c96f1 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c96f3 pop edx */
  EDX = (pop32());
  /* 101c96f4 mov ecx, esi */
  ECX = (ESI);
  /* 101c96f6 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 101c96f8 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 101c96fa je 0x101c971d */
  if (C.zf) goto L_101c971d;
  /* 101c96fc inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101c96fd push ebx */
  push32((uint32_t)(EBX));
  /* 101c96fe push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101c9701 call 0x101c961a */
  push32(0x101c9706u); f_101c961a();
  /* 101c9706 pop ecx */
  ECX = (pop32());
  /* 101c9707 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c9709 pop ecx */
  ECX = (pop32());
  /* 101c970a jne 0x101c971a */
  if (!C.zf) goto L_101c971a;
  /* 101c970c push edi */
  push32((uint32_t)(EDI));
  /* 101c970d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101c9710 call 0x101c9663 */
  push32(0x101c9715u); f_101c9663();
  /* 101c9715 pop ecx */
  ECX = (pop32());
  /* 101c9716 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101c9719 pop ecx */
  ECX = (pop32());
L_101c971a:;
  /* 101c971a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_101c971d:;
  /* 101c971d or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 101c9720 mov ecx, esi */
  ECX = (ESI);
  /* 101c9722 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 101c9724 push 3 */
  push32((uint32_t)(0x3u));
  /* 101c9726 pop ecx */
  ECX = (pop32());
  /* 101c9727 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101c9729 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101c972c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c972d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c972f jge 0x101c973d */
  if ((C.sf==C.of)) goto L_101c973d;
  /* 101c9731 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c9734 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c9736 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 101c9739 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c973b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_101c973d:;
  /* 101c973d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101c9740 pop edi */
  EDI = (pop32());
  /* 101c9741 pop esi */
  ESI = (pop32());
  /* 101c9742 pop ebx */
  EBX = (pop32());
  /* 101c9743 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c9744 ret  */
  ESPCHK(0x101c96b9u, _esp0);
  ESP += 4; return;
}

/* FUN_10009745 @ 0x101c9745 (27 bytes, 13 insns) */
void f_101c9745(void) {
  FTRACE(0x101c9745u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c9745 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c9749 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c974d push esi */
  push32((uint32_t)(ESI));
  /* 101c974e push 3 */
  push32((uint32_t)(0x3u));
  /* 101c9750 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c9752 pop edx */
  EDX = (pop32());
L_101c9753:;
  /* 101c9753 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 101c9755 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 101c9758 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c975b dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 101c975c jne 0x101c9753 */
  if (!C.zf) goto L_101c9753;
  /* 101c975e pop esi */
  ESI = (pop32());
  /* 101c975f ret  */
  ESPCHK(0x101c9745u, _esp0);
  ESP += 4; return;
}

/* FUN_10009760 @ 0x101c9760 (12 bytes, 8 insns) */
void f_101c9760(void) {
  FTRACE(0x101c9760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c9760 push edi */
  push32((uint32_t)(EDI));
  /* 101c9761 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 101c9765 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c9767 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101c9768 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101c9769 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101c976a pop edi */
  EDI = (pop32());
  /* 101c976b ret  */
  ESPCHK(0x101c9760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000976c @ 0x101c976c (27 bytes, 13 insns) */
void f_101c976c(void) {
  FTRACE(0x101c976cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c976c mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c9770 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_101c9772:;
  /* 101c9772 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9775 jne 0x101c9784 */
  if (!C.zf) goto L_101c9784;
  /* 101c9777 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101c9778 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c977b cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c977e jl 0x101c9772 */
  if ((C.sf!=C.of)) goto L_101c9772;
  /* 101c9780 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c9782 pop eax */
  EAX = (pop32());
  /* 101c9783 ret  */
  ESPCHK(0x101c976cu, _esp0);
  ESP += 4; return;
L_101c9784:;
  /* 101c9784 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c9786 ret  */
  ESPCHK(0x101c976cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009787 @ 0x101c9787 (141 bytes, 64 insns) */
void f_101c9787(void) {
  FTRACE(0x101c9787u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c9787 push ebp */
  push32((uint32_t)(EBP));
  /* 101c9788 mov ebp, esp */
  EBP = (ESP);
  /* 101c978a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c978d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101c9790 push ebx */
  push32((uint32_t)(EBX));
  /* 101c9791 push esi */
  push32((uint32_t)(ESI));
  /* 101c9792 push edi */
  push32((uint32_t)(EDI));
  /* 101c9793 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101c9795 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 101c9798 pop ebx */
  EBX = (pop32());
  /* 101c9799 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 101c979c cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101c979d mov ecx, ebx */
  ECX = (EBX);
  /* 101c979f mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 101c97a6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101c97a8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 101c97ab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101c97ae cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101c97af idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101c97b1 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 101c97b5 mov ecx, edx */
  ECX = (EDX);
  /* 101c97b7 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 101c97b9 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c97bb not esi */
  ESI = (~(ESI));
L_101c97bd:;
  /* 101c97bd mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 101c97bf mov ecx, eax */
  ECX = (EAX);
  /* 101c97c1 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 101c97c3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101c97c6 mov ecx, edx */
  ECX = (EDX);
  /* 101c97c8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 101c97ca or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 101c97cd mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 101c97cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101c97d2 mov ecx, ebx */
  ECX = (EBX);
  /* 101c97d4 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c97d7 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 101c97d9 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 101c97dc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101c97df jne 0x101c97bd */
  if (!C.zf) goto L_101c97bd;
  /* 101c97e1 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 101c97e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 101c97e6 pop ebx */
  EBX = (pop32());
  /* 101c97e7 mov esi, edi */
  ESI = (EDI);
  /* 101c97e9 push 8 */
  push32((uint32_t)(0x8u));
  /* 101c97eb pop ecx */
  ECX = (pop32());
  /* 101c97ec shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_101c97ef:;
  /* 101c97ef cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c97f1 jl 0x101c9802 */
  if ((C.sf!=C.of)) goto L_101c9802;
  /* 101c97f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c97f6 mov eax, ecx */
  EAX = (ECX);
  /* 101c97f8 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c97fa mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 101c97fd mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 101c9800 jmp 0x101c9809 */
  goto L_101c9809;
L_101c9802:;
  /* 101c9802 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c9805 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_101c9809:;
  /* 101c9809 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101c980a sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c980d jns 0x101c97ef */
  if (!C.sf) goto L_101c97ef;
  /* 101c980f pop edi */
  EDI = (pop32());
  /* 101c9810 pop esi */
  ESI = (pop32());
  /* 101c9811 pop ebx */
  EBX = (pop32());
  /* 101c9812 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c9813 ret  */
  ESPCHK(0x101c9787u, _esp0);
  ESP += 4; return;
}

/* FUN_10009814 @ 0x101c9814 (364 bytes, 138 insns) */
void f_101c9814(void) {
  FTRACE(0x101c9814u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c9814 push ebp */
  push32((uint32_t)(EBP));
  /* 101c9815 mov ebp, esp */
  EBP = (ESP);
  /* 101c9817 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c981a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c981d push ebx */
  push32((uint32_t)(EBX));
  /* 101c981e push esi */
  push32((uint32_t)(ESI));
  /* 101c981f push edi */
  push32((uint32_t)(EDI));
  /* 101c9820 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 101c9824 mov ebx, ecx */
  EBX = (ECX);
  /* 101c9826 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 101c982c mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 101c982f mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 101c9832 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 101c9835 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 101c9838 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 101c983b mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 101c983e and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 101c9844 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c984a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101c984d shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 101c9850 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9856 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101c9859 jne 0x101c9881 */
  if (!C.zf) goto L_101c9881;
  /* 101c985b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101c985e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101c9860 push eax */
  push32((uint32_t)(EAX));
  /* 101c9861 call 0x101c976c */
  push32(0x101c9866u); f_101c976c();
  /* 101c9866 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c9868 pop ecx */
  ECX = (pop32());
  /* 101c9869 jne 0x101c9940 */
  if (!C.zf) goto L_101c9940;
  /* 101c986f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101c9872 push eax */
  push32((uint32_t)(EAX));
  /* 101c9873 call 0x101c9760 */
  push32(0x101c9878u); f_101c9760();
  /* 101c9878 pop ecx */
  ECX = (pop32());
L_101c9879:;
  /* 101c9879 push 2 */
  push32((uint32_t)(0x2u));
L_101c987b:;
  /* 101c987b pop eax */
  EAX = (pop32());
  /* 101c987c jmp 0x101c9942 */
  goto L_101c9942;
L_101c9881:;
  /* 101c9881 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101c9884 push eax */
  push32((uint32_t)(EAX));
  /* 101c9885 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 101c9888 push eax */
  push32((uint32_t)(EAX));
  /* 101c9889 call 0x101c9745 */
  push32(0x101c988eu); f_101c9745();
  /* 101c988e push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 101c9891 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101c9894 push eax */
  push32((uint32_t)(EAX));
  /* 101c9895 call 0x101c96b9 */
  push32(0x101c989au); f_101c96b9();
  /* 101c989a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c989d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101c989f je 0x101c98a2 */
  if (C.zf) goto L_101c98a2;
  /* 101c98a1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_101c98a2:;
  /* 101c98a2 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 101c98a5 mov ecx, eax */
  ECX = (EAX);
  /* 101c98a7 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c98aa cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c98ac jge 0x101c98ba */
  if ((C.sf==C.of)) goto L_101c98ba;
  /* 101c98ae lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101c98b1 push eax */
  push32((uint32_t)(EAX));
  /* 101c98b2 call 0x101c9760 */
  push32(0x101c98b7u); f_101c9760();
  /* 101c98b7 pop ecx */
  ECX = (pop32());
  /* 101c98b8 jmp 0x101c98f6 */
  goto L_101c98f6;
L_101c98ba:;
  /* 101c98ba cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c98bc jg 0x101c98fd */
  if ((!C.zf&&C.sf==C.of)) goto L_101c98fd;
  /* 101c98be sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c98c0 mov esi, eax */
  ESI = (EAX);
  /* 101c98c2 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 101c98c5 push eax */
  push32((uint32_t)(EAX));
  /* 101c98c6 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101c98c9 push eax */
  push32((uint32_t)(EAX));
  /* 101c98ca call 0x101c9745 */
  push32(0x101c98cfu); f_101c9745();
  /* 101c98cf lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101c98d2 push esi */
  push32((uint32_t)(ESI));
  /* 101c98d3 push eax */
  push32((uint32_t)(EAX));
  /* 101c98d4 call 0x101c9787 */
  push32(0x101c98d9u); f_101c9787();
  /* 101c98d9 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 101c98dc lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101c98df push eax */
  push32((uint32_t)(EAX));
  /* 101c98e0 call 0x101c96b9 */
  push32(0x101c98e5u); f_101c96b9();
  /* 101c98e5 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 101c98e8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c98e9 push eax */
  push32((uint32_t)(EAX));
  /* 101c98ea lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101c98ed push eax */
  push32((uint32_t)(EAX));
  /* 101c98ee call 0x101c9787 */
  push32(0x101c98f3u); f_101c9787();
  /* 101c98f3 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c98f6:;
  /* 101c98f6 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101c98f8 jmp 0x101c9879 */
  goto L_101c9879;
L_101c98fd:;
  /* 101c98fd cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c98ff jl 0x101c9929 */
  if ((C.sf!=C.of)) goto L_101c9929;
  /* 101c9901 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101c9904 push eax */
  push32((uint32_t)(EAX));
  /* 101c9905 call 0x101c9760 */
  push32(0x101c990au); f_101c9760();
  /* 101c990a push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 101c990d or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 101c9911 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101c9914 push eax */
  push32((uint32_t)(EAX));
  /* 101c9915 call 0x101c9787 */
  push32(0x101c991au); f_101c9787();
  /* 101c991a mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 101c991d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9920 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9922 push 1 */
  push32((uint32_t)(0x1u));
  /* 101c9924 jmp 0x101c987b */
  goto L_101c987b;
L_101c9929:;
  /* 101c9929 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 101c992c mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 101c992f and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 101c9933 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101c9936 push eax */
  push32((uint32_t)(EAX));
  /* 101c9937 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9939 call 0x101c9787 */
  push32(0x101c993eu); f_101c9787();
  /* 101c993e pop ecx */
  ECX = (pop32());
  /* 101c993f pop ecx */
  ECX = (pop32());
L_101c9940:;
  /* 101c9940 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101c9942:;
  /* 101c9942 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101c9944 pop ecx */
  ECX = (pop32());
  /* 101c9945 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c9948 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 101c994b shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 101c994d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c9950 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 101c9952 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c9954 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 101c995a or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 101c995c or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 101c995f cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9962 jne 0x101c9971 */
  if (!C.zf) goto L_101c9971;
  /* 101c9964 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101c9967 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 101c996a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 101c996d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 101c996f jmp 0x101c997b */
  goto L_101c997b;
L_101c9971:;
  /* 101c9971 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9974 jne 0x101c997b */
  if (!C.zf) goto L_101c997b;
  /* 101c9976 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101c9979 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_101c997b:;
  /* 101c997b pop edi */
  EDI = (pop32());
  /* 101c997c pop esi */
  ESI = (pop32());
  /* 101c997d pop ebx */
  EBX = (pop32());
  /* 101c997e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c997f ret  */
  ESPCHK(0x101c9814u, _esp0);
  ESP += 4; return;
}

/* FUN_10009980 @ 0x101c9980 (22 bytes, 6 insns) */
void f_101c9980(void) {
  FTRACE(0x101c9980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c9980 push 0x101d0b60 */
  push32((uint32_t)(0x101d0b60u));
  /* 101c9985 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101c9989 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101c998d call 0x101c9814 */
  push32(0x101c9992u); f_101c9814();
  /* 101c9992 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9995 ret  */
  ESPCHK(0x101c9980u, _esp0);
  ESP += 4; return;
}

/* FUN_10009996 @ 0x101c9996 (22 bytes, 6 insns) */
void f_101c9996(void) {
  FTRACE(0x101c9996u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c9996 push 0x101d0b78 */
  push32((uint32_t)(0x101d0b78u));
  /* 101c999b push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101c999f push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101c99a3 call 0x101c9814 */
  push32(0x101c99a8u); f_101c9814();
  /* 101c99a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c99ab ret  */
  ESPCHK(0x101c9996u, _esp0);
  ESP += 4; return;
}

/* FUN_100099ac @ 0x101c99ac (45 bytes, 21 insns) */
void f_101c99ac(void) {
  FTRACE(0x101c99acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c99ac push ebp */
  push32((uint32_t)(EBP));
  /* 101c99ad mov ebp, esp */
  EBP = (ESP);
  /* 101c99af sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c99b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c99b4 push eax */
  push32((uint32_t)(EAX));
  /* 101c99b5 push eax */
  push32((uint32_t)(EAX));
  /* 101c99b6 push eax */
  push32((uint32_t)(EAX));
  /* 101c99b7 push eax */
  push32((uint32_t)(EAX));
  /* 101c99b8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101c99bb lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 101c99be push eax */
  push32((uint32_t)(EAX));
  /* 101c99bf lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101c99c2 push eax */
  push32((uint32_t)(EAX));
  /* 101c99c3 call 0x101cc856 */
  push32(0x101c99c8u); f_101cc856();
  /* 101c99c8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101c99cb lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101c99ce push eax */
  push32((uint32_t)(EAX));
  /* 101c99cf call 0x101c9980 */
  push32(0x101c99d4u); f_101c9980();
  /* 101c99d4 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c99d7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c99d8 ret  */
  ESPCHK(0x101c99acu, _esp0);
  ESP += 4; return;
}

/* FUN_100099d9 @ 0x101c99d9 (45 bytes, 21 insns) */
void f_101c99d9(void) {
  FTRACE(0x101c99d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c99d9 push ebp */
  push32((uint32_t)(EBP));
  /* 101c99da mov ebp, esp */
  EBP = (ESP);
  /* 101c99dc sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c99df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c99e1 push eax */
  push32((uint32_t)(EAX));
  /* 101c99e2 push eax */
  push32((uint32_t)(EAX));
  /* 101c99e3 push eax */
  push32((uint32_t)(EAX));
  /* 101c99e4 push eax */
  push32((uint32_t)(EAX));
  /* 101c99e5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101c99e8 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 101c99eb push eax */
  push32((uint32_t)(EAX));
  /* 101c99ec lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101c99ef push eax */
  push32((uint32_t)(EAX));
  /* 101c99f0 call 0x101cc856 */
  push32(0x101c99f5u); f_101cc856();
  /* 101c99f5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101c99f8 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101c99fb push eax */
  push32((uint32_t)(EAX));
  /* 101c99fc call 0x101c9996 */
  push32(0x101c9a01u); f_101c9996();
  /* 101c9a01 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9a04 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c9a05 ret  */
  ESPCHK(0x101c99d9u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a06 @ 0x101c9a06 (119 bytes, 57 insns) */
void f_101c9a06(void) {
  FTRACE(0x101c9a06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c9a06 push ebp */
  push32((uint32_t)(EBP));
  /* 101c9a07 mov ebp, esp */
  EBP = (ESP);
  /* 101c9a09 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 101c9a0c push ebx */
  push32((uint32_t)(EBX));
  /* 101c9a0d mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 101c9a10 push esi */
  push32((uint32_t)(ESI));
  /* 101c9a11 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 101c9a14 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 101c9a17 push edi */
  push32((uint32_t)(EDI));
  /* 101c9a18 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 101c9a1b mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 101c9a1e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101c9a20 mov eax, edi */
  EAX = (EDI);
  /* 101c9a22 jle 0x101c9a43 */
  if ((C.zf||C.sf!=C.of)) goto L_101c9a43;
  /* 101c9a24 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101c9a27 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_101c9a29:;
  /* 101c9a29 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 101c9a2b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101c9a2d je 0x101c9a35 */
  if (C.zf) goto L_101c9a35;
  /* 101c9a2f movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 101c9a32 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101c9a33 jmp 0x101c9a38 */
  goto L_101c9a38;
L_101c9a35:;
  /* 101c9a35 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 101c9a37 pop edx */
  EDX = (pop32());
L_101c9a38:;
  /* 101c9a38 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 101c9a3a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c9a3b dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 101c9a3e jne 0x101c9a29 */
  if (!C.zf) goto L_101c9a29;
  /* 101c9a40 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_101c9a43:;
  /* 101c9a43 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 101c9a46 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101c9a48 jl 0x101c9a5c */
  if ((C.sf!=C.of)) goto L_101c9a5c;
  /* 101c9a4a cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c9a4d jl 0x101c9a5c */
  if ((C.sf!=C.of)) goto L_101c9a5c;
L_101c9a4f:;
  /* 101c9a4f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101c9a50 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c9a53 jne 0x101c9a5a */
  if (!C.zf) goto L_101c9a5a;
  /* 101c9a55 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 101c9a58 jmp 0x101c9a4f */
  goto L_101c9a4f;
L_101c9a5a:;
  /* 101c9a5a inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_101c9a5c:;
  /* 101c9a5c cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101c9a5f jne 0x101c9a66 */
  if (!C.zf) goto L_101c9a66;
  /* 101c9a61 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 101c9a64 jmp 0x101c9a78 */
  goto L_101c9a78;
L_101c9a66:;
  /* 101c9a66 push edi */
  push32((uint32_t)(EDI));
  /* 101c9a67 call 0x101c90e0 */
  push32(0x101c9a6cu); f_101c90e0();
  /* 101c9a6c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101c9a6d push eax */
  push32((uint32_t)(EAX));
  /* 101c9a6e push edi */
  push32((uint32_t)(EDI));
  /* 101c9a6f push esi */
  push32((uint32_t)(ESI));
  /* 101c9a70 call 0x101c9ce0 */
  push32(0x101c9a75u); f_101c9ce0();
  /* 101c9a75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101c9a78:;
  /* 101c9a78 pop edi */
  EDI = (pop32());
  /* 101c9a79 pop esi */
  ESI = (pop32());
  /* 101c9a7a pop ebx */
  EBX = (pop32());
  /* 101c9a7b pop ebp */
  EBP = (pop32());
  /* 101c9a7c ret  */
  ESPCHK(0x101c9a06u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a7d @ 0x101c9a7d (92 bytes, 41 insns) */
void f_101c9a7d(void) {
  FTRACE(0x101c9a7du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c9a7d push ebp */
  push32((uint32_t)(EBP));
  /* 101c9a7e mov ebp, esp */
  EBP = (ESP);
  /* 101c9a80 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c9a83 push esi */
  push32((uint32_t)(ESI));
  /* 101c9a84 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101c9a87 push edi */
  push32((uint32_t)(EDI));
  /* 101c9a88 push eax */
  push32((uint32_t)(EAX));
  /* 101c9a89 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101c9a8c push eax */
  push32((uint32_t)(EAX));
  /* 101c9a8d call 0x101c9ad9 */
  push32(0x101c9a92u); f_101c9ad9();
  /* 101c9a92 pop ecx */
  ECX = (pop32());
  /* 101c9a93 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 101c9a96 pop ecx */
  ECX = (pop32());
  /* 101c9a97 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 101c9a9a push eax */
  push32((uint32_t)(EAX));
  /* 101c9a9b push 0 */
  push32((uint32_t)(0x0u));
  /* 101c9a9d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 101c9a9f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c9aa2 mov edi, esp */
  EDI = (ESP);
  /* 101c9aa4 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101c9aa5 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101c9aa6 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 101c9aa8 call 0x101ccd27 */
  push32(0x101c9aadu); f_101ccd27();
  /* 101c9aad mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 101c9ab0 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 101c9ab3 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 101c9ab6 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 101c9aba mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101c9abc movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 101c9ac0 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 101c9ac3 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 101c9ac6 push eax */
  push32((uint32_t)(EAX));
  /* 101c9ac7 push edi */
  push32((uint32_t)(EDI));
  /* 101c9ac8 call 0x101c9b90 */
  push32(0x101c9acdu); f_101c9b90();
  /* 101c9acd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9ad0 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 101c9ad3 mov eax, esi */
  EAX = (ESI);
  /* 101c9ad5 pop edi */
  EDI = (pop32());
  /* 101c9ad6 pop esi */
  ESI = (pop32());
  /* 101c9ad7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c9ad8 ret  */
  ESPCHK(0x101c9a7du, _esp0);
  ESP += 4; return;
}

/* FUN_10009ad9 @ 0x101c9ad9 (182 bytes, 70 insns) */
void f_101c9ad9(void) {
  FTRACE(0x101c9ad9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c9ad9 push ebp */
  push32((uint32_t)(EBP));
  /* 101c9ada mov ebp, esp */
  EBP = (ESP);
  /* 101c9adc push ecx */
  push32((uint32_t)(ECX));
  /* 101c9add mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 101c9ae0 push ebx */
  push32((uint32_t)(EBX));
  /* 101c9ae1 push esi */
  push32((uint32_t)(ESI));
  /* 101c9ae2 push edi */
  push32((uint32_t)(EDI));
  /* 101c9ae3 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 101c9ae7 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 101c9aec mov ecx, eax */
  ECX = (EAX);
  /* 101c9aee and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 101c9af3 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 101c9af6 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 101c9af8 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101c9afb mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 101c9afe mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 101c9b00 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 101c9b03 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 101c9b08 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101c9b0d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101c9b0f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 101c9b12 je 0x101c9b27 */
  if (C.zf) goto L_101c9b27;
  /* 101c9b14 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9b16 je 0x101c9b20 */
  if (C.zf) goto L_101c9b20;
  /* 101c9b18 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 101c9b1e jmp 0x101c9b48 */
  goto L_101c9b48;
L_101c9b20:;
  /* 101c9b20 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 101c9b25 jmp 0x101c9b48 */
  goto L_101c9b48;
L_101c9b27:;
  /* 101c9b27 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101c9b29 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9b2b jne 0x101c9b3f */
  if (!C.zf) goto L_101c9b3f;
  /* 101c9b2d cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9b2f jne 0x101c9b3f */
  if (!C.zf) goto L_101c9b3f;
  /* 101c9b31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c9b34 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 101c9b37 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 101c9b39 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 101c9b3d jmp 0x101c9b8a */
  goto L_101c9b8a;
L_101c9b3f:;
  /* 101c9b3f lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 101c9b45 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_101c9b48:;
  /* 101c9b48 mov ecx, edx */
  ECX = (EDX);
  /* 101c9b4a shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 101c9b4d shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 101c9b50 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 101c9b52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c9b55 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 101c9b58 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 101c9b5b mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 101c9b5e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_101c9b60:;
  /* 101c9b60 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 101c9b62 jne 0x101c9b81 */
  if (!C.zf) goto L_101c9b81;
  /* 101c9b64 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 101c9b66 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9b68 mov ebx, edx */
  EBX = (EDX);
  /* 101c9b6a shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 101c9b6d or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 101c9b6f lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 101c9b72 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101c9b74 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 101c9b77 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9b7d mov ecx, ebx */
  ECX = (EBX);
  /* 101c9b7f jmp 0x101c9b60 */
  goto L_101c9b60;
L_101c9b81:;
  /* 101c9b81 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101c9b84 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 101c9b86 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_101c9b8a:;
  /* 101c9b8a pop edi */
  EDI = (pop32());
  /* 101c9b8b pop esi */
  ESI = (pop32());
  /* 101c9b8c pop ebx */
  EBX = (pop32());
  /* 101c9b8d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c9b8e ret  */
  ESPCHK(0x101c9ad9u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b90 @ 0x101c9b90 (7 bytes, 3 insns) */
void f_101c9b90(void) {
  FTRACE(0x101c9b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c9b90 push edi */
  push32((uint32_t)(EDI));
  /* 101c9b91 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 101c9b95 jmp 0x101c9c01 */
  jmp_ind(0x101c9c01u); return;
}

/* FUN_10009ba0 @ 0x101c9ba0 (224 bytes, 84 insns) */
void f_101c9ba0(void) {
  FTRACE(0x101c9ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c9ba0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c9ba4 push edi */
  push32((uint32_t)(EDI));
  /* 101c9ba5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 101c9bab je 0x101c9bbc */
  if (C.zf) goto L_101c9bbc;
L_101c9bad:;
  /* 101c9bad mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 101c9baf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101c9bb0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c9bb2 je 0x101c9bef */
  if (C.zf) goto L_101c9bef;
  /* 101c9bb4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 101c9bba jne 0x101c9bad */
  if (!C.zf) goto L_101c9bad;
L_101c9bbc:;
  /* 101c9bbc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 101c9bbe mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 101c9bc3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9bc5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101c9bc8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 101c9bca add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9bcd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 101c9bd2 je 0x101c9bbc */
  if (C.zf) goto L_101c9bbc;
  /* 101c9bd4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 101c9bd7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101c9bd9 je 0x101c9bfe */
  if (C.zf) goto L_101c9bfe;
  /* 101c9bdb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 101c9bdd je 0x101c9bf9 */
  if (C.zf) goto L_101c9bf9;
  /* 101c9bdf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 101c9be4 je 0x101c9bf4 */
  if (C.zf) goto L_101c9bf4;
  /* 101c9be6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 101c9beb je 0x101c9bef */
  if (C.zf) goto L_101c9bef;
  /* 101c9bed jmp 0x101c9bbc */
  goto L_101c9bbc;
L_101c9bef:;
  /* 101c9bef lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 101c9bf2 jmp 0x101c9c01 */
  goto L_101c9c01;
L_101c9bf4:;
  /* 101c9bf4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 101c9bf7 jmp 0x101c9c01 */
  goto L_101c9c01;
L_101c9bf9:;
  /* 101c9bf9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 101c9bfc jmp 0x101c9c01 */
  goto L_101c9c01;
L_101c9bfe:;
  /* 101c9bfe lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_101c9c01:;
  /* 101c9c01 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 101c9c05 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 101c9c0b je 0x101c9c26 */
  if (C.zf) goto L_101c9c26;
L_101c9c0d:;
  /* 101c9c0d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 101c9c0f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101c9c10 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101c9c12 je 0x101c9c78 */
  if (C.zf) goto L_101c9c78;
  /* 101c9c14 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 101c9c16 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101c9c17 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 101c9c1d jne 0x101c9c0d */
  if (!C.zf) goto L_101c9c0d;
  /* 101c9c1f jmp 0x101c9c26 */
  goto L_101c9c26;
L_101c9c21:;
  /* 101c9c21 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 101c9c23 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_101c9c26:;
  /* 101c9c26 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 101c9c2b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 101c9c2d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9c2f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101c9c32 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 101c9c34 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 101c9c36 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9c39 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 101c9c3e je 0x101c9c21 */
  if (C.zf) goto L_101c9c21;
  /* 101c9c40 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101c9c42 je 0x101c9c78 */
  if (C.zf) goto L_101c9c78;
  /* 101c9c44 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 101c9c46 je 0x101c9c6f */
  if (C.zf) goto L_101c9c6f;
  /* 101c9c48 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 101c9c4e je 0x101c9c62 */
  if (C.zf) goto L_101c9c62;
  /* 101c9c50 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 101c9c56 je 0x101c9c5a */
  if (C.zf) goto L_101c9c5a;
  /* 101c9c58 jmp 0x101c9c21 */
  goto L_101c9c21;
L_101c9c5a:;
  /* 101c9c5a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 101c9c5c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c9c60 pop edi */
  EDI = (pop32());
  /* 101c9c61 ret  */
  ESPCHK(0x101c9ba0u, _esp0);
  ESP += 4; return;
L_101c9c62:;
  /* 101c9c62 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 101c9c65 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c9c69 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 101c9c6d pop edi */
  EDI = (pop32());
  /* 101c9c6e ret  */
  ESPCHK(0x101c9ba0u, _esp0);
  ESP += 4; return;
L_101c9c6f:;
  /* 101c9c6f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 101c9c72 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c9c76 pop edi */
  EDI = (pop32());
  /* 101c9c77 ret  */
  ESPCHK(0x101c9ba0u, _esp0);
  ESP += 4; return;
L_101c9c78:;
  /* 101c9c78 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 101c9c7a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c9c7e pop edi */
  EDI = (pop32());
  /* 101c9c7f ret  */
  ESPCHK(0x101c9ba0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x101c9c80 (88 bytes, 40 insns) */
void f_101c9c80(void) {
  FTRACE(0x101c9c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c9c80 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 101c9c84 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c9c88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101c9c8a je 0x101c9cd3 */
  if (C.zf) goto L_101c9cd3;
  /* 101c9c8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101c9c8e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 101c9c92 push edi */
  push32((uint32_t)(EDI));
  /* 101c9c93 mov edi, ecx */
  EDI = (ECX);
  /* 101c9c95 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9c98 jb 0x101c9cc7 */
  if (C.cf) goto L_101c9cc7;
  /* 101c9c9a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 101c9c9c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 101c9c9f je 0x101c9ca9 */
  if (C.zf) goto L_101c9ca9;
  /* 101c9ca1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_101c9ca3:;
  /* 101c9ca3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101c9ca5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101c9ca6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101c9ca7 jne 0x101c9ca3 */
  if (!C.zf) goto L_101c9ca3;
L_101c9ca9:;
  /* 101c9ca9 mov ecx, eax */
  ECX = (EAX);
  /* 101c9cab shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 101c9cae add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9cb0 mov ecx, eax */
  ECX = (EAX);
  /* 101c9cb2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 101c9cb5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9cb7 mov ecx, edx */
  ECX = (EDX);
  /* 101c9cb9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 101c9cbc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101c9cbf je 0x101c9cc7 */
  if (C.zf) goto L_101c9cc7;
  /* 101c9cc1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 101c9cc3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101c9cc5 je 0x101c9ccd */
  if (C.zf) goto L_101c9ccd;
L_101c9cc7:;
  /* 101c9cc7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101c9cc9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101c9cca dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 101c9ccb jne 0x101c9cc7 */
  if (!C.zf) goto L_101c9cc7;
L_101c9ccd:;
  /* 101c9ccd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101c9cd1 pop edi */
  EDI = (pop32());
  /* 101c9cd2 ret  */
  ESPCHK(0x101c9c80u, _esp0);
  ESP += 4; return;
L_101c9cd3:;
  /* 101c9cd3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101c9cd7 ret  */
  ESPCHK(0x101c9c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ce0 @ 0x101c9ce0 (664 bytes, 266 insns) [15 switch table(s)] */
void f_101c9ce0(void) {
  FTRACE(0x101c9ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101c9ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 101c9ce1 mov ebp, esp */
  EBP = (ESP);
  /* 101c9ce3 push edi */
  push32((uint32_t)(EDI));
  /* 101c9ce4 push esi */
  push32((uint32_t)(ESI));
  /* 101c9ce5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101c9ce8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 101c9ceb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 101c9cee mov eax, ecx */
  EAX = (ECX);
  /* 101c9cf0 mov edx, ecx */
  EDX = (ECX);
  /* 101c9cf2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9cf4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9cf6 jbe 0x101c9d00 */
  if ((C.cf||C.zf)) goto L_101c9d00;
  /* 101c9cf8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9cfa jb 0x101c9e78 */
  if (C.cf) goto L_101c9e78;
L_101c9d00:;
  /* 101c9d00 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 101c9d06 jne 0x101c9d1c */
  if (!C.zf) goto L_101c9d1c;
  /* 101c9d08 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101c9d0b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 101c9d0e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9d11 jb 0x101c9d3c */
  if (C.cf) goto L_101c9d3c;
  /* 101c9d13 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101c9d15 jmp dword ptr [edx*4 + 0x101c9e28] */
  switch (EDX) {
    case 0: goto L_101c9e38;
    case 1: goto L_101c9e40;
    case 2: goto L_101c9e4c;
    case 3: goto L_101c9e60;
    default: x86_unimpl("switch@0x101c9d15 out of table"); return;
  }
L_101c9d1c:;
  /* 101c9d1c mov eax, edi */
  EAX = (EDI);
  /* 101c9d1e mov edx, 3 */
  EDX = (0x3u);
  /* 101c9d23 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c9d26 jb 0x101c9d34 */
  if (C.cf) goto L_101c9d34;
  /* 101c9d28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 101c9d2b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9d2d jmp dword ptr [eax*4 + 0x101c9d40] */
  switch (EAX) {
    case 1: goto L_101c9d50;
    case 2: goto L_101c9d7c;
    case 3: goto L_101c9da0;
    default: x86_unimpl("switch@0x101c9d2d out of table"); return;
  }
L_101c9d34:;
  /* 101c9d34 jmp dword ptr [ecx*4 + 0x101c9e38] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x101c9e38)))); return;
  /* 101c9d3b nop  */
  /* nop */
L_101c9d3c:;
  /* 101c9d3c jmp dword ptr [ecx*4 + 0x101c9dbc] */
  switch (ECX) {
    case 0: goto L_101c9e1f;
    case 1: goto L_101c9e0c;
    case 2: goto L_101c9e04;
    case 3: goto L_101c9dfc;
    case 4: goto L_101c9df4;
    case 5: goto L_101c9dec;
    case 6: goto L_101c9de4;
    case 7: goto L_101c9ddc;
    default: x86_unimpl("switch@0x101c9d3c out of table"); return;
  }
  /* 101c9d43 nop  */
  /* nop */
L_101c9d50:;
  /* 101c9d50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101c9d52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101c9d54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101c9d56 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101c9d59 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101c9d5c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101c9d5f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101c9d62 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101c9d65 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9d68 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9d6b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9d6e jb 0x101c9d3c */
  if (C.cf) goto L_101c9d3c;
  /* 101c9d70 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101c9d72 jmp dword ptr [edx*4 + 0x101c9e28] */
  switch (EDX) {
    case 0: goto L_101c9e38;
    case 1: goto L_101c9e40;
    case 2: goto L_101c9e4c;
    case 3: goto L_101c9e60;
    default: x86_unimpl("switch@0x101c9d72 out of table"); return;
  }
  /* 101c9d79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101c9d7c:;
  /* 101c9d7c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101c9d7e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101c9d80 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101c9d82 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101c9d85 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101c9d88 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101c9d8b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9d8e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9d91 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9d94 jb 0x101c9d3c */
  if (C.cf) goto L_101c9d3c;
  /* 101c9d96 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101c9d98 jmp dword ptr [edx*4 + 0x101c9e28] */
  switch (EDX) {
    case 0: goto L_101c9e38;
    case 1: goto L_101c9e40;
    case 2: goto L_101c9e4c;
    case 3: goto L_101c9e60;
    default: x86_unimpl("switch@0x101c9d98 out of table"); return;
  }
  /* 101c9d9f nop  */
  /* nop */
L_101c9da0:;
  /* 101c9da0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101c9da2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101c9da4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101c9da6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101c9da7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101c9daa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101c9dab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9dae jb 0x101c9d3c */
  if (C.cf) goto L_101c9d3c;
  /* 101c9db0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101c9db2 jmp dword ptr [edx*4 + 0x101c9e28] */
  switch (EDX) {
    case 0: goto L_101c9e38;
    case 1: goto L_101c9e40;
    case 2: goto L_101c9e4c;
    case 3: goto L_101c9e60;
    default: x86_unimpl("switch@0x101c9db2 out of table"); return;
  }
  /* 101c9db9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101c9ddc:;
  /* 101c9ddc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 101c9de0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_101c9de4:;
  /* 101c9de4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 101c9de8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_101c9dec:;
  /* 101c9dec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 101c9df0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_101c9df4:;
  /* 101c9df4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 101c9df8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_101c9dfc:;
  /* 101c9dfc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 101c9e00 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_101c9e04:;
  /* 101c9e04 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 101c9e08 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_101c9e0c:;
  /* 101c9e0c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 101c9e10 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 101c9e14 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 101c9e1b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9e1d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_101c9e1f:;
  /* 101c9e1f jmp dword ptr [edx*4 + 0x101c9e28] */
  switch (EDX) {
    case 0: goto L_101c9e38;
    case 1: goto L_101c9e40;
    case 2: goto L_101c9e4c;
    case 3: goto L_101c9e60;
    default: x86_unimpl("switch@0x101c9e1f out of table"); return;
  }
  /* 101c9e26 mov edi, edi */
  EDI = (EDI);
L_101c9e38:;
  /* 101c9e38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c9e3b pop esi */
  ESI = (pop32());
  /* 101c9e3c pop edi */
  EDI = (pop32());
  /* 101c9e3d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c9e3e ret  */
  ESPCHK(0x101c9ce0u, _esp0);
  ESP += 4; return;
  /* 101c9e3f nop  */
  /* nop */
L_101c9e40:;
  /* 101c9e40 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101c9e42 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101c9e44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c9e47 pop esi */
  ESI = (pop32());
  /* 101c9e48 pop edi */
  EDI = (pop32());
  /* 101c9e49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c9e4a ret  */
  ESPCHK(0x101c9ce0u, _esp0);
  ESP += 4; return;
  /* 101c9e4b nop  */
  /* nop */
L_101c9e4c:;
  /* 101c9e4c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101c9e4e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101c9e50 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101c9e53 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101c9e56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c9e59 pop esi */
  ESI = (pop32());
  /* 101c9e5a pop edi */
  EDI = (pop32());
  /* 101c9e5b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c9e5c ret  */
  ESPCHK(0x101c9ce0u, _esp0);
  ESP += 4; return;
  /* 101c9e5d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101c9e60:;
  /* 101c9e60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101c9e62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101c9e64 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101c9e67 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101c9e6a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101c9e6d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101c9e70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c9e73 pop esi */
  ESI = (pop32());
  /* 101c9e74 pop edi */
  EDI = (pop32());
  /* 101c9e75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c9e76 ret  */
  ESPCHK(0x101c9ce0u, _esp0);
  ESP += 4; return;
  /* 101c9e77 nop  */
  /* nop */
L_101c9e78:;
  /* 101c9e78 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 101c9e7c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 101c9e80 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 101c9e86 jne 0x101c9eac */
  if (!C.zf) goto L_101c9eac;
  /* 101c9e88 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101c9e8b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 101c9e8e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9e91 jb 0x101c9ea0 */
  if (C.cf) goto L_101c9ea0;
  /* 101c9e93 std  */
  C.df=1;
  /* 101c9e94 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101c9e96 cld  */
  C.df=0;
  /* 101c9e97 jmp dword ptr [edx*4 + 0x101c9fc0] */
  switch (EDX) {
    case 0: goto L_101c9fd0;
    case 1: goto L_101c9fd8;
    case 2: goto L_101c9fe8;
    case 3: goto L_101c9ffc;
    default: x86_unimpl("switch@0x101c9e97 out of table"); return;
  }
  /* 101c9e9e mov edi, edi */
  EDI = (EDI);
L_101c9ea0:;
  /* 101c9ea0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 101c9ea2 jmp dword ptr [ecx*4 + 0x101c9f70] */
  switch (ECX) {
    case 0: goto L_101c9fb7;
    default: x86_unimpl("switch@0x101c9ea2 out of table"); return;
  }
  /* 101c9ea9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101c9eac:;
  /* 101c9eac mov eax, edi */
  EAX = (EDI);
  /* 101c9eae mov edx, 3 */
  EDX = (0x3u);
  /* 101c9eb3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9eb6 jb 0x101c9ec4 */
  if (C.cf) goto L_101c9ec4;
  /* 101c9eb8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 101c9ebb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c9ebd jmp dword ptr [eax*4 + 0x101c9ec8] */
  switch (EAX) {
    case 1: goto L_101c9ed8;
    case 2: goto L_101c9ef8;
    case 3: goto L_101c9f20;
    default: x86_unimpl("switch@0x101c9ebd out of table"); return;
  }
L_101c9ec4:;
  /* 101c9ec4 jmp dword ptr [ecx*4 + 0x101c9fc0] */
  switch (ECX) {
    case 0: goto L_101c9fd0;
    case 1: goto L_101c9fd8;
    case 2: goto L_101c9fe8;
    case 3: goto L_101c9ffc;
    default: x86_unimpl("switch@0x101c9ec4 out of table"); return;
  }
  /* 101c9ecb nop  */
  /* nop */
L_101c9ed8:;
  /* 101c9ed8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101c9edb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101c9edd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101c9ee0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101c9ee1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101c9ee4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101c9ee5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9ee8 jb 0x101c9ea0 */
  if (C.cf) goto L_101c9ea0;
  /* 101c9eea std  */
  C.df=1;
  /* 101c9eeb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101c9eed cld  */
  C.df=0;
  /* 101c9eee jmp dword ptr [edx*4 + 0x101c9fc0] */
  switch (EDX) {
    case 0: goto L_101c9fd0;
    case 1: goto L_101c9fd8;
    case 2: goto L_101c9fe8;
    case 3: goto L_101c9ffc;
    default: x86_unimpl("switch@0x101c9eee out of table"); return;
  }
L_101c9ef5:;
  /* 101c9ef5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101c9ef8:;
  /* 101c9ef8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101c9efb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101c9efd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101c9f00 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101c9f03 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101c9f06 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101c9f09 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c9f0c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c9f0f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9f12 jb 0x101c9ea0 */
  if (C.cf) goto L_101c9ea0;
  /* 101c9f14 std  */
  C.df=1;
  /* 101c9f15 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101c9f17 cld  */
  C.df=0;
  /* 101c9f18 jmp dword ptr [edx*4 + 0x101c9fc0] */
  switch (EDX) {
    case 0: goto L_101c9fd0;
    case 1: goto L_101c9fd8;
    case 2: goto L_101c9fe8;
    case 3: goto L_101c9ffc;
    default: x86_unimpl("switch@0x101c9f18 out of table"); return;
  }
  /* 101c9f1f nop  */
  /* nop */
L_101c9f20:;
  /* 101c9f20 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101c9f23 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101c9f25 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101c9f28 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101c9f2b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101c9f2e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101c9f31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101c9f34 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101c9f37 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c9f3a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101c9f3d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101c9f40 jb 0x101c9ea0 */
  if (C.cf) goto L_101c9ea0;
  /* 101c9f46 std  */
  C.df=1;
  /* 101c9f47 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101c9f49 cld  */
  C.df=0;
  /* 101c9f4a jmp dword ptr [edx*4 + 0x101c9fc0] */
  switch (EDX) {
    case 0: goto L_101c9fd0;
    case 1: goto L_101c9fd8;
    case 2: goto L_101c9fe8;
    case 3: goto L_101c9ffc;
    default: x86_unimpl("switch@0x101c9f4a out of table"); return;
  }
  /* 101c9f51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 101c9f54 je 0x101c9ef5 */
  if (C.zf) goto L_101c9ef5;
  /* 101c9f56 sbb al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101c9f58 jl 0x101c9ef9 */
  if ((C.sf!=C.of)) goto L_101c9ef9;
  /* 101c9f5a sbb al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101c9f5c test byte ptr [edi - 0x6073efe4], bl */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x6073efe4)))&(BL); fl_logic(_r,8); }
  /* 101c9f62 sbb al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101c9f64 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 101c9f65 lahf  */
  AH=(uint8_t)((C.sf<<7)|(C.zf<<6)|(C.af<<4)|(C.pf<<2)|0x02u|C.cf);
  /* 101c9f66 sbb al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101c9f68 pushfd  */
  x86_unimpl("pushfd @ 0x101c9f68");
  /* 101c9f69 lahf  */
  AH=(uint8_t)((C.sf<<7)|(C.zf<<6)|(C.af<<4)|(C.pf<<2)|0x02u|C.cf);
  /* 101c9f6a sbb al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101c9f6c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 101c9f6d lahf  */
  AH=(uint8_t)((C.sf<<7)|(C.zf<<6)|(C.af<<4)|(C.pf<<2)|0x02u|C.cf);
  /* 101c9f6e sbb al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101c9f74 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 101c9f78 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 101c9f7c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 101c9f80 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 101c9f84 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 101c9f88 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 101c9f8c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 101c9f90 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 101c9f94 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 101c9f98 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 101c9f9c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 101c9fa0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 101c9fa4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 101c9fa8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 101c9fac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 101c9fb3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101c9fb5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_101c9fb7:;
  /* 101c9fb7 jmp dword ptr [edx*4 + 0x101c9fc0] */
  switch (EDX) {
    case 0: goto L_101c9fd0;
    case 1: goto L_101c9fd8;
    case 2: goto L_101c9fe8;
    case 3: goto L_101c9ffc;
    default: x86_unimpl("switch@0x101c9fb7 out of table"); return;
  }
  /* 101c9fbe mov edi, edi */
  EDI = (EDI);
L_101c9fd0:;
  /* 101c9fd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c9fd3 pop esi */
  ESI = (pop32());
  /* 101c9fd4 pop edi */
  EDI = (pop32());
  /* 101c9fd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c9fd6 ret  */
  ESPCHK(0x101c9ce0u, _esp0);
  ESP += 4; return;
  /* 101c9fd7 nop  */
  /* nop */
L_101c9fd8:;
  /* 101c9fd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101c9fdb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101c9fde mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c9fe1 pop esi */
  ESI = (pop32());
  /* 101c9fe2 pop edi */
  EDI = (pop32());
  /* 101c9fe3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c9fe4 ret  */
  ESPCHK(0x101c9ce0u, _esp0);
  ESP += 4; return;
  /* 101c9fe5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101c9fe8:;
  /* 101c9fe8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101c9feb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101c9fee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101c9ff1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101c9ff4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101c9ff7 pop esi */
  ESI = (pop32());
  /* 101c9ff8 pop edi */
  EDI = (pop32());
  /* 101c9ff9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101c9ffa ret  */
  ESPCHK(0x101c9ce0u, _esp0);
  ESP += 4; return;
  /* 101c9ffb nop  */
  /* nop */
L_101c9ffc:;
  /* 101c9ffc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101c9fff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101ca002 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101ca005 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101ca008 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101ca00b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101ca00e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ca011 pop esi */
  ESI = (pop32());
  /* 101ca012 pop edi */
  EDI = (pop32());
  /* 101ca013 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101ca014 ret  */
  ESPCHK(0x101c9ce0u, _esp0);
  ESP += 4; return;
L_101c9ef9: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x101c9ef9 (unresolved jump table)"); return;
}

/* __fptrap @ 0x101ca015 (9 bytes, 4 insns) */
void f_101ca015(void) {
  FTRACE(0x101ca015u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ca015 push 2 */
  push32((uint32_t)(0x2u));
  /* 101ca017 call 0x101c7151 */
  push32(0x101ca01cu); f_101c7151();
  /* 101ca01c pop ecx */
  ECX = (pop32());
  /* 101ca01d ret  */
  ESPCHK(0x101ca015u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a01e @ 0x101ca01e (41 bytes, 12 insns) */
void f_101ca01e(void) {
  FTRACE(0x101ca01eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ca01e push esi */
  push32((uint32_t)(ESI));
  /* 101ca01f mov esi, dword ptr [0x101ce094] */
  ESI = (r32((uint32_t)(0x101ce094)));
  /* 101ca025 push dword ptr [0x101d0bd4] */
  push32((uint32_t)(r32((uint32_t)(0x101d0bd4))));
  /* 101ca02b call esi */
  call_ind((uint32_t)(ESI), 0x101ca02du);
  /* 101ca02d push dword ptr [0x101d0bc4] */
  push32((uint32_t)(r32((uint32_t)(0x101d0bc4))));
  /* 101ca033 call esi */
  call_ind((uint32_t)(ESI), 0x101ca035u);
  /* 101ca035 push dword ptr [0x101d0bb4] */
  push32((uint32_t)(r32((uint32_t)(0x101d0bb4))));
  /* 101ca03b call esi */
  call_ind((uint32_t)(ESI), 0x101ca03du);
  /* 101ca03d push dword ptr [0x101d0b94] */
  push32((uint32_t)(r32((uint32_t)(0x101d0b94))));
  /* 101ca043 call esi */
  call_ind((uint32_t)(ESI), 0x101ca045u);
  /* 101ca045 pop esi */
  ESI = (pop32());
  /* 101ca046 ret  */
  ESPCHK(0x101ca01eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a047 @ 0x101ca047 (108 bytes, 34 insns) */
void f_101ca047(void) {
  FTRACE(0x101ca047u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ca047 push esi */
  push32((uint32_t)(ESI));
  /* 101ca048 push edi */
  push32((uint32_t)(EDI));
  /* 101ca049 mov edi, dword ptr [0x101ce050] */
  EDI = (r32((uint32_t)(0x101ce050)));
  /* 101ca04f mov esi, 0x101d0b90 */
  ESI = (0x101d0b90u);
L_101ca054:;
  /* 101ca054 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 101ca056 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ca058 je 0x101ca085 */
  if (C.zf) goto L_101ca085;
  /* 101ca05a cmp esi, 0x101d0bd4 */
  { uint32_t _a=(ESI),_b=(0x101d0bd4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca060 je 0x101ca085 */
  if (C.zf) goto L_101ca085;
  /* 101ca062 cmp esi, 0x101d0bc4 */
  { uint32_t _a=(ESI),_b=(0x101d0bc4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca068 je 0x101ca085 */
  if (C.zf) goto L_101ca085;
  /* 101ca06a cmp esi, 0x101d0bb4 */
  { uint32_t _a=(ESI),_b=(0x101d0bb4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca070 je 0x101ca085 */
  if (C.zf) goto L_101ca085;
  /* 101ca072 cmp esi, 0x101d0b94 */
  { uint32_t _a=(ESI),_b=(0x101d0b94u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca078 je 0x101ca085 */
  if (C.zf) goto L_101ca085;
  /* 101ca07a push eax */
  push32((uint32_t)(EAX));
  /* 101ca07b call edi */
  call_ind((uint32_t)(EDI), 0x101ca07du);
  /* 101ca07d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101ca07f call 0x101ca266 */
  push32(0x101ca084u); f_101ca266();
  /* 101ca084 pop ecx */
  ECX = (pop32());
L_101ca085:;
  /* 101ca085 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101ca088 cmp esi, 0x101d0c50 */
  { uint32_t _a=(ESI),_b=(0x101d0c50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca08e jl 0x101ca054 */
  if ((C.sf!=C.of)) goto L_101ca054;
  /* 101ca090 push dword ptr [0x101d0bb4] */
  push32((uint32_t)(r32((uint32_t)(0x101d0bb4))));
  /* 101ca096 call edi */
  call_ind((uint32_t)(EDI), 0x101ca098u);
  /* 101ca098 push dword ptr [0x101d0bc4] */
  push32((uint32_t)(r32((uint32_t)(0x101d0bc4))));
  /* 101ca09e call edi */
  call_ind((uint32_t)(EDI), 0x101ca0a0u);
  /* 101ca0a0 push dword ptr [0x101d0bd4] */
  push32((uint32_t)(r32((uint32_t)(0x101d0bd4))));
  /* 101ca0a6 call edi */
  call_ind((uint32_t)(EDI), 0x101ca0a8u);
  /* 101ca0a8 push dword ptr [0x101d0b94] */
  push32((uint32_t)(r32((uint32_t)(0x101d0b94))));
  /* 101ca0ae call edi */
  call_ind((uint32_t)(EDI), 0x101ca0b0u);
  /* 101ca0b0 pop edi */
  EDI = (pop32());
  /* 101ca0b1 pop esi */
  ESI = (pop32());
  /* 101ca0b2 ret  */
  ESPCHK(0x101ca047u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0b3 @ 0x101ca0b3 (97 bytes, 37 insns) */
void f_101ca0b3(void) {
  FTRACE(0x101ca0b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ca0b3 push ebp */
  push32((uint32_t)(EBP));
  /* 101ca0b4 mov ebp, esp */
  EBP = (ESP);
  /* 101ca0b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ca0b9 push esi */
  push32((uint32_t)(ESI));
  /* 101ca0ba cmp dword ptr [eax*4 + 0x101d0b90], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x101d0b90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca0c2 lea esi, [eax*4 + 0x101d0b90] */
  ESI = ((uint32_t)(EAX*4 + 0x101d0b90));
  /* 101ca0c9 jne 0x101ca109 */
  if (!C.zf) goto L_101ca109;
  /* 101ca0cb push edi */
  push32((uint32_t)(EDI));
  /* 101ca0cc push 0x18 */
  push32((uint32_t)(0x18u));
  /* 101ca0ce call 0x101ca34f */
  push32(0x101ca0d3u); f_101ca34f();
  /* 101ca0d3 mov edi, eax */
  EDI = (EAX);
  /* 101ca0d5 pop ecx */
  ECX = (pop32());
  /* 101ca0d6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101ca0d8 jne 0x101ca0e2 */
  if (!C.zf) goto L_101ca0e2;
  /* 101ca0da push 0x11 */
  push32((uint32_t)(0x11u));
  /* 101ca0dc call 0x101c7151 */
  push32(0x101ca0e1u); f_101c7151();
  /* 101ca0e1 pop ecx */
  ECX = (pop32());
L_101ca0e2:;
  /* 101ca0e2 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 101ca0e4 call 0x101ca0b3 */
  push32(0x101ca0e9u); f_101ca0b3();
  /* 101ca0e9 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca0ec pop ecx */
  ECX = (pop32());
  /* 101ca0ed push edi */
  push32((uint32_t)(EDI));
  /* 101ca0ee jne 0x101ca0fa */
  if (!C.zf) goto L_101ca0fa;
  /* 101ca0f0 call dword ptr [0x101ce094] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce094))), 0x101ca0f6u);
  /* 101ca0f6 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 101ca0f8 jmp 0x101ca100 */
  goto L_101ca100;
L_101ca0fa:;
  /* 101ca0fa call 0x101ca266 */
  push32(0x101ca0ffu); f_101ca266();
  /* 101ca0ff pop ecx */
  ECX = (pop32());
L_101ca100:;
  /* 101ca100 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 101ca102 call 0x101ca114 */
  push32(0x101ca107u); f_101ca114();
  /* 101ca107 pop ecx */
  ECX = (pop32());
  /* 101ca108 pop edi */
  EDI = (pop32());
L_101ca109:;
  /* 101ca109 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101ca10b call dword ptr [0x101ce00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce00c))), 0x101ca111u);
  /* 101ca111 pop esi */
  ESI = (pop32());
  /* 101ca112 pop ebp */
  EBP = (pop32());
  /* 101ca113 ret  */
  ESPCHK(0x101ca0b3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a114 @ 0x101ca114 (21 bytes, 7 insns) */
void f_101ca114(void) {
  FTRACE(0x101ca114u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ca114 push ebp */
  push32((uint32_t)(EBP));
  /* 101ca115 mov ebp, esp */
  EBP = (ESP);
  /* 101ca117 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ca11a push dword ptr [eax*4 + 0x101d0b90] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x101d0b90))));
  /* 101ca121 call dword ptr [0x101ce008] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce008))), 0x101ca127u);
  /* 101ca127 pop ebp */
  EBP = (pop32());
  /* 101ca128 ret  */
  ESPCHK(0x101ca114u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a129 @ 0x101ca129 (289 bytes, 98 insns) */
void f_101ca129(void) {
  FTRACE(0x101ca129u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ca129 push ebp */
  push32((uint32_t)(EBP));
  /* 101ca12a mov ebp, esp */
  EBP = (ESP);
  /* 101ca12c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 101ca12e push 0x101ce4d0 */
  push32((uint32_t)(0x101ce4d0u));
  /* 101ca133 push 0x101cd0d0 */
  push32((uint32_t)(0x101cd0d0u));
  /* 101ca138 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 101ca13e push eax */
  push32((uint32_t)(EAX));
  /* 101ca13f mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 101ca146 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ca149 push ebx */
  push32((uint32_t)(EBX));
  /* 101ca14a push esi */
  push32((uint32_t)(ESI));
  /* 101ca14b push edi */
  push32((uint32_t)(EDI));
  /* 101ca14c mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 101ca14f imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101ca153 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 101ca156 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 101ca159 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca15c ja 0x101ca172 */
  if ((!C.cf&&!C.zf)) goto L_101ca172;
  /* 101ca15e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101ca160 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca162 jne 0x101ca167 */
  if (!C.zf) goto L_101ca167;
  /* 101ca164 push 1 */
  push32((uint32_t)(0x1u));
  /* 101ca166 pop esi */
  ESI = (pop32());
L_101ca167:;
  /* 101ca167 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101ca16a and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 101ca16d mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 101ca170 jmp 0x101ca174 */
  goto L_101ca174;
L_101ca172:;
  /* 101ca172 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_101ca174:;
  /* 101ca174 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 101ca177 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca17a ja 0x101ca228 */
  if ((!C.cf&&!C.zf)) goto L_101ca228;
  /* 101ca180 mov eax, dword ptr [0x101d7b88] */
  EAX = (r32((uint32_t)(0x101d7b88)));
  /* 101ca185 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca188 jne 0x101ca1cb */
  if (!C.zf) goto L_101ca1cb;
  /* 101ca18a mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 101ca18d cmp edi, dword ptr [0x101d6940] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x101d6940))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca193 ja 0x101ca211 */
  if ((!C.cf&&!C.zf)) goto L_101ca211;
  /* 101ca195 push 9 */
  push32((uint32_t)(0x9u));
  /* 101ca197 call 0x101ca0b3 */
  push32(0x101ca19cu); f_101ca0b3();
  /* 101ca19c pop ecx */
  ECX = (pop32());
  /* 101ca19d mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 101ca1a0 push edi */
  push32((uint32_t)(EDI));
  /* 101ca1a1 call 0x101cb33b */
  push32(0x101ca1a6u); f_101cb33b();
  /* 101ca1a6 pop ecx */
  ECX = (pop32());
  /* 101ca1a7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101ca1aa or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101ca1ae call 0x101ca1c2 */
  push32(0x101ca1b3u); f_101ca1c2();
  /* 101ca1b3 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca1b6 je 0x101ca216 */
  if (C.zf) goto L_101ca216;
  /* 101ca1b8 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 101ca1bb jmp 0x101ca205 */
  goto L_101ca205;
  /* 101ca1bd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101ca1bf mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101ca1c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 101ca1c4 call 0x101ca114 */
  push32(0x101ca1c9u); f_101ca114();
  /* 101ca1c9 pop ecx */
  ECX = (pop32());
  /* 101ca1ca ret  */
  ESPCHK(0x101ca129u, _esp0);
  ESP += 4; return;
L_101ca1cb:;
  /* 101ca1cb cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca1ce jne 0x101ca211 */
  if (!C.zf) goto L_101ca211;
  /* 101ca1d0 cmp esi, dword ptr [0x101d2df4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101d2df4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca1d6 ja 0x101ca211 */
  if ((!C.cf&&!C.zf)) goto L_101ca211;
  /* 101ca1d8 push 9 */
  push32((uint32_t)(0x9u));
  /* 101ca1da call 0x101ca0b3 */
  push32(0x101ca1dfu); f_101ca0b3();
  /* 101ca1df pop ecx */
  ECX = (pop32());
  /* 101ca1e0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 101ca1e7 mov eax, esi */
  EAX = (ESI);
  /* 101ca1e9 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 101ca1ec push eax */
  push32((uint32_t)(EAX));
  /* 101ca1ed call 0x101cbae8 */
  push32(0x101ca1f2u); f_101cbae8();
  /* 101ca1f2 pop ecx */
  ECX = (pop32());
  /* 101ca1f3 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101ca1f6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101ca1fa call 0x101ca24b */
  push32(0x101ca1ffu); f_101ca24b();
  /* 101ca1ff cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca202 je 0x101ca216 */
  if (C.zf) goto L_101ca216;
  /* 101ca204 push esi */
  push32((uint32_t)(ESI));
L_101ca205:;
  /* 101ca205 push ebx */
  push32((uint32_t)(EBX));
  /* 101ca206 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 101ca209 call 0x101c9c80 */
  push32(0x101ca20eu); f_101c9c80();
  /* 101ca20e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101ca211:;
  /* 101ca211 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca214 jne 0x101ca254 */
  if (!C.zf) { jmp_ind(0x101ca254u); return; }
L_101ca216:;
  /* 101ca216 push esi */
  push32((uint32_t)(ESI));
  /* 101ca217 push 8 */
  push32((uint32_t)(0x8u));
  /* 101ca219 push dword ptr [0x101d7b84] */
  push32((uint32_t)(r32((uint32_t)(0x101d7b84))));
  /* 101ca21f call dword ptr [0x101ce098] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce098))), 0x101ca225u);
  /* 101ca225 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_101ca228:;
  /* 101ca228 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca22b jne 0x101ca254 */
  if (!C.zf) { jmp_ind(0x101ca254u); return; }
  /* 101ca22d cmp dword ptr [0x101d67e0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101d67e0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca233 je 0x101ca254 */
  if (C.zf) { jmp_ind(0x101ca254u); return; }
  /* 101ca235 push esi */
  push32((uint32_t)(ESI));
  /* 101ca236 call 0x101ccfba */
  push32(0x101ca23bu); f_101ccfba();
  /* 101ca23b pop ecx */
  ECX = (pop32());
  /* 101ca23c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ca23e jne 0x101ca174 */
  if (!C.zf) goto L_101ca174;
  /* 101ca244 jmp 0x101ca257 */
  jmp_ind(0x101ca257u); return;
  /* 101ca246 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_1000a1c2 @ 0x101ca1c2 (9 bytes, 4 insns) */
void f_101ca1c2(void) {
  FTRACE(0x101ca1c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ca1c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 101ca1c4 call 0x101ca114 */
  push32(0x101ca1c9u); f_101ca114();
  /* 101ca1c9 pop ecx */
  ECX = (pop32());
  /* 101ca1ca ret  */
  ESPCHK(0x101ca1c2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a24b @ 0x101ca24b (9 bytes, 4 insns) */
void f_101ca24b(void) {
  FTRACE(0x101ca24bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ca24b push 9 */
  push32((uint32_t)(0x9u));
  /* 101ca24d call 0x101ca114 */
  push32(0x101ca252u); f_101ca114();
  /* 101ca252 pop ecx */
  ECX = (pop32());
  /* 101ca253 ret  */
  ESPCHK(0x101ca24bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a266 @ 0x101ca266 (215 bytes, 75 insns) */
void f_101ca266(void) {
  FTRACE(0x101ca266u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ca266 push ebp */
  push32((uint32_t)(EBP));
  /* 101ca267 mov ebp, esp */
  EBP = (ESP);
  /* 101ca269 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 101ca26b push 0x101ce4e8 */
  push32((uint32_t)(0x101ce4e8u));
  /* 101ca270 push 0x101cd0d0 */
  push32((uint32_t)(0x101cd0d0u));
  /* 101ca275 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 101ca27b push eax */
  push32((uint32_t)(EAX));
  /* 101ca27c mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 101ca283 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ca286 push ebx */
  push32((uint32_t)(EBX));
  /* 101ca287 push esi */
  push32((uint32_t)(ESI));
  /* 101ca288 push edi */
  push32((uint32_t)(EDI));
  /* 101ca289 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 101ca28c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101ca28e je 0x101ca340 */
  if (C.zf) { jmp_ind(0x101ca340u); return; }
  /* 101ca294 mov eax, dword ptr [0x101d7b88] */
  EAX = (r32((uint32_t)(0x101d7b88)));
  /* 101ca299 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca29c jne 0x101ca2d9 */
  if (!C.zf) goto L_101ca2d9;
  /* 101ca29e push 9 */
  push32((uint32_t)(0x9u));
  /* 101ca2a0 call 0x101ca0b3 */
  push32(0x101ca2a5u); f_101ca0b3();
  /* 101ca2a5 pop ecx */
  ECX = (pop32());
  /* 101ca2a6 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101ca2aa push esi */
  push32((uint32_t)(ESI));
  /* 101ca2ab call 0x101cafe7 */
  push32(0x101ca2b0u); f_101cafe7();
  /* 101ca2b0 pop ecx */
  ECX = (pop32());
  /* 101ca2b1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 101ca2b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ca2b6 je 0x101ca2c1 */
  if (C.zf) goto L_101ca2c1;
  /* 101ca2b8 push esi */
  push32((uint32_t)(ESI));
  /* 101ca2b9 push eax */
  push32((uint32_t)(EAX));
  /* 101ca2ba call 0x101cb012 */
  push32(0x101ca2bfu); f_101cb012();
  /* 101ca2bf pop ecx */
  ECX = (pop32());
  /* 101ca2c0 pop ecx */
  ECX = (pop32());
L_101ca2c1:;
  /* 101ca2c1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101ca2c5 call 0x101ca2d0 */
  push32(0x101ca2cau); f_101ca2d0();
  /* 101ca2ca cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca2ce jmp 0x101ca321 */
  goto L_101ca321;
  /* 101ca2d0 push 9 */
  push32((uint32_t)(0x9u));
  /* 101ca2d2 call 0x101ca114 */
  push32(0x101ca2d7u); f_101ca114();
  /* 101ca2d7 pop ecx */
  ECX = (pop32());
  /* 101ca2d8 ret  */
  ESPCHK(0x101ca266u, _esp0);
  ESP += 4; return;
L_101ca2d9:;
  /* 101ca2d9 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca2dc jne 0x101ca331 */
  if (!C.zf) goto L_101ca331;
  /* 101ca2de push 9 */
  push32((uint32_t)(0x9u));
  /* 101ca2e0 call 0x101ca0b3 */
  push32(0x101ca2e5u); f_101ca0b3();
  /* 101ca2e5 pop ecx */
  ECX = (pop32());
  /* 101ca2e6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 101ca2ed lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 101ca2f0 push eax */
  push32((uint32_t)(EAX));
  /* 101ca2f1 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 101ca2f4 push eax */
  push32((uint32_t)(EAX));
  /* 101ca2f5 push esi */
  push32((uint32_t)(ESI));
  /* 101ca2f6 call 0x101cba4c */
  push32(0x101ca2fbu); f_101cba4c();
  /* 101ca2fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ca2fe mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 101ca301 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ca303 je 0x101ca314 */
  if (C.zf) goto L_101ca314;
  /* 101ca305 push eax */
  push32((uint32_t)(EAX));
  /* 101ca306 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 101ca309 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 101ca30c call 0x101cbaa3 */
  push32(0x101ca311u); f_101cbaa3();
  /* 101ca311 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101ca314:;
  /* 101ca314 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101ca318 call 0x101ca328 */
  push32(0x101ca31du); f_101ca328();
  /* 101ca31d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_101ca321:;
  /* 101ca321 jne 0x101ca340 */
  if (!C.zf) { jmp_ind(0x101ca340u); return; }
  /* 101ca323 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101ca326 jmp 0x101ca332 */
  goto L_101ca332;
  /* 101ca328 push 9 */
  push32((uint32_t)(0x9u));
  /* 101ca32a call 0x101ca114 */
  push32(0x101ca32fu); f_101ca114();
  /* 101ca32f pop ecx */
  ECX = (pop32());
  /* 101ca330 ret  */
  ESPCHK(0x101ca266u, _esp0);
  ESP += 4; return;
L_101ca331:;
  /* 101ca331 push esi */
  push32((uint32_t)(ESI));
L_101ca332:;
  /* 101ca332 push 0 */
  push32((uint32_t)(0x0u));
  /* 101ca334 push dword ptr [0x101d7b84] */
  push32((uint32_t)(r32((uint32_t)(0x101d7b84))));
}

/* FUN_1000a2d0 @ 0x101ca2d0 (9 bytes, 4 insns) */
void f_101ca2d0(void) {
  FTRACE(0x101ca2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ca2d0 push 9 */
  push32((uint32_t)(0x9u));
  /* 101ca2d2 call 0x101ca114 */
  push32(0x101ca2d7u); f_101ca114();
  /* 101ca2d7 pop ecx */
  ECX = (pop32());
  /* 101ca2d8 ret  */
  ESPCHK(0x101ca2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a328 @ 0x101ca328 (9 bytes, 4 insns) */
void f_101ca328(void) {
  FTRACE(0x101ca328u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ca328 push 9 */
  push32((uint32_t)(0x9u));
  /* 101ca32a call 0x101ca114 */
  push32(0x101ca32fu); f_101ca114();
  /* 101ca32f pop ecx */
  ECX = (pop32());
  /* 101ca330 ret  */
  ESPCHK(0x101ca328u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x101ca34f (18 bytes, 6 insns) */
void f_101ca34f(void) {
  FTRACE(0x101ca34fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ca34f push dword ptr [0x101d67e0] */
  push32((uint32_t)(r32((uint32_t)(0x101d67e0))));
  /* 101ca355 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 101ca359 call 0x101ca361 */
  push32(0x101ca35eu); f_101ca361();
  /* 101ca35e pop ecx */
  ECX = (pop32());
  /* 101ca35f pop ecx */
  ECX = (pop32());
  /* 101ca360 ret  */
  ESPCHK(0x101ca34fu, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x101ca361 (44 bytes, 16 insns) */
void f_101ca361(void) {
  FTRACE(0x101ca361u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ca361 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca366 ja 0x101ca38a */
  if ((!C.cf&&!C.zf)) goto L_101ca38a;
L_101ca368:;
  /* 101ca368 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 101ca36c call 0x101ca38d */
  push32(0x101ca371u); f_101ca38d();
  /* 101ca371 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ca373 pop ecx */
  ECX = (pop32());
  /* 101ca374 jne 0x101ca38c */
  if (!C.zf) goto L_101ca38c;
  /* 101ca376 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca37a je 0x101ca38c */
  if (C.zf) goto L_101ca38c;
  /* 101ca37c push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 101ca380 call 0x101ccfba */
  push32(0x101ca385u); f_101ccfba();
  /* 101ca385 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ca387 pop ecx */
  ECX = (pop32());
  /* 101ca388 jne 0x101ca368 */
  if (!C.zf) goto L_101ca368;
L_101ca38a:;
  /* 101ca38a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101ca38c:;
  /* 101ca38c ret  */
  ESPCHK(0x101ca361u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a38d @ 0x101ca38d (231 bytes, 81 insns) */
void f_101ca38d(void) {
  FTRACE(0x101ca38du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ca38d push ebp */
  push32((uint32_t)(EBP));
  /* 101ca38e mov ebp, esp */
  EBP = (ESP);
  /* 101ca390 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 101ca392 push 0x101ce500 */
  push32((uint32_t)(0x101ce500u));
  /* 101ca397 push 0x101cd0d0 */
  push32((uint32_t)(0x101cd0d0u));
  /* 101ca39c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 101ca3a2 push eax */
  push32((uint32_t)(EAX));
  /* 101ca3a3 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 101ca3aa sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ca3ad push ebx */
  push32((uint32_t)(EBX));
  /* 101ca3ae push esi */
  push32((uint32_t)(ESI));
  /* 101ca3af push edi */
  push32((uint32_t)(EDI));
  /* 101ca3b0 mov eax, dword ptr [0x101d7b88] */
  EAX = (r32((uint32_t)(0x101d7b88)));
  /* 101ca3b5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca3b8 jne 0x101ca3fd */
  if (!C.zf) goto L_101ca3fd;
  /* 101ca3ba mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 101ca3bd cmp esi, dword ptr [0x101d6940] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101d6940))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca3c3 ja 0x101ca45c */
  if ((!C.cf&&!C.zf)) goto L_101ca45c;
  /* 101ca3c9 push 9 */
  push32((uint32_t)(0x9u));
  /* 101ca3cb call 0x101ca0b3 */
  push32(0x101ca3d0u); f_101ca0b3();
  /* 101ca3d0 pop ecx */
  ECX = (pop32());
  /* 101ca3d1 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101ca3d5 push esi */
  push32((uint32_t)(ESI));
  /* 101ca3d6 call 0x101cb33b */
  push32(0x101ca3dbu); f_101cb33b();
  /* 101ca3db pop ecx */
  ECX = (pop32());
  /* 101ca3dc mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 101ca3df or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101ca3e3 call 0x101ca3f4 */
  push32(0x101ca3e8u); f_101ca3f4();
  /* 101ca3e8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 101ca3eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ca3ed je 0x101ca45c */
  if (C.zf) goto L_101ca45c;
  /* 101ca3ef jmp 0x101ca47a */
  jmp_ind(0x101ca47au); return;
  /* 101ca3f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 101ca3f6 call 0x101ca114 */
  push32(0x101ca3fbu); f_101ca114();
  /* 101ca3fb pop ecx */
  ECX = (pop32());
  /* 101ca3fc ret  */
  ESPCHK(0x101ca38du, _esp0);
  ESP += 4; return;
L_101ca3fd:;
  /* 101ca3fd cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca400 jne 0x101ca45c */
  if (!C.zf) goto L_101ca45c;
  /* 101ca402 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ca405 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ca407 je 0x101ca411 */
  if (C.zf) goto L_101ca411;
  /* 101ca409 lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 101ca40c and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 101ca40f jmp 0x101ca414 */
  goto L_101ca414;
L_101ca411:;
  /* 101ca411 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 101ca413 pop esi */
  ESI = (pop32());
L_101ca414:;
  /* 101ca414 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 101ca417 cmp esi, dword ptr [0x101d2df4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101d2df4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca41d ja 0x101ca44d */
  if ((!C.cf&&!C.zf)) goto L_101ca44d;
  /* 101ca41f push 9 */
  push32((uint32_t)(0x9u));
  /* 101ca421 call 0x101ca0b3 */
  push32(0x101ca426u); f_101ca0b3();
  /* 101ca426 pop ecx */
  ECX = (pop32());
  /* 101ca427 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 101ca42e mov eax, esi */
  EAX = (ESI);
  /* 101ca430 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 101ca433 push eax */
  push32((uint32_t)(EAX));
  /* 101ca434 call 0x101cbae8 */
  push32(0x101ca439u); f_101cbae8();
  /* 101ca439 pop ecx */
  ECX = (pop32());
  /* 101ca43a mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 101ca43d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101ca441 call 0x101ca453 */
  push32(0x101ca446u); f_101ca453();
  /* 101ca446 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 101ca449 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ca44b jne 0x101ca47a */
  if (!C.zf) { jmp_ind(0x101ca47au); return; }
L_101ca44d:;
  /* 101ca44d push esi */
  push32((uint32_t)(ESI));
  /* 101ca44e jmp 0x101ca46c */
  goto L_101ca46c;
  /* 101ca450 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 101ca453 push 9 */
  push32((uint32_t)(0x9u));
  /* 101ca455 call 0x101ca114 */
  push32(0x101ca45au); f_101ca114();
  /* 101ca45a pop ecx */
  ECX = (pop32());
  /* 101ca45b ret  */
  ESPCHK(0x101ca38du, _esp0);
  ESP += 4; return;
L_101ca45c:;
  /* 101ca45c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ca45f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ca461 jne 0x101ca466 */
  if (!C.zf) goto L_101ca466;
  /* 101ca463 push 1 */
  push32((uint32_t)(0x1u));
  /* 101ca465 pop eax */
  EAX = (pop32());
L_101ca466:;
  /* 101ca466 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ca469 and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 101ca46b push eax */
  push32((uint32_t)(EAX));
L_101ca46c:;
  /* 101ca46c push 0 */
  push32((uint32_t)(0x0u));
  /* 101ca46e push dword ptr [0x101d7b84] */
  push32((uint32_t)(r32((uint32_t)(0x101d7b84))));
}

/* FUN_1000a3f4 @ 0x101ca3f4 (9 bytes, 4 insns) */
void f_101ca3f4(void) {
  FTRACE(0x101ca3f4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ca3f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 101ca3f6 call 0x101ca114 */
  push32(0x101ca3fbu); f_101ca114();
  /* 101ca3fb pop ecx */
  ECX = (pop32());
  /* 101ca3fc ret  */
  ESPCHK(0x101ca3f4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a453 @ 0x101ca453 (9 bytes, 4 insns) */
void f_101ca453(void) {
  FTRACE(0x101ca453u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ca453 push 9 */
  push32((uint32_t)(0x9u));
  /* 101ca455 call 0x101ca114 */
  push32(0x101ca45au); f_101ca114();
  /* 101ca45a pop ecx */
  ECX = (pop32());
  /* 101ca45b ret  */
  ESPCHK(0x101ca453u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a489 @ 0x101ca489 (429 bytes, 143 insns) */
void f_101ca489(void) {
  FTRACE(0x101ca489u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ca489 push ebp */
  push32((uint32_t)(EBP));
  /* 101ca48a mov ebp, esp */
  EBP = (ESP);
  /* 101ca48c sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ca48f push ebx */
  push32((uint32_t)(EBX));
  /* 101ca490 push esi */
  push32((uint32_t)(ESI));
  /* 101ca491 push edi */
  push32((uint32_t)(EDI));
  /* 101ca492 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101ca494 call 0x101ca0b3 */
  push32(0x101ca499u); f_101ca0b3();
  /* 101ca499 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101ca49c call 0x101ca636 */
  push32(0x101ca4a1u); f_101ca636();
  /* 101ca4a1 mov ebx, eax */
  EBX = (EAX);
  /* 101ca4a3 pop ecx */
  ECX = (pop32());
  /* 101ca4a4 cmp ebx, dword ptr [0x101d6944] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x101d6944))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca4aa pop ecx */
  ECX = (pop32());
  /* 101ca4ab mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101ca4ae jne 0x101ca4b7 */
  if (!C.zf) goto L_101ca4b7;
L_101ca4b0:;
  /* 101ca4b0 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101ca4b2 jmp 0x101ca627 */
  goto L_101ca627;
L_101ca4b7:;
  /* 101ca4b7 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101ca4b9 je 0x101ca615 */
  if (C.zf) goto L_101ca615;
  /* 101ca4bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101ca4c1 mov eax, 0x101d0ce0 */
  EAX = (0x101d0ce0u);
L_101ca4c6:;
  /* 101ca4c6 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca4c8 je 0x101ca53e */
  if (C.zf) goto L_101ca53e;
  /* 101ca4ca add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ca4cd inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 101ca4ce cmp eax, 0x101d0dd0 */
  { uint32_t _a=(EAX),_b=(0x101d0dd0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca4d3 jl 0x101ca4c6 */
  if ((C.sf!=C.of)) goto L_101ca4c6;
  /* 101ca4d5 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 101ca4d8 push eax */
  push32((uint32_t)(EAX));
  /* 101ca4d9 push ebx */
  push32((uint32_t)(EBX));
  /* 101ca4da call dword ptr [0x101ce09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce09c))), 0x101ca4e0u);
  /* 101ca4e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 101ca4e2 pop esi */
  ESI = (pop32());
  /* 101ca4e3 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca4e5 jne 0x101ca60c */
  if (!C.zf) goto L_101ca60c;
  /* 101ca4eb push 0x40 */
  push32((uint32_t)(0x40u));
  /* 101ca4ed and dword ptr [0x101d6b64], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101d6b64)))&(0x0u); w32((uint32_t)(0x101d6b64), (_r)); fl_logic(_r,32); }
  /* 101ca4f4 pop ecx */
  ECX = (pop32());
  /* 101ca4f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ca4f7 mov edi, 0x101d6a60 */
  EDI = (0x101d6a60u);
  /* 101ca4fc cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca4ff rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 101ca501 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 101ca502 mov dword ptr [0x101d6944], ebx */
  w32((uint32_t)(0x101d6944), (EBX));
  /* 101ca508 jbe 0x101ca5f9 */
  if ((C.cf||C.zf)) goto L_101ca5f9;
  /* 101ca50e cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ca512 je 0x101ca5d4 */
  if (C.zf) goto L_101ca5d4;
  /* 101ca518 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_101ca51b:;
  /* 101ca51b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 101ca51d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101ca51f je 0x101ca5d4 */
  if (C.zf) goto L_101ca5d4;
  /* 101ca525 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 101ca529 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_101ca52c:;
  /* 101ca52c cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca52e ja 0x101ca5c8 */
  if ((!C.cf&&!C.zf)) goto L_101ca5c8;
  /* 101ca534 or byte ptr [eax + 0x101d6a61], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101d6a61)))|(0x4u); w8((uint32_t)(EAX + 0x101d6a61), (_r)); fl_logic(_r,8); }
  /* 101ca53b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101ca53c jmp 0x101ca52c */
  goto L_101ca52c;
L_101ca53e:;
  /* 101ca53e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101ca542 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 101ca544 pop ecx */
  ECX = (pop32());
  /* 101ca545 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ca547 mov edi, 0x101d6a60 */
  EDI = (0x101d6a60u);
  /* 101ca54c lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 101ca54f rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 101ca551 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 101ca554 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 101ca555 lea ebx, [esi + 0x101d0cf0] */
  EBX = ((uint32_t)(ESI + 0x101d0cf0));
L_101ca55b:;
  /* 101ca55b cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ca55e mov ecx, ebx */
  ECX = (EBX);
  /* 101ca560 je 0x101ca58e */
  if (C.zf) goto L_101ca58e;
L_101ca562:;
  /* 101ca562 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 101ca565 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101ca567 je 0x101ca58e */
  if (C.zf) goto L_101ca58e;
  /* 101ca569 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 101ca56c movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 101ca56f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca571 ja 0x101ca587 */
  if ((!C.cf&&!C.zf)) goto L_101ca587;
  /* 101ca573 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 101ca576 mov dl, byte ptr [edx + 0x101d0cd8] */
  DL = (r8((uint32_t)(EDX + 0x101d0cd8)));
L_101ca57c:;
  /* 101ca57c or byte ptr [eax + 0x101d6a61], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101d6a61)))|(DL); w8((uint32_t)(EAX + 0x101d6a61), (_r)); fl_logic(_r,8); }
  /* 101ca582 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101ca583 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca585 jbe 0x101ca57c */
  if ((C.cf||C.zf)) goto L_101ca57c;
L_101ca587:;
  /* 101ca587 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101ca588 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101ca589 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ca58c jne 0x101ca562 */
  if (!C.zf) goto L_101ca562;
L_101ca58e:;
  /* 101ca58e inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 101ca591 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ca594 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca598 jb 0x101ca55b */
  if (C.cf) goto L_101ca55b;
  /* 101ca59a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ca59d mov dword ptr [0x101d695c], 1 */
  w32((uint32_t)(0x101d695c), (0x1u));
  /* 101ca5a7 push eax */
  push32((uint32_t)(EAX));
  /* 101ca5a8 mov dword ptr [0x101d6944], eax */
  w32((uint32_t)(0x101d6944), (EAX));
  /* 101ca5ad call 0x101ca680 */
  push32(0x101ca5b2u); f_101ca680();
  /* 101ca5b2 lea esi, [esi + 0x101d0ce4] */
  ESI = ((uint32_t)(ESI + 0x101d0ce4));
  /* 101ca5b8 mov edi, 0x101d6950 */
  EDI = (0x101d6950u);
  /* 101ca5bd movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101ca5be movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101ca5bf pop ecx */
  ECX = (pop32());
  /* 101ca5c0 mov dword ptr [0x101d6b64], eax */
  w32((uint32_t)(0x101d6b64), (EAX));
  /* 101ca5c5 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101ca5c6 jmp 0x101ca61a */
  goto L_101ca61a;
L_101ca5c8:;
  /* 101ca5c8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101ca5c9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101ca5ca cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ca5ce jne 0x101ca51b */
  if (!C.zf) goto L_101ca51b;
L_101ca5d4:;
  /* 101ca5d4 mov eax, esi */
  EAX = (ESI);
L_101ca5d6:;
  /* 101ca5d6 or byte ptr [eax + 0x101d6a61], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101d6a61)))|(0x8u); w8((uint32_t)(EAX + 0x101d6a61), (_r)); fl_logic(_r,8); }
  /* 101ca5dd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101ca5de cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca5e3 jb 0x101ca5d6 */
  if (C.cf) goto L_101ca5d6;
  /* 101ca5e5 push ebx */
  push32((uint32_t)(EBX));
  /* 101ca5e6 call 0x101ca680 */
  push32(0x101ca5ebu); f_101ca680();
  /* 101ca5eb pop ecx */
  ECX = (pop32());
  /* 101ca5ec mov dword ptr [0x101d6b64], eax */
  w32((uint32_t)(0x101d6b64), (EAX));
  /* 101ca5f1 mov dword ptr [0x101d695c], esi */
  w32((uint32_t)(0x101d695c), (ESI));
  /* 101ca5f7 jmp 0x101ca600 */
  goto L_101ca600;
L_101ca5f9:;
  /* 101ca5f9 and dword ptr [0x101d695c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101d695c)))&(0x0u); w32((uint32_t)(0x101d695c), (_r)); fl_logic(_r,32); }
L_101ca600:;
  /* 101ca600 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ca602 mov edi, 0x101d6950 */
  EDI = (0x101d6950u);
  /* 101ca607 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101ca608 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101ca609 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101ca60a jmp 0x101ca61a */
  goto L_101ca61a;
L_101ca60c:;
  /* 101ca60c cmp dword ptr [0x101d6780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101d6780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca613 je 0x101ca624 */
  if (C.zf) goto L_101ca624;
L_101ca615:;
  /* 101ca615 call 0x101ca6b3 */
  push32(0x101ca61au); f_101ca6b3();
L_101ca61a:;
  /* 101ca61a call 0x101ca6dc */
  push32(0x101ca61fu); f_101ca6dc();
  /* 101ca61f jmp 0x101ca4b0 */
  goto L_101ca4b0;
L_101ca624:;
  /* 101ca624 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_101ca627:;
  /* 101ca627 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101ca629 call 0x101ca114 */
  push32(0x101ca62eu); f_101ca114();
  /* 101ca62e pop ecx */
  ECX = (pop32());
  /* 101ca62f mov eax, esi */
  EAX = (ESI);
  /* 101ca631 pop edi */
  EDI = (pop32());
  /* 101ca632 pop esi */
  ESI = (pop32());
  /* 101ca633 pop ebx */
  EBX = (pop32());
  /* 101ca634 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101ca635 ret  */
  ESPCHK(0x101ca489u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a636 @ 0x101ca636 (74 bytes, 15 insns) */
void f_101ca636(void) {
  FTRACE(0x101ca636u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ca636 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101ca63a and dword ptr [0x101d6780], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101d6780)))&(0x0u); w32((uint32_t)(0x101d6780), (_r)); fl_logic(_r,32); }
  /* 101ca641 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca644 jne 0x101ca656 */
  if (!C.zf) goto L_101ca656;
  /* 101ca646 mov dword ptr [0x101d6780], 1 */
  w32((uint32_t)(0x101d6780), (0x1u));
  /* 101ca650 jmp dword ptr [0x101ce0a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101ce0a4)))); return;
L_101ca656:;
  /* 101ca656 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca659 jne 0x101ca66b */
  if (!C.zf) goto L_101ca66b;
  /* 101ca65b mov dword ptr [0x101d6780], 1 */
  w32((uint32_t)(0x101d6780), (0x1u));
  /* 101ca665 jmp dword ptr [0x101ce0a0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101ce0a0)))); return;
L_101ca66b:;
  /* 101ca66b cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca66e jne 0x101ca67f */
  if (!C.zf) goto L_101ca67f;
  /* 101ca670 mov eax, dword ptr [0x101d67b8] */
  EAX = (r32((uint32_t)(0x101d67b8)));
  /* 101ca675 mov dword ptr [0x101d6780], 1 */
  w32((uint32_t)(0x101d6780), (0x1u));
L_101ca67f:;
  /* 101ca67f ret  */
  ESPCHK(0x101ca636u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a680 @ 0x101ca680 (51 bytes, 19 insns) */
void f_101ca680(void) {
  FTRACE(0x101ca680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ca680 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101ca684 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ca689 je 0x101ca6ad */
  if (C.zf) goto L_101ca6ad;
  /* 101ca68b sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ca68e je 0x101ca6a7 */
  if (C.zf) goto L_101ca6a7;
  /* 101ca690 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ca693 je 0x101ca6a1 */
  if (C.zf) goto L_101ca6a1;
  /* 101ca695 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101ca696 je 0x101ca69b */
  if (C.zf) goto L_101ca69b;
  /* 101ca698 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ca69a ret  */
  ESPCHK(0x101ca680u, _esp0);
  ESP += 4; return;
L_101ca69b:;
  /* 101ca69b mov eax, 0x404 */
  EAX = (0x404u);
  /* 101ca6a0 ret  */
  ESPCHK(0x101ca680u, _esp0);
  ESP += 4; return;
L_101ca6a1:;
  /* 101ca6a1 mov eax, 0x412 */
  EAX = (0x412u);
  /* 101ca6a6 ret  */
  ESPCHK(0x101ca680u, _esp0);
  ESP += 4; return;
L_101ca6a7:;
  /* 101ca6a7 mov eax, 0x804 */
  EAX = (0x804u);
  /* 101ca6ac ret  */
  ESPCHK(0x101ca680u, _esp0);
  ESP += 4; return;
L_101ca6ad:;
  /* 101ca6ad mov eax, 0x411 */
  EAX = (0x411u);
  /* 101ca6b2 ret  */
  ESPCHK(0x101ca680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6b3 @ 0x101ca6b3 (41 bytes, 17 insns) */
void f_101ca6b3(void) {
  FTRACE(0x101ca6b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ca6b3 push edi */
  push32((uint32_t)(EDI));
  /* 101ca6b4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 101ca6b6 pop ecx */
  ECX = (pop32());
  /* 101ca6b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ca6b9 mov edi, 0x101d6a60 */
  EDI = (0x101d6a60u);
  /* 101ca6be rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 101ca6c0 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 101ca6c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ca6c3 mov edi, 0x101d6950 */
  EDI = (0x101d6950u);
  /* 101ca6c8 mov dword ptr [0x101d6944], eax */
  w32((uint32_t)(0x101d6944), (EAX));
  /* 101ca6cd mov dword ptr [0x101d695c], eax */
  w32((uint32_t)(0x101d695c), (EAX));
  /* 101ca6d2 mov dword ptr [0x101d6b64], eax */
  w32((uint32_t)(0x101d6b64), (EAX));
  /* 101ca6d7 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101ca6d8 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101ca6d9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101ca6da pop edi */
  EDI = (pop32());
  /* 101ca6db ret  */
  ESPCHK(0x101ca6b3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6dc @ 0x101ca6dc (389 bytes, 124 insns) */
void f_101ca6dc(void) {
  FTRACE(0x101ca6dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ca6dc push ebp */
  push32((uint32_t)(EBP));
  /* 101ca6dd mov ebp, esp */
  EBP = (ESP);
  /* 101ca6df sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ca6e5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101ca6e8 push esi */
  push32((uint32_t)(ESI));
  /* 101ca6e9 push eax */
  push32((uint32_t)(EAX));
  /* 101ca6ea push dword ptr [0x101d6944] */
  push32((uint32_t)(r32((uint32_t)(0x101d6944))));
  /* 101ca6f0 call dword ptr [0x101ce09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce09c))), 0x101ca6f6u);
  /* 101ca6f6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca6f9 jne 0x101ca815 */
  if (!C.zf) goto L_101ca815;
  /* 101ca6ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ca701 mov esi, 0x100 */
  ESI = (0x100u);
L_101ca706:;
  /* 101ca706 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 101ca70d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101ca70e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca710 jb 0x101ca706 */
  if (C.cf) goto L_101ca706;
  /* 101ca712 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 101ca715 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 101ca71c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101ca71e je 0x101ca757 */
  if (C.zf) goto L_101ca757;
  /* 101ca720 push ebx */
  push32((uint32_t)(EBX));
  /* 101ca721 push edi */
  push32((uint32_t)(EDI));
  /* 101ca722 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_101ca725:;
  /* 101ca725 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 101ca728 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 101ca72b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca72d ja 0x101ca74c */
  if ((!C.cf&&!C.zf)) goto L_101ca74c;
  /* 101ca72f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ca731 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 101ca738 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101ca739 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 101ca73e mov ebx, ecx */
  EBX = (ECX);
  /* 101ca740 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101ca743 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 101ca745 mov ecx, ebx */
  ECX = (EBX);
  /* 101ca747 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 101ca74a rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_101ca74c:;
  /* 101ca74c inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 101ca74d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 101ca74e mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 101ca751 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101ca753 jne 0x101ca725 */
  if (!C.zf) goto L_101ca725;
  /* 101ca755 pop edi */
  EDI = (pop32());
  /* 101ca756 pop ebx */
  EBX = (pop32());
L_101ca757:;
  /* 101ca757 push 0 */
  push32((uint32_t)(0x0u));
  /* 101ca759 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 101ca75f push dword ptr [0x101d6b64] */
  push32((uint32_t)(r32((uint32_t)(0x101d6b64))));
  /* 101ca765 push dword ptr [0x101d6944] */
  push32((uint32_t)(r32((uint32_t)(0x101d6944))));
  /* 101ca76b push eax */
  push32((uint32_t)(EAX));
  /* 101ca76c lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 101ca772 push esi */
  push32((uint32_t)(ESI));
  /* 101ca773 push eax */
  push32((uint32_t)(EAX));
  /* 101ca774 push 1 */
  push32((uint32_t)(0x1u));
  /* 101ca776 call 0x101cc31d */
  push32(0x101ca77bu); f_101cc31d();
  /* 101ca77b push 0 */
  push32((uint32_t)(0x0u));
  /* 101ca77d lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 101ca783 push dword ptr [0x101d6944] */
  push32((uint32_t)(r32((uint32_t)(0x101d6944))));
  /* 101ca789 push esi */
  push32((uint32_t)(ESI));
  /* 101ca78a push eax */
  push32((uint32_t)(EAX));
  /* 101ca78b lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 101ca791 push esi */
  push32((uint32_t)(ESI));
  /* 101ca792 push eax */
  push32((uint32_t)(EAX));
  /* 101ca793 push esi */
  push32((uint32_t)(ESI));
  /* 101ca794 push dword ptr [0x101d6b64] */
  push32((uint32_t)(r32((uint32_t)(0x101d6b64))));
  /* 101ca79a call 0x101cc466 */
  push32(0x101ca79fu); f_101cc466();
  /* 101ca79f push 0 */
  push32((uint32_t)(0x0u));
  /* 101ca7a1 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 101ca7a7 push dword ptr [0x101d6944] */
  push32((uint32_t)(r32((uint32_t)(0x101d6944))));
  /* 101ca7ad push esi */
  push32((uint32_t)(ESI));
  /* 101ca7ae push eax */
  push32((uint32_t)(EAX));
  /* 101ca7af lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 101ca7b5 push esi */
  push32((uint32_t)(ESI));
  /* 101ca7b6 push eax */
  push32((uint32_t)(EAX));
  /* 101ca7b7 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 101ca7bc push dword ptr [0x101d6b64] */
  push32((uint32_t)(r32((uint32_t)(0x101d6b64))));
  /* 101ca7c2 call 0x101cc466 */
  push32(0x101ca7c7u); f_101cc466();
  /* 101ca7c7 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ca7ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ca7cc lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_101ca7d2:;
  /* 101ca7d2 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 101ca7d5 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 101ca7d8 je 0x101ca7f0 */
  if (C.zf) goto L_101ca7f0;
  /* 101ca7da or byte ptr [eax + 0x101d6a61], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101d6a61)))|(0x10u); w8((uint32_t)(EAX + 0x101d6a61), (_r)); fl_logic(_r,8); }
  /* 101ca7e1 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_101ca7e8:;
  /* 101ca7e8 mov byte ptr [eax + 0x101d6960], dl */
  w8((uint32_t)(EAX + 0x101d6960), (DL));
  /* 101ca7ee jmp 0x101ca80c */
  goto L_101ca80c;
L_101ca7f0:;
  /* 101ca7f0 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 101ca7f3 je 0x101ca805 */
  if (C.zf) goto L_101ca805;
  /* 101ca7f5 or byte ptr [eax + 0x101d6a61], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101d6a61)))|(0x20u); w8((uint32_t)(EAX + 0x101d6a61), (_r)); fl_logic(_r,8); }
  /* 101ca7fc mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 101ca803 jmp 0x101ca7e8 */
  goto L_101ca7e8;
L_101ca805:;
  /* 101ca805 and byte ptr [eax + 0x101d6960], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101d6960)))&(0x0u); w8((uint32_t)(EAX + 0x101d6960), (_r)); fl_logic(_r,8); }
L_101ca80c:;
  /* 101ca80c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101ca80d inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101ca80e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101ca80f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca811 jb 0x101ca7d2 */
  if (C.cf) goto L_101ca7d2;
  /* 101ca813 jmp 0x101ca85e */
  goto L_101ca85e;
L_101ca815:;
  /* 101ca815 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ca817 mov esi, 0x100 */
  ESI = (0x100u);
L_101ca81c:;
  /* 101ca81c cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca81f jb 0x101ca83a */
  if (C.cf) goto L_101ca83a;
  /* 101ca821 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca824 ja 0x101ca83a */
  if ((!C.cf&&!C.zf)) goto L_101ca83a;
  /* 101ca826 or byte ptr [eax + 0x101d6a61], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101d6a61)))|(0x10u); w8((uint32_t)(EAX + 0x101d6a61), (_r)); fl_logic(_r,8); }
  /* 101ca82d mov cl, al */
  CL = (AL);
  /* 101ca82f add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_101ca832:;
  /* 101ca832 mov byte ptr [eax + 0x101d6960], cl */
  w8((uint32_t)(EAX + 0x101d6960), (CL));
  /* 101ca838 jmp 0x101ca859 */
  goto L_101ca859;
L_101ca83a:;
  /* 101ca83a cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca83d jb 0x101ca852 */
  if (C.cf) goto L_101ca852;
  /* 101ca83f cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca842 ja 0x101ca852 */
  if ((!C.cf&&!C.zf)) goto L_101ca852;
  /* 101ca844 or byte ptr [eax + 0x101d6a61], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101d6a61)))|(0x20u); w8((uint32_t)(EAX + 0x101d6a61), (_r)); fl_logic(_r,8); }
  /* 101ca84b mov cl, al */
  CL = (AL);
  /* 101ca84d sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101ca850 jmp 0x101ca832 */
  goto L_101ca832;
L_101ca852:;
  /* 101ca852 and byte ptr [eax + 0x101d6960], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101d6960)))&(0x0u); w8((uint32_t)(EAX + 0x101d6960), (_r)); fl_logic(_r,8); }
L_101ca859:;
  /* 101ca859 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101ca85a cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca85c jb 0x101ca81c */
  if (C.cf) goto L_101ca81c;
L_101ca85e:;
  /* 101ca85e pop esi */
  ESI = (pop32());
  /* 101ca85f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101ca860 ret  */
  ESPCHK(0x101ca6dcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a861 @ 0x101ca861 (28 bytes, 7 insns) */
void f_101ca861(void) {
  FTRACE(0x101ca861u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ca861 cmp dword ptr [0x101d7ca8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101d7ca8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca868 jne 0x101ca87c */
  if (!C.zf) goto L_101ca87c;
  /* 101ca86a push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 101ca86c call 0x101ca489 */
  push32(0x101ca871u); f_101ca489();
  /* 101ca871 pop ecx */
  ECX = (pop32());
  /* 101ca872 mov dword ptr [0x101d7ca8], 1 */
  w32((uint32_t)(0x101d7ca8), (0x1u));
L_101ca87c:;
  /* 101ca87c ret  */
  ESPCHK(0x101ca861u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a880 @ 0x101ca880 (664 bytes, 266 insns) [15 switch table(s)] */
void f_101ca880(void) {
  FTRACE(0x101ca880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ca880 push ebp */
  push32((uint32_t)(EBP));
  /* 101ca881 mov ebp, esp */
  EBP = (ESP);
  /* 101ca883 push edi */
  push32((uint32_t)(EDI));
  /* 101ca884 push esi */
  push32((uint32_t)(ESI));
  /* 101ca885 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101ca888 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 101ca88b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 101ca88e mov eax, ecx */
  EAX = (ECX);
  /* 101ca890 mov edx, ecx */
  EDX = (ECX);
  /* 101ca892 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ca894 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca896 jbe 0x101ca8a0 */
  if ((C.cf||C.zf)) goto L_101ca8a0;
  /* 101ca898 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca89a jb 0x101caa18 */
  if (C.cf) goto L_101caa18;
L_101ca8a0:;
  /* 101ca8a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 101ca8a6 jne 0x101ca8bc */
  if (!C.zf) goto L_101ca8bc;
  /* 101ca8a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101ca8ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 101ca8ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca8b1 jb 0x101ca8dc */
  if (C.cf) goto L_101ca8dc;
  /* 101ca8b3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101ca8b5 jmp dword ptr [edx*4 + 0x101ca9c8] */
  switch (EDX) {
    case 0: goto L_101ca9d8;
    case 1: goto L_101ca9e0;
    case 2: goto L_101ca9ec;
    case 3: goto L_101caa00;
    default: x86_unimpl("switch@0x101ca8b5 out of table"); return;
  }
L_101ca8bc:;
  /* 101ca8bc mov eax, edi */
  EAX = (EDI);
  /* 101ca8be mov edx, 3 */
  EDX = (0x3u);
  /* 101ca8c3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ca8c6 jb 0x101ca8d4 */
  if (C.cf) goto L_101ca8d4;
  /* 101ca8c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 101ca8cb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ca8cd jmp dword ptr [eax*4 + 0x101ca8e0] */
  switch (EAX) {
    case 1: goto L_101ca8f0;
    case 2: goto L_101ca91c;
    case 3: goto L_101ca940;
    default: x86_unimpl("switch@0x101ca8cd out of table"); return;
  }
L_101ca8d4:;
  /* 101ca8d4 jmp dword ptr [ecx*4 + 0x101ca9d8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x101ca9d8)))); return;
  /* 101ca8db nop  */
  /* nop */
L_101ca8dc:;
  /* 101ca8dc jmp dword ptr [ecx*4 + 0x101ca95c] */
  switch (ECX) {
    case 0: goto L_101ca9bf;
    case 1: goto L_101ca9ac;
    case 2: goto L_101ca9a4;
    case 3: goto L_101ca99c;
    case 4: goto L_101ca994;
    case 5: goto L_101ca98c;
    case 6: goto L_101ca984;
    case 7: goto L_101ca97c;
    default: x86_unimpl("switch@0x101ca8dc out of table"); return;
  }
  /* 101ca8e3 nop  */
  /* nop */
L_101ca8f0:;
  /* 101ca8f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101ca8f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101ca8f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101ca8f6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101ca8f9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101ca8fc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101ca8ff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101ca902 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101ca905 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101ca908 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101ca90b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca90e jb 0x101ca8dc */
  if (C.cf) goto L_101ca8dc;
  /* 101ca910 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101ca912 jmp dword ptr [edx*4 + 0x101ca9c8] */
  switch (EDX) {
    case 0: goto L_101ca9d8;
    case 1: goto L_101ca9e0;
    case 2: goto L_101ca9ec;
    case 3: goto L_101caa00;
    default: x86_unimpl("switch@0x101ca912 out of table"); return;
  }
  /* 101ca919 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101ca91c:;
  /* 101ca91c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101ca91e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101ca920 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101ca922 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101ca925 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101ca928 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101ca92b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101ca92e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101ca931 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca934 jb 0x101ca8dc */
  if (C.cf) goto L_101ca8dc;
  /* 101ca936 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101ca938 jmp dword ptr [edx*4 + 0x101ca9c8] */
  switch (EDX) {
    case 0: goto L_101ca9d8;
    case 1: goto L_101ca9e0;
    case 2: goto L_101ca9ec;
    case 3: goto L_101caa00;
    default: x86_unimpl("switch@0x101ca938 out of table"); return;
  }
  /* 101ca93f nop  */
  /* nop */
L_101ca940:;
  /* 101ca940 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101ca942 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101ca944 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101ca946 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101ca947 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101ca94a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101ca94b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ca94e jb 0x101ca8dc */
  if (C.cf) goto L_101ca8dc;
  /* 101ca950 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101ca952 jmp dword ptr [edx*4 + 0x101ca9c8] */
  switch (EDX) {
    case 0: goto L_101ca9d8;
    case 1: goto L_101ca9e0;
    case 2: goto L_101ca9ec;
    case 3: goto L_101caa00;
    default: x86_unimpl("switch@0x101ca952 out of table"); return;
  }
  /* 101ca959 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101ca97c:;
  /* 101ca97c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 101ca980 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_101ca984:;
  /* 101ca984 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 101ca988 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_101ca98c:;
  /* 101ca98c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 101ca990 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_101ca994:;
  /* 101ca994 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 101ca998 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_101ca99c:;
  /* 101ca99c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 101ca9a0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_101ca9a4:;
  /* 101ca9a4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 101ca9a8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_101ca9ac:;
  /* 101ca9ac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 101ca9b0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 101ca9b4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 101ca9bb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101ca9bd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_101ca9bf:;
  /* 101ca9bf jmp dword ptr [edx*4 + 0x101ca9c8] */
  switch (EDX) {
    case 0: goto L_101ca9d8;
    case 1: goto L_101ca9e0;
    case 2: goto L_101ca9ec;
    case 3: goto L_101caa00;
    default: x86_unimpl("switch@0x101ca9bf out of table"); return;
  }
  /* 101ca9c6 mov edi, edi */
  EDI = (EDI);
L_101ca9d8:;
  /* 101ca9d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ca9db pop esi */
  ESI = (pop32());
  /* 101ca9dc pop edi */
  EDI = (pop32());
  /* 101ca9dd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101ca9de ret  */
  ESPCHK(0x101ca880u, _esp0);
  ESP += 4; return;
  /* 101ca9df nop  */
  /* nop */
L_101ca9e0:;
  /* 101ca9e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101ca9e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101ca9e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ca9e7 pop esi */
  ESI = (pop32());
  /* 101ca9e8 pop edi */
  EDI = (pop32());
  /* 101ca9e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101ca9ea ret  */
  ESPCHK(0x101ca880u, _esp0);
  ESP += 4; return;
  /* 101ca9eb nop  */
  /* nop */
L_101ca9ec:;
  /* 101ca9ec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101ca9ee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101ca9f0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101ca9f3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101ca9f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101ca9f9 pop esi */
  ESI = (pop32());
  /* 101ca9fa pop edi */
  EDI = (pop32());
  /* 101ca9fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101ca9fc ret  */
  ESPCHK(0x101ca880u, _esp0);
  ESP += 4; return;
  /* 101ca9fd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101caa00:;
  /* 101caa00 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101caa02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101caa04 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101caa07 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101caa0a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101caa0d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101caa10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101caa13 pop esi */
  ESI = (pop32());
  /* 101caa14 pop edi */
  EDI = (pop32());
  /* 101caa15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101caa16 ret  */
  ESPCHK(0x101ca880u, _esp0);
  ESP += 4; return;
  /* 101caa17 nop  */
  /* nop */
L_101caa18:;
  /* 101caa18 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 101caa1c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 101caa20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 101caa26 jne 0x101caa4c */
  if (!C.zf) goto L_101caa4c;
  /* 101caa28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101caa2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 101caa2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101caa31 jb 0x101caa40 */
  if (C.cf) goto L_101caa40;
  /* 101caa33 std  */
  C.df=1;
  /* 101caa34 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101caa36 cld  */
  C.df=0;
  /* 101caa37 jmp dword ptr [edx*4 + 0x101cab60] */
  switch (EDX) {
    case 0: goto L_101cab70;
    case 1: goto L_101cab78;
    case 2: goto L_101cab88;
    case 3: goto L_101cab9c;
    default: x86_unimpl("switch@0x101caa37 out of table"); return;
  }
  /* 101caa3e mov edi, edi */
  EDI = (EDI);
L_101caa40:;
  /* 101caa40 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 101caa42 jmp dword ptr [ecx*4 + 0x101cab10] */
  switch (ECX) {
    case 0: goto L_101cab57;
    default: x86_unimpl("switch@0x101caa42 out of table"); return;
  }
  /* 101caa49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101caa4c:;
  /* 101caa4c mov eax, edi */
  EAX = (EDI);
  /* 101caa4e mov edx, 3 */
  EDX = (0x3u);
  /* 101caa53 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101caa56 jb 0x101caa64 */
  if (C.cf) goto L_101caa64;
  /* 101caa58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 101caa5b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101caa5d jmp dword ptr [eax*4 + 0x101caa68] */
  switch (EAX) {
    case 1: goto L_101caa78;
    case 2: goto L_101caa98;
    case 3: goto L_101caac0;
    default: x86_unimpl("switch@0x101caa5d out of table"); return;
  }
L_101caa64:;
  /* 101caa64 jmp dword ptr [ecx*4 + 0x101cab60] */
  switch (ECX) {
    case 0: goto L_101cab70;
    case 1: goto L_101cab78;
    case 2: goto L_101cab88;
    case 3: goto L_101cab9c;
    default: x86_unimpl("switch@0x101caa64 out of table"); return;
  }
  /* 101caa6b nop  */
  /* nop */
L_101caa78:;
  /* 101caa78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101caa7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101caa7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101caa80 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101caa81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101caa84 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101caa85 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101caa88 jb 0x101caa40 */
  if (C.cf) goto L_101caa40;
  /* 101caa8a std  */
  C.df=1;
  /* 101caa8b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101caa8d cld  */
  C.df=0;
  /* 101caa8e jmp dword ptr [edx*4 + 0x101cab60] */
  switch (EDX) {
    case 0: goto L_101cab70;
    case 1: goto L_101cab78;
    case 2: goto L_101cab88;
    case 3: goto L_101cab9c;
    default: x86_unimpl("switch@0x101caa8e out of table"); return;
  }
  /* 101caa95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101caa98:;
  /* 101caa98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101caa9b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101caa9d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101caaa0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101caaa3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101caaa6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101caaa9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101caaac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101caaaf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101caab2 jb 0x101caa40 */
  if (C.cf) goto L_101caa40;
  /* 101caab4 std  */
  C.df=1;
  /* 101caab5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101caab7 cld  */
  C.df=0;
  /* 101caab8 jmp dword ptr [edx*4 + 0x101cab60] */
  switch (EDX) {
    case 0: goto L_101cab70;
    case 1: goto L_101cab78;
    case 2: goto L_101cab88;
    case 3: goto L_101cab9c;
    default: x86_unimpl("switch@0x101caab8 out of table"); return;
  }
  /* 101caabf nop  */
  /* nop */
L_101caac0:;
  /* 101caac0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101caac3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101caac5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101caac8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101caacb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101caace mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101caad1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101caad4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101caad7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101caada sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101caadd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101caae0 jb 0x101caa40 */
  if (C.cf) goto L_101caa40;
  /* 101caae6 std  */
  C.df=1;
  /* 101caae7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101caae9 cld  */
  C.df=0;
  /* 101caaea jmp dword ptr [edx*4 + 0x101cab60] */
  switch (EDX) {
    case 0: goto L_101cab70;
    case 1: goto L_101cab78;
    case 2: goto L_101cab88;
    case 3: goto L_101cab9c;
    default: x86_unimpl("switch@0x101caaea out of table"); return;
  }
  /* 101caaf1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 101caaf4 adc al, 0xab */
  { uint32_t _a=(AL),_b=(0xabu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 101caaf6 sbb al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101caaf8 sbb al, 0xab */
  { uint32_t _a=(AL),_b=(0xabu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101caafa sbb al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101caafc and al, 0xab */
  { uint32_t _r=(AL)&(0xabu); AL = (_r); fl_logic(_r,8); }
  /* 101caafe sbb al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101cab00 sub al, 0xab */
  { uint32_t _a=(AL),_b=(0xabu),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101cab02 sbb al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101cab04 xor al, 0xab */
  { uint32_t _r=(AL)^(0xabu); AL = (_r); fl_logic(_r,8); }
  /* 101cab06 sbb al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101cab08 cmp al, 0xab */
  { uint32_t _a=(AL),_b=(0xabu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cab0a sbb al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101cab0c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 101cab0d stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101cab0e sbb al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101cab14 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 101cab18 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 101cab1c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 101cab20 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 101cab24 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 101cab28 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 101cab2c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 101cab30 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 101cab34 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 101cab38 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 101cab3c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 101cab40 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 101cab44 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 101cab48 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 101cab4c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 101cab53 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101cab55 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_101cab57:;
  /* 101cab57 jmp dword ptr [edx*4 + 0x101cab60] */
  switch (EDX) {
    case 0: goto L_101cab70;
    case 1: goto L_101cab78;
    case 2: goto L_101cab88;
    case 3: goto L_101cab9c;
    default: x86_unimpl("switch@0x101cab57 out of table"); return;
  }
  /* 101cab5e mov edi, edi */
  EDI = (EDI);
L_101cab70:;
  /* 101cab70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cab73 pop esi */
  ESI = (pop32());
  /* 101cab74 pop edi */
  EDI = (pop32());
  /* 101cab75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101cab76 ret  */
  ESPCHK(0x101ca880u, _esp0);
  ESP += 4; return;
  /* 101cab77 nop  */
  /* nop */
L_101cab78:;
  /* 101cab78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101cab7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101cab7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cab81 pop esi */
  ESI = (pop32());
  /* 101cab82 pop edi */
  EDI = (pop32());
  /* 101cab83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101cab84 ret  */
  ESPCHK(0x101ca880u, _esp0);
  ESP += 4; return;
  /* 101cab85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101cab88:;
  /* 101cab88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101cab8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101cab8e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101cab91 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101cab94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cab97 pop esi */
  ESI = (pop32());
  /* 101cab98 pop edi */
  EDI = (pop32());
  /* 101cab99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101cab9a ret  */
  ESPCHK(0x101ca880u, _esp0);
  ESP += 4; return;
  /* 101cab9b nop  */
  /* nop */
L_101cab9c:;
  /* 101cab9c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101cab9f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101caba2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101caba5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101caba8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101cabab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101cabae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cabb1 pop esi */
  ESI = (pop32());
  /* 101cabb2 pop edi */
  EDI = (pop32());
  /* 101cabb3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101cabb4 ret  */
  ESPCHK(0x101ca880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abb5 @ 0x101cabb5 (23 bytes, 7 insns) */
void f_101cabb5(void) {
  FTRACE(0x101cabb5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cabb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 101cabb7 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 101cabbb push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 101cabbf push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 101cabc3 call 0x101cabcc */
  push32(0x101cabc8u); f_101cabcc();
  /* 101cabc8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cabcb ret  */
  ESPCHK(0x101cabb5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abcc @ 0x101cabcc (517 bytes, 195 insns) */
void f_101cabcc(void) {
  FTRACE(0x101cabccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cabcc push ebp */
  push32((uint32_t)(EBP));
  /* 101cabcd mov ebp, esp */
  EBP = (ESP);
  /* 101cabcf sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cabd2 push ebx */
  push32((uint32_t)(EBX));
  /* 101cabd3 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 101cabd7 push esi */
  push32((uint32_t)(ESI));
  /* 101cabd8 push edi */
  push32((uint32_t)(EDI));
  /* 101cabd9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 101cabdc mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101cabde lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 101cabe1 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_101cabe4:;
  /* 101cabe4 cmp dword ptr [0x101d0b50], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101d0b50))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cabeb jle 0x101cabfc */
  if ((C.zf||C.sf!=C.of)) goto L_101cabfc;
  /* 101cabed movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101cabf0 push 8 */
  push32((uint32_t)(0x8u));
  /* 101cabf2 push eax */
  push32((uint32_t)(EAX));
  /* 101cabf3 call 0x101c946b */
  push32(0x101cabf8u); f_101c946b();
  /* 101cabf8 pop ecx */
  ECX = (pop32());
  /* 101cabf9 pop ecx */
  ECX = (pop32());
  /* 101cabfa jmp 0x101cac0b */
  goto L_101cac0b;
L_101cabfc:;
  /* 101cabfc mov ecx, dword ptr [0x101d0940] */
  ECX = (r32((uint32_t)(0x101d0940)));
  /* 101cac02 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101cac05 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 101cac08 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_101cac0b:;
  /* 101cac0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cac0d je 0x101cac14 */
  if (C.zf) goto L_101cac14;
  /* 101cac0f mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 101cac11 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101cac12 jmp 0x101cabe4 */
  goto L_101cabe4;
L_101cac14:;
  /* 101cac14 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cac17 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 101cac1a jne 0x101cac22 */
  if (!C.zf) goto L_101cac22;
  /* 101cac1c or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 101cac20 jmp 0x101cac27 */
  goto L_101cac27;
L_101cac22:;
  /* 101cac22 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cac25 jne 0x101cac2d */
  if (!C.zf) goto L_101cac2d;
L_101cac27:;
  /* 101cac27 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 101cac29 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101cac2a mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_101cac2d:;
  /* 101cac2d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 101cac30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cac32 jl 0x101cadc1 */
  if ((C.sf!=C.of)) goto L_101cadc1;
  /* 101cac38 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cac3b je 0x101cadc1 */
  if (C.zf) goto L_101cadc1;
  /* 101cac41 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cac44 jg 0x101cadc1 */
  if ((!C.zf&&C.sf==C.of)) goto L_101cadc1;
  /* 101cac4a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 101cac4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cac4e pop ecx */
  ECX = (pop32());
  /* 101cac4f jne 0x101cac75 */
  if (!C.zf) goto L_101cac75;
  /* 101cac51 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cac54 je 0x101cac5f */
  if (C.zf) goto L_101cac5f;
  /* 101cac56 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 101cac5d jmp 0x101cac91 */
  goto L_101cac91;
L_101cac5f:;
  /* 101cac5f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101cac61 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cac63 je 0x101cac72 */
  if (C.zf) goto L_101cac72;
  /* 101cac65 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cac67 je 0x101cac72 */
  if (C.zf) goto L_101cac72;
  /* 101cac69 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 101cac70 jmp 0x101cac91 */
  goto L_101cac91;
L_101cac72:;
  /* 101cac72 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_101cac75:;
  /* 101cac75 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cac78 jne 0x101cac91 */
  if (!C.zf) goto L_101cac91;
  /* 101cac7a cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cac7d jne 0x101cac91 */
  if (!C.zf) goto L_101cac91;
  /* 101cac7f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101cac81 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cac83 je 0x101cac89 */
  if (C.zf) goto L_101cac89;
  /* 101cac85 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cac87 jne 0x101cac91 */
  if (!C.zf) goto L_101cac91;
L_101cac89:;
  /* 101cac89 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 101cac8c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101cac8d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101cac8e mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_101cac91:;
  /* 101cac91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101cac94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101cac96 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101cac99 mov edi, 0x103 */
  EDI = (0x103u);
  /* 101cac9e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_101caca1:;
  /* 101caca1 cmp dword ptr [0x101d0b50], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101d0b50))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101caca8 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 101cacab jle 0x101cacb9 */
  if ((C.zf||C.sf!=C.of)) goto L_101cacb9;
  /* 101cacad push 4 */
  push32((uint32_t)(0x4u));
  /* 101cacaf push esi */
  push32((uint32_t)(ESI));
  /* 101cacb0 call 0x101c946b */
  push32(0x101cacb5u); f_101c946b();
  /* 101cacb5 pop ecx */
  ECX = (pop32());
  /* 101cacb6 pop ecx */
  ECX = (pop32());
  /* 101cacb7 jmp 0x101cacc4 */
  goto L_101cacc4;
L_101cacb9:;
  /* 101cacb9 mov eax, dword ptr [0x101d0940] */
  EAX = (r32((uint32_t)(0x101d0940)));
  /* 101cacbe mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 101cacc1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_101cacc4:;
  /* 101cacc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cacc6 je 0x101cacd0 */
  if (C.zf) goto L_101cacd0;
  /* 101cacc8 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101caccb sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cacce jmp 0x101cad02 */
  goto L_101cad02;
L_101cacd0:;
  /* 101cacd0 cmp dword ptr [0x101d0b50], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101d0b50))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cacd7 jle 0x101cace4 */
  if ((C.zf||C.sf!=C.of)) goto L_101cace4;
  /* 101cacd9 push edi */
  push32((uint32_t)(EDI));
  /* 101cacda push esi */
  push32((uint32_t)(ESI));
  /* 101cacdb call 0x101c946b */
  push32(0x101cace0u); f_101c946b();
  /* 101cace0 pop ecx */
  ECX = (pop32());
  /* 101cace1 pop ecx */
  ECX = (pop32());
  /* 101cace2 jmp 0x101cacef */
  goto L_101cacef;
L_101cace4:;
  /* 101cace4 mov eax, dword ptr [0x101d0940] */
  EAX = (r32((uint32_t)(0x101d0940)));
  /* 101cace9 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 101caced and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_101cacef:;
  /* 101cacef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cacf1 je 0x101cad3d */
  if (C.zf) goto L_101cad3d;
  /* 101cacf3 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101cacf6 push eax */
  push32((uint32_t)(EAX));
  /* 101cacf7 call 0x101cd1a8 */
  push32(0x101cacfcu); f_101cd1a8();
  /* 101cacfc pop ecx */
  ECX = (pop32());
  /* 101cacfd mov ecx, eax */
  ECX = (EAX);
  /* 101cacff sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_101cad02:;
  /* 101cad02 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cad05 jae 0x101cad3d */
  if (!C.cf) goto L_101cad3d;
  /* 101cad07 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 101cad0a or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 101cad0e cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cad11 jb 0x101cad27 */
  if (C.cf) goto L_101cad27;
  /* 101cad13 jne 0x101cad21 */
  if (!C.zf) goto L_101cad21;
  /* 101cad15 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101cad18 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101cad1a div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101cad1d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cad1f jbe 0x101cad27 */
  if ((C.cf||C.zf)) goto L_101cad27;
L_101cad21:;
  /* 101cad21 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 101cad25 jmp 0x101cad30 */
  goto L_101cad30;
L_101cad27:;
  /* 101cad27 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101cad2b add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101cad2d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_101cad30:;
  /* 101cad30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101cad33 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 101cad36 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 101cad38 jmp 0x101caca1 */
  goto L_101caca1;
L_101cad3d:;
  /* 101cad3d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 101cad40 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 101cad43 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 101cad46 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 101cad48 jne 0x101cad5a */
  if (!C.zf) goto L_101cad5a;
  /* 101cad4a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101cad4c je 0x101cad54 */
  if (C.zf) goto L_101cad54;
  /* 101cad4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cad51 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_101cad54:;
  /* 101cad54 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 101cad58 jmp 0x101cada5 */
  goto L_101cada5;
L_101cad5a:;
  /* 101cad5a test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 101cad5c mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 101cad61 jne 0x101cad7e */
  if (!C.zf) goto L_101cad7e;
  /* 101cad63 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 101cad65 jne 0x101cada5 */
  if (!C.zf) goto L_101cada5;
  /* 101cad67 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 101cad6a je 0x101cad75 */
  if (C.zf) goto L_101cad75;
  /* 101cad6c cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cad73 ja 0x101cad7e */
  if ((!C.cf&&!C.zf)) goto L_101cad7e;
L_101cad75:;
  /* 101cad75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cad77 jne 0x101cada5 */
  if (!C.zf) goto L_101cada5;
  /* 101cad79 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cad7c jbe 0x101cada5 */
  if ((C.cf||C.zf)) goto L_101cada5;
L_101cad7e:;
  /* 101cad7e call 0x101cc011 */
  push32(0x101cad83u); f_101cc011();
  /* 101cad83 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 101cad87 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 101cad8d je 0x101cad95 */
  if (C.zf) goto L_101cad95;
  /* 101cad8f or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 101cad93 jmp 0x101cada5 */
  goto L_101cada5;
L_101cad95:;
  /* 101cad95 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 101cad98 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 101cad9a neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 101cad9c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cad9e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101cada0 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cada2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_101cada5:;
  /* 101cada5 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101cada7 je 0x101cadae */
  if (C.zf) goto L_101cadae;
  /* 101cada9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101cadac mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_101cadae:;
  /* 101cadae test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 101cadb2 je 0x101cadbc */
  if (C.zf) goto L_101cadbc;
  /* 101cadb4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101cadb7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101cadb9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_101cadbc:;
  /* 101cadbc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101cadbf jmp 0x101cadcc */
  goto L_101cadcc;
L_101cadc1:;
  /* 101cadc1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101cadc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cadc6 je 0x101cadca */
  if (C.zf) goto L_101cadca;
  /* 101cadc8 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_101cadca:;
  /* 101cadca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101cadcc:;
  /* 101cadcc pop edi */
  EDI = (pop32());
  /* 101cadcd pop esi */
  ESI = (pop32());
  /* 101cadce pop ebx */
  EBX = (pop32());
  /* 101cadcf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101cadd0 ret  */
  ESPCHK(0x101cabccu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x101cadf0 (193 bytes, 90 insns) */
void f_101cadf0(void) {
  FTRACE(0x101cadf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cadf0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cadf2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 101cadf6 push ebx */
  push32((uint32_t)(EBX));
  /* 101cadf7 mov ebx, eax */
  EBX = (EAX);
  /* 101cadf9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 101cadfc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 101cae00 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 101cae06 je 0x101cae1b */
  if (C.zf) goto L_101cae1b;
L_101cae08:;
  /* 101cae08 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 101cae0a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 101cae0b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cae0d je 0x101cade0 */
  if (C.zf) { jmp_ind(0x101cade0u); return; }
  /* 101cae0f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 101cae11 je 0x101cae64 */
  if (C.zf) goto L_101cae64;
  /* 101cae13 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 101cae19 jne 0x101cae08 */
  if (!C.zf) goto L_101cae08;
L_101cae1b:;
  /* 101cae1b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 101cae1d push edi */
  push32((uint32_t)(EDI));
  /* 101cae1e mov eax, ebx */
  EAX = (EBX);
  /* 101cae20 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 101cae23 push esi */
  push32((uint32_t)(ESI));
  /* 101cae24 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_101cae26:;
  /* 101cae26 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 101cae28 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 101cae2d mov eax, ecx */
  EAX = (ECX);
  /* 101cae2f mov esi, edi */
  ESI = (EDI);
  /* 101cae31 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 101cae33 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101cae35 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101cae37 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 101cae3a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101cae3d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 101cae3f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 101cae41 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cae44 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 101cae4a jne 0x101cae68 */
  if (!C.zf) goto L_101cae68;
  /* 101cae4c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 101cae51 je 0x101cae26 */
  if (C.zf) goto L_101cae26;
  /* 101cae53 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 101cae58 jne 0x101cae62 */
  if (!C.zf) goto L_101cae62;
  /* 101cae5a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 101cae60 jne 0x101cae26 */
  if (!C.zf) goto L_101cae26;
L_101cae62:;
  /* 101cae62 pop esi */
  ESI = (pop32());
  /* 101cae63 pop edi */
  EDI = (pop32());
L_101cae64:;
  /* 101cae64 pop ebx */
  EBX = (pop32());
  /* 101cae65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cae67 ret  */
  ESPCHK(0x101cadf0u, _esp0);
  ESP += 4; return;
L_101cae68:;
  /* 101cae68 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 101cae6b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cae6d je 0x101caea5 */
  if (C.zf) goto L_101caea5;
  /* 101cae6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101cae71 je 0x101cae62 */
  if (C.zf) goto L_101cae62;
  /* 101cae73 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cae75 je 0x101cae9e */
  if (C.zf) goto L_101cae9e;
  /* 101cae77 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 101cae79 je 0x101cae62 */
  if (C.zf) goto L_101cae62;
  /* 101cae7b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 101cae7e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cae80 je 0x101cae97 */
  if (C.zf) goto L_101cae97;
  /* 101cae82 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101cae84 je 0x101cae62 */
  if (C.zf) goto L_101cae62;
  /* 101cae86 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cae88 je 0x101cae90 */
  if (C.zf) goto L_101cae90;
  /* 101cae8a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 101cae8c je 0x101cae62 */
  if (C.zf) goto L_101cae62;
  /* 101cae8e jmp 0x101cae26 */
  goto L_101cae26;
L_101cae90:;
  /* 101cae90 pop esi */
  ESI = (pop32());
  /* 101cae91 pop edi */
  EDI = (pop32());
  /* 101cae92 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 101cae95 pop ebx */
  EBX = (pop32());
  /* 101cae96 ret  */
  ESPCHK(0x101cadf0u, _esp0);
  ESP += 4; return;
L_101cae97:;
  /* 101cae97 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 101cae9a pop esi */
  ESI = (pop32());
  /* 101cae9b pop edi */
  EDI = (pop32());
  /* 101cae9c pop ebx */
  EBX = (pop32());
  /* 101cae9d ret  */
  ESPCHK(0x101cadf0u, _esp0);
  ESP += 4; return;
L_101cae9e:;
  /* 101cae9e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 101caea1 pop esi */
  ESI = (pop32());
  /* 101caea2 pop edi */
  EDI = (pop32());
  /* 101caea3 pop ebx */
  EBX = (pop32());
  /* 101caea4 ret  */
  ESPCHK(0x101cadf0u, _esp0);
  ESP += 4; return;
L_101caea5:;
  /* 101caea5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 101caea8 pop esi */
  ESI = (pop32());
  /* 101caea9 pop edi */
  EDI = (pop32());
  /* 101caeaa pop ebx */
  EBX = (pop32());
  /* 101caeab ret  */
  ESPCHK(0x101cadf0u, _esp0);
  ESP += 4; return;
  /* 101caeac int3  */
  x86_unimpl("int3 @ 0x101caeac");
  /* 101caead int3  */
  x86_unimpl("int3 @ 0x101caead");
  /* 101caeae int3  */
  x86_unimpl("int3 @ 0x101caeae");
  /* 101caeaf int3  */
  x86_unimpl("int3 @ 0x101caeaf");
}

/* _strstr @ 0x101caeb0 (128 bytes, 66 insns) */
void f_101caeb0(void) {
  FTRACE(0x101caeb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101caeb0 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 101caeb4 push edi */
  push32((uint32_t)(EDI));
  /* 101caeb5 push ebx */
  push32((uint32_t)(EBX));
  /* 101caeb6 push esi */
  push32((uint32_t)(ESI));
  /* 101caeb7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 101caeb9 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 101caebd test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101caebf je 0x101caf2a */
  if (C.zf) goto L_101caf2a;
  /* 101caec1 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 101caec4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 101caec6 je 0x101caf17 */
  if (C.zf) goto L_101caf17;
L_101caec8:;
  /* 101caec8 mov esi, edi */
  ESI = (EDI);
  /* 101caeca mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 101caece mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 101caed0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101caed1 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101caed3 je 0x101caeea */
  if (C.zf) goto L_101caeea;
  /* 101caed5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101caed7 je 0x101caee4 */
  if (C.zf) goto L_101caee4;
L_101caed9:;
  /* 101caed9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101caedb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_101caedc:;
  /* 101caedc cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101caede je 0x101caeea */
  if (C.zf) goto L_101caeea;
  /* 101caee0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101caee2 jne 0x101caed9 */
  if (!C.zf) goto L_101caed9;
L_101caee4:;
  /* 101caee4 pop esi */
  ESI = (pop32());
  /* 101caee5 pop ebx */
  EBX = (pop32());
  /* 101caee6 pop edi */
  EDI = (pop32());
  /* 101caee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101caee9 ret  */
  ESPCHK(0x101caeb0u, _esp0);
  ESP += 4; return;
L_101caeea:;
  /* 101caeea mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101caeec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101caeed cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101caeef jne 0x101caedc */
  if (!C.zf) goto L_101caedc;
  /* 101caef1 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_101caef4:;
  /* 101caef4 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 101caef7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 101caef9 je 0x101caf23 */
  if (C.zf) goto L_101caf23;
  /* 101caefb mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101caefd add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101caf00 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101caf02 jne 0x101caec8 */
  if (!C.zf) goto L_101caec8;
  /* 101caf04 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 101caf07 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101caf09 je 0x101caf23 */
  if (C.zf) goto L_101caf23;
  /* 101caf0b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 101caf0e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101caf11 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101caf13 je 0x101caef4 */
  if (C.zf) goto L_101caef4;
  /* 101caf15 jmp 0x101caec8 */
  goto L_101caec8;
L_101caf17:;
  /* 101caf17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101caf19 pop esi */
  ESI = (pop32());
  /* 101caf1a pop ebx */
  EBX = (pop32());
  /* 101caf1b pop edi */
  EDI = (pop32());
  /* 101caf1c mov al, dl */
  AL = (DL);
  /* 101caf1e jmp 0x101cadf6 */
  jmp_ind(0x101cadf6u); return;
L_101caf23:;
  /* 101caf23 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 101caf26 pop esi */
  ESI = (pop32());
  /* 101caf27 pop ebx */
  EBX = (pop32());
  /* 101caf28 pop edi */
  EDI = (pop32());
  /* 101caf29 ret  */
  ESPCHK(0x101caeb0u, _esp0);
  ESP += 4; return;
L_101caf2a:;
  /* 101caf2a mov eax, edi */
  EAX = (EDI);
  /* 101caf2c pop esi */
  ESI = (pop32());
  /* 101caf2d pop ebx */
  EBX = (pop32());
  /* 101caf2e pop edi */
  EDI = (pop32());
  /* 101caf2f ret  */
  ESPCHK(0x101caeb0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x101caf30 (56 bytes, 31 insns) */
void f_101caf30(void) {
  FTRACE(0x101caf30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101caf30 push ebp */
  push32((uint32_t)(EBP));
  /* 101caf31 mov ebp, esp */
  EBP = (ESP);
  /* 101caf33 push edi */
  push32((uint32_t)(EDI));
  /* 101caf34 push esi */
  push32((uint32_t)(ESI));
  /* 101caf35 push ebx */
  push32((uint32_t)(EBX));
  /* 101caf36 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 101caf39 jecxz 0x101caf61 */
  x86_unimpl("jecxz @ 0x101caf39");
  /* 101caf3b mov ebx, ecx */
  EBX = (ECX);
  /* 101caf3d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 101caf40 mov esi, edi */
  ESI = (EDI);
  /* 101caf42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101caf44 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 101caf46 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 101caf48 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101caf4a mov edi, esi */
  EDI = (ESI);
  /* 101caf4c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101caf4f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 101caf51 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 101caf54 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101caf56 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101caf59 ja 0x101caf5f */
  if ((!C.cf&&!C.zf)) goto L_101caf5f;
  /* 101caf5b je 0x101caf61 */
  if (C.zf) goto L_101caf61;
  /* 101caf5d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101caf5e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_101caf5f:;
  /* 101caf5f not ecx */
  ECX = (~(ECX));
L_101caf61:;
  /* 101caf61 mov eax, ecx */
  EAX = (ECX);
  /* 101caf63 pop ebx */
  EBX = (pop32());
  /* 101caf64 pop esi */
  ESI = (pop32());
  /* 101caf65 pop edi */
  EDI = (pop32());
  /* 101caf66 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101caf67 ret  */
  ESPCHK(0x101caf30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af70 @ 0x101caf70 (47 bytes, 17 insns) */
void f_101caf70(void) {
  FTRACE(0x101caf70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101caf70 push ecx */
  push32((uint32_t)(ECX));
  /* 101caf71 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101caf76 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 101caf7a jb 0x101caf90 */
  if (C.cf) goto L_101caf90;
L_101caf7c:;
  /* 101caf7c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101caf82 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101caf87 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 101caf89 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101caf8e jae 0x101caf7c */
  if (!C.cf) goto L_101caf7c;
L_101caf90:;
  /* 101caf90 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101caf92 mov eax, esp */
  EAX = (ESP);
  /* 101caf94 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 101caf96 mov esp, ecx */
  ESP = (ECX);
  /* 101caf98 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 101caf9a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 101caf9d push eax */
  push32((uint32_t)(EAX));
  /* 101caf9e ret  */
  ESPCHK(0x101caf70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af9f @ 0x101caf9f (72 bytes, 17 insns) */
void f_101caf9f(void) {
  FTRACE(0x101caf9fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101caf9f push 0x140 */
  push32((uint32_t)(0x140u));
  /* 101cafa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 101cafa6 push dword ptr [0x101d7b84] */
  push32((uint32_t)(r32((uint32_t)(0x101d7b84))));
  /* 101cafac call dword ptr [0x101ce098] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce098))), 0x101cafb2u);
  /* 101cafb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cafb4 mov dword ptr [0x101d693c], eax */
  w32((uint32_t)(0x101d693c), (EAX));
  /* 101cafb9 jne 0x101cafbc */
  if (!C.zf) goto L_101cafbc;
  /* 101cafbb ret  */
  ESPCHK(0x101caf9fu, _esp0);
  ESP += 4; return;
L_101cafbc:;
  /* 101cafbc mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101cafc0 and dword ptr [0x101d6934], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101d6934)))&(0x0u); w32((uint32_t)(0x101d6934), (_r)); fl_logic(_r,32); }
  /* 101cafc7 and dword ptr [0x101d6938], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101d6938)))&(0x0u); w32((uint32_t)(0x101d6938), (_r)); fl_logic(_r,32); }
  /* 101cafce push 1 */
  push32((uint32_t)(0x1u));
  /* 101cafd0 mov dword ptr [0x101d6930], eax */
  w32((uint32_t)(0x101d6930), (EAX));
  /* 101cafd5 mov dword ptr [0x101d6940], ecx */
  w32((uint32_t)(0x101d6940), (ECX));
  /* 101cafdb mov dword ptr [0x101d6928], 0x10 */
  w32((uint32_t)(0x101d6928), (0x10u));
  /* 101cafe5 pop eax */
  EAX = (pop32());
  /* 101cafe6 ret  */
  ESPCHK(0x101caf9fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000afe7 @ 0x101cafe7 (43 bytes, 14 insns) */
void f_101cafe7(void) {
  FTRACE(0x101cafe7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cafe7 mov eax, dword ptr [0x101d6938] */
  EAX = (r32((uint32_t)(0x101d6938)));
  /* 101cafec lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 101cafef mov eax, dword ptr [0x101d693c] */
  EAX = (r32((uint32_t)(0x101d693c)));
  /* 101caff4 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_101caff7:;
  /* 101caff7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101caff9 jae 0x101cb00f */
  if (!C.cf) goto L_101cb00f;
  /* 101caffb mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 101cafff sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cb002 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb008 jb 0x101cb011 */
  if (C.cf) goto L_101cb011;
  /* 101cb00a add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cb00d jmp 0x101caff7 */
  goto L_101caff7;
L_101cb00f:;
  /* 101cb00f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101cb011:;
  /* 101cb011 ret  */
  ESPCHK(0x101cafe7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b012 @ 0x101cb012 (809 bytes, 265 insns) */
void f_101cb012(void) {
  FTRACE(0x101cb012u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cb012 push ebp */
  push32((uint32_t)(EBP));
  /* 101cb013 mov ebp, esp */
  EBP = (ESP);
  /* 101cb015 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cb018 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cb01b push ebx */
  push32((uint32_t)(EBX));
  /* 101cb01c push esi */
  push32((uint32_t)(ESI));
  /* 101cb01d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101cb020 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 101cb023 push edi */
  push32((uint32_t)(EDI));
  /* 101cb024 mov edi, esi */
  EDI = (ESI);
  /* 101cb026 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101cb029 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cb02c shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 101cb02f mov ecx, edi */
  ECX = (EDI);
  /* 101cb031 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101cb037 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 101cb03e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 101cb041 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 101cb043 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101cb044 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 101cb047 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 101cb04a jne 0x101cb336 */
  if (!C.zf) goto L_101cb336;
  /* 101cb050 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 101cb053 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 101cb056 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 101cb059 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 101cb05c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 101cb05f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 101cb062 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 101cb065 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 101cb068 jne 0x101cb0e8 */
  if (!C.zf) goto L_101cb0e8;
  /* 101cb06a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 101cb06d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 101cb06e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb071 jbe 0x101cb076 */
  if ((C.cf||C.zf)) goto L_101cb076;
  /* 101cb073 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 101cb075 pop edx */
  EDX = (pop32());
L_101cb076:;
  /* 101cb076 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 101cb079 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb07c jne 0x101cb0ca */
  if (!C.zf) goto L_101cb0ca;
  /* 101cb07e cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb081 jae 0x101cb0a1 */
  if (!C.cf) goto L_101cb0a1;
  /* 101cb083 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 101cb088 mov ecx, edx */
  ECX = (EDX);
  /* 101cb08a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 101cb08c lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 101cb090 not ebx */
  EBX = (~(EBX));
  /* 101cb092 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 101cb096 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 101cb098 jne 0x101cb0c2 */
  if (!C.zf) goto L_101cb0c2;
  /* 101cb09a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cb09d and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 101cb09f jmp 0x101cb0c2 */
  goto L_101cb0c2;
L_101cb0a1:;
  /* 101cb0a1 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 101cb0a4 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 101cb0a9 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 101cb0ab lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 101cb0af not ebx */
  EBX = (~(EBX));
  /* 101cb0b1 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 101cb0b8 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 101cb0ba jne 0x101cb0c2 */
  if (!C.zf) goto L_101cb0c2;
  /* 101cb0bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cb0bf and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_101cb0c2:;
  /* 101cb0c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101cb0c5 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 101cb0c8 jmp 0x101cb0cd */
  goto L_101cb0cd;
L_101cb0ca:;
  /* 101cb0ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_101cb0cd:;
  /* 101cb0cd mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 101cb0d0 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 101cb0d3 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cb0d6 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 101cb0d9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 101cb0dc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 101cb0df mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 101cb0e2 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 101cb0e5 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_101cb0e8:;
  /* 101cb0e8 mov edx, ecx */
  EDX = (ECX);
  /* 101cb0ea sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 101cb0ed dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 101cb0ee cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb0f1 jbe 0x101cb0f6 */
  if ((C.cf||C.zf)) goto L_101cb0f6;
  /* 101cb0f3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 101cb0f5 pop edx */
  EDX = (pop32());
L_101cb0f6:;
  /* 101cb0f6 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 101cb0f9 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 101cb0fc mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 101cb0ff jne 0x101cb199 */
  if (!C.zf) goto L_101cb199;
  /* 101cb105 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cb108 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 101cb10b sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 101cb10e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 101cb110 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 101cb113 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101cb114 pop esi */
  ESI = (pop32());
  /* 101cb115 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb117 jbe 0x101cb11b */
  if ((C.cf||C.zf)) goto L_101cb11b;
  /* 101cb119 mov ebx, esi */
  EBX = (ESI);
L_101cb11b:;
  /* 101cb11b add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cb11e mov edx, ecx */
  EDX = (ECX);
  /* 101cb120 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 101cb123 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 101cb126 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 101cb127 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb129 jbe 0x101cb12d */
  if ((C.cf||C.zf)) goto L_101cb12d;
  /* 101cb12b mov edx, esi */
  EDX = (ESI);
L_101cb12d:;
  /* 101cb12d cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb12f je 0x101cb194 */
  if (C.zf) goto L_101cb194;
  /* 101cb131 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101cb134 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 101cb137 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb13a jne 0x101cb17c */
  if (!C.zf) goto L_101cb17c;
  /* 101cb13c cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb13f jae 0x101cb15d */
  if (!C.cf) goto L_101cb15d;
  /* 101cb141 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 101cb146 mov ecx, ebx */
  ECX = (EBX);
  /* 101cb148 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 101cb14a not esi */
  ESI = (~(ESI));
  /* 101cb14c and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 101cb150 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 101cb154 jne 0x101cb17c */
  if (!C.zf) goto L_101cb17c;
  /* 101cb156 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cb159 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 101cb15b jmp 0x101cb17c */
  goto L_101cb17c;
L_101cb15d:;
  /* 101cb15d lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 101cb160 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 101cb165 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 101cb167 not esi */
  ESI = (~(ESI));
  /* 101cb169 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 101cb170 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 101cb174 jne 0x101cb17c */
  if (!C.zf) goto L_101cb17c;
  /* 101cb176 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cb179 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_101cb17c:;
  /* 101cb17c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101cb17f mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 101cb182 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 101cb185 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 101cb188 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101cb18b mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 101cb18e mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 101cb191 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_101cb194:;
  /* 101cb194 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101cb197 jmp 0x101cb19c */
  goto L_101cb19c;
L_101cb199:;
  /* 101cb199 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_101cb19c:;
  /* 101cb19c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb1a0 jne 0x101cb1aa */
  if (!C.zf) goto L_101cb1aa;
  /* 101cb1a2 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb1a4 je 0x101cb22b */
  if (C.zf) goto L_101cb22b;
L_101cb1aa:;
  /* 101cb1aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 101cb1ad mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 101cb1b1 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 101cb1b4 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 101cb1b7 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 101cb1ba mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 101cb1bd mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 101cb1c0 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 101cb1c3 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 101cb1c6 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb1c9 jne 0x101cb22b */
  if (!C.zf) goto L_101cb22b;
  /* 101cb1cb mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 101cb1cf cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb1d2 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 101cb1d5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 101cb1d7 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 101cb1db jae 0x101cb202 */
  if (!C.cf) goto L_101cb202;
  /* 101cb1dd cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cb1e1 jne 0x101cb1f1 */
  if (!C.zf) goto L_101cb1f1;
  /* 101cb1e3 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 101cb1e8 mov ecx, edx */
  ECX = (EDX);
  /* 101cb1ea shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 101cb1ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cb1ef or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_101cb1f1:;
  /* 101cb1f1 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 101cb1f6 mov ecx, edx */
  ECX = (EDX);
  /* 101cb1f8 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 101cb1fa lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 101cb1fe or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101cb200 jmp 0x101cb22b */
  goto L_101cb22b;
L_101cb202:;
  /* 101cb202 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cb206 jne 0x101cb218 */
  if (!C.zf) goto L_101cb218;
  /* 101cb208 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 101cb20b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 101cb210 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 101cb212 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cb215 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_101cb218:;
  /* 101cb218 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 101cb21b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 101cb220 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 101cb222 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 101cb229 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_101cb22b:;
  /* 101cb22b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101cb22e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101cb230 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 101cb234 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 101cb237 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 101cb239 jne 0x101cb336 */
  if (!C.zf) goto L_101cb336;
  /* 101cb23f mov eax, dword ptr [0x101d6934] */
  EAX = (r32((uint32_t)(0x101d6934)));
  /* 101cb244 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cb246 je 0x101cb328 */
  if (C.zf) goto L_101cb328;
  /* 101cb24c mov ecx, dword ptr [0x101d692c] */
  ECX = (r32((uint32_t)(0x101d692c)));
  /* 101cb252 mov esi, dword ptr [0x101ce07c] */
  ESI = (r32((uint32_t)(0x101ce07c)));
  /* 101cb258 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 101cb25b add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cb25e mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 101cb263 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 101cb268 push ebx */
  push32((uint32_t)(EBX));
  /* 101cb269 push ecx */
  push32((uint32_t)(ECX));
  /* 101cb26a call esi */
  call_ind((uint32_t)(ESI), 0x101cb26cu);
  /* 101cb26c mov ecx, dword ptr [0x101d692c] */
  ECX = (r32((uint32_t)(0x101d692c)));
  /* 101cb272 mov eax, dword ptr [0x101d6934] */
  EAX = (r32((uint32_t)(0x101d6934)));
  /* 101cb277 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 101cb27c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 101cb27e or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 101cb281 mov eax, dword ptr [0x101d6934] */
  EAX = (r32((uint32_t)(0x101d6934)));
  /* 101cb286 mov ecx, dword ptr [0x101d692c] */
  ECX = (r32((uint32_t)(0x101d692c)));
  /* 101cb28c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 101cb28f and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 101cb297 mov eax, dword ptr [0x101d6934] */
  EAX = (r32((uint32_t)(0x101d6934)));
  /* 101cb29c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 101cb29f dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 101cb2a2 mov eax, dword ptr [0x101d6934] */
  EAX = (r32((uint32_t)(0x101d6934)));
  /* 101cb2a7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 101cb2aa cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cb2ae jne 0x101cb2b9 */
  if (!C.zf) goto L_101cb2b9;
  /* 101cb2b0 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 101cb2b4 mov eax, dword ptr [0x101d6934] */
  EAX = (r32((uint32_t)(0x101d6934)));
L_101cb2b9:;
  /* 101cb2b9 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb2bd jne 0x101cb328 */
  if (!C.zf) goto L_101cb328;
  /* 101cb2bf push ebx */
  push32((uint32_t)(EBX));
  /* 101cb2c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 101cb2c2 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 101cb2c5 call esi */
  call_ind((uint32_t)(ESI), 0x101cb2c7u);
  /* 101cb2c7 mov eax, dword ptr [0x101d6934] */
  EAX = (r32((uint32_t)(0x101d6934)));
  /* 101cb2cc push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 101cb2cf push 0 */
  push32((uint32_t)(0x0u));
  /* 101cb2d1 push dword ptr [0x101d7b84] */
  push32((uint32_t)(r32((uint32_t)(0x101d7b84))));
  /* 101cb2d7 call dword ptr [0x101ce080] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce080))), 0x101cb2ddu);
  /* 101cb2dd mov eax, dword ptr [0x101d6938] */
  EAX = (r32((uint32_t)(0x101d6938)));
  /* 101cb2e2 mov edx, dword ptr [0x101d693c] */
  EDX = (r32((uint32_t)(0x101d693c)));
  /* 101cb2e8 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 101cb2eb shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 101cb2ee mov ecx, eax */
  ECX = (EAX);
  /* 101cb2f0 mov eax, dword ptr [0x101d6934] */
  EAX = (r32((uint32_t)(0x101d6934)));
  /* 101cb2f5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cb2f7 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 101cb2fb push ecx */
  push32((uint32_t)(ECX));
  /* 101cb2fc lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 101cb2ff push ecx */
  push32((uint32_t)(ECX));
  /* 101cb300 push eax */
  push32((uint32_t)(EAX));
  /* 101cb301 call 0x101c9ce0 */
  push32(0x101cb306u); f_101c9ce0();
  /* 101cb306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cb309 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cb30c dec dword ptr [0x101d6938] */
  { uint32_t _r=(r32((uint32_t)(0x101d6938)))-1; w32((uint32_t)(0x101d6938), (_r)); fl_dec(_r,32); }
  /* 101cb312 cmp eax, dword ptr [0x101d6934] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x101d6934))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb318 jbe 0x101cb31e */
  if ((C.cf||C.zf)) goto L_101cb31e;
  /* 101cb31a sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_101cb31e:;
  /* 101cb31e mov eax, dword ptr [0x101d693c] */
  EAX = (r32((uint32_t)(0x101d693c)));
  /* 101cb323 mov dword ptr [0x101d6930], eax */
  w32((uint32_t)(0x101d6930), (EAX));
L_101cb328:;
  /* 101cb328 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cb32b mov dword ptr [0x101d692c], edi */
  w32((uint32_t)(0x101d692c), (EDI));
  /* 101cb331 mov dword ptr [0x101d6934], eax */
  w32((uint32_t)(0x101d6934), (EAX));
L_101cb336:;
  /* 101cb336 pop edi */
  EDI = (pop32());
  /* 101cb337 pop esi */
  ESI = (pop32());
  /* 101cb338 pop ebx */
  EBX = (pop32());
  /* 101cb339 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101cb33a ret  */
  ESPCHK(0x101cb012u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b33b @ 0x101cb33b (777 bytes, 275 insns) */
void f_101cb33b(void) {
  FTRACE(0x101cb33bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cb33b push ebp */
  push32((uint32_t)(EBP));
  /* 101cb33c mov ebp, esp */
  EBP = (ESP);
  /* 101cb33e sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cb341 mov eax, dword ptr [0x101d6938] */
  EAX = (r32((uint32_t)(0x101d6938)));
  /* 101cb346 mov edx, dword ptr [0x101d693c] */
  EDX = (r32((uint32_t)(0x101d693c)));
  /* 101cb34c push ebx */
  push32((uint32_t)(EBX));
  /* 101cb34d push esi */
  push32((uint32_t)(ESI));
  /* 101cb34e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 101cb351 push edi */
  push32((uint32_t)(EDI));
  /* 101cb352 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 101cb355 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cb358 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 101cb35b lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 101cb35e and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 101cb361 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 101cb364 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 101cb367 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101cb368 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb36b jge 0x101cb37b */
  if ((C.sf==C.of)) goto L_101cb37b;
  /* 101cb36d or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 101cb370 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 101cb372 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 101cb376 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 101cb379 jmp 0x101cb38b */
  goto L_101cb38b;
L_101cb37b:;
  /* 101cb37b add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cb37e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101cb381 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101cb383 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 101cb385 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 101cb388 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_101cb38b:;
  /* 101cb38b mov eax, dword ptr [0x101d6930] */
  EAX = (r32((uint32_t)(0x101d6930)));
  /* 101cb390 mov ebx, eax */
  EBX = (EAX);
  /* 101cb392 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb394 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101cb397 jae 0x101cb3b2 */
  if (!C.cf) goto L_101cb3b2;
L_101cb399:;
  /* 101cb399 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 101cb39c mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 101cb39e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 101cb3a1 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 101cb3a3 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 101cb3a5 jne 0x101cb3b2 */
  if (!C.zf) goto L_101cb3b2;
  /* 101cb3a7 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cb3aa cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb3ad mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101cb3b0 jb 0x101cb399 */
  if (C.cf) goto L_101cb399;
L_101cb3b2:;
  /* 101cb3b2 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb3b5 jne 0x101cb430 */
  if (!C.zf) goto L_101cb430;
  /* 101cb3b7 mov ebx, edx */
  EBX = (EDX);
L_101cb3b9:;
  /* 101cb3b9 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb3bb mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101cb3be jae 0x101cb3d5 */
  if (!C.cf) goto L_101cb3d5;
  /* 101cb3c0 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 101cb3c3 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 101cb3c5 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 101cb3c8 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 101cb3ca or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 101cb3cc jne 0x101cb3d3 */
  if (!C.zf) goto L_101cb3d3;
  /* 101cb3ce add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cb3d1 jmp 0x101cb3b9 */
  goto L_101cb3b9;
L_101cb3d3:;
  /* 101cb3d3 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_101cb3d5:;
  /* 101cb3d5 jne 0x101cb430 */
  if (!C.zf) goto L_101cb430;
L_101cb3d7:;
  /* 101cb3d7 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb3da jae 0x101cb3ed */
  if (!C.cf) goto L_101cb3ed;
  /* 101cb3dc cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb3e0 jne 0x101cb3ea */
  if (!C.zf) goto L_101cb3ea;
  /* 101cb3e2 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cb3e5 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101cb3e8 jmp 0x101cb3d7 */
  goto L_101cb3d7;
L_101cb3ea:;
  /* 101cb3ea cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_101cb3ed:;
  /* 101cb3ed jne 0x101cb415 */
  if (!C.zf) goto L_101cb415;
  /* 101cb3ef mov ebx, edx */
  EBX = (EDX);
L_101cb3f1:;
  /* 101cb3f1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb3f3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101cb3f6 jae 0x101cb405 */
  if (!C.cf) goto L_101cb405;
  /* 101cb3f8 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb3fc jne 0x101cb403 */
  if (!C.zf) goto L_101cb403;
  /* 101cb3fe add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cb401 jmp 0x101cb3f1 */
  goto L_101cb3f1;
L_101cb403:;
  /* 101cb403 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_101cb405:;
  /* 101cb405 jne 0x101cb415 */
  if (!C.zf) goto L_101cb415;
  /* 101cb407 call 0x101cb644 */
  push32(0x101cb40cu); f_101cb644();
  /* 101cb40c mov ebx, eax */
  EBX = (EAX);
  /* 101cb40e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101cb410 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101cb413 je 0x101cb429 */
  if (C.zf) goto L_101cb429;
L_101cb415:;
  /* 101cb415 push ebx */
  push32((uint32_t)(EBX));
  /* 101cb416 call 0x101cb6f5 */
  push32(0x101cb41bu); f_101cb6f5();
  /* 101cb41b pop ecx */
  ECX = (pop32());
  /* 101cb41c mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 101cb41f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 101cb421 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 101cb424 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb427 jne 0x101cb430 */
  if (!C.zf) goto L_101cb430;
L_101cb429:;
  /* 101cb429 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cb42b jmp 0x101cb63f */
  goto L_101cb63f;
L_101cb430:;
  /* 101cb430 mov dword ptr [0x101d6930], ebx */
  w32((uint32_t)(0x101d6930), (EBX));
  /* 101cb436 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 101cb439 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 101cb43b cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb43e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 101cb441 je 0x101cb457 */
  if (C.zf) goto L_101cb457;
  /* 101cb443 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 101cb44a mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 101cb44e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 101cb451 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 101cb453 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 101cb455 jne 0x101cb48e */
  if (!C.zf) goto L_101cb48e;
L_101cb457:;
  /* 101cb457 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 101cb45d mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 101cb460 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 101cb463 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 101cb466 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101cb46a lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 101cb46d or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 101cb46f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 101cb472 jne 0x101cb48b */
  if (!C.zf) goto L_101cb48b;
L_101cb474:;
  /* 101cb474 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 101cb47a inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 101cb47d and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 101cb480 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cb483 mov edi, esi */
  EDI = (ESI);
  /* 101cb485 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 101cb487 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 101cb489 je 0x101cb474 */
  if (C.zf) goto L_101cb474;
L_101cb48b:;
  /* 101cb48b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_101cb48e:;
  /* 101cb48e mov ecx, edx */
  ECX = (EDX);
  /* 101cb490 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101cb492 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101cb498 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 101cb49f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 101cb4a2 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 101cb4a6 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 101cb4a8 jne 0x101cb4b7 */
  if (!C.zf) goto L_101cb4b7;
  /* 101cb4aa mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 101cb4b1 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101cb4b3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 101cb4b6 pop edi */
  EDI = (pop32());
L_101cb4b7:;
  /* 101cb4b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101cb4b9 jl 0x101cb4c0 */
  if ((C.sf!=C.of)) goto L_101cb4c0;
  /* 101cb4bb shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 101cb4bd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101cb4be jmp 0x101cb4b7 */
  goto L_101cb4b7;
L_101cb4c0:;
  /* 101cb4c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 101cb4c3 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 101cb4c7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 101cb4c9 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cb4cc mov esi, ecx */
  ESI = (ECX);
  /* 101cb4ce mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101cb4d1 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 101cb4d4 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101cb4d5 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb4d8 jle 0x101cb4dd */
  if ((C.zf||C.sf!=C.of)) goto L_101cb4dd;
  /* 101cb4da push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 101cb4dc pop esi */
  ESI = (pop32());
L_101cb4dd:;
  /* 101cb4dd cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb4df je 0x101cb5f2 */
  if (C.zf) goto L_101cb5f2;
  /* 101cb4e5 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 101cb4e8 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb4eb jne 0x101cb54e */
  if (!C.zf) goto L_101cb54e;
  /* 101cb4ed cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb4f0 jge 0x101cb51d */
  if ((C.sf==C.of)) goto L_101cb51d;
  /* 101cb4f2 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 101cb4f7 mov ecx, edi */
  ECX = (EDI);
  /* 101cb4f9 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 101cb4fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101cb4fe lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 101cb502 not ebx */
  EBX = (~(EBX));
  /* 101cb504 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 101cb507 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 101cb50b mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 101cb50f dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 101cb511 jne 0x101cb54b */
  if (!C.zf) goto L_101cb54b;
  /* 101cb513 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cb516 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 101cb519 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 101cb51b jmp 0x101cb54e */
  goto L_101cb54e;
L_101cb51d:;
  /* 101cb51d lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 101cb520 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 101cb525 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 101cb527 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101cb52a lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 101cb52e lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 101cb535 not ebx */
  EBX = (~(EBX));
  /* 101cb537 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 101cb539 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 101cb53b mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 101cb53e jne 0x101cb54b */
  if (!C.zf) goto L_101cb54b;
  /* 101cb540 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cb543 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 101cb546 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 101cb549 jmp 0x101cb54e */
  goto L_101cb54e;
L_101cb54b:;
  /* 101cb54b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_101cb54e:;
  /* 101cb54e mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 101cb551 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 101cb554 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb558 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 101cb55b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 101cb55e mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 101cb561 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 101cb564 je 0x101cb5fe */
  if (C.zf) goto L_101cb5fe;
  /* 101cb56a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 101cb56d mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 101cb571 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 101cb574 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 101cb577 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 101cb57a mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 101cb57d mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 101cb580 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 101cb583 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 101cb586 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb589 jne 0x101cb5ef */
  if (!C.zf) goto L_101cb5ef;
  /* 101cb58b mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 101cb58f cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb592 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 101cb595 jge 0x101cb5c0 */
  if ((C.sf==C.of)) goto L_101cb5c0;
  /* 101cb597 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 101cb599 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cb59d mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 101cb5a1 jne 0x101cb5ae */
  if (!C.zf) goto L_101cb5ae;
  /* 101cb5a3 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 101cb5a8 mov ecx, esi */
  ECX = (ESI);
  /* 101cb5aa shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 101cb5ac or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_101cb5ae:;
  /* 101cb5ae mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 101cb5b3 mov ecx, esi */
  ECX = (ESI);
  /* 101cb5b5 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 101cb5b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101cb5ba or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 101cb5be jmp 0x101cb5ef */
  goto L_101cb5ef;
L_101cb5c0:;
  /* 101cb5c0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 101cb5c2 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cb5c6 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 101cb5ca jne 0x101cb5d9 */
  if (!C.zf) goto L_101cb5d9;
  /* 101cb5cc lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 101cb5cf mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 101cb5d4 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 101cb5d6 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_101cb5d9:;
  /* 101cb5d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101cb5dc lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 101cb5e3 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 101cb5e6 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 101cb5eb shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 101cb5ed or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_101cb5ef:;
  /* 101cb5ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_101cb5f2:;
  /* 101cb5f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101cb5f4 je 0x101cb601 */
  if (C.zf) goto L_101cb601;
  /* 101cb5f6 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 101cb5f8 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 101cb5fc jmp 0x101cb601 */
  goto L_101cb601;
L_101cb5fe:;
  /* 101cb5fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_101cb601:;
  /* 101cb601 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 101cb604 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cb606 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 101cb609 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 101cb60b mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 101cb60f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 101cb612 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 101cb614 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101cb616 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 101cb619 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 101cb61b jne 0x101cb637 */
  if (!C.zf) goto L_101cb637;
  /* 101cb61d cmp ebx, dword ptr [0x101d6934] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x101d6934))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb623 jne 0x101cb637 */
  if (!C.zf) goto L_101cb637;
  /* 101cb625 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101cb628 cmp ecx, dword ptr [0x101d692c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x101d692c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb62e jne 0x101cb637 */
  if (!C.zf) goto L_101cb637;
  /* 101cb630 and dword ptr [0x101d6934], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101d6934)))&(0x0u); w32((uint32_t)(0x101d6934), (_r)); fl_logic(_r,32); }
L_101cb637:;
  /* 101cb637 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101cb63a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101cb63c lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_101cb63f:;
  /* 101cb63f pop edi */
  EDI = (pop32());
  /* 101cb640 pop esi */
  ESI = (pop32());
  /* 101cb641 pop ebx */
  EBX = (pop32());
  /* 101cb642 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101cb643 ret  */
  ESPCHK(0x101cb33bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b644 @ 0x101cb644 (177 bytes, 53 insns) */
void f_101cb644(void) {
  FTRACE(0x101cb644u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cb644 mov eax, dword ptr [0x101d6938] */
  EAX = (r32((uint32_t)(0x101d6938)));
  /* 101cb649 mov ecx, dword ptr [0x101d6928] */
  ECX = (r32((uint32_t)(0x101d6928)));
  /* 101cb64f push esi */
  push32((uint32_t)(ESI));
  /* 101cb650 push edi */
  push32((uint32_t)(EDI));
  /* 101cb651 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101cb653 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb655 jne 0x101cb687 */
  if (!C.zf) goto L_101cb687;
  /* 101cb657 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 101cb65b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 101cb65e push eax */
  push32((uint32_t)(EAX));
  /* 101cb65f push dword ptr [0x101d693c] */
  push32((uint32_t)(r32((uint32_t)(0x101d693c))));
  /* 101cb665 push edi */
  push32((uint32_t)(EDI));
  /* 101cb666 push dword ptr [0x101d7b84] */
  push32((uint32_t)(r32((uint32_t)(0x101d7b84))));
  /* 101cb66c call dword ptr [0x101ce0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce0ac))), 0x101cb672u);
  /* 101cb672 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb674 je 0x101cb6d7 */
  if (C.zf) goto L_101cb6d7;
  /* 101cb676 add dword ptr [0x101d6928], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x101d6928))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x101d6928), (_r)); fl_add(_a,_b,_r,32); }
  /* 101cb67d mov dword ptr [0x101d693c], eax */
  w32((uint32_t)(0x101d693c), (EAX));
  /* 101cb682 mov eax, dword ptr [0x101d6938] */
  EAX = (r32((uint32_t)(0x101d6938)));
L_101cb687:;
  /* 101cb687 mov ecx, dword ptr [0x101d693c] */
  ECX = (r32((uint32_t)(0x101d693c)));
  /* 101cb68d push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 101cb692 push 8 */
  push32((uint32_t)(0x8u));
  /* 101cb694 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 101cb697 push dword ptr [0x101d7b84] */
  push32((uint32_t)(r32((uint32_t)(0x101d7b84))));
  /* 101cb69d lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 101cb6a0 call dword ptr [0x101ce098] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce098))), 0x101cb6a6u);
  /* 101cb6a6 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb6a8 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 101cb6ab je 0x101cb6d7 */
  if (C.zf) goto L_101cb6d7;
  /* 101cb6ad push 4 */
  push32((uint32_t)(0x4u));
  /* 101cb6af push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 101cb6b4 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 101cb6b9 push edi */
  push32((uint32_t)(EDI));
  /* 101cb6ba call dword ptr [0x101ce0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce0a8))), 0x101cb6c0u);
  /* 101cb6c0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb6c2 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 101cb6c5 jne 0x101cb6db */
  if (!C.zf) goto L_101cb6db;
  /* 101cb6c7 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 101cb6ca push edi */
  push32((uint32_t)(EDI));
  /* 101cb6cb push dword ptr [0x101d7b84] */
  push32((uint32_t)(r32((uint32_t)(0x101d7b84))));
  /* 101cb6d1 call dword ptr [0x101ce080] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce080))), 0x101cb6d7u);
L_101cb6d7:;
  /* 101cb6d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cb6d9 jmp 0x101cb6f2 */
  goto L_101cb6f2;
L_101cb6db:;
  /* 101cb6db or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 101cb6df mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 101cb6e1 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 101cb6e4 inc dword ptr [0x101d6938] */
  { uint32_t _r=(r32((uint32_t)(0x101d6938)))+1; w32((uint32_t)(0x101d6938), (_r)); fl_inc(_r,32); }
  /* 101cb6ea mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 101cb6ed or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101cb6f0 mov eax, esi */
  EAX = (ESI);
L_101cb6f2:;
  /* 101cb6f2 pop edi */
  EDI = (pop32());
  /* 101cb6f3 pop esi */
  ESI = (pop32());
  /* 101cb6f4 ret  */
  ESPCHK(0x101cb644u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6f5 @ 0x101cb6f5 (251 bytes, 85 insns) */
void f_101cb6f5(void) {
  FTRACE(0x101cb6f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cb6f5 push ebp */
  push32((uint32_t)(EBP));
  /* 101cb6f6 mov ebp, esp */
  EBP = (ESP);
  /* 101cb6f8 push ecx */
  push32((uint32_t)(ECX));
  /* 101cb6f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cb6fc push ebx */
  push32((uint32_t)(EBX));
  /* 101cb6fd push esi */
  push32((uint32_t)(ESI));
  /* 101cb6fe push edi */
  push32((uint32_t)(EDI));
  /* 101cb6ff mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 101cb702 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 101cb705 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_101cb707:;
  /* 101cb707 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cb709 jl 0x101cb710 */
  if ((C.sf!=C.of)) goto L_101cb710;
  /* 101cb70b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 101cb70d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101cb70e jmp 0x101cb707 */
  goto L_101cb707;
L_101cb710:;
  /* 101cb710 mov eax, ebx */
  EAX = (EBX);
  /* 101cb712 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 101cb714 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101cb71a pop edx */
  EDX = (pop32());
  /* 101cb71b lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 101cb722 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_101cb725:;
  /* 101cb725 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 101cb728 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 101cb72b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cb72e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 101cb72f jne 0x101cb725 */
  if (!C.zf) goto L_101cb725;
  /* 101cb731 mov edi, ebx */
  EDI = (EBX);
  /* 101cb733 push 4 */
  push32((uint32_t)(0x4u));
  /* 101cb735 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 101cb738 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101cb73b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 101cb740 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 101cb745 push edi */
  push32((uint32_t)(EDI));
  /* 101cb746 call dword ptr [0x101ce0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce0a8))), 0x101cb74cu);
  /* 101cb74c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cb74e jne 0x101cb758 */
  if (!C.zf) goto L_101cb758;
  /* 101cb750 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101cb753 jmp 0x101cb7eb */
  goto L_101cb7eb;
L_101cb758:;
  /* 101cb758 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 101cb75e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb760 ja 0x101cb79e */
  if ((!C.cf&&!C.zf)) goto L_101cb79e;
  /* 101cb762 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_101cb765:;
  /* 101cb765 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 101cb769 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 101cb770 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 101cb776 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 101cb77d mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101cb77f lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 101cb785 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 101cb788 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 101cb792 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cb797 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 101cb79a cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb79c jbe 0x101cb765 */
  if ((C.cf||C.zf)) goto L_101cb765;
L_101cb79e:;
  /* 101cb79e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101cb7a1 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 101cb7a4 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cb7a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 101cb7ab pop edi */
  EDI = (pop32());
  /* 101cb7ac mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 101cb7af mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 101cb7b2 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 101cb7b5 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 101cb7b8 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 101cb7bb and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 101cb7c0 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 101cb7c7 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 101cb7ca mov cl, al */
  CL = (AL);
  /* 101cb7cc inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 101cb7ce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101cb7d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cb7d3 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 101cb7d6 jne 0x101cb7db */
  if (!C.zf) goto L_101cb7db;
  /* 101cb7d8 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_101cb7db:;
  /* 101cb7db mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 101cb7e0 mov ecx, ebx */
  ECX = (EBX);
  /* 101cb7e2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 101cb7e4 not edx */
  EDX = (~(EDX));
  /* 101cb7e6 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 101cb7e9 mov eax, ebx */
  EAX = (EBX);
L_101cb7eb:;
  /* 101cb7eb pop edi */
  EDI = (pop32());
  /* 101cb7ec pop esi */
  ESI = (pop32());
  /* 101cb7ed pop ebx */
  EBX = (pop32());
  /* 101cb7ee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101cb7ef ret  */
  ESPCHK(0x101cb6f5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7f0 @ 0x101cb7f0 (324 bytes, 102 insns) */
void f_101cb7f0(void) {
  FTRACE(0x101cb7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cb7f0 cmp dword ptr [0x101d0de0], -1 */
  { uint32_t _a=(r32((uint32_t)(0x101d0de0))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb7f7 push ebx */
  push32((uint32_t)(EBX));
  /* 101cb7f8 push ebp */
  push32((uint32_t)(EBP));
  /* 101cb7f9 push esi */
  push32((uint32_t)(ESI));
  /* 101cb7fa push edi */
  push32((uint32_t)(EDI));
  /* 101cb7fb jne 0x101cb804 */
  if (!C.zf) goto L_101cb804;
  /* 101cb7fd mov esi, 0x101d0dd0 */
  ESI = (0x101d0dd0u);
  /* 101cb802 jmp 0x101cb821 */
  goto L_101cb821;
L_101cb804:;
  /* 101cb804 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 101cb809 push 0 */
  push32((uint32_t)(0x0u));
  /* 101cb80b push dword ptr [0x101d7b84] */
  push32((uint32_t)(r32((uint32_t)(0x101d7b84))));
  /* 101cb811 call dword ptr [0x101ce098] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce098))), 0x101cb817u);
  /* 101cb817 mov esi, eax */
  ESI = (EAX);
  /* 101cb819 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101cb81b je 0x101cb92d */
  if (C.zf) goto L_101cb92d;
L_101cb821:;
  /* 101cb821 mov ebp, dword ptr [0x101ce0a8] */
  EBP = (r32((uint32_t)(0x101ce0a8)));
  /* 101cb827 push 4 */
  push32((uint32_t)(0x4u));
  /* 101cb829 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 101cb82e push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 101cb833 push 0 */
  push32((uint32_t)(0x0u));
  /* 101cb835 call ebp */
  call_ind((uint32_t)(EBP), 0x101cb837u);
  /* 101cb837 mov edi, eax */
  EDI = (EAX);
  /* 101cb839 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101cb83b je 0x101cb916 */
  if (C.zf) goto L_101cb916;
  /* 101cb841 push 4 */
  push32((uint32_t)(0x4u));
  /* 101cb843 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 101cb848 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 101cb84d push ebx */
  push32((uint32_t)(EBX));
  /* 101cb84e push edi */
  push32((uint32_t)(EDI));
  /* 101cb84f call ebp */
  call_ind((uint32_t)(EBP), 0x101cb851u);
  /* 101cb851 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cb853 je 0x101cb908 */
  if (C.zf) goto L_101cb908;
  /* 101cb859 mov eax, 0x101d0dd0 */
  EAX = (0x101d0dd0u);
  /* 101cb85e cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb860 jne 0x101cb880 */
  if (!C.zf) goto L_101cb880;
  /* 101cb862 cmp dword ptr [0x101d0dd0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101d0dd0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb869 jne 0x101cb870 */
  if (!C.zf) goto L_101cb870;
  /* 101cb86b mov dword ptr [0x101d0dd0], eax */
  w32((uint32_t)(0x101d0dd0), (EAX));
L_101cb870:;
  /* 101cb870 cmp dword ptr [0x101d0dd4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101d0dd4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb877 jne 0x101cb895 */
  if (!C.zf) goto L_101cb895;
  /* 101cb879 mov dword ptr [0x101d0dd4], eax */
  w32((uint32_t)(0x101d0dd4), (EAX));
  /* 101cb87e jmp 0x101cb895 */
  goto L_101cb895;
L_101cb880:;
  /* 101cb880 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101cb882 mov eax, dword ptr [0x101d0dd4] */
  EAX = (r32((uint32_t)(0x101d0dd4)));
  /* 101cb887 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 101cb88a mov dword ptr [0x101d0dd4], esi */
  w32((uint32_t)(0x101d0dd4), (ESI));
  /* 101cb890 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 101cb893 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_101cb895:;
  /* 101cb895 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 101cb89b lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 101cb8a1 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 101cb8a4 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 101cb8a7 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 101cb8aa mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 101cb8ad mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 101cb8b0 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 101cb8b2 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_101cb8b7:;
  /* 101cb8b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101cb8b9 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb8bc setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 101cb8bf dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 101cb8c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101cb8c2 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 101cb8c3 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 101cb8c4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 101cb8c6 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 101cb8c9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cb8cc cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb8d2 jl 0x101cb8b7 */
  if ((C.sf!=C.of)) goto L_101cb8b7;
  /* 101cb8d4 push ebx */
  push32((uint32_t)(EBX));
  /* 101cb8d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 101cb8d7 push edi */
  push32((uint32_t)(EDI));
  /* 101cb8d8 call 0x101c9c80 */
  push32(0x101cb8ddu); f_101c9c80();
  /* 101cb8dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101cb8e0:;
  /* 101cb8e0 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 101cb8e3 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cb8e5 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb8e7 jae 0x101cb904 */
  if (!C.cf) goto L_101cb904;
  /* 101cb8e9 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 101cb8f0 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 101cb8f3 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 101cb8f5 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 101cb8fc add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101cb902 jmp 0x101cb8e0 */
  goto L_101cb8e0;
L_101cb904:;
  /* 101cb904 mov eax, esi */
  EAX = (ESI);
  /* 101cb906 jmp 0x101cb92f */
  goto L_101cb92f;
L_101cb908:;
  /* 101cb908 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 101cb90d push 0 */
  push32((uint32_t)(0x0u));
  /* 101cb90f push edi */
  push32((uint32_t)(EDI));
  /* 101cb910 call dword ptr [0x101ce07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce07c))), 0x101cb916u);
L_101cb916:;
  /* 101cb916 cmp esi, 0x101d0dd0 */
  { uint32_t _a=(ESI),_b=(0x101d0dd0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb91c je 0x101cb92d */
  if (C.zf) goto L_101cb92d;
  /* 101cb91e push esi */
  push32((uint32_t)(ESI));
  /* 101cb91f push 0 */
  push32((uint32_t)(0x0u));
  /* 101cb921 push dword ptr [0x101d7b84] */
  push32((uint32_t)(r32((uint32_t)(0x101d7b84))));
  /* 101cb927 call dword ptr [0x101ce080] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce080))), 0x101cb92du);
L_101cb92d:;
  /* 101cb92d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101cb92f:;
  /* 101cb92f pop edi */
  EDI = (pop32());
  /* 101cb930 pop esi */
  ESI = (pop32());
  /* 101cb931 pop ebp */
  EBP = (pop32());
  /* 101cb932 pop ebx */
  EBX = (pop32());
  /* 101cb933 ret  */
  ESPCHK(0x101cb7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b934 @ 0x101cb934 (86 bytes, 27 insns) */
void f_101cb934(void) {
  FTRACE(0x101cb934u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cb934 push esi */
  push32((uint32_t)(ESI));
  /* 101cb935 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101cb939 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 101cb93e push 0 */
  push32((uint32_t)(0x0u));
  /* 101cb940 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 101cb943 call dword ptr [0x101ce07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce07c))), 0x101cb949u);
  /* 101cb949 cmp dword ptr [0x101d2df0], esi */
  { uint32_t _a=(r32((uint32_t)(0x101d2df0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb94f jne 0x101cb959 */
  if (!C.zf) goto L_101cb959;
  /* 101cb951 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 101cb954 mov dword ptr [0x101d2df0], eax */
  w32((uint32_t)(0x101d2df0), (EAX));
L_101cb959:;
  /* 101cb959 cmp esi, 0x101d0dd0 */
  { uint32_t _a=(ESI),_b=(0x101d0dd0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb95f je 0x101cb981 */
  if (C.zf) goto L_101cb981;
  /* 101cb961 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 101cb964 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 101cb966 push esi */
  push32((uint32_t)(ESI));
  /* 101cb967 push 0 */
  push32((uint32_t)(0x0u));
  /* 101cb969 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101cb96b mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 101cb96d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 101cb970 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 101cb973 push dword ptr [0x101d7b84] */
  push32((uint32_t)(r32((uint32_t)(0x101d7b84))));
  /* 101cb979 call dword ptr [0x101ce080] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce080))), 0x101cb97fu);
  /* 101cb97f pop esi */
  ESI = (pop32());
  /* 101cb980 ret  */
  ESPCHK(0x101cb934u, _esp0);
  ESP += 4; return;
L_101cb981:;
  /* 101cb981 or dword ptr [0x101d0de0], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x101d0de0)))|(0xffffffffu); w32((uint32_t)(0x101d0de0), (_r)); fl_logic(_r,32); }
  /* 101cb988 pop esi */
  ESI = (pop32());
  /* 101cb989 ret  */
  ESPCHK(0x101cb934u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b98a @ 0x101cb98a (194 bytes, 66 insns) */
void f_101cb98a(void) {
  FTRACE(0x101cb98au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cb98a push ebp */
  push32((uint32_t)(EBP));
  /* 101cb98b mov ebp, esp */
  EBP = (ESP);
  /* 101cb98d push ecx */
  push32((uint32_t)(ECX));
  /* 101cb98e push ebx */
  push32((uint32_t)(EBX));
  /* 101cb98f push esi */
  push32((uint32_t)(ESI));
  /* 101cb990 mov esi, dword ptr [0x101d0dd4] */
  ESI = (r32((uint32_t)(0x101d0dd4)));
  /* 101cb996 push edi */
  push32((uint32_t)(EDI));
L_101cb997:;
  /* 101cb997 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb99b je 0x101cba35 */
  if (C.zf) goto L_101cba35;
  /* 101cb9a1 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101cb9a5 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 101cb9ab mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_101cb9b0:;
  /* 101cb9b0 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb9b6 jne 0x101cb9f1 */
  if (!C.zf) goto L_101cb9f1;
  /* 101cb9b8 mov eax, ebx */
  EAX = (EBX);
  /* 101cb9ba push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 101cb9bf add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cb9c2 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 101cb9c7 push eax */
  push32((uint32_t)(EAX));
  /* 101cb9c8 call dword ptr [0x101ce07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce07c))), 0x101cb9ceu);
  /* 101cb9ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cb9d0 je 0x101cb9f1 */
  if (C.zf) goto L_101cb9f1;
  /* 101cb9d2 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 101cb9d5 dec dword ptr [0x101d6784] */
  { uint32_t _r=(r32((uint32_t)(0x101d6784)))-1; w32((uint32_t)(0x101d6784), (_r)); fl_dec(_r,32); }
  /* 101cb9db mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 101cb9de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cb9e0 je 0x101cb9e6 */
  if (C.zf) goto L_101cb9e6;
  /* 101cb9e2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cb9e4 jbe 0x101cb9e9 */
  if ((C.cf||C.zf)) goto L_101cb9e9;
L_101cb9e6:;
  /* 101cb9e6 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_101cb9e9:;
  /* 101cb9e9 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 101cb9ec dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 101cb9ef je 0x101cb9fe */
  if (C.zf) goto L_101cb9fe;
L_101cb9f1:;
  /* 101cb9f1 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cb9f7 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cb9fa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101cb9fc jge 0x101cb9b0 */
  if ((C.sf==C.of)) goto L_101cb9b0;
L_101cb9fe:;
  /* 101cb9fe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cba02 mov ecx, esi */
  ECX = (ESI);
  /* 101cba04 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 101cba07 je 0x101cba35 */
  if (C.zf) goto L_101cba35;
  /* 101cba09 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cba0d jne 0x101cba35 */
  if (!C.zf) goto L_101cba35;
  /* 101cba0f push 1 */
  push32((uint32_t)(0x1u));
  /* 101cba11 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 101cba14 pop edx */
  EDX = (pop32());
L_101cba15:;
  /* 101cba15 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cba18 jne 0x101cba26 */
  if (!C.zf) goto L_101cba26;
  /* 101cba1a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 101cba1b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cba1e cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cba24 jl 0x101cba15 */
  if ((C.sf!=C.of)) goto L_101cba15;
L_101cba26:;
  /* 101cba26 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cba2c jne 0x101cba35 */
  if (!C.zf) goto L_101cba35;
  /* 101cba2e push ecx */
  push32((uint32_t)(ECX));
  /* 101cba2f call 0x101cb934 */
  push32(0x101cba34u); f_101cb934();
  /* 101cba34 pop ecx */
  ECX = (pop32());
L_101cba35:;
  /* 101cba35 cmp esi, dword ptr [0x101d0dd4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101d0dd4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cba3b je 0x101cba47 */
  if (C.zf) goto L_101cba47;
  /* 101cba3d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cba41 jg 0x101cb997 */
  if ((!C.zf&&C.sf==C.of)) goto L_101cb997;
L_101cba47:;
  /* 101cba47 pop edi */
  EDI = (pop32());
  /* 101cba48 pop esi */
  ESI = (pop32());
  /* 101cba49 pop ebx */
  EBX = (pop32());
  /* 101cba4a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101cba4b ret  */
  ESPCHK(0x101cb98au, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba4c @ 0x101cba4c (87 bytes, 34 insns) */
void f_101cba4c(void) {
  FTRACE(0x101cba4cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cba4c mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101cba50 mov edx, 0x101d0dd0 */
  EDX = (0x101d0dd0u);
  /* 101cba55 push esi */
  push32((uint32_t)(ESI));
  /* 101cba56 mov ecx, edx */
  ECX = (EDX);
L_101cba58:;
  /* 101cba58 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cba5b jbe 0x101cba62 */
  if ((C.cf||C.zf)) goto L_101cba62;
  /* 101cba5d cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cba60 jb 0x101cba6a */
  if (C.cf) goto L_101cba6a;
L_101cba62:;
  /* 101cba62 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 101cba64 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cba66 je 0x101cba9f */
  if (C.zf) goto L_101cba9f;
  /* 101cba68 jmp 0x101cba58 */
  goto L_101cba58;
L_101cba6a:;
  /* 101cba6a test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 101cba6c jne 0x101cba9f */
  if (!C.zf) goto L_101cba9f;
  /* 101cba6e mov esi, eax */
  ESI = (EAX);
  /* 101cba70 mov edx, 0x100 */
  EDX = (0x100u);
  /* 101cba75 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 101cba7b cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cba7d jb 0x101cba9f */
  if (C.cf) goto L_101cba9f;
  /* 101cba7f mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 101cba83 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 101cba85 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 101cba89 mov ecx, eax */
  ECX = (EAX);
  /* 101cba8b and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 101cba90 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cba92 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 101cba94 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cba96 pop esi */
  ESI = (pop32());
  /* 101cba97 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 101cba9a lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 101cba9e ret  */
  ESPCHK(0x101cba4cu, _esp0);
  ESP += 4; return;
L_101cba9f:;
  /* 101cba9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cbaa1 pop esi */
  ESI = (pop32());
  /* 101cbaa2 ret  */
  ESPCHK(0x101cba4cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000baa3 @ 0x101cbaa3 (69 bytes, 19 insns) */
void f_101cbaa3(void) {
  FTRACE(0x101cbaa3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cbaa3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101cbaa7 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 101cbaab sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cbaae sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 101cbab1 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 101cbab5 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 101cbab9 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 101cbabc add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 101cbabe and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 101cbac1 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbac7 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 101cbace jne 0x101cbae7 */
  if (!C.zf) goto L_101cbae7;
  /* 101cbad0 inc dword ptr [0x101d6784] */
  { uint32_t _r=(r32((uint32_t)(0x101d6784)))+1; w32((uint32_t)(0x101d6784), (_r)); fl_inc(_r,32); }
  /* 101cbad6 cmp dword ptr [0x101d6784], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x101d6784))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbadd jne 0x101cbae7 */
  if (!C.zf) goto L_101cbae7;
  /* 101cbadf push 0x10 */
  push32((uint32_t)(0x10u));
  /* 101cbae1 call 0x101cb98a */
  push32(0x101cbae6u); f_101cb98a();
  /* 101cbae6 pop ecx */
  ECX = (pop32());
L_101cbae7:;
  /* 101cbae7 ret  */
  ESPCHK(0x101cbaa3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bae8 @ 0x101cbae8 (520 bytes, 180 insns) */
void f_101cbae8(void) {
  FTRACE(0x101cbae8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cbae8 push ebp */
  push32((uint32_t)(EBP));
  /* 101cbae9 mov ebp, esp */
  EBP = (ESP);
  /* 101cbaeb push ecx */
  push32((uint32_t)(ECX));
  /* 101cbaec push ecx */
  push32((uint32_t)(ECX));
  /* 101cbaed push ebx */
  push32((uint32_t)(EBX));
  /* 101cbaee push esi */
  push32((uint32_t)(ESI));
  /* 101cbaef mov esi, dword ptr [0x101d2df0] */
  ESI = (r32((uint32_t)(0x101d2df0)));
  /* 101cbaf5 push edi */
  push32((uint32_t)(EDI));
L_101cbaf6:;
  /* 101cbaf6 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 101cbaf9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbafc je 0x101cbba1 */
  if (C.zf) goto L_101cbba1;
  /* 101cbb02 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 101cbb05 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 101cbb0b mov eax, edi */
  EAX = (EDI);
  /* 101cbb0d sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cbb0f sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cbb12 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 101cbb15 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 101cbb18 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cbb1a cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbb1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101cbb1f jae 0x101cbb5b */
  if (!C.cf) goto L_101cbb5b;
L_101cbb21:;
  /* 101cbb21 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 101cbb23 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cbb26 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbb28 jl 0x101cbb44 */
  if ((C.sf!=C.of)) goto L_101cbb44;
  /* 101cbb2a cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbb2d jbe 0x101cbb44 */
  if ((C.cf||C.zf)) goto L_101cbb44;
  /* 101cbb2f push ebx */
  push32((uint32_t)(EBX));
  /* 101cbb30 push ecx */
  push32((uint32_t)(ECX));
  /* 101cbb31 push eax */
  push32((uint32_t)(EAX));
  /* 101cbb32 call 0x101cbcf0 */
  push32(0x101cbb37u); f_101cbcf0();
  /* 101cbb37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cbb3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cbb3c jne 0x101cbbb3 */
  if (!C.zf) goto L_101cbbb3;
  /* 101cbb3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101cbb41 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_101cbb44:;
  /* 101cbb44 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101cbb47 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 101cbb4d add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cbb52 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbb54 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101cbb57 jb 0x101cbb21 */
  if (C.cf) goto L_101cbb21;
  /* 101cbb59 jmp 0x101cbb5e */
  goto L_101cbb5e;
L_101cbb5b:;
  /* 101cbb5b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_101cbb5e:;
  /* 101cbb5e mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 101cbb61 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 101cbb64 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 101cbb67 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 101cbb6a cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbb6c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 101cbb6f jae 0x101cbba4 */
  if (!C.cf) goto L_101cbba4;
L_101cbb71:;
  /* 101cbb71 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 101cbb73 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbb75 jl 0x101cbb90 */
  if ((C.sf!=C.of)) goto L_101cbb90;
  /* 101cbb77 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbb7a jbe 0x101cbb90 */
  if ((C.cf||C.zf)) goto L_101cbb90;
  /* 101cbb7c push ebx */
  push32((uint32_t)(EBX));
  /* 101cbb7d push eax */
  push32((uint32_t)(EAX));
  /* 101cbb7e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 101cbb81 call 0x101cbcf0 */
  push32(0x101cbb86u); f_101cbcf0();
  /* 101cbb86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cbb89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cbb8b jne 0x101cbbb3 */
  if (!C.zf) goto L_101cbbb3;
  /* 101cbb8d mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_101cbb90:;
  /* 101cbb90 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 101cbb97 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101cbb9a cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbb9d jb 0x101cbb71 */
  if (C.cf) goto L_101cbb71;
  /* 101cbb9f jmp 0x101cbba4 */
  goto L_101cbba4;
L_101cbba1:;
  /* 101cbba1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_101cbba4:;
  /* 101cbba4 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 101cbba6 cmp esi, dword ptr [0x101d2df0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101d2df0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbbac je 0x101cbbc3 */
  if (C.zf) goto L_101cbbc3;
  /* 101cbbae jmp 0x101cbaf6 */
  goto L_101cbaf6;
L_101cbbb3:;
  /* 101cbbb3 mov dword ptr [0x101d2df0], esi */
  w32((uint32_t)(0x101d2df0), (ESI));
  /* 101cbbb9 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 101cbbbb mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 101cbbbe jmp 0x101cbceb */
  goto L_101cbceb;
L_101cbbc3:;
  /* 101cbbc3 mov eax, 0x101d0dd0 */
  EAX = (0x101d0dd0u);
  /* 101cbbc8 mov edi, eax */
  EDI = (EAX);
L_101cbbca:;
  /* 101cbbca cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbbce je 0x101cbbd6 */
  if (C.zf) goto L_101cbbd6;
  /* 101cbbd0 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbbd4 jne 0x101cbbe2 */
  if (!C.zf) goto L_101cbbe2;
L_101cbbd6:;
  /* 101cbbd6 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 101cbbd8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbbda je 0x101cbcb7 */
  if (C.zf) goto L_101cbcb7;
  /* 101cbbe0 jmp 0x101cbbca */
  goto L_101cbbca;
L_101cbbe2:;
  /* 101cbbe2 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 101cbbe5 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101cbbe9 mov esi, ebx */
  ESI = (EBX);
  /* 101cbbeb mov eax, ebx */
  EAX = (EBX);
  /* 101cbbed sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cbbef sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cbbf2 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 101cbbf5 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 101cbbf8 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101cbbfb cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbbfe jne 0x101cbc11 */
  if (!C.zf) goto L_101cbc11;
L_101cbc00:;
  /* 101cbc00 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbc04 jge 0x101cbc11 */
  if ((C.sf==C.of)) goto L_101cbc11;
  /* 101cbc06 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cbc09 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 101cbc0c cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbc0f je 0x101cbc00 */
  if (C.zf) goto L_101cbc00;
L_101cbc11:;
  /* 101cbc11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101cbc14 push 4 */
  push32((uint32_t)(0x4u));
  /* 101cbc16 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 101cbc19 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 101cbc1e push eax */
  push32((uint32_t)(EAX));
  /* 101cbc1f push esi */
  push32((uint32_t)(ESI));
  /* 101cbc20 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 101cbc23 call dword ptr [0x101ce0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce0a8))), 0x101cbc29u);
  /* 101cbc29 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbc2b jne 0x101cbce9 */
  if (!C.zf) goto L_101cbce9;
  /* 101cbc31 push 0 */
  push32((uint32_t)(0x0u));
  /* 101cbc33 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 101cbc36 push esi */
  push32((uint32_t)(ESI));
  /* 101cbc37 call 0x101c9c80 */
  push32(0x101cbc3cu); f_101c9c80();
  /* 101cbc3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 101cbc3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cbc42 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101cbc44 mov ecx, ebx */
  ECX = (EBX);
  /* 101cbc46 jle 0x101cbc78 */
  if ((C.zf||C.sf!=C.of)) goto L_101cbc78;
  /* 101cbc48 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 101cbc4b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_101cbc4e:;
  /* 101cbc4e or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 101cbc55 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 101cbc58 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 101cbc5b mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 101cbc60 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 101cbc62 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 101cbc64 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 101cbc6b add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cbc70 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cbc73 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 101cbc76 jne 0x101cbc4e */
  if (!C.zf) goto L_101cbc4e;
L_101cbc78:;
  /* 101cbc78 mov dword ptr [0x101d2df0], edi */
  w32((uint32_t)(0x101d2df0), (EDI));
  /* 101cbc7e lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_101cbc84:;
  /* 101cbc84 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbc86 jae 0x101cbc94 */
  if (!C.cf) goto L_101cbc94;
  /* 101cbc88 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbc8b je 0x101cbc92 */
  if (C.zf) goto L_101cbc92;
  /* 101cbc8d add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cbc90 jmp 0x101cbc84 */
  goto L_101cbc84;
L_101cbc92:;
  /* 101cbc92 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_101cbc94:;
  /* 101cbc94 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cbc96 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 101cbc98 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 101cbc9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cbc9e mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 101cbca1 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 101cbca4 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 101cbca6 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 101cbca9 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 101cbcad lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 101cbcb3 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 101cbcb5 jmp 0x101cbceb */
  goto L_101cbceb;
L_101cbcb7:;
  /* 101cbcb7 call 0x101cb7f0 */
  push32(0x101cbcbcu); f_101cb7f0();
  /* 101cbcbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cbcbe je 0x101cbce9 */
  if (C.zf) goto L_101cbce9;
  /* 101cbcc0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 101cbcc3 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 101cbcc6 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 101cbcca mov dword ptr [0x101d2df0], eax */
  w32((uint32_t)(0x101d2df0), (EAX));
  /* 101cbccf mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 101cbcd1 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 101cbcd6 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cbcd8 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 101cbcdb movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 101cbcde sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 101cbce1 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 101cbce7 jmp 0x101cbceb */
  goto L_101cbceb;
L_101cbce9:;
  /* 101cbce9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101cbceb:;
  /* 101cbceb pop edi */
  EDI = (pop32());
  /* 101cbcec pop esi */
  ESI = (pop32());
  /* 101cbced pop ebx */
  EBX = (pop32());
  /* 101cbcee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101cbcef ret  */
  ESPCHK(0x101cbae8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bcf0 @ 0x101cbcf0 (292 bytes, 125 insns) */
void f_101cbcf0(void) {
  FTRACE(0x101cbcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cbcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 101cbcf1 mov ebp, esp */
  EBP = (ESP);
  /* 101cbcf3 push ecx */
  push32((uint32_t)(ECX));
  /* 101cbcf4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cbcf7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 101cbcfa push ebx */
  push32((uint32_t)(EBX));
  /* 101cbcfb push esi */
  push32((uint32_t)(ESI));
  /* 101cbcfc mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 101cbcff push edi */
  push32((uint32_t)(EDI));
  /* 101cbd00 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 101cbd02 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 101cbd08 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbd0a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 101cbd0d mov eax, edi */
  EAX = (EDI);
  /* 101cbd0f mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101cbd12 jb 0x101cbd35 */
  if (C.cf) goto L_101cbd35;
  /* 101cbd14 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 101cbd17 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 101cbd19 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbd1b jae 0x101cbd24 */
  if (!C.cf) goto L_101cbd24;
  /* 101cbd1d add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 101cbd1f sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 101cbd22 jmp 0x101cbd2d */
  goto L_101cbd2d;
L_101cbd24:;
  /* 101cbd24 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 101cbd28 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 101cbd2b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_101cbd2d:;
  /* 101cbd2d lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 101cbd30 jmp 0x101cbe03 */
  goto L_101cbe03;
L_101cbd35:;
  /* 101cbd35 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101cbd37 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cbd3a je 0x101cbd3e */
  if (C.zf) goto L_101cbd3e;
  /* 101cbd3c mov eax, esi */
  EAX = (ESI);
L_101cbd3e:;
  /* 101cbd3e lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 101cbd41 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbd43 jae 0x101cbd88 */
  if (!C.cf) goto L_101cbd88;
L_101cbd45:;
  /* 101cbd45 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 101cbd47 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 101cbd49 jne 0x101cbd7b */
  if (!C.zf) goto L_101cbd7b;
  /* 101cbd4b push 1 */
  push32((uint32_t)(0x1u));
  /* 101cbd4d lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 101cbd50 pop esi */
  ESI = (pop32());
L_101cbd51:;
  /* 101cbd51 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cbd54 jne 0x101cbd5a */
  if (!C.zf) goto L_101cbd5a;
  /* 101cbd56 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101cbd57 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101cbd58 jmp 0x101cbd51 */
  goto L_101cbd51;
L_101cbd5a:;
  /* 101cbd5a cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbd5c jae 0x101cbdac */
  if (!C.cf) goto L_101cbdac;
  /* 101cbd5e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbd61 jne 0x101cbd68 */
  if (!C.zf) goto L_101cbd68;
  /* 101cbd63 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 101cbd66 jmp 0x101cbd74 */
  goto L_101cbd74;
L_101cbd68:;
  /* 101cbd68 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 101cbd6b cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbd6e jb 0x101cbe0d */
  if (C.cf) goto L_101cbe0d;
L_101cbd74:;
  /* 101cbd74 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 101cbd77 mov eax, ebx */
  EAX = (EBX);
  /* 101cbd79 jmp 0x101cbd80 */
  goto L_101cbd80;
L_101cbd7b:;
  /* 101cbd7b movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 101cbd7e add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_101cbd80:;
  /* 101cbd80 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 101cbd83 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbd86 jb 0x101cbd45 */
  if (C.cf) goto L_101cbd45;
L_101cbd88:;
  /* 101cbd88 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_101cbd8b:;
  /* 101cbd8b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbd8d jae 0x101cbe0d */
  if (!C.cf) goto L_101cbe0d;
  /* 101cbd8f lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 101cbd92 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbd95 jae 0x101cbe0d */
  if (!C.cf) goto L_101cbe0d;
  /* 101cbd97 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101cbd99 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101cbd9b jne 0x101cbddd */
  if (!C.zf) goto L_101cbddd;
  /* 101cbd9d push 1 */
  push32((uint32_t)(0x1u));
  /* 101cbd9f lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 101cbda2 pop eax */
  EAX = (pop32());
L_101cbda3:;
  /* 101cbda3 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cbda6 jne 0x101cbdcd */
  if (!C.zf) goto L_101cbdcd;
  /* 101cbda8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101cbda9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101cbdaa jmp 0x101cbda3 */
  goto L_101cbda3;
L_101cbdac:;
  /* 101cbdac lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 101cbdaf cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbdb2 jae 0x101cbdbd */
  if (!C.cf) goto L_101cbdbd;
  /* 101cbdb4 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cbdb6 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 101cbdb8 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 101cbdbb jmp 0x101cbdc6 */
  goto L_101cbdc6;
L_101cbdbd:;
  /* 101cbdbd and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 101cbdc1 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 101cbdc4 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_101cbdc6:;
  /* 101cbdc6 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 101cbdc8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cbdcb jmp 0x101cbe03 */
  goto L_101cbe03;
L_101cbdcd:;
  /* 101cbdcd cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbdcf jae 0x101cbde4 */
  if (!C.cf) goto L_101cbde4;
  /* 101cbdd1 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 101cbdd4 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbdd7 jb 0x101cbe0d */
  if (C.cf) goto L_101cbe0d;
  /* 101cbdd9 mov esi, ebx */
  ESI = (EBX);
  /* 101cbddb jmp 0x101cbd8b */
  goto L_101cbd8b;
L_101cbddd:;
  /* 101cbddd movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 101cbde0 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101cbde2 jmp 0x101cbd8b */
  goto L_101cbd8b;
L_101cbde4:;
  /* 101cbde4 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 101cbde7 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbdea jae 0x101cbdf5 */
  if (!C.cf) goto L_101cbdf5;
  /* 101cbdec sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cbdee mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 101cbdf0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 101cbdf3 jmp 0x101cbdfe */
  goto L_101cbdfe;
L_101cbdf5:;
  /* 101cbdf5 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 101cbdf9 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 101cbdfc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_101cbdfe:;
  /* 101cbdfe mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 101cbe00 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_101cbe03:;
  /* 101cbe03 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101cbe06 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 101cbe09 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cbe0b jmp 0x101cbe0f */
  goto L_101cbe0f;
L_101cbe0d:;
  /* 101cbe0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101cbe0f:;
  /* 101cbe0f pop edi */
  EDI = (pop32());
  /* 101cbe10 pop esi */
  ESI = (pop32());
  /* 101cbe11 pop ebx */
  EBX = (pop32());
  /* 101cbe12 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101cbe13 ret  */
  ESPCHK(0x101cbcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be14 @ 0x101cbe14 (137 bytes, 50 insns) */
void f_101cbe14(void) {
  FTRACE(0x101cbe14u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cbe14 push ebx */
  push32((uint32_t)(EBX));
  /* 101cbe15 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101cbe17 cmp dword ptr [0x101d6788], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101d6788))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbe1d push esi */
  push32((uint32_t)(ESI));
  /* 101cbe1e push edi */
  push32((uint32_t)(EDI));
  /* 101cbe1f jne 0x101cbe63 */
  if (!C.zf) goto L_101cbe63;
  /* 101cbe21 push 0x101ce548 */
  push32((uint32_t)(0x101ce548u));
  /* 101cbe26 call dword ptr [0x101ce0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce0b0))), 0x101cbe2cu);
  /* 101cbe2c mov edi, eax */
  EDI = (EAX);
  /* 101cbe2e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbe30 je 0x101cbe99 */
  if (C.zf) goto L_101cbe99;
  /* 101cbe32 mov esi, dword ptr [0x101ce088] */
  ESI = (r32((uint32_t)(0x101ce088)));
  /* 101cbe38 push 0x101ce53c */
  push32((uint32_t)(0x101ce53cu));
  /* 101cbe3d push edi */
  push32((uint32_t)(EDI));
  /* 101cbe3e call esi */
  call_ind((uint32_t)(ESI), 0x101cbe40u);
  /* 101cbe40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cbe42 mov dword ptr [0x101d6788], eax */
  w32((uint32_t)(0x101d6788), (EAX));
  /* 101cbe47 je 0x101cbe99 */
  if (C.zf) goto L_101cbe99;
  /* 101cbe49 push 0x101ce52c */
  push32((uint32_t)(0x101ce52cu));
  /* 101cbe4e push edi */
  push32((uint32_t)(EDI));
  /* 101cbe4f call esi */
  call_ind((uint32_t)(ESI), 0x101cbe51u);
  /* 101cbe51 push 0x101ce518 */
  push32((uint32_t)(0x101ce518u));
  /* 101cbe56 push edi */
  push32((uint32_t)(EDI));
  /* 101cbe57 mov dword ptr [0x101d678c], eax */
  w32((uint32_t)(0x101d678c), (EAX));
  /* 101cbe5c call esi */
  call_ind((uint32_t)(ESI), 0x101cbe5eu);
  /* 101cbe5e mov dword ptr [0x101d6790], eax */
  w32((uint32_t)(0x101d6790), (EAX));
L_101cbe63:;
  /* 101cbe63 mov eax, dword ptr [0x101d678c] */
  EAX = (r32((uint32_t)(0x101d678c)));
  /* 101cbe68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cbe6a je 0x101cbe82 */
  if (C.zf) goto L_101cbe82;
  /* 101cbe6c call eax */
  call_ind((uint32_t)(EAX), 0x101cbe6eu);
  /* 101cbe6e mov ebx, eax */
  EBX = (EAX);
  /* 101cbe70 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101cbe72 je 0x101cbe82 */
  if (C.zf) goto L_101cbe82;
  /* 101cbe74 mov eax, dword ptr [0x101d6790] */
  EAX = (r32((uint32_t)(0x101d6790)));
  /* 101cbe79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cbe7b je 0x101cbe82 */
  if (C.zf) goto L_101cbe82;
  /* 101cbe7d push ebx */
  push32((uint32_t)(EBX));
  /* 101cbe7e call eax */
  call_ind((uint32_t)(EAX), 0x101cbe80u);
  /* 101cbe80 mov ebx, eax */
  EBX = (EAX);
L_101cbe82:;
  /* 101cbe82 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101cbe86 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101cbe8a push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101cbe8e push ebx */
  push32((uint32_t)(EBX));
  /* 101cbe8f call dword ptr [0x101d6788] */
  call_ind((uint32_t)(r32((uint32_t)(0x101d6788))), 0x101cbe95u);
L_101cbe95:;
  /* 101cbe95 pop edi */
  EDI = (pop32());
  /* 101cbe96 pop esi */
  ESI = (pop32());
  /* 101cbe97 pop ebx */
  EBX = (pop32());
  /* 101cbe98 ret  */
  ESPCHK(0x101cbe14u, _esp0);
  ESP += 4; return;
L_101cbe99:;
  /* 101cbe99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cbe9b jmp 0x101cbe95 */
  goto L_101cbe95;
}

/* _strncpy @ 0x101cbea0 (254 bytes, 109 insns) */
void f_101cbea0(void) {
  FTRACE(0x101cbea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cbea0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 101cbea4 push edi */
  push32((uint32_t)(EDI));
  /* 101cbea5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101cbea7 je 0x101cbf23 */
  if (C.zf) goto L_101cbf23;
  /* 101cbea9 push esi */
  push32((uint32_t)(ESI));
  /* 101cbeaa push ebx */
  push32((uint32_t)(EBX));
  /* 101cbeab mov ebx, ecx */
  EBX = (ECX);
  /* 101cbead mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 101cbeb1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 101cbeb7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 101cbebb jne 0x101cbec4 */
  if (!C.zf) goto L_101cbec4;
  /* 101cbebd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101cbec0 jne 0x101cbf31 */
  if (!C.zf) goto L_101cbf31;
  /* 101cbec2 jmp 0x101cbee5 */
  goto L_101cbee5;
L_101cbec4:;
  /* 101cbec4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101cbec6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101cbec7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101cbec9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101cbeca dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101cbecb je 0x101cbef2 */
  if (C.zf) goto L_101cbef2;
  /* 101cbecd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101cbecf je 0x101cbefa */
  if (C.zf) goto L_101cbefa;
  /* 101cbed1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 101cbed7 jne 0x101cbec4 */
  if (!C.zf) goto L_101cbec4;
  /* 101cbed9 mov ebx, ecx */
  EBX = (ECX);
  /* 101cbedb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101cbede jne 0x101cbf31 */
  if (!C.zf) goto L_101cbf31;
L_101cbee0:;
  /* 101cbee0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 101cbee3 je 0x101cbef2 */
  if (C.zf) goto L_101cbef2;
L_101cbee5:;
  /* 101cbee5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101cbee7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101cbee8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101cbeea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101cbeeb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101cbeed je 0x101cbf1e */
  if (C.zf) goto L_101cbf1e;
  /* 101cbeef dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101cbef0 jne 0x101cbee5 */
  if (!C.zf) goto L_101cbee5;
L_101cbef2:;
  /* 101cbef2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101cbef6 pop ebx */
  EBX = (pop32());
  /* 101cbef7 pop esi */
  ESI = (pop32());
  /* 101cbef8 pop edi */
  EDI = (pop32());
  /* 101cbef9 ret  */
  ESPCHK(0x101cbea0u, _esp0);
  ESP += 4; return;
L_101cbefa:;
  /* 101cbefa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 101cbf00 je 0x101cbf14 */
  if (C.zf) goto L_101cbf14;
L_101cbf02:;
  /* 101cbf02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101cbf04 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101cbf05 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101cbf06 je 0x101cbf96 */
  if (C.zf) goto L_101cbf96;
  /* 101cbf0c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 101cbf12 jne 0x101cbf02 */
  if (!C.zf) goto L_101cbf02;
L_101cbf14:;
  /* 101cbf14 mov ebx, ecx */
  EBX = (ECX);
  /* 101cbf16 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101cbf19 jne 0x101cbf87 */
  if (!C.zf) goto L_101cbf87;
L_101cbf1b:;
  /* 101cbf1b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101cbf1d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_101cbf1e:;
  /* 101cbf1e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101cbf1f jne 0x101cbf1b */
  if (!C.zf) goto L_101cbf1b;
  /* 101cbf21 pop ebx */
  EBX = (pop32());
  /* 101cbf22 pop esi */
  ESI = (pop32());
L_101cbf23:;
  /* 101cbf23 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101cbf27 pop edi */
  EDI = (pop32());
  /* 101cbf28 ret  */
  ESPCHK(0x101cbea0u, _esp0);
  ESP += 4; return;
L_101cbf29:;
  /* 101cbf29 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 101cbf2b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101cbf2e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101cbf2f je 0x101cbee0 */
  if (C.zf) goto L_101cbee0;
L_101cbf31:;
  /* 101cbf31 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 101cbf36 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 101cbf38 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cbf3a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101cbf3d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 101cbf3f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 101cbf41 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101cbf44 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 101cbf49 je 0x101cbf29 */
  if (C.zf) goto L_101cbf29;
  /* 101cbf4b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101cbf4d je 0x101cbf7b */
  if (C.zf) goto L_101cbf7b;
  /* 101cbf4f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 101cbf51 je 0x101cbf71 */
  if (C.zf) goto L_101cbf71;
  /* 101cbf53 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 101cbf59 je 0x101cbf67 */
  if (C.zf) goto L_101cbf67;
  /* 101cbf5b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 101cbf61 jne 0x101cbf29 */
  if (!C.zf) goto L_101cbf29;
  /* 101cbf63 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 101cbf65 jmp 0x101cbf7f */
  goto L_101cbf7f;
L_101cbf67:;
  /* 101cbf67 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 101cbf6d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 101cbf6f jmp 0x101cbf7f */
  goto L_101cbf7f;
L_101cbf71:;
  /* 101cbf71 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 101cbf77 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 101cbf79 jmp 0x101cbf7f */
  goto L_101cbf7f;
L_101cbf7b:;
  /* 101cbf7b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101cbf7d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_101cbf7f:;
  /* 101cbf7f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101cbf82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cbf84 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101cbf85 je 0x101cbf91 */
  if (C.zf) goto L_101cbf91;
L_101cbf87:;
  /* 101cbf87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101cbf89:;
  /* 101cbf89 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 101cbf8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101cbf8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101cbf8f jne 0x101cbf89 */
  if (!C.zf) goto L_101cbf89;
L_101cbf91:;
  /* 101cbf91 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 101cbf94 jne 0x101cbf1b */
  if (!C.zf) goto L_101cbf1b;
L_101cbf96:;
  /* 101cbf96 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101cbf9a pop ebx */
  EBX = (pop32());
  /* 101cbf9b pop esi */
  ESI = (pop32());
  /* 101cbf9c pop edi */
  EDI = (pop32());
  /* 101cbf9d ret  */
  ESPCHK(0x101cbea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf9e @ 0x101cbf9e (115 bytes, 37 insns) */
void f_101cbf9e(void) {
  FTRACE(0x101cbf9eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cbf9e push esi */
  push32((uint32_t)(ESI));
  /* 101cbf9f call 0x101cc01a */
  push32(0x101cbfa4u); f_101cc01a();
  /* 101cbfa4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 101cbfa8 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101cbfaa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101cbfac mov eax, 0x101d2e00 */
  EAX = (0x101d2e00u);
L_101cbfb1:;
  /* 101cbfb1 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbfb3 je 0x101cbfd7 */
  if (C.zf) goto L_101cbfd7;
  /* 101cbfb5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cbfb8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101cbfb9 cmp eax, 0x101d2f68 */
  { uint32_t _a=(EAX),_b=(0x101d2f68u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbfbe jl 0x101cbfb1 */
  if ((C.sf!=C.of)) goto L_101cbfb1;
  /* 101cbfc0 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbfc3 jb 0x101cbfe7 */
  if (C.cf) goto L_101cbfe7;
  /* 101cbfc5 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbfc8 ja 0x101cbfe7 */
  if ((!C.cf&&!C.zf)) goto L_101cbfe7;
  /* 101cbfca call 0x101cc011 */
  push32(0x101cbfcfu); f_101cc011();
  /* 101cbfcf mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 101cbfd5 pop esi */
  ESI = (pop32());
  /* 101cbfd6 ret  */
  ESPCHK(0x101cbf9eu, _esp0);
  ESP += 4; return;
L_101cbfd7:;
  /* 101cbfd7 call 0x101cc011 */
  push32(0x101cbfdcu); f_101cc011();
  /* 101cbfdc mov ecx, dword ptr [esi*8 + 0x101d2e04] */
  ECX = (r32((uint32_t)(ESI*8 + 0x101d2e04)));
  /* 101cbfe3 pop esi */
  ESI = (pop32());
  /* 101cbfe4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101cbfe6 ret  */
  ESPCHK(0x101cbf9eu, _esp0);
  ESP += 4; return;
L_101cbfe7:;
  /* 101cbfe7 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbfed jb 0x101cc004 */
  if (C.cf) goto L_101cc004;
  /* 101cbfef cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cbff5 ja 0x101cc004 */
  if ((!C.cf&&!C.zf)) goto L_101cc004;
  /* 101cbff7 call 0x101cc011 */
  push32(0x101cbffcu); f_101cc011();
  /* 101cbffc mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 101cc002 pop esi */
  ESI = (pop32());
  /* 101cc003 ret  */
  ESPCHK(0x101cbf9eu, _esp0);
  ESP += 4; return;
L_101cc004:;
  /* 101cc004 call 0x101cc011 */
  push32(0x101cc009u); f_101cc011();
  /* 101cc009 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 101cc00f pop esi */
  ESI = (pop32());
  /* 101cc010 ret  */
  ESPCHK(0x101cbf9eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c011 @ 0x101cc011 (9 bytes, 3 insns) */
void f_101cc011(void) {
  FTRACE(0x101cc011u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cc011 call 0x101c80e8 */
  push32(0x101cc016u); f_101c80e8();
  /* 101cc016 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cc019 ret  */
  ESPCHK(0x101cc011u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c01a @ 0x101cc01a (9 bytes, 3 insns) */
void f_101cc01a(void) {
  FTRACE(0x101cc01au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cc01a call 0x101c80e8 */
  push32(0x101cc01fu); f_101c80e8();
  /* 101cc01f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cc022 ret  */
  ESPCHK(0x101cc01au, _esp0);
  ESP += 4; return;
}

/* FUN_1000c023 @ 0x101cc023 (127 bytes, 48 insns) */
void f_101cc023(void) {
  FTRACE(0x101cc023u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cc023 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101cc027 push esi */
  push32((uint32_t)(ESI));
  /* 101cc028 cmp ecx, dword ptr [0x101d7ca0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x101d7ca0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc02e push edi */
  push32((uint32_t)(EDI));
  /* 101cc02f jae 0x101cc089 */
  if (!C.cf) goto L_101cc089;
  /* 101cc031 mov eax, ecx */
  EAX = (ECX);
  /* 101cc033 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 101cc036 lea edi, [eax*4 + 0x101d7ba0] */
  EDI = ((uint32_t)(EAX*4 + 0x101d7ba0));
  /* 101cc03d mov eax, ecx */
  EAX = (ECX);
  /* 101cc03f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101cc042 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 101cc045 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 101cc047 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 101cc04a add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cc04c test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 101cc050 je 0x101cc089 */
  if (C.zf) goto L_101cc089;
  /* 101cc052 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc055 je 0x101cc089 */
  if (C.zf) goto L_101cc089;
  /* 101cc057 cmp dword ptr [0x101d65c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101d65c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc05e jne 0x101cc07f */
  if (!C.zf) goto L_101cc07f;
  /* 101cc060 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cc062 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cc064 je 0x101cc076 */
  if (C.zf) goto L_101cc076;
  /* 101cc066 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101cc067 je 0x101cc071 */
  if (C.zf) goto L_101cc071;
  /* 101cc069 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101cc06a jne 0x101cc07f */
  if (!C.zf) goto L_101cc07f;
  /* 101cc06c push eax */
  push32((uint32_t)(EAX));
  /* 101cc06d push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 101cc06f jmp 0x101cc079 */
  goto L_101cc079;
L_101cc071:;
  /* 101cc071 push eax */
  push32((uint32_t)(EAX));
  /* 101cc072 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 101cc074 jmp 0x101cc079 */
  goto L_101cc079;
L_101cc076:;
  /* 101cc076 push eax */
  push32((uint32_t)(EAX));
  /* 101cc077 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_101cc079:;
  /* 101cc079 call dword ptr [0x101ce0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce0b4))), 0x101cc07fu);
L_101cc07f:;
  /* 101cc07f mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 101cc081 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 101cc085 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cc087 jmp 0x101cc09f */
  goto L_101cc09f;
L_101cc089:;
  /* 101cc089 call 0x101cc011 */
  push32(0x101cc08eu); f_101cc011();
  /* 101cc08e mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101cc094 call 0x101cc01a */
  push32(0x101cc099u); f_101cc01a();
  /* 101cc099 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101cc09c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_101cc09f:;
  /* 101cc09f pop edi */
  EDI = (pop32());
  /* 101cc0a0 pop esi */
  ESI = (pop32());
  /* 101cc0a1 ret  */
  ESPCHK(0x101cc023u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0a2 @ 0x101cc0a2 (66 bytes, 19 insns) */
void f_101cc0a2(void) {
  FTRACE(0x101cc0a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cc0a2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101cc0a6 cmp eax, dword ptr [0x101d7ca0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x101d7ca0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc0ac jae 0x101cc0cd */
  if (!C.cf) goto L_101cc0cd;
  /* 101cc0ae mov ecx, eax */
  ECX = (EAX);
  /* 101cc0b0 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101cc0b3 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101cc0b6 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101cc0b9 mov ecx, dword ptr [ecx*4 + 0x101d7ba0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101d7ba0)));
  /* 101cc0c0 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 101cc0c5 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 101cc0c8 je 0x101cc0cd */
  if (C.zf) goto L_101cc0cd;
  /* 101cc0ca mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 101cc0cc ret  */
  ESPCHK(0x101cc0a2u, _esp0);
  ESP += 4; return;
L_101cc0cd:;
  /* 101cc0cd call 0x101cc011 */
  push32(0x101cc0d2u); f_101cc011();
  /* 101cc0d2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101cc0d8 call 0x101cc01a */
  push32(0x101cc0ddu); f_101cc01a();
  /* 101cc0dd and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101cc0e0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101cc0e3 ret  */
  ESPCHK(0x101cc0a2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0e4 @ 0x101cc0e4 (95 bytes, 34 insns) */
void f_101cc0e4(void) {
  FTRACE(0x101cc0e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cc0e4 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101cc0e8 push ebx */
  push32((uint32_t)(EBX));
  /* 101cc0e9 mov ecx, eax */
  ECX = (EAX);
  /* 101cc0eb and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101cc0ee sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101cc0f1 push esi */
  push32((uint32_t)(ESI));
  /* 101cc0f2 push edi */
  push32((uint32_t)(EDI));
  /* 101cc0f3 mov esi, dword ptr [ecx*4 + 0x101d7ba0] */
  ESI = (r32((uint32_t)(ECX*4 + 0x101d7ba0)));
  /* 101cc0fa lea ebx, [ecx*4 + 0x101d7ba0] */
  EBX = ((uint32_t)(ECX*4 + 0x101d7ba0));
  /* 101cc101 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 101cc104 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 101cc107 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101cc109 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc10d jne 0x101cc132 */
  if (!C.zf) goto L_101cc132;
  /* 101cc10f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 101cc111 call 0x101ca0b3 */
  push32(0x101cc116u); f_101ca0b3();
  /* 101cc116 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc11a pop ecx */
  ECX = (pop32());
  /* 101cc11b jne 0x101cc12a */
  if (!C.zf) goto L_101cc12a;
  /* 101cc11d lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 101cc120 push eax */
  push32((uint32_t)(EAX));
  /* 101cc121 call dword ptr [0x101ce094] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce094))), 0x101cc127u);
  /* 101cc127 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_101cc12a:;
  /* 101cc12a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 101cc12c call 0x101ca114 */
  push32(0x101cc131u); f_101ca114();
  /* 101cc131 pop ecx */
  ECX = (pop32());
L_101cc132:;
  /* 101cc132 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 101cc134 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 101cc138 push eax */
  push32((uint32_t)(EAX));
  /* 101cc139 call dword ptr [0x101ce00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce00c))), 0x101cc13fu);
  /* 101cc13f pop edi */
  EDI = (pop32());
  /* 101cc140 pop esi */
  ESI = (pop32());
  /* 101cc141 pop ebx */
  EBX = (pop32());
  /* 101cc142 ret  */
  ESPCHK(0x101cc0e4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c143 @ 0x101cc143 (34 bytes, 10 insns) */
void f_101cc143(void) {
  FTRACE(0x101cc143u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cc143 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101cc147 mov ecx, eax */
  ECX = (EAX);
  /* 101cc149 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101cc14c sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101cc14f lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101cc152 mov ecx, dword ptr [ecx*4 + 0x101d7ba0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101d7ba0)));
  /* 101cc159 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 101cc15d push eax */
  push32((uint32_t)(EAX));
  /* 101cc15e call dword ptr [0x101ce008] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce008))), 0x101cc164u);
  /* 101cc164 ret  */
  ESPCHK(0x101cc143u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1e6 @ 0x101cc1e6 (46 bytes, 22 insns) */
void f_101cc1e6(void) {
  FTRACE(0x101cc1e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cc1e6 push esi */
  push32((uint32_t)(ESI));
  /* 101cc1e7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101cc1eb push esi */
  push32((uint32_t)(ESI));
  /* 101cc1ec call 0x101cc214 */
  push32(0x101cc1f1u); f_101cc214();
  /* 101cc1f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cc1f3 pop ecx */
  ECX = (pop32());
  /* 101cc1f4 je 0x101cc1fb */
  if (C.zf) goto L_101cc1fb;
  /* 101cc1f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101cc1f9 pop esi */
  ESI = (pop32());
  /* 101cc1fa ret  */
  ESPCHK(0x101cc1e6u, _esp0);
  ESP += 4; return;
L_101cc1fb:;
  /* 101cc1fb test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 101cc1ff je 0x101cc210 */
  if (C.zf) goto L_101cc210;
  /* 101cc201 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 101cc204 call 0x101cd360 */
  push32(0x101cc209u); f_101cd360();
  /* 101cc209 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101cc20b pop ecx */
  ECX = (pop32());
  /* 101cc20c pop esi */
  ESI = (pop32());
  /* 101cc20d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cc20f ret  */
  ESPCHK(0x101cc1e6u, _esp0);
  ESP += 4; return;
L_101cc210:;
  /* 101cc210 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cc212 pop esi */
  ESI = (pop32());
  /* 101cc213 ret  */
  ESPCHK(0x101cc1e6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c214 @ 0x101cc214 (92 bytes, 40 insns) */
void f_101cc214(void) {
  FTRACE(0x101cc214u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cc214 push ebx */
  push32((uint32_t)(EBX));
  /* 101cc215 push esi */
  push32((uint32_t)(ESI));
  /* 101cc216 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 101cc21a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101cc21c push edi */
  push32((uint32_t)(EDI));
  /* 101cc21d mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 101cc220 mov ecx, eax */
  ECX = (EAX);
  /* 101cc222 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 101cc225 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc228 jne 0x101cc261 */
  if (!C.zf) goto L_101cc261;
  /* 101cc22a test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 101cc22e je 0x101cc261 */
  if (C.zf) goto L_101cc261;
  /* 101cc230 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 101cc233 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 101cc235 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cc237 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101cc239 jle 0x101cc261 */
  if ((C.zf||C.sf!=C.of)) goto L_101cc261;
  /* 101cc23b push edi */
  push32((uint32_t)(EDI));
  /* 101cc23c push eax */
  push32((uint32_t)(EAX));
  /* 101cc23d push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 101cc240 call 0x101c8d15 */
  push32(0x101cc245u); f_101c8d15();
  /* 101cc245 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cc248 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc24a jne 0x101cc25a */
  if (!C.zf) goto L_101cc25a;
  /* 101cc24c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 101cc24f test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 101cc251 je 0x101cc261 */
  if (C.zf) goto L_101cc261;
  /* 101cc253 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 101cc255 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 101cc258 jmp 0x101cc261 */
  goto L_101cc261;
L_101cc25a:;
  /* 101cc25a or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 101cc25e or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_101cc261:;
  /* 101cc261 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 101cc264 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 101cc268 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101cc26a pop edi */
  EDI = (pop32());
  /* 101cc26b mov eax, ebx */
  EAX = (EBX);
  /* 101cc26d pop esi */
  ESI = (pop32());
  /* 101cc26e pop ebx */
  EBX = (pop32());
  /* 101cc26f ret  */
  ESPCHK(0x101cc214u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c279 @ 0x101cc279 (164 bytes, 66 insns) */
void f_101cc279(void) {
  FTRACE(0x101cc279u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cc279 push ebx */
  push32((uint32_t)(EBX));
  /* 101cc27a push esi */
  push32((uint32_t)(ESI));
  /* 101cc27b push edi */
  push32((uint32_t)(EDI));
  /* 101cc27c push 2 */
  push32((uint32_t)(0x2u));
  /* 101cc27e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101cc280 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101cc282 call 0x101ca0b3 */
  push32(0x101cc287u); f_101ca0b3();
  /* 101cc287 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101cc289 pop ecx */
  ECX = (pop32());
  /* 101cc28a cmp dword ptr [0x101d7b80], esi */
  { uint32_t _a=(r32((uint32_t)(0x101d7b80))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc290 jle 0x101cc306 */
  if ((C.zf||C.sf!=C.of)) goto L_101cc306;
L_101cc292:;
  /* 101cc292 mov eax, dword ptr [0x101d6b68] */
  EAX = (r32((uint32_t)(0x101d6b68)));
  /* 101cc297 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 101cc29a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cc29c je 0x101cc2fd */
  if (C.zf) goto L_101cc2fd;
  /* 101cc29e test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 101cc2a2 je 0x101cc2fd */
  if (C.zf) goto L_101cc2fd;
  /* 101cc2a4 push eax */
  push32((uint32_t)(EAX));
  /* 101cc2a5 push esi */
  push32((uint32_t)(ESI));
  /* 101cc2a6 call 0x101c905d */
  push32(0x101cc2abu); f_101c905d();
  /* 101cc2ab mov eax, dword ptr [0x101d6b68] */
  EAX = (r32((uint32_t)(0x101d6b68)));
  /* 101cc2b0 pop ecx */
  ECX = (pop32());
  /* 101cc2b1 pop ecx */
  ECX = (pop32());
  /* 101cc2b2 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 101cc2b5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 101cc2b8 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 101cc2bb je 0x101cc2ed */
  if (C.zf) goto L_101cc2ed;
  /* 101cc2bd cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc2c2 jne 0x101cc2d3 */
  if (!C.zf) goto L_101cc2d3;
  /* 101cc2c4 push eax */
  push32((uint32_t)(EAX));
  /* 101cc2c5 call 0x101cc1e6 */
  push32(0x101cc2cau); f_101cc1e6();
  /* 101cc2ca cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc2cd pop ecx */
  ECX = (pop32());
  /* 101cc2ce je 0x101cc2ed */
  if (C.zf) goto L_101cc2ed;
  /* 101cc2d0 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101cc2d1 jmp 0x101cc2ed */
  goto L_101cc2ed;
L_101cc2d3:;
  /* 101cc2d3 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc2d8 jne 0x101cc2ed */
  if (!C.zf) goto L_101cc2ed;
  /* 101cc2da test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 101cc2dd je 0x101cc2ed */
  if (C.zf) goto L_101cc2ed;
  /* 101cc2df push eax */
  push32((uint32_t)(EAX));
  /* 101cc2e0 call 0x101cc1e6 */
  push32(0x101cc2e5u); f_101cc1e6();
  /* 101cc2e5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc2e8 pop ecx */
  ECX = (pop32());
  /* 101cc2e9 jne 0x101cc2ed */
  if (!C.zf) goto L_101cc2ed;
  /* 101cc2eb or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_101cc2ed:;
  /* 101cc2ed mov eax, dword ptr [0x101d6b68] */
  EAX = (r32((uint32_t)(0x101d6b68)));
  /* 101cc2f2 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 101cc2f5 push esi */
  push32((uint32_t)(ESI));
  /* 101cc2f6 call 0x101c90af */
  push32(0x101cc2fbu); f_101c90af();
  /* 101cc2fb pop ecx */
  ECX = (pop32());
  /* 101cc2fc pop ecx */
  ECX = (pop32());
L_101cc2fd:;
  /* 101cc2fd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101cc2fe cmp esi, dword ptr [0x101d7b80] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101d7b80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc304 jl 0x101cc292 */
  if ((C.sf!=C.of)) goto L_101cc292;
L_101cc306:;
  /* 101cc306 push 2 */
  push32((uint32_t)(0x2u));
  /* 101cc308 call 0x101ca114 */
  push32(0x101cc30du); f_101ca114();
  /* 101cc30d cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc312 pop ecx */
  ECX = (pop32());
  /* 101cc313 mov eax, ebx */
  EAX = (EBX);
  /* 101cc315 je 0x101cc319 */
  if (C.zf) goto L_101cc319;
  /* 101cc317 mov eax, edi */
  EAX = (EDI);
L_101cc319:;
  /* 101cc319 pop edi */
  EDI = (pop32());
  /* 101cc31a pop esi */
  ESI = (pop32());
  /* 101cc31b pop ebx */
  EBX = (pop32());
  /* 101cc31c ret  */
  ESPCHK(0x101cc279u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c31d @ 0x101cc31d (318 bytes, 123 insns) */
void f_101cc31d(void) {
  FTRACE(0x101cc31du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cc31d push ebp */
  push32((uint32_t)(EBP));
  /* 101cc31e mov ebp, esp */
  EBP = (ESP);
  /* 101cc320 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 101cc322 push 0x101ce560 */
  push32((uint32_t)(0x101ce560u));
  /* 101cc327 push 0x101cd0d0 */
  push32((uint32_t)(0x101cd0d0u));
  /* 101cc32c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 101cc332 push eax */
  push32((uint32_t)(EAX));
  /* 101cc333 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 101cc33a sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cc33d push ebx */
  push32((uint32_t)(EBX));
  /* 101cc33e push esi */
  push32((uint32_t)(ESI));
  /* 101cc33f push edi */
  push32((uint32_t)(EDI));
  /* 101cc340 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 101cc343 mov eax, dword ptr [0x101d67d4] */
  EAX = (r32((uint32_t)(0x101d67d4)));
  /* 101cc348 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101cc34a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc34c jne 0x101cc38c */
  if (!C.zf) goto L_101cc38c;
  /* 101cc34e lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 101cc351 push eax */
  push32((uint32_t)(EAX));
  /* 101cc352 push 1 */
  push32((uint32_t)(0x1u));
  /* 101cc354 pop esi */
  ESI = (pop32());
  /* 101cc355 push esi */
  push32((uint32_t)(ESI));
  /* 101cc356 push 0x101ce558 */
  push32((uint32_t)(0x101ce558u));
  /* 101cc35b push esi */
  push32((uint32_t)(ESI));
  /* 101cc35c call dword ptr [0x101ce0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce0c0))), 0x101cc362u);
  /* 101cc362 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cc364 je 0x101cc36a */
  if (C.zf) goto L_101cc36a;
  /* 101cc366 mov eax, esi */
  EAX = (ESI);
  /* 101cc368 jmp 0x101cc387 */
  goto L_101cc387;
L_101cc36a:;
  /* 101cc36a lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 101cc36d push eax */
  push32((uint32_t)(EAX));
  /* 101cc36e push esi */
  push32((uint32_t)(ESI));
  /* 101cc36f push 0x101ce554 */
  push32((uint32_t)(0x101ce554u));
  /* 101cc374 push esi */
  push32((uint32_t)(ESI));
  /* 101cc375 push ebx */
  push32((uint32_t)(EBX));
  /* 101cc376 call dword ptr [0x101ce0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce0bc))), 0x101cc37cu);
  /* 101cc37c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cc37e je 0x101cc452 */
  if (C.zf) goto L_101cc452;
  /* 101cc384 push 2 */
  push32((uint32_t)(0x2u));
  /* 101cc386 pop eax */
  EAX = (pop32());
L_101cc387:;
  /* 101cc387 mov dword ptr [0x101d67d4], eax */
  w32((uint32_t)(0x101d67d4), (EAX));
L_101cc38c:;
  /* 101cc38c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc38f jne 0x101cc3b5 */
  if (!C.zf) goto L_101cc3b5;
  /* 101cc391 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 101cc394 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc396 jne 0x101cc39d */
  if (!C.zf) goto L_101cc39d;
  /* 101cc398 mov eax, dword ptr [0x101d67a8] */
  EAX = (r32((uint32_t)(0x101d67a8)));
L_101cc39d:;
  /* 101cc39d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101cc3a0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101cc3a3 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101cc3a6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101cc3a9 push eax */
  push32((uint32_t)(EAX));
  /* 101cc3aa call dword ptr [0x101ce0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce0bc))), 0x101cc3b0u);
  /* 101cc3b0 jmp 0x101cc454 */
  goto L_101cc454;
L_101cc3b5:;
  /* 101cc3b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc3b8 jne 0x101cc452 */
  if (!C.zf) goto L_101cc452;
  /* 101cc3be cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc3c1 jne 0x101cc3cb */
  if (!C.zf) goto L_101cc3cb;
  /* 101cc3c3 mov eax, dword ptr [0x101d67b8] */
  EAX = (r32((uint32_t)(0x101d67b8)));
  /* 101cc3c8 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_101cc3cb:;
  /* 101cc3cb push ebx */
  push32((uint32_t)(EBX));
  /* 101cc3cc push ebx */
  push32((uint32_t)(EBX));
  /* 101cc3cd push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101cc3d0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101cc3d3 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 101cc3d6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101cc3d8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cc3da and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 101cc3dd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101cc3de push eax */
  push32((uint32_t)(EAX));
  /* 101cc3df push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 101cc3e2 call dword ptr [0x101ce0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce0b8))), 0x101cc3e8u);
  /* 101cc3e8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101cc3eb cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc3ed je 0x101cc452 */
  if (C.zf) goto L_101cc452;
  /* 101cc3ef mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 101cc3f2 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 101cc3f5 mov eax, edi */
  EAX = (EDI);
  /* 101cc3f7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cc3fa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 101cc3fc call 0x101caf70 */
  push32(0x101cc401u); f_101caf70();
  /* 101cc401 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 101cc404 mov esi, esp */
  ESI = (ESP);
  /* 101cc406 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 101cc409 push edi */
  push32((uint32_t)(EDI));
  /* 101cc40a push ebx */
  push32((uint32_t)(EBX));
  /* 101cc40b push esi */
  push32((uint32_t)(ESI));
  /* 101cc40c call 0x101c9c80 */
  push32(0x101cc411u); f_101c9c80();
  /* 101cc411 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cc414 jmp 0x101cc421 */
  goto L_101cc421;
  /* 101cc416 push 1 */
  push32((uint32_t)(0x1u));
  /* 101cc418 pop eax */
  EAX = (pop32());
  /* 101cc419 ret  */
  ESPCHK(0x101cc31du, _esp0);
  ESP += 4; return;
  /* 101cc41a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 101cc41d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101cc41f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_101cc421:;
  /* 101cc421 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101cc425 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc427 je 0x101cc452 */
  if (C.zf) goto L_101cc452;
  /* 101cc429 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 101cc42c push esi */
  push32((uint32_t)(ESI));
  /* 101cc42d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101cc430 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101cc433 push 1 */
  push32((uint32_t)(0x1u));
  /* 101cc435 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 101cc438 call dword ptr [0x101ce0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce0b8))), 0x101cc43eu);
  /* 101cc43e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc440 je 0x101cc452 */
  if (C.zf) goto L_101cc452;
  /* 101cc442 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101cc445 push eax */
  push32((uint32_t)(EAX));
  /* 101cc446 push esi */
  push32((uint32_t)(ESI));
  /* 101cc447 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101cc44a call dword ptr [0x101ce0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce0c0))), 0x101cc450u);
  /* 101cc450 jmp 0x101cc454 */
  goto L_101cc454;
L_101cc452:;
  /* 101cc452 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101cc454:;
  /* 101cc454 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 101cc457 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 101cc45a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 101cc461 pop edi */
  EDI = (pop32());
  /* 101cc462 pop esi */
  ESI = (pop32());
  /* 101cc463 pop ebx */
  EBX = (pop32());
  /* 101cc464 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101cc465 ret  */
  ESPCHK(0x101cc31du, _esp0);
  ESP += 4; return;
}

/* FUN_1000c466 @ 0x101cc466 (511 bytes, 193 insns) */
void f_101cc466(void) {
  FTRACE(0x101cc466u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cc466 push ebp */
  push32((uint32_t)(EBP));
  /* 101cc467 mov ebp, esp */
  EBP = (ESP);
  /* 101cc469 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 101cc46b push 0x101ce570 */
  push32((uint32_t)(0x101ce570u));
  /* 101cc470 push 0x101cd0d0 */
  push32((uint32_t)(0x101cd0d0u));
  /* 101cc475 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 101cc47b push eax */
  push32((uint32_t)(EAX));
  /* 101cc47c mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 101cc483 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cc486 push ebx */
  push32((uint32_t)(EBX));
  /* 101cc487 push esi */
  push32((uint32_t)(ESI));
  /* 101cc488 push edi */
  push32((uint32_t)(EDI));
  /* 101cc489 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 101cc48c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101cc48e cmp dword ptr [0x101d67d8], edi */
  { uint32_t _a=(r32((uint32_t)(0x101d67d8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc494 jne 0x101cc4dc */
  if (!C.zf) goto L_101cc4dc;
  /* 101cc496 push edi */
  push32((uint32_t)(EDI));
  /* 101cc497 push edi */
  push32((uint32_t)(EDI));
  /* 101cc498 push 1 */
  push32((uint32_t)(0x1u));
  /* 101cc49a pop ebx */
  EBX = (pop32());
  /* 101cc49b push ebx */
  push32((uint32_t)(EBX));
  /* 101cc49c push 0x101ce558 */
  push32((uint32_t)(0x101ce558u));
  /* 101cc4a1 mov esi, 0x100 */
  ESI = (0x100u);
  /* 101cc4a6 push esi */
  push32((uint32_t)(ESI));
  /* 101cc4a7 push edi */
  push32((uint32_t)(EDI));
  /* 101cc4a8 call dword ptr [0x101ce0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce0c8))), 0x101cc4aeu);
  /* 101cc4ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cc4b0 je 0x101cc4ba */
  if (C.zf) goto L_101cc4ba;
  /* 101cc4b2 mov dword ptr [0x101d67d8], ebx */
  w32((uint32_t)(0x101d67d8), (EBX));
  /* 101cc4b8 jmp 0x101cc4dc */
  goto L_101cc4dc;
L_101cc4ba:;
  /* 101cc4ba push edi */
  push32((uint32_t)(EDI));
  /* 101cc4bb push edi */
  push32((uint32_t)(EDI));
  /* 101cc4bc push ebx */
  push32((uint32_t)(EBX));
  /* 101cc4bd push 0x101ce554 */
  push32((uint32_t)(0x101ce554u));
  /* 101cc4c2 push esi */
  push32((uint32_t)(ESI));
  /* 101cc4c3 push edi */
  push32((uint32_t)(EDI));
  /* 101cc4c4 call dword ptr [0x101ce0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce0c4))), 0x101cc4cau);
  /* 101cc4ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cc4cc je 0x101cc5f4 */
  if (C.zf) goto L_101cc5f4;
  /* 101cc4d2 mov dword ptr [0x101d67d8], 2 */
  w32((uint32_t)(0x101d67d8), (0x2u));
L_101cc4dc:;
  /* 101cc4dc cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc4df jle 0x101cc4f1 */
  if ((C.zf||C.sf!=C.of)) goto L_101cc4f1;
  /* 101cc4e1 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101cc4e4 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101cc4e7 call 0x101cc68a */
  push32(0x101cc4ecu); f_101cc68a();
  /* 101cc4ec pop ecx */
  ECX = (pop32());
  /* 101cc4ed pop ecx */
  ECX = (pop32());
  /* 101cc4ee mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_101cc4f1:;
  /* 101cc4f1 mov eax, dword ptr [0x101d67d8] */
  EAX = (r32((uint32_t)(0x101d67d8)));
  /* 101cc4f6 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc4f9 jne 0x101cc518 */
  if (!C.zf) goto L_101cc518;
  /* 101cc4fb push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 101cc4fe push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 101cc501 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101cc504 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101cc507 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101cc50a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101cc50d call dword ptr [0x101ce0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce0c4))), 0x101cc513u);
  /* 101cc513 jmp 0x101cc5f6 */
  goto L_101cc5f6;
L_101cc518:;
  /* 101cc518 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc51b jne 0x101cc5f4 */
  if (!C.zf) goto L_101cc5f4;
  /* 101cc521 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc524 jne 0x101cc52e */
  if (!C.zf) goto L_101cc52e;
  /* 101cc526 mov eax, dword ptr [0x101d67b8] */
  EAX = (r32((uint32_t)(0x101d67b8)));
  /* 101cc52b mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_101cc52e:;
  /* 101cc52e push edi */
  push32((uint32_t)(EDI));
  /* 101cc52f push edi */
  push32((uint32_t)(EDI));
  /* 101cc530 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101cc533 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101cc536 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 101cc539 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101cc53b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cc53d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 101cc540 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101cc541 push eax */
  push32((uint32_t)(EAX));
  /* 101cc542 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 101cc545 call dword ptr [0x101ce0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce0b8))), 0x101cc54bu);
  /* 101cc54b mov ebx, eax */
  EBX = (EAX);
  /* 101cc54d mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 101cc550 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc552 je 0x101cc5f4 */
  if (C.zf) goto L_101cc5f4;
  /* 101cc558 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 101cc55b lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 101cc55e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cc561 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 101cc563 call 0x101caf70 */
  push32(0x101cc568u); f_101caf70();
  /* 101cc568 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 101cc56b mov eax, esp */
  EAX = (ESP);
  /* 101cc56d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 101cc570 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101cc574 jmp 0x101cc589 */
  goto L_101cc589;
  /* 101cc576 push 1 */
  push32((uint32_t)(0x1u));
  /* 101cc578 pop eax */
  EAX = (pop32());
  /* 101cc579 ret  */
  ESPCHK(0x101cc466u, _esp0);
  ESP += 4; return;
  /* 101cc57a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 101cc57d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101cc57f mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 101cc582 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101cc586 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_101cc589:;
  /* 101cc589 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc58c je 0x101cc5f4 */
  if (C.zf) goto L_101cc5f4;
  /* 101cc58e push ebx */
  push32((uint32_t)(EBX));
  /* 101cc58f push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 101cc592 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101cc595 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101cc598 push 1 */
  push32((uint32_t)(0x1u));
  /* 101cc59a push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 101cc59d call dword ptr [0x101ce0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce0b8))), 0x101cc5a3u);
  /* 101cc5a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cc5a5 je 0x101cc5f4 */
  if (C.zf) goto L_101cc5f4;
  /* 101cc5a7 push edi */
  push32((uint32_t)(EDI));
  /* 101cc5a8 push edi */
  push32((uint32_t)(EDI));
  /* 101cc5a9 push ebx */
  push32((uint32_t)(EBX));
  /* 101cc5aa push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 101cc5ad push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101cc5b0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101cc5b3 call dword ptr [0x101ce0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce0c8))), 0x101cc5b9u);
  /* 101cc5b9 mov esi, eax */
  ESI = (EAX);
  /* 101cc5bb mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 101cc5be cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc5c0 je 0x101cc5f4 */
  if (C.zf) goto L_101cc5f4;
  /* 101cc5c2 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 101cc5c6 je 0x101cc608 */
  if (C.zf) goto L_101cc608;
  /* 101cc5c8 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc5cb je 0x101cc683 */
  if (C.zf) goto L_101cc683;
  /* 101cc5d1 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc5d4 jg 0x101cc5f4 */
  if ((!C.zf&&C.sf==C.of)) goto L_101cc5f4;
  /* 101cc5d6 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 101cc5d9 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 101cc5dc push ebx */
  push32((uint32_t)(EBX));
  /* 101cc5dd push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 101cc5e0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101cc5e3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101cc5e6 call dword ptr [0x101ce0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce0c8))), 0x101cc5ecu);
  /* 101cc5ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cc5ee jne 0x101cc683 */
  if (!C.zf) goto L_101cc683;
L_101cc5f4:;
  /* 101cc5f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101cc5f6:;
  /* 101cc5f6 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 101cc5f9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 101cc5fc mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 101cc603 pop edi */
  EDI = (pop32());
  /* 101cc604 pop esi */
  ESI = (pop32());
  /* 101cc605 pop ebx */
  EBX = (pop32());
  /* 101cc606 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101cc607 ret  */
  ESPCHK(0x101cc466u, _esp0);
  ESP += 4; return;
L_101cc608:;
  /* 101cc608 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 101cc60f lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 101cc612 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cc615 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 101cc617 call 0x101caf70 */
  push32(0x101cc61cu); f_101caf70();
  /* 101cc61c mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 101cc61f mov ebx, esp */
  EBX = (ESP);
  /* 101cc621 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 101cc624 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101cc628 jmp 0x101cc63c */
  goto L_101cc63c;
  /* 101cc62a push 1 */
  push32((uint32_t)(0x1u));
  /* 101cc62c pop eax */
  EAX = (pop32());
  /* 101cc62d ret  */
  ESPCHK(0x101cc466u, _esp0);
  ESP += 4; return;
  /* 101cc62e mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 101cc631 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101cc633 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101cc635 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101cc639 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_101cc63c:;
  /* 101cc63c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc63e je 0x101cc5f4 */
  if (C.zf) goto L_101cc5f4;
  /* 101cc640 push esi */
  push32((uint32_t)(ESI));
  /* 101cc641 push ebx */
  push32((uint32_t)(EBX));
  /* 101cc642 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 101cc645 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 101cc648 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101cc64b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101cc64e call dword ptr [0x101ce0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce0c8))), 0x101cc654u);
  /* 101cc654 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cc656 je 0x101cc5f4 */
  if (C.zf) goto L_101cc5f4;
  /* 101cc658 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc65b push edi */
  push32((uint32_t)(EDI));
  /* 101cc65c push edi */
  push32((uint32_t)(EDI));
  /* 101cc65d jne 0x101cc663 */
  if (!C.zf) goto L_101cc663;
  /* 101cc65f push edi */
  push32((uint32_t)(EDI));
  /* 101cc660 push edi */
  push32((uint32_t)(EDI));
  /* 101cc661 jmp 0x101cc669 */
  goto L_101cc669;
L_101cc663:;
  /* 101cc663 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 101cc666 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_101cc669:;
  /* 101cc669 push esi */
  push32((uint32_t)(ESI));
  /* 101cc66a push ebx */
  push32((uint32_t)(EBX));
  /* 101cc66b push 0x220 */
  push32((uint32_t)(0x220u));
  /* 101cc670 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 101cc673 call dword ptr [0x101ce060] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce060))), 0x101cc679u);
  /* 101cc679 mov esi, eax */
  ESI = (EAX);
  /* 101cc67b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc67d je 0x101cc5f4 */
  if (C.zf) goto L_101cc5f4;
L_101cc683:;
  /* 101cc683 mov eax, esi */
  EAX = (ESI);
  /* 101cc685 jmp 0x101cc5f6 */
  goto L_101cc5f6;
}

/* FUN_1000c68a @ 0x101cc68a (43 bytes, 20 insns) */
void f_101cc68a(void) {
  FTRACE(0x101cc68au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cc68a mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 101cc68e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101cc692 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101cc694 push esi */
  push32((uint32_t)(ESI));
  /* 101cc695 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 101cc698 je 0x101cc6a7 */
  if (C.zf) goto L_101cc6a7;
L_101cc69a:;
  /* 101cc69a cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc69d je 0x101cc6a7 */
  if (C.zf) goto L_101cc6a7;
  /* 101cc69f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101cc6a0 mov esi, ecx */
  ESI = (ECX);
  /* 101cc6a2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101cc6a3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101cc6a5 jne 0x101cc69a */
  if (!C.zf) goto L_101cc69a;
L_101cc6a7:;
  /* 101cc6a7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc6aa pop esi */
  ESI = (pop32());
  /* 101cc6ab jne 0x101cc6b2 */
  if (!C.zf) goto L_101cc6b2;
  /* 101cc6ad sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cc6b1 ret  */
  ESPCHK(0x101cc68au, _esp0);
  ESP += 4; return;
L_101cc6b2:;
  /* 101cc6b2 mov eax, edx */
  EAX = (EDX);
  /* 101cc6b4 ret  */
  ESPCHK(0x101cc68au, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6b5 @ 0x101cc6b5 (33 bytes, 15 insns) */
void f_101cc6b5(void) {
  FTRACE(0x101cc6b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cc6b5 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 101cc6b9 push esi */
  push32((uint32_t)(ESI));
  /* 101cc6ba mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 101cc6be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cc6c0 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 101cc6c3 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc6c5 jb 0x101cc6cb */
  if (C.cf) goto L_101cc6cb;
  /* 101cc6c7 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc6c9 jae 0x101cc6ce */
  if (!C.cf) goto L_101cc6ce;
L_101cc6cb:;
  /* 101cc6cb push 1 */
  push32((uint32_t)(0x1u));
  /* 101cc6cd pop eax */
  EAX = (pop32());
L_101cc6ce:;
  /* 101cc6ce mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 101cc6d2 pop esi */
  ESI = (pop32());
  /* 101cc6d3 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 101cc6d5 ret  */
  ESPCHK(0x101cc6b5u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x101cc6d6 (94 bytes, 38 insns) */
void f_101cc6d6(void) {
  FTRACE(0x101cc6d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cc6d6 push esi */
  push32((uint32_t)(ESI));
  /* 101cc6d7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101cc6db push edi */
  push32((uint32_t)(EDI));
  /* 101cc6dc mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 101cc6e0 push esi */
  push32((uint32_t)(ESI));
  /* 101cc6e1 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 101cc6e3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101cc6e5 call 0x101cc6b5 */
  push32(0x101cc6eau); f_101cc6b5();
  /* 101cc6ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cc6ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cc6ef je 0x101cc708 */
  if (C.zf) goto L_101cc708;
  /* 101cc6f1 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 101cc6f4 push eax */
  push32((uint32_t)(EAX));
  /* 101cc6f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 101cc6f7 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 101cc6f9 call 0x101cc6b5 */
  push32(0x101cc6feu); f_101cc6b5();
  /* 101cc6fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cc701 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cc703 je 0x101cc708 */
  if (C.zf) goto L_101cc708;
  /* 101cc705 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_101cc708:;
  /* 101cc708 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 101cc70b push eax */
  push32((uint32_t)(EAX));
  /* 101cc70c push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 101cc70f push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 101cc711 call 0x101cc6b5 */
  push32(0x101cc716u); f_101cc6b5();
  /* 101cc716 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cc719 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cc71b je 0x101cc720 */
  if (C.zf) goto L_101cc720;
  /* 101cc71d inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_101cc720:;
  /* 101cc720 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 101cc723 push eax */
  push32((uint32_t)(EAX));
  /* 101cc724 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 101cc727 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 101cc729 call 0x101cc6b5 */
  push32(0x101cc72eu); f_101cc6b5();
  /* 101cc72e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cc731 pop edi */
  EDI = (pop32());
  /* 101cc732 pop esi */
  ESI = (pop32());
  /* 101cc733 ret  */
  ESPCHK(0x101cc6d6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c734 @ 0x101cc734 (46 bytes, 21 insns) */
void f_101cc734(void) {
  FTRACE(0x101cc734u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cc734 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101cc738 push esi */
  push32((uint32_t)(ESI));
  /* 101cc739 push edi */
  push32((uint32_t)(EDI));
  /* 101cc73a mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 101cc73c mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 101cc73f mov ecx, esi */
  ECX = (ESI);
  /* 101cc741 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101cc743 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 101cc745 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 101cc748 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 101cc74b or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 101cc74d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 101cc750 mov edx, edi */
  EDX = (EDI);
  /* 101cc752 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 101cc755 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 101cc758 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 101cc75a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 101cc75c pop edi */
  EDI = (pop32());
  /* 101cc75d mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 101cc760 pop esi */
  ESI = (pop32());
  /* 101cc761 ret  */
  ESPCHK(0x101cc734u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c762 @ 0x101cc762 (45 bytes, 21 insns) */
void f_101cc762(void) {
  FTRACE(0x101cc762u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cc762 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101cc766 push esi */
  push32((uint32_t)(ESI));
  /* 101cc767 push edi */
  push32((uint32_t)(EDI));
  /* 101cc768 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 101cc76b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 101cc76e mov esi, edx */
  ESI = (EDX);
  /* 101cc770 mov edi, ecx */
  EDI = (ECX);
  /* 101cc772 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 101cc775 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 101cc777 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 101cc779 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 101cc77c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 101cc77e shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 101cc781 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 101cc783 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 101cc785 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 101cc787 pop edi */
  EDI = (pop32());
  /* 101cc788 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 101cc78b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101cc78d pop esi */
  ESI = (pop32());
  /* 101cc78e ret  */
  ESPCHK(0x101cc762u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c78f @ 0x101cc78f (199 bytes, 76 insns) */
void f_101cc78f(void) {
  FTRACE(0x101cc78fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cc78f push ebp */
  push32((uint32_t)(EBP));
  /* 101cc790 mov ebp, esp */
  EBP = (ESP);
  /* 101cc792 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cc795 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101cc798 push ebx */
  push32((uint32_t)(EBX));
  /* 101cc799 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 101cc79c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101cc79e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc7a0 push esi */
  push32((uint32_t)(ESI));
  /* 101cc7a1 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 101cc7a8 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 101cc7aa mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 101cc7ad mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 101cc7b0 jbe 0x101cc803 */
  if ((C.cf||C.zf)) goto L_101cc803;
  /* 101cc7b2 push edi */
  push32((uint32_t)(EDI));
  /* 101cc7b3 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_101cc7b6:;
  /* 101cc7b6 mov esi, ebx */
  ESI = (EBX);
  /* 101cc7b8 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 101cc7bb movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101cc7bc movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101cc7bd push ebx */
  push32((uint32_t)(EBX));
  /* 101cc7be movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101cc7bf call 0x101cc734 */
  push32(0x101cc7c4u); f_101cc734();
  /* 101cc7c4 push ebx */
  push32((uint32_t)(EBX));
  /* 101cc7c5 call 0x101cc734 */
  push32(0x101cc7cau); f_101cc734();
  /* 101cc7ca lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101cc7cd push eax */
  push32((uint32_t)(EAX));
  /* 101cc7ce push ebx */
  push32((uint32_t)(EBX));
  /* 101cc7cf call 0x101cc6d6 */
  push32(0x101cc7d4u); f_101cc6d6();
  /* 101cc7d4 push ebx */
  push32((uint32_t)(EBX));
  /* 101cc7d5 call 0x101cc734 */
  push32(0x101cc7dau); f_101cc734();
  /* 101cc7da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cc7dd and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 101cc7e1 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 101cc7e5 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 101cc7e8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 101cc7eb lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101cc7ee push eax */
  push32((uint32_t)(EAX));
  /* 101cc7ef push ebx */
  push32((uint32_t)(EBX));
  /* 101cc7f0 call 0x101cc6d6 */
  push32(0x101cc7f5u); f_101cc6d6();
  /* 101cc7f5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cc7f8 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 101cc7fb dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 101cc7fe jne 0x101cc7b6 */
  if (!C.zf) goto L_101cc7b6;
  /* 101cc800 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101cc802 pop edi */
  EDI = (pop32());
L_101cc803:;
  /* 101cc803 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc806 jne 0x101cc830 */
  if (!C.zf) goto L_101cc830;
  /* 101cc808 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 101cc80b mov eax, ecx */
  EAX = (ECX);
  /* 101cc80d shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 101cc810 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 101cc813 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 101cc815 mov esi, eax */
  ESI = (EAX);
  /* 101cc817 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 101cc81a shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 101cc81d or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 101cc81f shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 101cc822 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 101cc829 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 101cc82c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 101cc82e jmp 0x101cc803 */
  goto L_101cc803;
L_101cc830:;
  /* 101cc830 mov esi, 0x8000 */
  ESI = (0x8000u);
L_101cc835:;
  /* 101cc835 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 101cc838 jne 0x101cc84a */
  if (!C.zf) goto L_101cc84a;
  /* 101cc83a push ebx */
  push32((uint32_t)(EBX));
  /* 101cc83b call 0x101cc734 */
  push32(0x101cc840u); f_101cc734();
  /* 101cc840 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 101cc847 pop ecx */
  ECX = (pop32());
  /* 101cc848 jmp 0x101cc835 */
  goto L_101cc835;
L_101cc84a:;
  /* 101cc84a mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 101cc84e pop esi */
  ESI = (pop32());
  /* 101cc84f mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 101cc853 pop ebx */
  EBX = (pop32());
  /* 101cc854 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101cc855 ret  */
  ESPCHK(0x101cc78fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c856 @ 0x101cc856 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_101cc856(void) {
  FTRACE(0x101cc856u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cc856 push ebp */
  push32((uint32_t)(EBP));
  /* 101cc857 mov ebp, esp */
  EBP = (ESP);
  /* 101cc859 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cc85c push ebx */
  push32((uint32_t)(EBX));
  /* 101cc85d push esi */
  push32((uint32_t)(ESI));
  /* 101cc85e push edi */
  push32((uint32_t)(EDI));
  /* 101cc85f mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 101cc862 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 101cc865 push 1 */
  push32((uint32_t)(0x1u));
  /* 101cc867 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 101cc86a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cc86c pop edx */
  EDX = (pop32());
  /* 101cc86d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 101cc870 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 101cc873 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101cc876 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 101cc879 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 101cc87c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101cc87f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 101cc882 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 101cc885 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 101cc888 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 101cc88b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 101cc88e mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_101cc891:;
  /* 101cc891 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 101cc893 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc896 je 0x101cc8a7 */
  if (C.zf) goto L_101cc8a7;
  /* 101cc898 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc89b je 0x101cc8a7 */
  if (C.zf) goto L_101cc8a7;
  /* 101cc89d cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc8a0 je 0x101cc8a7 */
  if (C.zf) goto L_101cc8a7;
  /* 101cc8a2 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc8a5 jne 0x101cc8aa */
  if (!C.zf) goto L_101cc8aa;
L_101cc8a7:;
  /* 101cc8a7 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101cc8a8 jmp 0x101cc891 */
  goto L_101cc891;
L_101cc8aa:;
  /* 101cc8aa push 4 */
  push32((uint32_t)(0x4u));
  /* 101cc8ac pop esi */
  ESI = (pop32());
L_101cc8ad:;
  /* 101cc8ad mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101cc8af inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101cc8b0 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc8b3 ja 0x101ccb30 */
  if ((!C.cf&&!C.zf)) goto L_101ccb30;
  /* 101cc8b9 jmp dword ptr [eax*4 + 0x101cccf7] */
  switch (EAX) {
    case 0: goto L_101cc8c0;
    case 1: goto L_101cc90f;
    case 2: goto L_101cc966;
    case 3: goto L_101cc990;
    case 4: goto L_101cc9eb;
    case 5: goto L_101cca62;
    case 6: goto L_101cca98;
    case 7: goto L_101ccae2;
    case 8: goto L_101ccac1;
    case 9: goto L_101ccb46;
    case 10: goto L_101ccb30;
    case 11: goto L_101ccafc;
    default: x86_unimpl("switch@0x101cc8b9 out of table"); return;
  }
L_101cc8c0:;
  /* 101cc8c0 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc8c3 jl 0x101cc8d1 */
  if ((C.sf!=C.of)) goto L_101cc8d1;
  /* 101cc8c5 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc8c8 jg 0x101cc8d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_101cc8d1;
L_101cc8ca:;
  /* 101cc8ca push 3 */
  push32((uint32_t)(0x3u));
  /* 101cc8cc jmp 0x101ccaee */
  goto L_101ccaee;
L_101cc8d1:;
  /* 101cc8d1 cmp bl, byte ptr [0x101d0b54] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x101d0b54))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc8d7 jne 0x101cc8e0 */
  if (!C.zf) goto L_101cc8e0;
L_101cc8d9:;
  /* 101cc8d9 push 5 */
  push32((uint32_t)(0x5u));
  /* 101cc8db jmp 0x101ccb26 */
  goto L_101ccb26;
L_101cc8e0:;
  /* 101cc8e0 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101cc8e3 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cc8e6 je 0x101cc906 */
  if (C.zf) goto L_101cc906;
  /* 101cc8e8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101cc8e9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101cc8ea je 0x101cc8fa */
  if (C.zf) goto L_101cc8fa;
  /* 101cc8ec sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cc8ef jne 0x101ccbc9 */
  if (!C.zf) goto L_101ccbc9;
  /* 101cc8f5 jmp 0x101cc989 */
  goto L_101cc989;
L_101cc8fa:;
  /* 101cc8fa push 2 */
  push32((uint32_t)(0x2u));
  /* 101cc8fc mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 101cc903 pop eax */
  EAX = (pop32());
  /* 101cc904 jmp 0x101cc8ad */
  goto L_101cc8ad;
L_101cc906:;
  /* 101cc906 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 101cc90a push 2 */
  push32((uint32_t)(0x2u));
  /* 101cc90c pop eax */
  EAX = (pop32());
  /* 101cc90d jmp 0x101cc8ad */
  goto L_101cc8ad;
L_101cc90f:;
  /* 101cc90f cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc912 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 101cc915 jl 0x101cc91c */
  if ((C.sf!=C.of)) goto L_101cc91c;
  /* 101cc917 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc91a jle 0x101cc8ca */
  if ((C.zf||C.sf!=C.of)) goto L_101cc8ca;
L_101cc91c:;
  /* 101cc91c cmp bl, byte ptr [0x101d0b54] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x101d0b54))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc922 je 0x101cc9e4 */
  if (C.zf) goto L_101cc9e4;
  /* 101cc928 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc92b je 0x101cc95e */
  if (C.zf) goto L_101cc95e;
  /* 101cc92d cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc930 je 0x101cc95e */
  if (C.zf) goto L_101cc95e;
  /* 101cc932 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc935 je 0x101cc989 */
  if (C.zf) goto L_101cc989;
L_101cc937:;
  /* 101cc937 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc93a jle 0x101ccbc9 */
  if ((C.zf||C.sf!=C.of)) goto L_101ccbc9;
  /* 101cc940 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc943 jle 0x101cc957 */
  if ((C.zf||C.sf!=C.of)) goto L_101cc957;
  /* 101cc945 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc948 jle 0x101ccbc9 */
  if ((C.zf||C.sf!=C.of)) goto L_101ccbc9;
  /* 101cc94e cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc951 jg 0x101ccbc9 */
  if ((!C.zf&&C.sf==C.of)) goto L_101ccbc9;
L_101cc957:;
  /* 101cc957 push 6 */
  push32((uint32_t)(0x6u));
  /* 101cc959 jmp 0x101ccb26 */
  goto L_101ccb26;
L_101cc95e:;
  /* 101cc95e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101cc95f push 0xb */
  push32((uint32_t)(0xbu));
  /* 101cc961 jmp 0x101ccb26 */
  goto L_101ccb26;
L_101cc966:;
  /* 101cc966 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc969 jl 0x101cc974 */
  if ((C.sf!=C.of)) goto L_101cc974;
  /* 101cc96b cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc96e jle 0x101cc8ca */
  if ((C.zf||C.sf!=C.of)) goto L_101cc8ca;
L_101cc974:;
  /* 101cc974 cmp bl, byte ptr [0x101d0b54] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x101d0b54))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc97a je 0x101cc8d9 */
  if (C.zf) goto L_101cc8d9;
  /* 101cc980 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc983 jne 0x101ccb3e */
  if (!C.zf) goto L_101ccb3e;
L_101cc989:;
  /* 101cc989 mov eax, edx */
  EAX = (EDX);
  /* 101cc98b jmp 0x101cc8ad */
  goto L_101cc8ad;
L_101cc990:;
  /* 101cc990 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_101cc993:;
  /* 101cc993 cmp dword ptr [0x101d0b50], edx */
  { uint32_t _a=(r32((uint32_t)(0x101d0b50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc999 jle 0x101cc9ac */
  if ((C.zf||C.sf!=C.of)) goto L_101cc9ac;
  /* 101cc99b movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101cc99e push esi */
  push32((uint32_t)(ESI));
  /* 101cc99f push eax */
  push32((uint32_t)(EAX));
  /* 101cc9a0 call 0x101c946b */
  push32(0x101cc9a5u); f_101c946b();
  /* 101cc9a5 pop ecx */
  ECX = (pop32());
  /* 101cc9a6 pop ecx */
  ECX = (pop32());
  /* 101cc9a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 101cc9a9 pop edx */
  EDX = (pop32());
  /* 101cc9aa jmp 0x101cc9ba */
  goto L_101cc9ba;
L_101cc9ac:;
  /* 101cc9ac mov ecx, dword ptr [0x101d0940] */
  ECX = (r32((uint32_t)(0x101d0940)));
  /* 101cc9b2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101cc9b5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 101cc9b8 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_101cc9ba:;
  /* 101cc9ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cc9bc je 0x101cc9dc */
  if (C.zf) goto L_101cc9dc;
  /* 101cc9be cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc9c2 jae 0x101cc9d4 */
  if (!C.cf) goto L_101cc9d4;
  /* 101cc9c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101cc9c7 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 101cc9ca sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101cc9cd inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 101cc9d0 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 101cc9d2 jmp 0x101cc9d7 */
  goto L_101cc9d7;
L_101cc9d4:;
  /* 101cc9d4 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_101cc9d7:;
  /* 101cc9d7 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101cc9d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101cc9da jmp 0x101cc993 */
  goto L_101cc993;
L_101cc9dc:;
  /* 101cc9dc cmp bl, byte ptr [0x101d0b54] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x101d0b54))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc9e2 jne 0x101cca4b */
  if (!C.zf) goto L_101cca4b;
L_101cc9e4:;
  /* 101cc9e4 mov eax, esi */
  EAX = (ESI);
  /* 101cc9e6 jmp 0x101cc8ad */
  goto L_101cc8ad;
L_101cc9eb:;
  /* 101cc9eb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cc9ef mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 101cc9f2 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 101cc9f5 jne 0x101cca04 */
  if (!C.zf) goto L_101cca04;
L_101cc9f7:;
  /* 101cc9f7 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cc9fa jne 0x101cca04 */
  if (!C.zf) goto L_101cca04;
  /* 101cc9fc dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 101cc9ff mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101cca01 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101cca02 jmp 0x101cc9f7 */
  goto L_101cc9f7;
L_101cca04:;
  /* 101cca04 cmp dword ptr [0x101d0b50], edx */
  { uint32_t _a=(r32((uint32_t)(0x101d0b50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cca0a jle 0x101cca1d */
  if ((C.zf||C.sf!=C.of)) goto L_101cca1d;
  /* 101cca0c movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101cca0f push esi */
  push32((uint32_t)(ESI));
  /* 101cca10 push eax */
  push32((uint32_t)(EAX));
  /* 101cca11 call 0x101c946b */
  push32(0x101cca16u); f_101c946b();
  /* 101cca16 pop ecx */
  ECX = (pop32());
  /* 101cca17 pop ecx */
  ECX = (pop32());
  /* 101cca18 push 1 */
  push32((uint32_t)(0x1u));
  /* 101cca1a pop edx */
  EDX = (pop32());
  /* 101cca1b jmp 0x101cca2b */
  goto L_101cca2b;
L_101cca1d:;
  /* 101cca1d mov ecx, dword ptr [0x101d0940] */
  ECX = (r32((uint32_t)(0x101d0940)));
  /* 101cca23 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101cca26 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 101cca29 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_101cca2b:;
  /* 101cca2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cca2d je 0x101cca4b */
  if (C.zf) goto L_101cca4b;
  /* 101cca2f cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cca33 jae 0x101cca46 */
  if (!C.cf) goto L_101cca46;
  /* 101cca35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101cca38 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 101cca3b sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101cca3e inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 101cca41 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 101cca44 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_101cca46:;
  /* 101cca46 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101cca48 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101cca49 jmp 0x101cca04 */
  goto L_101cca04;
L_101cca4b:;
  /* 101cca4b cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cca4e je 0x101cc95e */
  if (C.zf) goto L_101cc95e;
  /* 101cca54 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cca57 je 0x101cc95e */
  if (C.zf) goto L_101cc95e;
  /* 101cca5d jmp 0x101cc937 */
  goto L_101cc937;
L_101cca62:;
  /* 101cca62 cmp dword ptr [0x101d0b50], edx */
  { uint32_t _a=(r32((uint32_t)(0x101d0b50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cca68 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 101cca6b jle 0x101cca7e */
  if ((C.zf||C.sf!=C.of)) goto L_101cca7e;
  /* 101cca6d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101cca70 push esi */
  push32((uint32_t)(ESI));
  /* 101cca71 push eax */
  push32((uint32_t)(EAX));
  /* 101cca72 call 0x101c946b */
  push32(0x101cca77u); f_101c946b();
  /* 101cca77 pop ecx */
  ECX = (pop32());
  /* 101cca78 pop ecx */
  ECX = (pop32());
  /* 101cca79 push 1 */
  push32((uint32_t)(0x1u));
  /* 101cca7b pop edx */
  EDX = (pop32());
  /* 101cca7c jmp 0x101cca8c */
  goto L_101cca8c;
L_101cca7e:;
  /* 101cca7e mov ecx, dword ptr [0x101d0940] */
  ECX = (r32((uint32_t)(0x101d0940)));
  /* 101cca84 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101cca87 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 101cca8a and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_101cca8c:;
  /* 101cca8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cca8e je 0x101ccb3e */
  if (C.zf) goto L_101ccb3e;
  /* 101cca94 mov eax, esi */
  EAX = (ESI);
  /* 101cca96 jmp 0x101ccaef */
  goto L_101ccaef;
L_101cca98:;
  /* 101cca98 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 101cca9b cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cca9e mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 101ccaa1 jl 0x101ccaa8 */
  if ((C.sf!=C.of)) goto L_101ccaa8;
  /* 101ccaa3 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ccaa6 jle 0x101ccaec */
  if ((C.zf||C.sf!=C.of)) goto L_101ccaec;
L_101ccaa8:;
  /* 101ccaa8 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101ccaab sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ccaae je 0x101ccb24 */
  if (C.zf) goto L_101ccb24;
  /* 101ccab0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101ccab1 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101ccab2 je 0x101ccb18 */
  if (C.zf) goto L_101ccb18;
  /* 101ccab4 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ccab7 jne 0x101ccbcc */
  if (!C.zf) goto L_101ccbcc;
L_101ccabd:;
  /* 101ccabd push 8 */
  push32((uint32_t)(0x8u));
  /* 101ccabf jmp 0x101ccb26 */
  goto L_101ccb26;
L_101ccac1:;
  /* 101ccac1 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_101ccac4:;
  /* 101ccac4 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ccac7 jne 0x101ccace */
  if (!C.zf) goto L_101ccace;
  /* 101ccac9 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101ccacb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101ccacc jmp 0x101ccac4 */
  goto L_101ccac4;
L_101ccace:;
  /* 101ccace cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ccad1 jl 0x101ccbc9 */
  if ((C.sf!=C.of)) goto L_101ccbc9;
  /* 101ccad7 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ccada jg 0x101ccbc9 */
  if ((!C.zf&&C.sf==C.of)) goto L_101ccbc9;
  /* 101ccae0 jmp 0x101ccaec */
  goto L_101ccaec;
L_101ccae2:;
  /* 101ccae2 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ccae5 jl 0x101ccaf5 */
  if ((C.sf!=C.of)) goto L_101ccaf5;
  /* 101ccae7 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ccaea jg 0x101ccaf5 */
  if ((!C.zf&&C.sf==C.of)) goto L_101ccaf5;
L_101ccaec:;
  /* 101ccaec push 9 */
  push32((uint32_t)(0x9u));
L_101ccaee:;
  /* 101ccaee pop eax */
  EAX = (pop32());
L_101ccaef:;
  /* 101ccaef dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101ccaf0 jmp 0x101cc8ad */
  goto L_101cc8ad;
L_101ccaf5:;
  /* 101ccaf5 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ccaf8 jne 0x101ccb3e */
  if (!C.zf) goto L_101ccb3e;
  /* 101ccafa jmp 0x101ccabd */
  goto L_101ccabd;
L_101ccafc:;
  /* 101ccafc cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccb00 je 0x101ccb2c */
  if (C.zf) goto L_101ccb2c;
  /* 101ccb02 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101ccb05 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 101ccb08 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ccb0b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 101ccb0e je 0x101ccb24 */
  if (C.zf) goto L_101ccb24;
  /* 101ccb10 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101ccb11 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101ccb12 jne 0x101ccbcc */
  if (!C.zf) goto L_101ccbcc;
L_101ccb18:;
  /* 101ccb18 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 101ccb1c push 7 */
  push32((uint32_t)(0x7u));
  /* 101ccb1e pop eax */
  EAX = (pop32());
  /* 101ccb1f jmp 0x101cc8ad */
  goto L_101cc8ad;
L_101ccb24:;
  /* 101ccb24 push 7 */
  push32((uint32_t)(0x7u));
L_101ccb26:;
  /* 101ccb26 pop eax */
  EAX = (pop32());
  /* 101ccb27 jmp 0x101cc8ad */
  goto L_101cc8ad;
L_101ccb2c:;
  /* 101ccb2c push 0xa */
  push32((uint32_t)(0xau));
  /* 101ccb2e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101ccb2f pop eax */
  EAX = (pop32());
L_101ccb30:;
  /* 101ccb30 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccb33 je 0x101ccbce */
  if (C.zf) goto L_101ccbce;
  /* 101ccb39 jmp 0x101cc8ad */
  goto L_101cc8ad;
L_101ccb3e:;
  /* 101ccb3e mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 101ccb41 jmp 0x101ccbce */
  goto L_101ccbce;
L_101ccb46:;
  /* 101ccb46 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 101ccb4d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_101ccb4f:;
  /* 101ccb4f cmp dword ptr [0x101d0b50], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101d0b50))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccb56 jle 0x101ccb67 */
  if ((C.zf||C.sf!=C.of)) goto L_101ccb67;
  /* 101ccb58 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101ccb5b push 4 */
  push32((uint32_t)(0x4u));
  /* 101ccb5d push eax */
  push32((uint32_t)(EAX));
  /* 101ccb5e call 0x101c946b */
  push32(0x101ccb63u); f_101c946b();
  /* 101ccb63 pop ecx */
  ECX = (pop32());
  /* 101ccb64 pop ecx */
  ECX = (pop32());
  /* 101ccb65 jmp 0x101ccb76 */
  goto L_101ccb76;
L_101ccb67:;
  /* 101ccb67 mov ecx, dword ptr [0x101d0940] */
  ECX = (r32((uint32_t)(0x101d0940)));
  /* 101ccb6d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101ccb70 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 101ccb73 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_101ccb76:;
  /* 101ccb76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ccb78 je 0x101ccb96 */
  if (C.zf) goto L_101ccb96;
  /* 101ccb7a movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101ccb7d lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 101ccb80 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 101ccb84 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccb8a jg 0x101ccb91 */
  if ((!C.zf&&C.sf==C.of)) goto L_101ccb91;
  /* 101ccb8c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101ccb8e inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101ccb8f jmp 0x101ccb4f */
  goto L_101ccb4f;
L_101ccb91:;
  /* 101ccb91 mov esi, 0x1451 */
  ESI = (0x1451u);
L_101ccb96:;
  /* 101ccb96 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_101ccb99:;
  /* 101ccb99 cmp dword ptr [0x101d0b50], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101d0b50))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccba0 jle 0x101ccbb1 */
  if ((C.zf||C.sf!=C.of)) goto L_101ccbb1;
  /* 101ccba2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101ccba5 push 4 */
  push32((uint32_t)(0x4u));
  /* 101ccba7 push eax */
  push32((uint32_t)(EAX));
  /* 101ccba8 call 0x101c946b */
  push32(0x101ccbadu); f_101c946b();
  /* 101ccbad pop ecx */
  ECX = (pop32());
  /* 101ccbae pop ecx */
  ECX = (pop32());
  /* 101ccbaf jmp 0x101ccbc0 */
  goto L_101ccbc0;
L_101ccbb1:;
  /* 101ccbb1 mov ecx, dword ptr [0x101d0940] */
  ECX = (r32((uint32_t)(0x101d0940)));
  /* 101ccbb7 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101ccbba mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 101ccbbd and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_101ccbc0:;
  /* 101ccbc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ccbc2 je 0x101ccbc9 */
  if (C.zf) goto L_101ccbc9;
  /* 101ccbc4 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101ccbc6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101ccbc7 jmp 0x101ccb99 */
  goto L_101ccb99;
L_101ccbc9:;
  /* 101ccbc9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101ccbca jmp 0x101ccbce */
  goto L_101ccbce;
L_101ccbcc:;
  /* 101ccbcc mov edi, ecx */
  EDI = (ECX);
L_101ccbce:;
  /* 101ccbce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101ccbd1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccbd5 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 101ccbd7 je 0x101cccb6 */
  if (C.zf) goto L_101cccb6;
  /* 101ccbdd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 101ccbdf pop eax */
  EAX = (pop32());
  /* 101ccbe0 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccbe3 jbe 0x101ccbfa */
  if ((C.cf||C.zf)) goto L_101ccbfa;
  /* 101ccbe5 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ccbe9 jl 0x101ccbee */
  if ((C.sf!=C.of)) goto L_101ccbee;
  /* 101ccbeb inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_101ccbee:;
  /* 101ccbee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101ccbf1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101ccbf4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101ccbf5 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 101ccbf8 jmp 0x101ccbfd */
  goto L_101ccbfd;
L_101ccbfa:;
  /* 101ccbfa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_101ccbfd:;
  /* 101ccbfd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccc01 jbe 0x101cccac */
  if ((C.cf||C.zf)) goto L_101cccac;
L_101ccc07:;
  /* 101ccc07 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101ccc08 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ccc0b jne 0x101ccc15 */
  if (!C.zf) goto L_101ccc15;
  /* 101ccc0d dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 101ccc10 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 101ccc13 jmp 0x101ccc07 */
  goto L_101ccc07;
L_101ccc15:;
  /* 101ccc15 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 101ccc18 push eax */
  push32((uint32_t)(EAX));
  /* 101ccc19 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 101ccc1c push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 101ccc1f push eax */
  push32((uint32_t)(EAX));
  /* 101ccc20 call 0x101cc78f */
  push32(0x101ccc25u); f_101cc78f();
  /* 101ccc25 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 101ccc28 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101ccc2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ccc2d cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccc30 jge 0x101ccc34 */
  if ((C.sf==C.of)) goto L_101ccc34;
  /* 101ccc32 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_101ccc34:;
  /* 101ccc34 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101ccc37 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccc3a jne 0x101ccc3f */
  if (!C.zf) goto L_101ccc3f;
  /* 101ccc3c add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_101ccc3f:;
  /* 101ccc3f cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccc42 jne 0x101ccc47 */
  if (!C.zf) goto L_101ccc47;
  /* 101ccc44 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_101ccc47:;
  /* 101ccc47 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccc4c jle 0x101ccc7e */
  if ((C.zf||C.sf!=C.of)) goto L_101ccc7e;
  /* 101ccc4e mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_101ccc55:;
  /* 101ccc55 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 101ccc58 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 101ccc5b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 101ccc5e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_101ccc61:;
  /* 101ccc61 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccc65 je 0x101cccc7 */
  if (C.zf) goto L_101cccc7;
  /* 101ccc67 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101ccc69 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 101ccc6e mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 101ccc73 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101ccc75 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 101ccc7c jmp 0x101cccdc */
  goto L_101cccdc;
L_101ccc7e:;
  /* 101ccc7e cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccc83 jge 0x101ccc8e */
  if ((C.sf==C.of)) goto L_101ccc8e;
  /* 101ccc85 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 101ccc8c jmp 0x101ccc55 */
  goto L_101ccc55;
L_101ccc8e:;
  /* 101ccc8e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101ccc91 push eax */
  push32((uint32_t)(EAX));
  /* 101ccc92 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 101ccc95 push eax */
  push32((uint32_t)(EAX));
  /* 101ccc96 call 0x101cd72a */
  push32(0x101ccc9bu); f_101cd72a();
  /* 101ccc9b mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 101ccc9e mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 101ccca1 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 101ccca4 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 101ccca7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cccaa jmp 0x101ccc61 */
  goto L_101ccc61;
L_101cccac:;
  /* 101cccac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101cccae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cccb0 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101cccb2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101cccb4 jmp 0x101ccc61 */
  goto L_101ccc61;
L_101cccb6:;
  /* 101cccb6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101cccb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cccba xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101cccbc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101cccbe mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 101cccc5 jmp 0x101cccdc */
  goto L_101cccdc;
L_101cccc7:;
  /* 101cccc7 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccccb je 0x101cccdc */
  if (C.zf) goto L_101cccdc;
  /* 101ccccd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101ccccf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cccd1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101cccd3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101cccd5 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_101cccdc:;
  /* 101cccdc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cccdf or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 101ccce2 pop edi */
  EDI = (pop32());
  /* 101ccce3 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 101ccce6 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 101ccce9 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 101ccced mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 101cccf0 pop esi */
  ESI = (pop32());
  /* 101cccf1 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 101cccf4 pop ebx */
  EBX = (pop32());
  /* 101cccf5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101cccf6 ret  */
  ESPCHK(0x101cc856u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd27 @ 0x101ccd27 (659 bytes, 232 insns) */
void f_101ccd27(void) {
  FTRACE(0x101ccd27u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ccd27 push ebp */
  push32((uint32_t)(EBP));
  /* 101ccd28 mov ebp, esp */
  EBP = (ESP);
  /* 101ccd2a sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ccd2d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 101ccd30 push ebx */
  push32((uint32_t)(EBX));
  /* 101ccd31 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 101ccd34 push esi */
  push32((uint32_t)(ESI));
  /* 101ccd35 mov ecx, eax */
  ECX = (EAX);
  /* 101ccd37 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 101ccd3c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 101ccd42 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 101ccd44 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 101ccd47 push edi */
  push32((uint32_t)(EDI));
  /* 101ccd48 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 101ccd4c mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 101ccd50 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 101ccd54 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 101ccd58 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 101ccd5c mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 101ccd60 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 101ccd64 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 101ccd68 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 101ccd6c mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 101ccd70 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 101ccd74 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 101ccd78 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 101ccd7f mov edx, eax */
  EDX = (EAX);
  /* 101ccd81 je 0x101ccd89 */
  if (C.zf) goto L_101ccd89;
  /* 101ccd83 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 101ccd87 jmp 0x101ccd8d */
  goto L_101ccd8d;
L_101ccd89:;
  /* 101ccd89 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_101ccd8d:;
  /* 101ccd8d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101ccd90 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 101ccd93 jne 0x101ccdb3 */
  if (!C.zf) goto L_101ccdb3;
  /* 101ccd95 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101ccd97 jne 0x101ccdb3 */
  if (!C.zf) goto L_101ccdb3;
  /* 101ccd99 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccd9c jne 0x101ccdb3 */
  if (!C.zf) goto L_101ccdb3;
L_101ccd9e:;
  /* 101ccd9e and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 101ccda2 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 101ccda6 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 101ccdaa mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 101ccdae jmp 0x101ccfb1 */
  goto L_101ccfb1;
L_101ccdb3:;
  /* 101ccdb3 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101ccdb6 jne 0x101cce32 */
  if (!C.zf) goto L_101cce32;
  /* 101ccdb8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 101ccdbd mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 101ccdc2 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccdc4 jne 0x101ccdcc */
  if (!C.zf) goto L_101ccdcc;
  /* 101ccdc6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccdca je 0x101ccddb */
  if (C.zf) goto L_101ccddb;
L_101ccdcc:;
  /* 101ccdcc test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 101ccdd2 jne 0x101ccddb */
  if (!C.zf) goto L_101ccddb;
  /* 101ccdd4 push 0x101ce5a0 */
  push32((uint32_t)(0x101ce5a0u));
  /* 101ccdd9 jmp 0x101cce21 */
  goto L_101cce21;
L_101ccddb:;
  /* 101ccddb test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 101ccdde je 0x101ccdf5 */
  if (C.zf) goto L_101ccdf5;
  /* 101ccde0 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccde6 jne 0x101ccdf5 */
  if (!C.zf) goto L_101ccdf5;
  /* 101ccde8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccdec jne 0x101cce1c */
  if (!C.zf) goto L_101cce1c;
  /* 101ccdee push 0x101ce598 */
  push32((uint32_t)(0x101ce598u));
  /* 101ccdf3 jmp 0x101cce04 */
  goto L_101cce04;
L_101ccdf5:;
  /* 101ccdf5 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccdf7 jne 0x101cce1c */
  if (!C.zf) goto L_101cce1c;
  /* 101ccdf9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccdfd jne 0x101cce1c */
  if (!C.zf) goto L_101cce1c;
  /* 101ccdff push 0x101ce590 */
  push32((uint32_t)(0x101ce590u));
L_101cce04:;
  /* 101cce04 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 101cce07 push eax */
  push32((uint32_t)(EAX));
  /* 101cce08 call 0x101c9b90 */
  push32(0x101cce0du); f_101c9b90();
  /* 101cce0d pop ecx */
  ECX = (pop32());
  /* 101cce0e mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 101cce12 pop ecx */
  ECX = (pop32());
L_101cce13:;
  /* 101cce13 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101cce17 jmp 0x101ccf8a */
  goto L_101ccf8a;
L_101cce1c:;
  /* 101cce1c push 0x101ce588 */
  push32((uint32_t)(0x101ce588u));
L_101cce21:;
  /* 101cce21 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 101cce24 push eax */
  push32((uint32_t)(EAX));
  /* 101cce25 call 0x101c9b90 */
  push32(0x101cce2au); f_101c9b90();
  /* 101cce2a pop ecx */
  ECX = (pop32());
  /* 101cce2b mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 101cce2f pop ecx */
  ECX = (pop32());
  /* 101cce30 jmp 0x101cce13 */
  goto L_101cce13;
L_101cce32:;
  /* 101cce32 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 101cce35 mov ecx, edi */
  ECX = (EDI);
  /* 101cce37 mov esi, eax */
  ESI = (EAX);
  /* 101cce39 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 101cce3c imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101cce42 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 101cce45 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 101cce4a push 1 */
  push32((uint32_t)(0x1u));
  /* 101cce4c lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 101cce4f mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 101cce53 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101cce56 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 101cce59 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 101cce60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cce63 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 101cce66 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 101cce69 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 101cce6c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101cce6e push eax */
  push32((uint32_t)(EAX));
  /* 101cce6f lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101cce72 push eax */
  push32((uint32_t)(EAX));
  /* 101cce73 call 0x101cd72a */
  push32(0x101cce78u); f_101cd72a();
  /* 101cce78 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cce7b cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101cce81 jb 0x101cce93 */
  if (C.cf) goto L_101cce93;
  /* 101cce83 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 101cce86 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101cce87 push eax */
  push32((uint32_t)(EAX));
  /* 101cce88 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101cce8b push eax */
  push32((uint32_t)(EAX));
  /* 101cce8c call 0x101cd50a */
  push32(0x101cce91u); f_101cd50a();
  /* 101cce91 pop ecx */
  ECX = (pop32());
  /* 101cce92 pop ecx */
  ECX = (pop32());
L_101cce93:;
  /* 101cce93 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 101cce97 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 101cce9a je 0x101ccead */
  if (C.zf) goto L_101ccead;
  /* 101cce9c mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 101cce9f movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 101ccea2 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101ccea4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101ccea6 jg 0x101cceb0 */
  if ((!C.zf&&C.sf==C.of)) goto L_101cceb0;
  /* 101ccea8 jmp 0x101ccd9e */
  goto L_101ccd9e;
L_101ccead:;
  /* 101ccead mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_101cceb0:;
  /* 101cceb0 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cceb3 jle 0x101cceb8 */
  if ((C.zf||C.sf!=C.of)) goto L_101cceb8;
  /* 101cceb5 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 101cceb7 pop edi */
  EDI = (pop32());
L_101cceb8:;
  /* 101cceb8 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 101ccebc sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101ccec2 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 101ccec7 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_101ccece:;
  /* 101ccece lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101cced1 push eax */
  push32((uint32_t)(EAX));
  /* 101cced2 call 0x101cc734 */
  push32(0x101cced7u); f_101cc734();
  /* 101cced7 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 101cceda pop ecx */
  ECX = (pop32());
  /* 101ccedb jne 0x101ccece */
  if (!C.zf) goto L_101ccece;
  /* 101ccedd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101ccedf jge 0x101ccef8 */
  if ((C.sf==C.of)) goto L_101ccef8;
  /* 101ccee1 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 101ccee3 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 101ccee9 jle 0x101ccef8 */
  if ((C.zf||C.sf!=C.of)) goto L_101ccef8;
L_101cceeb:;
  /* 101cceeb lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101cceee push eax */
  push32((uint32_t)(EAX));
  /* 101cceef call 0x101cc762 */
  push32(0x101ccef4u); f_101cc762();
  /* 101ccef4 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101ccef5 pop ecx */
  ECX = (pop32());
  /* 101ccef6 jne 0x101cceeb */
  if (!C.zf) goto L_101cceeb;
L_101ccef8:;
  /* 101ccef8 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 101ccefb lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 101ccefe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101ccf00 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 101ccf03 jle 0x101ccf55 */
  if ((C.zf||C.sf!=C.of)) goto L_101ccf55;
  /* 101ccf05 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_101ccf08:;
  /* 101ccf08 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 101ccf0b lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 101ccf0e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101ccf0f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101ccf10 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101ccf13 push eax */
  push32((uint32_t)(EAX));
  /* 101ccf14 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101ccf15 call 0x101cc734 */
  push32(0x101ccf1au); f_101cc734();
  /* 101ccf1a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101ccf1d push eax */
  push32((uint32_t)(EAX));
  /* 101ccf1e call 0x101cc734 */
  push32(0x101ccf23u); f_101cc734();
  /* 101ccf23 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101ccf26 push eax */
  push32((uint32_t)(EAX));
  /* 101ccf27 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101ccf2a push eax */
  push32((uint32_t)(EAX));
  /* 101ccf2b call 0x101cc6d6 */
  push32(0x101ccf30u); f_101cc6d6();
  /* 101ccf30 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101ccf33 push eax */
  push32((uint32_t)(EAX));
  /* 101ccf34 call 0x101cc734 */
  push32(0x101ccf39u); f_101cc734();
  /* 101ccf39 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 101ccf3c mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 101ccf3f and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 101ccf43 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101ccf46 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 101ccf48 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 101ccf4b dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 101ccf4e mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 101ccf50 jne 0x101ccf08 */
  if (!C.zf) goto L_101ccf08;
  /* 101ccf52 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_101ccf55:;
  /* 101ccf55 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 101ccf58 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101ccf59 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101ccf5a cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ccf5d lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 101ccf60 jl 0x101ccf92 */
  if ((C.sf!=C.of)) goto L_101ccf92;
L_101ccf62:;
  /* 101ccf62 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccf64 jb 0x101ccf75 */
  if (C.cf) goto L_101ccf75;
  /* 101ccf66 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ccf69 jne 0x101ccf71 */
  if (!C.zf) goto L_101ccf71;
  /* 101ccf6b mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 101ccf6e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101ccf6f jmp 0x101ccf62 */
  goto L_101ccf62;
L_101ccf71:;
  /* 101ccf71 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccf73 jae 0x101ccf79 */
  if (!C.cf) goto L_101ccf79;
L_101ccf75:;
  /* 101ccf75 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101ccf76 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_101ccf79:;
  /* 101ccf79 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_101ccf7b:;
  /* 101ccf7b sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101ccf7d sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101ccf7f mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 101ccf82 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 101ccf85 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_101ccf8a:;
  /* 101ccf8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_101ccf8d:;
  /* 101ccf8d pop edi */
  EDI = (pop32());
  /* 101ccf8e pop esi */
  ESI = (pop32());
  /* 101ccf8f pop ebx */
  EBX = (pop32());
  /* 101ccf90 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101ccf91 ret  */
  ESPCHK(0x101ccd27u, _esp0);
  ESP += 4; return;
L_101ccf92:;
  /* 101ccf92 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccf94 jb 0x101ccfa2 */
  if (C.cf) goto L_101ccfa2;
  /* 101ccf96 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101ccf99 jne 0x101ccf9e */
  if (!C.zf) goto L_101ccf9e;
  /* 101ccf9b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101ccf9c jmp 0x101ccf92 */
  goto L_101ccf92;
L_101ccf9e:;
  /* 101ccf9e cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101ccfa0 jae 0x101ccf7b */
  if (!C.cf) goto L_101ccf7b;
L_101ccfa2:;
  /* 101ccfa2 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 101ccfa6 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 101ccfaa mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 101ccfae mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_101ccfb1:;
  /* 101ccfb1 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 101ccfb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 101ccfb7 pop eax */
  EAX = (pop32());
  /* 101ccfb8 jmp 0x101ccf8d */
  goto L_101ccf8d;
}

/* FUN_1000cfba @ 0x101ccfba (27 bytes, 13 insns) */
void f_101ccfba(void) {
  FTRACE(0x101ccfbau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ccfba mov eax, dword ptr [0x101d67dc] */
  EAX = (r32((uint32_t)(0x101d67dc)));
  /* 101ccfbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ccfc1 je 0x101ccfd2 */
  if (C.zf) goto L_101ccfd2;
  /* 101ccfc3 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 101ccfc7 call eax */
  call_ind((uint32_t)(EAX), 0x101ccfc9u);
  /* 101ccfc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101ccfcb pop ecx */
  ECX = (pop32());
  /* 101ccfcc je 0x101ccfd2 */
  if (C.zf) goto L_101ccfd2;
  /* 101ccfce push 1 */
  push32((uint32_t)(0x1u));
  /* 101ccfd0 pop eax */
  EAX = (pop32());
  /* 101ccfd1 ret  */
  ESPCHK(0x101ccfbau, _esp0);
  ESP += 4; return;
L_101ccfd2:;
  /* 101ccfd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101ccfd4 ret  */
  ESPCHK(0x101ccfbau, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x101ccfd8 (32 bytes, 18 insns) */
void f_101ccfd8(void) {
  FTRACE(0x101ccfd8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101ccfd8 push ebp */
  push32((uint32_t)(EBP));
  /* 101ccfd9 mov ebp, esp */
  EBP = (ESP);
  /* 101ccfdb push ebx */
  push32((uint32_t)(EBX));
  /* 101ccfdc push esi */
  push32((uint32_t)(ESI));
  /* 101ccfdd push edi */
  push32((uint32_t)(EDI));
  /* 101ccfde push ebp */
  push32((uint32_t)(EBP));
  /* 101ccfdf push 0 */
  push32((uint32_t)(0x0u));
  /* 101ccfe1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101ccfe3 push 0x101ccff0 */
  push32((uint32_t)(0x101ccff0u));
  /* 101ccfe8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101ccfeb call 0x101cdad4 */
  push32(0x101ccff0u); f_101cdad4();
  /* 101ccff0 pop ebp */
  EBP = (pop32());
  /* 101ccff1 pop edi */
  EDI = (pop32());
  /* 101ccff2 pop esi */
  ESI = (pop32());
  /* 101ccff3 pop ebx */
  EBX = (pop32());
  /* 101ccff4 mov esp, ebp */
  ESP = (EBP);
  /* 101ccff6 pop ebp */
  EBP = (pop32());
  /* 101ccff7 ret  */
  ESPCHK(0x101ccfd8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x101cd01a (104 bytes, 33 insns) */
void f_101cd01a(void) {
  FTRACE(0x101cd01au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cd01a push ebx */
  push32((uint32_t)(EBX));
  /* 101cd01b push esi */
  push32((uint32_t)(ESI));
  /* 101cd01c push edi */
  push32((uint32_t)(EDI));
  /* 101cd01d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101cd021 push eax */
  push32((uint32_t)(EAX));
  /* 101cd022 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 101cd024 push 0x101ccff8 */
  push32((uint32_t)(0x101ccff8u));
  /* 101cd029 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 101cd030 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_101cd037:;
  /* 101cd037 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 101cd03b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 101cd03e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 101cd041 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd044 je 0x101cd074 */
  if (C.zf) goto L_101cd074;
  /* 101cd046 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd04a je 0x101cd074 */
  if (C.zf) goto L_101cd074;
  /* 101cd04c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 101cd04f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 101cd052 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 101cd056 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 101cd059 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd05e jne 0x101cd072 */
  if (!C.zf) goto L_101cd072;
  /* 101cd060 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 101cd065 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 101cd069 call 0x101cd0ae */
  push32(0x101cd06eu); f_101cd0ae();
  /* 101cd06e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x101cd072u);
L_101cd072:;
  /* 101cd072 jmp 0x101cd037 */
  goto L_101cd037;
L_101cd074:;
  /* 101cd074 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 101cd07b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cd07e pop edi */
  EDI = (pop32());
  /* 101cd07f pop esi */
  ESI = (pop32());
  /* 101cd080 pop ebx */
  EBX = (pop32());
  /* 101cd081 ret  */
  ESPCHK(0x101cd01au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0ae @ 0x101cd0ae (24 bytes, 10 insns) */
void f_101cd0ae(void) {
  FTRACE(0x101cd0aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cd0ae push ebx */
  push32((uint32_t)(EBX));
  /* 101cd0af push ecx */
  push32((uint32_t)(ECX));
  /* 101cd0b0 mov ebx, 0x101d3074 */
  EBX = (0x101d3074u);
  /* 101cd0b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cd0b8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 101cd0bb mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 101cd0be mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 101cd0c1 pop ecx */
  ECX = (pop32());
  /* 101cd0c2 pop ebx */
  EBX = (pop32());
  /* 101cd0c3 ret 4 */
  ESPCHK(0x101cd0aeu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d18d @ 0x101cd18d (27 bytes, 11 insns) */
void f_101cd18d(void) {
  FTRACE(0x101cd18du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cd18d push ebp */
  push32((uint32_t)(EBP));
  /* 101cd18e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 101cd192 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 101cd194 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 101cd197 push eax */
  push32((uint32_t)(EAX));
  /* 101cd198 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 101cd19b push eax */
  push32((uint32_t)(EAX));
  /* 101cd19c call 0x101cd01a */
  push32(0x101cd1a1u); f_101cd01a();
  /* 101cd1a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cd1a4 pop ebp */
  EBP = (pop32());
  /* 101cd1a5 ret 4 */
  ESPCHK(0x101cd18du, _esp0);
  ESP += 8; return;
}

/* FUN_1000d1a8 @ 0x101cd1a8 (111 bytes, 44 insns) */
void f_101cd1a8(void) {
  FTRACE(0x101cd1a8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cd1a8 push ebx */
  push32((uint32_t)(EBX));
  /* 101cd1a9 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101cd1ab cmp dword ptr [0x101d67a8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101d67a8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd1b1 jne 0x101cd1c6 */
  if (!C.zf) goto L_101cd1c6;
  /* 101cd1b3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101cd1b7 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd1ba jl 0x101cd215 */
  if ((C.sf!=C.of)) goto L_101cd215;
  /* 101cd1bc cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd1bf jg 0x101cd215 */
  if ((!C.zf&&C.sf==C.of)) goto L_101cd215;
  /* 101cd1c1 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cd1c4 pop ebx */
  EBX = (pop32());
  /* 101cd1c5 ret  */
  ESPCHK(0x101cd1a8u, _esp0);
  ESP += 4; return;
L_101cd1c6:;
  /* 101cd1c6 push esi */
  push32((uint32_t)(ESI));
  /* 101cd1c7 mov esi, 0x101d6924 */
  ESI = (0x101d6924u);
  /* 101cd1cc push edi */
  push32((uint32_t)(EDI));
  /* 101cd1cd push esi */
  push32((uint32_t)(ESI));
  /* 101cd1ce call dword ptr [0x101ce090] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce090))), 0x101cd1d4u);
  /* 101cd1d4 cmp dword ptr [0x101d6920], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101d6920))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd1da mov edi, dword ptr [0x101ce08c] */
  EDI = (r32((uint32_t)(0x101ce08c)));
  /* 101cd1e0 je 0x101cd1f0 */
  if (C.zf) goto L_101cd1f0;
  /* 101cd1e2 push esi */
  push32((uint32_t)(ESI));
  /* 101cd1e3 call edi */
  call_ind((uint32_t)(EDI), 0x101cd1e5u);
  /* 101cd1e5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101cd1e7 call 0x101ca0b3 */
  push32(0x101cd1ecu); f_101ca0b3();
  /* 101cd1ec pop ecx */
  ECX = (pop32());
  /* 101cd1ed push 1 */
  push32((uint32_t)(0x1u));
  /* 101cd1ef pop ebx */
  EBX = (pop32());
L_101cd1f0:;
  /* 101cd1f0 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 101cd1f4 call 0x101cd217 */
  push32(0x101cd1f9u); f_101cd217();
  /* 101cd1f9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101cd1fb pop ecx */
  ECX = (pop32());
  /* 101cd1fc mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 101cd200 je 0x101cd20c */
  if (C.zf) goto L_101cd20c;
  /* 101cd202 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101cd204 call 0x101ca114 */
  push32(0x101cd209u); f_101ca114();
  /* 101cd209 pop ecx */
  ECX = (pop32());
  /* 101cd20a jmp 0x101cd20f */
  goto L_101cd20f;
L_101cd20c:;
  /* 101cd20c push esi */
  push32((uint32_t)(ESI));
  /* 101cd20d call edi */
  call_ind((uint32_t)(EDI), 0x101cd20fu);
L_101cd20f:;
  /* 101cd20f mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101cd213 pop edi */
  EDI = (pop32());
  /* 101cd214 pop esi */
  ESI = (pop32());
L_101cd215:;
  /* 101cd215 pop ebx */
  EBX = (pop32());
  /* 101cd216 ret  */
  ESPCHK(0x101cd1a8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d217 @ 0x101cd217 (204 bytes, 71 insns) */
void f_101cd217(void) {
  FTRACE(0x101cd217u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cd217 push ebp */
  push32((uint32_t)(EBP));
  /* 101cd218 mov ebp, esp */
  EBP = (ESP);
  /* 101cd21a push ecx */
  push32((uint32_t)(ECX));
  /* 101cd21b cmp dword ptr [0x101d67a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101d67a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd222 push ebx */
  push32((uint32_t)(EBX));
  /* 101cd223 jne 0x101cd242 */
  if (!C.zf) goto L_101cd242;
  /* 101cd225 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cd228 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd22b jl 0x101cd2e0 */
  if ((C.sf!=C.of)) goto L_101cd2e0;
  /* 101cd231 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd234 jg 0x101cd2e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_101cd2e0;
  /* 101cd23a sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cd23d jmp 0x101cd2e0 */
  goto L_101cd2e0;
L_101cd242:;
  /* 101cd242 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cd245 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd24b jge 0x101cd275 */
  if ((C.sf==C.of)) goto L_101cd275;
  /* 101cd24d cmp dword ptr [0x101d0b50], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101d0b50))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd254 jle 0x101cd262 */
  if ((C.zf||C.sf!=C.of)) goto L_101cd262;
  /* 101cd256 push 2 */
  push32((uint32_t)(0x2u));
  /* 101cd258 push ebx */
  push32((uint32_t)(EBX));
  /* 101cd259 call 0x101c946b */
  push32(0x101cd25eu); f_101c946b();
  /* 101cd25e pop ecx */
  ECX = (pop32());
  /* 101cd25f pop ecx */
  ECX = (pop32());
  /* 101cd260 jmp 0x101cd26d */
  goto L_101cd26d;
L_101cd262:;
  /* 101cd262 mov eax, dword ptr [0x101d0940] */
  EAX = (r32((uint32_t)(0x101d0940)));
  /* 101cd267 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 101cd26a and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_101cd26d:;
  /* 101cd26d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cd26f jne 0x101cd275 */
  if (!C.zf) goto L_101cd275;
L_101cd271:;
  /* 101cd271 mov eax, ebx */
  EAX = (EBX);
  /* 101cd273 jmp 0x101cd2e0 */
  goto L_101cd2e0;
L_101cd275:;
  /* 101cd275 mov edx, dword ptr [0x101d0940] */
  EDX = (r32((uint32_t)(0x101d0940)));
  /* 101cd27b mov eax, ebx */
  EAX = (EBX);
  /* 101cd27d sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 101cd280 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 101cd283 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 101cd288 je 0x101cd298 */
  if (C.zf) goto L_101cd298;
  /* 101cd28a and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 101cd28e mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 101cd291 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 101cd294 push 2 */
  push32((uint32_t)(0x2u));
  /* 101cd296 jmp 0x101cd2a1 */
  goto L_101cd2a1;
L_101cd298:;
  /* 101cd298 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 101cd29c mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 101cd29f push 1 */
  push32((uint32_t)(0x1u));
L_101cd2a1:;
  /* 101cd2a1 pop eax */
  EAX = (pop32());
  /* 101cd2a2 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 101cd2a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 101cd2a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 101cd2a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 101cd2ab push ecx */
  push32((uint32_t)(ECX));
  /* 101cd2ac push eax */
  push32((uint32_t)(EAX));
  /* 101cd2ad lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101cd2b0 push eax */
  push32((uint32_t)(EAX));
  /* 101cd2b1 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 101cd2b6 push dword ptr [0x101d67a8] */
  push32((uint32_t)(r32((uint32_t)(0x101d67a8))));
  /* 101cd2bc call 0x101cc466 */
  push32(0x101cd2c1u); f_101cc466();
  /* 101cd2c1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cd2c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cd2c6 je 0x101cd271 */
  if (C.zf) goto L_101cd271;
  /* 101cd2c8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd2cb jne 0x101cd2d3 */
  if (!C.zf) goto L_101cd2d3;
  /* 101cd2cd movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 101cd2d1 jmp 0x101cd2e0 */
  goto L_101cd2e0;
L_101cd2d3:;
  /* 101cd2d3 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 101cd2d7 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 101cd2db shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 101cd2de or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_101cd2e0:;
  /* 101cd2e0 pop ebx */
  EBX = (pop32());
  /* 101cd2e1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101cd2e2 ret  */
  ESPCHK(0x101cd217u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2e3 @ 0x101cd2e3 (49 bytes, 20 insns) */
void f_101cd2e3(void) {
  FTRACE(0x101cd2e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cd2e3 push esi */
  push32((uint32_t)(ESI));
  /* 101cd2e4 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101cd2e8 push edi */
  push32((uint32_t)(EDI));
  /* 101cd2e9 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 101cd2ec test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 101cd2f0 je 0x101cd2f8 */
  if (C.zf) goto L_101cd2f8;
  /* 101cd2f2 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 101cd2f6 jmp 0x101cd30f */
  goto L_101cd30f;
L_101cd2f8:;
  /* 101cd2f8 push esi */
  push32((uint32_t)(ESI));
  /* 101cd2f9 call 0x101c902e */
  push32(0x101cd2feu); f_101c902e();
  /* 101cd2fe push esi */
  push32((uint32_t)(ESI));
  /* 101cd2ff call 0x101cd314 */
  push32(0x101cd304u); f_101cd314();
  /* 101cd304 push esi */
  push32((uint32_t)(ESI));
  /* 101cd305 mov edi, eax */
  EDI = (EAX);
  /* 101cd307 call 0x101c9080 */
  push32(0x101cd30cu); f_101c9080();
  /* 101cd30c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101cd30f:;
  /* 101cd30f mov eax, edi */
  EAX = (EDI);
  /* 101cd311 pop edi */
  EDI = (pop32());
  /* 101cd312 pop esi */
  ESI = (pop32());
  /* 101cd313 ret  */
  ESPCHK(0x101cd2e3u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x101cd314 (76 bytes, 30 insns) */
void f_101cd314(void) {
  FTRACE(0x101cd314u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cd314 push esi */
  push32((uint32_t)(ESI));
  /* 101cd315 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101cd319 push edi */
  push32((uint32_t)(EDI));
  /* 101cd31a or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 101cd31d test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 101cd321 je 0x101cd357 */
  if (C.zf) goto L_101cd357;
  /* 101cd323 push esi */
  push32((uint32_t)(ESI));
  /* 101cd324 call 0x101cc214 */
  push32(0x101cd329u); f_101cc214();
  /* 101cd329 push esi */
  push32((uint32_t)(ESI));
  /* 101cd32a mov edi, eax */
  EDI = (EAX);
  /* 101cd32c call 0x101cd886 */
  push32(0x101cd331u); f_101cd886();
  /* 101cd331 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 101cd334 call 0x101cd7a6 */
  push32(0x101cd339u); f_101cd7a6();
  /* 101cd339 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cd33c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cd33e jge 0x101cd345 */
  if ((C.sf==C.of)) goto L_101cd345;
  /* 101cd340 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 101cd343 jmp 0x101cd357 */
  goto L_101cd357;
L_101cd345:;
  /* 101cd345 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 101cd348 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cd34a je 0x101cd357 */
  if (C.zf) goto L_101cd357;
  /* 101cd34c push eax */
  push32((uint32_t)(EAX));
  /* 101cd34d call 0x101ca266 */
  push32(0x101cd352u); f_101ca266();
  /* 101cd352 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 101cd356 pop ecx */
  ECX = (pop32());
L_101cd357:;
  /* 101cd357 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 101cd35b mov eax, edi */
  EAX = (EDI);
  /* 101cd35d pop edi */
  EDI = (pop32());
  /* 101cd35e pop esi */
  ESI = (pop32());
  /* 101cd35f ret  */
  ESPCHK(0x101cd314u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d360 @ 0x101cd360 (147 bytes, 52 insns) */
void f_101cd360(void) {
  FTRACE(0x101cd360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cd360 push ebx */
  push32((uint32_t)(EBX));
  /* 101cd361 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 101cd365 cmp ebx, dword ptr [0x101d7ca0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x101d7ca0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd36b push esi */
  push32((uint32_t)(ESI));
  /* 101cd36c push edi */
  push32((uint32_t)(EDI));
  /* 101cd36d jae 0x101cd3e1 */
  if (!C.cf) goto L_101cd3e1;
  /* 101cd36f mov eax, ebx */
  EAX = (EBX);
  /* 101cd371 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 101cd374 lea edi, [eax*4 + 0x101d7ba0] */
  EDI = ((uint32_t)(EAX*4 + 0x101d7ba0));
  /* 101cd37b mov eax, ebx */
  EAX = (EBX);
  /* 101cd37d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101cd380 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 101cd383 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 101cd385 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 101cd388 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 101cd38d je 0x101cd3e1 */
  if (C.zf) goto L_101cd3e1;
  /* 101cd38f push ebx */
  push32((uint32_t)(EBX));
  /* 101cd390 call 0x101cc0e4 */
  push32(0x101cd395u); f_101cc0e4();
  /* 101cd395 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 101cd397 pop ecx */
  ECX = (pop32());
  /* 101cd398 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 101cd39d je 0x101cd3c8 */
  if (C.zf) goto L_101cd3c8;
  /* 101cd39f push ebx */
  push32((uint32_t)(EBX));
  /* 101cd3a0 call 0x101cc0a2 */
  push32(0x101cd3a5u); f_101cc0a2();
  /* 101cd3a5 pop ecx */
  ECX = (pop32());
  /* 101cd3a6 push eax */
  push32((uint32_t)(EAX));
  /* 101cd3a7 call dword ptr [0x101ce0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce0d0))), 0x101cd3adu);
  /* 101cd3ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cd3af jne 0x101cd3bb */
  if (!C.zf) goto L_101cd3bb;
  /* 101cd3b1 call dword ptr [0x101ce03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce03c))), 0x101cd3b7u);
  /* 101cd3b7 mov esi, eax */
  ESI = (EAX);
  /* 101cd3b9 jmp 0x101cd3bd */
  goto L_101cd3bd;
L_101cd3bb:;
  /* 101cd3bb xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_101cd3bd:;
  /* 101cd3bd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101cd3bf je 0x101cd3d6 */
  if (C.zf) goto L_101cd3d6;
  /* 101cd3c1 call 0x101cc01a */
  push32(0x101cd3c6u); f_101cc01a();
  /* 101cd3c6 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_101cd3c8:;
  /* 101cd3c8 call 0x101cc011 */
  push32(0x101cd3cdu); f_101cc011();
  /* 101cd3cd mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101cd3d3 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_101cd3d6:;
  /* 101cd3d6 push ebx */
  push32((uint32_t)(EBX));
  /* 101cd3d7 call 0x101cc143 */
  push32(0x101cd3dcu); f_101cc143();
  /* 101cd3dc pop ecx */
  ECX = (pop32());
  /* 101cd3dd mov eax, esi */
  EAX = (ESI);
  /* 101cd3df jmp 0x101cd3ef */
  goto L_101cd3ef;
L_101cd3e1:;
  /* 101cd3e1 call 0x101cc011 */
  push32(0x101cd3e6u); f_101cc011();
  /* 101cd3e6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101cd3ec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_101cd3ef:;
  /* 101cd3ef pop edi */
  EDI = (pop32());
  /* 101cd3f0 pop esi */
  ESI = (pop32());
  /* 101cd3f1 pop ebx */
  EBX = (pop32());
  /* 101cd3f2 ret  */
  ESPCHK(0x101cd360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d490 @ 0x101cd490 (62 bytes, 35 insns) */
void f_101cd490(void) {
  FTRACE(0x101cd490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cd490 push ebp */
  push32((uint32_t)(EBP));
  /* 101cd491 mov ebp, esp */
  EBP = (ESP);
  /* 101cd493 push esi */
  push32((uint32_t)(ESI));
  /* 101cd494 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cd496 push eax */
  push32((uint32_t)(EAX));
  /* 101cd497 push eax */
  push32((uint32_t)(EAX));
  /* 101cd498 push eax */
  push32((uint32_t)(EAX));
  /* 101cd499 push eax */
  push32((uint32_t)(EAX));
  /* 101cd49a push eax */
  push32((uint32_t)(EAX));
  /* 101cd49b push eax */
  push32((uint32_t)(EAX));
  /* 101cd49c push eax */
  push32((uint32_t)(EAX));
  /* 101cd49d push eax */
  push32((uint32_t)(EAX));
  /* 101cd49e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 101cd4a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101cd4a4:;
  /* 101cd4a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 101cd4a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 101cd4a8 je 0x101cd4b1 */
  if (C.zf) goto L_101cd4b1;
  /* 101cd4aa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 101cd4ab bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x101cd4ab");
  /* 101cd4af jmp 0x101cd4a4 */
  goto L_101cd4a4;
L_101cd4b1:;
  /* 101cd4b1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 101cd4b4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 101cd4b7 nop  */
  /* nop */
L_101cd4b8:;
  /* 101cd4b8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101cd4b9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101cd4bb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 101cd4bd je 0x101cd4c6 */
  if (C.zf) goto L_101cd4c6;
  /* 101cd4bf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101cd4c0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x101cd4c0");
  /* 101cd4c4 jae 0x101cd4b8 */
  if (!C.cf) goto L_101cd4b8;
L_101cd4c6:;
  /* 101cd4c6 mov eax, ecx */
  EAX = (ECX);
  /* 101cd4c8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cd4cb pop esi */
  ESI = (pop32());
  /* 101cd4cc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101cd4cd ret  */
  ESPCHK(0x101cd490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4d0 @ 0x101cd4d0 (58 bytes, 32 insns) */
void f_101cd4d0(void) {
  FTRACE(0x101cd4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cd4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 101cd4d1 mov ebp, esp */
  EBP = (ESP);
  /* 101cd4d3 push esi */
  push32((uint32_t)(ESI));
  /* 101cd4d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cd4d6 push eax */
  push32((uint32_t)(EAX));
  /* 101cd4d7 push eax */
  push32((uint32_t)(EAX));
  /* 101cd4d8 push eax */
  push32((uint32_t)(EAX));
  /* 101cd4d9 push eax */
  push32((uint32_t)(EAX));
  /* 101cd4da push eax */
  push32((uint32_t)(EAX));
  /* 101cd4db push eax */
  push32((uint32_t)(EAX));
  /* 101cd4dc push eax */
  push32((uint32_t)(EAX));
  /* 101cd4dd push eax */
  push32((uint32_t)(EAX));
  /* 101cd4de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 101cd4e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101cd4e4:;
  /* 101cd4e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 101cd4e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 101cd4e8 je 0x101cd4f1 */
  if (C.zf) goto L_101cd4f1;
  /* 101cd4ea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 101cd4eb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x101cd4eb");
  /* 101cd4ef jmp 0x101cd4e4 */
  goto L_101cd4e4;
L_101cd4f1:;
  /* 101cd4f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_101cd4f4:;
  /* 101cd4f4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101cd4f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 101cd4f8 je 0x101cd504 */
  if (C.zf) goto L_101cd504;
  /* 101cd4fa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101cd4fb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x101cd4fb");
  /* 101cd4ff jae 0x101cd4f4 */
  if (!C.cf) goto L_101cd4f4;
  /* 101cd501 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_101cd504:;
  /* 101cd504 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cd507 pop esi */
  ESI = (pop32());
  /* 101cd508 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101cd509 ret  */
  ESPCHK(0x101cd4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d50a @ 0x101cd50a (544 bytes, 177 insns) */
void f_101cd50a(void) {
  FTRACE(0x101cd50au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cd50a push ebp */
  push32((uint32_t)(EBP));
  /* 101cd50b mov ebp, esp */
  EBP = (ESP);
  /* 101cd50d sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cd510 push ebx */
  push32((uint32_t)(EBX));
  /* 101cd511 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 101cd514 push esi */
  push32((uint32_t)(ESI));
  /* 101cd515 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 101cd518 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 101cd51c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cd51e push edi */
  push32((uint32_t)(EDI));
  /* 101cd51f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 101cd522 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 101cd525 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101cd528 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 101cd52b mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 101cd52f mov edi, ecx */
  EDI = (ECX);
  /* 101cd531 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 101cd536 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 101cd538 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 101cd53a and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 101cd53c and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 101cd542 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101cd546 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 101cd549 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 101cd54c jae 0x101cd70a */
  if (!C.cf) goto L_101cd70a;
  /* 101cd552 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101cd557 jae 0x101cd70a */
  if (!C.cf) goto L_101cd70a;
  /* 101cd55d cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101cd562 ja 0x101cd70a */
  if ((!C.cf&&!C.zf)) goto L_101cd70a;
  /* 101cd568 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101cd56d ja 0x101cd573 */
  if ((!C.cf&&!C.zf)) goto L_101cd573;
  /* 101cd56f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cd571 jmp 0x101cd5ad */
  goto L_101cd5ad;
L_101cd573:;
  /* 101cd573 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 101cd576 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 101cd57b jne 0x101cd595 */
  if (!C.zf) goto L_101cd595;
  /* 101cd57d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 101cd580 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 101cd583 jne 0x101cd595 */
  if (!C.zf) goto L_101cd595;
  /* 101cd585 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cd587 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd58a jne 0x101cd597 */
  if (!C.zf) goto L_101cd597;
  /* 101cd58c cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd58e jne 0x101cd597 */
  if (!C.zf) goto L_101cd597;
  /* 101cd590 jmp 0x101cd704 */
  goto L_101cd704;
L_101cd595:;
  /* 101cd595 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101cd597:;
  /* 101cd597 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101cd59a jne 0x101cd5ba */
  if (!C.zf) goto L_101cd5ba;
  /* 101cd59c inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 101cd59f test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 101cd5a2 jne 0x101cd5ba */
  if (!C.zf) goto L_101cd5ba;
  /* 101cd5a4 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd5a7 jne 0x101cd5ba */
  if (!C.zf) goto L_101cd5ba;
  /* 101cd5a9 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd5ab jne 0x101cd5ba */
  if (!C.zf) goto L_101cd5ba;
L_101cd5ad:;
  /* 101cd5ad mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 101cd5b0 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 101cd5b3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101cd5b5 jmp 0x101cd725 */
  goto L_101cd725;
L_101cd5ba:;
  /* 101cd5ba mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 101cd5bd lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 101cd5c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101cd5c3 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_101cd5ca:;
  /* 101cd5ca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 101cd5cd add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cd5cf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd5d3 jle 0x101cd61e */
  if ((C.zf||C.sf!=C.of)) goto L_101cd61e;
  /* 101cd5d5 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cd5d7 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 101cd5da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 101cd5dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101cd5e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 101cd5e3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_101cd5e6:;
  /* 101cd5e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101cd5e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 101cd5ec movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 101cd5ef movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 101cd5f2 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101cd5f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101cd5f8 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cd5fb push ecx */
  push32((uint32_t)(ECX));
  /* 101cd5fc push eax */
  push32((uint32_t)(EAX));
  /* 101cd5fd push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 101cd5ff call 0x101cc6b5 */
  push32(0x101cd604u); f_101cc6b5();
  /* 101cd604 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cd607 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cd609 je 0x101cd611 */
  if (C.zf) goto L_101cd611;
  /* 101cd60b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101cd60e inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_101cd611:;
  /* 101cd611 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 101cd615 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 101cd619 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 101cd61c jne 0x101cd5e6 */
  if (!C.zf) goto L_101cd5e6;
L_101cd61e:;
  /* 101cd61e add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 101cd622 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 101cd625 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 101cd628 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd62c jg 0x101cd5ca */
  if ((!C.zf&&C.sf==C.of)) goto L_101cd5ca;
  /* 101cd62e add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 101cd635 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101cd63a jle 0x101cd661 */
  if ((C.zf||C.sf!=C.of)) goto L_101cd661;
L_101cd63c:;
  /* 101cd63c test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 101cd640 jne 0x101cd65a */
  if (!C.zf) goto L_101cd65a;
  /* 101cd642 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 101cd645 push eax */
  push32((uint32_t)(EAX));
  /* 101cd646 call 0x101cc734 */
  push32(0x101cd64bu); f_101cc734();
  /* 101cd64b add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 101cd652 pop ecx */
  ECX = (pop32());
  /* 101cd653 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101cd658 jg 0x101cd63c */
  if ((!C.zf&&C.sf==C.of)) goto L_101cd63c;
L_101cd65a:;
  /* 101cd65a cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101cd65f jg 0x101cd69a */
  if ((!C.zf&&C.sf==C.of)) goto L_101cd69a;
L_101cd661:;
  /* 101cd661 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 101cd668 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101cd66d jge 0x101cd69a */
  if ((C.sf==C.of)) goto L_101cd69a;
  /* 101cd66f movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 101cd673 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101cd675 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 101cd678 mov ebx, eax */
  EBX = (EAX);
L_101cd67a:;
  /* 101cd67a test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 101cd67e je 0x101cd683 */
  if (C.zf) goto L_101cd683;
  /* 101cd680 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_101cd683:;
  /* 101cd683 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 101cd686 push eax */
  push32((uint32_t)(EAX));
  /* 101cd687 call 0x101cc762 */
  push32(0x101cd68cu); f_101cc762();
  /* 101cd68c dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101cd68d pop ecx */
  ECX = (pop32());
  /* 101cd68e jne 0x101cd67a */
  if (!C.zf) goto L_101cd67a;
  /* 101cd690 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd694 je 0x101cd69a */
  if (C.zf) goto L_101cd69a;
  /* 101cd696 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_101cd69a:;
  /* 101cd69a cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101cd6a0 ja 0x101cd6b1 */
  if ((!C.cf&&!C.zf)) goto L_101cd6b1;
  /* 101cd6a2 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 101cd6a5 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101cd6aa cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd6af jne 0x101cd6e6 */
  if (!C.zf) goto L_101cd6e6;
L_101cd6b1:;
  /* 101cd6b1 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd6b5 jne 0x101cd6e3 */
  if (!C.zf) goto L_101cd6e3;
  /* 101cd6b7 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 101cd6bb cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd6bf jne 0x101cd6de */
  if (!C.zf) goto L_101cd6de;
  /* 101cd6c1 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 101cd6c5 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101cd6cb jne 0x101cd6d8 */
  if (!C.zf) goto L_101cd6d8;
  /* 101cd6cd inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 101cd6d0 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 101cd6d6 jmp 0x101cd6e6 */
  goto L_101cd6e6;
L_101cd6d8:;
  /* 101cd6d8 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 101cd6dc jmp 0x101cd6e6 */
  goto L_101cd6e6;
L_101cd6de:;
  /* 101cd6de inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 101cd6e1 jmp 0x101cd6e6 */
  goto L_101cd6e6;
L_101cd6e3:;
  /* 101cd6e3 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_101cd6e6:;
  /* 101cd6e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cd6e9 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101cd6ed jae 0x101cd70a */
  if (!C.cf) goto L_101cd70a;
  /* 101cd6ef mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 101cd6f3 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 101cd6f5 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 101cd6f8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 101cd6fb mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 101cd6fe mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 101cd701 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_101cd704:;
  /* 101cd704 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 101cd708 jmp 0x101cd725 */
  goto L_101cd725;
L_101cd70a:;
  /* 101cd70a neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 101cd70d sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cd70f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 101cd713 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 101cd719 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101cd71f and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 101cd722 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_101cd725:;
  /* 101cd725 pop edi */
  EDI = (pop32());
  /* 101cd726 pop esi */
  ESI = (pop32());
  /* 101cd727 pop ebx */
  EBX = (pop32());
  /* 101cd728 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101cd729 ret  */
  ESPCHK(0x101cd50au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d72a @ 0x101cd72a (124 bytes, 52 insns) */
void f_101cd72a(void) {
  FTRACE(0x101cd72au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cd72a push ebp */
  push32((uint32_t)(EBP));
  /* 101cd72b mov ebp, esp */
  EBP = (ESP);
  /* 101cd72d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cd730 push ebx */
  push32((uint32_t)(EBX));
  /* 101cd731 mov ebx, 0x101d3190 */
  EBX = (0x101d3190u);
  /* 101cd736 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101cd738 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cd73b cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd73e je 0x101cd7a3 */
  if (C.zf) goto L_101cd7a3;
  /* 101cd740 jge 0x101cd752 */
  if ((C.sf==C.of)) goto L_101cd752;
  /* 101cd742 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101cd745 mov ebx, 0x101d32f0 */
  EBX = (0x101d32f0u);
  /* 101cd74a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101cd74c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101cd74f sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_101cd752:;
  /* 101cd752 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd755 jne 0x101cd75d */
  if (!C.zf) goto L_101cd75d;
  /* 101cd757 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101cd75a mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_101cd75d:;
  /* 101cd75d cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd760 je 0x101cd7a3 */
  if (C.zf) goto L_101cd7a3;
  /* 101cd762 push esi */
  push32((uint32_t)(ESI));
  /* 101cd763 push edi */
  push32((uint32_t)(EDI));
L_101cd764:;
  /* 101cd764 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101cd767 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101cd76a sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 101cd76e and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 101cd771 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd773 je 0x101cd79c */
  if (C.zf) goto L_101cd79c;
  /* 101cd775 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 101cd778 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101cd77e lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 101cd781 jb 0x101cd78f */
  if (C.cf) goto L_101cd78f;
  /* 101cd783 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 101cd786 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101cd787 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101cd788 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101cd789 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 101cd78c lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_101cd78f:;
  /* 101cd78f push esi */
  push32((uint32_t)(ESI));
  /* 101cd790 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101cd793 call 0x101cd50a */
  push32(0x101cd798u); f_101cd50a();
  /* 101cd798 pop ecx */
  ECX = (pop32());
  /* 101cd799 pop ecx */
  ECX = (pop32());
  /* 101cd79a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_101cd79c:;
  /* 101cd79c cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd79f jne 0x101cd764 */
  if (!C.zf) goto L_101cd764;
  /* 101cd7a1 pop edi */
  EDI = (pop32());
  /* 101cd7a2 pop esi */
  ESI = (pop32());
L_101cd7a3:;
  /* 101cd7a3 pop ebx */
  EBX = (pop32());
  /* 101cd7a4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101cd7a5 ret  */
  ESPCHK(0x101cd72au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7a6 @ 0x101cd7a6 (93 bytes, 32 insns) */
void f_101cd7a6(void) {
  FTRACE(0x101cd7a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cd7a6 push esi */
  push32((uint32_t)(ESI));
  /* 101cd7a7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101cd7ab cmp esi, dword ptr [0x101d7ca0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101d7ca0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd7b1 jae 0x101cd7eb */
  if (!C.cf) goto L_101cd7eb;
  /* 101cd7b3 mov ecx, esi */
  ECX = (ESI);
  /* 101cd7b5 mov eax, esi */
  EAX = (ESI);
  /* 101cd7b7 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101cd7ba and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101cd7bd mov ecx, dword ptr [ecx*4 + 0x101d7ba0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101d7ba0)));
  /* 101cd7c4 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101cd7c7 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 101cd7cc je 0x101cd7eb */
  if (C.zf) goto L_101cd7eb;
  /* 101cd7ce push edi */
  push32((uint32_t)(EDI));
  /* 101cd7cf push esi */
  push32((uint32_t)(ESI));
  /* 101cd7d0 call 0x101cc0e4 */
  push32(0x101cd7d5u); f_101cc0e4();
  /* 101cd7d5 push esi */
  push32((uint32_t)(ESI));
  /* 101cd7d6 call 0x101cd803 */
  push32(0x101cd7dbu); f_101cd803();
  /* 101cd7db push esi */
  push32((uint32_t)(ESI));
  /* 101cd7dc mov edi, eax */
  EDI = (EAX);
  /* 101cd7de call 0x101cc143 */
  push32(0x101cd7e3u); f_101cc143();
  /* 101cd7e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cd7e6 mov eax, edi */
  EAX = (EDI);
  /* 101cd7e8 pop edi */
  EDI = (pop32());
  /* 101cd7e9 pop esi */
  ESI = (pop32());
  /* 101cd7ea ret  */
  ESPCHK(0x101cd7a6u, _esp0);
  ESP += 4; return;
L_101cd7eb:;
  /* 101cd7eb call 0x101cc011 */
  push32(0x101cd7f0u); f_101cc011();
  /* 101cd7f0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101cd7f6 call 0x101cc01a */
  push32(0x101cd7fbu); f_101cc01a();
  /* 101cd7fb and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101cd7fe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101cd801 pop esi */
  ESI = (pop32());
  /* 101cd802 ret  */
  ESPCHK(0x101cd7a6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d803 @ 0x101cd803 (131 bytes, 52 insns) */
void f_101cd803(void) {
  FTRACE(0x101cd803u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cd803 push esi */
  push32((uint32_t)(ESI));
  /* 101cd804 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101cd808 push edi */
  push32((uint32_t)(EDI));
  /* 101cd809 push esi */
  push32((uint32_t)(ESI));
  /* 101cd80a call 0x101cc0a2 */
  push32(0x101cd80fu); f_101cc0a2();
  /* 101cd80f cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd812 pop ecx */
  ECX = (pop32());
  /* 101cd813 je 0x101cd851 */
  if (C.zf) goto L_101cd851;
  /* 101cd815 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd818 je 0x101cd81f */
  if (C.zf) goto L_101cd81f;
  /* 101cd81a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd81d jne 0x101cd835 */
  if (!C.zf) goto L_101cd835;
L_101cd81f:;
  /* 101cd81f push 2 */
  push32((uint32_t)(0x2u));
  /* 101cd821 call 0x101cc0a2 */
  push32(0x101cd826u); f_101cc0a2();
  /* 101cd826 push 1 */
  push32((uint32_t)(0x1u));
  /* 101cd828 mov edi, eax */
  EDI = (EAX);
  /* 101cd82a call 0x101cc0a2 */
  push32(0x101cd82fu); f_101cc0a2();
  /* 101cd82f pop ecx */
  ECX = (pop32());
  /* 101cd830 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd832 pop ecx */
  ECX = (pop32());
  /* 101cd833 je 0x101cd851 */
  if (C.zf) goto L_101cd851;
L_101cd835:;
  /* 101cd835 push esi */
  push32((uint32_t)(ESI));
  /* 101cd836 call 0x101cc0a2 */
  push32(0x101cd83bu); f_101cc0a2();
  /* 101cd83b pop ecx */
  ECX = (pop32());
  /* 101cd83c push eax */
  push32((uint32_t)(EAX));
  /* 101cd83d call dword ptr [0x101ce0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce0d4))), 0x101cd843u);
  /* 101cd843 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101cd845 jne 0x101cd851 */
  if (!C.zf) goto L_101cd851;
  /* 101cd847 call dword ptr [0x101ce03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ce03c))), 0x101cd84du);
  /* 101cd84d mov edi, eax */
  EDI = (EAX);
  /* 101cd84f jmp 0x101cd853 */
  goto L_101cd853;
L_101cd851:;
  /* 101cd851 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_101cd853:;
  /* 101cd853 push esi */
  push32((uint32_t)(ESI));
  /* 101cd854 call 0x101cc023 */
  push32(0x101cd859u); f_101cc023();
  /* 101cd859 mov eax, esi */
  EAX = (ESI);
  /* 101cd85b and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 101cd85e sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 101cd861 pop ecx */
  ECX = (pop32());
  /* 101cd862 mov eax, dword ptr [eax*4 + 0x101d7ba0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x101d7ba0)));
  /* 101cd869 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 101cd86c and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 101cd871 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101cd873 je 0x101cd881 */
  if (C.zf) goto L_101cd881;
  /* 101cd875 push edi */
  push32((uint32_t)(EDI));
  /* 101cd876 call 0x101cbf9e */
  push32(0x101cd87bu); f_101cbf9e();
  /* 101cd87b pop ecx */
  ECX = (pop32());
  /* 101cd87c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101cd87f jmp 0x101cd883 */
  goto L_101cd883;
L_101cd881:;
  /* 101cd881 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101cd883:;
  /* 101cd883 pop edi */
  EDI = (pop32());
  /* 101cd884 pop esi */
  ESI = (pop32());
  /* 101cd885 ret  */
  ESPCHK(0x101cd803u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x101cd886 (43 bytes, 17 insns) */
void f_101cd886(void) {
  FTRACE(0x101cd886u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cd886 push esi */
  push32((uint32_t)(ESI));
  /* 101cd887 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101cd88b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 101cd88e test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 101cd890 je 0x101cd8af */
  if (C.zf) goto L_101cd8af;
  /* 101cd892 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 101cd894 je 0x101cd8af */
  if (C.zf) goto L_101cd8af;
  /* 101cd896 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 101cd899 call 0x101ca266 */
  push32(0x101cd89eu); f_101ca266();
  /* 101cd89e and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 101cd8a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cd8a6 pop ecx */
  ECX = (pop32());
  /* 101cd8a7 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101cd8a9 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 101cd8ac mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_101cd8af:;
  /* 101cd8af pop esi */
  ESI = (pop32());
  /* 101cd8b0 ret  */
  ESPCHK(0x101cd886u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8c0 @ 0x101cd8c0 (208 bytes, 85 insns) */
void f_101cd8c0(void) {
  FTRACE(0x101cd8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cd8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 101cd8c1 mov ebp, esp */
  EBP = (ESP);
  /* 101cd8c3 push edi */
  push32((uint32_t)(EDI));
  /* 101cd8c4 push esi */
  push32((uint32_t)(ESI));
  /* 101cd8c5 push ebx */
  push32((uint32_t)(EBX));
  /* 101cd8c6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101cd8c9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 101cd8cc lea eax, [0x101d67a0] */
  EAX = ((uint32_t)(0x101d67a0));
  /* 101cd8d2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd8d6 jne 0x101cd913 */
  if (!C.zf) goto L_101cd913;
  /* 101cd8d8 mov al, 0xff */
  AL = (0xffu);
  /* 101cd8da mov edi, edi */
  EDI = (EDI);
L_101cd8dc:;
  /* 101cd8dc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 101cd8de je 0x101cd90e */
  if (C.zf) goto L_101cd90e;
  /* 101cd8e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101cd8e2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101cd8e3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 101cd8e5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101cd8e6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cd8e8 je 0x101cd8dc */
  if (C.zf) goto L_101cd8dc;
  /* 101cd8ea sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101cd8ec cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cd8ee sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101cd8f0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 101cd8f3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 101cd8f5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 101cd8f7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 101cd8f9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101cd8fb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cd8fd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101cd8ff and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 101cd902 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 101cd904 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 101cd906 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cd908 je 0x101cd8dc */
  if (C.zf) goto L_101cd8dc;
  /* 101cd90a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101cd90c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_101cd90e:;
  /* 101cd90e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 101cd911 jmp 0x101cd98b */
  goto L_101cd98b;
L_101cd913:;
  /* 101cd913 lock inc dword ptr [0x101d6924] */
  x86_unimpl("lock inc @ 0x101cd913");
  /* 101cd91a cmp dword ptr [0x101d6920], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101d6920))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd921 jg 0x101cd927 */
  if ((!C.zf&&C.sf==C.of)) goto L_101cd927;
  /* 101cd923 push 0 */
  push32((uint32_t)(0x0u));
  /* 101cd925 jmp 0x101cd93c */
  goto L_101cd93c;
L_101cd927:;
  /* 101cd927 lock dec dword ptr [0x101d6924] */
  x86_unimpl("lock dec @ 0x101cd927");
  /* 101cd92e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101cd930 call 0x101ca0b3 */
  push32(0x101cd935u); f_101ca0b3();
  /* 101cd935 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_101cd93c:;
  /* 101cd93c mov eax, 0xff */
  EAX = (0xffu);
  /* 101cd941 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101cd943 nop  */
  /* nop */
L_101cd944:;
  /* 101cd944 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 101cd946 je 0x101cd96f */
  if (C.zf) goto L_101cd96f;
  /* 101cd948 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101cd94a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101cd94b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101cd94d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101cd94e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cd950 je 0x101cd944 */
  if (C.zf) goto L_101cd944;
  /* 101cd952 push eax */
  push32((uint32_t)(EAX));
  /* 101cd953 push ebx */
  push32((uint32_t)(EBX));
  /* 101cd954 call 0x101c954f */
  push32(0x101cd959u); f_101c954f();
  /* 101cd959 mov ebx, eax */
  EBX = (EAX);
  /* 101cd95b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cd95e call 0x101c954f */
  push32(0x101cd963u); f_101c954f();
  /* 101cd963 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cd966 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cd968 je 0x101cd944 */
  if (C.zf) goto L_101cd944;
  /* 101cd96a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101cd96c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_101cd96f:;
  /* 101cd96f mov ebx, eax */
  EBX = (EAX);
  /* 101cd971 pop eax */
  EAX = (pop32());
  /* 101cd972 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cd974 jne 0x101cd97f */
  if (!C.zf) goto L_101cd97f;
  /* 101cd976 lock dec dword ptr [0x101d6924] */
  x86_unimpl("lock dec @ 0x101cd976");
  /* 101cd97d jmp 0x101cd989 */
  goto L_101cd989;
L_101cd97f:;
  /* 101cd97f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101cd981 call 0x101ca114 */
  push32(0x101cd986u); f_101ca114();
  /* 101cd986 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101cd989:;
  /* 101cd989 mov eax, ebx */
  EAX = (EBX);
L_101cd98b:;
  /* 101cd98b pop ebx */
  EBX = (pop32());
  /* 101cd98c pop esi */
  ESI = (pop32());
  /* 101cd98d pop edi */
  EDI = (pop32());
  /* 101cd98e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101cd98f ret  */
  ESPCHK(0x101cd8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d990 @ 0x101cd990 (257 bytes, 103 insns) */
void f_101cd990(void) {
  FTRACE(0x101cd990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cd990 push ebp */
  push32((uint32_t)(EBP));
  /* 101cd991 mov ebp, esp */
  EBP = (ESP);
  /* 101cd993 push edi */
  push32((uint32_t)(EDI));
  /* 101cd994 push esi */
  push32((uint32_t)(ESI));
  /* 101cd995 push ebx */
  push32((uint32_t)(EBX));
  /* 101cd996 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 101cd999 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101cd99b je 0x101cda8a */
  if (C.zf) goto L_101cda8a;
  /* 101cd9a1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 101cd9a4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101cd9a7 lea eax, [0x101d67a0] */
  EAX = ((uint32_t)(0x101d67a0));
  /* 101cd9ad cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cd9b1 jne 0x101cda01 */
  if (!C.zf) goto L_101cda01;
  /* 101cd9b3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 101cd9b5 mov bl, 0x5a */
  BL = (0x5au);
  /* 101cd9b7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 101cd9b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101cd9bc:;
  /* 101cd9bc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 101cd9be or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 101cd9c0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 101cd9c2 je 0x101cd9e5 */
  if (C.zf) goto L_101cd9e5;
  /* 101cd9c4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 101cd9c6 je 0x101cd9e5 */
  if (C.zf) goto L_101cd9e5;
  /* 101cd9c8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101cd9c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101cd9ca cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cd9cc jb 0x101cd9d4 */
  if (C.cf) goto L_101cd9d4;
  /* 101cd9ce cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cd9d0 ja 0x101cd9d4 */
  if ((!C.cf&&!C.zf)) goto L_101cd9d4;
  /* 101cd9d2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_101cd9d4:;
  /* 101cd9d4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cd9d6 jb 0x101cd9de */
  if (C.cf) goto L_101cd9de;
  /* 101cd9d8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cd9da ja 0x101cd9de */
  if ((!C.cf&&!C.zf)) goto L_101cd9de;
  /* 101cd9dc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_101cd9de:;
  /* 101cd9de cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cd9e0 jne 0x101cd9ef */
  if (!C.zf) goto L_101cd9ef;
  /* 101cd9e2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101cd9e3 jne 0x101cd9bc */
  if (!C.zf) goto L_101cd9bc;
L_101cd9e5:;
  /* 101cd9e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101cd9e7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101cd9e9 je 0x101cda8a */
  if (C.zf) goto L_101cda8a;
L_101cd9ef:;
  /* 101cd9ef mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 101cd9f4 jb 0x101cda8a */
  if (C.cf) goto L_101cda8a;
  /* 101cd9fa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 101cd9fc jmp 0x101cda8a */
  goto L_101cda8a;
L_101cda01:;
  /* 101cda01 lock inc dword ptr [0x101d6924] */
  x86_unimpl("lock inc @ 0x101cda01");
  /* 101cda08 cmp dword ptr [0x101d6920], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101d6920))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cda0f jg 0x101cda15 */
  if ((!C.zf&&C.sf==C.of)) goto L_101cda15;
  /* 101cda11 push 0 */
  push32((uint32_t)(0x0u));
  /* 101cda13 jmp 0x101cda2e */
  goto L_101cda2e;
L_101cda15:;
  /* 101cda15 lock dec dword ptr [0x101d6924] */
  x86_unimpl("lock dec @ 0x101cda15");
  /* 101cda1c mov ebx, ecx */
  EBX = (ECX);
  /* 101cda1e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101cda20 call 0x101ca0b3 */
  push32(0x101cda25u); f_101ca0b3();
  /* 101cda25 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 101cda2c mov ecx, ebx */
  ECX = (EBX);
L_101cda2e:;
  /* 101cda2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cda30 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101cda32 mov edi, edi */
  EDI = (EDI);
L_101cda34:;
  /* 101cda34 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101cda36 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cda38 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101cda3a je 0x101cda5f */
  if (C.zf) goto L_101cda5f;
  /* 101cda3c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101cda3e je 0x101cda5f */
  if (C.zf) goto L_101cda5f;
  /* 101cda40 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101cda41 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101cda42 push ecx */
  push32((uint32_t)(ECX));
  /* 101cda43 push eax */
  push32((uint32_t)(EAX));
  /* 101cda44 push ebx */
  push32((uint32_t)(EBX));
  /* 101cda45 call 0x101c954f */
  push32(0x101cda4au); f_101c954f();
  /* 101cda4a mov ebx, eax */
  EBX = (EAX);
  /* 101cda4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cda4f call 0x101c954f */
  push32(0x101cda54u); f_101c954f();
  /* 101cda54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cda57 pop ecx */
  ECX = (pop32());
  /* 101cda58 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cda5a jne 0x101cda65 */
  if (!C.zf) goto L_101cda65;
  /* 101cda5c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101cda5d jne 0x101cda34 */
  if (!C.zf) goto L_101cda34;
L_101cda5f:;
  /* 101cda5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101cda61 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101cda63 je 0x101cda6e */
  if (C.zf) goto L_101cda6e;
L_101cda65:;
  /* 101cda65 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 101cda6a jb 0x101cda6e */
  if (C.cf) goto L_101cda6e;
  /* 101cda6c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_101cda6e:;
  /* 101cda6e pop eax */
  EAX = (pop32());
  /* 101cda6f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101cda71 jne 0x101cda7c */
  if (!C.zf) goto L_101cda7c;
  /* 101cda73 lock dec dword ptr [0x101d6924] */
  x86_unimpl("lock dec @ 0x101cda73");
  /* 101cda7a jmp 0x101cda8a */
  goto L_101cda8a;
L_101cda7c:;
  /* 101cda7c mov ebx, ecx */
  EBX = (ECX);
  /* 101cda7e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101cda80 call 0x101ca114 */
  push32(0x101cda85u); f_101ca114();
  /* 101cda85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101cda88 mov ecx, ebx */
  ECX = (EBX);
L_101cda8a:;
  /* 101cda8a mov eax, ecx */
  EAX = (ECX);
  /* 101cda8c pop ebx */
  EBX = (pop32());
  /* 101cda8d pop esi */
  ESI = (pop32());
  /* 101cda8e pop edi */
  EDI = (pop32());
  /* 101cda8f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101cda90 ret  */
  ESPCHK(0x101cd990u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x101cdad4 (6 bytes, 1 insns) */
void f_101cdad4(void) {
  FTRACE(0x101cdad4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101cdad4 jmp dword ptr [0x101ce0cc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101ce0cc)))); return;
}

