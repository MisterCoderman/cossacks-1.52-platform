#include "recomp.h"

/* __aullrem @ 0x10019270 (117 bytes, 44 insns) */
void f_10019270(void) {
  FTRACE(0x10019270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10019270 push ebx */
  push32((uint32_t)(EBX));
  /* 10019271 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10019275 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10019277 jne 0x10019291 */
  if (!C.zf) goto L_10019291;
  /* 10019279 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1001927d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10019281 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10019283 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10019285 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10019289 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1001928b mov eax, edx */
  EAX = (EDX);
  /* 1001928d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1001928f jmp 0x100192e1 */
  goto L_100192e1;
L_10019291:;
  /* 10019291 mov ecx, eax */
  ECX = (EAX);
  /* 10019293 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10019297 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1001929b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1001929f:;
  /* 1001929f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 100192a1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 100192a3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 100192a5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 100192a7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100192a9 jne 0x1001929f */
  if (!C.zf) goto L_1001929f;
  /* 100192ab div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100192ad mov ecx, eax */
  ECX = (EAX);
  /* 100192af mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 100192b3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 100192b4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 100192b8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100192ba jb 0x100192ca */
  if (C.cf) goto L_100192ca;
  /* 100192bc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100192c0 ja 0x100192ca */
  if ((!C.cf&&!C.zf)) goto L_100192ca;
  /* 100192c2 jb 0x100192d2 */
  if (C.cf) goto L_100192d2;
  /* 100192c4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100192c8 jbe 0x100192d2 */
  if ((C.cf||C.zf)) goto L_100192d2;
L_100192ca:;
  /* 100192ca sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100192ce sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_100192d2:;
  /* 100192d2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100192d6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100192da neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 100192dc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100192de sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_100192e1:;
  /* 100192e1 pop ebx */
  EBX = (pop32());
  /* 100192e2 ret 0x10 */
  ESPCHK(0x10019270u, _esp0);
  ESP += 20; return;
}

/* FUN_100092e5 @ 0x100192e5 (53 bytes, 25 insns) */
void f_100192e5(void) {
  FTRACE(0x100192e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100192e5 push ebp */
  push32((uint32_t)(EBP));
  /* 100192e6 mov ebp, esp */
  EBP = (ESP);
  /* 100192e8 push ecx */
  push32((uint32_t)(ECX));
  /* 100192e9 push esi */
  push32((uint32_t)(ESI));
  /* 100192ea wait  */
  /* wait (no observable integer/reg state) */
  /* 100192eb fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 100192ee push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 100192f1 call 0x10019330 */
  push32(0x100192f6u); f_10019330();
  /* 100192f6 mov esi, eax */
  ESI = (EAX);
  /* 100192f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100192fb not eax */
  EAX = (~(EAX));
  /* 100192fd and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 100192ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10019302 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10019305 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 10019307 push esi */
  push32((uint32_t)(ESI));
  /* 10019308 call 0x100193c2 */
  push32(0x1001930du); f_100193c2();
  /* 1001930d pop ecx */
  ECX = (pop32());
  /* 1001930e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10019311 pop ecx */
  ECX = (pop32());
  /* 10019312 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 10019315 mov eax, esi */
  EAX = (ESI);
  /* 10019317 pop esi */
  ESI = (pop32());
  /* 10019318 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10019319 ret  */
  ESPCHK(0x100192e5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000931a @ 0x1001931a (22 bytes, 8 insns) */
void f_1001931a(void) {
  FTRACE(0x1001931au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001931a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1001931e and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10019323 push eax */
  push32((uint32_t)(EAX));
  /* 10019324 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10019328 call 0x100192e5 */
  push32(0x1001932du); f_100192e5();
  /* 1001932d pop ecx */
  ECX = (pop32());
  /* 1001932e pop ecx */
  ECX = (pop32());
  /* 1001932f ret  */
  ESPCHK(0x1001931au, _esp0);
  ESP += 4; return;
}

/* FUN_10009330 @ 0x10019330 (146 bytes, 58 insns) */
void f_10019330(void) {
  FTRACE(0x10019330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10019330 push ebx */
  push32((uint32_t)(EBX));
  /* 10019331 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 10019335 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10019337 push ebp */
  push32((uint32_t)(EBP));
  /* 10019338 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 1001933b push edi */
  push32((uint32_t)(EDI));
  /* 1001933c je 0x10019341 */
  if (C.zf) goto L_10019341;
  /* 1001933e push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10019340 pop eax */
  EAX = (pop32());
L_10019341:;
  /* 10019341 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 10019344 je 0x10019348 */
  if (C.zf) goto L_10019348;
  /* 10019346 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_10019348:;
  /* 10019348 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 1001934b je 0x1001934f */
  if (C.zf) goto L_1001934f;
  /* 1001934d or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_1001934f:;
  /* 1001934f test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 10019352 je 0x10019356 */
  if (C.zf) goto L_10019356;
  /* 10019354 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_10019356:;
  /* 10019356 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 10019359 je 0x1001935d */
  if (C.zf) goto L_1001935d;
  /* 1001935b or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_1001935d:;
  /* 1001935d test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10019360 je 0x10019367 */
  if (C.zf) goto L_10019367;
  /* 10019362 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_10019367:;
  /* 10019367 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 1001936a push esi */
  push32((uint32_t)(ESI));
  /* 1001936b mov edx, ecx */
  EDX = (ECX);
  /* 1001936d mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 10019372 mov edi, 0x300 */
  EDI = (0x300u);
  /* 10019377 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10019379 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 1001937e je 0x1001939f */
  if (C.zf) goto L_1001939f;
  /* 10019380 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019386 je 0x1001939c */
  if (C.zf) goto L_1001939c;
  /* 10019388 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001938e je 0x10019398 */
  if (C.zf) goto L_10019398;
  /* 10019390 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019392 jne 0x1001939f */
  if (!C.zf) goto L_1001939f;
  /* 10019394 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 10019396 jmp 0x1001939f */
  goto L_1001939f;
L_10019398:;
  /* 10019398 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 1001939a jmp 0x1001939f */
  goto L_1001939f;
L_1001939c:;
  /* 1001939c or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_1001939f:;
  /* 1001939f and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100193a1 pop esi */
  ESI = (pop32());
  /* 100193a2 je 0x100193af */
  if (C.zf) goto L_100193af;
  /* 100193a4 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100193a6 jne 0x100193b4 */
  if (!C.zf) goto L_100193b4;
  /* 100193a8 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 100193ad jmp 0x100193b4 */
  goto L_100193b4;
L_100193af:;
  /* 100193af or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_100193b4:;
  /* 100193b4 pop edi */
  EDI = (pop32());
  /* 100193b5 pop ebp */
  EBP = (pop32());
  /* 100193b6 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 100193b9 pop ebx */
  EBX = (pop32());
  /* 100193ba je 0x100193c1 */
  if (C.zf) goto L_100193c1;
  /* 100193bc or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_100193c1:;
  /* 100193c1 ret  */
  ESPCHK(0x10019330u, _esp0);
  ESP += 4; return;
}

/* FUN_100093c2 @ 0x100193c2 (137 bytes, 53 insns) */
void f_100193c2(void) {
  FTRACE(0x100193c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100193c2 push ebx */
  push32((uint32_t)(EBX));
  /* 100193c3 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 100193c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100193c9 push esi */
  push32((uint32_t)(ESI));
  /* 100193ca test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 100193cd je 0x100193d2 */
  if (C.zf) goto L_100193d2;
  /* 100193cf push 1 */
  push32((uint32_t)(0x1u));
  /* 100193d1 pop eax */
  EAX = (pop32());
L_100193d2:;
  /* 100193d2 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 100193d5 je 0x100193d9 */
  if (C.zf) goto L_100193d9;
  /* 100193d7 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_100193d9:;
  /* 100193d9 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 100193dc je 0x100193e0 */
  if (C.zf) goto L_100193e0;
  /* 100193de or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_100193e0:;
  /* 100193e0 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 100193e3 je 0x100193e7 */
  if (C.zf) goto L_100193e7;
  /* 100193e5 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_100193e7:;
  /* 100193e7 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 100193ea je 0x100193ee */
  if (C.zf) goto L_100193ee;
  /* 100193ec or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_100193ee:;
  /* 100193ee test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 100193f4 je 0x100193f8 */
  if (C.zf) goto L_100193f8;
  /* 100193f6 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_100193f8:;
  /* 100193f8 mov ecx, ebx */
  ECX = (EBX);
  /* 100193fa mov edx, 0x300 */
  EDX = (0x300u);
  /* 100193ff and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10019401 mov esi, 0x200 */
  ESI = (0x200u);
  /* 10019406 je 0x10019425 */
  if (C.zf) goto L_10019425;
  /* 10019408 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001940e je 0x10019422 */
  if (C.zf) goto L_10019422;
  /* 10019410 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019412 je 0x1001941d */
  if (C.zf) goto L_1001941d;
  /* 10019414 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019416 jne 0x10019425 */
  if (!C.zf) goto L_10019425;
  /* 10019418 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 1001941b jmp 0x10019425 */
  goto L_10019425;
L_1001941d:;
  /* 1001941d or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 10019420 jmp 0x10019425 */
  goto L_10019425;
L_10019422:;
  /* 10019422 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_10019425:;
  /* 10019425 mov ecx, ebx */
  ECX = (EBX);
  /* 10019427 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 1001942d je 0x1001943b */
  if (C.zf) goto L_1001943b;
  /* 1001942f cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019435 jne 0x1001943d */
  if (!C.zf) goto L_1001943d;
  /* 10019437 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10019439 jmp 0x1001943d */
  goto L_1001943d;
L_1001943b:;
  /* 1001943b or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_1001943d:;
  /* 1001943d pop esi */
  ESI = (pop32());
  /* 1001943e test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 10019444 pop ebx */
  EBX = (pop32());
  /* 10019445 je 0x1001944a */
  if (C.zf) goto L_1001944a;
  /* 10019447 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_1001944a:;
  /* 1001944a ret  */
  ESPCHK(0x100193c2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000944b @ 0x1001944b (117 bytes, 46 insns) */
void f_1001944b(void) {
  FTRACE(0x1001944bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001944b push ebp */
  push32((uint32_t)(EBP));
  /* 1001944c mov ebp, esp */
  EBP = (ESP);
  /* 1001944e push ecx */
  push32((uint32_t)(ECX));
  /* 1001944f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10019452 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10019455 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001945b ja 0x10019469 */
  if ((!C.cf&&!C.zf)) goto L_10019469;
  /* 1001945d mov ecx, dword ptr [0x100209f0] */
  ECX = (r32((uint32_t)(0x100209f0)));
  /* 10019463 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 10019467 jmp 0x100194bb */
  goto L_100194bb;
L_10019469:;
  /* 10019469 mov ecx, eax */
  ECX = (EAX);
  /* 1001946b push esi */
  push32((uint32_t)(ESI));
  /* 1001946c mov esi, dword ptr [0x100209f0] */
  ESI = (r32((uint32_t)(0x100209f0)));
  /* 10019472 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10019475 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 10019478 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1001947d pop esi */
  ESI = (pop32());
  /* 1001947e je 0x1001948e */
  if (C.zf) goto L_1001948e;
  /* 10019480 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 10019484 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10019487 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 1001948a push 2 */
  push32((uint32_t)(0x2u));
  /* 1001948c jmp 0x10019497 */
  goto L_10019497;
L_1001948e:;
  /* 1001948e and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10019492 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10019495 push 1 */
  push32((uint32_t)(0x1u));
L_10019497:;
  /* 10019497 pop eax */
  EAX = (pop32());
  /* 10019498 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 1001949b push 1 */
  push32((uint32_t)(0x1u));
  /* 1001949d push 0 */
  push32((uint32_t)(0x0u));
  /* 1001949f push 0 */
  push32((uint32_t)(0x0u));
  /* 100194a1 push ecx */
  push32((uint32_t)(ECX));
  /* 100194a2 push eax */
  push32((uint32_t)(EAX));
  /* 100194a3 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 100194a6 push eax */
  push32((uint32_t)(EAX));
  /* 100194a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100194a9 call 0x1001c2fd */
  push32(0x100194aeu); f_1001c2fd();
  /* 100194ae add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100194b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100194b3 jne 0x100194b7 */
  if (!C.zf) goto L_100194b7;
  /* 100194b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100194b6 ret  */
  ESPCHK(0x1001944bu, _esp0);
  ESP += 4; return;
L_100194b7:;
  /* 100194b7 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_100194bb:;
  /* 100194bb and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 100194be leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100194bf ret  */
  ESPCHK(0x1001944bu, _esp0);
  ESP += 4; return;
}

/* FUN_100094c0 @ 0x100194c0 (111 bytes, 44 insns) */
void f_100194c0(void) {
  FTRACE(0x100194c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100194c0 push ebx */
  push32((uint32_t)(EBX));
  /* 100194c1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100194c3 cmp dword ptr [0x10026858], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10026858))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100194c9 jne 0x100194de */
  if (!C.zf) goto L_100194de;
  /* 100194cb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100194cf cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100194d2 jl 0x1001952d */
  if ((C.sf!=C.of)) goto L_1001952d;
  /* 100194d4 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100194d7 jg 0x1001952d */
  if ((!C.zf&&C.sf==C.of)) goto L_1001952d;
  /* 100194d9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100194dc pop ebx */
  EBX = (pop32());
  /* 100194dd ret  */
  ESPCHK(0x100194c0u, _esp0);
  ESP += 4; return;
L_100194de:;
  /* 100194de push esi */
  push32((uint32_t)(ESI));
  /* 100194df mov esi, 0x100269d4 */
  ESI = (0x100269d4u);
  /* 100194e4 push edi */
  push32((uint32_t)(EDI));
  /* 100194e5 push esi */
  push32((uint32_t)(ESI));
  /* 100194e6 call dword ptr [0x1001e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e090))), 0x100194ecu);
  /* 100194ec cmp dword ptr [0x100269d0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100269d0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100194f2 mov edi, dword ptr [0x1001e08c] */
  EDI = (r32((uint32_t)(0x1001e08c)));
  /* 100194f8 je 0x10019508 */
  if (C.zf) goto L_10019508;
  /* 100194fa push esi */
  push32((uint32_t)(ESI));
  /* 100194fb call edi */
  call_ind((uint32_t)(EDI), 0x100194fdu);
  /* 100194fd push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100194ff call 0x1001a093 */
  push32(0x10019504u); f_1001a093();
  /* 10019504 pop ecx */
  ECX = (pop32());
  /* 10019505 push 1 */
  push32((uint32_t)(0x1u));
  /* 10019507 pop ebx */
  EBX = (pop32());
L_10019508:;
  /* 10019508 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1001950c call 0x1001952f */
  push32(0x10019511u); f_1001952f();
  /* 10019511 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10019513 pop ecx */
  ECX = (pop32());
  /* 10019514 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10019518 je 0x10019524 */
  if (C.zf) goto L_10019524;
  /* 1001951a push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1001951c call 0x1001a0f4 */
  push32(0x10019521u); f_1001a0f4();
  /* 10019521 pop ecx */
  ECX = (pop32());
  /* 10019522 jmp 0x10019527 */
  goto L_10019527;
L_10019524:;
  /* 10019524 push esi */
  push32((uint32_t)(ESI));
  /* 10019525 call edi */
  call_ind((uint32_t)(EDI), 0x10019527u);
L_10019527:;
  /* 10019527 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1001952b pop edi */
  EDI = (pop32());
  /* 1001952c pop esi */
  ESI = (pop32());
L_1001952d:;
  /* 1001952d pop ebx */
  EBX = (pop32());
  /* 1001952e ret  */
  ESPCHK(0x100194c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000952f @ 0x1001952f (203 bytes, 78 insns) */
void f_1001952f(void) {
  FTRACE(0x1001952fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001952f push ebp */
  push32((uint32_t)(EBP));
  /* 10019530 mov ebp, esp */
  EBP = (ESP);
  /* 10019532 push ecx */
  push32((uint32_t)(ECX));
  /* 10019533 cmp dword ptr [0x10026858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10026858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001953a push ebx */
  push32((uint32_t)(EBX));
  /* 1001953b push esi */
  push32((uint32_t)(ESI));
  /* 1001953c push edi */
  push32((uint32_t)(EDI));
  /* 1001953d jne 0x1001955c */
  if (!C.zf) goto L_1001955c;
  /* 1001953f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10019542 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019545 jl 0x100195f5 */
  if ((C.sf!=C.of)) goto L_100195f5;
  /* 1001954b cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001954e jg 0x100195f5 */
  if ((!C.zf&&C.sf==C.of)) goto L_100195f5;
  /* 10019554 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10019557 jmp 0x100195f5 */
  goto L_100195f5;
L_1001955c:;
  /* 1001955c mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001955f mov edi, 0x100 */
  EDI = (0x100u);
  /* 10019564 push 1 */
  push32((uint32_t)(0x1u));
  /* 10019566 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019568 pop esi */
  ESI = (pop32());
  /* 10019569 jge 0x10019590 */
  if ((C.sf==C.of)) goto L_10019590;
  /* 1001956b cmp dword ptr [0x10020c00], esi */
  { uint32_t _a=(r32((uint32_t)(0x10020c00))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019571 jle 0x1001957e */
  if ((C.zf||C.sf!=C.of)) goto L_1001957e;
  /* 10019573 push esi */
  push32((uint32_t)(ESI));
  /* 10019574 push ebx */
  push32((uint32_t)(EBX));
  /* 10019575 call 0x1001944b */
  push32(0x1001957au); f_1001944b();
  /* 1001957a pop ecx */
  ECX = (pop32());
  /* 1001957b pop ecx */
  ECX = (pop32());
  /* 1001957c jmp 0x10019588 */
  goto L_10019588;
L_1001957e:;
  /* 1001957e mov eax, dword ptr [0x100209f0] */
  EAX = (r32((uint32_t)(0x100209f0)));
  /* 10019583 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 10019586 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_10019588:;
  /* 10019588 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001958a jne 0x10019590 */
  if (!C.zf) goto L_10019590;
L_1001958c:;
  /* 1001958c mov eax, ebx */
  EAX = (EBX);
  /* 1001958e jmp 0x100195f5 */
  goto L_100195f5;
L_10019590:;
  /* 10019590 mov edx, dword ptr [0x100209f0] */
  EDX = (r32((uint32_t)(0x100209f0)));
  /* 10019596 mov eax, ebx */
  EAX = (EBX);
  /* 10019598 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1001959b movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 1001959e test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 100195a3 je 0x100195b4 */
  if (C.zf) goto L_100195b4;
  /* 100195a5 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 100195a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 100195ab mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 100195ae mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 100195b1 pop eax */
  EAX = (pop32());
  /* 100195b2 jmp 0x100195bd */
  goto L_100195bd;
L_100195b4:;
  /* 100195b4 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 100195b8 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 100195bb mov eax, esi */
  EAX = (ESI);
L_100195bd:;
  /* 100195bd push esi */
  push32((uint32_t)(ESI));
  /* 100195be push 0 */
  push32((uint32_t)(0x0u));
  /* 100195c0 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 100195c3 push 3 */
  push32((uint32_t)(0x3u));
  /* 100195c5 push ecx */
  push32((uint32_t)(ECX));
  /* 100195c6 push eax */
  push32((uint32_t)(EAX));
  /* 100195c7 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100195ca push eax */
  push32((uint32_t)(EAX));
  /* 100195cb push edi */
  push32((uint32_t)(EDI));
  /* 100195cc push dword ptr [0x10026858] */
  push32((uint32_t)(r32((uint32_t)(0x10026858))));
  /* 100195d2 call 0x1001c446 */
  push32(0x100195d7u); f_1001c446();
  /* 100195d7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100195da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100195dc je 0x1001958c */
  if (C.zf) goto L_1001958c;
  /* 100195de cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100195e0 jne 0x100195e8 */
  if (!C.zf) goto L_100195e8;
  /* 100195e2 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 100195e6 jmp 0x100195f5 */
  goto L_100195f5;
L_100195e8:;
  /* 100195e8 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 100195ec movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 100195f0 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 100195f3 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_100195f5:;
  /* 100195f5 pop edi */
  EDI = (pop32());
  /* 100195f6 pop esi */
  ESI = (pop32());
  /* 100195f7 pop ebx */
  EBX = (pop32());
  /* 100195f8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100195f9 ret  */
  ESPCHK(0x1001952fu, _esp0);
  ESP += 4; return;
}

/* FUN_100095fa @ 0x100195fa (73 bytes, 36 insns) */
void f_100195fa(void) {
  FTRACE(0x100195fau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100195fa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100195fe push esi */
  push32((uint32_t)(ESI));
  /* 100195ff push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10019601 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10019602 pop ecx */
  ECX = (pop32());
  /* 10019603 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10019605 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10019607 mov esi, eax */
  ESI = (EAX);
  /* 10019609 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1001960d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1001960e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10019610 pop ecx */
  ECX = (pop32());
  /* 10019611 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10019615 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10019617 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1001961a shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1001961c not edx */
  EDX = (~(EDX));
  /* 1001961e test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 10019621 jne 0x1001963f */
  if (!C.zf) goto L_1001963f;
  /* 10019623 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10019624 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019627 jge 0x1001963a */
  if ((C.sf==C.of)) goto L_1001963a;
  /* 10019629 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_1001962c:;
  /* 1001962c cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001962f jne 0x1001963f */
  if (!C.zf) goto L_1001963f;
  /* 10019631 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10019632 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10019635 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019638 jl 0x1001962c */
  if ((C.sf!=C.of)) goto L_1001962c;
L_1001963a:;
  /* 1001963a push 1 */
  push32((uint32_t)(0x1u));
  /* 1001963c pop eax */
  EAX = (pop32());
  /* 1001963d pop esi */
  ESI = (pop32());
  /* 1001963e ret  */
  ESPCHK(0x100195fau, _esp0);
  ESP += 4; return;
L_1001963f:;
  /* 1001963f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10019641 pop esi */
  ESI = (pop32());
  /* 10019642 ret  */
  ESPCHK(0x100195fau, _esp0);
  ESP += 4; return;
}

/* FUN_10009643 @ 0x10019643 (86 bytes, 43 insns) */
void f_10019643(void) {
  FTRACE(0x10019643u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10019643 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10019647 push ebx */
  push32((uint32_t)(EBX));
  /* 10019648 push esi */
  push32((uint32_t)(ESI));
  /* 10019649 push edi */
  push32((uint32_t)(EDI));
  /* 1001964a push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1001964c mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10019650 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10019651 pop ecx */
  ECX = (pop32());
  /* 10019652 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10019654 mov esi, eax */
  ESI = (EAX);
  /* 10019656 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1001965a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1001965b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1001965d lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 10019660 push edi */
  push32((uint32_t)(EDI));
  /* 10019661 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10019663 pop ecx */
  ECX = (pop32());
  /* 10019664 push 1 */
  push32((uint32_t)(0x1u));
  /* 10019666 pop eax */
  EAX = (pop32());
  /* 10019667 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10019669 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1001966b push eax */
  push32((uint32_t)(EAX));
  /* 1001966c push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 1001966e call 0x1001c695 */
  push32(0x10019673u); f_1001c695();
  /* 10019673 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10019676 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10019677 js 0x10019695 */
  if (C.sf) goto L_10019695;
  /* 10019679 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_1001967c:;
  /* 1001967c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001967e je 0x10019695 */
  if (C.zf) goto L_10019695;
  /* 10019680 push edi */
  push32((uint32_t)(EDI));
  /* 10019681 push 1 */
  push32((uint32_t)(0x1u));
  /* 10019683 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 10019685 call 0x1001c695 */
  push32(0x1001968au); f_1001c695();
  /* 1001968a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001968d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1001968e sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10019691 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10019693 jge 0x1001967c */
  if ((C.sf==C.of)) goto L_1001967c;
L_10019695:;
  /* 10019695 pop edi */
  EDI = (pop32());
  /* 10019696 pop esi */
  ESI = (pop32());
  /* 10019697 pop ebx */
  EBX = (pop32());
  /* 10019698 ret  */
  ESPCHK(0x10019643u, _esp0);
  ESP += 4; return;
}

/* FUN_10009699 @ 0x10019699 (140 bytes, 71 insns) */
void f_10019699(void) {
  FTRACE(0x10019699u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10019699 push ebp */
  push32((uint32_t)(EBP));
  /* 1001969a mov ebp, esp */
  EBP = (ESP);
  /* 1001969c push ecx */
  push32((uint32_t)(ECX));
  /* 1001969d push ecx */
  push32((uint32_t)(ECX));
  /* 1001969e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100196a1 push ebx */
  push32((uint32_t)(EBX));
  /* 100196a2 push esi */
  push32((uint32_t)(ESI));
  /* 100196a3 push edi */
  push32((uint32_t)(EDI));
  /* 100196a4 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 100196a7 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100196a9 pop ecx */
  ECX = (pop32());
  /* 100196aa and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100196ae lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 100196b1 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100196b3 mov eax, ebx */
  EAX = (EBX);
  /* 100196b5 pop esi */
  ESI = (pop32());
  /* 100196b6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100196b7 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100196b9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100196bb mov ecx, eax */
  ECX = (EAX);
  /* 100196bd mov eax, ebx */
  EAX = (EBX);
  /* 100196bf cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100196c0 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100196c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100196c5 pop esi */
  ESI = (pop32());
  /* 100196c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100196c8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100196cb lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 100196ce mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100196d1 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100196d3 pop edx */
  EDX = (pop32());
  /* 100196d4 mov ecx, esi */
  ECX = (ESI);
  /* 100196d6 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 100196d8 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 100196da je 0x100196fd */
  if (C.zf) goto L_100196fd;
  /* 100196dc inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100196dd push ebx */
  push32((uint32_t)(EBX));
  /* 100196de push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100196e1 call 0x100195fa */
  push32(0x100196e6u); f_100195fa();
  /* 100196e6 pop ecx */
  ECX = (pop32());
  /* 100196e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100196e9 pop ecx */
  ECX = (pop32());
  /* 100196ea jne 0x100196fa */
  if (!C.zf) goto L_100196fa;
  /* 100196ec push edi */
  push32((uint32_t)(EDI));
  /* 100196ed push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100196f0 call 0x10019643 */
  push32(0x100196f5u); f_10019643();
  /* 100196f5 pop ecx */
  ECX = (pop32());
  /* 100196f6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100196f9 pop ecx */
  ECX = (pop32());
L_100196fa:;
  /* 100196fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_100196fd:;
  /* 100196fd or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10019700 mov ecx, esi */
  ECX = (ESI);
  /* 10019702 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10019704 push 3 */
  push32((uint32_t)(0x3u));
  /* 10019706 pop ecx */
  ECX = (pop32());
  /* 10019707 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10019709 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1001970c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1001970d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001970f jge 0x1001971d */
  if ((C.sf==C.of)) goto L_1001971d;
  /* 10019711 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10019714 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10019716 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10019719 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001971b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_1001971d:;
  /* 1001971d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10019720 pop edi */
  EDI = (pop32());
  /* 10019721 pop esi */
  ESI = (pop32());
  /* 10019722 pop ebx */
  EBX = (pop32());
  /* 10019723 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10019724 ret  */
  ESPCHK(0x10019699u, _esp0);
  ESP += 4; return;
}

/* FUN_10009725 @ 0x10019725 (27 bytes, 13 insns) */
void f_10019725(void) {
  FTRACE(0x10019725u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10019725 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10019729 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1001972d push esi */
  push32((uint32_t)(ESI));
  /* 1001972e push 3 */
  push32((uint32_t)(0x3u));
  /* 10019730 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10019732 pop edx */
  EDX = (pop32());
L_10019733:;
  /* 10019733 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 10019735 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 10019738 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001973b dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1001973c jne 0x10019733 */
  if (!C.zf) goto L_10019733;
  /* 1001973e pop esi */
  ESI = (pop32());
  /* 1001973f ret  */
  ESPCHK(0x10019725u, _esp0);
  ESP += 4; return;
}

/* FUN_10009740 @ 0x10019740 (12 bytes, 8 insns) */
void f_10019740(void) {
  FTRACE(0x10019740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10019740 push edi */
  push32((uint32_t)(EDI));
  /* 10019741 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10019745 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10019747 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10019748 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10019749 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1001974a pop edi */
  EDI = (pop32());
  /* 1001974b ret  */
  ESPCHK(0x10019740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000974c @ 0x1001974c (27 bytes, 13 insns) */
void f_1001974c(void) {
  FTRACE(0x1001974cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001974c mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10019750 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_10019752:;
  /* 10019752 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019755 jne 0x10019764 */
  if (!C.zf) goto L_10019764;
  /* 10019757 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10019758 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001975b cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001975e jl 0x10019752 */
  if ((C.sf!=C.of)) goto L_10019752;
  /* 10019760 push 1 */
  push32((uint32_t)(0x1u));
  /* 10019762 pop eax */
  EAX = (pop32());
  /* 10019763 ret  */
  ESPCHK(0x1001974cu, _esp0);
  ESP += 4; return;
L_10019764:;
  /* 10019764 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10019766 ret  */
  ESPCHK(0x1001974cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009767 @ 0x10019767 (141 bytes, 64 insns) */
void f_10019767(void) {
  FTRACE(0x10019767u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10019767 push ebp */
  push32((uint32_t)(EBP));
  /* 10019768 mov ebp, esp */
  EBP = (ESP);
  /* 1001976a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001976d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10019770 push ebx */
  push32((uint32_t)(EBX));
  /* 10019771 push esi */
  push32((uint32_t)(ESI));
  /* 10019772 push edi */
  push32((uint32_t)(EDI));
  /* 10019773 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10019775 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10019778 pop ebx */
  EBX = (pop32());
  /* 10019779 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1001977c cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1001977d mov ecx, ebx */
  ECX = (EBX);
  /* 1001977f mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 10019786 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10019788 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1001978b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1001978e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1001978f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10019791 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 10019795 mov ecx, edx */
  ECX = (EDX);
  /* 10019797 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10019799 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001979b not esi */
  ESI = (~(ESI));
L_1001979d:;
  /* 1001979d mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1001979f mov ecx, eax */
  ECX = (EAX);
  /* 100197a1 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 100197a3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100197a6 mov ecx, edx */
  ECX = (EDX);
  /* 100197a8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 100197aa or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 100197ad mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 100197af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100197b2 mov ecx, ebx */
  ECX = (EBX);
  /* 100197b4 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100197b7 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 100197b9 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 100197bc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100197bf jne 0x1001979d */
  if (!C.zf) goto L_1001979d;
  /* 100197c1 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 100197c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100197c6 pop ebx */
  EBX = (pop32());
  /* 100197c7 mov esi, edi */
  ESI = (EDI);
  /* 100197c9 push 8 */
  push32((uint32_t)(0x8u));
  /* 100197cb pop ecx */
  ECX = (pop32());
  /* 100197cc shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_100197cf:;
  /* 100197cf cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100197d1 jl 0x100197e2 */
  if ((C.sf!=C.of)) goto L_100197e2;
  /* 100197d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 100197d6 mov eax, ecx */
  EAX = (ECX);
  /* 100197d8 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100197da mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 100197dd mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 100197e0 jmp 0x100197e9 */
  goto L_100197e9;
L_100197e2:;
  /* 100197e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100197e5 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_100197e9:;
  /* 100197e9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100197ea sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100197ed jns 0x100197cf */
  if (!C.sf) goto L_100197cf;
  /* 100197ef pop edi */
  EDI = (pop32());
  /* 100197f0 pop esi */
  ESI = (pop32());
  /* 100197f1 pop ebx */
  EBX = (pop32());
  /* 100197f2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100197f3 ret  */
  ESPCHK(0x10019767u, _esp0);
  ESP += 4; return;
}

/* FUN_100097f4 @ 0x100197f4 (364 bytes, 138 insns) */
void f_100197f4(void) {
  FTRACE(0x100197f4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100197f4 push ebp */
  push32((uint32_t)(EBP));
  /* 100197f5 mov ebp, esp */
  EBP = (ESP);
  /* 100197f7 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100197fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100197fd push ebx */
  push32((uint32_t)(EBX));
  /* 100197fe push esi */
  push32((uint32_t)(ESI));
  /* 100197ff push edi */
  push32((uint32_t)(EDI));
  /* 10019800 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 10019804 mov ebx, ecx */
  EBX = (ECX);
  /* 10019806 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1001980c mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1001980f mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 10019812 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10019815 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 10019818 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 1001981b mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1001981e and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 10019824 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001982a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1001982d shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10019830 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019836 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10019839 jne 0x10019861 */
  if (!C.zf) goto L_10019861;
  /* 1001983b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1001983e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10019840 push eax */
  push32((uint32_t)(EAX));
  /* 10019841 call 0x1001974c */
  push32(0x10019846u); f_1001974c();
  /* 10019846 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10019848 pop ecx */
  ECX = (pop32());
  /* 10019849 jne 0x10019920 */
  if (!C.zf) goto L_10019920;
  /* 1001984f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10019852 push eax */
  push32((uint32_t)(EAX));
  /* 10019853 call 0x10019740 */
  push32(0x10019858u); f_10019740();
  /* 10019858 pop ecx */
  ECX = (pop32());
L_10019859:;
  /* 10019859 push 2 */
  push32((uint32_t)(0x2u));
L_1001985b:;
  /* 1001985b pop eax */
  EAX = (pop32());
  /* 1001985c jmp 0x10019922 */
  goto L_10019922;
L_10019861:;
  /* 10019861 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10019864 push eax */
  push32((uint32_t)(EAX));
  /* 10019865 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10019868 push eax */
  push32((uint32_t)(EAX));
  /* 10019869 call 0x10019725 */
  push32(0x1001986eu); f_10019725();
  /* 1001986e push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 10019871 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10019874 push eax */
  push32((uint32_t)(EAX));
  /* 10019875 call 0x10019699 */
  push32(0x1001987au); f_10019699();
  /* 1001987a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001987d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001987f je 0x10019882 */
  if (C.zf) goto L_10019882;
  /* 10019881 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10019882:;
  /* 10019882 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 10019885 mov ecx, eax */
  ECX = (EAX);
  /* 10019887 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001988a cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001988c jge 0x1001989a */
  if ((C.sf==C.of)) goto L_1001989a;
  /* 1001988e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10019891 push eax */
  push32((uint32_t)(EAX));
  /* 10019892 call 0x10019740 */
  push32(0x10019897u); f_10019740();
  /* 10019897 pop ecx */
  ECX = (pop32());
  /* 10019898 jmp 0x100198d6 */
  goto L_100198d6;
L_1001989a:;
  /* 1001989a cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001989c jg 0x100198dd */
  if ((!C.zf&&C.sf==C.of)) goto L_100198dd;
  /* 1001989e sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100198a0 mov esi, eax */
  ESI = (EAX);
  /* 100198a2 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 100198a5 push eax */
  push32((uint32_t)(EAX));
  /* 100198a6 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100198a9 push eax */
  push32((uint32_t)(EAX));
  /* 100198aa call 0x10019725 */
  push32(0x100198afu); f_10019725();
  /* 100198af lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100198b2 push esi */
  push32((uint32_t)(ESI));
  /* 100198b3 push eax */
  push32((uint32_t)(EAX));
  /* 100198b4 call 0x10019767 */
  push32(0x100198b9u); f_10019767();
  /* 100198b9 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 100198bc lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100198bf push eax */
  push32((uint32_t)(EAX));
  /* 100198c0 call 0x10019699 */
  push32(0x100198c5u); f_10019699();
  /* 100198c5 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 100198c8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100198c9 push eax */
  push32((uint32_t)(EAX));
  /* 100198ca lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100198cd push eax */
  push32((uint32_t)(EAX));
  /* 100198ce call 0x10019767 */
  push32(0x100198d3u); f_10019767();
  /* 100198d3 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100198d6:;
  /* 100198d6 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100198d8 jmp 0x10019859 */
  goto L_10019859;
L_100198dd:;
  /* 100198dd cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100198df jl 0x10019909 */
  if ((C.sf!=C.of)) goto L_10019909;
  /* 100198e1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100198e4 push eax */
  push32((uint32_t)(EAX));
  /* 100198e5 call 0x10019740 */
  push32(0x100198eau); f_10019740();
  /* 100198ea push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 100198ed or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 100198f1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100198f4 push eax */
  push32((uint32_t)(EAX));
  /* 100198f5 call 0x10019767 */
  push32(0x100198fau); f_10019767();
  /* 100198fa mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 100198fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10019900 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10019902 push 1 */
  push32((uint32_t)(0x1u));
  /* 10019904 jmp 0x1001985b */
  goto L_1001985b;
L_10019909:;
  /* 10019909 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 1001990c mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 1001990f and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 10019913 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10019916 push eax */
  push32((uint32_t)(EAX));
  /* 10019917 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10019919 call 0x10019767 */
  push32(0x1001991eu); f_10019767();
  /* 1001991e pop ecx */
  ECX = (pop32());
  /* 1001991f pop ecx */
  ECX = (pop32());
L_10019920:;
  /* 10019920 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10019922:;
  /* 10019922 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10019924 pop ecx */
  ECX = (pop32());
  /* 10019925 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10019928 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 1001992b shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1001992d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10019930 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10019932 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10019934 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 1001993a or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1001993c or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 1001993f cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019942 jne 0x10019951 */
  if (!C.zf) goto L_10019951;
  /* 10019944 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10019947 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1001994a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1001994d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1001994f jmp 0x1001995b */
  goto L_1001995b;
L_10019951:;
  /* 10019951 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019954 jne 0x1001995b */
  if (!C.zf) goto L_1001995b;
  /* 10019956 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10019959 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_1001995b:;
  /* 1001995b pop edi */
  EDI = (pop32());
  /* 1001995c pop esi */
  ESI = (pop32());
  /* 1001995d pop ebx */
  EBX = (pop32());
  /* 1001995e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001995f ret  */
  ESPCHK(0x100197f4u, _esp0);
  ESP += 4; return;
}

/* FUN_10009960 @ 0x10019960 (22 bytes, 6 insns) */
void f_10019960(void) {
  FTRACE(0x10019960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10019960 push 0x10020c10 */
  push32((uint32_t)(0x10020c10u));
  /* 10019965 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10019969 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 1001996d call 0x100197f4 */
  push32(0x10019972u); f_100197f4();
  /* 10019972 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10019975 ret  */
  ESPCHK(0x10019960u, _esp0);
  ESP += 4; return;
}

/* FUN_10009976 @ 0x10019976 (22 bytes, 6 insns) */
void f_10019976(void) {
  FTRACE(0x10019976u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10019976 push 0x10020c28 */
  push32((uint32_t)(0x10020c28u));
  /* 1001997b push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 1001997f push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10019983 call 0x100197f4 */
  push32(0x10019988u); f_100197f4();
  /* 10019988 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001998b ret  */
  ESPCHK(0x10019976u, _esp0);
  ESP += 4; return;
}

/* FUN_1000998c @ 0x1001998c (45 bytes, 21 insns) */
void f_1001998c(void) {
  FTRACE(0x1001998cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001998c push ebp */
  push32((uint32_t)(EBP));
  /* 1001998d mov ebp, esp */
  EBP = (ESP);
  /* 1001998f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10019992 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10019994 push eax */
  push32((uint32_t)(EAX));
  /* 10019995 push eax */
  push32((uint32_t)(EAX));
  /* 10019996 push eax */
  push32((uint32_t)(EAX));
  /* 10019997 push eax */
  push32((uint32_t)(EAX));
  /* 10019998 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1001999b lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1001999e push eax */
  push32((uint32_t)(EAX));
  /* 1001999f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100199a2 push eax */
  push32((uint32_t)(EAX));
  /* 100199a3 call 0x1001c836 */
  push32(0x100199a8u); f_1001c836();
  /* 100199a8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100199ab lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100199ae push eax */
  push32((uint32_t)(EAX));
  /* 100199af call 0x10019960 */
  push32(0x100199b4u); f_10019960();
  /* 100199b4 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100199b7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100199b8 ret  */
  ESPCHK(0x1001998cu, _esp0);
  ESP += 4; return;
}

/* FUN_100099b9 @ 0x100199b9 (45 bytes, 21 insns) */
void f_100199b9(void) {
  FTRACE(0x100199b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100199b9 push ebp */
  push32((uint32_t)(EBP));
  /* 100199ba mov ebp, esp */
  EBP = (ESP);
  /* 100199bc sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100199bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100199c1 push eax */
  push32((uint32_t)(EAX));
  /* 100199c2 push eax */
  push32((uint32_t)(EAX));
  /* 100199c3 push eax */
  push32((uint32_t)(EAX));
  /* 100199c4 push eax */
  push32((uint32_t)(EAX));
  /* 100199c5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100199c8 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 100199cb push eax */
  push32((uint32_t)(EAX));
  /* 100199cc lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100199cf push eax */
  push32((uint32_t)(EAX));
  /* 100199d0 call 0x1001c836 */
  push32(0x100199d5u); f_1001c836();
  /* 100199d5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100199d8 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100199db push eax */
  push32((uint32_t)(EAX));
  /* 100199dc call 0x10019976 */
  push32(0x100199e1u); f_10019976();
  /* 100199e1 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100199e4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100199e5 ret  */
  ESPCHK(0x100199b9u, _esp0);
  ESP += 4; return;
}

/* FUN_100099e6 @ 0x100199e6 (119 bytes, 57 insns) */
void f_100199e6(void) {
  FTRACE(0x100199e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100199e6 push ebp */
  push32((uint32_t)(EBP));
  /* 100199e7 mov ebp, esp */
  EBP = (ESP);
  /* 100199e9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 100199ec push ebx */
  push32((uint32_t)(EBX));
  /* 100199ed mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 100199f0 push esi */
  push32((uint32_t)(ESI));
  /* 100199f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100199f4 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 100199f7 push edi */
  push32((uint32_t)(EDI));
  /* 100199f8 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 100199fb mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 100199fe test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10019a00 mov eax, edi */
  EAX = (EDI);
  /* 10019a02 jle 0x10019a23 */
  if ((C.zf||C.sf!=C.of)) goto L_10019a23;
  /* 10019a04 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10019a07 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10019a09:;
  /* 10019a09 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10019a0b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10019a0d je 0x10019a15 */
  if (C.zf) goto L_10019a15;
  /* 10019a0f movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 10019a12 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10019a13 jmp 0x10019a18 */
  goto L_10019a18;
L_10019a15:;
  /* 10019a15 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10019a17 pop edx */
  EDX = (pop32());
L_10019a18:;
  /* 10019a18 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10019a1a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10019a1b dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 10019a1e jne 0x10019a09 */
  if (!C.zf) goto L_10019a09;
  /* 10019a20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_10019a23:;
  /* 10019a23 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10019a26 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10019a28 jl 0x10019a3c */
  if ((C.sf!=C.of)) goto L_10019a3c;
  /* 10019a2a cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10019a2d jl 0x10019a3c */
  if ((C.sf!=C.of)) goto L_10019a3c;
L_10019a2f:;
  /* 10019a2f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10019a30 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10019a33 jne 0x10019a3a */
  if (!C.zf) goto L_10019a3a;
  /* 10019a35 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 10019a38 jmp 0x10019a2f */
  goto L_10019a2f;
L_10019a3a:;
  /* 10019a3a inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_10019a3c:;
  /* 10019a3c cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10019a3f jne 0x10019a46 */
  if (!C.zf) goto L_10019a46;
  /* 10019a41 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 10019a44 jmp 0x10019a58 */
  goto L_10019a58;
L_10019a46:;
  /* 10019a46 push edi */
  push32((uint32_t)(EDI));
  /* 10019a47 call 0x100190c0 */
  push32(0x10019a4cu); f_100190c0();
  /* 10019a4c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10019a4d push eax */
  push32((uint32_t)(EAX));
  /* 10019a4e push edi */
  push32((uint32_t)(EDI));
  /* 10019a4f push esi */
  push32((uint32_t)(ESI));
  /* 10019a50 call 0x10019cc0 */
  push32(0x10019a55u); f_10019cc0();
  /* 10019a55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10019a58:;
  /* 10019a58 pop edi */
  EDI = (pop32());
  /* 10019a59 pop esi */
  ESI = (pop32());
  /* 10019a5a pop ebx */
  EBX = (pop32());
  /* 10019a5b pop ebp */
  EBP = (pop32());
  /* 10019a5c ret  */
  ESPCHK(0x100199e6u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a5d @ 0x10019a5d (92 bytes, 41 insns) */
void f_10019a5d(void) {
  FTRACE(0x10019a5du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10019a5d push ebp */
  push32((uint32_t)(EBP));
  /* 10019a5e mov ebp, esp */
  EBP = (ESP);
  /* 10019a60 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10019a63 push esi */
  push32((uint32_t)(ESI));
  /* 10019a64 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10019a67 push edi */
  push32((uint32_t)(EDI));
  /* 10019a68 push eax */
  push32((uint32_t)(EAX));
  /* 10019a69 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10019a6c push eax */
  push32((uint32_t)(EAX));
  /* 10019a6d call 0x10019ab9 */
  push32(0x10019a72u); f_10019ab9();
  /* 10019a72 pop ecx */
  ECX = (pop32());
  /* 10019a73 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10019a76 pop ecx */
  ECX = (pop32());
  /* 10019a77 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 10019a7a push eax */
  push32((uint32_t)(EAX));
  /* 10019a7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10019a7d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10019a7f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10019a82 mov edi, esp */
  EDI = (ESP);
  /* 10019a84 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10019a85 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10019a86 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 10019a88 call 0x1001cd07 */
  push32(0x10019a8du); f_1001cd07();
  /* 10019a8d mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10019a90 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 10019a93 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 10019a96 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 10019a9a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10019a9c movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 10019aa0 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 10019aa3 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 10019aa6 push eax */
  push32((uint32_t)(EAX));
  /* 10019aa7 push edi */
  push32((uint32_t)(EDI));
  /* 10019aa8 call 0x10019b70 */
  push32(0x10019aadu); f_10019b70();
  /* 10019aad add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10019ab0 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 10019ab3 mov eax, esi */
  EAX = (ESI);
  /* 10019ab5 pop edi */
  EDI = (pop32());
  /* 10019ab6 pop esi */
  ESI = (pop32());
  /* 10019ab7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10019ab8 ret  */
  ESPCHK(0x10019a5du, _esp0);
  ESP += 4; return;
}

/* FUN_10009ab9 @ 0x10019ab9 (182 bytes, 70 insns) */
void f_10019ab9(void) {
  FTRACE(0x10019ab9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10019ab9 push ebp */
  push32((uint32_t)(EBP));
  /* 10019aba mov ebp, esp */
  EBP = (ESP);
  /* 10019abc push ecx */
  push32((uint32_t)(ECX));
  /* 10019abd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10019ac0 push ebx */
  push32((uint32_t)(EBX));
  /* 10019ac1 push esi */
  push32((uint32_t)(ESI));
  /* 10019ac2 push edi */
  push32((uint32_t)(EDI));
  /* 10019ac3 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 10019ac7 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 10019acc mov ecx, eax */
  ECX = (EAX);
  /* 10019ace and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10019ad3 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10019ad6 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10019ad8 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10019adb mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10019ade mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 10019ae0 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 10019ae3 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10019ae8 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10019aed test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10019aef mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 10019af2 je 0x10019b07 */
  if (C.zf) goto L_10019b07;
  /* 10019af4 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019af6 je 0x10019b00 */
  if (C.zf) goto L_10019b00;
  /* 10019af8 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 10019afe jmp 0x10019b28 */
  goto L_10019b28;
L_10019b00:;
  /* 10019b00 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 10019b05 jmp 0x10019b28 */
  goto L_10019b28;
L_10019b07:;
  /* 10019b07 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10019b09 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019b0b jne 0x10019b1f */
  if (!C.zf) goto L_10019b1f;
  /* 10019b0d cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019b0f jne 0x10019b1f */
  if (!C.zf) goto L_10019b1f;
  /* 10019b11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10019b14 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 10019b17 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 10019b19 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 10019b1d jmp 0x10019b6a */
  goto L_10019b6a;
L_10019b1f:;
  /* 10019b1f lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 10019b25 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_10019b28:;
  /* 10019b28 mov ecx, edx */
  ECX = (EDX);
  /* 10019b2a shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 10019b2d shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 10019b30 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10019b32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10019b35 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 10019b38 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 10019b3b mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10019b3e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10019b40:;
  /* 10019b40 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 10019b42 jne 0x10019b61 */
  if (!C.zf) goto L_10019b61;
  /* 10019b44 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10019b46 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10019b48 mov ebx, edx */
  EBX = (EDX);
  /* 10019b4a shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 10019b4d or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 10019b4f lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 10019b52 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10019b54 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 10019b57 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10019b5d mov ecx, ebx */
  ECX = (EBX);
  /* 10019b5f jmp 0x10019b40 */
  goto L_10019b40;
L_10019b61:;
  /* 10019b61 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10019b64 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10019b66 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_10019b6a:;
  /* 10019b6a pop edi */
  EDI = (pop32());
  /* 10019b6b pop esi */
  ESI = (pop32());
  /* 10019b6c pop ebx */
  EBX = (pop32());
  /* 10019b6d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10019b6e ret  */
  ESPCHK(0x10019ab9u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b70 @ 0x10019b70 (7 bytes, 3 insns) */
void f_10019b70(void) {
  FTRACE(0x10019b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10019b70 push edi */
  push32((uint32_t)(EDI));
  /* 10019b71 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10019b75 jmp 0x10019be1 */
  jmp_ind(0x10019be1u); return;
}

/* FUN_10009b80 @ 0x10019b80 (224 bytes, 84 insns) */
void f_10019b80(void) {
  FTRACE(0x10019b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10019b80 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10019b84 push edi */
  push32((uint32_t)(EDI));
  /* 10019b85 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10019b8b je 0x10019b9c */
  if (C.zf) goto L_10019b9c;
L_10019b8d:;
  /* 10019b8d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10019b8f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10019b90 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10019b92 je 0x10019bcf */
  if (C.zf) goto L_10019bcf;
  /* 10019b94 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10019b9a jne 0x10019b8d */
  if (!C.zf) goto L_10019b8d;
L_10019b9c:;
  /* 10019b9c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10019b9e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10019ba3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10019ba5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10019ba8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10019baa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10019bad test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10019bb2 je 0x10019b9c */
  if (C.zf) goto L_10019b9c;
  /* 10019bb4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10019bb7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10019bb9 je 0x10019bde */
  if (C.zf) goto L_10019bde;
  /* 10019bbb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10019bbd je 0x10019bd9 */
  if (C.zf) goto L_10019bd9;
  /* 10019bbf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10019bc4 je 0x10019bd4 */
  if (C.zf) goto L_10019bd4;
  /* 10019bc6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10019bcb je 0x10019bcf */
  if (C.zf) goto L_10019bcf;
  /* 10019bcd jmp 0x10019b9c */
  goto L_10019b9c;
L_10019bcf:;
  /* 10019bcf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10019bd2 jmp 0x10019be1 */
  goto L_10019be1;
L_10019bd4:;
  /* 10019bd4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10019bd7 jmp 0x10019be1 */
  goto L_10019be1;
L_10019bd9:;
  /* 10019bd9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10019bdc jmp 0x10019be1 */
  goto L_10019be1;
L_10019bde:;
  /* 10019bde lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10019be1:;
  /* 10019be1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10019be5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10019beb je 0x10019c06 */
  if (C.zf) goto L_10019c06;
L_10019bed:;
  /* 10019bed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10019bef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10019bf0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10019bf2 je 0x10019c58 */
  if (C.zf) goto L_10019c58;
  /* 10019bf4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10019bf6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10019bf7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10019bfd jne 0x10019bed */
  if (!C.zf) goto L_10019bed;
  /* 10019bff jmp 0x10019c06 */
  goto L_10019c06;
L_10019c01:;
  /* 10019c01 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10019c03 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10019c06:;
  /* 10019c06 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10019c0b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10019c0d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10019c0f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10019c12 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10019c14 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10019c16 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10019c19 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10019c1e je 0x10019c01 */
  if (C.zf) goto L_10019c01;
  /* 10019c20 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10019c22 je 0x10019c58 */
  if (C.zf) goto L_10019c58;
  /* 10019c24 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10019c26 je 0x10019c4f */
  if (C.zf) goto L_10019c4f;
  /* 10019c28 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10019c2e je 0x10019c42 */
  if (C.zf) goto L_10019c42;
  /* 10019c30 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10019c36 je 0x10019c3a */
  if (C.zf) goto L_10019c3a;
  /* 10019c38 jmp 0x10019c01 */
  goto L_10019c01;
L_10019c3a:;
  /* 10019c3a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10019c3c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10019c40 pop edi */
  EDI = (pop32());
  /* 10019c41 ret  */
  ESPCHK(0x10019b80u, _esp0);
  ESP += 4; return;
L_10019c42:;
  /* 10019c42 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10019c45 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10019c49 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10019c4d pop edi */
  EDI = (pop32());
  /* 10019c4e ret  */
  ESPCHK(0x10019b80u, _esp0);
  ESP += 4; return;
L_10019c4f:;
  /* 10019c4f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10019c52 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10019c56 pop edi */
  EDI = (pop32());
  /* 10019c57 ret  */
  ESPCHK(0x10019b80u, _esp0);
  ESP += 4; return;
L_10019c58:;
  /* 10019c58 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10019c5a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10019c5e pop edi */
  EDI = (pop32());
  /* 10019c5f ret  */
  ESPCHK(0x10019b80u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10019c60 (88 bytes, 40 insns) */
void f_10019c60(void) {
  FTRACE(0x10019c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10019c60 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10019c64 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10019c68 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10019c6a je 0x10019cb3 */
  if (C.zf) goto L_10019cb3;
  /* 10019c6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10019c6e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10019c72 push edi */
  push32((uint32_t)(EDI));
  /* 10019c73 mov edi, ecx */
  EDI = (ECX);
  /* 10019c75 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019c78 jb 0x10019ca7 */
  if (C.cf) goto L_10019ca7;
  /* 10019c7a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10019c7c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10019c7f je 0x10019c89 */
  if (C.zf) goto L_10019c89;
  /* 10019c81 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10019c83:;
  /* 10019c83 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10019c85 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10019c86 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10019c87 jne 0x10019c83 */
  if (!C.zf) goto L_10019c83;
L_10019c89:;
  /* 10019c89 mov ecx, eax */
  ECX = (EAX);
  /* 10019c8b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10019c8e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10019c90 mov ecx, eax */
  ECX = (EAX);
  /* 10019c92 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10019c95 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10019c97 mov ecx, edx */
  ECX = (EDX);
  /* 10019c99 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10019c9c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10019c9f je 0x10019ca7 */
  if (C.zf) goto L_10019ca7;
  /* 10019ca1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10019ca3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10019ca5 je 0x10019cad */
  if (C.zf) goto L_10019cad;
L_10019ca7:;
  /* 10019ca7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10019ca9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10019caa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10019cab jne 0x10019ca7 */
  if (!C.zf) goto L_10019ca7;
L_10019cad:;
  /* 10019cad mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10019cb1 pop edi */
  EDI = (pop32());
  /* 10019cb2 ret  */
  ESPCHK(0x10019c60u, _esp0);
  ESP += 4; return;
L_10019cb3:;
  /* 10019cb3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10019cb7 ret  */
  ESPCHK(0x10019c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009cc0 @ 0x10019cc0 (664 bytes, 268 insns) [15 switch table(s)] */
void f_10019cc0(void) {
  FTRACE(0x10019cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10019cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10019cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10019cc3 push edi */
  push32((uint32_t)(EDI));
  /* 10019cc4 push esi */
  push32((uint32_t)(ESI));
  /* 10019cc5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10019cc8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10019ccb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10019cce mov eax, ecx */
  EAX = (ECX);
  /* 10019cd0 mov edx, ecx */
  EDX = (ECX);
  /* 10019cd2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10019cd4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019cd6 jbe 0x10019ce0 */
  if ((C.cf||C.zf)) goto L_10019ce0;
  /* 10019cd8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019cda jb 0x10019e58 */
  if (C.cf) goto L_10019e58;
L_10019ce0:;
  /* 10019ce0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10019ce6 jne 0x10019cfc */
  if (!C.zf) goto L_10019cfc;
  /* 10019ce8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10019ceb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10019cee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019cf1 jb 0x10019d1c */
  if (C.cf) goto L_10019d1c;
  /* 10019cf3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10019cf5 jmp dword ptr [edx*4 + 0x10019e08] */
  switch (EDX) {
    case 0: goto L_10019e18;
    case 1: goto L_10019e20;
    case 2: goto L_10019e2c;
    case 3: goto L_10019e40;
    default: x86_unimpl("switch@0x10019cf5 out of table"); return;
  }
L_10019cfc:;
  /* 10019cfc mov eax, edi */
  EAX = (EDI);
  /* 10019cfe mov edx, 3 */
  EDX = (0x3u);
  /* 10019d03 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10019d06 jb 0x10019d14 */
  if (C.cf) goto L_10019d14;
  /* 10019d08 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10019d0b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10019d0d jmp dword ptr [eax*4 + 0x10019d20] */
  switch (EAX) {
    case 1: goto L_10019d30;
    case 2: goto L_10019d5c;
    case 3: goto L_10019d80;
    default: x86_unimpl("switch@0x10019d0d out of table"); return;
  }
L_10019d14:;
  /* 10019d14 jmp dword ptr [ecx*4 + 0x10019e18] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10019e18)))); return;
  /* 10019d1b nop  */
  /* nop */
L_10019d1c:;
  /* 10019d1c jmp dword ptr [ecx*4 + 0x10019d9c] */
  switch (ECX) {
    case 0: goto L_10019dff;
    case 1: goto L_10019dec;
    case 2: goto L_10019de4;
    case 3: goto L_10019ddc;
    case 4: goto L_10019dd4;
    case 5: goto L_10019dcc;
    case 6: goto L_10019dc4;
    case 7: goto L_10019dbc;
    default: x86_unimpl("switch@0x10019d1c out of table"); return;
  }
  /* 10019d23 nop  */
  /* nop */
L_10019d30:;
  /* 10019d30 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10019d32 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10019d34 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10019d36 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10019d39 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10019d3c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10019d3f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10019d42 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10019d45 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10019d48 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10019d4b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019d4e jb 0x10019d1c */
  if (C.cf) goto L_10019d1c;
  /* 10019d50 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10019d52 jmp dword ptr [edx*4 + 0x10019e08] */
  switch (EDX) {
    case 0: goto L_10019e18;
    case 1: goto L_10019e20;
    case 2: goto L_10019e2c;
    case 3: goto L_10019e40;
    default: x86_unimpl("switch@0x10019d52 out of table"); return;
  }
  /* 10019d59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10019d5c:;
  /* 10019d5c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10019d5e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10019d60 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10019d62 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10019d65 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10019d68 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10019d6b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10019d6e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10019d71 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019d74 jb 0x10019d1c */
  if (C.cf) goto L_10019d1c;
  /* 10019d76 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10019d78 jmp dword ptr [edx*4 + 0x10019e08] */
  switch (EDX) {
    case 0: goto L_10019e18;
    case 1: goto L_10019e20;
    case 2: goto L_10019e2c;
    case 3: goto L_10019e40;
    default: x86_unimpl("switch@0x10019d78 out of table"); return;
  }
  /* 10019d7f nop  */
  /* nop */
L_10019d80:;
  /* 10019d80 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10019d82 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10019d84 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10019d86 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10019d87 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10019d8a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10019d8b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019d8e jb 0x10019d1c */
  if (C.cf) goto L_10019d1c;
  /* 10019d90 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10019d92 jmp dword ptr [edx*4 + 0x10019e08] */
  switch (EDX) {
    case 0: goto L_10019e18;
    case 1: goto L_10019e20;
    case 2: goto L_10019e2c;
    case 3: goto L_10019e40;
    default: x86_unimpl("switch@0x10019d92 out of table"); return;
  }
  /* 10019d99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10019dbc:;
  /* 10019dbc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10019dc0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10019dc4:;
  /* 10019dc4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10019dc8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10019dcc:;
  /* 10019dcc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10019dd0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10019dd4:;
  /* 10019dd4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10019dd8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10019ddc:;
  /* 10019ddc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10019de0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10019de4:;
  /* 10019de4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10019de8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10019dec:;
  /* 10019dec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10019df0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10019df4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10019dfb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10019dfd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10019dff:;
  /* 10019dff jmp dword ptr [edx*4 + 0x10019e08] */
  switch (EDX) {
    case 0: goto L_10019e18;
    case 1: goto L_10019e20;
    case 2: goto L_10019e2c;
    case 3: goto L_10019e40;
    default: x86_unimpl("switch@0x10019dff out of table"); return;
  }
  /* 10019e06 mov edi, edi */
  EDI = (EDI);
L_10019e18:;
  /* 10019e18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10019e1b pop esi */
  ESI = (pop32());
  /* 10019e1c pop edi */
  EDI = (pop32());
  /* 10019e1d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10019e1e ret  */
  ESPCHK(0x10019cc0u, _esp0);
  ESP += 4; return;
  /* 10019e1f nop  */
  /* nop */
L_10019e20:;
  /* 10019e20 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10019e22 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10019e24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10019e27 pop esi */
  ESI = (pop32());
  /* 10019e28 pop edi */
  EDI = (pop32());
  /* 10019e29 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10019e2a ret  */
  ESPCHK(0x10019cc0u, _esp0);
  ESP += 4; return;
  /* 10019e2b nop  */
  /* nop */
L_10019e2c:;
  /* 10019e2c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10019e2e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10019e30 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10019e33 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10019e36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10019e39 pop esi */
  ESI = (pop32());
  /* 10019e3a pop edi */
  EDI = (pop32());
  /* 10019e3b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10019e3c ret  */
  ESPCHK(0x10019cc0u, _esp0);
  ESP += 4; return;
  /* 10019e3d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10019e40:;
  /* 10019e40 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10019e42 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10019e44 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10019e47 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10019e4a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10019e4d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10019e50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10019e53 pop esi */
  ESI = (pop32());
  /* 10019e54 pop edi */
  EDI = (pop32());
  /* 10019e55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10019e56 ret  */
  ESPCHK(0x10019cc0u, _esp0);
  ESP += 4; return;
  /* 10019e57 nop  */
  /* nop */
L_10019e58:;
  /* 10019e58 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10019e5c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10019e60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10019e66 jne 0x10019e8c */
  if (!C.zf) goto L_10019e8c;
  /* 10019e68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10019e6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10019e6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019e71 jb 0x10019e80 */
  if (C.cf) goto L_10019e80;
  /* 10019e73 std  */
  C.df=1;
  /* 10019e74 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10019e76 cld  */
  C.df=0;
  /* 10019e77 jmp dword ptr [edx*4 + 0x10019fa0] */
  switch (EDX) {
    case 0: goto L_10019fb0;
    case 1: goto L_10019fb8;
    case 2: goto L_10019fc8;
    case 3: goto L_10019fdc;
    default: x86_unimpl("switch@0x10019e77 out of table"); return;
  }
  /* 10019e7e mov edi, edi */
  EDI = (EDI);
L_10019e80:;
  /* 10019e80 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10019e82 jmp dword ptr [ecx*4 + 0x10019f50] */
  switch (ECX) {
    case 0: goto L_10019f97;
    default: x86_unimpl("switch@0x10019e82 out of table"); return;
  }
  /* 10019e89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10019e8c:;
  /* 10019e8c mov eax, edi */
  EAX = (EDI);
  /* 10019e8e mov edx, 3 */
  EDX = (0x3u);
  /* 10019e93 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019e96 jb 0x10019ea4 */
  if (C.cf) goto L_10019ea4;
  /* 10019e98 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10019e9b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10019e9d jmp dword ptr [eax*4 + 0x10019ea8] */
  switch (EAX) {
    case 1: goto L_10019eb8;
    case 2: goto L_10019ed8;
    case 3: goto L_10019f00;
    default: x86_unimpl("switch@0x10019e9d out of table"); return;
  }
L_10019ea4:;
  /* 10019ea4 jmp dword ptr [ecx*4 + 0x10019fa0] */
  switch (ECX) {
    case 0: goto L_10019fb0;
    case 1: goto L_10019fb8;
    case 2: goto L_10019fc8;
    case 3: goto L_10019fdc;
    default: x86_unimpl("switch@0x10019ea4 out of table"); return;
  }
  /* 10019eab nop  */
  /* nop */
L_10019eb8:;
  /* 10019eb8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10019ebb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10019ebd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10019ec0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10019ec1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10019ec4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10019ec5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019ec8 jb 0x10019e80 */
  if (C.cf) goto L_10019e80;
  /* 10019eca std  */
  C.df=1;
  /* 10019ecb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10019ecd cld  */
  C.df=0;
  /* 10019ece jmp dword ptr [edx*4 + 0x10019fa0] */
  switch (EDX) {
    case 0: goto L_10019fb0;
    case 1: goto L_10019fb8;
    case 2: goto L_10019fc8;
    case 3: goto L_10019fdc;
    default: x86_unimpl("switch@0x10019ece out of table"); return;
  }
  /* 10019ed5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10019ed8:;
  /* 10019ed8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10019edb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10019edd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10019ee0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10019ee3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10019ee6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
L_10019ee9:;
  /* 10019ee9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10019eec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10019eef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019ef2 jb 0x10019e80 */
  if (C.cf) goto L_10019e80;
  /* 10019ef4 std  */
  C.df=1;
  /* 10019ef5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10019ef7 cld  */
  C.df=0;
  /* 10019ef8 jmp dword ptr [edx*4 + 0x10019fa0] */
  switch (EDX) {
    case 0: goto L_10019fb0;
    case 1: goto L_10019fb8;
    case 2: goto L_10019fc8;
    case 3: goto L_10019fdc;
    default: x86_unimpl("switch@0x10019ef8 out of table"); return;
  }
  /* 10019eff nop  */
  /* nop */
L_10019f00:;
  /* 10019f00 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10019f03 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10019f05 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10019f08 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10019f0b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10019f0e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10019f11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10019f14 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10019f17 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10019f1a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10019f1d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10019f20 jb 0x10019e80 */
  if (C.cf) goto L_10019e80;
  /* 10019f26 std  */
  C.df=1;
  /* 10019f27 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10019f29 cld  */
  C.df=0;
  /* 10019f2a jmp dword ptr [edx*4 + 0x10019fa0] */
  switch (EDX) {
    case 0: goto L_10019fb0;
    case 1: goto L_10019fb8;
    case 2: goto L_10019fc8;
    case 3: goto L_10019fdc;
    default: x86_unimpl("switch@0x10019f2a out of table"); return;
  }
  /* 10019f31 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10019f34 push esp */
  push32((uint32_t)(ESP));
  /* 10019f35 lahf  */
  AH=(uint8_t)((C.sf<<7)|(C.zf<<6)|(C.af<<4)|(C.pf<<2)|0x02u|C.cf);
  /* 10019f36 add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10019f38 pop esp */
  ESP = (pop32());
  /* 10019f39 lahf  */
  AH=(uint8_t)((C.sf<<7)|(C.zf<<6)|(C.af<<4)|(C.pf<<2)|0x02u|C.cf);
  /* 10019f3a add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10019f3c lahf  */
  AH=(uint8_t)((C.sf<<7)|(C.zf<<6)|(C.af<<4)|(C.pf<<2)|0x02u|C.cf);
  /* 10019f3e add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10019f40 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x10019f40");
  /* 10019f41 lahf  */
  AH=(uint8_t)((C.sf<<7)|(C.zf<<6)|(C.af<<4)|(C.pf<<2)|0x02u|C.cf);
  /* 10019f42 add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10019f44 je 0x10019ee5 */
  if (C.zf) goto L_10019ee5;
  /* 10019f46 add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10019f48 jl 0x10019ee9 */
  if ((C.sf!=C.of)) goto L_10019ee9;
  /* 10019f4a add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10019f4d lahf  */
  AH=(uint8_t)((C.sf<<7)|(C.zf<<6)|(C.af<<4)|(C.pf<<2)|0x02u|C.cf);
  /* 10019f4e add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10019f54 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10019f58 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10019f5c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10019f60 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10019f64 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10019f68 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10019f6c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10019f70 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10019f74 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10019f78 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10019f7c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10019f80 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10019f84 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10019f88 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10019f8c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10019f93 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10019f95 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10019f97:;
  /* 10019f97 jmp dword ptr [edx*4 + 0x10019fa0] */
  switch (EDX) {
    case 0: goto L_10019fb0;
    case 1: goto L_10019fb8;
    case 2: goto L_10019fc8;
    case 3: goto L_10019fdc;
    default: x86_unimpl("switch@0x10019f97 out of table"); return;
  }
  /* 10019f9e mov edi, edi */
  EDI = (EDI);
L_10019fb0:;
  /* 10019fb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10019fb3 pop esi */
  ESI = (pop32());
  /* 10019fb4 pop edi */
  EDI = (pop32());
  /* 10019fb5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10019fb6 ret  */
  ESPCHK(0x10019cc0u, _esp0);
  ESP += 4; return;
  /* 10019fb7 nop  */
  /* nop */
L_10019fb8:;
  /* 10019fb8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10019fbb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10019fbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10019fc1 pop esi */
  ESI = (pop32());
  /* 10019fc2 pop edi */
  EDI = (pop32());
  /* 10019fc3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10019fc4 ret  */
  ESPCHK(0x10019cc0u, _esp0);
  ESP += 4; return;
  /* 10019fc5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10019fc8:;
  /* 10019fc8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10019fcb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10019fce mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10019fd1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10019fd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10019fd7 pop esi */
  ESI = (pop32());
  /* 10019fd8 pop edi */
  EDI = (pop32());
  /* 10019fd9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10019fda ret  */
  ESPCHK(0x10019cc0u, _esp0);
  ESP += 4; return;
  /* 10019fdb nop  */
  /* nop */
L_10019fdc:;
  /* 10019fdc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10019fdf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10019fe2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10019fe5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10019fe8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10019feb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10019fee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10019ff1 pop esi */
  ESI = (pop32());
  /* 10019ff2 pop edi */
  EDI = (pop32());
  /* 10019ff3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10019ff4 ret  */
  ESPCHK(0x10019cc0u, _esp0);
  ESP += 4; return;
L_10019ee5: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x10019ee5 (unresolved jump table)"); return;
}

/* __fptrap @ 0x10019ff5 (9 bytes, 4 insns) */
void f_10019ff5(void) {
  FTRACE(0x10019ff5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10019ff5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10019ff7 call 0x10017131 */
  push32(0x10019ffcu); f_10017131();
  /* 10019ffc pop ecx */
  ECX = (pop32());
  /* 10019ffd ret  */
  ESPCHK(0x10019ff5u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ffe @ 0x10019ffe (41 bytes, 12 insns) */
void f_10019ffe(void) {
  FTRACE(0x10019ffeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10019ffe push esi */
  push32((uint32_t)(ESI));
  /* 10019fff mov esi, dword ptr [0x1001e094] */
  ESI = (r32((uint32_t)(0x1001e094)));
  /* 1001a005 push dword ptr [0x10020c84] */
  push32((uint32_t)(r32((uint32_t)(0x10020c84))));
  /* 1001a00b call esi */
  call_ind((uint32_t)(ESI), 0x1001a00du);
  /* 1001a00d push dword ptr [0x10020c74] */
  push32((uint32_t)(r32((uint32_t)(0x10020c74))));
  /* 1001a013 call esi */
  call_ind((uint32_t)(ESI), 0x1001a015u);
  /* 1001a015 push dword ptr [0x10020c64] */
  push32((uint32_t)(r32((uint32_t)(0x10020c64))));
  /* 1001a01b call esi */
  call_ind((uint32_t)(ESI), 0x1001a01du);
  /* 1001a01d push dword ptr [0x10020c44] */
  push32((uint32_t)(r32((uint32_t)(0x10020c44))));
  /* 1001a023 call esi */
  call_ind((uint32_t)(ESI), 0x1001a025u);
  /* 1001a025 pop esi */
  ESI = (pop32());
  /* 1001a026 ret  */
  ESPCHK(0x10019ffeu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a027 @ 0x1001a027 (108 bytes, 34 insns) */
void f_1001a027(void) {
  FTRACE(0x1001a027u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001a027 push esi */
  push32((uint32_t)(ESI));
  /* 1001a028 push edi */
  push32((uint32_t)(EDI));
  /* 1001a029 mov edi, dword ptr [0x1001e050] */
  EDI = (r32((uint32_t)(0x1001e050)));
  /* 1001a02f mov esi, 0x10020c40 */
  ESI = (0x10020c40u);
L_1001a034:;
  /* 1001a034 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1001a036 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001a038 je 0x1001a065 */
  if (C.zf) goto L_1001a065;
  /* 1001a03a cmp esi, 0x10020c84 */
  { uint32_t _a=(ESI),_b=(0x10020c84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a040 je 0x1001a065 */
  if (C.zf) goto L_1001a065;
  /* 1001a042 cmp esi, 0x10020c74 */
  { uint32_t _a=(ESI),_b=(0x10020c74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a048 je 0x1001a065 */
  if (C.zf) goto L_1001a065;
  /* 1001a04a cmp esi, 0x10020c64 */
  { uint32_t _a=(ESI),_b=(0x10020c64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a050 je 0x1001a065 */
  if (C.zf) goto L_1001a065;
  /* 1001a052 cmp esi, 0x10020c44 */
  { uint32_t _a=(ESI),_b=(0x10020c44u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a058 je 0x1001a065 */
  if (C.zf) goto L_1001a065;
  /* 1001a05a push eax */
  push32((uint32_t)(EAX));
  /* 1001a05b call edi */
  call_ind((uint32_t)(EDI), 0x1001a05du);
  /* 1001a05d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1001a05f call 0x1001a246 */
  push32(0x1001a064u); f_1001a246();
  /* 1001a064 pop ecx */
  ECX = (pop32());
L_1001a065:;
  /* 1001a065 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001a068 cmp esi, 0x10020d00 */
  { uint32_t _a=(ESI),_b=(0x10020d00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a06e jl 0x1001a034 */
  if ((C.sf!=C.of)) goto L_1001a034;
  /* 1001a070 push dword ptr [0x10020c64] */
  push32((uint32_t)(r32((uint32_t)(0x10020c64))));
  /* 1001a076 call edi */
  call_ind((uint32_t)(EDI), 0x1001a078u);
  /* 1001a078 push dword ptr [0x10020c74] */
  push32((uint32_t)(r32((uint32_t)(0x10020c74))));
  /* 1001a07e call edi */
  call_ind((uint32_t)(EDI), 0x1001a080u);
  /* 1001a080 push dword ptr [0x10020c84] */
  push32((uint32_t)(r32((uint32_t)(0x10020c84))));
  /* 1001a086 call edi */
  call_ind((uint32_t)(EDI), 0x1001a088u);
  /* 1001a088 push dword ptr [0x10020c44] */
  push32((uint32_t)(r32((uint32_t)(0x10020c44))));
  /* 1001a08e call edi */
  call_ind((uint32_t)(EDI), 0x1001a090u);
  /* 1001a090 pop edi */
  EDI = (pop32());
  /* 1001a091 pop esi */
  ESI = (pop32());
  /* 1001a092 ret  */
  ESPCHK(0x1001a027u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a093 @ 0x1001a093 (97 bytes, 37 insns) */
void f_1001a093(void) {
  FTRACE(0x1001a093u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001a093 push ebp */
  push32((uint32_t)(EBP));
  /* 1001a094 mov ebp, esp */
  EBP = (ESP);
  /* 1001a096 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001a099 push esi */
  push32((uint32_t)(ESI));
  /* 1001a09a cmp dword ptr [eax*4 + 0x10020c40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10020c40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a0a2 lea esi, [eax*4 + 0x10020c40] */
  ESI = ((uint32_t)(EAX*4 + 0x10020c40));
  /* 1001a0a9 jne 0x1001a0e9 */
  if (!C.zf) goto L_1001a0e9;
  /* 1001a0ab push edi */
  push32((uint32_t)(EDI));
  /* 1001a0ac push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1001a0ae call 0x1001a32f */
  push32(0x1001a0b3u); f_1001a32f();
  /* 1001a0b3 mov edi, eax */
  EDI = (EAX);
  /* 1001a0b5 pop ecx */
  ECX = (pop32());
  /* 1001a0b6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1001a0b8 jne 0x1001a0c2 */
  if (!C.zf) goto L_1001a0c2;
  /* 1001a0ba push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1001a0bc call 0x10017131 */
  push32(0x1001a0c1u); f_10017131();
  /* 1001a0c1 pop ecx */
  ECX = (pop32());
L_1001a0c2:;
  /* 1001a0c2 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1001a0c4 call 0x1001a093 */
  push32(0x1001a0c9u); f_1001a093();
  /* 1001a0c9 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a0cc pop ecx */
  ECX = (pop32());
  /* 1001a0cd push edi */
  push32((uint32_t)(EDI));
  /* 1001a0ce jne 0x1001a0da */
  if (!C.zf) goto L_1001a0da;
  /* 1001a0d0 call dword ptr [0x1001e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e094))), 0x1001a0d6u);
  /* 1001a0d6 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1001a0d8 jmp 0x1001a0e0 */
  goto L_1001a0e0;
L_1001a0da:;
  /* 1001a0da call 0x1001a246 */
  push32(0x1001a0dfu); f_1001a246();
  /* 1001a0df pop ecx */
  ECX = (pop32());
L_1001a0e0:;
  /* 1001a0e0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1001a0e2 call 0x1001a0f4 */
  push32(0x1001a0e7u); f_1001a0f4();
  /* 1001a0e7 pop ecx */
  ECX = (pop32());
  /* 1001a0e8 pop edi */
  EDI = (pop32());
L_1001a0e9:;
  /* 1001a0e9 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1001a0eb call dword ptr [0x1001e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e00c))), 0x1001a0f1u);
  /* 1001a0f1 pop esi */
  ESI = (pop32());
  /* 1001a0f2 pop ebp */
  EBP = (pop32());
  /* 1001a0f3 ret  */
  ESPCHK(0x1001a093u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0f4 @ 0x1001a0f4 (21 bytes, 7 insns) */
void f_1001a0f4(void) {
  FTRACE(0x1001a0f4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001a0f4 push ebp */
  push32((uint32_t)(EBP));
  /* 1001a0f5 mov ebp, esp */
  EBP = (ESP);
  /* 1001a0f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001a0fa push dword ptr [eax*4 + 0x10020c40] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10020c40))));
  /* 1001a101 call dword ptr [0x1001e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e008))), 0x1001a107u);
  /* 1001a107 pop ebp */
  EBP = (pop32());
  /* 1001a108 ret  */
  ESPCHK(0x1001a0f4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a109 @ 0x1001a109 (289 bytes, 98 insns) */
void f_1001a109(void) {
  FTRACE(0x1001a109u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001a109 push ebp */
  push32((uint32_t)(EBP));
  /* 1001a10a mov ebp, esp */
  EBP = (ESP);
  /* 1001a10c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1001a10e push 0x1001e4d0 */
  push32((uint32_t)(0x1001e4d0u));
  /* 1001a113 push 0x1001d0b0 */
  push32((uint32_t)(0x1001d0b0u));
  /* 1001a118 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1001a11e push eax */
  push32((uint32_t)(EAX));
  /* 1001a11f mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1001a126 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001a129 push ebx */
  push32((uint32_t)(EBX));
  /* 1001a12a push esi */
  push32((uint32_t)(ESI));
  /* 1001a12b push edi */
  push32((uint32_t)(EDI));
  /* 1001a12c mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1001a12f imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1001a133 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1001a136 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 1001a139 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a13c ja 0x1001a152 */
  if ((!C.cf&&!C.zf)) goto L_1001a152;
  /* 1001a13e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1001a140 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a142 jne 0x1001a147 */
  if (!C.zf) goto L_1001a147;
  /* 1001a144 push 1 */
  push32((uint32_t)(0x1u));
  /* 1001a146 pop esi */
  ESI = (pop32());
L_1001a147:;
  /* 1001a147 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001a14a and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1001a14d mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1001a150 jmp 0x1001a154 */
  goto L_1001a154;
L_1001a152:;
  /* 1001a152 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1001a154:;
  /* 1001a154 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 1001a157 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a15a ja 0x1001a208 */
  if ((!C.cf&&!C.zf)) goto L_1001a208;
  /* 1001a160 mov eax, dword ptr [0x10027c48] */
  EAX = (r32((uint32_t)(0x10027c48)));
  /* 1001a165 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a168 jne 0x1001a1ab */
  if (!C.zf) goto L_1001a1ab;
  /* 1001a16a mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 1001a16d cmp edi, dword ptr [0x100269f0] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x100269f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a173 ja 0x1001a1f1 */
  if ((!C.cf&&!C.zf)) goto L_1001a1f1;
  /* 1001a175 push 9 */
  push32((uint32_t)(0x9u));
  /* 1001a177 call 0x1001a093 */
  push32(0x1001a17cu); f_1001a093();
  /* 1001a17c pop ecx */
  ECX = (pop32());
  /* 1001a17d mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1001a180 push edi */
  push32((uint32_t)(EDI));
  /* 1001a181 call 0x1001b31b */
  push32(0x1001a186u); f_1001b31b();
  /* 1001a186 pop ecx */
  ECX = (pop32());
  /* 1001a187 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1001a18a or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1001a18e call 0x1001a1a2 */
  push32(0x1001a193u); f_1001a1a2();
  /* 1001a193 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a196 je 0x1001a1f6 */
  if (C.zf) goto L_1001a1f6;
  /* 1001a198 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1001a19b jmp 0x1001a1e5 */
  goto L_1001a1e5;
  /* 1001a19d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1001a19f mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1001a1a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 1001a1a4 call 0x1001a0f4 */
  push32(0x1001a1a9u); f_1001a0f4();
  /* 1001a1a9 pop ecx */
  ECX = (pop32());
  /* 1001a1aa ret  */
  ESPCHK(0x1001a109u, _esp0);
  ESP += 4; return;
L_1001a1ab:;
  /* 1001a1ab cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a1ae jne 0x1001a1f1 */
  if (!C.zf) goto L_1001a1f1;
  /* 1001a1b0 cmp esi, dword ptr [0x10022ea4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10022ea4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a1b6 ja 0x1001a1f1 */
  if ((!C.cf&&!C.zf)) goto L_1001a1f1;
  /* 1001a1b8 push 9 */
  push32((uint32_t)(0x9u));
  /* 1001a1ba call 0x1001a093 */
  push32(0x1001a1bfu); f_1001a093();
  /* 1001a1bf pop ecx */
  ECX = (pop32());
  /* 1001a1c0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1001a1c7 mov eax, esi */
  EAX = (ESI);
  /* 1001a1c9 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1001a1cc push eax */
  push32((uint32_t)(EAX));
  /* 1001a1cd call 0x1001bac8 */
  push32(0x1001a1d2u); f_1001bac8();
  /* 1001a1d2 pop ecx */
  ECX = (pop32());
  /* 1001a1d3 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1001a1d6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1001a1da call 0x1001a22b */
  push32(0x1001a1dfu); f_1001a22b();
  /* 1001a1df cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a1e2 je 0x1001a1f6 */
  if (C.zf) goto L_1001a1f6;
  /* 1001a1e4 push esi */
  push32((uint32_t)(ESI));
L_1001a1e5:;
  /* 1001a1e5 push ebx */
  push32((uint32_t)(EBX));
  /* 1001a1e6 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1001a1e9 call 0x10019c60 */
  push32(0x1001a1eeu); f_10019c60();
  /* 1001a1ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001a1f1:;
  /* 1001a1f1 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a1f4 jne 0x1001a234 */
  if (!C.zf) { jmp_ind(0x1001a234u); return; }
L_1001a1f6:;
  /* 1001a1f6 push esi */
  push32((uint32_t)(ESI));
  /* 1001a1f7 push 8 */
  push32((uint32_t)(0x8u));
  /* 1001a1f9 push dword ptr [0x10027c44] */
  push32((uint32_t)(r32((uint32_t)(0x10027c44))));
  /* 1001a1ff call dword ptr [0x1001e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e098))), 0x1001a205u);
  /* 1001a205 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1001a208:;
  /* 1001a208 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a20b jne 0x1001a234 */
  if (!C.zf) { jmp_ind(0x1001a234u); return; }
  /* 1001a20d cmp dword ptr [0x10026890], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10026890))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a213 je 0x1001a234 */
  if (C.zf) { jmp_ind(0x1001a234u); return; }
  /* 1001a215 push esi */
  push32((uint32_t)(ESI));
  /* 1001a216 call 0x1001cf9a */
  push32(0x1001a21bu); f_1001cf9a();
  /* 1001a21b pop ecx */
  ECX = (pop32());
  /* 1001a21c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001a21e jne 0x1001a154 */
  if (!C.zf) goto L_1001a154;
  /* 1001a224 jmp 0x1001a237 */
  jmp_ind(0x1001a237u); return;
  /* 1001a226 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_1000a1a2 @ 0x1001a1a2 (9 bytes, 4 insns) */
void f_1001a1a2(void) {
  FTRACE(0x1001a1a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001a1a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 1001a1a4 call 0x1001a0f4 */
  push32(0x1001a1a9u); f_1001a0f4();
  /* 1001a1a9 pop ecx */
  ECX = (pop32());
  /* 1001a1aa ret  */
  ESPCHK(0x1001a1a2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a22b @ 0x1001a22b (9 bytes, 4 insns) */
void f_1001a22b(void) {
  FTRACE(0x1001a22bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001a22b push 9 */
  push32((uint32_t)(0x9u));
  /* 1001a22d call 0x1001a0f4 */
  push32(0x1001a232u); f_1001a0f4();
  /* 1001a232 pop ecx */
  ECX = (pop32());
  /* 1001a233 ret  */
  ESPCHK(0x1001a22bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a246 @ 0x1001a246 (215 bytes, 75 insns) */
void f_1001a246(void) {
  FTRACE(0x1001a246u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001a246 push ebp */
  push32((uint32_t)(EBP));
  /* 1001a247 mov ebp, esp */
  EBP = (ESP);
  /* 1001a249 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1001a24b push 0x1001e4e8 */
  push32((uint32_t)(0x1001e4e8u));
  /* 1001a250 push 0x1001d0b0 */
  push32((uint32_t)(0x1001d0b0u));
  /* 1001a255 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1001a25b push eax */
  push32((uint32_t)(EAX));
  /* 1001a25c mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1001a263 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001a266 push ebx */
  push32((uint32_t)(EBX));
  /* 1001a267 push esi */
  push32((uint32_t)(ESI));
  /* 1001a268 push edi */
  push32((uint32_t)(EDI));
  /* 1001a269 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1001a26c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1001a26e je 0x1001a320 */
  if (C.zf) { jmp_ind(0x1001a320u); return; }
  /* 1001a274 mov eax, dword ptr [0x10027c48] */
  EAX = (r32((uint32_t)(0x10027c48)));
  /* 1001a279 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a27c jne 0x1001a2b9 */
  if (!C.zf) goto L_1001a2b9;
  /* 1001a27e push 9 */
  push32((uint32_t)(0x9u));
  /* 1001a280 call 0x1001a093 */
  push32(0x1001a285u); f_1001a093();
  /* 1001a285 pop ecx */
  ECX = (pop32());
  /* 1001a286 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1001a28a push esi */
  push32((uint32_t)(ESI));
  /* 1001a28b call 0x1001afc7 */
  push32(0x1001a290u); f_1001afc7();
  /* 1001a290 pop ecx */
  ECX = (pop32());
  /* 1001a291 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1001a294 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001a296 je 0x1001a2a1 */
  if (C.zf) goto L_1001a2a1;
  /* 1001a298 push esi */
  push32((uint32_t)(ESI));
  /* 1001a299 push eax */
  push32((uint32_t)(EAX));
  /* 1001a29a call 0x1001aff2 */
  push32(0x1001a29fu); f_1001aff2();
  /* 1001a29f pop ecx */
  ECX = (pop32());
  /* 1001a2a0 pop ecx */
  ECX = (pop32());
L_1001a2a1:;
  /* 1001a2a1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1001a2a5 call 0x1001a2b0 */
  push32(0x1001a2aau); f_1001a2b0();
  /* 1001a2aa cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a2ae jmp 0x1001a301 */
  goto L_1001a301;
  /* 1001a2b0 push 9 */
  push32((uint32_t)(0x9u));
  /* 1001a2b2 call 0x1001a0f4 */
  push32(0x1001a2b7u); f_1001a0f4();
  /* 1001a2b7 pop ecx */
  ECX = (pop32());
  /* 1001a2b8 ret  */
  ESPCHK(0x1001a246u, _esp0);
  ESP += 4; return;
L_1001a2b9:;
  /* 1001a2b9 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a2bc jne 0x1001a311 */
  if (!C.zf) goto L_1001a311;
  /* 1001a2be push 9 */
  push32((uint32_t)(0x9u));
  /* 1001a2c0 call 0x1001a093 */
  push32(0x1001a2c5u); f_1001a093();
  /* 1001a2c5 pop ecx */
  ECX = (pop32());
  /* 1001a2c6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1001a2cd lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1001a2d0 push eax */
  push32((uint32_t)(EAX));
  /* 1001a2d1 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 1001a2d4 push eax */
  push32((uint32_t)(EAX));
  /* 1001a2d5 push esi */
  push32((uint32_t)(ESI));
  /* 1001a2d6 call 0x1001ba2c */
  push32(0x1001a2dbu); f_1001ba2c();
  /* 1001a2db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001a2de mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1001a2e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001a2e3 je 0x1001a2f4 */
  if (C.zf) goto L_1001a2f4;
  /* 1001a2e5 push eax */
  push32((uint32_t)(EAX));
  /* 1001a2e6 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1001a2e9 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 1001a2ec call 0x1001ba83 */
  push32(0x1001a2f1u); f_1001ba83();
  /* 1001a2f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001a2f4:;
  /* 1001a2f4 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1001a2f8 call 0x1001a308 */
  push32(0x1001a2fdu); f_1001a308();
  /* 1001a2fd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1001a301:;
  /* 1001a301 jne 0x1001a320 */
  if (!C.zf) { jmp_ind(0x1001a320u); return; }
  /* 1001a303 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1001a306 jmp 0x1001a312 */
  goto L_1001a312;
  /* 1001a308 push 9 */
  push32((uint32_t)(0x9u));
  /* 1001a30a call 0x1001a0f4 */
  push32(0x1001a30fu); f_1001a0f4();
  /* 1001a30f pop ecx */
  ECX = (pop32());
  /* 1001a310 ret  */
  ESPCHK(0x1001a246u, _esp0);
  ESP += 4; return;
L_1001a311:;
  /* 1001a311 push esi */
  push32((uint32_t)(ESI));
L_1001a312:;
  /* 1001a312 push 0 */
  push32((uint32_t)(0x0u));
  /* 1001a314 push dword ptr [0x10027c44] */
  push32((uint32_t)(r32((uint32_t)(0x10027c44))));
}

/* FUN_1000a2b0 @ 0x1001a2b0 (9 bytes, 4 insns) */
void f_1001a2b0(void) {
  FTRACE(0x1001a2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001a2b0 push 9 */
  push32((uint32_t)(0x9u));
  /* 1001a2b2 call 0x1001a0f4 */
  push32(0x1001a2b7u); f_1001a0f4();
  /* 1001a2b7 pop ecx */
  ECX = (pop32());
  /* 1001a2b8 ret  */
  ESPCHK(0x1001a2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a308 @ 0x1001a308 (9 bytes, 4 insns) */
void f_1001a308(void) {
  FTRACE(0x1001a308u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001a308 push 9 */
  push32((uint32_t)(0x9u));
  /* 1001a30a call 0x1001a0f4 */
  push32(0x1001a30fu); f_1001a0f4();
  /* 1001a30f pop ecx */
  ECX = (pop32());
  /* 1001a310 ret  */
  ESPCHK(0x1001a308u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x1001a32f (18 bytes, 6 insns) */
void f_1001a32f(void) {
  FTRACE(0x1001a32fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001a32f push dword ptr [0x10026890] */
  push32((uint32_t)(r32((uint32_t)(0x10026890))));
  /* 1001a335 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1001a339 call 0x1001a341 */
  push32(0x1001a33eu); f_1001a341();
  /* 1001a33e pop ecx */
  ECX = (pop32());
  /* 1001a33f pop ecx */
  ECX = (pop32());
  /* 1001a340 ret  */
  ESPCHK(0x1001a32fu, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x1001a341 (44 bytes, 16 insns) */
void f_1001a341(void) {
  FTRACE(0x1001a341u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001a341 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a346 ja 0x1001a36a */
  if ((!C.cf&&!C.zf)) goto L_1001a36a;
L_1001a348:;
  /* 1001a348 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1001a34c call 0x1001a36d */
  push32(0x1001a351u); f_1001a36d();
  /* 1001a351 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001a353 pop ecx */
  ECX = (pop32());
  /* 1001a354 jne 0x1001a36c */
  if (!C.zf) goto L_1001a36c;
  /* 1001a356 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a35a je 0x1001a36c */
  if (C.zf) goto L_1001a36c;
  /* 1001a35c push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1001a360 call 0x1001cf9a */
  push32(0x1001a365u); f_1001cf9a();
  /* 1001a365 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001a367 pop ecx */
  ECX = (pop32());
  /* 1001a368 jne 0x1001a348 */
  if (!C.zf) goto L_1001a348;
L_1001a36a:;
  /* 1001a36a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1001a36c:;
  /* 1001a36c ret  */
  ESPCHK(0x1001a341u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a36d @ 0x1001a36d (231 bytes, 81 insns) */
void f_1001a36d(void) {
  FTRACE(0x1001a36du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001a36d push ebp */
  push32((uint32_t)(EBP));
  /* 1001a36e mov ebp, esp */
  EBP = (ESP);
  /* 1001a370 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1001a372 push 0x1001e500 */
  push32((uint32_t)(0x1001e500u));
  /* 1001a377 push 0x1001d0b0 */
  push32((uint32_t)(0x1001d0b0u));
  /* 1001a37c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1001a382 push eax */
  push32((uint32_t)(EAX));
  /* 1001a383 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1001a38a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001a38d push ebx */
  push32((uint32_t)(EBX));
  /* 1001a38e push esi */
  push32((uint32_t)(ESI));
  /* 1001a38f push edi */
  push32((uint32_t)(EDI));
  /* 1001a390 mov eax, dword ptr [0x10027c48] */
  EAX = (r32((uint32_t)(0x10027c48)));
  /* 1001a395 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a398 jne 0x1001a3dd */
  if (!C.zf) goto L_1001a3dd;
  /* 1001a39a mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1001a39d cmp esi, dword ptr [0x100269f0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100269f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a3a3 ja 0x1001a43c */
  if ((!C.cf&&!C.zf)) goto L_1001a43c;
  /* 1001a3a9 push 9 */
  push32((uint32_t)(0x9u));
  /* 1001a3ab call 0x1001a093 */
  push32(0x1001a3b0u); f_1001a093();
  /* 1001a3b0 pop ecx */
  ECX = (pop32());
  /* 1001a3b1 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1001a3b5 push esi */
  push32((uint32_t)(ESI));
  /* 1001a3b6 call 0x1001b31b */
  push32(0x1001a3bbu); f_1001b31b();
  /* 1001a3bb pop ecx */
  ECX = (pop32());
  /* 1001a3bc mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1001a3bf or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1001a3c3 call 0x1001a3d4 */
  push32(0x1001a3c8u); f_1001a3d4();
  /* 1001a3c8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1001a3cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001a3cd je 0x1001a43c */
  if (C.zf) goto L_1001a43c;
  /* 1001a3cf jmp 0x1001a45a */
  jmp_ind(0x1001a45au); return;
  /* 1001a3d4 push 9 */
  push32((uint32_t)(0x9u));
  /* 1001a3d6 call 0x1001a0f4 */
  push32(0x1001a3dbu); f_1001a0f4();
  /* 1001a3db pop ecx */
  ECX = (pop32());
  /* 1001a3dc ret  */
  ESPCHK(0x1001a36du, _esp0);
  ESP += 4; return;
L_1001a3dd:;
  /* 1001a3dd cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a3e0 jne 0x1001a43c */
  if (!C.zf) goto L_1001a43c;
  /* 1001a3e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001a3e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001a3e7 je 0x1001a3f1 */
  if (C.zf) goto L_1001a3f1;
  /* 1001a3e9 lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 1001a3ec and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1001a3ef jmp 0x1001a3f4 */
  goto L_1001a3f4;
L_1001a3f1:;
  /* 1001a3f1 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1001a3f3 pop esi */
  ESI = (pop32());
L_1001a3f4:;
  /* 1001a3f4 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 1001a3f7 cmp esi, dword ptr [0x10022ea4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10022ea4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a3fd ja 0x1001a42d */
  if ((!C.cf&&!C.zf)) goto L_1001a42d;
  /* 1001a3ff push 9 */
  push32((uint32_t)(0x9u));
  /* 1001a401 call 0x1001a093 */
  push32(0x1001a406u); f_1001a093();
  /* 1001a406 pop ecx */
  ECX = (pop32());
  /* 1001a407 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1001a40e mov eax, esi */
  EAX = (ESI);
  /* 1001a410 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1001a413 push eax */
  push32((uint32_t)(EAX));
  /* 1001a414 call 0x1001bac8 */
  push32(0x1001a419u); f_1001bac8();
  /* 1001a419 pop ecx */
  ECX = (pop32());
  /* 1001a41a mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1001a41d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1001a421 call 0x1001a433 */
  push32(0x1001a426u); f_1001a433();
  /* 1001a426 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1001a429 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001a42b jne 0x1001a45a */
  if (!C.zf) { jmp_ind(0x1001a45au); return; }
L_1001a42d:;
  /* 1001a42d push esi */
  push32((uint32_t)(ESI));
  /* 1001a42e jmp 0x1001a44c */
  goto L_1001a44c;
  /* 1001a430 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1001a433 push 9 */
  push32((uint32_t)(0x9u));
  /* 1001a435 call 0x1001a0f4 */
  push32(0x1001a43au); f_1001a0f4();
  /* 1001a43a pop ecx */
  ECX = (pop32());
  /* 1001a43b ret  */
  ESPCHK(0x1001a36du, _esp0);
  ESP += 4; return;
L_1001a43c:;
  /* 1001a43c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001a43f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001a441 jne 0x1001a446 */
  if (!C.zf) goto L_1001a446;
  /* 1001a443 push 1 */
  push32((uint32_t)(0x1u));
  /* 1001a445 pop eax */
  EAX = (pop32());
L_1001a446:;
  /* 1001a446 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001a449 and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1001a44b push eax */
  push32((uint32_t)(EAX));
L_1001a44c:;
  /* 1001a44c push 0 */
  push32((uint32_t)(0x0u));
  /* 1001a44e push dword ptr [0x10027c44] */
  push32((uint32_t)(r32((uint32_t)(0x10027c44))));
}

/* FUN_1000a3d4 @ 0x1001a3d4 (9 bytes, 4 insns) */
void f_1001a3d4(void) {
  FTRACE(0x1001a3d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001a3d4 push 9 */
  push32((uint32_t)(0x9u));
  /* 1001a3d6 call 0x1001a0f4 */
  push32(0x1001a3dbu); f_1001a0f4();
  /* 1001a3db pop ecx */
  ECX = (pop32());
  /* 1001a3dc ret  */
  ESPCHK(0x1001a3d4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a433 @ 0x1001a433 (9 bytes, 4 insns) */
void f_1001a433(void) {
  FTRACE(0x1001a433u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001a433 push 9 */
  push32((uint32_t)(0x9u));
  /* 1001a435 call 0x1001a0f4 */
  push32(0x1001a43au); f_1001a0f4();
  /* 1001a43a pop ecx */
  ECX = (pop32());
  /* 1001a43b ret  */
  ESPCHK(0x1001a433u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a469 @ 0x1001a469 (429 bytes, 143 insns) */
void f_1001a469(void) {
  FTRACE(0x1001a469u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001a469 push ebp */
  push32((uint32_t)(EBP));
  /* 1001a46a mov ebp, esp */
  EBP = (ESP);
  /* 1001a46c sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001a46f push ebx */
  push32((uint32_t)(EBX));
  /* 1001a470 push esi */
  push32((uint32_t)(ESI));
  /* 1001a471 push edi */
  push32((uint32_t)(EDI));
  /* 1001a472 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1001a474 call 0x1001a093 */
  push32(0x1001a479u); f_1001a093();
  /* 1001a479 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1001a47c call 0x1001a616 */
  push32(0x1001a481u); f_1001a616();
  /* 1001a481 mov ebx, eax */
  EBX = (EAX);
  /* 1001a483 pop ecx */
  ECX = (pop32());
  /* 1001a484 cmp ebx, dword ptr [0x100269f4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x100269f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a48a pop ecx */
  ECX = (pop32());
  /* 1001a48b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1001a48e jne 0x1001a497 */
  if (!C.zf) goto L_1001a497;
L_1001a490:;
  /* 1001a490 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1001a492 jmp 0x1001a607 */
  goto L_1001a607;
L_1001a497:;
  /* 1001a497 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1001a499 je 0x1001a5f5 */
  if (C.zf) goto L_1001a5f5;
  /* 1001a49f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1001a4a1 mov eax, 0x10020d90 */
  EAX = (0x10020d90u);
L_1001a4a6:;
  /* 1001a4a6 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a4a8 je 0x1001a51e */
  if (C.zf) goto L_1001a51e;
  /* 1001a4aa add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001a4ad inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1001a4ae cmp eax, 0x10020e80 */
  { uint32_t _a=(EAX),_b=(0x10020e80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a4b3 jl 0x1001a4a6 */
  if ((C.sf!=C.of)) goto L_1001a4a6;
  /* 1001a4b5 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1001a4b8 push eax */
  push32((uint32_t)(EAX));
  /* 1001a4b9 push ebx */
  push32((uint32_t)(EBX));
  /* 1001a4ba call dword ptr [0x1001e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e09c))), 0x1001a4c0u);
  /* 1001a4c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1001a4c2 pop esi */
  ESI = (pop32());
  /* 1001a4c3 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a4c5 jne 0x1001a5ec */
  if (!C.zf) goto L_1001a5ec;
  /* 1001a4cb push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1001a4cd and dword ptr [0x10026c24], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10026c24)))&(0x0u); w32((uint32_t)(0x10026c24), (_r)); fl_logic(_r,32); }
  /* 1001a4d4 pop ecx */
  ECX = (pop32());
  /* 1001a4d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001a4d7 mov edi, 0x10026b20 */
  EDI = (0x10026b20u);
  /* 1001a4dc cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a4df rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1001a4e1 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1001a4e2 mov dword ptr [0x100269f4], ebx */
  w32((uint32_t)(0x100269f4), (EBX));
  /* 1001a4e8 jbe 0x1001a5d9 */
  if ((C.cf||C.zf)) goto L_1001a5d9;
  /* 1001a4ee cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001a4f2 je 0x1001a5b4 */
  if (C.zf) goto L_1001a5b4;
  /* 1001a4f8 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_1001a4fb:;
  /* 1001a4fb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1001a4fd test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1001a4ff je 0x1001a5b4 */
  if (C.zf) goto L_1001a5b4;
  /* 1001a505 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 1001a509 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_1001a50c:;
  /* 1001a50c cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a50e ja 0x1001a5a8 */
  if ((!C.cf&&!C.zf)) goto L_1001a5a8;
  /* 1001a514 or byte ptr [eax + 0x10026b21], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10026b21)))|(0x4u); w8((uint32_t)(EAX + 0x10026b21), (_r)); fl_logic(_r,8); }
  /* 1001a51b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1001a51c jmp 0x1001a50c */
  goto L_1001a50c;
L_1001a51e:;
  /* 1001a51e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1001a522 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1001a524 pop ecx */
  ECX = (pop32());
  /* 1001a525 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001a527 mov edi, 0x10026b20 */
  EDI = (0x10026b20u);
  /* 1001a52c lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 1001a52f rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1001a531 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1001a534 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1001a535 lea ebx, [esi + 0x10020da0] */
  EBX = ((uint32_t)(ESI + 0x10020da0));
L_1001a53b:;
  /* 1001a53b cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001a53e mov ecx, ebx */
  ECX = (EBX);
  /* 1001a540 je 0x1001a56e */
  if (C.zf) goto L_1001a56e;
L_1001a542:;
  /* 1001a542 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1001a545 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1001a547 je 0x1001a56e */
  if (C.zf) goto L_1001a56e;
  /* 1001a549 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1001a54c movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 1001a54f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a551 ja 0x1001a567 */
  if ((!C.cf&&!C.zf)) goto L_1001a567;
  /* 1001a553 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1001a556 mov dl, byte ptr [edx + 0x10020d88] */
  DL = (r8((uint32_t)(EDX + 0x10020d88)));
L_1001a55c:;
  /* 1001a55c or byte ptr [eax + 0x10026b21], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10026b21)))|(DL); w8((uint32_t)(EAX + 0x10026b21), (_r)); fl_logic(_r,8); }
  /* 1001a562 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1001a563 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a565 jbe 0x1001a55c */
  if ((C.cf||C.zf)) goto L_1001a55c;
L_1001a567:;
  /* 1001a567 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1001a568 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1001a569 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001a56c jne 0x1001a542 */
  if (!C.zf) goto L_1001a542;
L_1001a56e:;
  /* 1001a56e inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1001a571 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001a574 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a578 jb 0x1001a53b */
  if (C.cf) goto L_1001a53b;
  /* 1001a57a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001a57d mov dword ptr [0x10026a0c], 1 */
  w32((uint32_t)(0x10026a0c), (0x1u));
  /* 1001a587 push eax */
  push32((uint32_t)(EAX));
  /* 1001a588 mov dword ptr [0x100269f4], eax */
  w32((uint32_t)(0x100269f4), (EAX));
  /* 1001a58d call 0x1001a660 */
  push32(0x1001a592u); f_1001a660();
  /* 1001a592 lea esi, [esi + 0x10020d94] */
  ESI = ((uint32_t)(ESI + 0x10020d94));
  /* 1001a598 mov edi, 0x10026a00 */
  EDI = (0x10026a00u);
  /* 1001a59d movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1001a59e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1001a59f pop ecx */
  ECX = (pop32());
  /* 1001a5a0 mov dword ptr [0x10026c24], eax */
  w32((uint32_t)(0x10026c24), (EAX));
  /* 1001a5a5 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1001a5a6 jmp 0x1001a5fa */
  goto L_1001a5fa;
L_1001a5a8:;
  /* 1001a5a8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1001a5a9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1001a5aa cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001a5ae jne 0x1001a4fb */
  if (!C.zf) goto L_1001a4fb;
L_1001a5b4:;
  /* 1001a5b4 mov eax, esi */
  EAX = (ESI);
L_1001a5b6:;
  /* 1001a5b6 or byte ptr [eax + 0x10026b21], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10026b21)))|(0x8u); w8((uint32_t)(EAX + 0x10026b21), (_r)); fl_logic(_r,8); }
  /* 1001a5bd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1001a5be cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a5c3 jb 0x1001a5b6 */
  if (C.cf) goto L_1001a5b6;
  /* 1001a5c5 push ebx */
  push32((uint32_t)(EBX));
  /* 1001a5c6 call 0x1001a660 */
  push32(0x1001a5cbu); f_1001a660();
  /* 1001a5cb pop ecx */
  ECX = (pop32());
  /* 1001a5cc mov dword ptr [0x10026c24], eax */
  w32((uint32_t)(0x10026c24), (EAX));
  /* 1001a5d1 mov dword ptr [0x10026a0c], esi */
  w32((uint32_t)(0x10026a0c), (ESI));
  /* 1001a5d7 jmp 0x1001a5e0 */
  goto L_1001a5e0;
L_1001a5d9:;
  /* 1001a5d9 and dword ptr [0x10026a0c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10026a0c)))&(0x0u); w32((uint32_t)(0x10026a0c), (_r)); fl_logic(_r,32); }
L_1001a5e0:;
  /* 1001a5e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001a5e2 mov edi, 0x10026a00 */
  EDI = (0x10026a00u);
  /* 1001a5e7 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1001a5e8 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1001a5e9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1001a5ea jmp 0x1001a5fa */
  goto L_1001a5fa;
L_1001a5ec:;
  /* 1001a5ec cmp dword ptr [0x10026830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10026830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a5f3 je 0x1001a604 */
  if (C.zf) goto L_1001a604;
L_1001a5f5:;
  /* 1001a5f5 call 0x1001a693 */
  push32(0x1001a5fau); f_1001a693();
L_1001a5fa:;
  /* 1001a5fa call 0x1001a6bc */
  push32(0x1001a5ffu); f_1001a6bc();
  /* 1001a5ff jmp 0x1001a490 */
  goto L_1001a490;
L_1001a604:;
  /* 1001a604 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_1001a607:;
  /* 1001a607 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1001a609 call 0x1001a0f4 */
  push32(0x1001a60eu); f_1001a0f4();
  /* 1001a60e pop ecx */
  ECX = (pop32());
  /* 1001a60f mov eax, esi */
  EAX = (ESI);
  /* 1001a611 pop edi */
  EDI = (pop32());
  /* 1001a612 pop esi */
  ESI = (pop32());
  /* 1001a613 pop ebx */
  EBX = (pop32());
  /* 1001a614 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001a615 ret  */
  ESPCHK(0x1001a469u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a616 @ 0x1001a616 (74 bytes, 15 insns) */
void f_1001a616(void) {
  FTRACE(0x1001a616u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001a616 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1001a61a and dword ptr [0x10026830], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10026830)))&(0x0u); w32((uint32_t)(0x10026830), (_r)); fl_logic(_r,32); }
  /* 1001a621 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a624 jne 0x1001a636 */
  if (!C.zf) goto L_1001a636;
  /* 1001a626 mov dword ptr [0x10026830], 1 */
  w32((uint32_t)(0x10026830), (0x1u));
  /* 1001a630 jmp dword ptr [0x1001e0a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1001e0a4)))); return;
L_1001a636:;
  /* 1001a636 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a639 jne 0x1001a64b */
  if (!C.zf) goto L_1001a64b;
  /* 1001a63b mov dword ptr [0x10026830], 1 */
  w32((uint32_t)(0x10026830), (0x1u));
  /* 1001a645 jmp dword ptr [0x1001e0a0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1001e0a0)))); return;
L_1001a64b:;
  /* 1001a64b cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a64e jne 0x1001a65f */
  if (!C.zf) goto L_1001a65f;
  /* 1001a650 mov eax, dword ptr [0x10026868] */
  EAX = (r32((uint32_t)(0x10026868)));
  /* 1001a655 mov dword ptr [0x10026830], 1 */
  w32((uint32_t)(0x10026830), (0x1u));
L_1001a65f:;
  /* 1001a65f ret  */
  ESPCHK(0x1001a616u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a660 @ 0x1001a660 (51 bytes, 19 insns) */
void f_1001a660(void) {
  FTRACE(0x1001a660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001a660 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1001a664 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001a669 je 0x1001a68d */
  if (C.zf) goto L_1001a68d;
  /* 1001a66b sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001a66e je 0x1001a687 */
  if (C.zf) goto L_1001a687;
  /* 1001a670 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001a673 je 0x1001a681 */
  if (C.zf) goto L_1001a681;
  /* 1001a675 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1001a676 je 0x1001a67b */
  if (C.zf) goto L_1001a67b;
  /* 1001a678 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001a67a ret  */
  ESPCHK(0x1001a660u, _esp0);
  ESP += 4; return;
L_1001a67b:;
  /* 1001a67b mov eax, 0x404 */
  EAX = (0x404u);
  /* 1001a680 ret  */
  ESPCHK(0x1001a660u, _esp0);
  ESP += 4; return;
L_1001a681:;
  /* 1001a681 mov eax, 0x412 */
  EAX = (0x412u);
  /* 1001a686 ret  */
  ESPCHK(0x1001a660u, _esp0);
  ESP += 4; return;
L_1001a687:;
  /* 1001a687 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1001a68c ret  */
  ESPCHK(0x1001a660u, _esp0);
  ESP += 4; return;
L_1001a68d:;
  /* 1001a68d mov eax, 0x411 */
  EAX = (0x411u);
  /* 1001a692 ret  */
  ESPCHK(0x1001a660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a693 @ 0x1001a693 (41 bytes, 17 insns) */
void f_1001a693(void) {
  FTRACE(0x1001a693u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001a693 push edi */
  push32((uint32_t)(EDI));
  /* 1001a694 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1001a696 pop ecx */
  ECX = (pop32());
  /* 1001a697 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001a699 mov edi, 0x10026b20 */
  EDI = (0x10026b20u);
  /* 1001a69e rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1001a6a0 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1001a6a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001a6a3 mov edi, 0x10026a00 */
  EDI = (0x10026a00u);
  /* 1001a6a8 mov dword ptr [0x100269f4], eax */
  w32((uint32_t)(0x100269f4), (EAX));
  /* 1001a6ad mov dword ptr [0x10026a0c], eax */
  w32((uint32_t)(0x10026a0c), (EAX));
  /* 1001a6b2 mov dword ptr [0x10026c24], eax */
  w32((uint32_t)(0x10026c24), (EAX));
  /* 1001a6b7 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1001a6b8 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1001a6b9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1001a6ba pop edi */
  EDI = (pop32());
  /* 1001a6bb ret  */
  ESPCHK(0x1001a693u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6bc @ 0x1001a6bc (389 bytes, 124 insns) */
void f_1001a6bc(void) {
  FTRACE(0x1001a6bcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001a6bc push ebp */
  push32((uint32_t)(EBP));
  /* 1001a6bd mov ebp, esp */
  EBP = (ESP);
  /* 1001a6bf sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001a6c5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1001a6c8 push esi */
  push32((uint32_t)(ESI));
  /* 1001a6c9 push eax */
  push32((uint32_t)(EAX));
  /* 1001a6ca push dword ptr [0x100269f4] */
  push32((uint32_t)(r32((uint32_t)(0x100269f4))));
  /* 1001a6d0 call dword ptr [0x1001e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e09c))), 0x1001a6d6u);
  /* 1001a6d6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a6d9 jne 0x1001a7f5 */
  if (!C.zf) goto L_1001a7f5;
  /* 1001a6df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001a6e1 mov esi, 0x100 */
  ESI = (0x100u);
L_1001a6e6:;
  /* 1001a6e6 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 1001a6ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1001a6ee cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a6f0 jb 0x1001a6e6 */
  if (C.cf) goto L_1001a6e6;
  /* 1001a6f2 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 1001a6f5 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 1001a6fc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001a6fe je 0x1001a737 */
  if (C.zf) goto L_1001a737;
  /* 1001a700 push ebx */
  push32((uint32_t)(EBX));
  /* 1001a701 push edi */
  push32((uint32_t)(EDI));
  /* 1001a702 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_1001a705:;
  /* 1001a705 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 1001a708 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1001a70b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a70d ja 0x1001a72c */
  if ((!C.cf&&!C.zf)) goto L_1001a72c;
  /* 1001a70f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001a711 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 1001a718 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1001a719 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 1001a71e mov ebx, ecx */
  EBX = (ECX);
  /* 1001a720 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1001a723 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1001a725 mov ecx, ebx */
  ECX = (EBX);
  /* 1001a727 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1001a72a rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_1001a72c:;
  /* 1001a72c inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1001a72d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1001a72e mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 1001a731 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001a733 jne 0x1001a705 */
  if (!C.zf) goto L_1001a705;
  /* 1001a735 pop edi */
  EDI = (pop32());
  /* 1001a736 pop ebx */
  EBX = (pop32());
L_1001a737:;
  /* 1001a737 push 0 */
  push32((uint32_t)(0x0u));
  /* 1001a739 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 1001a73f push dword ptr [0x10026c24] */
  push32((uint32_t)(r32((uint32_t)(0x10026c24))));
  /* 1001a745 push dword ptr [0x100269f4] */
  push32((uint32_t)(r32((uint32_t)(0x100269f4))));
  /* 1001a74b push eax */
  push32((uint32_t)(EAX));
  /* 1001a74c lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1001a752 push esi */
  push32((uint32_t)(ESI));
  /* 1001a753 push eax */
  push32((uint32_t)(EAX));
  /* 1001a754 push 1 */
  push32((uint32_t)(0x1u));
  /* 1001a756 call 0x1001c2fd */
  push32(0x1001a75bu); f_1001c2fd();
  /* 1001a75b push 0 */
  push32((uint32_t)(0x0u));
  /* 1001a75d lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 1001a763 push dword ptr [0x100269f4] */
  push32((uint32_t)(r32((uint32_t)(0x100269f4))));
  /* 1001a769 push esi */
  push32((uint32_t)(ESI));
  /* 1001a76a push eax */
  push32((uint32_t)(EAX));
  /* 1001a76b lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1001a771 push esi */
  push32((uint32_t)(ESI));
  /* 1001a772 push eax */
  push32((uint32_t)(EAX));
  /* 1001a773 push esi */
  push32((uint32_t)(ESI));
  /* 1001a774 push dword ptr [0x10026c24] */
  push32((uint32_t)(r32((uint32_t)(0x10026c24))));
  /* 1001a77a call 0x1001c446 */
  push32(0x1001a77fu); f_1001c446();
  /* 1001a77f push 0 */
  push32((uint32_t)(0x0u));
  /* 1001a781 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 1001a787 push dword ptr [0x100269f4] */
  push32((uint32_t)(r32((uint32_t)(0x100269f4))));
  /* 1001a78d push esi */
  push32((uint32_t)(ESI));
  /* 1001a78e push eax */
  push32((uint32_t)(EAX));
  /* 1001a78f lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1001a795 push esi */
  push32((uint32_t)(ESI));
  /* 1001a796 push eax */
  push32((uint32_t)(EAX));
  /* 1001a797 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1001a79c push dword ptr [0x10026c24] */
  push32((uint32_t)(r32((uint32_t)(0x10026c24))));
  /* 1001a7a2 call 0x1001c446 */
  push32(0x1001a7a7u); f_1001c446();
  /* 1001a7a7 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001a7aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001a7ac lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_1001a7b2:;
  /* 1001a7b2 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1001a7b5 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1001a7b8 je 0x1001a7d0 */
  if (C.zf) goto L_1001a7d0;
  /* 1001a7ba or byte ptr [eax + 0x10026b21], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10026b21)))|(0x10u); w8((uint32_t)(EAX + 0x10026b21), (_r)); fl_logic(_r,8); }
  /* 1001a7c1 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_1001a7c8:;
  /* 1001a7c8 mov byte ptr [eax + 0x10026a20], dl */
  w8((uint32_t)(EAX + 0x10026a20), (DL));
  /* 1001a7ce jmp 0x1001a7ec */
  goto L_1001a7ec;
L_1001a7d0:;
  /* 1001a7d0 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 1001a7d3 je 0x1001a7e5 */
  if (C.zf) goto L_1001a7e5;
  /* 1001a7d5 or byte ptr [eax + 0x10026b21], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10026b21)))|(0x20u); w8((uint32_t)(EAX + 0x10026b21), (_r)); fl_logic(_r,8); }
  /* 1001a7dc mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 1001a7e3 jmp 0x1001a7c8 */
  goto L_1001a7c8;
L_1001a7e5:;
  /* 1001a7e5 and byte ptr [eax + 0x10026a20], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10026a20)))&(0x0u); w8((uint32_t)(EAX + 0x10026a20), (_r)); fl_logic(_r,8); }
L_1001a7ec:;
  /* 1001a7ec inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1001a7ed inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1001a7ee inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1001a7ef cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a7f1 jb 0x1001a7b2 */
  if (C.cf) goto L_1001a7b2;
  /* 1001a7f3 jmp 0x1001a83e */
  goto L_1001a83e;
L_1001a7f5:;
  /* 1001a7f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001a7f7 mov esi, 0x100 */
  ESI = (0x100u);
L_1001a7fc:;
  /* 1001a7fc cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a7ff jb 0x1001a81a */
  if (C.cf) goto L_1001a81a;
  /* 1001a801 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a804 ja 0x1001a81a */
  if ((!C.cf&&!C.zf)) goto L_1001a81a;
  /* 1001a806 or byte ptr [eax + 0x10026b21], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10026b21)))|(0x10u); w8((uint32_t)(EAX + 0x10026b21), (_r)); fl_logic(_r,8); }
  /* 1001a80d mov cl, al */
  CL = (AL);
  /* 1001a80f add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_1001a812:;
  /* 1001a812 mov byte ptr [eax + 0x10026a20], cl */
  w8((uint32_t)(EAX + 0x10026a20), (CL));
  /* 1001a818 jmp 0x1001a839 */
  goto L_1001a839;
L_1001a81a:;
  /* 1001a81a cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a81d jb 0x1001a832 */
  if (C.cf) goto L_1001a832;
  /* 1001a81f cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a822 ja 0x1001a832 */
  if ((!C.cf&&!C.zf)) goto L_1001a832;
  /* 1001a824 or byte ptr [eax + 0x10026b21], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10026b21)))|(0x20u); w8((uint32_t)(EAX + 0x10026b21), (_r)); fl_logic(_r,8); }
  /* 1001a82b mov cl, al */
  CL = (AL);
  /* 1001a82d sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1001a830 jmp 0x1001a812 */
  goto L_1001a812;
L_1001a832:;
  /* 1001a832 and byte ptr [eax + 0x10026a20], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10026a20)))&(0x0u); w8((uint32_t)(EAX + 0x10026a20), (_r)); fl_logic(_r,8); }
L_1001a839:;
  /* 1001a839 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1001a83a cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a83c jb 0x1001a7fc */
  if (C.cf) goto L_1001a7fc;
L_1001a83e:;
  /* 1001a83e pop esi */
  ESI = (pop32());
  /* 1001a83f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001a840 ret  */
  ESPCHK(0x1001a6bcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a841 @ 0x1001a841 (28 bytes, 7 insns) */
void f_1001a841(void) {
  FTRACE(0x1001a841u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001a841 cmp dword ptr [0x10027d68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10027d68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a848 jne 0x1001a85c */
  if (!C.zf) goto L_1001a85c;
  /* 1001a84a push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1001a84c call 0x1001a469 */
  push32(0x1001a851u); f_1001a469();
  /* 1001a851 pop ecx */
  ECX = (pop32());
  /* 1001a852 mov dword ptr [0x10027d68], 1 */
  w32((uint32_t)(0x10027d68), (0x1u));
L_1001a85c:;
  /* 1001a85c ret  */
  ESPCHK(0x1001a841u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a860 @ 0x1001a860 (664 bytes, 267 insns) [15 switch table(s)] */
void f_1001a860(void) {
  FTRACE(0x1001a860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001a860 push ebp */
  push32((uint32_t)(EBP));
  /* 1001a861 mov ebp, esp */
  EBP = (ESP);
  /* 1001a863 push edi */
  push32((uint32_t)(EDI));
  /* 1001a864 push esi */
  push32((uint32_t)(ESI));
  /* 1001a865 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1001a868 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1001a86b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1001a86e mov eax, ecx */
  EAX = (ECX);
  /* 1001a870 mov edx, ecx */
  EDX = (ECX);
  /* 1001a872 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001a874 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a876 jbe 0x1001a880 */
  if ((C.cf||C.zf)) goto L_1001a880;
  /* 1001a878 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a87a jb 0x1001a9f8 */
  if (C.cf) goto L_1001a9f8;
L_1001a880:;
  /* 1001a880 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1001a886 jne 0x1001a89c */
  if (!C.zf) goto L_1001a89c;
  /* 1001a888 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1001a88b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1001a88e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a891 jb 0x1001a8bc */
  if (C.cf) goto L_1001a8bc;
  /* 1001a893 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1001a895 jmp dword ptr [edx*4 + 0x1001a9a8] */
  switch (EDX) {
    case 0: goto L_1001a9b8;
    case 1: goto L_1001a9c0;
    case 2: goto L_1001a9cc;
    case 3: goto L_1001a9e0;
    default: x86_unimpl("switch@0x1001a895 out of table"); return;
  }
L_1001a89c:;
  /* 1001a89c mov eax, edi */
  EAX = (EDI);
  /* 1001a89e mov edx, 3 */
  EDX = (0x3u);
  /* 1001a8a3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001a8a6 jb 0x1001a8b4 */
  if (C.cf) goto L_1001a8b4;
  /* 1001a8a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1001a8ab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001a8ad jmp dword ptr [eax*4 + 0x1001a8c0] */
  switch (EAX) {
    case 1: goto L_1001a8d0;
    case 2: goto L_1001a8fc;
    case 3: goto L_1001a920;
    default: x86_unimpl("switch@0x1001a8ad out of table"); return;
  }
L_1001a8b4:;
  /* 1001a8b4 jmp dword ptr [ecx*4 + 0x1001a9b8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1001a9b8)))); return;
  /* 1001a8bb nop  */
  /* nop */
L_1001a8bc:;
  /* 1001a8bc jmp dword ptr [ecx*4 + 0x1001a93c] */
  switch (ECX) {
    case 0: goto L_1001a99f;
    case 1: goto L_1001a98c;
    case 2: goto L_1001a984;
    case 3: goto L_1001a97c;
    case 4: goto L_1001a974;
    case 5: goto L_1001a96c;
    case 6: goto L_1001a964;
    case 7: goto L_1001a95c;
    default: x86_unimpl("switch@0x1001a8bc out of table"); return;
  }
  /* 1001a8c3 nop  */
  /* nop */
L_1001a8d0:;
  /* 1001a8d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1001a8d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1001a8d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1001a8d6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1001a8d9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1001a8dc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1001a8df shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1001a8e2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1001a8e5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001a8e8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001a8eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a8ee jb 0x1001a8bc */
  if (C.cf) goto L_1001a8bc;
  /* 1001a8f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1001a8f2 jmp dword ptr [edx*4 + 0x1001a9a8] */
  switch (EDX) {
    case 0: goto L_1001a9b8;
    case 1: goto L_1001a9c0;
    case 2: goto L_1001a9cc;
    case 3: goto L_1001a9e0;
    default: x86_unimpl("switch@0x1001a8f2 out of table"); return;
  }
  /* 1001a8f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1001a8fc:;
  /* 1001a8fc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1001a8fe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1001a900 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1001a902 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1001a905 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1001a908 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1001a90b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001a90e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001a911 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a914 jb 0x1001a8bc */
  if (C.cf) goto L_1001a8bc;
  /* 1001a916 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1001a918 jmp dword ptr [edx*4 + 0x1001a9a8] */
  switch (EDX) {
    case 0: goto L_1001a9b8;
    case 1: goto L_1001a9c0;
    case 2: goto L_1001a9cc;
    case 3: goto L_1001a9e0;
    default: x86_unimpl("switch@0x1001a918 out of table"); return;
  }
  /* 1001a91f nop  */
  /* nop */
L_1001a920:;
  /* 1001a920 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1001a922 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1001a924 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1001a926 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1001a927 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1001a92a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1001a92b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001a92e jb 0x1001a8bc */
  if (C.cf) goto L_1001a8bc;
  /* 1001a930 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1001a932 jmp dword ptr [edx*4 + 0x1001a9a8] */
  switch (EDX) {
    case 0: goto L_1001a9b8;
    case 1: goto L_1001a9c0;
    case 2: goto L_1001a9cc;
    case 3: goto L_1001a9e0;
    default: x86_unimpl("switch@0x1001a932 out of table"); return;
  }
  /* 1001a939 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1001a95c:;
  /* 1001a95c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1001a960 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1001a964:;
  /* 1001a964 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1001a968 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1001a96c:;
  /* 1001a96c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1001a970 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1001a974:;
  /* 1001a974 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1001a978 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1001a97c:;
  /* 1001a97c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1001a980 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1001a984:;
  /* 1001a984 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1001a988 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1001a98c:;
  /* 1001a98c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1001a990 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1001a994 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1001a99b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001a99d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1001a99f:;
  /* 1001a99f jmp dword ptr [edx*4 + 0x1001a9a8] */
  switch (EDX) {
    case 0: goto L_1001a9b8;
    case 1: goto L_1001a9c0;
    case 2: goto L_1001a9cc;
    case 3: goto L_1001a9e0;
    default: x86_unimpl("switch@0x1001a99f out of table"); return;
  }
  /* 1001a9a6 mov edi, edi */
  EDI = (EDI);
L_1001a9b8:;
  /* 1001a9b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001a9bb pop esi */
  ESI = (pop32());
  /* 1001a9bc pop edi */
  EDI = (pop32());
  /* 1001a9bd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001a9be ret  */
  ESPCHK(0x1001a860u, _esp0);
  ESP += 4; return;
  /* 1001a9bf nop  */
  /* nop */
L_1001a9c0:;
  /* 1001a9c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1001a9c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1001a9c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001a9c7 pop esi */
  ESI = (pop32());
  /* 1001a9c8 pop edi */
  EDI = (pop32());
  /* 1001a9c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001a9ca ret  */
  ESPCHK(0x1001a860u, _esp0);
  ESP += 4; return;
  /* 1001a9cb nop  */
  /* nop */
L_1001a9cc:;
  /* 1001a9cc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1001a9ce mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1001a9d0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1001a9d3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1001a9d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001a9d9 pop esi */
  ESI = (pop32());
  /* 1001a9da pop edi */
  EDI = (pop32());
  /* 1001a9db leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001a9dc ret  */
  ESPCHK(0x1001a860u, _esp0);
  ESP += 4; return;
  /* 1001a9dd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1001a9e0:;
  /* 1001a9e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1001a9e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1001a9e4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1001a9e7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1001a9ea mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1001a9ed mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1001a9f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001a9f3 pop esi */
  ESI = (pop32());
  /* 1001a9f4 pop edi */
  EDI = (pop32());
  /* 1001a9f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001a9f6 ret  */
  ESPCHK(0x1001a860u, _esp0);
  ESP += 4; return;
  /* 1001a9f7 nop  */
  /* nop */
L_1001a9f8:;
  /* 1001a9f8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1001a9fc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1001aa00 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1001aa06 jne 0x1001aa2c */
  if (!C.zf) goto L_1001aa2c;
  /* 1001aa08 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1001aa0b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1001aa0e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001aa11 jb 0x1001aa20 */
  if (C.cf) goto L_1001aa20;
  /* 1001aa13 std  */
  C.df=1;
  /* 1001aa14 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1001aa16 cld  */
  C.df=0;
  /* 1001aa17 jmp dword ptr [edx*4 + 0x1001ab40] */
  switch (EDX) {
    case 0: goto L_1001ab50;
    case 1: goto L_1001ab58;
    case 2: goto L_1001ab68;
    case 3: goto L_1001ab7c;
    default: x86_unimpl("switch@0x1001aa17 out of table"); return;
  }
  /* 1001aa1e mov edi, edi */
  EDI = (EDI);
L_1001aa20:;
  /* 1001aa20 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1001aa22 jmp dword ptr [ecx*4 + 0x1001aaf0] */
  switch (ECX) {
    case 0: goto L_1001ab37;
    default: x86_unimpl("switch@0x1001aa22 out of table"); return;
  }
  /* 1001aa29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1001aa2c:;
  /* 1001aa2c mov eax, edi */
  EAX = (EDI);
  /* 1001aa2e mov edx, 3 */
  EDX = (0x3u);
  /* 1001aa33 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001aa36 jb 0x1001aa44 */
  if (C.cf) goto L_1001aa44;
  /* 1001aa38 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1001aa3b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001aa3d jmp dword ptr [eax*4 + 0x1001aa48] */
  switch (EAX) {
    case 1: goto L_1001aa58;
    case 2: goto L_1001aa78;
    case 3: goto L_1001aaa0;
    default: x86_unimpl("switch@0x1001aa3d out of table"); return;
  }
L_1001aa44:;
  /* 1001aa44 jmp dword ptr [ecx*4 + 0x1001ab40] */
  switch (ECX) {
    case 0: goto L_1001ab50;
    case 1: goto L_1001ab58;
    case 2: goto L_1001ab68;
    case 3: goto L_1001ab7c;
    default: x86_unimpl("switch@0x1001aa44 out of table"); return;
  }
  /* 1001aa4b nop  */
  /* nop */
L_1001aa58:;
  /* 1001aa58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1001aa5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1001aa5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1001aa60 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1001aa61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1001aa64 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1001aa65 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001aa68 jb 0x1001aa20 */
  if (C.cf) goto L_1001aa20;
  /* 1001aa6a std  */
  C.df=1;
  /* 1001aa6b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1001aa6d cld  */
  C.df=0;
  /* 1001aa6e jmp dword ptr [edx*4 + 0x1001ab40] */
  switch (EDX) {
    case 0: goto L_1001ab50;
    case 1: goto L_1001ab58;
    case 2: goto L_1001ab68;
    case 3: goto L_1001ab7c;
    default: x86_unimpl("switch@0x1001aa6e out of table"); return;
  }
  /* 1001aa75 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1001aa78:;
  /* 1001aa78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1001aa7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1001aa7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1001aa80 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1001aa83 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1001aa86 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1001aa89 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001aa8c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001aa8f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001aa92 jb 0x1001aa20 */
  if (C.cf) goto L_1001aa20;
  /* 1001aa94 std  */
  C.df=1;
  /* 1001aa95 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1001aa97 cld  */
  C.df=0;
  /* 1001aa98 jmp dword ptr [edx*4 + 0x1001ab40] */
  switch (EDX) {
    case 0: goto L_1001ab50;
    case 1: goto L_1001ab58;
    case 2: goto L_1001ab68;
    case 3: goto L_1001ab7c;
    default: x86_unimpl("switch@0x1001aa98 out of table"); return;
  }
  /* 1001aa9f nop  */
  /* nop */
L_1001aaa0:;
  /* 1001aaa0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1001aaa3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1001aaa5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1001aaa8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1001aaab mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1001aaae mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1001aab1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1001aab4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1001aab7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001aaba sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001aabd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001aac0 jb 0x1001aa20 */
  if (C.cf) goto L_1001aa20;
  /* 1001aac6 std  */
  C.df=1;
  /* 1001aac7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1001aac9 cld  */
  C.df=0;
  /* 1001aaca jmp dword ptr [edx*4 + 0x1001ab40] */
  switch (EDX) {
    case 0: goto L_1001ab50;
    case 1: goto L_1001ab58;
    case 2: goto L_1001ab68;
    case 3: goto L_1001ab7c;
    default: x86_unimpl("switch@0x1001aaca out of table"); return;
  }
  /* 1001aad1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1001aad4 hlt  */
  x86_unimpl("hlt @ 0x1001aad4");
  /* 1001aad5 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1001aad6 add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1001aad8 cld  */
  C.df=0;
  /* 1001aad9 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1001aada add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1001aadc add al, 0xab */
  { uint32_t _a=(AL),_b=(0xabu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1001aade add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1001aae0 or al, 0xab */
  { uint32_t _r=(AL)|(0xabu); AL = (_r); fl_logic(_r,8); }
  /* 1001aae2 add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1001aae4 adc al, 0xab */
  { uint32_t _a=(AL),_b=(0xabu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1001aae6 add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1001aae8 sbb al, 0xab */
  { uint32_t _a=(AL),_b=(0xabu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1001aaea add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1001aaec and al, 0xab */
  { uint32_t _r=(AL)&(0xabu); AL = (_r); fl_logic(_r,8); }
  /* 1001aaee add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1001aaf4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1001aaf8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1001aafc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1001ab00 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1001ab04 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1001ab08 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1001ab0c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1001ab10 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1001ab14 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1001ab18 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1001ab1c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1001ab20 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1001ab24 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1001ab28 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1001ab2c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1001ab33 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001ab35 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1001ab37:;
  /* 1001ab37 jmp dword ptr [edx*4 + 0x1001ab40] */
  switch (EDX) {
    case 0: goto L_1001ab50;
    case 1: goto L_1001ab58;
    case 2: goto L_1001ab68;
    case 3: goto L_1001ab7c;
    default: x86_unimpl("switch@0x1001ab37 out of table"); return;
  }
  /* 1001ab3e mov edi, edi */
  EDI = (EDI);
L_1001ab50:;
  /* 1001ab50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001ab53 pop esi */
  ESI = (pop32());
  /* 1001ab54 pop edi */
  EDI = (pop32());
  /* 1001ab55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001ab56 ret  */
  ESPCHK(0x1001a860u, _esp0);
  ESP += 4; return;
  /* 1001ab57 nop  */
  /* nop */
L_1001ab58:;
  /* 1001ab58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1001ab5b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1001ab5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001ab61 pop esi */
  ESI = (pop32());
  /* 1001ab62 pop edi */
  EDI = (pop32());
  /* 1001ab63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001ab64 ret  */
  ESPCHK(0x1001a860u, _esp0);
  ESP += 4; return;
  /* 1001ab65 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1001ab68:;
  /* 1001ab68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1001ab6b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1001ab6e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1001ab71 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1001ab74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001ab77 pop esi */
  ESI = (pop32());
  /* 1001ab78 pop edi */
  EDI = (pop32());
  /* 1001ab79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001ab7a ret  */
  ESPCHK(0x1001a860u, _esp0);
  ESP += 4; return;
  /* 1001ab7b nop  */
  /* nop */
L_1001ab7c:;
  /* 1001ab7c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1001ab7f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1001ab82 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1001ab85 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1001ab88 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1001ab8b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1001ab8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001ab91 pop esi */
  ESI = (pop32());
  /* 1001ab92 pop edi */
  EDI = (pop32());
  /* 1001ab93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001ab94 ret  */
  ESPCHK(0x1001a860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab95 @ 0x1001ab95 (23 bytes, 7 insns) */
void f_1001ab95(void) {
  FTRACE(0x1001ab95u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001ab95 push 0 */
  push32((uint32_t)(0x0u));
  /* 1001ab97 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1001ab9b push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1001ab9f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1001aba3 call 0x1001abac */
  push32(0x1001aba8u); f_1001abac();
  /* 1001aba8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001abab ret  */
  ESPCHK(0x1001ab95u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abac @ 0x1001abac (517 bytes, 195 insns) */
void f_1001abac(void) {
  FTRACE(0x1001abacu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001abac push ebp */
  push32((uint32_t)(EBP));
  /* 1001abad mov ebp, esp */
  EBP = (ESP);
  /* 1001abaf sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001abb2 push ebx */
  push32((uint32_t)(EBX));
  /* 1001abb3 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1001abb7 push esi */
  push32((uint32_t)(ESI));
  /* 1001abb8 push edi */
  push32((uint32_t)(EDI));
  /* 1001abb9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1001abbc mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1001abbe lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 1001abc1 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1001abc4:;
  /* 1001abc4 cmp dword ptr [0x10020c00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10020c00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001abcb jle 0x1001abdc */
  if ((C.zf||C.sf!=C.of)) goto L_1001abdc;
  /* 1001abcd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1001abd0 push 8 */
  push32((uint32_t)(0x8u));
  /* 1001abd2 push eax */
  push32((uint32_t)(EAX));
  /* 1001abd3 call 0x1001944b */
  push32(0x1001abd8u); f_1001944b();
  /* 1001abd8 pop ecx */
  ECX = (pop32());
  /* 1001abd9 pop ecx */
  ECX = (pop32());
  /* 1001abda jmp 0x1001abeb */
  goto L_1001abeb;
L_1001abdc:;
  /* 1001abdc mov ecx, dword ptr [0x100209f0] */
  ECX = (r32((uint32_t)(0x100209f0)));
  /* 1001abe2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1001abe5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1001abe8 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_1001abeb:;
  /* 1001abeb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001abed je 0x1001abf4 */
  if (C.zf) goto L_1001abf4;
  /* 1001abef mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 1001abf1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1001abf2 jmp 0x1001abc4 */
  goto L_1001abc4;
L_1001abf4:;
  /* 1001abf4 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001abf7 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 1001abfa jne 0x1001ac02 */
  if (!C.zf) goto L_1001ac02;
  /* 1001abfc or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1001ac00 jmp 0x1001ac07 */
  goto L_1001ac07;
L_1001ac02:;
  /* 1001ac02 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001ac05 jne 0x1001ac0d */
  if (!C.zf) goto L_1001ac0d;
L_1001ac07:;
  /* 1001ac07 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 1001ac09 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1001ac0a mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1001ac0d:;
  /* 1001ac0d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1001ac10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001ac12 jl 0x1001ada1 */
  if ((C.sf!=C.of)) goto L_1001ada1;
  /* 1001ac18 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001ac1b je 0x1001ada1 */
  if (C.zf) goto L_1001ada1;
  /* 1001ac21 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001ac24 jg 0x1001ada1 */
  if ((!C.zf&&C.sf==C.of)) goto L_1001ada1;
  /* 1001ac2a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1001ac2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001ac2e pop ecx */
  ECX = (pop32());
  /* 1001ac2f jne 0x1001ac55 */
  if (!C.zf) goto L_1001ac55;
  /* 1001ac31 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001ac34 je 0x1001ac3f */
  if (C.zf) goto L_1001ac3f;
  /* 1001ac36 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 1001ac3d jmp 0x1001ac71 */
  goto L_1001ac71;
L_1001ac3f:;
  /* 1001ac3f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1001ac41 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001ac43 je 0x1001ac52 */
  if (C.zf) goto L_1001ac52;
  /* 1001ac45 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001ac47 je 0x1001ac52 */
  if (C.zf) goto L_1001ac52;
  /* 1001ac49 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 1001ac50 jmp 0x1001ac71 */
  goto L_1001ac71;
L_1001ac52:;
  /* 1001ac52 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1001ac55:;
  /* 1001ac55 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001ac58 jne 0x1001ac71 */
  if (!C.zf) goto L_1001ac71;
  /* 1001ac5a cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001ac5d jne 0x1001ac71 */
  if (!C.zf) goto L_1001ac71;
  /* 1001ac5f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1001ac61 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001ac63 je 0x1001ac69 */
  if (C.zf) goto L_1001ac69;
  /* 1001ac65 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001ac67 jne 0x1001ac71 */
  if (!C.zf) goto L_1001ac71;
L_1001ac69:;
  /* 1001ac69 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 1001ac6c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1001ac6d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1001ac6e mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1001ac71:;
  /* 1001ac71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1001ac74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1001ac76 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1001ac79 mov edi, 0x103 */
  EDI = (0x103u);
  /* 1001ac7e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1001ac81:;
  /* 1001ac81 cmp dword ptr [0x10020c00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10020c00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001ac88 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1001ac8b jle 0x1001ac99 */
  if ((C.zf||C.sf!=C.of)) goto L_1001ac99;
  /* 1001ac8d push 4 */
  push32((uint32_t)(0x4u));
  /* 1001ac8f push esi */
  push32((uint32_t)(ESI));
  /* 1001ac90 call 0x1001944b */
  push32(0x1001ac95u); f_1001944b();
  /* 1001ac95 pop ecx */
  ECX = (pop32());
  /* 1001ac96 pop ecx */
  ECX = (pop32());
  /* 1001ac97 jmp 0x1001aca4 */
  goto L_1001aca4;
L_1001ac99:;
  /* 1001ac99 mov eax, dword ptr [0x100209f0] */
  EAX = (r32((uint32_t)(0x100209f0)));
  /* 1001ac9e mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 1001aca1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1001aca4:;
  /* 1001aca4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001aca6 je 0x1001acb0 */
  if (C.zf) goto L_1001acb0;
  /* 1001aca8 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1001acab sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001acae jmp 0x1001ace2 */
  goto L_1001ace2;
L_1001acb0:;
  /* 1001acb0 cmp dword ptr [0x10020c00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10020c00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001acb7 jle 0x1001acc4 */
  if ((C.zf||C.sf!=C.of)) goto L_1001acc4;
  /* 1001acb9 push edi */
  push32((uint32_t)(EDI));
  /* 1001acba push esi */
  push32((uint32_t)(ESI));
  /* 1001acbb call 0x1001944b */
  push32(0x1001acc0u); f_1001944b();
  /* 1001acc0 pop ecx */
  ECX = (pop32());
  /* 1001acc1 pop ecx */
  ECX = (pop32());
  /* 1001acc2 jmp 0x1001accf */
  goto L_1001accf;
L_1001acc4:;
  /* 1001acc4 mov eax, dword ptr [0x100209f0] */
  EAX = (r32((uint32_t)(0x100209f0)));
  /* 1001acc9 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 1001accd and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_1001accf:;
  /* 1001accf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001acd1 je 0x1001ad1d */
  if (C.zf) goto L_1001ad1d;
  /* 1001acd3 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1001acd6 push eax */
  push32((uint32_t)(EAX));
  /* 1001acd7 call 0x1001d188 */
  push32(0x1001acdcu); f_1001d188();
  /* 1001acdc pop ecx */
  ECX = (pop32());
  /* 1001acdd mov ecx, eax */
  ECX = (EAX);
  /* 1001acdf sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_1001ace2:;
  /* 1001ace2 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001ace5 jae 0x1001ad1d */
  if (!C.cf) goto L_1001ad1d;
  /* 1001ace7 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 1001acea or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1001acee cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001acf1 jb 0x1001ad07 */
  if (C.cf) goto L_1001ad07;
  /* 1001acf3 jne 0x1001ad01 */
  if (!C.zf) goto L_1001ad01;
  /* 1001acf5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1001acf8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1001acfa div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1001acfd cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001acff jbe 0x1001ad07 */
  if ((C.cf||C.zf)) goto L_1001ad07;
L_1001ad01:;
  /* 1001ad01 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1001ad05 jmp 0x1001ad10 */
  goto L_1001ad10;
L_1001ad07:;
  /* 1001ad07 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1001ad0b add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001ad0d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_1001ad10:;
  /* 1001ad10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1001ad13 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1001ad16 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1001ad18 jmp 0x1001ac81 */
  goto L_1001ac81;
L_1001ad1d:;
  /* 1001ad1d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1001ad20 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1001ad23 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1001ad26 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1001ad28 jne 0x1001ad3a */
  if (!C.zf) goto L_1001ad3a;
  /* 1001ad2a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1001ad2c je 0x1001ad34 */
  if (C.zf) goto L_1001ad34;
  /* 1001ad2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001ad31 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1001ad34:;
  /* 1001ad34 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1001ad38 jmp 0x1001ad85 */
  goto L_1001ad85;
L_1001ad3a:;
  /* 1001ad3a test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 1001ad3c mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 1001ad41 jne 0x1001ad5e */
  if (!C.zf) goto L_1001ad5e;
  /* 1001ad43 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 1001ad45 jne 0x1001ad85 */
  if (!C.zf) goto L_1001ad85;
  /* 1001ad47 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1001ad4a je 0x1001ad55 */
  if (C.zf) goto L_1001ad55;
  /* 1001ad4c cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001ad53 ja 0x1001ad5e */
  if ((!C.cf&&!C.zf)) goto L_1001ad5e;
L_1001ad55:;
  /* 1001ad55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001ad57 jne 0x1001ad85 */
  if (!C.zf) goto L_1001ad85;
  /* 1001ad59 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001ad5c jbe 0x1001ad85 */
  if ((C.cf||C.zf)) goto L_1001ad85;
L_1001ad5e:;
  /* 1001ad5e call 0x1001bff1 */
  push32(0x1001ad63u); f_1001bff1();
  /* 1001ad63 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 1001ad67 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 1001ad6d je 0x1001ad75 */
  if (C.zf) goto L_1001ad75;
  /* 1001ad6f or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1001ad73 jmp 0x1001ad85 */
  goto L_1001ad85;
L_1001ad75:;
  /* 1001ad75 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1001ad78 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1001ad7a neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 1001ad7c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001ad7e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1001ad80 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001ad82 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1001ad85:;
  /* 1001ad85 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1001ad87 je 0x1001ad8e */
  if (C.zf) goto L_1001ad8e;
  /* 1001ad89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1001ad8c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_1001ad8e:;
  /* 1001ad8e test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 1001ad92 je 0x1001ad9c */
  if (C.zf) goto L_1001ad9c;
  /* 1001ad94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1001ad97 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1001ad99 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1001ad9c:;
  /* 1001ad9c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1001ad9f jmp 0x1001adac */
  goto L_1001adac;
L_1001ada1:;
  /* 1001ada1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1001ada4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001ada6 je 0x1001adaa */
  if (C.zf) goto L_1001adaa;
  /* 1001ada8 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_1001adaa:;
  /* 1001adaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1001adac:;
  /* 1001adac pop edi */
  EDI = (pop32());
  /* 1001adad pop esi */
  ESI = (pop32());
  /* 1001adae pop ebx */
  EBX = (pop32());
  /* 1001adaf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001adb0 ret  */
  ESPCHK(0x1001abacu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x1001add0 (193 bytes, 90 insns) */
void f_1001add0(void) {
  FTRACE(0x1001add0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001add0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001add2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1001add6 push ebx */
  push32((uint32_t)(EBX));
  /* 1001add7 mov ebx, eax */
  EBX = (EAX);
  /* 1001add9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1001addc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1001ade0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1001ade6 je 0x1001adfb */
  if (C.zf) goto L_1001adfb;
L_1001ade8:;
  /* 1001ade8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1001adea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1001adeb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001aded je 0x1001adc0 */
  if (C.zf) { jmp_ind(0x1001adc0u); return; }
  /* 1001adef test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 1001adf1 je 0x1001ae44 */
  if (C.zf) goto L_1001ae44;
  /* 1001adf3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1001adf9 jne 0x1001ade8 */
  if (!C.zf) goto L_1001ade8;
L_1001adfb:;
  /* 1001adfb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1001adfd push edi */
  push32((uint32_t)(EDI));
  /* 1001adfe mov eax, ebx */
  EAX = (EBX);
  /* 1001ae00 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 1001ae03 push esi */
  push32((uint32_t)(ESI));
  /* 1001ae04 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_1001ae06:;
  /* 1001ae06 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1001ae08 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1001ae0d mov eax, ecx */
  EAX = (ECX);
  /* 1001ae0f mov esi, edi */
  ESI = (EDI);
  /* 1001ae11 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 1001ae13 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001ae15 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001ae17 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1001ae1a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1001ae1d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1001ae1f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1001ae21 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001ae24 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1001ae2a jne 0x1001ae48 */
  if (!C.zf) goto L_1001ae48;
  /* 1001ae2c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1001ae31 je 0x1001ae06 */
  if (C.zf) goto L_1001ae06;
  /* 1001ae33 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1001ae38 jne 0x1001ae42 */
  if (!C.zf) goto L_1001ae42;
  /* 1001ae3a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 1001ae40 jne 0x1001ae06 */
  if (!C.zf) goto L_1001ae06;
L_1001ae42:;
  /* 1001ae42 pop esi */
  ESI = (pop32());
  /* 1001ae43 pop edi */
  EDI = (pop32());
L_1001ae44:;
  /* 1001ae44 pop ebx */
  EBX = (pop32());
  /* 1001ae45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001ae47 ret  */
  ESPCHK(0x1001add0u, _esp0);
  ESP += 4; return;
L_1001ae48:;
  /* 1001ae48 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1001ae4b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001ae4d je 0x1001ae85 */
  if (C.zf) goto L_1001ae85;
  /* 1001ae4f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001ae51 je 0x1001ae42 */
  if (C.zf) goto L_1001ae42;
  /* 1001ae53 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001ae55 je 0x1001ae7e */
  if (C.zf) goto L_1001ae7e;
  /* 1001ae57 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1001ae59 je 0x1001ae42 */
  if (C.zf) goto L_1001ae42;
  /* 1001ae5b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1001ae5e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001ae60 je 0x1001ae77 */
  if (C.zf) goto L_1001ae77;
  /* 1001ae62 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001ae64 je 0x1001ae42 */
  if (C.zf) goto L_1001ae42;
  /* 1001ae66 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001ae68 je 0x1001ae70 */
  if (C.zf) goto L_1001ae70;
  /* 1001ae6a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1001ae6c je 0x1001ae42 */
  if (C.zf) goto L_1001ae42;
  /* 1001ae6e jmp 0x1001ae06 */
  goto L_1001ae06;
L_1001ae70:;
  /* 1001ae70 pop esi */
  ESI = (pop32());
  /* 1001ae71 pop edi */
  EDI = (pop32());
  /* 1001ae72 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 1001ae75 pop ebx */
  EBX = (pop32());
  /* 1001ae76 ret  */
  ESPCHK(0x1001add0u, _esp0);
  ESP += 4; return;
L_1001ae77:;
  /* 1001ae77 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1001ae7a pop esi */
  ESI = (pop32());
  /* 1001ae7b pop edi */
  EDI = (pop32());
  /* 1001ae7c pop ebx */
  EBX = (pop32());
  /* 1001ae7d ret  */
  ESPCHK(0x1001add0u, _esp0);
  ESP += 4; return;
L_1001ae7e:;
  /* 1001ae7e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 1001ae81 pop esi */
  ESI = (pop32());
  /* 1001ae82 pop edi */
  EDI = (pop32());
  /* 1001ae83 pop ebx */
  EBX = (pop32());
  /* 1001ae84 ret  */
  ESPCHK(0x1001add0u, _esp0);
  ESP += 4; return;
L_1001ae85:;
  /* 1001ae85 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 1001ae88 pop esi */
  ESI = (pop32());
  /* 1001ae89 pop edi */
  EDI = (pop32());
  /* 1001ae8a pop ebx */
  EBX = (pop32());
  /* 1001ae8b ret  */
  ESPCHK(0x1001add0u, _esp0);
  ESP += 4; return;
  /* 1001ae8c int3  */
  x86_unimpl("int3 @ 0x1001ae8c");
  /* 1001ae8d int3  */
  x86_unimpl("int3 @ 0x1001ae8d");
  /* 1001ae8e int3  */
  x86_unimpl("int3 @ 0x1001ae8e");
  /* 1001ae8f int3  */
  x86_unimpl("int3 @ 0x1001ae8f");
}

/* _strstr @ 0x1001ae90 (128 bytes, 66 insns) */
void f_1001ae90(void) {
  FTRACE(0x1001ae90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001ae90 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1001ae94 push edi */
  push32((uint32_t)(EDI));
  /* 1001ae95 push ebx */
  push32((uint32_t)(EBX));
  /* 1001ae96 push esi */
  push32((uint32_t)(ESI));
  /* 1001ae97 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1001ae99 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1001ae9d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1001ae9f je 0x1001af0a */
  if (C.zf) goto L_1001af0a;
  /* 1001aea1 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 1001aea4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1001aea6 je 0x1001aef7 */
  if (C.zf) goto L_1001aef7;
L_1001aea8:;
  /* 1001aea8 mov esi, edi */
  ESI = (EDI);
  /* 1001aeaa mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1001aeae mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1001aeb0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1001aeb1 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001aeb3 je 0x1001aeca */
  if (C.zf) goto L_1001aeca;
  /* 1001aeb5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001aeb7 je 0x1001aec4 */
  if (C.zf) goto L_1001aec4;
L_1001aeb9:;
  /* 1001aeb9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1001aebb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1001aebc:;
  /* 1001aebc cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001aebe je 0x1001aeca */
  if (C.zf) goto L_1001aeca;
  /* 1001aec0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001aec2 jne 0x1001aeb9 */
  if (!C.zf) goto L_1001aeb9;
L_1001aec4:;
  /* 1001aec4 pop esi */
  ESI = (pop32());
  /* 1001aec5 pop ebx */
  EBX = (pop32());
  /* 1001aec6 pop edi */
  EDI = (pop32());
  /* 1001aec7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001aec9 ret  */
  ESPCHK(0x1001ae90u, _esp0);
  ESP += 4; return;
L_1001aeca:;
  /* 1001aeca mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1001aecc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1001aecd cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001aecf jne 0x1001aebc */
  if (!C.zf) goto L_1001aebc;
  /* 1001aed1 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_1001aed4:;
  /* 1001aed4 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 1001aed7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1001aed9 je 0x1001af03 */
  if (C.zf) goto L_1001af03;
  /* 1001aedb mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1001aedd add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001aee0 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001aee2 jne 0x1001aea8 */
  if (!C.zf) goto L_1001aea8;
  /* 1001aee4 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 1001aee7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001aee9 je 0x1001af03 */
  if (C.zf) goto L_1001af03;
  /* 1001aeeb mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 1001aeee add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001aef1 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001aef3 je 0x1001aed4 */
  if (C.zf) goto L_1001aed4;
  /* 1001aef5 jmp 0x1001aea8 */
  goto L_1001aea8;
L_1001aef7:;
  /* 1001aef7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001aef9 pop esi */
  ESI = (pop32());
  /* 1001aefa pop ebx */
  EBX = (pop32());
  /* 1001aefb pop edi */
  EDI = (pop32());
  /* 1001aefc mov al, dl */
  AL = (DL);
  /* 1001aefe jmp 0x1001add6 */
  jmp_ind(0x1001add6u); return;
L_1001af03:;
  /* 1001af03 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 1001af06 pop esi */
  ESI = (pop32());
  /* 1001af07 pop ebx */
  EBX = (pop32());
  /* 1001af08 pop edi */
  EDI = (pop32());
  /* 1001af09 ret  */
  ESPCHK(0x1001ae90u, _esp0);
  ESP += 4; return;
L_1001af0a:;
  /* 1001af0a mov eax, edi */
  EAX = (EDI);
  /* 1001af0c pop esi */
  ESI = (pop32());
  /* 1001af0d pop ebx */
  EBX = (pop32());
  /* 1001af0e pop edi */
  EDI = (pop32());
  /* 1001af0f ret  */
  ESPCHK(0x1001ae90u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1001af10 (56 bytes, 31 insns) */
void f_1001af10(void) {
  FTRACE(0x1001af10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001af10 push ebp */
  push32((uint32_t)(EBP));
  /* 1001af11 mov ebp, esp */
  EBP = (ESP);
  /* 1001af13 push edi */
  push32((uint32_t)(EDI));
  /* 1001af14 push esi */
  push32((uint32_t)(ESI));
  /* 1001af15 push ebx */
  push32((uint32_t)(EBX));
  /* 1001af16 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1001af19 jecxz 0x1001af41 */
  x86_unimpl("jecxz @ 0x1001af19");
  /* 1001af1b mov ebx, ecx */
  EBX = (ECX);
  /* 1001af1d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1001af20 mov esi, edi */
  ESI = (EDI);
  /* 1001af22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001af24 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1001af26 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1001af28 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001af2a mov edi, esi */
  EDI = (ESI);
  /* 1001af2c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1001af2f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1001af31 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1001af34 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1001af36 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001af39 ja 0x1001af3f */
  if ((!C.cf&&!C.zf)) goto L_1001af3f;
  /* 1001af3b je 0x1001af41 */
  if (C.zf) goto L_1001af41;
  /* 1001af3d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1001af3e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1001af3f:;
  /* 1001af3f not ecx */
  ECX = (~(ECX));
L_1001af41:;
  /* 1001af41 mov eax, ecx */
  EAX = (ECX);
  /* 1001af43 pop ebx */
  EBX = (pop32());
  /* 1001af44 pop esi */
  ESI = (pop32());
  /* 1001af45 pop edi */
  EDI = (pop32());
  /* 1001af46 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001af47 ret  */
  ESPCHK(0x1001af10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af50 @ 0x1001af50 (47 bytes, 17 insns) */
void f_1001af50(void) {
  FTRACE(0x1001af50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001af50 push ecx */
  push32((uint32_t)(ECX));
  /* 1001af51 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001af56 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1001af5a jb 0x1001af70 */
  if (C.cf) goto L_1001af70;
L_1001af5c:;
  /* 1001af5c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001af62 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001af67 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1001af69 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001af6e jae 0x1001af5c */
  if (!C.cf) goto L_1001af5c;
L_1001af70:;
  /* 1001af70 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001af72 mov eax, esp */
  EAX = (ESP);
  /* 1001af74 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1001af76 mov esp, ecx */
  ESP = (ECX);
  /* 1001af78 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1001af7a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1001af7d push eax */
  push32((uint32_t)(EAX));
  /* 1001af7e ret  */
  ESPCHK(0x1001af50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af7f @ 0x1001af7f (72 bytes, 17 insns) */
void f_1001af7f(void) {
  FTRACE(0x1001af7fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001af7f push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1001af84 push 0 */
  push32((uint32_t)(0x0u));
  /* 1001af86 push dword ptr [0x10027c44] */
  push32((uint32_t)(r32((uint32_t)(0x10027c44))));
  /* 1001af8c call dword ptr [0x1001e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e098))), 0x1001af92u);
  /* 1001af92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001af94 mov dword ptr [0x100269ec], eax */
  w32((uint32_t)(0x100269ec), (EAX));
  /* 1001af99 jne 0x1001af9c */
  if (!C.zf) goto L_1001af9c;
  /* 1001af9b ret  */
  ESPCHK(0x1001af7fu, _esp0);
  ESP += 4; return;
L_1001af9c:;
  /* 1001af9c mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1001afa0 and dword ptr [0x100269e4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100269e4)))&(0x0u); w32((uint32_t)(0x100269e4), (_r)); fl_logic(_r,32); }
  /* 1001afa7 and dword ptr [0x100269e8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100269e8)))&(0x0u); w32((uint32_t)(0x100269e8), (_r)); fl_logic(_r,32); }
  /* 1001afae push 1 */
  push32((uint32_t)(0x1u));
  /* 1001afb0 mov dword ptr [0x100269e0], eax */
  w32((uint32_t)(0x100269e0), (EAX));
  /* 1001afb5 mov dword ptr [0x100269f0], ecx */
  w32((uint32_t)(0x100269f0), (ECX));
  /* 1001afbb mov dword ptr [0x100269d8], 0x10 */
  w32((uint32_t)(0x100269d8), (0x10u));
  /* 1001afc5 pop eax */
  EAX = (pop32());
  /* 1001afc6 ret  */
  ESPCHK(0x1001af7fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000afc7 @ 0x1001afc7 (43 bytes, 14 insns) */
void f_1001afc7(void) {
  FTRACE(0x1001afc7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001afc7 mov eax, dword ptr [0x100269e8] */
  EAX = (r32((uint32_t)(0x100269e8)));
  /* 1001afcc lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1001afcf mov eax, dword ptr [0x100269ec] */
  EAX = (r32((uint32_t)(0x100269ec)));
  /* 1001afd4 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_1001afd7:;
  /* 1001afd7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001afd9 jae 0x1001afef */
  if (!C.cf) goto L_1001afef;
  /* 1001afdb mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1001afdf sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001afe2 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001afe8 jb 0x1001aff1 */
  if (C.cf) goto L_1001aff1;
  /* 1001afea add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001afed jmp 0x1001afd7 */
  goto L_1001afd7;
L_1001afef:;
  /* 1001afef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1001aff1:;
  /* 1001aff1 ret  */
  ESPCHK(0x1001afc7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aff2 @ 0x1001aff2 (809 bytes, 265 insns) */
void f_1001aff2(void) {
  FTRACE(0x1001aff2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001aff2 push ebp */
  push32((uint32_t)(EBP));
  /* 1001aff3 mov ebp, esp */
  EBP = (ESP);
  /* 1001aff5 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001aff8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001affb push ebx */
  push32((uint32_t)(EBX));
  /* 1001affc push esi */
  push32((uint32_t)(ESI));
  /* 1001affd mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1001b000 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 1001b003 push edi */
  push32((uint32_t)(EDI));
  /* 1001b004 mov edi, esi */
  EDI = (ESI);
  /* 1001b006 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001b009 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001b00c shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 1001b00f mov ecx, edi */
  ECX = (EDI);
  /* 1001b011 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1001b017 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1001b01e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1001b021 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1001b023 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1001b024 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 1001b027 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1001b02a jne 0x1001b316 */
  if (!C.zf) goto L_1001b316;
  /* 1001b030 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 1001b033 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 1001b036 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1001b039 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 1001b03c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1001b03f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1001b042 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1001b045 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 1001b048 jne 0x1001b0c8 */
  if (!C.zf) goto L_1001b0c8;
  /* 1001b04a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1001b04d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1001b04e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b051 jbe 0x1001b056 */
  if ((C.cf||C.zf)) goto L_1001b056;
  /* 1001b053 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1001b055 pop edx */
  EDX = (pop32());
L_1001b056:;
  /* 1001b056 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1001b059 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b05c jne 0x1001b0aa */
  if (!C.zf) goto L_1001b0aa;
  /* 1001b05e cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b061 jae 0x1001b081 */
  if (!C.cf) goto L_1001b081;
  /* 1001b063 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1001b068 mov ecx, edx */
  ECX = (EDX);
  /* 1001b06a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1001b06c lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1001b070 not ebx */
  EBX = (~(EBX));
  /* 1001b072 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1001b076 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1001b078 jne 0x1001b0a2 */
  if (!C.zf) goto L_1001b0a2;
  /* 1001b07a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001b07d and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1001b07f jmp 0x1001b0a2 */
  goto L_1001b0a2;
L_1001b081:;
  /* 1001b081 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1001b084 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1001b089 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1001b08b lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1001b08f not ebx */
  EBX = (~(EBX));
  /* 1001b091 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1001b098 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1001b09a jne 0x1001b0a2 */
  if (!C.zf) goto L_1001b0a2;
  /* 1001b09c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001b09f and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1001b0a2:;
  /* 1001b0a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1001b0a5 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1001b0a8 jmp 0x1001b0ad */
  goto L_1001b0ad;
L_1001b0aa:;
  /* 1001b0aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_1001b0ad:;
  /* 1001b0ad mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 1001b0b0 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 1001b0b3 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001b0b6 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 1001b0b9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1001b0bc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1001b0bf mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 1001b0c2 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 1001b0c5 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_1001b0c8:;
  /* 1001b0c8 mov edx, ecx */
  EDX = (ECX);
  /* 1001b0ca sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1001b0cd dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1001b0ce cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b0d1 jbe 0x1001b0d6 */
  if ((C.cf||C.zf)) goto L_1001b0d6;
  /* 1001b0d3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1001b0d5 pop edx */
  EDX = (pop32());
L_1001b0d6:;
  /* 1001b0d6 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1001b0d9 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 1001b0dc mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 1001b0df jne 0x1001b179 */
  if (!C.zf) goto L_1001b179;
  /* 1001b0e5 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001b0e8 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1001b0eb sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 1001b0ee push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1001b0f0 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1001b0f3 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1001b0f4 pop esi */
  ESI = (pop32());
  /* 1001b0f5 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b0f7 jbe 0x1001b0fb */
  if ((C.cf||C.zf)) goto L_1001b0fb;
  /* 1001b0f9 mov ebx, esi */
  EBX = (ESI);
L_1001b0fb:;
  /* 1001b0fb add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001b0fe mov edx, ecx */
  EDX = (ECX);
  /* 1001b100 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1001b103 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1001b106 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1001b107 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b109 jbe 0x1001b10d */
  if ((C.cf||C.zf)) goto L_1001b10d;
  /* 1001b10b mov edx, esi */
  EDX = (ESI);
L_1001b10d:;
  /* 1001b10d cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b10f je 0x1001b174 */
  if (C.zf) goto L_1001b174;
  /* 1001b111 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1001b114 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1001b117 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b11a jne 0x1001b15c */
  if (!C.zf) goto L_1001b15c;
  /* 1001b11c cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b11f jae 0x1001b13d */
  if (!C.cf) goto L_1001b13d;
  /* 1001b121 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1001b126 mov ecx, ebx */
  ECX = (EBX);
  /* 1001b128 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1001b12a not esi */
  ESI = (~(ESI));
  /* 1001b12c and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1001b130 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 1001b134 jne 0x1001b15c */
  if (!C.zf) goto L_1001b15c;
  /* 1001b136 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001b139 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1001b13b jmp 0x1001b15c */
  goto L_1001b15c;
L_1001b13d:;
  /* 1001b13d lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 1001b140 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1001b145 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1001b147 not esi */
  ESI = (~(ESI));
  /* 1001b149 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1001b150 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 1001b154 jne 0x1001b15c */
  if (!C.zf) goto L_1001b15c;
  /* 1001b156 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001b159 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1001b15c:;
  /* 1001b15c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1001b15f mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 1001b162 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 1001b165 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 1001b168 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1001b16b mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1001b16e mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 1001b171 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_1001b174:;
  /* 1001b174 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1001b177 jmp 0x1001b17c */
  goto L_1001b17c;
L_1001b179:;
  /* 1001b179 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1001b17c:;
  /* 1001b17c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b180 jne 0x1001b18a */
  if (!C.zf) goto L_1001b18a;
  /* 1001b182 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b184 je 0x1001b20b */
  if (C.zf) goto L_1001b20b;
L_1001b18a:;
  /* 1001b18a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1001b18d mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 1001b191 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 1001b194 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 1001b197 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 1001b19a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1001b19d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1001b1a0 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 1001b1a3 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1001b1a6 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b1a9 jne 0x1001b20b */
  if (!C.zf) goto L_1001b20b;
  /* 1001b1ab mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 1001b1af cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b1b2 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 1001b1b5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1001b1b7 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 1001b1bb jae 0x1001b1e2 */
  if (!C.cf) goto L_1001b1e2;
  /* 1001b1bd cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001b1c1 jne 0x1001b1d1 */
  if (!C.zf) goto L_1001b1d1;
  /* 1001b1c3 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1001b1c8 mov ecx, edx */
  ECX = (EDX);
  /* 1001b1ca shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1001b1cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001b1cf or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1001b1d1:;
  /* 1001b1d1 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1001b1d6 mov ecx, edx */
  ECX = (EDX);
  /* 1001b1d8 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1001b1da lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 1001b1de or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1001b1e0 jmp 0x1001b20b */
  goto L_1001b20b;
L_1001b1e2:;
  /* 1001b1e2 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001b1e6 jne 0x1001b1f8 */
  if (!C.zf) goto L_1001b1f8;
  /* 1001b1e8 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1001b1eb mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1001b1f0 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1001b1f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001b1f5 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1001b1f8:;
  /* 1001b1f8 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1001b1fb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1001b200 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1001b202 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 1001b209 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_1001b20b:;
  /* 1001b20b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1001b20e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1001b210 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 1001b214 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1001b217 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 1001b219 jne 0x1001b316 */
  if (!C.zf) goto L_1001b316;
  /* 1001b21f mov eax, dword ptr [0x100269e4] */
  EAX = (r32((uint32_t)(0x100269e4)));
  /* 1001b224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001b226 je 0x1001b308 */
  if (C.zf) goto L_1001b308;
  /* 1001b22c mov ecx, dword ptr [0x100269dc] */
  ECX = (r32((uint32_t)(0x100269dc)));
  /* 1001b232 mov esi, dword ptr [0x1001e07c] */
  ESI = (r32((uint32_t)(0x1001e07c)));
  /* 1001b238 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1001b23b add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001b23e mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 1001b243 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1001b248 push ebx */
  push32((uint32_t)(EBX));
  /* 1001b249 push ecx */
  push32((uint32_t)(ECX));
  /* 1001b24a call esi */
  call_ind((uint32_t)(ESI), 0x1001b24cu);
  /* 1001b24c mov ecx, dword ptr [0x100269dc] */
  ECX = (r32((uint32_t)(0x100269dc)));
  /* 1001b252 mov eax, dword ptr [0x100269e4] */
  EAX = (r32((uint32_t)(0x100269e4)));
  /* 1001b257 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1001b25c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1001b25e or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1001b261 mov eax, dword ptr [0x100269e4] */
  EAX = (r32((uint32_t)(0x100269e4)));
  /* 1001b266 mov ecx, dword ptr [0x100269dc] */
  ECX = (r32((uint32_t)(0x100269dc)));
  /* 1001b26c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1001b26f and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1001b277 mov eax, dword ptr [0x100269e4] */
  EAX = (r32((uint32_t)(0x100269e4)));
  /* 1001b27c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1001b27f dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1001b282 mov eax, dword ptr [0x100269e4] */
  EAX = (r32((uint32_t)(0x100269e4)));
  /* 1001b287 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1001b28a cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001b28e jne 0x1001b299 */
  if (!C.zf) goto L_1001b299;
  /* 1001b290 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1001b294 mov eax, dword ptr [0x100269e4] */
  EAX = (r32((uint32_t)(0x100269e4)));
L_1001b299:;
  /* 1001b299 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b29d jne 0x1001b308 */
  if (!C.zf) goto L_1001b308;
  /* 1001b29f push ebx */
  push32((uint32_t)(EBX));
  /* 1001b2a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1001b2a2 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 1001b2a5 call esi */
  call_ind((uint32_t)(ESI), 0x1001b2a7u);
  /* 1001b2a7 mov eax, dword ptr [0x100269e4] */
  EAX = (r32((uint32_t)(0x100269e4)));
  /* 1001b2ac push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 1001b2af push 0 */
  push32((uint32_t)(0x0u));
  /* 1001b2b1 push dword ptr [0x10027c44] */
  push32((uint32_t)(r32((uint32_t)(0x10027c44))));
  /* 1001b2b7 call dword ptr [0x1001e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e080))), 0x1001b2bdu);
  /* 1001b2bd mov eax, dword ptr [0x100269e8] */
  EAX = (r32((uint32_t)(0x100269e8)));
  /* 1001b2c2 mov edx, dword ptr [0x100269ec] */
  EDX = (r32((uint32_t)(0x100269ec)));
  /* 1001b2c8 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1001b2cb shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1001b2ce mov ecx, eax */
  ECX = (EAX);
  /* 1001b2d0 mov eax, dword ptr [0x100269e4] */
  EAX = (r32((uint32_t)(0x100269e4)));
  /* 1001b2d5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001b2d7 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 1001b2db push ecx */
  push32((uint32_t)(ECX));
  /* 1001b2dc lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1001b2df push ecx */
  push32((uint32_t)(ECX));
  /* 1001b2e0 push eax */
  push32((uint32_t)(EAX));
  /* 1001b2e1 call 0x10019cc0 */
  push32(0x1001b2e6u); f_10019cc0();
  /* 1001b2e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001b2e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001b2ec dec dword ptr [0x100269e8] */
  { uint32_t _r=(r32((uint32_t)(0x100269e8)))-1; w32((uint32_t)(0x100269e8), (_r)); fl_dec(_r,32); }
  /* 1001b2f2 cmp eax, dword ptr [0x100269e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x100269e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b2f8 jbe 0x1001b2fe */
  if ((C.cf||C.zf)) goto L_1001b2fe;
  /* 1001b2fa sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_1001b2fe:;
  /* 1001b2fe mov eax, dword ptr [0x100269ec] */
  EAX = (r32((uint32_t)(0x100269ec)));
  /* 1001b303 mov dword ptr [0x100269e0], eax */
  w32((uint32_t)(0x100269e0), (EAX));
L_1001b308:;
  /* 1001b308 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001b30b mov dword ptr [0x100269dc], edi */
  w32((uint32_t)(0x100269dc), (EDI));
  /* 1001b311 mov dword ptr [0x100269e4], eax */
  w32((uint32_t)(0x100269e4), (EAX));
L_1001b316:;
  /* 1001b316 pop edi */
  EDI = (pop32());
  /* 1001b317 pop esi */
  ESI = (pop32());
  /* 1001b318 pop ebx */
  EBX = (pop32());
  /* 1001b319 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001b31a ret  */
  ESPCHK(0x1001aff2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b31b @ 0x1001b31b (777 bytes, 275 insns) */
void f_1001b31b(void) {
  FTRACE(0x1001b31bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001b31b push ebp */
  push32((uint32_t)(EBP));
  /* 1001b31c mov ebp, esp */
  EBP = (ESP);
  /* 1001b31e sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001b321 mov eax, dword ptr [0x100269e8] */
  EAX = (r32((uint32_t)(0x100269e8)));
  /* 1001b326 mov edx, dword ptr [0x100269ec] */
  EDX = (r32((uint32_t)(0x100269ec)));
  /* 1001b32c push ebx */
  push32((uint32_t)(EBX));
  /* 1001b32d push esi */
  push32((uint32_t)(ESI));
  /* 1001b32e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1001b331 push edi */
  push32((uint32_t)(EDI));
  /* 1001b332 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 1001b335 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001b338 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1001b33b lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 1001b33e and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1001b341 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1001b344 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1001b347 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1001b348 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b34b jge 0x1001b35b */
  if ((C.sf==C.of)) goto L_1001b35b;
  /* 1001b34d or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1001b350 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1001b352 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1001b356 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 1001b359 jmp 0x1001b36b */
  goto L_1001b36b;
L_1001b35b:;
  /* 1001b35b add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001b35e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1001b361 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1001b363 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1001b365 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 1001b368 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1001b36b:;
  /* 1001b36b mov eax, dword ptr [0x100269e0] */
  EAX = (r32((uint32_t)(0x100269e0)));
  /* 1001b370 mov ebx, eax */
  EBX = (EAX);
  /* 1001b372 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b374 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1001b377 jae 0x1001b392 */
  if (!C.cf) goto L_1001b392;
L_1001b379:;
  /* 1001b379 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1001b37c mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1001b37e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1001b381 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1001b383 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1001b385 jne 0x1001b392 */
  if (!C.zf) goto L_1001b392;
  /* 1001b387 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001b38a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b38d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1001b390 jb 0x1001b379 */
  if (C.cf) goto L_1001b379;
L_1001b392:;
  /* 1001b392 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b395 jne 0x1001b410 */
  if (!C.zf) goto L_1001b410;
  /* 1001b397 mov ebx, edx */
  EBX = (EDX);
L_1001b399:;
  /* 1001b399 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b39b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1001b39e jae 0x1001b3b5 */
  if (!C.cf) goto L_1001b3b5;
  /* 1001b3a0 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1001b3a3 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1001b3a5 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1001b3a8 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1001b3aa or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1001b3ac jne 0x1001b3b3 */
  if (!C.zf) goto L_1001b3b3;
  /* 1001b3ae add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001b3b1 jmp 0x1001b399 */
  goto L_1001b399;
L_1001b3b3:;
  /* 1001b3b3 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1001b3b5:;
  /* 1001b3b5 jne 0x1001b410 */
  if (!C.zf) goto L_1001b410;
L_1001b3b7:;
  /* 1001b3b7 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b3ba jae 0x1001b3cd */
  if (!C.cf) goto L_1001b3cd;
  /* 1001b3bc cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b3c0 jne 0x1001b3ca */
  if (!C.zf) goto L_1001b3ca;
  /* 1001b3c2 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001b3c5 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1001b3c8 jmp 0x1001b3b7 */
  goto L_1001b3b7;
L_1001b3ca:;
  /* 1001b3ca cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1001b3cd:;
  /* 1001b3cd jne 0x1001b3f5 */
  if (!C.zf) goto L_1001b3f5;
  /* 1001b3cf mov ebx, edx */
  EBX = (EDX);
L_1001b3d1:;
  /* 1001b3d1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b3d3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1001b3d6 jae 0x1001b3e5 */
  if (!C.cf) goto L_1001b3e5;
  /* 1001b3d8 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b3dc jne 0x1001b3e3 */
  if (!C.zf) goto L_1001b3e3;
  /* 1001b3de add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001b3e1 jmp 0x1001b3d1 */
  goto L_1001b3d1;
L_1001b3e3:;
  /* 1001b3e3 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1001b3e5:;
  /* 1001b3e5 jne 0x1001b3f5 */
  if (!C.zf) goto L_1001b3f5;
  /* 1001b3e7 call 0x1001b624 */
  push32(0x1001b3ecu); f_1001b624();
  /* 1001b3ec mov ebx, eax */
  EBX = (EAX);
  /* 1001b3ee test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1001b3f0 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1001b3f3 je 0x1001b409 */
  if (C.zf) goto L_1001b409;
L_1001b3f5:;
  /* 1001b3f5 push ebx */
  push32((uint32_t)(EBX));
  /* 1001b3f6 call 0x1001b6d5 */
  push32(0x1001b3fbu); f_1001b6d5();
  /* 1001b3fb pop ecx */
  ECX = (pop32());
  /* 1001b3fc mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1001b3ff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1001b401 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 1001b404 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b407 jne 0x1001b410 */
  if (!C.zf) goto L_1001b410;
L_1001b409:;
  /* 1001b409 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001b40b jmp 0x1001b61f */
  goto L_1001b61f;
L_1001b410:;
  /* 1001b410 mov dword ptr [0x100269e0], ebx */
  w32((uint32_t)(0x100269e0), (EBX));
  /* 1001b416 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 1001b419 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1001b41b cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b41e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1001b421 je 0x1001b437 */
  if (C.zf) goto L_1001b437;
  /* 1001b423 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1001b42a mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1001b42e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1001b431 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1001b433 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1001b435 jne 0x1001b46e */
  if (!C.zf) goto L_1001b46e;
L_1001b437:;
  /* 1001b437 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 1001b43d mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 1001b440 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1001b443 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 1001b446 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1001b44a lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 1001b44d or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1001b44f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1001b452 jne 0x1001b46b */
  if (!C.zf) goto L_1001b46b;
L_1001b454:;
  /* 1001b454 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 1001b45a inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1001b45d and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1001b460 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001b463 mov edi, esi */
  EDI = (ESI);
  /* 1001b465 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 1001b467 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 1001b469 je 0x1001b454 */
  if (C.zf) goto L_1001b454;
L_1001b46b:;
  /* 1001b46b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1001b46e:;
  /* 1001b46e mov ecx, edx */
  ECX = (EDX);
  /* 1001b470 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1001b472 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1001b478 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1001b47f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1001b482 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1001b486 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 1001b488 jne 0x1001b497 */
  if (!C.zf) goto L_1001b497;
  /* 1001b48a mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1001b491 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1001b493 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1001b496 pop edi */
  EDI = (pop32());
L_1001b497:;
  /* 1001b497 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1001b499 jl 0x1001b4a0 */
  if ((C.sf!=C.of)) goto L_1001b4a0;
  /* 1001b49b shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1001b49d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1001b49e jmp 0x1001b497 */
  goto L_1001b497;
L_1001b4a0:;
  /* 1001b4a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1001b4a3 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 1001b4a7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1001b4a9 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001b4ac mov esi, ecx */
  ESI = (ECX);
  /* 1001b4ae mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1001b4b1 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1001b4b4 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1001b4b5 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b4b8 jle 0x1001b4bd */
  if ((C.zf||C.sf!=C.of)) goto L_1001b4bd;
  /* 1001b4ba push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1001b4bc pop esi */
  ESI = (pop32());
L_1001b4bd:;
  /* 1001b4bd cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b4bf je 0x1001b5d2 */
  if (C.zf) goto L_1001b5d2;
  /* 1001b4c5 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1001b4c8 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b4cb jne 0x1001b52e */
  if (!C.zf) goto L_1001b52e;
  /* 1001b4cd cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b4d0 jge 0x1001b4fd */
  if ((C.sf==C.of)) goto L_1001b4fd;
  /* 1001b4d2 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1001b4d7 mov ecx, edi */
  ECX = (EDI);
  /* 1001b4d9 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1001b4db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1001b4de lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1001b4e2 not ebx */
  EBX = (~(EBX));
  /* 1001b4e4 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1001b4e7 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 1001b4eb mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1001b4ef dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1001b4f1 jne 0x1001b52b */
  if (!C.zf) goto L_1001b52b;
  /* 1001b4f3 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001b4f6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1001b4f9 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 1001b4fb jmp 0x1001b52e */
  goto L_1001b52e;
L_1001b4fd:;
  /* 1001b4fd lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 1001b500 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1001b505 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1001b507 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1001b50a lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1001b50e lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1001b515 not ebx */
  EBX = (~(EBX));
  /* 1001b517 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1001b519 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1001b51b mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1001b51e jne 0x1001b52b */
  if (!C.zf) goto L_1001b52b;
  /* 1001b520 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001b523 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1001b526 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1001b529 jmp 0x1001b52e */
  goto L_1001b52e;
L_1001b52b:;
  /* 1001b52b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1001b52e:;
  /* 1001b52e mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 1001b531 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 1001b534 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b538 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 1001b53b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1001b53e mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 1001b541 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 1001b544 je 0x1001b5de */
  if (C.zf) goto L_1001b5de;
  /* 1001b54a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1001b54d mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 1001b551 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 1001b554 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 1001b557 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1001b55a mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1001b55d mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1001b560 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1001b563 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1001b566 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b569 jne 0x1001b5cf */
  if (!C.zf) goto L_1001b5cf;
  /* 1001b56b mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1001b56f cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b572 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 1001b575 jge 0x1001b5a0 */
  if ((C.sf==C.of)) goto L_1001b5a0;
  /* 1001b577 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1001b579 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001b57d mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1001b581 jne 0x1001b58e */
  if (!C.zf) goto L_1001b58e;
  /* 1001b583 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1001b588 mov ecx, esi */
  ECX = (ESI);
  /* 1001b58a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1001b58c or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1001b58e:;
  /* 1001b58e mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1001b593 mov ecx, esi */
  ECX = (ESI);
  /* 1001b595 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1001b597 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1001b59a or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1001b59e jmp 0x1001b5cf */
  goto L_1001b5cf;
L_1001b5a0:;
  /* 1001b5a0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1001b5a2 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001b5a6 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1001b5aa jne 0x1001b5b9 */
  if (!C.zf) goto L_1001b5b9;
  /* 1001b5ac lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1001b5af mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1001b5b4 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1001b5b6 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_1001b5b9:;
  /* 1001b5b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1001b5bc lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1001b5c3 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1001b5c6 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1001b5cb shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1001b5cd or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1001b5cf:;
  /* 1001b5cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1001b5d2:;
  /* 1001b5d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1001b5d4 je 0x1001b5e1 */
  if (C.zf) goto L_1001b5e1;
  /* 1001b5d6 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1001b5d8 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1001b5dc jmp 0x1001b5e1 */
  goto L_1001b5e1;
L_1001b5de:;
  /* 1001b5de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1001b5e1:;
  /* 1001b5e1 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 1001b5e4 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001b5e6 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 1001b5e9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1001b5eb mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1001b5ef mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1001b5f2 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1001b5f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1001b5f6 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 1001b5f9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1001b5fb jne 0x1001b617 */
  if (!C.zf) goto L_1001b617;
  /* 1001b5fd cmp ebx, dword ptr [0x100269e4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x100269e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b603 jne 0x1001b617 */
  if (!C.zf) goto L_1001b617;
  /* 1001b605 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1001b608 cmp ecx, dword ptr [0x100269dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x100269dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b60e jne 0x1001b617 */
  if (!C.zf) goto L_1001b617;
  /* 1001b610 and dword ptr [0x100269e4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100269e4)))&(0x0u); w32((uint32_t)(0x100269e4), (_r)); fl_logic(_r,32); }
L_1001b617:;
  /* 1001b617 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1001b61a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1001b61c lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_1001b61f:;
  /* 1001b61f pop edi */
  EDI = (pop32());
  /* 1001b620 pop esi */
  ESI = (pop32());
  /* 1001b621 pop ebx */
  EBX = (pop32());
  /* 1001b622 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001b623 ret  */
  ESPCHK(0x1001b31bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b624 @ 0x1001b624 (177 bytes, 53 insns) */
void f_1001b624(void) {
  FTRACE(0x1001b624u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001b624 mov eax, dword ptr [0x100269e8] */
  EAX = (r32((uint32_t)(0x100269e8)));
  /* 1001b629 mov ecx, dword ptr [0x100269d8] */
  ECX = (r32((uint32_t)(0x100269d8)));
  /* 1001b62f push esi */
  push32((uint32_t)(ESI));
  /* 1001b630 push edi */
  push32((uint32_t)(EDI));
  /* 1001b631 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1001b633 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b635 jne 0x1001b667 */
  if (!C.zf) goto L_1001b667;
  /* 1001b637 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 1001b63b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1001b63e push eax */
  push32((uint32_t)(EAX));
  /* 1001b63f push dword ptr [0x100269ec] */
  push32((uint32_t)(r32((uint32_t)(0x100269ec))));
  /* 1001b645 push edi */
  push32((uint32_t)(EDI));
  /* 1001b646 push dword ptr [0x10027c44] */
  push32((uint32_t)(r32((uint32_t)(0x10027c44))));
  /* 1001b64c call dword ptr [0x1001e0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e0ac))), 0x1001b652u);
  /* 1001b652 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b654 je 0x1001b6b7 */
  if (C.zf) goto L_1001b6b7;
  /* 1001b656 add dword ptr [0x100269d8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x100269d8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x100269d8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1001b65d mov dword ptr [0x100269ec], eax */
  w32((uint32_t)(0x100269ec), (EAX));
  /* 1001b662 mov eax, dword ptr [0x100269e8] */
  EAX = (r32((uint32_t)(0x100269e8)));
L_1001b667:;
  /* 1001b667 mov ecx, dword ptr [0x100269ec] */
  ECX = (r32((uint32_t)(0x100269ec)));
  /* 1001b66d push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1001b672 push 8 */
  push32((uint32_t)(0x8u));
  /* 1001b674 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1001b677 push dword ptr [0x10027c44] */
  push32((uint32_t)(r32((uint32_t)(0x10027c44))));
  /* 1001b67d lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1001b680 call dword ptr [0x1001e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e098))), 0x1001b686u);
  /* 1001b686 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b688 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 1001b68b je 0x1001b6b7 */
  if (C.zf) goto L_1001b6b7;
  /* 1001b68d push 4 */
  push32((uint32_t)(0x4u));
  /* 1001b68f push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1001b694 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1001b699 push edi */
  push32((uint32_t)(EDI));
  /* 1001b69a call dword ptr [0x1001e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e0a8))), 0x1001b6a0u);
  /* 1001b6a0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b6a2 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1001b6a5 jne 0x1001b6bb */
  if (!C.zf) goto L_1001b6bb;
  /* 1001b6a7 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1001b6aa push edi */
  push32((uint32_t)(EDI));
  /* 1001b6ab push dword ptr [0x10027c44] */
  push32((uint32_t)(r32((uint32_t)(0x10027c44))));
  /* 1001b6b1 call dword ptr [0x1001e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e080))), 0x1001b6b7u);
L_1001b6b7:;
  /* 1001b6b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001b6b9 jmp 0x1001b6d2 */
  goto L_1001b6d2;
L_1001b6bb:;
  /* 1001b6bb or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1001b6bf mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1001b6c1 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 1001b6c4 inc dword ptr [0x100269e8] */
  { uint32_t _r=(r32((uint32_t)(0x100269e8)))+1; w32((uint32_t)(0x100269e8), (_r)); fl_inc(_r,32); }
  /* 1001b6ca mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1001b6cd or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1001b6d0 mov eax, esi */
  EAX = (ESI);
L_1001b6d2:;
  /* 1001b6d2 pop edi */
  EDI = (pop32());
  /* 1001b6d3 pop esi */
  ESI = (pop32());
  /* 1001b6d4 ret  */
  ESPCHK(0x1001b624u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6d5 @ 0x1001b6d5 (251 bytes, 85 insns) */
void f_1001b6d5(void) {
  FTRACE(0x1001b6d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001b6d5 push ebp */
  push32((uint32_t)(EBP));
  /* 1001b6d6 mov ebp, esp */
  EBP = (ESP);
  /* 1001b6d8 push ecx */
  push32((uint32_t)(ECX));
  /* 1001b6d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001b6dc push ebx */
  push32((uint32_t)(EBX));
  /* 1001b6dd push esi */
  push32((uint32_t)(ESI));
  /* 1001b6de push edi */
  push32((uint32_t)(EDI));
  /* 1001b6df mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 1001b6e2 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 1001b6e5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1001b6e7:;
  /* 1001b6e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001b6e9 jl 0x1001b6f0 */
  if ((C.sf!=C.of)) goto L_1001b6f0;
  /* 1001b6eb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1001b6ed inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1001b6ee jmp 0x1001b6e7 */
  goto L_1001b6e7;
L_1001b6f0:;
  /* 1001b6f0 mov eax, ebx */
  EAX = (EBX);
  /* 1001b6f2 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1001b6f4 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1001b6fa pop edx */
  EDX = (pop32());
  /* 1001b6fb lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 1001b702 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1001b705:;
  /* 1001b705 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 1001b708 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 1001b70b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001b70e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1001b70f jne 0x1001b705 */
  if (!C.zf) goto L_1001b705;
  /* 1001b711 mov edi, ebx */
  EDI = (EBX);
  /* 1001b713 push 4 */
  push32((uint32_t)(0x4u));
  /* 1001b715 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 1001b718 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001b71b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1001b720 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1001b725 push edi */
  push32((uint32_t)(EDI));
  /* 1001b726 call dword ptr [0x1001e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e0a8))), 0x1001b72cu);
  /* 1001b72c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001b72e jne 0x1001b738 */
  if (!C.zf) goto L_1001b738;
  /* 1001b730 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1001b733 jmp 0x1001b7cb */
  goto L_1001b7cb;
L_1001b738:;
  /* 1001b738 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 1001b73e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b740 ja 0x1001b77e */
  if ((!C.cf&&!C.zf)) goto L_1001b77e;
  /* 1001b742 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_1001b745:;
  /* 1001b745 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 1001b749 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 1001b750 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 1001b756 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1001b75d mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1001b75f lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 1001b765 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1001b768 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 1001b772 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001b777 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 1001b77a cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b77c jbe 0x1001b745 */
  if ((C.cf||C.zf)) goto L_1001b745;
L_1001b77e:;
  /* 1001b77e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1001b781 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 1001b784 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001b789 push 1 */
  push32((uint32_t)(0x1u));
  /* 1001b78b pop edi */
  EDI = (pop32());
  /* 1001b78c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1001b78f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1001b792 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 1001b795 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1001b798 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1001b79b and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1001b7a0 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 1001b7a7 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 1001b7aa mov cl, al */
  CL = (AL);
  /* 1001b7ac inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1001b7ae test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001b7b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001b7b3 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 1001b7b6 jne 0x1001b7bb */
  if (!C.zf) goto L_1001b7bb;
  /* 1001b7b8 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_1001b7bb:;
  /* 1001b7bb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1001b7c0 mov ecx, ebx */
  ECX = (EBX);
  /* 1001b7c2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1001b7c4 not edx */
  EDX = (~(EDX));
  /* 1001b7c6 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1001b7c9 mov eax, ebx */
  EAX = (EBX);
L_1001b7cb:;
  /* 1001b7cb pop edi */
  EDI = (pop32());
  /* 1001b7cc pop esi */
  ESI = (pop32());
  /* 1001b7cd pop ebx */
  EBX = (pop32());
  /* 1001b7ce leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001b7cf ret  */
  ESPCHK(0x1001b6d5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7d0 @ 0x1001b7d0 (324 bytes, 102 insns) */
void f_1001b7d0(void) {
  FTRACE(0x1001b7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001b7d0 cmp dword ptr [0x10020e90], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10020e90))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b7d7 push ebx */
  push32((uint32_t)(EBX));
  /* 1001b7d8 push ebp */
  push32((uint32_t)(EBP));
  /* 1001b7d9 push esi */
  push32((uint32_t)(ESI));
  /* 1001b7da push edi */
  push32((uint32_t)(EDI));
  /* 1001b7db jne 0x1001b7e4 */
  if (!C.zf) goto L_1001b7e4;
  /* 1001b7dd mov esi, 0x10020e80 */
  ESI = (0x10020e80u);
  /* 1001b7e2 jmp 0x1001b801 */
  goto L_1001b801;
L_1001b7e4:;
  /* 1001b7e4 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 1001b7e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1001b7eb push dword ptr [0x10027c44] */
  push32((uint32_t)(r32((uint32_t)(0x10027c44))));
  /* 1001b7f1 call dword ptr [0x1001e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e098))), 0x1001b7f7u);
  /* 1001b7f7 mov esi, eax */
  ESI = (EAX);
  /* 1001b7f9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1001b7fb je 0x1001b90d */
  if (C.zf) goto L_1001b90d;
L_1001b801:;
  /* 1001b801 mov ebp, dword ptr [0x1001e0a8] */
  EBP = (r32((uint32_t)(0x1001e0a8)));
  /* 1001b807 push 4 */
  push32((uint32_t)(0x4u));
  /* 1001b809 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1001b80e push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 1001b813 push 0 */
  push32((uint32_t)(0x0u));
  /* 1001b815 call ebp */
  call_ind((uint32_t)(EBP), 0x1001b817u);
  /* 1001b817 mov edi, eax */
  EDI = (EAX);
  /* 1001b819 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1001b81b je 0x1001b8f6 */
  if (C.zf) goto L_1001b8f6;
  /* 1001b821 push 4 */
  push32((uint32_t)(0x4u));
  /* 1001b823 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 1001b828 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1001b82d push ebx */
  push32((uint32_t)(EBX));
  /* 1001b82e push edi */
  push32((uint32_t)(EDI));
  /* 1001b82f call ebp */
  call_ind((uint32_t)(EBP), 0x1001b831u);
  /* 1001b831 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001b833 je 0x1001b8e8 */
  if (C.zf) goto L_1001b8e8;
  /* 1001b839 mov eax, 0x10020e80 */
  EAX = (0x10020e80u);
  /* 1001b83e cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b840 jne 0x1001b860 */
  if (!C.zf) goto L_1001b860;
  /* 1001b842 cmp dword ptr [0x10020e80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10020e80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b849 jne 0x1001b850 */
  if (!C.zf) goto L_1001b850;
  /* 1001b84b mov dword ptr [0x10020e80], eax */
  w32((uint32_t)(0x10020e80), (EAX));
L_1001b850:;
  /* 1001b850 cmp dword ptr [0x10020e84], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10020e84))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b857 jne 0x1001b875 */
  if (!C.zf) goto L_1001b875;
  /* 1001b859 mov dword ptr [0x10020e84], eax */
  w32((uint32_t)(0x10020e84), (EAX));
  /* 1001b85e jmp 0x1001b875 */
  goto L_1001b875;
L_1001b860:;
  /* 1001b860 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1001b862 mov eax, dword ptr [0x10020e84] */
  EAX = (r32((uint32_t)(0x10020e84)));
  /* 1001b867 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1001b86a mov dword ptr [0x10020e84], esi */
  w32((uint32_t)(0x10020e84), (ESI));
  /* 1001b870 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1001b873 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1001b875:;
  /* 1001b875 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 1001b87b lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 1001b881 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 1001b884 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 1001b887 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 1001b88a mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 1001b88d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1001b890 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 1001b892 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_1001b897:;
  /* 1001b897 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1001b899 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b89c setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 1001b89f dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1001b8a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1001b8a2 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1001b8a3 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1001b8a4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1001b8a6 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1001b8a9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001b8ac cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b8b2 jl 0x1001b897 */
  if ((C.sf!=C.of)) goto L_1001b897;
  /* 1001b8b4 push ebx */
  push32((uint32_t)(EBX));
  /* 1001b8b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1001b8b7 push edi */
  push32((uint32_t)(EDI));
  /* 1001b8b8 call 0x10019c60 */
  push32(0x1001b8bdu); f_10019c60();
  /* 1001b8bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001b8c0:;
  /* 1001b8c0 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1001b8c3 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001b8c5 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b8c7 jae 0x1001b8e4 */
  if (!C.cf) goto L_1001b8e4;
  /* 1001b8c9 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 1001b8d0 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 1001b8d3 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1001b8d5 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 1001b8dc add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001b8e2 jmp 0x1001b8c0 */
  goto L_1001b8c0;
L_1001b8e4:;
  /* 1001b8e4 mov eax, esi */
  EAX = (ESI);
  /* 1001b8e6 jmp 0x1001b90f */
  goto L_1001b90f;
L_1001b8e8:;
  /* 1001b8e8 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1001b8ed push 0 */
  push32((uint32_t)(0x0u));
  /* 1001b8ef push edi */
  push32((uint32_t)(EDI));
  /* 1001b8f0 call dword ptr [0x1001e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e07c))), 0x1001b8f6u);
L_1001b8f6:;
  /* 1001b8f6 cmp esi, 0x10020e80 */
  { uint32_t _a=(ESI),_b=(0x10020e80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b8fc je 0x1001b90d */
  if (C.zf) goto L_1001b90d;
  /* 1001b8fe push esi */
  push32((uint32_t)(ESI));
  /* 1001b8ff push 0 */
  push32((uint32_t)(0x0u));
  /* 1001b901 push dword ptr [0x10027c44] */
  push32((uint32_t)(r32((uint32_t)(0x10027c44))));
  /* 1001b907 call dword ptr [0x1001e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e080))), 0x1001b90du);
L_1001b90d:;
  /* 1001b90d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1001b90f:;
  /* 1001b90f pop edi */
  EDI = (pop32());
  /* 1001b910 pop esi */
  ESI = (pop32());
  /* 1001b911 pop ebp */
  EBP = (pop32());
  /* 1001b912 pop ebx */
  EBX = (pop32());
  /* 1001b913 ret  */
  ESPCHK(0x1001b7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b914 @ 0x1001b914 (86 bytes, 27 insns) */
void f_1001b914(void) {
  FTRACE(0x1001b914u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001b914 push esi */
  push32((uint32_t)(ESI));
  /* 1001b915 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1001b919 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1001b91e push 0 */
  push32((uint32_t)(0x0u));
  /* 1001b920 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1001b923 call dword ptr [0x1001e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e07c))), 0x1001b929u);
  /* 1001b929 cmp dword ptr [0x10022ea0], esi */
  { uint32_t _a=(r32((uint32_t)(0x10022ea0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b92f jne 0x1001b939 */
  if (!C.zf) goto L_1001b939;
  /* 1001b931 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1001b934 mov dword ptr [0x10022ea0], eax */
  w32((uint32_t)(0x10022ea0), (EAX));
L_1001b939:;
  /* 1001b939 cmp esi, 0x10020e80 */
  { uint32_t _a=(ESI),_b=(0x10020e80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b93f je 0x1001b961 */
  if (C.zf) goto L_1001b961;
  /* 1001b941 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1001b944 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1001b946 push esi */
  push32((uint32_t)(ESI));
  /* 1001b947 push 0 */
  push32((uint32_t)(0x0u));
  /* 1001b949 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1001b94b mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1001b94d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1001b950 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1001b953 push dword ptr [0x10027c44] */
  push32((uint32_t)(r32((uint32_t)(0x10027c44))));
  /* 1001b959 call dword ptr [0x1001e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e080))), 0x1001b95fu);
  /* 1001b95f pop esi */
  ESI = (pop32());
  /* 1001b960 ret  */
  ESPCHK(0x1001b914u, _esp0);
  ESP += 4; return;
L_1001b961:;
  /* 1001b961 or dword ptr [0x10020e90], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10020e90)))|(0xffffffffu); w32((uint32_t)(0x10020e90), (_r)); fl_logic(_r,32); }
  /* 1001b968 pop esi */
  ESI = (pop32());
  /* 1001b969 ret  */
  ESPCHK(0x1001b914u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b96a @ 0x1001b96a (194 bytes, 66 insns) */
void f_1001b96a(void) {
  FTRACE(0x1001b96au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001b96a push ebp */
  push32((uint32_t)(EBP));
  /* 1001b96b mov ebp, esp */
  EBP = (ESP);
  /* 1001b96d push ecx */
  push32((uint32_t)(ECX));
  /* 1001b96e push ebx */
  push32((uint32_t)(EBX));
  /* 1001b96f push esi */
  push32((uint32_t)(ESI));
  /* 1001b970 mov esi, dword ptr [0x10020e84] */
  ESI = (r32((uint32_t)(0x10020e84)));
  /* 1001b976 push edi */
  push32((uint32_t)(EDI));
L_1001b977:;
  /* 1001b977 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b97b je 0x1001ba15 */
  if (C.zf) goto L_1001ba15;
  /* 1001b981 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1001b985 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 1001b98b mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_1001b990:;
  /* 1001b990 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b996 jne 0x1001b9d1 */
  if (!C.zf) goto L_1001b9d1;
  /* 1001b998 mov eax, ebx */
  EAX = (EBX);
  /* 1001b99a push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1001b99f add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001b9a2 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1001b9a7 push eax */
  push32((uint32_t)(EAX));
  /* 1001b9a8 call dword ptr [0x1001e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e07c))), 0x1001b9aeu);
  /* 1001b9ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001b9b0 je 0x1001b9d1 */
  if (C.zf) goto L_1001b9d1;
  /* 1001b9b2 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 1001b9b5 dec dword ptr [0x10026834] */
  { uint32_t _r=(r32((uint32_t)(0x10026834)))-1; w32((uint32_t)(0x10026834), (_r)); fl_dec(_r,32); }
  /* 1001b9bb mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1001b9be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001b9c0 je 0x1001b9c6 */
  if (C.zf) goto L_1001b9c6;
  /* 1001b9c2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b9c4 jbe 0x1001b9c9 */
  if ((C.cf||C.zf)) goto L_1001b9c9;
L_1001b9c6:;
  /* 1001b9c6 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_1001b9c9:;
  /* 1001b9c9 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1001b9cc dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 1001b9cf je 0x1001b9de */
  if (C.zf) goto L_1001b9de;
L_1001b9d1:;
  /* 1001b9d1 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001b9d7 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001b9da test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1001b9dc jge 0x1001b990 */
  if ((C.sf==C.of)) goto L_1001b990;
L_1001b9de:;
  /* 1001b9de cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b9e2 mov ecx, esi */
  ECX = (ESI);
  /* 1001b9e4 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 1001b9e7 je 0x1001ba15 */
  if (C.zf) goto L_1001ba15;
  /* 1001b9e9 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b9ed jne 0x1001ba15 */
  if (!C.zf) goto L_1001ba15;
  /* 1001b9ef push 1 */
  push32((uint32_t)(0x1u));
  /* 1001b9f1 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 1001b9f4 pop edx */
  EDX = (pop32());
L_1001b9f5:;
  /* 1001b9f5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001b9f8 jne 0x1001ba06 */
  if (!C.zf) goto L_1001ba06;
  /* 1001b9fa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1001b9fb add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001b9fe cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001ba04 jl 0x1001b9f5 */
  if ((C.sf!=C.of)) goto L_1001b9f5;
L_1001ba06:;
  /* 1001ba06 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001ba0c jne 0x1001ba15 */
  if (!C.zf) goto L_1001ba15;
  /* 1001ba0e push ecx */
  push32((uint32_t)(ECX));
  /* 1001ba0f call 0x1001b914 */
  push32(0x1001ba14u); f_1001b914();
  /* 1001ba14 pop ecx */
  ECX = (pop32());
L_1001ba15:;
  /* 1001ba15 cmp esi, dword ptr [0x10020e84] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10020e84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001ba1b je 0x1001ba27 */
  if (C.zf) goto L_1001ba27;
  /* 1001ba1d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001ba21 jg 0x1001b977 */
  if ((!C.zf&&C.sf==C.of)) goto L_1001b977;
L_1001ba27:;
  /* 1001ba27 pop edi */
  EDI = (pop32());
  /* 1001ba28 pop esi */
  ESI = (pop32());
  /* 1001ba29 pop ebx */
  EBX = (pop32());
  /* 1001ba2a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001ba2b ret  */
  ESPCHK(0x1001b96au, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba2c @ 0x1001ba2c (87 bytes, 34 insns) */
void f_1001ba2c(void) {
  FTRACE(0x1001ba2cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001ba2c mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1001ba30 mov edx, 0x10020e80 */
  EDX = (0x10020e80u);
  /* 1001ba35 push esi */
  push32((uint32_t)(ESI));
  /* 1001ba36 mov ecx, edx */
  ECX = (EDX);
L_1001ba38:;
  /* 1001ba38 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001ba3b jbe 0x1001ba42 */
  if ((C.cf||C.zf)) goto L_1001ba42;
  /* 1001ba3d cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001ba40 jb 0x1001ba4a */
  if (C.cf) goto L_1001ba4a;
L_1001ba42:;
  /* 1001ba42 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1001ba44 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001ba46 je 0x1001ba7f */
  if (C.zf) goto L_1001ba7f;
  /* 1001ba48 jmp 0x1001ba38 */
  goto L_1001ba38;
L_1001ba4a:;
  /* 1001ba4a test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 1001ba4c jne 0x1001ba7f */
  if (!C.zf) goto L_1001ba7f;
  /* 1001ba4e mov esi, eax */
  ESI = (EAX);
  /* 1001ba50 mov edx, 0x100 */
  EDX = (0x100u);
  /* 1001ba55 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 1001ba5b cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001ba5d jb 0x1001ba7f */
  if (C.cf) goto L_1001ba7f;
  /* 1001ba5f mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1001ba63 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1001ba65 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 1001ba69 mov ecx, eax */
  ECX = (EAX);
  /* 1001ba6b and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 1001ba70 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001ba72 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1001ba74 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001ba76 pop esi */
  ESI = (pop32());
  /* 1001ba77 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1001ba7a lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 1001ba7e ret  */
  ESPCHK(0x1001ba2cu, _esp0);
  ESP += 4; return;
L_1001ba7f:;
  /* 1001ba7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001ba81 pop esi */
  ESI = (pop32());
  /* 1001ba82 ret  */
  ESPCHK(0x1001ba2cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba83 @ 0x1001ba83 (69 bytes, 19 insns) */
void f_1001ba83(void) {
  FTRACE(0x1001ba83u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001ba83 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1001ba87 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1001ba8b sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001ba8e sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 1001ba91 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 1001ba95 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1001ba99 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1001ba9c add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1001ba9e and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1001baa1 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001baa7 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 1001baae jne 0x1001bac7 */
  if (!C.zf) goto L_1001bac7;
  /* 1001bab0 inc dword ptr [0x10026834] */
  { uint32_t _r=(r32((uint32_t)(0x10026834)))+1; w32((uint32_t)(0x10026834), (_r)); fl_inc(_r,32); }
  /* 1001bab6 cmp dword ptr [0x10026834], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10026834))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001babd jne 0x1001bac7 */
  if (!C.zf) goto L_1001bac7;
  /* 1001babf push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1001bac1 call 0x1001b96a */
  push32(0x1001bac6u); f_1001b96a();
  /* 1001bac6 pop ecx */
  ECX = (pop32());
L_1001bac7:;
  /* 1001bac7 ret  */
  ESPCHK(0x1001ba83u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bac8 @ 0x1001bac8 (520 bytes, 180 insns) */
void f_1001bac8(void) {
  FTRACE(0x1001bac8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001bac8 push ebp */
  push32((uint32_t)(EBP));
  /* 1001bac9 mov ebp, esp */
  EBP = (ESP);
  /* 1001bacb push ecx */
  push32((uint32_t)(ECX));
  /* 1001bacc push ecx */
  push32((uint32_t)(ECX));
  /* 1001bacd push ebx */
  push32((uint32_t)(EBX));
  /* 1001bace push esi */
  push32((uint32_t)(ESI));
  /* 1001bacf mov esi, dword ptr [0x10022ea0] */
  ESI = (r32((uint32_t)(0x10022ea0)));
  /* 1001bad5 push edi */
  push32((uint32_t)(EDI));
L_1001bad6:;
  /* 1001bad6 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 1001bad9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001badc je 0x1001bb81 */
  if (C.zf) goto L_1001bb81;
  /* 1001bae2 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 1001bae5 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 1001baeb mov eax, edi */
  EAX = (EDI);
  /* 1001baed sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001baef sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001baf2 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 1001baf5 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 1001baf8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001bafa cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bafc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1001baff jae 0x1001bb3b */
  if (!C.cf) goto L_1001bb3b;
L_1001bb01:;
  /* 1001bb01 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 1001bb03 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001bb06 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bb08 jl 0x1001bb24 */
  if ((C.sf!=C.of)) goto L_1001bb24;
  /* 1001bb0a cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bb0d jbe 0x1001bb24 */
  if ((C.cf||C.zf)) goto L_1001bb24;
  /* 1001bb0f push ebx */
  push32((uint32_t)(EBX));
  /* 1001bb10 push ecx */
  push32((uint32_t)(ECX));
  /* 1001bb11 push eax */
  push32((uint32_t)(EAX));
  /* 1001bb12 call 0x1001bcd0 */
  push32(0x1001bb17u); f_1001bcd0();
  /* 1001bb17 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001bb1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001bb1c jne 0x1001bb93 */
  if (!C.zf) goto L_1001bb93;
  /* 1001bb1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1001bb21 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_1001bb24:;
  /* 1001bb24 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001bb27 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 1001bb2d add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001bb32 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bb34 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1001bb37 jb 0x1001bb01 */
  if (C.cf) goto L_1001bb01;
  /* 1001bb39 jmp 0x1001bb3e */
  goto L_1001bb3e;
L_1001bb3b:;
  /* 1001bb3b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1001bb3e:;
  /* 1001bb3e mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1001bb41 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 1001bb44 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 1001bb47 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1001bb4a cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bb4c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1001bb4f jae 0x1001bb84 */
  if (!C.cf) goto L_1001bb84;
L_1001bb51:;
  /* 1001bb51 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1001bb53 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bb55 jl 0x1001bb70 */
  if ((C.sf!=C.of)) goto L_1001bb70;
  /* 1001bb57 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bb5a jbe 0x1001bb70 */
  if ((C.cf||C.zf)) goto L_1001bb70;
  /* 1001bb5c push ebx */
  push32((uint32_t)(EBX));
  /* 1001bb5d push eax */
  push32((uint32_t)(EAX));
  /* 1001bb5e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 1001bb61 call 0x1001bcd0 */
  push32(0x1001bb66u); f_1001bcd0();
  /* 1001bb66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001bb69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001bb6b jne 0x1001bb93 */
  if (!C.zf) goto L_1001bb93;
  /* 1001bb6d mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_1001bb70:;
  /* 1001bb70 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1001bb77 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001bb7a cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bb7d jb 0x1001bb51 */
  if (C.cf) goto L_1001bb51;
  /* 1001bb7f jmp 0x1001bb84 */
  goto L_1001bb84;
L_1001bb81:;
  /* 1001bb81 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1001bb84:;
  /* 1001bb84 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 1001bb86 cmp esi, dword ptr [0x10022ea0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10022ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bb8c je 0x1001bba3 */
  if (C.zf) goto L_1001bba3;
  /* 1001bb8e jmp 0x1001bad6 */
  goto L_1001bad6;
L_1001bb93:;
  /* 1001bb93 mov dword ptr [0x10022ea0], esi */
  w32((uint32_t)(0x10022ea0), (ESI));
  /* 1001bb99 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1001bb9b mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 1001bb9e jmp 0x1001bccb */
  goto L_1001bccb;
L_1001bba3:;
  /* 1001bba3 mov eax, 0x10020e80 */
  EAX = (0x10020e80u);
  /* 1001bba8 mov edi, eax */
  EDI = (EAX);
L_1001bbaa:;
  /* 1001bbaa cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bbae je 0x1001bbb6 */
  if (C.zf) goto L_1001bbb6;
  /* 1001bbb0 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bbb4 jne 0x1001bbc2 */
  if (!C.zf) goto L_1001bbc2;
L_1001bbb6:;
  /* 1001bbb6 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 1001bbb8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bbba je 0x1001bc97 */
  if (C.zf) goto L_1001bc97;
  /* 1001bbc0 jmp 0x1001bbaa */
  goto L_1001bbaa;
L_1001bbc2:;
  /* 1001bbc2 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 1001bbc5 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1001bbc9 mov esi, ebx */
  ESI = (EBX);
  /* 1001bbcb mov eax, ebx */
  EAX = (EBX);
  /* 1001bbcd sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001bbcf sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001bbd2 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 1001bbd5 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 1001bbd8 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001bbdb cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bbde jne 0x1001bbf1 */
  if (!C.zf) goto L_1001bbf1;
L_1001bbe0:;
  /* 1001bbe0 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bbe4 jge 0x1001bbf1 */
  if ((C.sf==C.of)) goto L_1001bbf1;
  /* 1001bbe6 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001bbe9 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1001bbec cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bbef je 0x1001bbe0 */
  if (C.zf) goto L_1001bbe0;
L_1001bbf1:;
  /* 1001bbf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1001bbf4 push 4 */
  push32((uint32_t)(0x4u));
  /* 1001bbf6 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 1001bbf9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1001bbfe push eax */
  push32((uint32_t)(EAX));
  /* 1001bbff push esi */
  push32((uint32_t)(ESI));
  /* 1001bc00 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1001bc03 call dword ptr [0x1001e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e0a8))), 0x1001bc09u);
  /* 1001bc09 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bc0b jne 0x1001bcc9 */
  if (!C.zf) goto L_1001bcc9;
  /* 1001bc11 push 0 */
  push32((uint32_t)(0x0u));
  /* 1001bc13 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 1001bc16 push esi */
  push32((uint32_t)(ESI));
  /* 1001bc17 call 0x10019c60 */
  push32(0x1001bc1cu); f_10019c60();
  /* 1001bc1c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1001bc1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001bc22 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1001bc24 mov ecx, ebx */
  ECX = (EBX);
  /* 1001bc26 jle 0x1001bc58 */
  if ((C.zf||C.sf!=C.of)) goto L_1001bc58;
  /* 1001bc28 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1001bc2b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1001bc2e:;
  /* 1001bc2e or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 1001bc35 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 1001bc38 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 1001bc3b mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1001bc40 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1001bc42 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1001bc44 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 1001bc4b add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001bc50 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001bc53 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1001bc56 jne 0x1001bc2e */
  if (!C.zf) goto L_1001bc2e;
L_1001bc58:;
  /* 1001bc58 mov dword ptr [0x10022ea0], edi */
  w32((uint32_t)(0x10022ea0), (EDI));
  /* 1001bc5e lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_1001bc64:;
  /* 1001bc64 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bc66 jae 0x1001bc74 */
  if (!C.cf) goto L_1001bc74;
  /* 1001bc68 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bc6b je 0x1001bc72 */
  if (C.zf) goto L_1001bc72;
  /* 1001bc6d add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001bc70 jmp 0x1001bc64 */
  goto L_1001bc64;
L_1001bc72:;
  /* 1001bc72 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1001bc74:;
  /* 1001bc74 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001bc76 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 1001bc78 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 1001bc7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001bc7e mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 1001bc81 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 1001bc84 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1001bc86 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1001bc89 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 1001bc8d lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 1001bc93 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1001bc95 jmp 0x1001bccb */
  goto L_1001bccb;
L_1001bc97:;
  /* 1001bc97 call 0x1001b7d0 */
  push32(0x1001bc9cu); f_1001b7d0();
  /* 1001bc9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001bc9e je 0x1001bcc9 */
  if (C.zf) goto L_1001bcc9;
  /* 1001bca0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1001bca3 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 1001bca6 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 1001bcaa mov dword ptr [0x10022ea0], eax */
  w32((uint32_t)(0x10022ea0), (EAX));
  /* 1001bcaf mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1001bcb1 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1001bcb6 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001bcb8 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1001bcbb movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 1001bcbe sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1001bcc1 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 1001bcc7 jmp 0x1001bccb */
  goto L_1001bccb;
L_1001bcc9:;
  /* 1001bcc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1001bccb:;
  /* 1001bccb pop edi */
  EDI = (pop32());
  /* 1001bccc pop esi */
  ESI = (pop32());
  /* 1001bccd pop ebx */
  EBX = (pop32());
  /* 1001bcce leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001bccf ret  */
  ESPCHK(0x1001bac8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bcd0 @ 0x1001bcd0 (292 bytes, 125 insns) */
void f_1001bcd0(void) {
  FTRACE(0x1001bcd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001bcd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1001bcd1 mov ebp, esp */
  EBP = (ESP);
  /* 1001bcd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1001bcd4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001bcd7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1001bcda push ebx */
  push32((uint32_t)(EBX));
  /* 1001bcdb push esi */
  push32((uint32_t)(ESI));
  /* 1001bcdc mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1001bcdf push edi */
  push32((uint32_t)(EDI));
  /* 1001bce0 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 1001bce2 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 1001bce8 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bcea mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1001bced mov eax, edi */
  EAX = (EDI);
  /* 1001bcef mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1001bcf2 jb 0x1001bd15 */
  if (C.cf) goto L_1001bd15;
  /* 1001bcf4 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 1001bcf7 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1001bcf9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bcfb jae 0x1001bd04 */
  if (!C.cf) goto L_1001bd04;
  /* 1001bcfd add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1001bcff sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1001bd02 jmp 0x1001bd0d */
  goto L_1001bd0d;
L_1001bd04:;
  /* 1001bd04 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1001bd08 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 1001bd0b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1001bd0d:;
  /* 1001bd0d lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 1001bd10 jmp 0x1001bde3 */
  goto L_1001bde3;
L_1001bd15:;
  /* 1001bd15 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001bd17 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001bd1a je 0x1001bd1e */
  if (C.zf) goto L_1001bd1e;
  /* 1001bd1c mov eax, esi */
  EAX = (ESI);
L_1001bd1e:;
  /* 1001bd1e lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 1001bd21 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bd23 jae 0x1001bd68 */
  if (!C.cf) goto L_1001bd68;
L_1001bd25:;
  /* 1001bd25 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1001bd27 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 1001bd29 jne 0x1001bd5b */
  if (!C.zf) goto L_1001bd5b;
  /* 1001bd2b push 1 */
  push32((uint32_t)(0x1u));
  /* 1001bd2d lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 1001bd30 pop esi */
  ESI = (pop32());
L_1001bd31:;
  /* 1001bd31 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001bd34 jne 0x1001bd3a */
  if (!C.zf) goto L_1001bd3a;
  /* 1001bd36 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1001bd37 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1001bd38 jmp 0x1001bd31 */
  goto L_1001bd31;
L_1001bd3a:;
  /* 1001bd3a cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bd3c jae 0x1001bd8c */
  if (!C.cf) goto L_1001bd8c;
  /* 1001bd3e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bd41 jne 0x1001bd48 */
  if (!C.zf) goto L_1001bd48;
  /* 1001bd43 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1001bd46 jmp 0x1001bd54 */
  goto L_1001bd54;
L_1001bd48:;
  /* 1001bd48 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1001bd4b cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bd4e jb 0x1001bded */
  if (C.cf) goto L_1001bded;
L_1001bd54:;
  /* 1001bd54 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 1001bd57 mov eax, ebx */
  EAX = (EBX);
  /* 1001bd59 jmp 0x1001bd60 */
  goto L_1001bd60;
L_1001bd5b:;
  /* 1001bd5b movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1001bd5e add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1001bd60:;
  /* 1001bd60 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 1001bd63 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bd66 jb 0x1001bd25 */
  if (C.cf) goto L_1001bd25;
L_1001bd68:;
  /* 1001bd68 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_1001bd6b:;
  /* 1001bd6b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bd6d jae 0x1001bded */
  if (!C.cf) goto L_1001bded;
  /* 1001bd6f lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 1001bd72 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bd75 jae 0x1001bded */
  if (!C.cf) goto L_1001bded;
  /* 1001bd77 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1001bd79 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001bd7b jne 0x1001bdbd */
  if (!C.zf) goto L_1001bdbd;
  /* 1001bd7d push 1 */
  push32((uint32_t)(0x1u));
  /* 1001bd7f lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 1001bd82 pop eax */
  EAX = (pop32());
L_1001bd83:;
  /* 1001bd83 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001bd86 jne 0x1001bdad */
  if (!C.zf) goto L_1001bdad;
  /* 1001bd88 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1001bd89 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1001bd8a jmp 0x1001bd83 */
  goto L_1001bd83;
L_1001bd8c:;
  /* 1001bd8c lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 1001bd8f cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bd92 jae 0x1001bd9d */
  if (!C.cf) goto L_1001bd9d;
  /* 1001bd94 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001bd96 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1001bd98 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1001bd9b jmp 0x1001bda6 */
  goto L_1001bda6;
L_1001bd9d:;
  /* 1001bd9d and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1001bda1 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 1001bda4 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_1001bda6:;
  /* 1001bda6 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1001bda8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001bdab jmp 0x1001bde3 */
  goto L_1001bde3;
L_1001bdad:;
  /* 1001bdad cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bdaf jae 0x1001bdc4 */
  if (!C.cf) goto L_1001bdc4;
  /* 1001bdb1 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1001bdb4 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bdb7 jb 0x1001bded */
  if (C.cf) goto L_1001bded;
  /* 1001bdb9 mov esi, ebx */
  ESI = (EBX);
  /* 1001bdbb jmp 0x1001bd6b */
  goto L_1001bd6b;
L_1001bdbd:;
  /* 1001bdbd movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1001bdc0 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001bdc2 jmp 0x1001bd6b */
  goto L_1001bd6b;
L_1001bdc4:;
  /* 1001bdc4 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 1001bdc7 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bdca jae 0x1001bdd5 */
  if (!C.cf) goto L_1001bdd5;
  /* 1001bdcc sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001bdce mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1001bdd0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1001bdd3 jmp 0x1001bdde */
  goto L_1001bdde;
L_1001bdd5:;
  /* 1001bdd5 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1001bdd9 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 1001bddc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1001bdde:;
  /* 1001bdde mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1001bde0 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_1001bde3:;
  /* 1001bde3 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1001bde6 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1001bde9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001bdeb jmp 0x1001bdef */
  goto L_1001bdef;
L_1001bded:;
  /* 1001bded xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1001bdef:;
  /* 1001bdef pop edi */
  EDI = (pop32());
  /* 1001bdf0 pop esi */
  ESI = (pop32());
  /* 1001bdf1 pop ebx */
  EBX = (pop32());
  /* 1001bdf2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001bdf3 ret  */
  ESPCHK(0x1001bcd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdf4 @ 0x1001bdf4 (137 bytes, 50 insns) */
void f_1001bdf4(void) {
  FTRACE(0x1001bdf4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001bdf4 push ebx */
  push32((uint32_t)(EBX));
  /* 1001bdf5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1001bdf7 cmp dword ptr [0x10026838], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10026838))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bdfd push esi */
  push32((uint32_t)(ESI));
  /* 1001bdfe push edi */
  push32((uint32_t)(EDI));
  /* 1001bdff jne 0x1001be43 */
  if (!C.zf) goto L_1001be43;
  /* 1001be01 push 0x1001e548 */
  push32((uint32_t)(0x1001e548u));
  /* 1001be06 call dword ptr [0x1001e0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e0b0))), 0x1001be0cu);
  /* 1001be0c mov edi, eax */
  EDI = (EAX);
  /* 1001be0e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001be10 je 0x1001be79 */
  if (C.zf) goto L_1001be79;
  /* 1001be12 mov esi, dword ptr [0x1001e088] */
  ESI = (r32((uint32_t)(0x1001e088)));
  /* 1001be18 push 0x1001e53c */
  push32((uint32_t)(0x1001e53cu));
  /* 1001be1d push edi */
  push32((uint32_t)(EDI));
  /* 1001be1e call esi */
  call_ind((uint32_t)(ESI), 0x1001be20u);
  /* 1001be20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001be22 mov dword ptr [0x10026838], eax */
  w32((uint32_t)(0x10026838), (EAX));
  /* 1001be27 je 0x1001be79 */
  if (C.zf) goto L_1001be79;
  /* 1001be29 push 0x1001e52c */
  push32((uint32_t)(0x1001e52cu));
  /* 1001be2e push edi */
  push32((uint32_t)(EDI));
  /* 1001be2f call esi */
  call_ind((uint32_t)(ESI), 0x1001be31u);
  /* 1001be31 push 0x1001e518 */
  push32((uint32_t)(0x1001e518u));
  /* 1001be36 push edi */
  push32((uint32_t)(EDI));
  /* 1001be37 mov dword ptr [0x1002683c], eax */
  w32((uint32_t)(0x1002683c), (EAX));
  /* 1001be3c call esi */
  call_ind((uint32_t)(ESI), 0x1001be3eu);
  /* 1001be3e mov dword ptr [0x10026840], eax */
  w32((uint32_t)(0x10026840), (EAX));
L_1001be43:;
  /* 1001be43 mov eax, dword ptr [0x1002683c] */
  EAX = (r32((uint32_t)(0x1002683c)));
  /* 1001be48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001be4a je 0x1001be62 */
  if (C.zf) goto L_1001be62;
  /* 1001be4c call eax */
  call_ind((uint32_t)(EAX), 0x1001be4eu);
  /* 1001be4e mov ebx, eax */
  EBX = (EAX);
  /* 1001be50 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1001be52 je 0x1001be62 */
  if (C.zf) goto L_1001be62;
  /* 1001be54 mov eax, dword ptr [0x10026840] */
  EAX = (r32((uint32_t)(0x10026840)));
  /* 1001be59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001be5b je 0x1001be62 */
  if (C.zf) goto L_1001be62;
  /* 1001be5d push ebx */
  push32((uint32_t)(EBX));
  /* 1001be5e call eax */
  call_ind((uint32_t)(EAX), 0x1001be60u);
  /* 1001be60 mov ebx, eax */
  EBX = (EAX);
L_1001be62:;
  /* 1001be62 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1001be66 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1001be6a push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1001be6e push ebx */
  push32((uint32_t)(EBX));
  /* 1001be6f call dword ptr [0x10026838] */
  call_ind((uint32_t)(r32((uint32_t)(0x10026838))), 0x1001be75u);
L_1001be75:;
  /* 1001be75 pop edi */
  EDI = (pop32());
  /* 1001be76 pop esi */
  ESI = (pop32());
  /* 1001be77 pop ebx */
  EBX = (pop32());
  /* 1001be78 ret  */
  ESPCHK(0x1001bdf4u, _esp0);
  ESP += 4; return;
L_1001be79:;
  /* 1001be79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001be7b jmp 0x1001be75 */
  goto L_1001be75;
}

/* _strncpy @ 0x1001be80 (254 bytes, 109 insns) */
void f_1001be80(void) {
  FTRACE(0x1001be80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001be80 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1001be84 push edi */
  push32((uint32_t)(EDI));
  /* 1001be85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1001be87 je 0x1001bf03 */
  if (C.zf) goto L_1001bf03;
  /* 1001be89 push esi */
  push32((uint32_t)(ESI));
  /* 1001be8a push ebx */
  push32((uint32_t)(EBX));
  /* 1001be8b mov ebx, ecx */
  EBX = (ECX);
  /* 1001be8d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1001be91 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1001be97 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1001be9b jne 0x1001bea4 */
  if (!C.zf) goto L_1001bea4;
  /* 1001be9d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1001bea0 jne 0x1001bf11 */
  if (!C.zf) goto L_1001bf11;
  /* 1001bea2 jmp 0x1001bec5 */
  goto L_1001bec5;
L_1001bea4:;
  /* 1001bea4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1001bea6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1001bea7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1001bea9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1001beaa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1001beab je 0x1001bed2 */
  if (C.zf) goto L_1001bed2;
  /* 1001bead test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001beaf je 0x1001beda */
  if (C.zf) goto L_1001beda;
  /* 1001beb1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1001beb7 jne 0x1001bea4 */
  if (!C.zf) goto L_1001bea4;
  /* 1001beb9 mov ebx, ecx */
  EBX = (ECX);
  /* 1001bebb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1001bebe jne 0x1001bf11 */
  if (!C.zf) goto L_1001bf11;
L_1001bec0:;
  /* 1001bec0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1001bec3 je 0x1001bed2 */
  if (C.zf) goto L_1001bed2;
L_1001bec5:;
  /* 1001bec5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1001bec7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1001bec8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1001beca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1001becb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1001becd je 0x1001befe */
  if (C.zf) goto L_1001befe;
  /* 1001becf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1001bed0 jne 0x1001bec5 */
  if (!C.zf) goto L_1001bec5;
L_1001bed2:;
  /* 1001bed2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1001bed6 pop ebx */
  EBX = (pop32());
  /* 1001bed7 pop esi */
  ESI = (pop32());
  /* 1001bed8 pop edi */
  EDI = (pop32());
  /* 1001bed9 ret  */
  ESPCHK(0x1001be80u, _esp0);
  ESP += 4; return;
L_1001beda:;
  /* 1001beda test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1001bee0 je 0x1001bef4 */
  if (C.zf) goto L_1001bef4;
L_1001bee2:;
  /* 1001bee2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1001bee4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1001bee5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1001bee6 je 0x1001bf76 */
  if (C.zf) goto L_1001bf76;
  /* 1001beec test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1001bef2 jne 0x1001bee2 */
  if (!C.zf) goto L_1001bee2;
L_1001bef4:;
  /* 1001bef4 mov ebx, ecx */
  EBX = (ECX);
  /* 1001bef6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1001bef9 jne 0x1001bf67 */
  if (!C.zf) goto L_1001bf67;
L_1001befb:;
  /* 1001befb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1001befd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1001befe:;
  /* 1001befe dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1001beff jne 0x1001befb */
  if (!C.zf) goto L_1001befb;
  /* 1001bf01 pop ebx */
  EBX = (pop32());
  /* 1001bf02 pop esi */
  ESI = (pop32());
L_1001bf03:;
  /* 1001bf03 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1001bf07 pop edi */
  EDI = (pop32());
  /* 1001bf08 ret  */
  ESPCHK(0x1001be80u, _esp0);
  ESP += 4; return;
L_1001bf09:;
  /* 1001bf09 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1001bf0b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001bf0e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1001bf0f je 0x1001bec0 */
  if (C.zf) goto L_1001bec0;
L_1001bf11:;
  /* 1001bf11 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1001bf16 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1001bf18 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001bf1a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1001bf1d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1001bf1f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1001bf21 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001bf24 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1001bf29 je 0x1001bf09 */
  if (C.zf) goto L_1001bf09;
  /* 1001bf2b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1001bf2d je 0x1001bf5b */
  if (C.zf) goto L_1001bf5b;
  /* 1001bf2f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1001bf31 je 0x1001bf51 */
  if (C.zf) goto L_1001bf51;
  /* 1001bf33 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1001bf39 je 0x1001bf47 */
  if (C.zf) goto L_1001bf47;
  /* 1001bf3b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1001bf41 jne 0x1001bf09 */
  if (!C.zf) goto L_1001bf09;
  /* 1001bf43 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1001bf45 jmp 0x1001bf5f */
  goto L_1001bf5f;
L_1001bf47:;
  /* 1001bf47 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1001bf4d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1001bf4f jmp 0x1001bf5f */
  goto L_1001bf5f;
L_1001bf51:;
  /* 1001bf51 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1001bf57 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1001bf59 jmp 0x1001bf5f */
  goto L_1001bf5f;
L_1001bf5b:;
  /* 1001bf5b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1001bf5d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1001bf5f:;
  /* 1001bf5f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001bf62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001bf64 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1001bf65 je 0x1001bf71 */
  if (C.zf) goto L_1001bf71;
L_1001bf67:;
  /* 1001bf67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1001bf69:;
  /* 1001bf69 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1001bf6b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001bf6e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1001bf6f jne 0x1001bf69 */
  if (!C.zf) goto L_1001bf69;
L_1001bf71:;
  /* 1001bf71 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1001bf74 jne 0x1001befb */
  if (!C.zf) goto L_1001befb;
L_1001bf76:;
  /* 1001bf76 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1001bf7a pop ebx */
  EBX = (pop32());
  /* 1001bf7b pop esi */
  ESI = (pop32());
  /* 1001bf7c pop edi */
  EDI = (pop32());
  /* 1001bf7d ret  */
  ESPCHK(0x1001be80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf7e @ 0x1001bf7e (115 bytes, 37 insns) */
void f_1001bf7e(void) {
  FTRACE(0x1001bf7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001bf7e push esi */
  push32((uint32_t)(ESI));
  /* 1001bf7f call 0x1001bffa */
  push32(0x1001bf84u); f_1001bffa();
  /* 1001bf84 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1001bf88 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1001bf8a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1001bf8c mov eax, 0x10022eb0 */
  EAX = (0x10022eb0u);
L_1001bf91:;
  /* 1001bf91 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bf93 je 0x1001bfb7 */
  if (C.zf) goto L_1001bfb7;
  /* 1001bf95 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001bf98 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1001bf99 cmp eax, 0x10023018 */
  { uint32_t _a=(EAX),_b=(0x10023018u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bf9e jl 0x1001bf91 */
  if ((C.sf!=C.of)) goto L_1001bf91;
  /* 1001bfa0 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bfa3 jb 0x1001bfc7 */
  if (C.cf) goto L_1001bfc7;
  /* 1001bfa5 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bfa8 ja 0x1001bfc7 */
  if ((!C.cf&&!C.zf)) goto L_1001bfc7;
  /* 1001bfaa call 0x1001bff1 */
  push32(0x1001bfafu); f_1001bff1();
  /* 1001bfaf mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1001bfb5 pop esi */
  ESI = (pop32());
  /* 1001bfb6 ret  */
  ESPCHK(0x1001bf7eu, _esp0);
  ESP += 4; return;
L_1001bfb7:;
  /* 1001bfb7 call 0x1001bff1 */
  push32(0x1001bfbcu); f_1001bff1();
  /* 1001bfbc mov ecx, dword ptr [esi*8 + 0x10022eb4] */
  ECX = (r32((uint32_t)(ESI*8 + 0x10022eb4)));
  /* 1001bfc3 pop esi */
  ESI = (pop32());
  /* 1001bfc4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1001bfc6 ret  */
  ESPCHK(0x1001bf7eu, _esp0);
  ESP += 4; return;
L_1001bfc7:;
  /* 1001bfc7 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bfcd jb 0x1001bfe4 */
  if (C.cf) goto L_1001bfe4;
  /* 1001bfcf cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001bfd5 ja 0x1001bfe4 */
  if ((!C.cf&&!C.zf)) goto L_1001bfe4;
  /* 1001bfd7 call 0x1001bff1 */
  push32(0x1001bfdcu); f_1001bff1();
  /* 1001bfdc mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1001bfe2 pop esi */
  ESI = (pop32());
  /* 1001bfe3 ret  */
  ESPCHK(0x1001bf7eu, _esp0);
  ESP += 4; return;
L_1001bfe4:;
  /* 1001bfe4 call 0x1001bff1 */
  push32(0x1001bfe9u); f_1001bff1();
  /* 1001bfe9 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1001bfef pop esi */
  ESI = (pop32());
  /* 1001bff0 ret  */
  ESPCHK(0x1001bf7eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bff1 @ 0x1001bff1 (9 bytes, 3 insns) */
void f_1001bff1(void) {
  FTRACE(0x1001bff1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001bff1 call 0x100180c8 */
  push32(0x1001bff6u); f_100180c8();
  /* 1001bff6 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001bff9 ret  */
  ESPCHK(0x1001bff1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bffa @ 0x1001bffa (9 bytes, 3 insns) */
void f_1001bffa(void) {
  FTRACE(0x1001bffau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001bffa call 0x100180c8 */
  push32(0x1001bfffu); f_100180c8();
  /* 1001bfff add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001c002 ret  */
  ESPCHK(0x1001bffau, _esp0);
  ESP += 4; return;
}

/* FUN_1000c003 @ 0x1001c003 (127 bytes, 48 insns) */
void f_1001c003(void) {
  FTRACE(0x1001c003u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001c003 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1001c007 push esi */
  push32((uint32_t)(ESI));
  /* 1001c008 cmp ecx, dword ptr [0x10027d60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10027d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c00e push edi */
  push32((uint32_t)(EDI));
  /* 1001c00f jae 0x1001c069 */
  if (!C.cf) goto L_1001c069;
  /* 1001c011 mov eax, ecx */
  EAX = (ECX);
  /* 1001c013 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1001c016 lea edi, [eax*4 + 0x10027c60] */
  EDI = ((uint32_t)(EAX*4 + 0x10027c60));
  /* 1001c01d mov eax, ecx */
  EAX = (ECX);
  /* 1001c01f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1001c022 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1001c025 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1001c027 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1001c02a add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001c02c test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1001c030 je 0x1001c069 */
  if (C.zf) goto L_1001c069;
  /* 1001c032 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c035 je 0x1001c069 */
  if (C.zf) goto L_1001c069;
  /* 1001c037 cmp dword ptr [0x10026674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10026674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c03e jne 0x1001c05f */
  if (!C.zf) goto L_1001c05f;
  /* 1001c040 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001c042 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001c044 je 0x1001c056 */
  if (C.zf) goto L_1001c056;
  /* 1001c046 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1001c047 je 0x1001c051 */
  if (C.zf) goto L_1001c051;
  /* 1001c049 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1001c04a jne 0x1001c05f */
  if (!C.zf) goto L_1001c05f;
  /* 1001c04c push eax */
  push32((uint32_t)(EAX));
  /* 1001c04d push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1001c04f jmp 0x1001c059 */
  goto L_1001c059;
L_1001c051:;
  /* 1001c051 push eax */
  push32((uint32_t)(EAX));
  /* 1001c052 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1001c054 jmp 0x1001c059 */
  goto L_1001c059;
L_1001c056:;
  /* 1001c056 push eax */
  push32((uint32_t)(EAX));
  /* 1001c057 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_1001c059:;
  /* 1001c059 call dword ptr [0x1001e0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e0b4))), 0x1001c05fu);
L_1001c05f:;
  /* 1001c05f mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1001c061 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 1001c065 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001c067 jmp 0x1001c07f */
  goto L_1001c07f;
L_1001c069:;
  /* 1001c069 call 0x1001bff1 */
  push32(0x1001c06eu); f_1001bff1();
  /* 1001c06e mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1001c074 call 0x1001bffa */
  push32(0x1001c079u); f_1001bffa();
  /* 1001c079 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1001c07c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1001c07f:;
  /* 1001c07f pop edi */
  EDI = (pop32());
  /* 1001c080 pop esi */
  ESI = (pop32());
  /* 1001c081 ret  */
  ESPCHK(0x1001c003u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c082 @ 0x1001c082 (66 bytes, 19 insns) */
void f_1001c082(void) {
  FTRACE(0x1001c082u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001c082 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1001c086 cmp eax, dword ptr [0x10027d60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10027d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c08c jae 0x1001c0ad */
  if (!C.cf) goto L_1001c0ad;
  /* 1001c08e mov ecx, eax */
  ECX = (EAX);
  /* 1001c090 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1001c093 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1001c096 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1001c099 mov ecx, dword ptr [ecx*4 + 0x10027c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10027c60)));
  /* 1001c0a0 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1001c0a5 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 1001c0a8 je 0x1001c0ad */
  if (C.zf) goto L_1001c0ad;
  /* 1001c0aa mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 1001c0ac ret  */
  ESPCHK(0x1001c082u, _esp0);
  ESP += 4; return;
L_1001c0ad:;
  /* 1001c0ad call 0x1001bff1 */
  push32(0x1001c0b2u); f_1001bff1();
  /* 1001c0b2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1001c0b8 call 0x1001bffa */
  push32(0x1001c0bdu); f_1001bffa();
  /* 1001c0bd and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1001c0c0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1001c0c3 ret  */
  ESPCHK(0x1001c082u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0c4 @ 0x1001c0c4 (95 bytes, 34 insns) */
void f_1001c0c4(void) {
  FTRACE(0x1001c0c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001c0c4 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1001c0c8 push ebx */
  push32((uint32_t)(EBX));
  /* 1001c0c9 mov ecx, eax */
  ECX = (EAX);
  /* 1001c0cb and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1001c0ce sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1001c0d1 push esi */
  push32((uint32_t)(ESI));
  /* 1001c0d2 push edi */
  push32((uint32_t)(EDI));
  /* 1001c0d3 mov esi, dword ptr [ecx*4 + 0x10027c60] */
  ESI = (r32((uint32_t)(ECX*4 + 0x10027c60)));
  /* 1001c0da lea ebx, [ecx*4 + 0x10027c60] */
  EBX = ((uint32_t)(ECX*4 + 0x10027c60));
  /* 1001c0e1 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 1001c0e4 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 1001c0e7 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001c0e9 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c0ed jne 0x1001c112 */
  if (!C.zf) goto L_1001c112;
  /* 1001c0ef push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1001c0f1 call 0x1001a093 */
  push32(0x1001c0f6u); f_1001a093();
  /* 1001c0f6 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c0fa pop ecx */
  ECX = (pop32());
  /* 1001c0fb jne 0x1001c10a */
  if (!C.zf) goto L_1001c10a;
  /* 1001c0fd lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 1001c100 push eax */
  push32((uint32_t)(EAX));
  /* 1001c101 call dword ptr [0x1001e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e094))), 0x1001c107u);
  /* 1001c107 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1001c10a:;
  /* 1001c10a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1001c10c call 0x1001a0f4 */
  push32(0x1001c111u); f_1001a0f4();
  /* 1001c111 pop ecx */
  ECX = (pop32());
L_1001c112:;
  /* 1001c112 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1001c114 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 1001c118 push eax */
  push32((uint32_t)(EAX));
  /* 1001c119 call dword ptr [0x1001e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e00c))), 0x1001c11fu);
  /* 1001c11f pop edi */
  EDI = (pop32());
  /* 1001c120 pop esi */
  ESI = (pop32());
  /* 1001c121 pop ebx */
  EBX = (pop32());
  /* 1001c122 ret  */
  ESPCHK(0x1001c0c4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c123 @ 0x1001c123 (34 bytes, 10 insns) */
void f_1001c123(void) {
  FTRACE(0x1001c123u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001c123 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1001c127 mov ecx, eax */
  ECX = (EAX);
  /* 1001c129 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1001c12c sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1001c12f lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1001c132 mov ecx, dword ptr [ecx*4 + 0x10027c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10027c60)));
  /* 1001c139 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 1001c13d push eax */
  push32((uint32_t)(EAX));
  /* 1001c13e call dword ptr [0x1001e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e008))), 0x1001c144u);
  /* 1001c144 ret  */
  ESPCHK(0x1001c123u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1c6 @ 0x1001c1c6 (46 bytes, 22 insns) */
void f_1001c1c6(void) {
  FTRACE(0x1001c1c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001c1c6 push esi */
  push32((uint32_t)(ESI));
  /* 1001c1c7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1001c1cb push esi */
  push32((uint32_t)(ESI));
  /* 1001c1cc call 0x1001c1f4 */
  push32(0x1001c1d1u); f_1001c1f4();
  /* 1001c1d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001c1d3 pop ecx */
  ECX = (pop32());
  /* 1001c1d4 je 0x1001c1db */
  if (C.zf) goto L_1001c1db;
  /* 1001c1d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1001c1d9 pop esi */
  ESI = (pop32());
  /* 1001c1da ret  */
  ESPCHK(0x1001c1c6u, _esp0);
  ESP += 4; return;
L_1001c1db:;
  /* 1001c1db test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 1001c1df je 0x1001c1f0 */
  if (C.zf) goto L_1001c1f0;
  /* 1001c1e1 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1001c1e4 call 0x1001d340 */
  push32(0x1001c1e9u); f_1001d340();
  /* 1001c1e9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1001c1eb pop ecx */
  ECX = (pop32());
  /* 1001c1ec pop esi */
  ESI = (pop32());
  /* 1001c1ed sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001c1ef ret  */
  ESPCHK(0x1001c1c6u, _esp0);
  ESP += 4; return;
L_1001c1f0:;
  /* 1001c1f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001c1f2 pop esi */
  ESI = (pop32());
  /* 1001c1f3 ret  */
  ESPCHK(0x1001c1c6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1f4 @ 0x1001c1f4 (92 bytes, 40 insns) */
void f_1001c1f4(void) {
  FTRACE(0x1001c1f4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001c1f4 push ebx */
  push32((uint32_t)(EBX));
  /* 1001c1f5 push esi */
  push32((uint32_t)(ESI));
  /* 1001c1f6 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1001c1fa xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1001c1fc push edi */
  push32((uint32_t)(EDI));
  /* 1001c1fd mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1001c200 mov ecx, eax */
  ECX = (EAX);
  /* 1001c202 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1001c205 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c208 jne 0x1001c241 */
  if (!C.zf) goto L_1001c241;
  /* 1001c20a test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 1001c20e je 0x1001c241 */
  if (C.zf) goto L_1001c241;
  /* 1001c210 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1001c213 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 1001c215 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001c217 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1001c219 jle 0x1001c241 */
  if ((C.zf||C.sf!=C.of)) goto L_1001c241;
  /* 1001c21b push edi */
  push32((uint32_t)(EDI));
  /* 1001c21c push eax */
  push32((uint32_t)(EAX));
  /* 1001c21d push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1001c220 call 0x10018cf5 */
  push32(0x1001c225u); f_10018cf5();
  /* 1001c225 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001c228 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c22a jne 0x1001c23a */
  if (!C.zf) goto L_1001c23a;
  /* 1001c22c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1001c22f test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 1001c231 je 0x1001c241 */
  if (C.zf) goto L_1001c241;
  /* 1001c233 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 1001c235 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1001c238 jmp 0x1001c241 */
  goto L_1001c241;
L_1001c23a:;
  /* 1001c23a or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1001c23e or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_1001c241:;
  /* 1001c241 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1001c244 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1001c248 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1001c24a pop edi */
  EDI = (pop32());
  /* 1001c24b mov eax, ebx */
  EAX = (EBX);
  /* 1001c24d pop esi */
  ESI = (pop32());
  /* 1001c24e pop ebx */
  EBX = (pop32());
  /* 1001c24f ret  */
  ESPCHK(0x1001c1f4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c259 @ 0x1001c259 (164 bytes, 66 insns) */
void f_1001c259(void) {
  FTRACE(0x1001c259u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001c259 push ebx */
  push32((uint32_t)(EBX));
  /* 1001c25a push esi */
  push32((uint32_t)(ESI));
  /* 1001c25b push edi */
  push32((uint32_t)(EDI));
  /* 1001c25c push 2 */
  push32((uint32_t)(0x2u));
  /* 1001c25e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1001c260 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1001c262 call 0x1001a093 */
  push32(0x1001c267u); f_1001a093();
  /* 1001c267 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1001c269 pop ecx */
  ECX = (pop32());
  /* 1001c26a cmp dword ptr [0x10027c40], esi */
  { uint32_t _a=(r32((uint32_t)(0x10027c40))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c270 jle 0x1001c2e6 */
  if ((C.zf||C.sf!=C.of)) goto L_1001c2e6;
L_1001c272:;
  /* 1001c272 mov eax, dword ptr [0x10026c28] */
  EAX = (r32((uint32_t)(0x10026c28)));
  /* 1001c277 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1001c27a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001c27c je 0x1001c2dd */
  if (C.zf) goto L_1001c2dd;
  /* 1001c27e test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1001c282 je 0x1001c2dd */
  if (C.zf) goto L_1001c2dd;
  /* 1001c284 push eax */
  push32((uint32_t)(EAX));
  /* 1001c285 push esi */
  push32((uint32_t)(ESI));
  /* 1001c286 call 0x1001903d */
  push32(0x1001c28bu); f_1001903d();
  /* 1001c28b mov eax, dword ptr [0x10026c28] */
  EAX = (r32((uint32_t)(0x10026c28)));
  /* 1001c290 pop ecx */
  ECX = (pop32());
  /* 1001c291 pop ecx */
  ECX = (pop32());
  /* 1001c292 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1001c295 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1001c298 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 1001c29b je 0x1001c2cd */
  if (C.zf) goto L_1001c2cd;
  /* 1001c29d cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c2a2 jne 0x1001c2b3 */
  if (!C.zf) goto L_1001c2b3;
  /* 1001c2a4 push eax */
  push32((uint32_t)(EAX));
  /* 1001c2a5 call 0x1001c1c6 */
  push32(0x1001c2aau); f_1001c1c6();
  /* 1001c2aa cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c2ad pop ecx */
  ECX = (pop32());
  /* 1001c2ae je 0x1001c2cd */
  if (C.zf) goto L_1001c2cd;
  /* 1001c2b0 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1001c2b1 jmp 0x1001c2cd */
  goto L_1001c2cd;
L_1001c2b3:;
  /* 1001c2b3 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c2b8 jne 0x1001c2cd */
  if (!C.zf) goto L_1001c2cd;
  /* 1001c2ba test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 1001c2bd je 0x1001c2cd */
  if (C.zf) goto L_1001c2cd;
  /* 1001c2bf push eax */
  push32((uint32_t)(EAX));
  /* 1001c2c0 call 0x1001c1c6 */
  push32(0x1001c2c5u); f_1001c1c6();
  /* 1001c2c5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c2c8 pop ecx */
  ECX = (pop32());
  /* 1001c2c9 jne 0x1001c2cd */
  if (!C.zf) goto L_1001c2cd;
  /* 1001c2cb or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_1001c2cd:;
  /* 1001c2cd mov eax, dword ptr [0x10026c28] */
  EAX = (r32((uint32_t)(0x10026c28)));
  /* 1001c2d2 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 1001c2d5 push esi */
  push32((uint32_t)(ESI));
  /* 1001c2d6 call 0x1001908f */
  push32(0x1001c2dbu); f_1001908f();
  /* 1001c2db pop ecx */
  ECX = (pop32());
  /* 1001c2dc pop ecx */
  ECX = (pop32());
L_1001c2dd:;
  /* 1001c2dd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1001c2de cmp esi, dword ptr [0x10027c40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10027c40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c2e4 jl 0x1001c272 */
  if ((C.sf!=C.of)) goto L_1001c272;
L_1001c2e6:;
  /* 1001c2e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1001c2e8 call 0x1001a0f4 */
  push32(0x1001c2edu); f_1001a0f4();
  /* 1001c2ed cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c2f2 pop ecx */
  ECX = (pop32());
  /* 1001c2f3 mov eax, ebx */
  EAX = (EBX);
  /* 1001c2f5 je 0x1001c2f9 */
  if (C.zf) goto L_1001c2f9;
  /* 1001c2f7 mov eax, edi */
  EAX = (EDI);
L_1001c2f9:;
  /* 1001c2f9 pop edi */
  EDI = (pop32());
  /* 1001c2fa pop esi */
  ESI = (pop32());
  /* 1001c2fb pop ebx */
  EBX = (pop32());
  /* 1001c2fc ret  */
  ESPCHK(0x1001c259u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2fd @ 0x1001c2fd (318 bytes, 123 insns) */
void f_1001c2fd(void) {
  FTRACE(0x1001c2fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001c2fd push ebp */
  push32((uint32_t)(EBP));
  /* 1001c2fe mov ebp, esp */
  EBP = (ESP);
  /* 1001c300 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1001c302 push 0x1001e560 */
  push32((uint32_t)(0x1001e560u));
  /* 1001c307 push 0x1001d0b0 */
  push32((uint32_t)(0x1001d0b0u));
  /* 1001c30c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1001c312 push eax */
  push32((uint32_t)(EAX));
  /* 1001c313 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1001c31a sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001c31d push ebx */
  push32((uint32_t)(EBX));
  /* 1001c31e push esi */
  push32((uint32_t)(ESI));
  /* 1001c31f push edi */
  push32((uint32_t)(EDI));
  /* 1001c320 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1001c323 mov eax, dword ptr [0x10026884] */
  EAX = (r32((uint32_t)(0x10026884)));
  /* 1001c328 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1001c32a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c32c jne 0x1001c36c */
  if (!C.zf) goto L_1001c36c;
  /* 1001c32e lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1001c331 push eax */
  push32((uint32_t)(EAX));
  /* 1001c332 push 1 */
  push32((uint32_t)(0x1u));
  /* 1001c334 pop esi */
  ESI = (pop32());
  /* 1001c335 push esi */
  push32((uint32_t)(ESI));
  /* 1001c336 push 0x1001e558 */
  push32((uint32_t)(0x1001e558u));
  /* 1001c33b push esi */
  push32((uint32_t)(ESI));
  /* 1001c33c call dword ptr [0x1001e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e0c0))), 0x1001c342u);
  /* 1001c342 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001c344 je 0x1001c34a */
  if (C.zf) goto L_1001c34a;
  /* 1001c346 mov eax, esi */
  EAX = (ESI);
  /* 1001c348 jmp 0x1001c367 */
  goto L_1001c367;
L_1001c34a:;
  /* 1001c34a lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1001c34d push eax */
  push32((uint32_t)(EAX));
  /* 1001c34e push esi */
  push32((uint32_t)(ESI));
  /* 1001c34f push 0x1001e554 */
  push32((uint32_t)(0x1001e554u));
  /* 1001c354 push esi */
  push32((uint32_t)(ESI));
  /* 1001c355 push ebx */
  push32((uint32_t)(EBX));
  /* 1001c356 call dword ptr [0x1001e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e0bc))), 0x1001c35cu);
  /* 1001c35c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001c35e je 0x1001c432 */
  if (C.zf) goto L_1001c432;
  /* 1001c364 push 2 */
  push32((uint32_t)(0x2u));
  /* 1001c366 pop eax */
  EAX = (pop32());
L_1001c367:;
  /* 1001c367 mov dword ptr [0x10026884], eax */
  w32((uint32_t)(0x10026884), (EAX));
L_1001c36c:;
  /* 1001c36c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c36f jne 0x1001c395 */
  if (!C.zf) goto L_1001c395;
  /* 1001c371 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1001c374 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c376 jne 0x1001c37d */
  if (!C.zf) goto L_1001c37d;
  /* 1001c378 mov eax, dword ptr [0x10026858] */
  EAX = (r32((uint32_t)(0x10026858)));
L_1001c37d:;
  /* 1001c37d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1001c380 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1001c383 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1001c386 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1001c389 push eax */
  push32((uint32_t)(EAX));
  /* 1001c38a call dword ptr [0x1001e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e0bc))), 0x1001c390u);
  /* 1001c390 jmp 0x1001c434 */
  goto L_1001c434;
L_1001c395:;
  /* 1001c395 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c398 jne 0x1001c432 */
  if (!C.zf) goto L_1001c432;
  /* 1001c39e cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c3a1 jne 0x1001c3ab */
  if (!C.zf) goto L_1001c3ab;
  /* 1001c3a3 mov eax, dword ptr [0x10026868] */
  EAX = (r32((uint32_t)(0x10026868)));
  /* 1001c3a8 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1001c3ab:;
  /* 1001c3ab push ebx */
  push32((uint32_t)(EBX));
  /* 1001c3ac push ebx */
  push32((uint32_t)(EBX));
  /* 1001c3ad push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1001c3b0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1001c3b3 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1001c3b6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1001c3b8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001c3ba and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1001c3bd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1001c3be push eax */
  push32((uint32_t)(EAX));
  /* 1001c3bf push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1001c3c2 call dword ptr [0x1001e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e0b8))), 0x1001c3c8u);
  /* 1001c3c8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1001c3cb cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c3cd je 0x1001c432 */
  if (C.zf) goto L_1001c432;
  /* 1001c3cf mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1001c3d2 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 1001c3d5 mov eax, edi */
  EAX = (EDI);
  /* 1001c3d7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001c3da and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1001c3dc call 0x1001af50 */
  push32(0x1001c3e1u); f_1001af50();
  /* 1001c3e1 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1001c3e4 mov esi, esp */
  ESI = (ESP);
  /* 1001c3e6 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 1001c3e9 push edi */
  push32((uint32_t)(EDI));
  /* 1001c3ea push ebx */
  push32((uint32_t)(EBX));
  /* 1001c3eb push esi */
  push32((uint32_t)(ESI));
  /* 1001c3ec call 0x10019c60 */
  push32(0x1001c3f1u); f_10019c60();
  /* 1001c3f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001c3f4 jmp 0x1001c401 */
  goto L_1001c401;
  /* 1001c3f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1001c3f8 pop eax */
  EAX = (pop32());
  /* 1001c3f9 ret  */
  ESPCHK(0x1001c2fdu, _esp0);
  ESP += 4; return;
  /* 1001c3fa mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1001c3fd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1001c3ff xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1001c401:;
  /* 1001c401 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1001c405 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c407 je 0x1001c432 */
  if (C.zf) goto L_1001c432;
  /* 1001c409 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1001c40c push esi */
  push32((uint32_t)(ESI));
  /* 1001c40d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1001c410 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1001c413 push 1 */
  push32((uint32_t)(0x1u));
  /* 1001c415 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1001c418 call dword ptr [0x1001e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e0b8))), 0x1001c41eu);
  /* 1001c41e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c420 je 0x1001c432 */
  if (C.zf) goto L_1001c432;
  /* 1001c422 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1001c425 push eax */
  push32((uint32_t)(EAX));
  /* 1001c426 push esi */
  push32((uint32_t)(ESI));
  /* 1001c427 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1001c42a call dword ptr [0x1001e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e0c0))), 0x1001c430u);
  /* 1001c430 jmp 0x1001c434 */
  goto L_1001c434;
L_1001c432:;
  /* 1001c432 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1001c434:;
  /* 1001c434 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 1001c437 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1001c43a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1001c441 pop edi */
  EDI = (pop32());
  /* 1001c442 pop esi */
  ESI = (pop32());
  /* 1001c443 pop ebx */
  EBX = (pop32());
  /* 1001c444 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001c445 ret  */
  ESPCHK(0x1001c2fdu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c446 @ 0x1001c446 (511 bytes, 193 insns) */
void f_1001c446(void) {
  FTRACE(0x1001c446u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001c446 push ebp */
  push32((uint32_t)(EBP));
  /* 1001c447 mov ebp, esp */
  EBP = (ESP);
  /* 1001c449 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1001c44b push 0x1001e570 */
  push32((uint32_t)(0x1001e570u));
  /* 1001c450 push 0x1001d0b0 */
  push32((uint32_t)(0x1001d0b0u));
  /* 1001c455 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1001c45b push eax */
  push32((uint32_t)(EAX));
  /* 1001c45c mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1001c463 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001c466 push ebx */
  push32((uint32_t)(EBX));
  /* 1001c467 push esi */
  push32((uint32_t)(ESI));
  /* 1001c468 push edi */
  push32((uint32_t)(EDI));
  /* 1001c469 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1001c46c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1001c46e cmp dword ptr [0x10026888], edi */
  { uint32_t _a=(r32((uint32_t)(0x10026888))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c474 jne 0x1001c4bc */
  if (!C.zf) goto L_1001c4bc;
  /* 1001c476 push edi */
  push32((uint32_t)(EDI));
  /* 1001c477 push edi */
  push32((uint32_t)(EDI));
  /* 1001c478 push 1 */
  push32((uint32_t)(0x1u));
  /* 1001c47a pop ebx */
  EBX = (pop32());
  /* 1001c47b push ebx */
  push32((uint32_t)(EBX));
  /* 1001c47c push 0x1001e558 */
  push32((uint32_t)(0x1001e558u));
  /* 1001c481 mov esi, 0x100 */
  ESI = (0x100u);
  /* 1001c486 push esi */
  push32((uint32_t)(ESI));
  /* 1001c487 push edi */
  push32((uint32_t)(EDI));
  /* 1001c488 call dword ptr [0x1001e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e0c8))), 0x1001c48eu);
  /* 1001c48e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001c490 je 0x1001c49a */
  if (C.zf) goto L_1001c49a;
  /* 1001c492 mov dword ptr [0x10026888], ebx */
  w32((uint32_t)(0x10026888), (EBX));
  /* 1001c498 jmp 0x1001c4bc */
  goto L_1001c4bc;
L_1001c49a:;
  /* 1001c49a push edi */
  push32((uint32_t)(EDI));
  /* 1001c49b push edi */
  push32((uint32_t)(EDI));
  /* 1001c49c push ebx */
  push32((uint32_t)(EBX));
  /* 1001c49d push 0x1001e554 */
  push32((uint32_t)(0x1001e554u));
  /* 1001c4a2 push esi */
  push32((uint32_t)(ESI));
  /* 1001c4a3 push edi */
  push32((uint32_t)(EDI));
  /* 1001c4a4 call dword ptr [0x1001e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e0c4))), 0x1001c4aau);
  /* 1001c4aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001c4ac je 0x1001c5d4 */
  if (C.zf) goto L_1001c5d4;
  /* 1001c4b2 mov dword ptr [0x10026888], 2 */
  w32((uint32_t)(0x10026888), (0x2u));
L_1001c4bc:;
  /* 1001c4bc cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c4bf jle 0x1001c4d1 */
  if ((C.zf||C.sf!=C.of)) goto L_1001c4d1;
  /* 1001c4c1 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1001c4c4 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1001c4c7 call 0x1001c66a */
  push32(0x1001c4ccu); f_1001c66a();
  /* 1001c4cc pop ecx */
  ECX = (pop32());
  /* 1001c4cd pop ecx */
  ECX = (pop32());
  /* 1001c4ce mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1001c4d1:;
  /* 1001c4d1 mov eax, dword ptr [0x10026888] */
  EAX = (r32((uint32_t)(0x10026888)));
  /* 1001c4d6 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c4d9 jne 0x1001c4f8 */
  if (!C.zf) goto L_1001c4f8;
  /* 1001c4db push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1001c4de push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1001c4e1 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1001c4e4 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1001c4e7 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1001c4ea push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1001c4ed call dword ptr [0x1001e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e0c4))), 0x1001c4f3u);
  /* 1001c4f3 jmp 0x1001c5d6 */
  goto L_1001c5d6;
L_1001c4f8:;
  /* 1001c4f8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c4fb jne 0x1001c5d4 */
  if (!C.zf) goto L_1001c5d4;
  /* 1001c501 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c504 jne 0x1001c50e */
  if (!C.zf) goto L_1001c50e;
  /* 1001c506 mov eax, dword ptr [0x10026868] */
  EAX = (r32((uint32_t)(0x10026868)));
  /* 1001c50b mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_1001c50e:;
  /* 1001c50e push edi */
  push32((uint32_t)(EDI));
  /* 1001c50f push edi */
  push32((uint32_t)(EDI));
  /* 1001c510 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1001c513 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1001c516 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 1001c519 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1001c51b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001c51d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1001c520 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1001c521 push eax */
  push32((uint32_t)(EAX));
  /* 1001c522 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1001c525 call dword ptr [0x1001e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e0b8))), 0x1001c52bu);
  /* 1001c52b mov ebx, eax */
  EBX = (EAX);
  /* 1001c52d mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 1001c530 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c532 je 0x1001c5d4 */
  if (C.zf) goto L_1001c5d4;
  /* 1001c538 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1001c53b lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 1001c53e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001c541 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1001c543 call 0x1001af50 */
  push32(0x1001c548u); f_1001af50();
  /* 1001c548 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1001c54b mov eax, esp */
  EAX = (ESP);
  /* 1001c54d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1001c550 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1001c554 jmp 0x1001c569 */
  goto L_1001c569;
  /* 1001c556 push 1 */
  push32((uint32_t)(0x1u));
  /* 1001c558 pop eax */
  EAX = (pop32());
  /* 1001c559 ret  */
  ESPCHK(0x1001c446u, _esp0);
  ESP += 4; return;
  /* 1001c55a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1001c55d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1001c55f mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 1001c562 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1001c566 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_1001c569:;
  /* 1001c569 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c56c je 0x1001c5d4 */
  if (C.zf) goto L_1001c5d4;
  /* 1001c56e push ebx */
  push32((uint32_t)(EBX));
  /* 1001c56f push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1001c572 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1001c575 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1001c578 push 1 */
  push32((uint32_t)(0x1u));
  /* 1001c57a push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1001c57d call dword ptr [0x1001e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e0b8))), 0x1001c583u);
  /* 1001c583 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001c585 je 0x1001c5d4 */
  if (C.zf) goto L_1001c5d4;
  /* 1001c587 push edi */
  push32((uint32_t)(EDI));
  /* 1001c588 push edi */
  push32((uint32_t)(EDI));
  /* 1001c589 push ebx */
  push32((uint32_t)(EBX));
  /* 1001c58a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1001c58d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1001c590 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1001c593 call dword ptr [0x1001e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e0c8))), 0x1001c599u);
  /* 1001c599 mov esi, eax */
  ESI = (EAX);
  /* 1001c59b mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 1001c59e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c5a0 je 0x1001c5d4 */
  if (C.zf) goto L_1001c5d4;
  /* 1001c5a2 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 1001c5a6 je 0x1001c5e8 */
  if (C.zf) goto L_1001c5e8;
  /* 1001c5a8 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c5ab je 0x1001c663 */
  if (C.zf) goto L_1001c663;
  /* 1001c5b1 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c5b4 jg 0x1001c5d4 */
  if ((!C.zf&&C.sf==C.of)) goto L_1001c5d4;
  /* 1001c5b6 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1001c5b9 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1001c5bc push ebx */
  push32((uint32_t)(EBX));
  /* 1001c5bd push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1001c5c0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1001c5c3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1001c5c6 call dword ptr [0x1001e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e0c8))), 0x1001c5ccu);
  /* 1001c5cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001c5ce jne 0x1001c663 */
  if (!C.zf) goto L_1001c663;
L_1001c5d4:;
  /* 1001c5d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1001c5d6:;
  /* 1001c5d6 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1001c5d9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1001c5dc mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1001c5e3 pop edi */
  EDI = (pop32());
  /* 1001c5e4 pop esi */
  ESI = (pop32());
  /* 1001c5e5 pop ebx */
  EBX = (pop32());
  /* 1001c5e6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001c5e7 ret  */
  ESPCHK(0x1001c446u, _esp0);
  ESP += 4; return;
L_1001c5e8:;
  /* 1001c5e8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1001c5ef lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 1001c5f2 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001c5f5 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1001c5f7 call 0x1001af50 */
  push32(0x1001c5fcu); f_1001af50();
  /* 1001c5fc mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1001c5ff mov ebx, esp */
  EBX = (ESP);
  /* 1001c601 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 1001c604 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1001c608 jmp 0x1001c61c */
  goto L_1001c61c;
  /* 1001c60a push 1 */
  push32((uint32_t)(0x1u));
  /* 1001c60c pop eax */
  EAX = (pop32());
  /* 1001c60d ret  */
  ESPCHK(0x1001c446u, _esp0);
  ESP += 4; return;
  /* 1001c60e mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1001c611 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1001c613 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1001c615 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1001c619 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_1001c61c:;
  /* 1001c61c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c61e je 0x1001c5d4 */
  if (C.zf) goto L_1001c5d4;
  /* 1001c620 push esi */
  push32((uint32_t)(ESI));
  /* 1001c621 push ebx */
  push32((uint32_t)(EBX));
  /* 1001c622 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1001c625 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1001c628 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1001c62b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1001c62e call dword ptr [0x1001e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e0c8))), 0x1001c634u);
  /* 1001c634 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001c636 je 0x1001c5d4 */
  if (C.zf) goto L_1001c5d4;
  /* 1001c638 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c63b push edi */
  push32((uint32_t)(EDI));
  /* 1001c63c push edi */
  push32((uint32_t)(EDI));
  /* 1001c63d jne 0x1001c643 */
  if (!C.zf) goto L_1001c643;
  /* 1001c63f push edi */
  push32((uint32_t)(EDI));
  /* 1001c640 push edi */
  push32((uint32_t)(EDI));
  /* 1001c641 jmp 0x1001c649 */
  goto L_1001c649;
L_1001c643:;
  /* 1001c643 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1001c646 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_1001c649:;
  /* 1001c649 push esi */
  push32((uint32_t)(ESI));
  /* 1001c64a push ebx */
  push32((uint32_t)(EBX));
  /* 1001c64b push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1001c650 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1001c653 call dword ptr [0x1001e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e060))), 0x1001c659u);
  /* 1001c659 mov esi, eax */
  ESI = (EAX);
  /* 1001c65b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c65d je 0x1001c5d4 */
  if (C.zf) goto L_1001c5d4;
L_1001c663:;
  /* 1001c663 mov eax, esi */
  EAX = (ESI);
  /* 1001c665 jmp 0x1001c5d6 */
  goto L_1001c5d6;
}

/* FUN_1000c66a @ 0x1001c66a (43 bytes, 20 insns) */
void f_1001c66a(void) {
  FTRACE(0x1001c66au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001c66a mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1001c66e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1001c672 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1001c674 push esi */
  push32((uint32_t)(ESI));
  /* 1001c675 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 1001c678 je 0x1001c687 */
  if (C.zf) goto L_1001c687;
L_1001c67a:;
  /* 1001c67a cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c67d je 0x1001c687 */
  if (C.zf) goto L_1001c687;
  /* 1001c67f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1001c680 mov esi, ecx */
  ESI = (ECX);
  /* 1001c682 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1001c683 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1001c685 jne 0x1001c67a */
  if (!C.zf) goto L_1001c67a;
L_1001c687:;
  /* 1001c687 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c68a pop esi */
  ESI = (pop32());
  /* 1001c68b jne 0x1001c692 */
  if (!C.zf) goto L_1001c692;
  /* 1001c68d sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001c691 ret  */
  ESPCHK(0x1001c66au, _esp0);
  ESP += 4; return;
L_1001c692:;
  /* 1001c692 mov eax, edx */
  EAX = (EDX);
  /* 1001c694 ret  */
  ESPCHK(0x1001c66au, _esp0);
  ESP += 4; return;
}

/* FUN_1000c695 @ 0x1001c695 (33 bytes, 15 insns) */
void f_1001c695(void) {
  FTRACE(0x1001c695u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001c695 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1001c699 push esi */
  push32((uint32_t)(ESI));
  /* 1001c69a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1001c69e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001c6a0 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 1001c6a3 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c6a5 jb 0x1001c6ab */
  if (C.cf) goto L_1001c6ab;
  /* 1001c6a7 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c6a9 jae 0x1001c6ae */
  if (!C.cf) goto L_1001c6ae;
L_1001c6ab:;
  /* 1001c6ab push 1 */
  push32((uint32_t)(0x1u));
  /* 1001c6ad pop eax */
  EAX = (pop32());
L_1001c6ae:;
  /* 1001c6ae mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1001c6b2 pop esi */
  ESI = (pop32());
  /* 1001c6b3 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1001c6b5 ret  */
  ESPCHK(0x1001c695u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x1001c6b6 (94 bytes, 38 insns) */
void f_1001c6b6(void) {
  FTRACE(0x1001c6b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001c6b6 push esi */
  push32((uint32_t)(ESI));
  /* 1001c6b7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1001c6bb push edi */
  push32((uint32_t)(EDI));
  /* 1001c6bc mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1001c6c0 push esi */
  push32((uint32_t)(ESI));
  /* 1001c6c1 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 1001c6c3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1001c6c5 call 0x1001c695 */
  push32(0x1001c6cau); f_1001c695();
  /* 1001c6ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001c6cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001c6cf je 0x1001c6e8 */
  if (C.zf) goto L_1001c6e8;
  /* 1001c6d1 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1001c6d4 push eax */
  push32((uint32_t)(EAX));
  /* 1001c6d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1001c6d7 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1001c6d9 call 0x1001c695 */
  push32(0x1001c6deu); f_1001c695();
  /* 1001c6de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001c6e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001c6e3 je 0x1001c6e8 */
  if (C.zf) goto L_1001c6e8;
  /* 1001c6e5 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1001c6e8:;
  /* 1001c6e8 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1001c6eb push eax */
  push32((uint32_t)(EAX));
  /* 1001c6ec push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 1001c6ef push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1001c6f1 call 0x1001c695 */
  push32(0x1001c6f6u); f_1001c695();
  /* 1001c6f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001c6f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001c6fb je 0x1001c700 */
  if (C.zf) goto L_1001c700;
  /* 1001c6fd inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1001c700:;
  /* 1001c700 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 1001c703 push eax */
  push32((uint32_t)(EAX));
  /* 1001c704 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 1001c707 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1001c709 call 0x1001c695 */
  push32(0x1001c70eu); f_1001c695();
  /* 1001c70e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001c711 pop edi */
  EDI = (pop32());
  /* 1001c712 pop esi */
  ESI = (pop32());
  /* 1001c713 ret  */
  ESPCHK(0x1001c6b6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c714 @ 0x1001c714 (46 bytes, 21 insns) */
void f_1001c714(void) {
  FTRACE(0x1001c714u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001c714 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1001c718 push esi */
  push32((uint32_t)(ESI));
  /* 1001c719 push edi */
  push32((uint32_t)(EDI));
  /* 1001c71a mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 1001c71c mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 1001c71f mov ecx, esi */
  ECX = (ESI);
  /* 1001c721 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001c723 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1001c725 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 1001c728 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1001c72b or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1001c72d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1001c730 mov edx, edi */
  EDX = (EDI);
  /* 1001c732 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 1001c735 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 1001c738 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1001c73a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1001c73c pop edi */
  EDI = (pop32());
  /* 1001c73d mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1001c740 pop esi */
  ESI = (pop32());
  /* 1001c741 ret  */
  ESPCHK(0x1001c714u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c742 @ 0x1001c742 (45 bytes, 21 insns) */
void f_1001c742(void) {
  FTRACE(0x1001c742u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001c742 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1001c746 push esi */
  push32((uint32_t)(ESI));
  /* 1001c747 push edi */
  push32((uint32_t)(EDI));
  /* 1001c748 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 1001c74b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1001c74e mov esi, edx */
  ESI = (EDX);
  /* 1001c750 mov edi, ecx */
  EDI = (ECX);
  /* 1001c752 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 1001c755 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1001c757 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 1001c759 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1001c75c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1001c75e shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 1001c761 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1001c763 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1001c765 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1001c767 pop edi */
  EDI = (pop32());
  /* 1001c768 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1001c76b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1001c76d pop esi */
  ESI = (pop32());
  /* 1001c76e ret  */
  ESPCHK(0x1001c742u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c76f @ 0x1001c76f (199 bytes, 76 insns) */
void f_1001c76f(void) {
  FTRACE(0x1001c76fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001c76f push ebp */
  push32((uint32_t)(EBP));
  /* 1001c770 mov ebp, esp */
  EBP = (ESP);
  /* 1001c772 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001c775 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1001c778 push ebx */
  push32((uint32_t)(EBX));
  /* 1001c779 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1001c77c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1001c77e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c780 push esi */
  push32((uint32_t)(ESI));
  /* 1001c781 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 1001c788 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 1001c78a mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 1001c78d mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 1001c790 jbe 0x1001c7e3 */
  if ((C.cf||C.zf)) goto L_1001c7e3;
  /* 1001c792 push edi */
  push32((uint32_t)(EDI));
  /* 1001c793 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1001c796:;
  /* 1001c796 mov esi, ebx */
  ESI = (EBX);
  /* 1001c798 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 1001c79b movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1001c79c movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1001c79d push ebx */
  push32((uint32_t)(EBX));
  /* 1001c79e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1001c79f call 0x1001c714 */
  push32(0x1001c7a4u); f_1001c714();
  /* 1001c7a4 push ebx */
  push32((uint32_t)(EBX));
  /* 1001c7a5 call 0x1001c714 */
  push32(0x1001c7aau); f_1001c714();
  /* 1001c7aa lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1001c7ad push eax */
  push32((uint32_t)(EAX));
  /* 1001c7ae push ebx */
  push32((uint32_t)(EBX));
  /* 1001c7af call 0x1001c6b6 */
  push32(0x1001c7b4u); f_1001c6b6();
  /* 1001c7b4 push ebx */
  push32((uint32_t)(EBX));
  /* 1001c7b5 call 0x1001c714 */
  push32(0x1001c7bau); f_1001c714();
  /* 1001c7ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001c7bd and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 1001c7c1 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1001c7c5 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1001c7c8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1001c7cb lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1001c7ce push eax */
  push32((uint32_t)(EAX));
  /* 1001c7cf push ebx */
  push32((uint32_t)(EBX));
  /* 1001c7d0 call 0x1001c6b6 */
  push32(0x1001c7d5u); f_1001c6b6();
  /* 1001c7d5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001c7d8 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1001c7db dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 1001c7de jne 0x1001c796 */
  if (!C.zf) goto L_1001c796;
  /* 1001c7e0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1001c7e2 pop edi */
  EDI = (pop32());
L_1001c7e3:;
  /* 1001c7e3 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c7e6 jne 0x1001c810 */
  if (!C.zf) goto L_1001c810;
  /* 1001c7e8 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1001c7eb mov eax, ecx */
  EAX = (ECX);
  /* 1001c7ed shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1001c7f0 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 1001c7f3 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1001c7f5 mov esi, eax */
  ESI = (EAX);
  /* 1001c7f7 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1001c7fa shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 1001c7fd or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1001c7ff shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1001c802 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1001c809 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 1001c80c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 1001c80e jmp 0x1001c7e3 */
  goto L_1001c7e3;
L_1001c810:;
  /* 1001c810 mov esi, 0x8000 */
  ESI = (0x8000u);
L_1001c815:;
  /* 1001c815 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 1001c818 jne 0x1001c82a */
  if (!C.zf) goto L_1001c82a;
  /* 1001c81a push ebx */
  push32((uint32_t)(EBX));
  /* 1001c81b call 0x1001c714 */
  push32(0x1001c820u); f_1001c714();
  /* 1001c820 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1001c827 pop ecx */
  ECX = (pop32());
  /* 1001c828 jmp 0x1001c815 */
  goto L_1001c815;
L_1001c82a:;
  /* 1001c82a mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1001c82e pop esi */
  ESI = (pop32());
  /* 1001c82f mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 1001c833 pop ebx */
  EBX = (pop32());
  /* 1001c834 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001c835 ret  */
  ESPCHK(0x1001c76fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c836 @ 0x1001c836 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_1001c836(void) {
  FTRACE(0x1001c836u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001c836 push ebp */
  push32((uint32_t)(EBP));
  /* 1001c837 mov ebp, esp */
  EBP = (ESP);
  /* 1001c839 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001c83c push ebx */
  push32((uint32_t)(EBX));
  /* 1001c83d push esi */
  push32((uint32_t)(ESI));
  /* 1001c83e push edi */
  push32((uint32_t)(EDI));
  /* 1001c83f mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1001c842 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1001c845 push 1 */
  push32((uint32_t)(0x1u));
  /* 1001c847 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1001c84a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001c84c pop edx */
  EDX = (pop32());
  /* 1001c84d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1001c850 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1001c853 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1001c856 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1001c859 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1001c85c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1001c85f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1001c862 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1001c865 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1001c868 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1001c86b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1001c86e mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_1001c871:;
  /* 1001c871 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 1001c873 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c876 je 0x1001c887 */
  if (C.zf) goto L_1001c887;
  /* 1001c878 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c87b je 0x1001c887 */
  if (C.zf) goto L_1001c887;
  /* 1001c87d cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c880 je 0x1001c887 */
  if (C.zf) goto L_1001c887;
  /* 1001c882 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c885 jne 0x1001c88a */
  if (!C.zf) goto L_1001c88a;
L_1001c887:;
  /* 1001c887 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1001c888 jmp 0x1001c871 */
  goto L_1001c871;
L_1001c88a:;
  /* 1001c88a push 4 */
  push32((uint32_t)(0x4u));
  /* 1001c88c pop esi */
  ESI = (pop32());
L_1001c88d:;
  /* 1001c88d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1001c88f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1001c890 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c893 ja 0x1001cb10 */
  if ((!C.cf&&!C.zf)) goto L_1001cb10;
  /* 1001c899 jmp dword ptr [eax*4 + 0x1001ccd7] */
  switch (EAX) {
    case 0: goto L_1001c8a0;
    case 1: goto L_1001c8ef;
    case 2: goto L_1001c946;
    case 3: goto L_1001c970;
    case 4: goto L_1001c9cb;
    case 5: goto L_1001ca42;
    case 6: goto L_1001ca78;
    case 7: goto L_1001cac2;
    case 8: goto L_1001caa1;
    case 9: goto L_1001cb26;
    case 10: goto L_1001cb10;
    case 11: goto L_1001cadc;
    default: x86_unimpl("switch@0x1001c899 out of table"); return;
  }
L_1001c8a0:;
  /* 1001c8a0 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c8a3 jl 0x1001c8b1 */
  if ((C.sf!=C.of)) goto L_1001c8b1;
  /* 1001c8a5 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c8a8 jg 0x1001c8b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_1001c8b1;
L_1001c8aa:;
  /* 1001c8aa push 3 */
  push32((uint32_t)(0x3u));
  /* 1001c8ac jmp 0x1001cace */
  goto L_1001cace;
L_1001c8b1:;
  /* 1001c8b1 cmp bl, byte ptr [0x10020c04] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10020c04))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c8b7 jne 0x1001c8c0 */
  if (!C.zf) goto L_1001c8c0;
L_1001c8b9:;
  /* 1001c8b9 push 5 */
  push32((uint32_t)(0x5u));
  /* 1001c8bb jmp 0x1001cb06 */
  goto L_1001cb06;
L_1001c8c0:;
  /* 1001c8c0 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1001c8c3 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001c8c6 je 0x1001c8e6 */
  if (C.zf) goto L_1001c8e6;
  /* 1001c8c8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1001c8c9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1001c8ca je 0x1001c8da */
  if (C.zf) goto L_1001c8da;
  /* 1001c8cc sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001c8cf jne 0x1001cba9 */
  if (!C.zf) goto L_1001cba9;
  /* 1001c8d5 jmp 0x1001c969 */
  goto L_1001c969;
L_1001c8da:;
  /* 1001c8da push 2 */
  push32((uint32_t)(0x2u));
  /* 1001c8dc mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 1001c8e3 pop eax */
  EAX = (pop32());
  /* 1001c8e4 jmp 0x1001c88d */
  goto L_1001c88d;
L_1001c8e6:;
  /* 1001c8e6 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 1001c8ea push 2 */
  push32((uint32_t)(0x2u));
  /* 1001c8ec pop eax */
  EAX = (pop32());
  /* 1001c8ed jmp 0x1001c88d */
  goto L_1001c88d;
L_1001c8ef:;
  /* 1001c8ef cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c8f2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1001c8f5 jl 0x1001c8fc */
  if ((C.sf!=C.of)) goto L_1001c8fc;
  /* 1001c8f7 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c8fa jle 0x1001c8aa */
  if ((C.zf||C.sf!=C.of)) goto L_1001c8aa;
L_1001c8fc:;
  /* 1001c8fc cmp bl, byte ptr [0x10020c04] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10020c04))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c902 je 0x1001c9c4 */
  if (C.zf) goto L_1001c9c4;
  /* 1001c908 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c90b je 0x1001c93e */
  if (C.zf) goto L_1001c93e;
  /* 1001c90d cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c910 je 0x1001c93e */
  if (C.zf) goto L_1001c93e;
  /* 1001c912 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c915 je 0x1001c969 */
  if (C.zf) goto L_1001c969;
L_1001c917:;
  /* 1001c917 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c91a jle 0x1001cba9 */
  if ((C.zf||C.sf!=C.of)) goto L_1001cba9;
  /* 1001c920 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c923 jle 0x1001c937 */
  if ((C.zf||C.sf!=C.of)) goto L_1001c937;
  /* 1001c925 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c928 jle 0x1001cba9 */
  if ((C.zf||C.sf!=C.of)) goto L_1001cba9;
  /* 1001c92e cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c931 jg 0x1001cba9 */
  if ((!C.zf&&C.sf==C.of)) goto L_1001cba9;
L_1001c937:;
  /* 1001c937 push 6 */
  push32((uint32_t)(0x6u));
  /* 1001c939 jmp 0x1001cb06 */
  goto L_1001cb06;
L_1001c93e:;
  /* 1001c93e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1001c93f push 0xb */
  push32((uint32_t)(0xbu));
  /* 1001c941 jmp 0x1001cb06 */
  goto L_1001cb06;
L_1001c946:;
  /* 1001c946 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c949 jl 0x1001c954 */
  if ((C.sf!=C.of)) goto L_1001c954;
  /* 1001c94b cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c94e jle 0x1001c8aa */
  if ((C.zf||C.sf!=C.of)) goto L_1001c8aa;
L_1001c954:;
  /* 1001c954 cmp bl, byte ptr [0x10020c04] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10020c04))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c95a je 0x1001c8b9 */
  if (C.zf) goto L_1001c8b9;
  /* 1001c960 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c963 jne 0x1001cb1e */
  if (!C.zf) goto L_1001cb1e;
L_1001c969:;
  /* 1001c969 mov eax, edx */
  EAX = (EDX);
  /* 1001c96b jmp 0x1001c88d */
  goto L_1001c88d;
L_1001c970:;
  /* 1001c970 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1001c973:;
  /* 1001c973 cmp dword ptr [0x10020c00], edx */
  { uint32_t _a=(r32((uint32_t)(0x10020c00))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c979 jle 0x1001c98c */
  if ((C.zf||C.sf!=C.of)) goto L_1001c98c;
  /* 1001c97b movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1001c97e push esi */
  push32((uint32_t)(ESI));
  /* 1001c97f push eax */
  push32((uint32_t)(EAX));
  /* 1001c980 call 0x1001944b */
  push32(0x1001c985u); f_1001944b();
  /* 1001c985 pop ecx */
  ECX = (pop32());
  /* 1001c986 pop ecx */
  ECX = (pop32());
  /* 1001c987 push 1 */
  push32((uint32_t)(0x1u));
  /* 1001c989 pop edx */
  EDX = (pop32());
  /* 1001c98a jmp 0x1001c99a */
  goto L_1001c99a;
L_1001c98c:;
  /* 1001c98c mov ecx, dword ptr [0x100209f0] */
  ECX = (r32((uint32_t)(0x100209f0)));
  /* 1001c992 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1001c995 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1001c998 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1001c99a:;
  /* 1001c99a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001c99c je 0x1001c9bc */
  if (C.zf) goto L_1001c9bc;
  /* 1001c99e cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c9a2 jae 0x1001c9b4 */
  if (!C.cf) goto L_1001c9b4;
  /* 1001c9a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1001c9a7 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1001c9aa sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1001c9ad inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 1001c9b0 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 1001c9b2 jmp 0x1001c9b7 */
  goto L_1001c9b7;
L_1001c9b4:;
  /* 1001c9b4 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_1001c9b7:;
  /* 1001c9b7 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1001c9b9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1001c9ba jmp 0x1001c973 */
  goto L_1001c973;
L_1001c9bc:;
  /* 1001c9bc cmp bl, byte ptr [0x10020c04] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10020c04))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c9c2 jne 0x1001ca2b */
  if (!C.zf) goto L_1001ca2b;
L_1001c9c4:;
  /* 1001c9c4 mov eax, esi */
  EAX = (ESI);
  /* 1001c9c6 jmp 0x1001c88d */
  goto L_1001c88d;
L_1001c9cb:;
  /* 1001c9cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c9cf mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1001c9d2 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1001c9d5 jne 0x1001c9e4 */
  if (!C.zf) goto L_1001c9e4;
L_1001c9d7:;
  /* 1001c9d7 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001c9da jne 0x1001c9e4 */
  if (!C.zf) goto L_1001c9e4;
  /* 1001c9dc dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1001c9df mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1001c9e1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1001c9e2 jmp 0x1001c9d7 */
  goto L_1001c9d7;
L_1001c9e4:;
  /* 1001c9e4 cmp dword ptr [0x10020c00], edx */
  { uint32_t _a=(r32((uint32_t)(0x10020c00))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001c9ea jle 0x1001c9fd */
  if ((C.zf||C.sf!=C.of)) goto L_1001c9fd;
  /* 1001c9ec movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1001c9ef push esi */
  push32((uint32_t)(ESI));
  /* 1001c9f0 push eax */
  push32((uint32_t)(EAX));
  /* 1001c9f1 call 0x1001944b */
  push32(0x1001c9f6u); f_1001944b();
  /* 1001c9f6 pop ecx */
  ECX = (pop32());
  /* 1001c9f7 pop ecx */
  ECX = (pop32());
  /* 1001c9f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1001c9fa pop edx */
  EDX = (pop32());
  /* 1001c9fb jmp 0x1001ca0b */
  goto L_1001ca0b;
L_1001c9fd:;
  /* 1001c9fd mov ecx, dword ptr [0x100209f0] */
  ECX = (r32((uint32_t)(0x100209f0)));
  /* 1001ca03 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1001ca06 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1001ca09 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1001ca0b:;
  /* 1001ca0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001ca0d je 0x1001ca2b */
  if (C.zf) goto L_1001ca2b;
  /* 1001ca0f cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001ca13 jae 0x1001ca26 */
  if (!C.cf) goto L_1001ca26;
  /* 1001ca15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1001ca18 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1001ca1b sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1001ca1e inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 1001ca21 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1001ca24 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_1001ca26:;
  /* 1001ca26 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1001ca28 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1001ca29 jmp 0x1001c9e4 */
  goto L_1001c9e4;
L_1001ca2b:;
  /* 1001ca2b cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001ca2e je 0x1001c93e */
  if (C.zf) goto L_1001c93e;
  /* 1001ca34 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001ca37 je 0x1001c93e */
  if (C.zf) goto L_1001c93e;
  /* 1001ca3d jmp 0x1001c917 */
  goto L_1001c917;
L_1001ca42:;
  /* 1001ca42 cmp dword ptr [0x10020c00], edx */
  { uint32_t _a=(r32((uint32_t)(0x10020c00))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001ca48 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1001ca4b jle 0x1001ca5e */
  if ((C.zf||C.sf!=C.of)) goto L_1001ca5e;
  /* 1001ca4d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1001ca50 push esi */
  push32((uint32_t)(ESI));
  /* 1001ca51 push eax */
  push32((uint32_t)(EAX));
  /* 1001ca52 call 0x1001944b */
  push32(0x1001ca57u); f_1001944b();
  /* 1001ca57 pop ecx */
  ECX = (pop32());
  /* 1001ca58 pop ecx */
  ECX = (pop32());
  /* 1001ca59 push 1 */
  push32((uint32_t)(0x1u));
  /* 1001ca5b pop edx */
  EDX = (pop32());
  /* 1001ca5c jmp 0x1001ca6c */
  goto L_1001ca6c;
L_1001ca5e:;
  /* 1001ca5e mov ecx, dword ptr [0x100209f0] */
  ECX = (r32((uint32_t)(0x100209f0)));
  /* 1001ca64 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1001ca67 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1001ca6a and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1001ca6c:;
  /* 1001ca6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001ca6e je 0x1001cb1e */
  if (C.zf) goto L_1001cb1e;
  /* 1001ca74 mov eax, esi */
  EAX = (ESI);
  /* 1001ca76 jmp 0x1001cacf */
  goto L_1001cacf;
L_1001ca78:;
  /* 1001ca78 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 1001ca7b cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001ca7e mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1001ca81 jl 0x1001ca88 */
  if ((C.sf!=C.of)) goto L_1001ca88;
  /* 1001ca83 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001ca86 jle 0x1001cacc */
  if ((C.zf||C.sf!=C.of)) goto L_1001cacc;
L_1001ca88:;
  /* 1001ca88 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1001ca8b sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001ca8e je 0x1001cb04 */
  if (C.zf) goto L_1001cb04;
  /* 1001ca90 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1001ca91 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1001ca92 je 0x1001caf8 */
  if (C.zf) goto L_1001caf8;
  /* 1001ca94 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001ca97 jne 0x1001cbac */
  if (!C.zf) goto L_1001cbac;
L_1001ca9d:;
  /* 1001ca9d push 8 */
  push32((uint32_t)(0x8u));
  /* 1001ca9f jmp 0x1001cb06 */
  goto L_1001cb06;
L_1001caa1:;
  /* 1001caa1 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1001caa4:;
  /* 1001caa4 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001caa7 jne 0x1001caae */
  if (!C.zf) goto L_1001caae;
  /* 1001caa9 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1001caab inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1001caac jmp 0x1001caa4 */
  goto L_1001caa4;
L_1001caae:;
  /* 1001caae cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001cab1 jl 0x1001cba9 */
  if ((C.sf!=C.of)) goto L_1001cba9;
  /* 1001cab7 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001caba jg 0x1001cba9 */
  if ((!C.zf&&C.sf==C.of)) goto L_1001cba9;
  /* 1001cac0 jmp 0x1001cacc */
  goto L_1001cacc;
L_1001cac2:;
  /* 1001cac2 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001cac5 jl 0x1001cad5 */
  if ((C.sf!=C.of)) goto L_1001cad5;
  /* 1001cac7 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001caca jg 0x1001cad5 */
  if ((!C.zf&&C.sf==C.of)) goto L_1001cad5;
L_1001cacc:;
  /* 1001cacc push 9 */
  push32((uint32_t)(0x9u));
L_1001cace:;
  /* 1001cace pop eax */
  EAX = (pop32());
L_1001cacf:;
  /* 1001cacf dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1001cad0 jmp 0x1001c88d */
  goto L_1001c88d;
L_1001cad5:;
  /* 1001cad5 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001cad8 jne 0x1001cb1e */
  if (!C.zf) goto L_1001cb1e;
  /* 1001cada jmp 0x1001ca9d */
  goto L_1001ca9d;
L_1001cadc:;
  /* 1001cadc cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cae0 je 0x1001cb0c */
  if (C.zf) goto L_1001cb0c;
  /* 1001cae2 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1001cae5 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 1001cae8 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001caeb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1001caee je 0x1001cb04 */
  if (C.zf) goto L_1001cb04;
  /* 1001caf0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1001caf1 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1001caf2 jne 0x1001cbac */
  if (!C.zf) goto L_1001cbac;
L_1001caf8:;
  /* 1001caf8 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 1001cafc push 7 */
  push32((uint32_t)(0x7u));
  /* 1001cafe pop eax */
  EAX = (pop32());
  /* 1001caff jmp 0x1001c88d */
  goto L_1001c88d;
L_1001cb04:;
  /* 1001cb04 push 7 */
  push32((uint32_t)(0x7u));
L_1001cb06:;
  /* 1001cb06 pop eax */
  EAX = (pop32());
  /* 1001cb07 jmp 0x1001c88d */
  goto L_1001c88d;
L_1001cb0c:;
  /* 1001cb0c push 0xa */
  push32((uint32_t)(0xau));
  /* 1001cb0e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1001cb0f pop eax */
  EAX = (pop32());
L_1001cb10:;
  /* 1001cb10 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cb13 je 0x1001cbae */
  if (C.zf) goto L_1001cbae;
  /* 1001cb19 jmp 0x1001c88d */
  goto L_1001c88d;
L_1001cb1e:;
  /* 1001cb1e mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1001cb21 jmp 0x1001cbae */
  goto L_1001cbae;
L_1001cb26:;
  /* 1001cb26 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 1001cb2d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1001cb2f:;
  /* 1001cb2f cmp dword ptr [0x10020c00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10020c00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cb36 jle 0x1001cb47 */
  if ((C.zf||C.sf!=C.of)) goto L_1001cb47;
  /* 1001cb38 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1001cb3b push 4 */
  push32((uint32_t)(0x4u));
  /* 1001cb3d push eax */
  push32((uint32_t)(EAX));
  /* 1001cb3e call 0x1001944b */
  push32(0x1001cb43u); f_1001944b();
  /* 1001cb43 pop ecx */
  ECX = (pop32());
  /* 1001cb44 pop ecx */
  ECX = (pop32());
  /* 1001cb45 jmp 0x1001cb56 */
  goto L_1001cb56;
L_1001cb47:;
  /* 1001cb47 mov ecx, dword ptr [0x100209f0] */
  ECX = (r32((uint32_t)(0x100209f0)));
  /* 1001cb4d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1001cb50 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1001cb53 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1001cb56:;
  /* 1001cb56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001cb58 je 0x1001cb76 */
  if (C.zf) goto L_1001cb76;
  /* 1001cb5a movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1001cb5d lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 1001cb60 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 1001cb64 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cb6a jg 0x1001cb71 */
  if ((!C.zf&&C.sf==C.of)) goto L_1001cb71;
  /* 1001cb6c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1001cb6e inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1001cb6f jmp 0x1001cb2f */
  goto L_1001cb2f;
L_1001cb71:;
  /* 1001cb71 mov esi, 0x1451 */
  ESI = (0x1451u);
L_1001cb76:;
  /* 1001cb76 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_1001cb79:;
  /* 1001cb79 cmp dword ptr [0x10020c00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10020c00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cb80 jle 0x1001cb91 */
  if ((C.zf||C.sf!=C.of)) goto L_1001cb91;
  /* 1001cb82 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1001cb85 push 4 */
  push32((uint32_t)(0x4u));
  /* 1001cb87 push eax */
  push32((uint32_t)(EAX));
  /* 1001cb88 call 0x1001944b */
  push32(0x1001cb8du); f_1001944b();
  /* 1001cb8d pop ecx */
  ECX = (pop32());
  /* 1001cb8e pop ecx */
  ECX = (pop32());
  /* 1001cb8f jmp 0x1001cba0 */
  goto L_1001cba0;
L_1001cb91:;
  /* 1001cb91 mov ecx, dword ptr [0x100209f0] */
  ECX = (r32((uint32_t)(0x100209f0)));
  /* 1001cb97 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1001cb9a mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1001cb9d and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1001cba0:;
  /* 1001cba0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001cba2 je 0x1001cba9 */
  if (C.zf) goto L_1001cba9;
  /* 1001cba4 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1001cba6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1001cba7 jmp 0x1001cb79 */
  goto L_1001cb79;
L_1001cba9:;
  /* 1001cba9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1001cbaa jmp 0x1001cbae */
  goto L_1001cbae;
L_1001cbac:;
  /* 1001cbac mov edi, ecx */
  EDI = (ECX);
L_1001cbae:;
  /* 1001cbae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1001cbb1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cbb5 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 1001cbb7 je 0x1001cc96 */
  if (C.zf) goto L_1001cc96;
  /* 1001cbbd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1001cbbf pop eax */
  EAX = (pop32());
  /* 1001cbc0 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cbc3 jbe 0x1001cbda */
  if ((C.cf||C.zf)) goto L_1001cbda;
  /* 1001cbc5 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001cbc9 jl 0x1001cbce */
  if ((C.sf!=C.of)) goto L_1001cbce;
  /* 1001cbcb inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_1001cbce:;
  /* 1001cbce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1001cbd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1001cbd4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1001cbd5 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 1001cbd8 jmp 0x1001cbdd */
  goto L_1001cbdd;
L_1001cbda:;
  /* 1001cbda mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1001cbdd:;
  /* 1001cbdd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cbe1 jbe 0x1001cc8c */
  if ((C.cf||C.zf)) goto L_1001cc8c;
L_1001cbe7:;
  /* 1001cbe7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1001cbe8 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001cbeb jne 0x1001cbf5 */
  if (!C.zf) goto L_1001cbf5;
  /* 1001cbed dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1001cbf0 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 1001cbf3 jmp 0x1001cbe7 */
  goto L_1001cbe7;
L_1001cbf5:;
  /* 1001cbf5 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1001cbf8 push eax */
  push32((uint32_t)(EAX));
  /* 1001cbf9 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1001cbfc push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 1001cbff push eax */
  push32((uint32_t)(EAX));
  /* 1001cc00 call 0x1001c76f */
  push32(0x1001cc05u); f_1001c76f();
  /* 1001cc05 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1001cc08 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1001cc0a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001cc0d cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cc10 jge 0x1001cc14 */
  if ((C.sf==C.of)) goto L_1001cc14;
  /* 1001cc12 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_1001cc14:;
  /* 1001cc14 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001cc17 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cc1a jne 0x1001cc1f */
  if (!C.zf) goto L_1001cc1f;
  /* 1001cc1c add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1001cc1f:;
  /* 1001cc1f cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cc22 jne 0x1001cc27 */
  if (!C.zf) goto L_1001cc27;
  /* 1001cc24 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1001cc27:;
  /* 1001cc27 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cc2c jle 0x1001cc5e */
  if ((C.zf||C.sf!=C.of)) goto L_1001cc5e;
  /* 1001cc2e mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_1001cc35:;
  /* 1001cc35 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1001cc38 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 1001cc3b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1001cc3e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_1001cc41:;
  /* 1001cc41 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cc45 je 0x1001cca7 */
  if (C.zf) goto L_1001cca7;
  /* 1001cc47 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1001cc49 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 1001cc4e mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1001cc53 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1001cc55 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 1001cc5c jmp 0x1001ccbc */
  goto L_1001ccbc;
L_1001cc5e:;
  /* 1001cc5e cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cc63 jge 0x1001cc6e */
  if ((C.sf==C.of)) goto L_1001cc6e;
  /* 1001cc65 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 1001cc6c jmp 0x1001cc35 */
  goto L_1001cc35;
L_1001cc6e:;
  /* 1001cc6e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1001cc71 push eax */
  push32((uint32_t)(EAX));
  /* 1001cc72 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1001cc75 push eax */
  push32((uint32_t)(EAX));
  /* 1001cc76 call 0x1001d70a */
  push32(0x1001cc7bu); f_1001d70a();
  /* 1001cc7b mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1001cc7e mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 1001cc81 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 1001cc84 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 1001cc87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001cc8a jmp 0x1001cc41 */
  goto L_1001cc41;
L_1001cc8c:;
  /* 1001cc8c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1001cc8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001cc90 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1001cc92 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1001cc94 jmp 0x1001cc41 */
  goto L_1001cc41;
L_1001cc96:;
  /* 1001cc96 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1001cc98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001cc9a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1001cc9c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1001cc9e mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 1001cca5 jmp 0x1001ccbc */
  goto L_1001ccbc;
L_1001cca7:;
  /* 1001cca7 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001ccab je 0x1001ccbc */
  if (C.zf) goto L_1001ccbc;
  /* 1001ccad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1001ccaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001ccb1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1001ccb3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1001ccb5 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_1001ccbc:;
  /* 1001ccbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001ccbf or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 1001ccc2 pop edi */
  EDI = (pop32());
  /* 1001ccc3 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 1001ccc6 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 1001ccc9 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 1001cccd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1001ccd0 pop esi */
  ESI = (pop32());
  /* 1001ccd1 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1001ccd4 pop ebx */
  EBX = (pop32());
  /* 1001ccd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001ccd6 ret  */
  ESPCHK(0x1001c836u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd07 @ 0x1001cd07 (659 bytes, 232 insns) */
void f_1001cd07(void) {
  FTRACE(0x1001cd07u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001cd07 push ebp */
  push32((uint32_t)(EBP));
  /* 1001cd08 mov ebp, esp */
  EBP = (ESP);
  /* 1001cd0a sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001cd0d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1001cd10 push ebx */
  push32((uint32_t)(EBX));
  /* 1001cd11 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1001cd14 push esi */
  push32((uint32_t)(ESI));
  /* 1001cd15 mov ecx, eax */
  ECX = (EAX);
  /* 1001cd17 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 1001cd1c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1001cd22 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1001cd24 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1001cd27 push edi */
  push32((uint32_t)(EDI));
  /* 1001cd28 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 1001cd2c mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 1001cd30 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 1001cd34 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 1001cd38 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 1001cd3c mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 1001cd40 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 1001cd44 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 1001cd48 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 1001cd4c mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 1001cd50 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 1001cd54 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 1001cd58 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1001cd5f mov edx, eax */
  EDX = (EAX);
  /* 1001cd61 je 0x1001cd69 */
  if (C.zf) goto L_1001cd69;
  /* 1001cd63 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 1001cd67 jmp 0x1001cd6d */
  goto L_1001cd6d;
L_1001cd69:;
  /* 1001cd69 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_1001cd6d:;
  /* 1001cd6d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1001cd70 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 1001cd73 jne 0x1001cd93 */
  if (!C.zf) goto L_1001cd93;
  /* 1001cd75 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1001cd77 jne 0x1001cd93 */
  if (!C.zf) goto L_1001cd93;
  /* 1001cd79 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cd7c jne 0x1001cd93 */
  if (!C.zf) goto L_1001cd93;
L_1001cd7e:;
  /* 1001cd7e and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1001cd82 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1001cd86 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 1001cd8a mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 1001cd8e jmp 0x1001cf91 */
  goto L_1001cf91;
L_1001cd93:;
  /* 1001cd93 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1001cd96 jne 0x1001ce12 */
  if (!C.zf) goto L_1001ce12;
  /* 1001cd98 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1001cd9d mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 1001cda2 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cda4 jne 0x1001cdac */
  if (!C.zf) goto L_1001cdac;
  /* 1001cda6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cdaa je 0x1001cdbb */
  if (C.zf) goto L_1001cdbb;
L_1001cdac:;
  /* 1001cdac test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 1001cdb2 jne 0x1001cdbb */
  if (!C.zf) goto L_1001cdbb;
  /* 1001cdb4 push 0x1001e5a0 */
  push32((uint32_t)(0x1001e5a0u));
  /* 1001cdb9 jmp 0x1001ce01 */
  goto L_1001ce01;
L_1001cdbb:;
  /* 1001cdbb test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1001cdbe je 0x1001cdd5 */
  if (C.zf) goto L_1001cdd5;
  /* 1001cdc0 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cdc6 jne 0x1001cdd5 */
  if (!C.zf) goto L_1001cdd5;
  /* 1001cdc8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cdcc jne 0x1001cdfc */
  if (!C.zf) goto L_1001cdfc;
  /* 1001cdce push 0x1001e598 */
  push32((uint32_t)(0x1001e598u));
  /* 1001cdd3 jmp 0x1001cde4 */
  goto L_1001cde4;
L_1001cdd5:;
  /* 1001cdd5 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cdd7 jne 0x1001cdfc */
  if (!C.zf) goto L_1001cdfc;
  /* 1001cdd9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cddd jne 0x1001cdfc */
  if (!C.zf) goto L_1001cdfc;
  /* 1001cddf push 0x1001e590 */
  push32((uint32_t)(0x1001e590u));
L_1001cde4:;
  /* 1001cde4 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1001cde7 push eax */
  push32((uint32_t)(EAX));
  /* 1001cde8 call 0x10019b70 */
  push32(0x1001cdedu); f_10019b70();
  /* 1001cded pop ecx */
  ECX = (pop32());
  /* 1001cdee mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 1001cdf2 pop ecx */
  ECX = (pop32());
L_1001cdf3:;
  /* 1001cdf3 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1001cdf7 jmp 0x1001cf6a */
  goto L_1001cf6a;
L_1001cdfc:;
  /* 1001cdfc push 0x1001e588 */
  push32((uint32_t)(0x1001e588u));
L_1001ce01:;
  /* 1001ce01 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1001ce04 push eax */
  push32((uint32_t)(EAX));
  /* 1001ce05 call 0x10019b70 */
  push32(0x1001ce0au); f_10019b70();
  /* 1001ce0a pop ecx */
  ECX = (pop32());
  /* 1001ce0b mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 1001ce0f pop ecx */
  ECX = (pop32());
  /* 1001ce10 jmp 0x1001cdf3 */
  goto L_1001cdf3;
L_1001ce12:;
  /* 1001ce12 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 1001ce15 mov ecx, edi */
  ECX = (EDI);
  /* 1001ce17 mov esi, eax */
  ESI = (EAX);
  /* 1001ce19 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 1001ce1c imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1001ce22 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 1001ce25 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 1001ce2a push 1 */
  push32((uint32_t)(0x1u));
  /* 1001ce2c lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 1001ce2f mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 1001ce33 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1001ce36 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 1001ce39 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 1001ce40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001ce43 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1001ce46 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 1001ce49 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 1001ce4c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1001ce4e push eax */
  push32((uint32_t)(EAX));
  /* 1001ce4f lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1001ce52 push eax */
  push32((uint32_t)(EAX));
  /* 1001ce53 call 0x1001d70a */
  push32(0x1001ce58u); f_1001d70a();
  /* 1001ce58 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001ce5b cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1001ce61 jb 0x1001ce73 */
  if (C.cf) goto L_1001ce73;
  /* 1001ce63 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1001ce66 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1001ce67 push eax */
  push32((uint32_t)(EAX));
  /* 1001ce68 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1001ce6b push eax */
  push32((uint32_t)(EAX));
  /* 1001ce6c call 0x1001d4ea */
  push32(0x1001ce71u); f_1001d4ea();
  /* 1001ce71 pop ecx */
  ECX = (pop32());
  /* 1001ce72 pop ecx */
  ECX = (pop32());
L_1001ce73:;
  /* 1001ce73 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 1001ce77 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 1001ce7a je 0x1001ce8d */
  if (C.zf) goto L_1001ce8d;
  /* 1001ce7c mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 1001ce7f movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 1001ce82 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001ce84 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1001ce86 jg 0x1001ce90 */
  if ((!C.zf&&C.sf==C.of)) goto L_1001ce90;
  /* 1001ce88 jmp 0x1001cd7e */
  goto L_1001cd7e;
L_1001ce8d:;
  /* 1001ce8d mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_1001ce90:;
  /* 1001ce90 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001ce93 jle 0x1001ce98 */
  if ((C.zf||C.sf!=C.of)) goto L_1001ce98;
  /* 1001ce95 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1001ce97 pop edi */
  EDI = (pop32());
L_1001ce98:;
  /* 1001ce98 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 1001ce9c sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001cea2 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 1001cea7 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_1001ceae:;
  /* 1001ceae lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1001ceb1 push eax */
  push32((uint32_t)(EAX));
  /* 1001ceb2 call 0x1001c714 */
  push32(0x1001ceb7u); f_1001c714();
  /* 1001ceb7 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 1001ceba pop ecx */
  ECX = (pop32());
  /* 1001cebb jne 0x1001ceae */
  if (!C.zf) goto L_1001ceae;
  /* 1001cebd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1001cebf jge 0x1001ced8 */
  if ((C.sf==C.of)) goto L_1001ced8;
  /* 1001cec1 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 1001cec3 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 1001cec9 jle 0x1001ced8 */
  if ((C.zf||C.sf!=C.of)) goto L_1001ced8;
L_1001cecb:;
  /* 1001cecb lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1001cece push eax */
  push32((uint32_t)(EAX));
  /* 1001cecf call 0x1001c742 */
  push32(0x1001ced4u); f_1001c742();
  /* 1001ced4 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1001ced5 pop ecx */
  ECX = (pop32());
  /* 1001ced6 jne 0x1001cecb */
  if (!C.zf) goto L_1001cecb;
L_1001ced8:;
  /* 1001ced8 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 1001cedb lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1001cede test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1001cee0 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 1001cee3 jle 0x1001cf35 */
  if ((C.zf||C.sf!=C.of)) goto L_1001cf35;
  /* 1001cee5 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_1001cee8:;
  /* 1001cee8 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 1001ceeb lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 1001ceee movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1001ceef movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1001cef0 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1001cef3 push eax */
  push32((uint32_t)(EAX));
  /* 1001cef4 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1001cef5 call 0x1001c714 */
  push32(0x1001cefau); f_1001c714();
  /* 1001cefa lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1001cefd push eax */
  push32((uint32_t)(EAX));
  /* 1001cefe call 0x1001c714 */
  push32(0x1001cf03u); f_1001c714();
  /* 1001cf03 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1001cf06 push eax */
  push32((uint32_t)(EAX));
  /* 1001cf07 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1001cf0a push eax */
  push32((uint32_t)(EAX));
  /* 1001cf0b call 0x1001c6b6 */
  push32(0x1001cf10u); f_1001c6b6();
  /* 1001cf10 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1001cf13 push eax */
  push32((uint32_t)(EAX));
  /* 1001cf14 call 0x1001c714 */
  push32(0x1001cf19u); f_1001c714();
  /* 1001cf19 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 1001cf1c mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1001cf1f and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 1001cf23 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001cf26 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1001cf28 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 1001cf2b dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 1001cf2e mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1001cf30 jne 0x1001cee8 */
  if (!C.zf) goto L_1001cee8;
  /* 1001cf32 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_1001cf35:;
  /* 1001cf35 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 1001cf38 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1001cf39 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1001cf3a cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001cf3d lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 1001cf40 jl 0x1001cf72 */
  if ((C.sf!=C.of)) goto L_1001cf72;
L_1001cf42:;
  /* 1001cf42 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cf44 jb 0x1001cf55 */
  if (C.cf) goto L_1001cf55;
  /* 1001cf46 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001cf49 jne 0x1001cf51 */
  if (!C.zf) goto L_1001cf51;
  /* 1001cf4b mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 1001cf4e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1001cf4f jmp 0x1001cf42 */
  goto L_1001cf42;
L_1001cf51:;
  /* 1001cf51 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cf53 jae 0x1001cf59 */
  if (!C.cf) goto L_1001cf59;
L_1001cf55:;
  /* 1001cf55 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1001cf56 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_1001cf59:;
  /* 1001cf59 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_1001cf5b:;
  /* 1001cf5b sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1001cf5d sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1001cf5f mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 1001cf62 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1001cf65 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_1001cf6a:;
  /* 1001cf6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1001cf6d:;
  /* 1001cf6d pop edi */
  EDI = (pop32());
  /* 1001cf6e pop esi */
  ESI = (pop32());
  /* 1001cf6f pop ebx */
  EBX = (pop32());
  /* 1001cf70 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001cf71 ret  */
  ESPCHK(0x1001cd07u, _esp0);
  ESP += 4; return;
L_1001cf72:;
  /* 1001cf72 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cf74 jb 0x1001cf82 */
  if (C.cf) goto L_1001cf82;
  /* 1001cf76 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001cf79 jne 0x1001cf7e */
  if (!C.zf) goto L_1001cf7e;
  /* 1001cf7b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1001cf7c jmp 0x1001cf72 */
  goto L_1001cf72;
L_1001cf7e:;
  /* 1001cf7e cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001cf80 jae 0x1001cf5b */
  if (!C.cf) goto L_1001cf5b;
L_1001cf82:;
  /* 1001cf82 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1001cf86 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1001cf8a mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 1001cf8e mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_1001cf91:;
  /* 1001cf91 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 1001cf95 push 1 */
  push32((uint32_t)(0x1u));
  /* 1001cf97 pop eax */
  EAX = (pop32());
  /* 1001cf98 jmp 0x1001cf6d */
  goto L_1001cf6d;
}

/* FUN_1000cf9a @ 0x1001cf9a (27 bytes, 13 insns) */
void f_1001cf9a(void) {
  FTRACE(0x1001cf9au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001cf9a mov eax, dword ptr [0x1002688c] */
  EAX = (r32((uint32_t)(0x1002688c)));
  /* 1001cf9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001cfa1 je 0x1001cfb2 */
  if (C.zf) goto L_1001cfb2;
  /* 1001cfa3 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1001cfa7 call eax */
  call_ind((uint32_t)(EAX), 0x1001cfa9u);
  /* 1001cfa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001cfab pop ecx */
  ECX = (pop32());
  /* 1001cfac je 0x1001cfb2 */
  if (C.zf) goto L_1001cfb2;
  /* 1001cfae push 1 */
  push32((uint32_t)(0x1u));
  /* 1001cfb0 pop eax */
  EAX = (pop32());
  /* 1001cfb1 ret  */
  ESPCHK(0x1001cf9au, _esp0);
  ESP += 4; return;
L_1001cfb2:;
  /* 1001cfb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001cfb4 ret  */
  ESPCHK(0x1001cf9au, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1001cfb8 (32 bytes, 18 insns) */
void f_1001cfb8(void) {
  FTRACE(0x1001cfb8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001cfb8 push ebp */
  push32((uint32_t)(EBP));
  /* 1001cfb9 mov ebp, esp */
  EBP = (ESP);
  /* 1001cfbb push ebx */
  push32((uint32_t)(EBX));
  /* 1001cfbc push esi */
  push32((uint32_t)(ESI));
  /* 1001cfbd push edi */
  push32((uint32_t)(EDI));
  /* 1001cfbe push ebp */
  push32((uint32_t)(EBP));
  /* 1001cfbf push 0 */
  push32((uint32_t)(0x0u));
  /* 1001cfc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1001cfc3 push 0x1001cfd0 */
  push32((uint32_t)(0x1001cfd0u));
  /* 1001cfc8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1001cfcb call 0x1001dab4 */
  push32(0x1001cfd0u); f_1001dab4();
  /* 1001cfd0 pop ebp */
  EBP = (pop32());
  /* 1001cfd1 pop edi */
  EDI = (pop32());
  /* 1001cfd2 pop esi */
  ESI = (pop32());
  /* 1001cfd3 pop ebx */
  EBX = (pop32());
  /* 1001cfd4 mov esp, ebp */
  ESP = (EBP);
  /* 1001cfd6 pop ebp */
  EBP = (pop32());
  /* 1001cfd7 ret  */
  ESPCHK(0x1001cfb8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1001cffa (104 bytes, 33 insns) */
void f_1001cffa(void) {
  FTRACE(0x1001cffau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001cffa push ebx */
  push32((uint32_t)(EBX));
  /* 1001cffb push esi */
  push32((uint32_t)(ESI));
  /* 1001cffc push edi */
  push32((uint32_t)(EDI));
  /* 1001cffd mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1001d001 push eax */
  push32((uint32_t)(EAX));
  /* 1001d002 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1001d004 push 0x1001cfd8 */
  push32((uint32_t)(0x1001cfd8u));
  /* 1001d009 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1001d010 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1001d017:;
  /* 1001d017 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1001d01b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1001d01e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1001d021 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d024 je 0x1001d054 */
  if (C.zf) goto L_1001d054;
  /* 1001d026 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d02a je 0x1001d054 */
  if (C.zf) goto L_1001d054;
  /* 1001d02c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1001d02f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1001d032 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1001d036 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1001d039 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d03e jne 0x1001d052 */
  if (!C.zf) goto L_1001d052;
  /* 1001d040 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1001d045 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1001d049 call 0x1001d08e */
  push32(0x1001d04eu); f_1001d08e();
  /* 1001d04e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1001d052u);
L_1001d052:;
  /* 1001d052 jmp 0x1001d017 */
  goto L_1001d017;
L_1001d054:;
  /* 1001d054 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1001d05b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001d05e pop edi */
  EDI = (pop32());
  /* 1001d05f pop esi */
  ESI = (pop32());
  /* 1001d060 pop ebx */
  EBX = (pop32());
  /* 1001d061 ret  */
  ESPCHK(0x1001cffau, _esp0);
  ESP += 4; return;
}

/* FUN_1000d08e @ 0x1001d08e (24 bytes, 10 insns) */
void f_1001d08e(void) {
  FTRACE(0x1001d08eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001d08e push ebx */
  push32((uint32_t)(EBX));
  /* 1001d08f push ecx */
  push32((uint32_t)(ECX));
  /* 1001d090 mov ebx, 0x10023124 */
  EBX = (0x10023124u);
  /* 1001d095 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001d098 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1001d09b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1001d09e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1001d0a1 pop ecx */
  ECX = (pop32());
  /* 1001d0a2 pop ebx */
  EBX = (pop32());
  /* 1001d0a3 ret 4 */
  ESPCHK(0x1001d08eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d16d @ 0x1001d16d (27 bytes, 11 insns) */
void f_1001d16d(void) {
  FTRACE(0x1001d16du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001d16d push ebp */
  push32((uint32_t)(EBP));
  /* 1001d16e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1001d172 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1001d174 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1001d177 push eax */
  push32((uint32_t)(EAX));
  /* 1001d178 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1001d17b push eax */
  push32((uint32_t)(EAX));
  /* 1001d17c call 0x1001cffa */
  push32(0x1001d181u); f_1001cffa();
  /* 1001d181 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001d184 pop ebp */
  EBP = (pop32());
  /* 1001d185 ret 4 */
  ESPCHK(0x1001d16du, _esp0);
  ESP += 8; return;
}

/* FUN_1000d188 @ 0x1001d188 (111 bytes, 44 insns) */
void f_1001d188(void) {
  FTRACE(0x1001d188u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001d188 push ebx */
  push32((uint32_t)(EBX));
  /* 1001d189 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1001d18b cmp dword ptr [0x10026858], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10026858))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d191 jne 0x1001d1a6 */
  if (!C.zf) goto L_1001d1a6;
  /* 1001d193 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1001d197 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d19a jl 0x1001d1f5 */
  if ((C.sf!=C.of)) goto L_1001d1f5;
  /* 1001d19c cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d19f jg 0x1001d1f5 */
  if ((!C.zf&&C.sf==C.of)) goto L_1001d1f5;
  /* 1001d1a1 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001d1a4 pop ebx */
  EBX = (pop32());
  /* 1001d1a5 ret  */
  ESPCHK(0x1001d188u, _esp0);
  ESP += 4; return;
L_1001d1a6:;
  /* 1001d1a6 push esi */
  push32((uint32_t)(ESI));
  /* 1001d1a7 mov esi, 0x100269d4 */
  ESI = (0x100269d4u);
  /* 1001d1ac push edi */
  push32((uint32_t)(EDI));
  /* 1001d1ad push esi */
  push32((uint32_t)(ESI));
  /* 1001d1ae call dword ptr [0x1001e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e090))), 0x1001d1b4u);
  /* 1001d1b4 cmp dword ptr [0x100269d0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100269d0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d1ba mov edi, dword ptr [0x1001e08c] */
  EDI = (r32((uint32_t)(0x1001e08c)));
  /* 1001d1c0 je 0x1001d1d0 */
  if (C.zf) goto L_1001d1d0;
  /* 1001d1c2 push esi */
  push32((uint32_t)(ESI));
  /* 1001d1c3 call edi */
  call_ind((uint32_t)(EDI), 0x1001d1c5u);
  /* 1001d1c5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1001d1c7 call 0x1001a093 */
  push32(0x1001d1ccu); f_1001a093();
  /* 1001d1cc pop ecx */
  ECX = (pop32());
  /* 1001d1cd push 1 */
  push32((uint32_t)(0x1u));
  /* 1001d1cf pop ebx */
  EBX = (pop32());
L_1001d1d0:;
  /* 1001d1d0 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1001d1d4 call 0x1001d1f7 */
  push32(0x1001d1d9u); f_1001d1f7();
  /* 1001d1d9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1001d1db pop ecx */
  ECX = (pop32());
  /* 1001d1dc mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1001d1e0 je 0x1001d1ec */
  if (C.zf) goto L_1001d1ec;
  /* 1001d1e2 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1001d1e4 call 0x1001a0f4 */
  push32(0x1001d1e9u); f_1001a0f4();
  /* 1001d1e9 pop ecx */
  ECX = (pop32());
  /* 1001d1ea jmp 0x1001d1ef */
  goto L_1001d1ef;
L_1001d1ec:;
  /* 1001d1ec push esi */
  push32((uint32_t)(ESI));
  /* 1001d1ed call edi */
  call_ind((uint32_t)(EDI), 0x1001d1efu);
L_1001d1ef:;
  /* 1001d1ef mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1001d1f3 pop edi */
  EDI = (pop32());
  /* 1001d1f4 pop esi */
  ESI = (pop32());
L_1001d1f5:;
  /* 1001d1f5 pop ebx */
  EBX = (pop32());
  /* 1001d1f6 ret  */
  ESPCHK(0x1001d188u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1f7 @ 0x1001d1f7 (204 bytes, 71 insns) */
void f_1001d1f7(void) {
  FTRACE(0x1001d1f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001d1f7 push ebp */
  push32((uint32_t)(EBP));
  /* 1001d1f8 mov ebp, esp */
  EBP = (ESP);
  /* 1001d1fa push ecx */
  push32((uint32_t)(ECX));
  /* 1001d1fb cmp dword ptr [0x10026858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10026858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d202 push ebx */
  push32((uint32_t)(EBX));
  /* 1001d203 jne 0x1001d222 */
  if (!C.zf) goto L_1001d222;
  /* 1001d205 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001d208 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d20b jl 0x1001d2c0 */
  if ((C.sf!=C.of)) goto L_1001d2c0;
  /* 1001d211 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d214 jg 0x1001d2c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_1001d2c0;
  /* 1001d21a sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001d21d jmp 0x1001d2c0 */
  goto L_1001d2c0;
L_1001d222:;
  /* 1001d222 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001d225 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d22b jge 0x1001d255 */
  if ((C.sf==C.of)) goto L_1001d255;
  /* 1001d22d cmp dword ptr [0x10020c00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10020c00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d234 jle 0x1001d242 */
  if ((C.zf||C.sf!=C.of)) goto L_1001d242;
  /* 1001d236 push 2 */
  push32((uint32_t)(0x2u));
  /* 1001d238 push ebx */
  push32((uint32_t)(EBX));
  /* 1001d239 call 0x1001944b */
  push32(0x1001d23eu); f_1001944b();
  /* 1001d23e pop ecx */
  ECX = (pop32());
  /* 1001d23f pop ecx */
  ECX = (pop32());
  /* 1001d240 jmp 0x1001d24d */
  goto L_1001d24d;
L_1001d242:;
  /* 1001d242 mov eax, dword ptr [0x100209f0] */
  EAX = (r32((uint32_t)(0x100209f0)));
  /* 1001d247 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 1001d24a and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_1001d24d:;
  /* 1001d24d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001d24f jne 0x1001d255 */
  if (!C.zf) goto L_1001d255;
L_1001d251:;
  /* 1001d251 mov eax, ebx */
  EAX = (EBX);
  /* 1001d253 jmp 0x1001d2c0 */
  goto L_1001d2c0;
L_1001d255:;
  /* 1001d255 mov edx, dword ptr [0x100209f0] */
  EDX = (r32((uint32_t)(0x100209f0)));
  /* 1001d25b mov eax, ebx */
  EAX = (EBX);
  /* 1001d25d sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1001d260 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 1001d263 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1001d268 je 0x1001d278 */
  if (C.zf) goto L_1001d278;
  /* 1001d26a and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 1001d26e mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 1001d271 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 1001d274 push 2 */
  push32((uint32_t)(0x2u));
  /* 1001d276 jmp 0x1001d281 */
  goto L_1001d281;
L_1001d278:;
  /* 1001d278 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 1001d27c mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 1001d27f push 1 */
  push32((uint32_t)(0x1u));
L_1001d281:;
  /* 1001d281 pop eax */
  EAX = (pop32());
  /* 1001d282 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1001d285 push 1 */
  push32((uint32_t)(0x1u));
  /* 1001d287 push 0 */
  push32((uint32_t)(0x0u));
  /* 1001d289 push 3 */
  push32((uint32_t)(0x3u));
  /* 1001d28b push ecx */
  push32((uint32_t)(ECX));
  /* 1001d28c push eax */
  push32((uint32_t)(EAX));
  /* 1001d28d lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1001d290 push eax */
  push32((uint32_t)(EAX));
  /* 1001d291 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1001d296 push dword ptr [0x10026858] */
  push32((uint32_t)(r32((uint32_t)(0x10026858))));
  /* 1001d29c call 0x1001c446 */
  push32(0x1001d2a1u); f_1001c446();
  /* 1001d2a1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001d2a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001d2a6 je 0x1001d251 */
  if (C.zf) goto L_1001d251;
  /* 1001d2a8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d2ab jne 0x1001d2b3 */
  if (!C.zf) goto L_1001d2b3;
  /* 1001d2ad movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1001d2b1 jmp 0x1001d2c0 */
  goto L_1001d2c0;
L_1001d2b3:;
  /* 1001d2b3 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 1001d2b7 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1001d2bb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1001d2be or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_1001d2c0:;
  /* 1001d2c0 pop ebx */
  EBX = (pop32());
  /* 1001d2c1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001d2c2 ret  */
  ESPCHK(0x1001d1f7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2c3 @ 0x1001d2c3 (49 bytes, 20 insns) */
void f_1001d2c3(void) {
  FTRACE(0x1001d2c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001d2c3 push esi */
  push32((uint32_t)(ESI));
  /* 1001d2c4 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1001d2c8 push edi */
  push32((uint32_t)(EDI));
  /* 1001d2c9 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1001d2cc test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 1001d2d0 je 0x1001d2d8 */
  if (C.zf) goto L_1001d2d8;
  /* 1001d2d2 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1001d2d6 jmp 0x1001d2ef */
  goto L_1001d2ef;
L_1001d2d8:;
  /* 1001d2d8 push esi */
  push32((uint32_t)(ESI));
  /* 1001d2d9 call 0x1001900e */
  push32(0x1001d2deu); f_1001900e();
  /* 1001d2de push esi */
  push32((uint32_t)(ESI));
  /* 1001d2df call 0x1001d2f4 */
  push32(0x1001d2e4u); f_1001d2f4();
  /* 1001d2e4 push esi */
  push32((uint32_t)(ESI));
  /* 1001d2e5 mov edi, eax */
  EDI = (EAX);
  /* 1001d2e7 call 0x10019060 */
  push32(0x1001d2ecu); f_10019060();
  /* 1001d2ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001d2ef:;
  /* 1001d2ef mov eax, edi */
  EAX = (EDI);
  /* 1001d2f1 pop edi */
  EDI = (pop32());
  /* 1001d2f2 pop esi */
  ESI = (pop32());
  /* 1001d2f3 ret  */
  ESPCHK(0x1001d2c3u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x1001d2f4 (76 bytes, 30 insns) */
void f_1001d2f4(void) {
  FTRACE(0x1001d2f4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001d2f4 push esi */
  push32((uint32_t)(ESI));
  /* 1001d2f5 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1001d2f9 push edi */
  push32((uint32_t)(EDI));
  /* 1001d2fa or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1001d2fd test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1001d301 je 0x1001d337 */
  if (C.zf) goto L_1001d337;
  /* 1001d303 push esi */
  push32((uint32_t)(ESI));
  /* 1001d304 call 0x1001c1f4 */
  push32(0x1001d309u); f_1001c1f4();
  /* 1001d309 push esi */
  push32((uint32_t)(ESI));
  /* 1001d30a mov edi, eax */
  EDI = (EAX);
  /* 1001d30c call 0x1001d866 */
  push32(0x1001d311u); f_1001d866();
  /* 1001d311 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1001d314 call 0x1001d786 */
  push32(0x1001d319u); f_1001d786();
  /* 1001d319 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001d31c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001d31e jge 0x1001d325 */
  if ((C.sf==C.of)) goto L_1001d325;
  /* 1001d320 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1001d323 jmp 0x1001d337 */
  goto L_1001d337;
L_1001d325:;
  /* 1001d325 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 1001d328 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001d32a je 0x1001d337 */
  if (C.zf) goto L_1001d337;
  /* 1001d32c push eax */
  push32((uint32_t)(EAX));
  /* 1001d32d call 0x1001a246 */
  push32(0x1001d332u); f_1001a246();
  /* 1001d332 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 1001d336 pop ecx */
  ECX = (pop32());
L_1001d337:;
  /* 1001d337 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1001d33b mov eax, edi */
  EAX = (EDI);
  /* 1001d33d pop edi */
  EDI = (pop32());
  /* 1001d33e pop esi */
  ESI = (pop32());
  /* 1001d33f ret  */
  ESPCHK(0x1001d2f4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d340 @ 0x1001d340 (147 bytes, 52 insns) */
void f_1001d340(void) {
  FTRACE(0x1001d340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001d340 push ebx */
  push32((uint32_t)(EBX));
  /* 1001d341 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 1001d345 cmp ebx, dword ptr [0x10027d60] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10027d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d34b push esi */
  push32((uint32_t)(ESI));
  /* 1001d34c push edi */
  push32((uint32_t)(EDI));
  /* 1001d34d jae 0x1001d3c1 */
  if (!C.cf) goto L_1001d3c1;
  /* 1001d34f mov eax, ebx */
  EAX = (EBX);
  /* 1001d351 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1001d354 lea edi, [eax*4 + 0x10027c60] */
  EDI = ((uint32_t)(EAX*4 + 0x10027c60));
  /* 1001d35b mov eax, ebx */
  EAX = (EBX);
  /* 1001d35d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1001d360 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1001d363 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1001d365 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1001d368 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1001d36d je 0x1001d3c1 */
  if (C.zf) goto L_1001d3c1;
  /* 1001d36f push ebx */
  push32((uint32_t)(EBX));
  /* 1001d370 call 0x1001c0c4 */
  push32(0x1001d375u); f_1001c0c4();
  /* 1001d375 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1001d377 pop ecx */
  ECX = (pop32());
  /* 1001d378 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1001d37d je 0x1001d3a8 */
  if (C.zf) goto L_1001d3a8;
  /* 1001d37f push ebx */
  push32((uint32_t)(EBX));
  /* 1001d380 call 0x1001c082 */
  push32(0x1001d385u); f_1001c082();
  /* 1001d385 pop ecx */
  ECX = (pop32());
  /* 1001d386 push eax */
  push32((uint32_t)(EAX));
  /* 1001d387 call dword ptr [0x1001e0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e0d0))), 0x1001d38du);
  /* 1001d38d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001d38f jne 0x1001d39b */
  if (!C.zf) goto L_1001d39b;
  /* 1001d391 call dword ptr [0x1001e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e03c))), 0x1001d397u);
  /* 1001d397 mov esi, eax */
  ESI = (EAX);
  /* 1001d399 jmp 0x1001d39d */
  goto L_1001d39d;
L_1001d39b:;
  /* 1001d39b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1001d39d:;
  /* 1001d39d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1001d39f je 0x1001d3b6 */
  if (C.zf) goto L_1001d3b6;
  /* 1001d3a1 call 0x1001bffa */
  push32(0x1001d3a6u); f_1001bffa();
  /* 1001d3a6 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1001d3a8:;
  /* 1001d3a8 call 0x1001bff1 */
  push32(0x1001d3adu); f_1001bff1();
  /* 1001d3ad mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1001d3b3 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_1001d3b6:;
  /* 1001d3b6 push ebx */
  push32((uint32_t)(EBX));
  /* 1001d3b7 call 0x1001c123 */
  push32(0x1001d3bcu); f_1001c123();
  /* 1001d3bc pop ecx */
  ECX = (pop32());
  /* 1001d3bd mov eax, esi */
  EAX = (ESI);
  /* 1001d3bf jmp 0x1001d3cf */
  goto L_1001d3cf;
L_1001d3c1:;
  /* 1001d3c1 call 0x1001bff1 */
  push32(0x1001d3c6u); f_1001bff1();
  /* 1001d3c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1001d3cc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1001d3cf:;
  /* 1001d3cf pop edi */
  EDI = (pop32());
  /* 1001d3d0 pop esi */
  ESI = (pop32());
  /* 1001d3d1 pop ebx */
  EBX = (pop32());
  /* 1001d3d2 ret  */
  ESPCHK(0x1001d340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d470 @ 0x1001d470 (62 bytes, 35 insns) */
void f_1001d470(void) {
  FTRACE(0x1001d470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001d470 push ebp */
  push32((uint32_t)(EBP));
  /* 1001d471 mov ebp, esp */
  EBP = (ESP);
  /* 1001d473 push esi */
  push32((uint32_t)(ESI));
  /* 1001d474 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001d476 push eax */
  push32((uint32_t)(EAX));
  /* 1001d477 push eax */
  push32((uint32_t)(EAX));
  /* 1001d478 push eax */
  push32((uint32_t)(EAX));
  /* 1001d479 push eax */
  push32((uint32_t)(EAX));
  /* 1001d47a push eax */
  push32((uint32_t)(EAX));
  /* 1001d47b push eax */
  push32((uint32_t)(EAX));
  /* 1001d47c push eax */
  push32((uint32_t)(EAX));
  /* 1001d47d push eax */
  push32((uint32_t)(EAX));
  /* 1001d47e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1001d481 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1001d484:;
  /* 1001d484 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1001d486 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1001d488 je 0x1001d491 */
  if (C.zf) goto L_1001d491;
  /* 1001d48a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1001d48b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1001d48b");
  /* 1001d48f jmp 0x1001d484 */
  goto L_1001d484;
L_1001d491:;
  /* 1001d491 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1001d494 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1001d497 nop  */
  /* nop */
L_1001d498:;
  /* 1001d498 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1001d499 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1001d49b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1001d49d je 0x1001d4a6 */
  if (C.zf) goto L_1001d4a6;
  /* 1001d49f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1001d4a0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1001d4a0");
  /* 1001d4a4 jae 0x1001d498 */
  if (!C.cf) goto L_1001d498;
L_1001d4a6:;
  /* 1001d4a6 mov eax, ecx */
  EAX = (ECX);
  /* 1001d4a8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001d4ab pop esi */
  ESI = (pop32());
  /* 1001d4ac leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001d4ad ret  */
  ESPCHK(0x1001d470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4b0 @ 0x1001d4b0 (58 bytes, 32 insns) */
void f_1001d4b0(void) {
  FTRACE(0x1001d4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001d4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1001d4b1 mov ebp, esp */
  EBP = (ESP);
  /* 1001d4b3 push esi */
  push32((uint32_t)(ESI));
  /* 1001d4b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001d4b6 push eax */
  push32((uint32_t)(EAX));
  /* 1001d4b7 push eax */
  push32((uint32_t)(EAX));
  /* 1001d4b8 push eax */
  push32((uint32_t)(EAX));
  /* 1001d4b9 push eax */
  push32((uint32_t)(EAX));
  /* 1001d4ba push eax */
  push32((uint32_t)(EAX));
  /* 1001d4bb push eax */
  push32((uint32_t)(EAX));
  /* 1001d4bc push eax */
  push32((uint32_t)(EAX));
  /* 1001d4bd push eax */
  push32((uint32_t)(EAX));
  /* 1001d4be mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1001d4c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1001d4c4:;
  /* 1001d4c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1001d4c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1001d4c8 je 0x1001d4d1 */
  if (C.zf) goto L_1001d4d1;
  /* 1001d4ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1001d4cb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1001d4cb");
  /* 1001d4cf jmp 0x1001d4c4 */
  goto L_1001d4c4;
L_1001d4d1:;
  /* 1001d4d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1001d4d4:;
  /* 1001d4d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1001d4d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1001d4d8 je 0x1001d4e4 */
  if (C.zf) goto L_1001d4e4;
  /* 1001d4da inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1001d4db bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1001d4db");
  /* 1001d4df jae 0x1001d4d4 */
  if (!C.cf) goto L_1001d4d4;
  /* 1001d4e1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1001d4e4:;
  /* 1001d4e4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001d4e7 pop esi */
  ESI = (pop32());
  /* 1001d4e8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001d4e9 ret  */
  ESPCHK(0x1001d4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4ea @ 0x1001d4ea (544 bytes, 177 insns) */
void f_1001d4ea(void) {
  FTRACE(0x1001d4eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001d4ea push ebp */
  push32((uint32_t)(EBP));
  /* 1001d4eb mov ebp, esp */
  EBP = (ESP);
  /* 1001d4ed sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001d4f0 push ebx */
  push32((uint32_t)(EBX));
  /* 1001d4f1 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1001d4f4 push esi */
  push32((uint32_t)(ESI));
  /* 1001d4f5 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1001d4f8 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 1001d4fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001d4fe push edi */
  push32((uint32_t)(EDI));
  /* 1001d4ff mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1001d502 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1001d505 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1001d508 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1001d50b mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 1001d50f mov edi, ecx */
  EDI = (ECX);
  /* 1001d511 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 1001d516 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 1001d518 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1001d51a and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1001d51c and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 1001d522 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1001d526 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 1001d529 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1001d52c jae 0x1001d6ea */
  if (!C.cf) goto L_1001d6ea;
  /* 1001d532 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1001d537 jae 0x1001d6ea */
  if (!C.cf) goto L_1001d6ea;
  /* 1001d53d cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1001d542 ja 0x1001d6ea */
  if ((!C.cf&&!C.zf)) goto L_1001d6ea;
  /* 1001d548 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1001d54d ja 0x1001d553 */
  if ((!C.cf&&!C.zf)) goto L_1001d553;
  /* 1001d54f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001d551 jmp 0x1001d58d */
  goto L_1001d58d;
L_1001d553:;
  /* 1001d553 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 1001d556 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 1001d55b jne 0x1001d575 */
  if (!C.zf) goto L_1001d575;
  /* 1001d55d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1001d560 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 1001d563 jne 0x1001d575 */
  if (!C.zf) goto L_1001d575;
  /* 1001d565 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001d567 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d56a jne 0x1001d577 */
  if (!C.zf) goto L_1001d577;
  /* 1001d56c cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d56e jne 0x1001d577 */
  if (!C.zf) goto L_1001d577;
  /* 1001d570 jmp 0x1001d6e4 */
  goto L_1001d6e4;
L_1001d575:;
  /* 1001d575 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1001d577:;
  /* 1001d577 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1001d57a jne 0x1001d59a */
  if (!C.zf) goto L_1001d59a;
  /* 1001d57c inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1001d57f test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 1001d582 jne 0x1001d59a */
  if (!C.zf) goto L_1001d59a;
  /* 1001d584 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d587 jne 0x1001d59a */
  if (!C.zf) goto L_1001d59a;
  /* 1001d589 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d58b jne 0x1001d59a */
  if (!C.zf) goto L_1001d59a;
L_1001d58d:;
  /* 1001d58d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1001d590 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1001d593 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1001d595 jmp 0x1001d705 */
  goto L_1001d705;
L_1001d59a:;
  /* 1001d59a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1001d59d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1001d5a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1001d5a3 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_1001d5aa:;
  /* 1001d5aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1001d5ad add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001d5af cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d5b3 jle 0x1001d5fe */
  if ((C.zf||C.sf!=C.of)) goto L_1001d5fe;
  /* 1001d5b5 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001d5b7 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 1001d5ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1001d5bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1001d5c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1001d5c3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1001d5c6:;
  /* 1001d5c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1001d5c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1001d5cc movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 1001d5cf movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 1001d5d2 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1001d5d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1001d5d8 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001d5db push ecx */
  push32((uint32_t)(ECX));
  /* 1001d5dc push eax */
  push32((uint32_t)(EAX));
  /* 1001d5dd push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 1001d5df call 0x1001c695 */
  push32(0x1001d5e4u); f_1001c695();
  /* 1001d5e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001d5e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001d5e9 je 0x1001d5f1 */
  if (C.zf) goto L_1001d5f1;
  /* 1001d5eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1001d5ee inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_1001d5f1:;
  /* 1001d5f1 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1001d5f5 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1001d5f9 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 1001d5fc jne 0x1001d5c6 */
  if (!C.zf) goto L_1001d5c6;
L_1001d5fe:;
  /* 1001d5fe add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1001d602 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 1001d605 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 1001d608 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d60c jg 0x1001d5aa */
  if ((!C.zf&&C.sf==C.of)) goto L_1001d5aa;
  /* 1001d60e add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1001d615 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1001d61a jle 0x1001d641 */
  if ((C.zf||C.sf!=C.of)) goto L_1001d641;
L_1001d61c:;
  /* 1001d61c test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 1001d620 jne 0x1001d63a */
  if (!C.zf) goto L_1001d63a;
  /* 1001d622 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1001d625 push eax */
  push32((uint32_t)(EAX));
  /* 1001d626 call 0x1001c714 */
  push32(0x1001d62bu); f_1001c714();
  /* 1001d62b add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1001d632 pop ecx */
  ECX = (pop32());
  /* 1001d633 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1001d638 jg 0x1001d61c */
  if ((!C.zf&&C.sf==C.of)) goto L_1001d61c;
L_1001d63a:;
  /* 1001d63a cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1001d63f jg 0x1001d67a */
  if ((!C.zf&&C.sf==C.of)) goto L_1001d67a;
L_1001d641:;
  /* 1001d641 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1001d648 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1001d64d jge 0x1001d67a */
  if ((C.sf==C.of)) goto L_1001d67a;
  /* 1001d64f movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 1001d653 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1001d655 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1001d658 mov ebx, eax */
  EBX = (EAX);
L_1001d65a:;
  /* 1001d65a test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 1001d65e je 0x1001d663 */
  if (C.zf) goto L_1001d663;
  /* 1001d660 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_1001d663:;
  /* 1001d663 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1001d666 push eax */
  push32((uint32_t)(EAX));
  /* 1001d667 call 0x1001c742 */
  push32(0x1001d66cu); f_1001c742();
  /* 1001d66c dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1001d66d pop ecx */
  ECX = (pop32());
  /* 1001d66e jne 0x1001d65a */
  if (!C.zf) goto L_1001d65a;
  /* 1001d670 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d674 je 0x1001d67a */
  if (C.zf) goto L_1001d67a;
  /* 1001d676 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_1001d67a:;
  /* 1001d67a cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1001d680 ja 0x1001d691 */
  if ((!C.cf&&!C.zf)) goto L_1001d691;
  /* 1001d682 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1001d685 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1001d68a cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d68f jne 0x1001d6c6 */
  if (!C.zf) goto L_1001d6c6;
L_1001d691:;
  /* 1001d691 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d695 jne 0x1001d6c3 */
  if (!C.zf) goto L_1001d6c3;
  /* 1001d697 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 1001d69b cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d69f jne 0x1001d6be */
  if (!C.zf) goto L_1001d6be;
  /* 1001d6a1 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 1001d6a5 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1001d6ab jne 0x1001d6b8 */
  if (!C.zf) goto L_1001d6b8;
  /* 1001d6ad inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1001d6b0 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 1001d6b6 jmp 0x1001d6c6 */
  goto L_1001d6c6;
L_1001d6b8:;
  /* 1001d6b8 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 1001d6bc jmp 0x1001d6c6 */
  goto L_1001d6c6;
L_1001d6be:;
  /* 1001d6be inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 1001d6c1 jmp 0x1001d6c6 */
  goto L_1001d6c6;
L_1001d6c3:;
  /* 1001d6c3 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_1001d6c6:;
  /* 1001d6c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001d6c9 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1001d6cd jae 0x1001d6ea */
  if (!C.cf) goto L_1001d6ea;
  /* 1001d6cf mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 1001d6d3 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 1001d6d5 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 1001d6d8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1001d6db mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 1001d6de mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1001d6e1 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_1001d6e4:;
  /* 1001d6e4 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 1001d6e8 jmp 0x1001d705 */
  goto L_1001d705;
L_1001d6ea:;
  /* 1001d6ea neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 1001d6ed sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001d6ef and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1001d6f3 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 1001d6f9 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1001d6ff and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1001d702 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_1001d705:;
  /* 1001d705 pop edi */
  EDI = (pop32());
  /* 1001d706 pop esi */
  ESI = (pop32());
  /* 1001d707 pop ebx */
  EBX = (pop32());
  /* 1001d708 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001d709 ret  */
  ESPCHK(0x1001d4eau, _esp0);
  ESP += 4; return;
}

/* FUN_1000d70a @ 0x1001d70a (124 bytes, 52 insns) */
void f_1001d70a(void) {
  FTRACE(0x1001d70au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001d70a push ebp */
  push32((uint32_t)(EBP));
  /* 1001d70b mov ebp, esp */
  EBP = (ESP);
  /* 1001d70d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001d710 push ebx */
  push32((uint32_t)(EBX));
  /* 1001d711 mov ebx, 0x10023240 */
  EBX = (0x10023240u);
  /* 1001d716 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1001d718 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001d71b cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d71e je 0x1001d783 */
  if (C.zf) goto L_1001d783;
  /* 1001d720 jge 0x1001d732 */
  if ((C.sf==C.of)) goto L_1001d732;
  /* 1001d722 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1001d725 mov ebx, 0x100233a0 */
  EBX = (0x100233a0u);
  /* 1001d72a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1001d72c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1001d72f sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_1001d732:;
  /* 1001d732 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d735 jne 0x1001d73d */
  if (!C.zf) goto L_1001d73d;
  /* 1001d737 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1001d73a mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_1001d73d:;
  /* 1001d73d cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d740 je 0x1001d783 */
  if (C.zf) goto L_1001d783;
  /* 1001d742 push esi */
  push32((uint32_t)(ESI));
  /* 1001d743 push edi */
  push32((uint32_t)(EDI));
L_1001d744:;
  /* 1001d744 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1001d747 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1001d74a sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 1001d74e and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1001d751 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d753 je 0x1001d77c */
  if (C.zf) goto L_1001d77c;
  /* 1001d755 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 1001d758 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1001d75e lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 1001d761 jb 0x1001d76f */
  if (C.cf) goto L_1001d76f;
  /* 1001d763 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 1001d766 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1001d767 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1001d768 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1001d769 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 1001d76c lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_1001d76f:;
  /* 1001d76f push esi */
  push32((uint32_t)(ESI));
  /* 1001d770 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1001d773 call 0x1001d4ea */
  push32(0x1001d778u); f_1001d4ea();
  /* 1001d778 pop ecx */
  ECX = (pop32());
  /* 1001d779 pop ecx */
  ECX = (pop32());
  /* 1001d77a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_1001d77c:;
  /* 1001d77c cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d77f jne 0x1001d744 */
  if (!C.zf) goto L_1001d744;
  /* 1001d781 pop edi */
  EDI = (pop32());
  /* 1001d782 pop esi */
  ESI = (pop32());
L_1001d783:;
  /* 1001d783 pop ebx */
  EBX = (pop32());
  /* 1001d784 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001d785 ret  */
  ESPCHK(0x1001d70au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d786 @ 0x1001d786 (93 bytes, 32 insns) */
void f_1001d786(void) {
  FTRACE(0x1001d786u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001d786 push esi */
  push32((uint32_t)(ESI));
  /* 1001d787 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1001d78b cmp esi, dword ptr [0x10027d60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10027d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d791 jae 0x1001d7cb */
  if (!C.cf) goto L_1001d7cb;
  /* 1001d793 mov ecx, esi */
  ECX = (ESI);
  /* 1001d795 mov eax, esi */
  EAX = (ESI);
  /* 1001d797 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1001d79a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1001d79d mov ecx, dword ptr [ecx*4 + 0x10027c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10027c60)));
  /* 1001d7a4 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1001d7a7 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1001d7ac je 0x1001d7cb */
  if (C.zf) goto L_1001d7cb;
  /* 1001d7ae push edi */
  push32((uint32_t)(EDI));
  /* 1001d7af push esi */
  push32((uint32_t)(ESI));
  /* 1001d7b0 call 0x1001c0c4 */
  push32(0x1001d7b5u); f_1001c0c4();
  /* 1001d7b5 push esi */
  push32((uint32_t)(ESI));
  /* 1001d7b6 call 0x1001d7e3 */
  push32(0x1001d7bbu); f_1001d7e3();
  /* 1001d7bb push esi */
  push32((uint32_t)(ESI));
  /* 1001d7bc mov edi, eax */
  EDI = (EAX);
  /* 1001d7be call 0x1001c123 */
  push32(0x1001d7c3u); f_1001c123();
  /* 1001d7c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001d7c6 mov eax, edi */
  EAX = (EDI);
  /* 1001d7c8 pop edi */
  EDI = (pop32());
  /* 1001d7c9 pop esi */
  ESI = (pop32());
  /* 1001d7ca ret  */
  ESPCHK(0x1001d786u, _esp0);
  ESP += 4; return;
L_1001d7cb:;
  /* 1001d7cb call 0x1001bff1 */
  push32(0x1001d7d0u); f_1001bff1();
  /* 1001d7d0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1001d7d6 call 0x1001bffa */
  push32(0x1001d7dbu); f_1001bffa();
  /* 1001d7db and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1001d7de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1001d7e1 pop esi */
  ESI = (pop32());
  /* 1001d7e2 ret  */
  ESPCHK(0x1001d786u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7e3 @ 0x1001d7e3 (131 bytes, 52 insns) */
void f_1001d7e3(void) {
  FTRACE(0x1001d7e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001d7e3 push esi */
  push32((uint32_t)(ESI));
  /* 1001d7e4 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1001d7e8 push edi */
  push32((uint32_t)(EDI));
  /* 1001d7e9 push esi */
  push32((uint32_t)(ESI));
  /* 1001d7ea call 0x1001c082 */
  push32(0x1001d7efu); f_1001c082();
  /* 1001d7ef cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d7f2 pop ecx */
  ECX = (pop32());
  /* 1001d7f3 je 0x1001d831 */
  if (C.zf) goto L_1001d831;
  /* 1001d7f5 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d7f8 je 0x1001d7ff */
  if (C.zf) goto L_1001d7ff;
  /* 1001d7fa cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d7fd jne 0x1001d815 */
  if (!C.zf) goto L_1001d815;
L_1001d7ff:;
  /* 1001d7ff push 2 */
  push32((uint32_t)(0x2u));
  /* 1001d801 call 0x1001c082 */
  push32(0x1001d806u); f_1001c082();
  /* 1001d806 push 1 */
  push32((uint32_t)(0x1u));
  /* 1001d808 mov edi, eax */
  EDI = (EAX);
  /* 1001d80a call 0x1001c082 */
  push32(0x1001d80fu); f_1001c082();
  /* 1001d80f pop ecx */
  ECX = (pop32());
  /* 1001d810 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d812 pop ecx */
  ECX = (pop32());
  /* 1001d813 je 0x1001d831 */
  if (C.zf) goto L_1001d831;
L_1001d815:;
  /* 1001d815 push esi */
  push32((uint32_t)(ESI));
  /* 1001d816 call 0x1001c082 */
  push32(0x1001d81bu); f_1001c082();
  /* 1001d81b pop ecx */
  ECX = (pop32());
  /* 1001d81c push eax */
  push32((uint32_t)(EAX));
  /* 1001d81d call dword ptr [0x1001e0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e0d4))), 0x1001d823u);
  /* 1001d823 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1001d825 jne 0x1001d831 */
  if (!C.zf) goto L_1001d831;
  /* 1001d827 call dword ptr [0x1001e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001e03c))), 0x1001d82du);
  /* 1001d82d mov edi, eax */
  EDI = (EAX);
  /* 1001d82f jmp 0x1001d833 */
  goto L_1001d833;
L_1001d831:;
  /* 1001d831 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_1001d833:;
  /* 1001d833 push esi */
  push32((uint32_t)(ESI));
  /* 1001d834 call 0x1001c003 */
  push32(0x1001d839u); f_1001c003();
  /* 1001d839 mov eax, esi */
  EAX = (ESI);
  /* 1001d83b and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 1001d83e sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1001d841 pop ecx */
  ECX = (pop32());
  /* 1001d842 mov eax, dword ptr [eax*4 + 0x10027c60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10027c60)));
  /* 1001d849 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 1001d84c and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 1001d851 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1001d853 je 0x1001d861 */
  if (C.zf) goto L_1001d861;
  /* 1001d855 push edi */
  push32((uint32_t)(EDI));
  /* 1001d856 call 0x1001bf7e */
  push32(0x1001d85bu); f_1001bf7e();
  /* 1001d85b pop ecx */
  ECX = (pop32());
  /* 1001d85c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1001d85f jmp 0x1001d863 */
  goto L_1001d863;
L_1001d861:;
  /* 1001d861 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1001d863:;
  /* 1001d863 pop edi */
  EDI = (pop32());
  /* 1001d864 pop esi */
  ESI = (pop32());
  /* 1001d865 ret  */
  ESPCHK(0x1001d7e3u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x1001d866 (43 bytes, 17 insns) */
void f_1001d866(void) {
  FTRACE(0x1001d866u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001d866 push esi */
  push32((uint32_t)(ESI));
  /* 1001d867 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1001d86b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1001d86e test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 1001d870 je 0x1001d88f */
  if (C.zf) goto L_1001d88f;
  /* 1001d872 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1001d874 je 0x1001d88f */
  if (C.zf) goto L_1001d88f;
  /* 1001d876 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 1001d879 call 0x1001a246 */
  push32(0x1001d87eu); f_1001a246();
  /* 1001d87e and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 1001d884 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001d886 pop ecx */
  ECX = (pop32());
  /* 1001d887 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1001d889 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1001d88c mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_1001d88f:;
  /* 1001d88f pop esi */
  ESI = (pop32());
  /* 1001d890 ret  */
  ESPCHK(0x1001d866u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8a0 @ 0x1001d8a0 (208 bytes, 85 insns) */
void f_1001d8a0(void) {
  FTRACE(0x1001d8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001d8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1001d8a1 mov ebp, esp */
  EBP = (ESP);
  /* 1001d8a3 push edi */
  push32((uint32_t)(EDI));
  /* 1001d8a4 push esi */
  push32((uint32_t)(ESI));
  /* 1001d8a5 push ebx */
  push32((uint32_t)(EBX));
  /* 1001d8a6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1001d8a9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1001d8ac lea eax, [0x10026850] */
  EAX = ((uint32_t)(0x10026850));
  /* 1001d8b2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d8b6 jne 0x1001d8f3 */
  if (!C.zf) goto L_1001d8f3;
  /* 1001d8b8 mov al, 0xff */
  AL = (0xffu);
  /* 1001d8ba mov edi, edi */
  EDI = (EDI);
L_1001d8bc:;
  /* 1001d8bc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1001d8be je 0x1001d8ee */
  if (C.zf) goto L_1001d8ee;
  /* 1001d8c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1001d8c2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1001d8c3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 1001d8c5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1001d8c6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001d8c8 je 0x1001d8bc */
  if (C.zf) goto L_1001d8bc;
  /* 1001d8ca sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1001d8cc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001d8ce sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1001d8d0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1001d8d3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1001d8d5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1001d8d7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 1001d8d9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1001d8db cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001d8dd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1001d8df and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1001d8e2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1001d8e4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1001d8e6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001d8e8 je 0x1001d8bc */
  if (C.zf) goto L_1001d8bc;
  /* 1001d8ea sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1001d8ec sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1001d8ee:;
  /* 1001d8ee movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1001d8f1 jmp 0x1001d96b */
  goto L_1001d96b;
L_1001d8f3:;
  /* 1001d8f3 lock inc dword ptr [0x100269d4] */
  x86_unimpl("lock inc @ 0x1001d8f3");
  /* 1001d8fa cmp dword ptr [0x100269d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100269d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d901 jg 0x1001d907 */
  if ((!C.zf&&C.sf==C.of)) goto L_1001d907;
  /* 1001d903 push 0 */
  push32((uint32_t)(0x0u));
  /* 1001d905 jmp 0x1001d91c */
  goto L_1001d91c;
L_1001d907:;
  /* 1001d907 lock dec dword ptr [0x100269d4] */
  x86_unimpl("lock dec @ 0x1001d907");
  /* 1001d90e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1001d910 call 0x1001a093 */
  push32(0x1001d915u); f_1001a093();
  /* 1001d915 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1001d91c:;
  /* 1001d91c mov eax, 0xff */
  EAX = (0xffu);
  /* 1001d921 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1001d923 nop  */
  /* nop */
L_1001d924:;
  /* 1001d924 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1001d926 je 0x1001d94f */
  if (C.zf) goto L_1001d94f;
  /* 1001d928 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1001d92a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1001d92b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1001d92d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1001d92e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001d930 je 0x1001d924 */
  if (C.zf) goto L_1001d924;
  /* 1001d932 push eax */
  push32((uint32_t)(EAX));
  /* 1001d933 push ebx */
  push32((uint32_t)(EBX));
  /* 1001d934 call 0x1001952f */
  push32(0x1001d939u); f_1001952f();
  /* 1001d939 mov ebx, eax */
  EBX = (EAX);
  /* 1001d93b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001d93e call 0x1001952f */
  push32(0x1001d943u); f_1001952f();
  /* 1001d943 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001d946 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001d948 je 0x1001d924 */
  if (C.zf) goto L_1001d924;
  /* 1001d94a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1001d94c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1001d94f:;
  /* 1001d94f mov ebx, eax */
  EBX = (EAX);
  /* 1001d951 pop eax */
  EAX = (pop32());
  /* 1001d952 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001d954 jne 0x1001d95f */
  if (!C.zf) goto L_1001d95f;
  /* 1001d956 lock dec dword ptr [0x100269d4] */
  x86_unimpl("lock dec @ 0x1001d956");
  /* 1001d95d jmp 0x1001d969 */
  goto L_1001d969;
L_1001d95f:;
  /* 1001d95f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1001d961 call 0x1001a0f4 */
  push32(0x1001d966u); f_1001a0f4();
  /* 1001d966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1001d969:;
  /* 1001d969 mov eax, ebx */
  EAX = (EBX);
L_1001d96b:;
  /* 1001d96b pop ebx */
  EBX = (pop32());
  /* 1001d96c pop esi */
  ESI = (pop32());
  /* 1001d96d pop edi */
  EDI = (pop32());
  /* 1001d96e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001d96f ret  */
  ESPCHK(0x1001d8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d970 @ 0x1001d970 (257 bytes, 103 insns) */
void f_1001d970(void) {
  FTRACE(0x1001d970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001d970 push ebp */
  push32((uint32_t)(EBP));
  /* 1001d971 mov ebp, esp */
  EBP = (ESP);
  /* 1001d973 push edi */
  push32((uint32_t)(EDI));
  /* 1001d974 push esi */
  push32((uint32_t)(ESI));
  /* 1001d975 push ebx */
  push32((uint32_t)(EBX));
  /* 1001d976 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1001d979 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1001d97b je 0x1001da6a */
  if (C.zf) goto L_1001da6a;
  /* 1001d981 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1001d984 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1001d987 lea eax, [0x10026850] */
  EAX = ((uint32_t)(0x10026850));
  /* 1001d98d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d991 jne 0x1001d9e1 */
  if (!C.zf) goto L_1001d9e1;
  /* 1001d993 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 1001d995 mov bl, 0x5a */
  BL = (0x5au);
  /* 1001d997 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 1001d999 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1001d99c:;
  /* 1001d99c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1001d99e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1001d9a0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1001d9a2 je 0x1001d9c5 */
  if (C.zf) goto L_1001d9c5;
  /* 1001d9a4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1001d9a6 je 0x1001d9c5 */
  if (C.zf) goto L_1001d9c5;
  /* 1001d9a8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1001d9a9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1001d9aa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001d9ac jb 0x1001d9b4 */
  if (C.cf) goto L_1001d9b4;
  /* 1001d9ae cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001d9b0 ja 0x1001d9b4 */
  if ((!C.cf&&!C.zf)) goto L_1001d9b4;
  /* 1001d9b2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_1001d9b4:;
  /* 1001d9b4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001d9b6 jb 0x1001d9be */
  if (C.cf) goto L_1001d9be;
  /* 1001d9b8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001d9ba ja 0x1001d9be */
  if ((!C.cf&&!C.zf)) goto L_1001d9be;
  /* 1001d9bc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1001d9be:;
  /* 1001d9be cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001d9c0 jne 0x1001d9cf */
  if (!C.zf) goto L_1001d9cf;
  /* 1001d9c2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1001d9c3 jne 0x1001d99c */
  if (!C.zf) goto L_1001d99c;
L_1001d9c5:;
  /* 1001d9c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1001d9c7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1001d9c9 je 0x1001da6a */
  if (C.zf) goto L_1001da6a;
L_1001d9cf:;
  /* 1001d9cf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1001d9d4 jb 0x1001da6a */
  if (C.cf) goto L_1001da6a;
  /* 1001d9da neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1001d9dc jmp 0x1001da6a */
  goto L_1001da6a;
L_1001d9e1:;
  /* 1001d9e1 lock inc dword ptr [0x100269d4] */
  x86_unimpl("lock inc @ 0x1001d9e1");
  /* 1001d9e8 cmp dword ptr [0x100269d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100269d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001d9ef jg 0x1001d9f5 */
  if ((!C.zf&&C.sf==C.of)) goto L_1001d9f5;
  /* 1001d9f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1001d9f3 jmp 0x1001da0e */
  goto L_1001da0e;
L_1001d9f5:;
  /* 1001d9f5 lock dec dword ptr [0x100269d4] */
  x86_unimpl("lock dec @ 0x1001d9f5");
  /* 1001d9fc mov ebx, ecx */
  EBX = (ECX);
  /* 1001d9fe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1001da00 call 0x1001a093 */
  push32(0x1001da05u); f_1001a093();
  /* 1001da05 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1001da0c mov ecx, ebx */
  ECX = (EBX);
L_1001da0e:;
  /* 1001da0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001da10 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1001da12 mov edi, edi */
  EDI = (EDI);
L_1001da14:;
  /* 1001da14 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1001da16 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001da18 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1001da1a je 0x1001da3f */
  if (C.zf) goto L_1001da3f;
  /* 1001da1c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1001da1e je 0x1001da3f */
  if (C.zf) goto L_1001da3f;
  /* 1001da20 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1001da21 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1001da22 push ecx */
  push32((uint32_t)(ECX));
  /* 1001da23 push eax */
  push32((uint32_t)(EAX));
  /* 1001da24 push ebx */
  push32((uint32_t)(EBX));
  /* 1001da25 call 0x1001952f */
  push32(0x1001da2au); f_1001952f();
  /* 1001da2a mov ebx, eax */
  EBX = (EAX);
  /* 1001da2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001da2f call 0x1001952f */
  push32(0x1001da34u); f_1001952f();
  /* 1001da34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001da37 pop ecx */
  ECX = (pop32());
  /* 1001da38 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001da3a jne 0x1001da45 */
  if (!C.zf) goto L_1001da45;
  /* 1001da3c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1001da3d jne 0x1001da14 */
  if (!C.zf) goto L_1001da14;
L_1001da3f:;
  /* 1001da3f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1001da41 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1001da43 je 0x1001da4e */
  if (C.zf) goto L_1001da4e;
L_1001da45:;
  /* 1001da45 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1001da4a jb 0x1001da4e */
  if (C.cf) goto L_1001da4e;
  /* 1001da4c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1001da4e:;
  /* 1001da4e pop eax */
  EAX = (pop32());
  /* 1001da4f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1001da51 jne 0x1001da5c */
  if (!C.zf) goto L_1001da5c;
  /* 1001da53 lock dec dword ptr [0x100269d4] */
  x86_unimpl("lock dec @ 0x1001da53");
  /* 1001da5a jmp 0x1001da6a */
  goto L_1001da6a;
L_1001da5c:;
  /* 1001da5c mov ebx, ecx */
  EBX = (ECX);
  /* 1001da5e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1001da60 call 0x1001a0f4 */
  push32(0x1001da65u); f_1001a0f4();
  /* 1001da65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1001da68 mov ecx, ebx */
  ECX = (EBX);
L_1001da6a:;
  /* 1001da6a mov eax, ecx */
  EAX = (ECX);
  /* 1001da6c pop ebx */
  EBX = (pop32());
  /* 1001da6d pop esi */
  ESI = (pop32());
  /* 1001da6e pop edi */
  EDI = (pop32());
  /* 1001da6f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1001da70 ret  */
  ESPCHK(0x1001d970u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x1001dab4 (6 bytes, 1 insns) */
void f_1001dab4(void) {
  FTRACE(0x1001dab4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1001dab4 jmp dword ptr [0x1001e0cc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1001e0cc)))); return;
}

