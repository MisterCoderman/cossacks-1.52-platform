#include "recomp.h"

/* FUN_10009265 @ 0x10009265 (53 bytes, 25 insns) */
void f_10009265(void) {
  FTRACE(0x10009265u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10009265 push ebp */
  push32((uint32_t)(EBP));
  /* 10009266 mov ebp, esp */
  EBP = (ESP);
  /* 10009268 push ecx */
  push32((uint32_t)(ECX));
  /* 10009269 push esi */
  push32((uint32_t)(ESI));
  /* 1000926a wait  */
  /* wait (no observable integer/reg state) */
  /* 1000926b fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 1000926e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 10009271 call 0x100092b0 */
  push32(0x10009276u); f_100092b0();
  /* 10009276 mov esi, eax */
  ESI = (EAX);
  /* 10009278 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1000927b not eax */
  EAX = (~(EAX));
  /* 1000927d and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 1000927f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10009282 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10009285 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 10009287 push esi */
  push32((uint32_t)(ESI));
  /* 10009288 call 0x10009342 */
  push32(0x1000928du); f_10009342();
  /* 1000928d pop ecx */
  ECX = (pop32());
  /* 1000928e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10009291 pop ecx */
  ECX = (pop32());
  /* 10009292 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 10009295 mov eax, esi */
  EAX = (ESI);
  /* 10009297 pop esi */
  ESI = (pop32());
  /* 10009298 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10009299 ret  */
  ESPCHK(0x10009265u, _esp0);
  ESP += 4; return;
}

/* FUN_1000929a @ 0x1000929a (22 bytes, 8 insns) */
void f_1000929a(void) {
  FTRACE(0x1000929au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000929a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1000929e and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100092a3 push eax */
  push32((uint32_t)(EAX));
  /* 100092a4 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 100092a8 call 0x10009265 */
  push32(0x100092adu); f_10009265();
  /* 100092ad pop ecx */
  ECX = (pop32());
  /* 100092ae pop ecx */
  ECX = (pop32());
  /* 100092af ret  */
  ESPCHK(0x1000929au, _esp0);
  ESP += 4; return;
}

/* FUN_100092b0 @ 0x100092b0 (146 bytes, 58 insns) */
void f_100092b0(void) {
  FTRACE(0x100092b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100092b0 push ebx */
  push32((uint32_t)(EBX));
  /* 100092b1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 100092b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100092b7 push ebp */
  push32((uint32_t)(EBP));
  /* 100092b8 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 100092bb push edi */
  push32((uint32_t)(EDI));
  /* 100092bc je 0x100092c1 */
  if (C.zf) goto L_100092c1;
  /* 100092be push 0x10 */
  push32((uint32_t)(0x10u));
  /* 100092c0 pop eax */
  EAX = (pop32());
L_100092c1:;
  /* 100092c1 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 100092c4 je 0x100092c8 */
  if (C.zf) goto L_100092c8;
  /* 100092c6 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_100092c8:;
  /* 100092c8 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 100092cb je 0x100092cf */
  if (C.zf) goto L_100092cf;
  /* 100092cd or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_100092cf:;
  /* 100092cf test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 100092d2 je 0x100092d6 */
  if (C.zf) goto L_100092d6;
  /* 100092d4 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_100092d6:;
  /* 100092d6 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 100092d9 je 0x100092dd */
  if (C.zf) goto L_100092dd;
  /* 100092db or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_100092dd:;
  /* 100092dd test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 100092e0 je 0x100092e7 */
  if (C.zf) goto L_100092e7;
  /* 100092e2 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_100092e7:;
  /* 100092e7 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 100092ea push esi */
  push32((uint32_t)(ESI));
  /* 100092eb mov edx, ecx */
  EDX = (ECX);
  /* 100092ed mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 100092f2 mov edi, 0x300 */
  EDI = (0x300u);
  /* 100092f7 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 100092f9 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 100092fe je 0x1000931f */
  if (C.zf) goto L_1000931f;
  /* 10009300 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009306 je 0x1000931c */
  if (C.zf) goto L_1000931c;
  /* 10009308 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000930e je 0x10009318 */
  if (C.zf) goto L_10009318;
  /* 10009310 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009312 jne 0x1000931f */
  if (!C.zf) goto L_1000931f;
  /* 10009314 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 10009316 jmp 0x1000931f */
  goto L_1000931f;
L_10009318:;
  /* 10009318 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 1000931a jmp 0x1000931f */
  goto L_1000931f;
L_1000931c:;
  /* 1000931c or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_1000931f:;
  /* 1000931f and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10009321 pop esi */
  ESI = (pop32());
  /* 10009322 je 0x1000932f */
  if (C.zf) goto L_1000932f;
  /* 10009324 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009326 jne 0x10009334 */
  if (!C.zf) goto L_10009334;
  /* 10009328 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 1000932d jmp 0x10009334 */
  goto L_10009334;
L_1000932f:;
  /* 1000932f or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_10009334:;
  /* 10009334 pop edi */
  EDI = (pop32());
  /* 10009335 pop ebp */
  EBP = (pop32());
  /* 10009336 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 10009339 pop ebx */
  EBX = (pop32());
  /* 1000933a je 0x10009341 */
  if (C.zf) goto L_10009341;
  /* 1000933c or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_10009341:;
  /* 10009341 ret  */
  ESPCHK(0x100092b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009342 @ 0x10009342 (137 bytes, 53 insns) */
void f_10009342(void) {
  FTRACE(0x10009342u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10009342 push ebx */
  push32((uint32_t)(EBX));
  /* 10009343 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 10009347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10009349 push esi */
  push32((uint32_t)(ESI));
  /* 1000934a test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 1000934d je 0x10009352 */
  if (C.zf) goto L_10009352;
  /* 1000934f push 1 */
  push32((uint32_t)(0x1u));
  /* 10009351 pop eax */
  EAX = (pop32());
L_10009352:;
  /* 10009352 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 10009355 je 0x10009359 */
  if (C.zf) goto L_10009359;
  /* 10009357 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_10009359:;
  /* 10009359 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 1000935c je 0x10009360 */
  if (C.zf) goto L_10009360;
  /* 1000935e or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_10009360:;
  /* 10009360 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10009363 je 0x10009367 */
  if (C.zf) goto L_10009367;
  /* 10009365 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_10009367:;
  /* 10009367 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 1000936a je 0x1000936e */
  if (C.zf) goto L_1000936e;
  /* 1000936c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_1000936e:;
  /* 1000936e test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 10009374 je 0x10009378 */
  if (C.zf) goto L_10009378;
  /* 10009376 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_10009378:;
  /* 10009378 mov ecx, ebx */
  ECX = (EBX);
  /* 1000937a mov edx, 0x300 */
  EDX = (0x300u);
  /* 1000937f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10009381 mov esi, 0x200 */
  ESI = (0x200u);
  /* 10009386 je 0x100093a5 */
  if (C.zf) goto L_100093a5;
  /* 10009388 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000938e je 0x100093a2 */
  if (C.zf) goto L_100093a2;
  /* 10009390 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009392 je 0x1000939d */
  if (C.zf) goto L_1000939d;
  /* 10009394 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009396 jne 0x100093a5 */
  if (!C.zf) goto L_100093a5;
  /* 10009398 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 1000939b jmp 0x100093a5 */
  goto L_100093a5;
L_1000939d:;
  /* 1000939d or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 100093a0 jmp 0x100093a5 */
  goto L_100093a5;
L_100093a2:;
  /* 100093a2 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_100093a5:;
  /* 100093a5 mov ecx, ebx */
  ECX = (EBX);
  /* 100093a7 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 100093ad je 0x100093bb */
  if (C.zf) goto L_100093bb;
  /* 100093af cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100093b5 jne 0x100093bd */
  if (!C.zf) goto L_100093bd;
  /* 100093b7 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 100093b9 jmp 0x100093bd */
  goto L_100093bd;
L_100093bb:;
  /* 100093bb or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_100093bd:;
  /* 100093bd pop esi */
  ESI = (pop32());
  /* 100093be test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 100093c4 pop ebx */
  EBX = (pop32());
  /* 100093c5 je 0x100093ca */
  if (C.zf) goto L_100093ca;
  /* 100093c7 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_100093ca:;
  /* 100093ca ret  */
  ESPCHK(0x10009342u, _esp0);
  ESP += 4; return;
}

/* FUN_100093cb @ 0x100093cb (117 bytes, 46 insns) */
void f_100093cb(void) {
  FTRACE(0x100093cbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100093cb push ebp */
  push32((uint32_t)(EBP));
  /* 100093cc mov ebp, esp */
  EBP = (ESP);
  /* 100093ce push ecx */
  push32((uint32_t)(ECX));
  /* 100093cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100093d2 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 100093d5 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100093db ja 0x100093e9 */
  if ((!C.cf&&!C.zf)) goto L_100093e9;
  /* 100093dd mov ecx, dword ptr [0x100109e0] */
  ECX = (r32((uint32_t)(0x100109e0)));
  /* 100093e3 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 100093e7 jmp 0x1000943b */
  goto L_1000943b;
L_100093e9:;
  /* 100093e9 mov ecx, eax */
  ECX = (EAX);
  /* 100093eb push esi */
  push32((uint32_t)(ESI));
  /* 100093ec mov esi, dword ptr [0x100109e0] */
  ESI = (r32((uint32_t)(0x100109e0)));
  /* 100093f2 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 100093f5 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 100093f8 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 100093fd pop esi */
  ESI = (pop32());
  /* 100093fe je 0x1000940e */
  if (C.zf) goto L_1000940e;
  /* 10009400 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 10009404 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10009407 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 1000940a push 2 */
  push32((uint32_t)(0x2u));
  /* 1000940c jmp 0x10009417 */
  goto L_10009417;
L_1000940e:;
  /* 1000940e and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10009412 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10009415 push 1 */
  push32((uint32_t)(0x1u));
L_10009417:;
  /* 10009417 pop eax */
  EAX = (pop32());
  /* 10009418 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 1000941b push 1 */
  push32((uint32_t)(0x1u));
  /* 1000941d push 0 */
  push32((uint32_t)(0x0u));
  /* 1000941f push 0 */
  push32((uint32_t)(0x0u));
  /* 10009421 push ecx */
  push32((uint32_t)(ECX));
  /* 10009422 push eax */
  push32((uint32_t)(EAX));
  /* 10009423 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10009426 push eax */
  push32((uint32_t)(EAX));
  /* 10009427 push 1 */
  push32((uint32_t)(0x1u));
  /* 10009429 call 0x1000c27d */
  push32(0x1000942eu); f_1000c27d();
  /* 1000942e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10009431 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10009433 jne 0x10009437 */
  if (!C.zf) goto L_10009437;
  /* 10009435 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10009436 ret  */
  ESPCHK(0x100093cbu, _esp0);
  ESP += 4; return;
L_10009437:;
  /* 10009437 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_1000943b:;
  /* 1000943b and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1000943e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000943f ret  */
  ESPCHK(0x100093cbu, _esp0);
  ESP += 4; return;
}

/* FUN_10009440 @ 0x10009440 (111 bytes, 44 insns) */
void f_10009440(void) {
  FTRACE(0x10009440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10009440 push ebx */
  push32((uint32_t)(EBX));
  /* 10009441 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10009443 cmp dword ptr [0x10016848], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10016848))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009449 jne 0x1000945e */
  if (!C.zf) goto L_1000945e;
  /* 1000944b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1000944f cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009452 jl 0x100094ad */
  if ((C.sf!=C.of)) goto L_100094ad;
  /* 10009454 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009457 jg 0x100094ad */
  if ((!C.zf&&C.sf==C.of)) goto L_100094ad;
  /* 10009459 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000945c pop ebx */
  EBX = (pop32());
  /* 1000945d ret  */
  ESPCHK(0x10009440u, _esp0);
  ESP += 4; return;
L_1000945e:;
  /* 1000945e push esi */
  push32((uint32_t)(ESI));
  /* 1000945f mov esi, 0x100169c4 */
  ESI = (0x100169c4u);
  /* 10009464 push edi */
  push32((uint32_t)(EDI));
  /* 10009465 push esi */
  push32((uint32_t)(ESI));
  /* 10009466 call dword ptr [0x1000e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e090))), 0x1000946cu);
  /* 1000946c cmp dword ptr [0x100169c0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100169c0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009472 mov edi, dword ptr [0x1000e08c] */
  EDI = (r32((uint32_t)(0x1000e08c)));
  /* 10009478 je 0x10009488 */
  if (C.zf) goto L_10009488;
  /* 1000947a push esi */
  push32((uint32_t)(ESI));
  /* 1000947b call edi */
  call_ind((uint32_t)(EDI), 0x1000947du);
  /* 1000947d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1000947f call 0x1000a013 */
  push32(0x10009484u); f_1000a013();
  /* 10009484 pop ecx */
  ECX = (pop32());
  /* 10009485 push 1 */
  push32((uint32_t)(0x1u));
  /* 10009487 pop ebx */
  EBX = (pop32());
L_10009488:;
  /* 10009488 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1000948c call 0x100094af */
  push32(0x10009491u); f_100094af();
  /* 10009491 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10009493 pop ecx */
  ECX = (pop32());
  /* 10009494 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10009498 je 0x100094a4 */
  if (C.zf) goto L_100094a4;
  /* 1000949a push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1000949c call 0x1000a074 */
  push32(0x100094a1u); f_1000a074();
  /* 100094a1 pop ecx */
  ECX = (pop32());
  /* 100094a2 jmp 0x100094a7 */
  goto L_100094a7;
L_100094a4:;
  /* 100094a4 push esi */
  push32((uint32_t)(ESI));
  /* 100094a5 call edi */
  call_ind((uint32_t)(EDI), 0x100094a7u);
L_100094a7:;
  /* 100094a7 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100094ab pop edi */
  EDI = (pop32());
  /* 100094ac pop esi */
  ESI = (pop32());
L_100094ad:;
  /* 100094ad pop ebx */
  EBX = (pop32());
  /* 100094ae ret  */
  ESPCHK(0x10009440u, _esp0);
  ESP += 4; return;
}

/* FUN_100094af @ 0x100094af (203 bytes, 78 insns) */
void f_100094af(void) {
  FTRACE(0x100094afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100094af push ebp */
  push32((uint32_t)(EBP));
  /* 100094b0 mov ebp, esp */
  EBP = (ESP);
  /* 100094b2 push ecx */
  push32((uint32_t)(ECX));
  /* 100094b3 cmp dword ptr [0x10016848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10016848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100094ba push ebx */
  push32((uint32_t)(EBX));
  /* 100094bb push esi */
  push32((uint32_t)(ESI));
  /* 100094bc push edi */
  push32((uint32_t)(EDI));
  /* 100094bd jne 0x100094dc */
  if (!C.zf) goto L_100094dc;
  /* 100094bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100094c2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100094c5 jl 0x10009575 */
  if ((C.sf!=C.of)) goto L_10009575;
  /* 100094cb cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100094ce jg 0x10009575 */
  if ((!C.zf&&C.sf==C.of)) goto L_10009575;
  /* 100094d4 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100094d7 jmp 0x10009575 */
  goto L_10009575;
L_100094dc:;
  /* 100094dc mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 100094df mov edi, 0x100 */
  EDI = (0x100u);
  /* 100094e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100094e6 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100094e8 pop esi */
  ESI = (pop32());
  /* 100094e9 jge 0x10009510 */
  if ((C.sf==C.of)) goto L_10009510;
  /* 100094eb cmp dword ptr [0x10010bf0], esi */
  { uint32_t _a=(r32((uint32_t)(0x10010bf0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100094f1 jle 0x100094fe */
  if ((C.zf||C.sf!=C.of)) goto L_100094fe;
  /* 100094f3 push esi */
  push32((uint32_t)(ESI));
  /* 100094f4 push ebx */
  push32((uint32_t)(EBX));
  /* 100094f5 call 0x100093cb */
  push32(0x100094fau); f_100093cb();
  /* 100094fa pop ecx */
  ECX = (pop32());
  /* 100094fb pop ecx */
  ECX = (pop32());
  /* 100094fc jmp 0x10009508 */
  goto L_10009508;
L_100094fe:;
  /* 100094fe mov eax, dword ptr [0x100109e0] */
  EAX = (r32((uint32_t)(0x100109e0)));
  /* 10009503 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 10009506 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_10009508:;
  /* 10009508 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000950a jne 0x10009510 */
  if (!C.zf) goto L_10009510;
L_1000950c:;
  /* 1000950c mov eax, ebx */
  EAX = (EBX);
  /* 1000950e jmp 0x10009575 */
  goto L_10009575;
L_10009510:;
  /* 10009510 mov edx, dword ptr [0x100109e0] */
  EDX = (r32((uint32_t)(0x100109e0)));
  /* 10009516 mov eax, ebx */
  EAX = (EBX);
  /* 10009518 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1000951b movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 1000951e test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 10009523 je 0x10009534 */
  if (C.zf) goto L_10009534;
  /* 10009525 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 10009529 push 2 */
  push32((uint32_t)(0x2u));
  /* 1000952b mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 1000952e mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 10009531 pop eax */
  EAX = (pop32());
  /* 10009532 jmp 0x1000953d */
  goto L_1000953d;
L_10009534:;
  /* 10009534 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 10009538 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 1000953b mov eax, esi */
  EAX = (ESI);
L_1000953d:;
  /* 1000953d push esi */
  push32((uint32_t)(ESI));
  /* 1000953e push 0 */
  push32((uint32_t)(0x0u));
  /* 10009540 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10009543 push 3 */
  push32((uint32_t)(0x3u));
  /* 10009545 push ecx */
  push32((uint32_t)(ECX));
  /* 10009546 push eax */
  push32((uint32_t)(EAX));
  /* 10009547 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1000954a push eax */
  push32((uint32_t)(EAX));
  /* 1000954b push edi */
  push32((uint32_t)(EDI));
  /* 1000954c push dword ptr [0x10016848] */
  push32((uint32_t)(r32((uint32_t)(0x10016848))));
  /* 10009552 call 0x1000c3c6 */
  push32(0x10009557u); f_1000c3c6();
  /* 10009557 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000955a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000955c je 0x1000950c */
  if (C.zf) goto L_1000950c;
  /* 1000955e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009560 jne 0x10009568 */
  if (!C.zf) goto L_10009568;
  /* 10009562 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10009566 jmp 0x10009575 */
  goto L_10009575;
L_10009568:;
  /* 10009568 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 1000956c movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10009570 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10009573 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10009575:;
  /* 10009575 pop edi */
  EDI = (pop32());
  /* 10009576 pop esi */
  ESI = (pop32());
  /* 10009577 pop ebx */
  EBX = (pop32());
  /* 10009578 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10009579 ret  */
  ESPCHK(0x100094afu, _esp0);
  ESP += 4; return;
}

/* FUN_1000957a @ 0x1000957a (73 bytes, 36 insns) */
void f_1000957a(void) {
  FTRACE(0x1000957au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000957a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1000957e push esi */
  push32((uint32_t)(ESI));
  /* 1000957f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10009581 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10009582 pop ecx */
  ECX = (pop32());
  /* 10009583 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10009585 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10009587 mov esi, eax */
  ESI = (EAX);
  /* 10009589 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1000958d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1000958e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10009590 pop ecx */
  ECX = (pop32());
  /* 10009591 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10009595 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10009597 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1000959a shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1000959c not edx */
  EDX = (~(EDX));
  /* 1000959e test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 100095a1 jne 0x100095bf */
  if (!C.zf) goto L_100095bf;
  /* 100095a3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100095a4 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100095a7 jge 0x100095ba */
  if ((C.sf==C.of)) goto L_100095ba;
  /* 100095a9 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_100095ac:;
  /* 100095ac cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100095af jne 0x100095bf */
  if (!C.zf) goto L_100095bf;
  /* 100095b1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100095b2 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100095b5 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100095b8 jl 0x100095ac */
  if ((C.sf!=C.of)) goto L_100095ac;
L_100095ba:;
  /* 100095ba push 1 */
  push32((uint32_t)(0x1u));
  /* 100095bc pop eax */
  EAX = (pop32());
  /* 100095bd pop esi */
  ESI = (pop32());
  /* 100095be ret  */
  ESPCHK(0x1000957au, _esp0);
  ESP += 4; return;
L_100095bf:;
  /* 100095bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100095c1 pop esi */
  ESI = (pop32());
  /* 100095c2 ret  */
  ESPCHK(0x1000957au, _esp0);
  ESP += 4; return;
}

/* FUN_100095c3 @ 0x100095c3 (86 bytes, 43 insns) */
void f_100095c3(void) {
  FTRACE(0x100095c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100095c3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100095c7 push ebx */
  push32((uint32_t)(EBX));
  /* 100095c8 push esi */
  push32((uint32_t)(ESI));
  /* 100095c9 push edi */
  push32((uint32_t)(EDI));
  /* 100095ca push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100095cc mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 100095d0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100095d1 pop ecx */
  ECX = (pop32());
  /* 100095d2 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100095d4 mov esi, eax */
  ESI = (EAX);
  /* 100095d6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 100095da cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100095db idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100095dd lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 100095e0 push edi */
  push32((uint32_t)(EDI));
  /* 100095e1 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100095e3 pop ecx */
  ECX = (pop32());
  /* 100095e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100095e6 pop eax */
  EAX = (pop32());
  /* 100095e7 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100095e9 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 100095eb push eax */
  push32((uint32_t)(EAX));
  /* 100095ec push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 100095ee call 0x1000c615 */
  push32(0x100095f3u); f_1000c615();
  /* 100095f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100095f6 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100095f7 js 0x10009615 */
  if (C.sf) goto L_10009615;
  /* 100095f9 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_100095fc:;
  /* 100095fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100095fe je 0x10009615 */
  if (C.zf) goto L_10009615;
  /* 10009600 push edi */
  push32((uint32_t)(EDI));
  /* 10009601 push 1 */
  push32((uint32_t)(0x1u));
  /* 10009603 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 10009605 call 0x1000c615 */
  push32(0x1000960au); f_1000c615();
  /* 1000960a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000960d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1000960e sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10009611 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10009613 jge 0x100095fc */
  if ((C.sf==C.of)) goto L_100095fc;
L_10009615:;
  /* 10009615 pop edi */
  EDI = (pop32());
  /* 10009616 pop esi */
  ESI = (pop32());
  /* 10009617 pop ebx */
  EBX = (pop32());
  /* 10009618 ret  */
  ESPCHK(0x100095c3u, _esp0);
  ESP += 4; return;
}

/* FUN_10009619 @ 0x10009619 (140 bytes, 71 insns) */
void f_10009619(void) {
  FTRACE(0x10009619u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10009619 push ebp */
  push32((uint32_t)(EBP));
  /* 1000961a mov ebp, esp */
  EBP = (ESP);
  /* 1000961c push ecx */
  push32((uint32_t)(ECX));
  /* 1000961d push ecx */
  push32((uint32_t)(ECX));
  /* 1000961e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10009621 push ebx */
  push32((uint32_t)(EBX));
  /* 10009622 push esi */
  push32((uint32_t)(ESI));
  /* 10009623 push edi */
  push32((uint32_t)(EDI));
  /* 10009624 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 10009627 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10009629 pop ecx */
  ECX = (pop32());
  /* 1000962a and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1000962e lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 10009631 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10009633 mov eax, ebx */
  EAX = (EBX);
  /* 10009635 pop esi */
  ESI = (pop32());
  /* 10009636 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10009637 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10009639 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1000963b mov ecx, eax */
  ECX = (EAX);
  /* 1000963d mov eax, ebx */
  EAX = (EBX);
  /* 1000963f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10009640 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10009642 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10009645 pop esi */
  ESI = (pop32());
  /* 10009646 push 1 */
  push32((uint32_t)(0x1u));
  /* 10009648 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1000964b lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 1000964e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10009651 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10009653 pop edx */
  EDX = (pop32());
  /* 10009654 mov ecx, esi */
  ECX = (ESI);
  /* 10009656 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10009658 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 1000965a je 0x1000967d */
  if (C.zf) goto L_1000967d;
  /* 1000965c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1000965d push ebx */
  push32((uint32_t)(EBX));
  /* 1000965e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10009661 call 0x1000957a */
  push32(0x10009666u); f_1000957a();
  /* 10009666 pop ecx */
  ECX = (pop32());
  /* 10009667 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10009669 pop ecx */
  ECX = (pop32());
  /* 1000966a jne 0x1000967a */
  if (!C.zf) goto L_1000967a;
  /* 1000966c push edi */
  push32((uint32_t)(EDI));
  /* 1000966d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10009670 call 0x100095c3 */
  push32(0x10009675u); f_100095c3();
  /* 10009675 pop ecx */
  ECX = (pop32());
  /* 10009676 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10009679 pop ecx */
  ECX = (pop32());
L_1000967a:;
  /* 1000967a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1000967d:;
  /* 1000967d or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10009680 mov ecx, esi */
  ECX = (ESI);
  /* 10009682 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10009684 push 3 */
  push32((uint32_t)(0x3u));
  /* 10009686 pop ecx */
  ECX = (pop32());
  /* 10009687 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10009689 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1000968c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1000968d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000968f jge 0x1000969d */
  if ((C.sf==C.of)) goto L_1000969d;
  /* 10009691 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10009694 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10009696 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10009699 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000969b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_1000969d:;
  /* 1000969d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100096a0 pop edi */
  EDI = (pop32());
  /* 100096a1 pop esi */
  ESI = (pop32());
  /* 100096a2 pop ebx */
  EBX = (pop32());
  /* 100096a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100096a4 ret  */
  ESPCHK(0x10009619u, _esp0);
  ESP += 4; return;
}

/* FUN_100096a5 @ 0x100096a5 (27 bytes, 13 insns) */
void f_100096a5(void) {
  FTRACE(0x100096a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100096a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100096a9 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100096ad push esi */
  push32((uint32_t)(ESI));
  /* 100096ae push 3 */
  push32((uint32_t)(0x3u));
  /* 100096b0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100096b2 pop edx */
  EDX = (pop32());
L_100096b3:;
  /* 100096b3 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 100096b5 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 100096b8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100096bb dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100096bc jne 0x100096b3 */
  if (!C.zf) goto L_100096b3;
  /* 100096be pop esi */
  ESI = (pop32());
  /* 100096bf ret  */
  ESPCHK(0x100096a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100096c0 @ 0x100096c0 (12 bytes, 8 insns) */
void f_100096c0(void) {
  FTRACE(0x100096c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100096c0 push edi */
  push32((uint32_t)(EDI));
  /* 100096c1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 100096c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100096c7 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100096c8 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100096c9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100096ca pop edi */
  EDI = (pop32());
  /* 100096cb ret  */
  ESPCHK(0x100096c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096cc @ 0x100096cc (27 bytes, 13 insns) */
void f_100096cc(void) {
  FTRACE(0x100096ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100096cc mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100096d0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_100096d2:;
  /* 100096d2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100096d5 jne 0x100096e4 */
  if (!C.zf) goto L_100096e4;
  /* 100096d7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100096d8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100096db cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100096de jl 0x100096d2 */
  if ((C.sf!=C.of)) goto L_100096d2;
  /* 100096e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 100096e2 pop eax */
  EAX = (pop32());
  /* 100096e3 ret  */
  ESPCHK(0x100096ccu, _esp0);
  ESP += 4; return;
L_100096e4:;
  /* 100096e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100096e6 ret  */
  ESPCHK(0x100096ccu, _esp0);
  ESP += 4; return;
}

/* FUN_100096e7 @ 0x100096e7 (141 bytes, 64 insns) */
void f_100096e7(void) {
  FTRACE(0x100096e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100096e7 push ebp */
  push32((uint32_t)(EBP));
  /* 100096e8 mov ebp, esp */
  EBP = (ESP);
  /* 100096ea sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100096ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100096f0 push ebx */
  push32((uint32_t)(EBX));
  /* 100096f1 push esi */
  push32((uint32_t)(ESI));
  /* 100096f2 push edi */
  push32((uint32_t)(EDI));
  /* 100096f3 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100096f5 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 100096f8 pop ebx */
  EBX = (pop32());
  /* 100096f9 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 100096fc cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100096fd mov ecx, ebx */
  ECX = (EBX);
  /* 100096ff mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 10009706 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10009708 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1000970b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1000970e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1000970f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10009711 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 10009715 mov ecx, edx */
  ECX = (EDX);
  /* 10009717 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10009719 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000971b not esi */
  ESI = (~(ESI));
L_1000971d:;
  /* 1000971d mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1000971f mov ecx, eax */
  ECX = (EAX);
  /* 10009721 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10009723 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10009726 mov ecx, edx */
  ECX = (EDX);
  /* 10009728 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1000972a or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1000972d mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1000972f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10009732 mov ecx, ebx */
  ECX = (EBX);
  /* 10009734 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10009737 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10009739 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1000973c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1000973f jne 0x1000971d */
  if (!C.zf) goto L_1000971d;
  /* 10009741 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 10009744 push 2 */
  push32((uint32_t)(0x2u));
  /* 10009746 pop ebx */
  EBX = (pop32());
  /* 10009747 mov esi, edi */
  ESI = (EDI);
  /* 10009749 push 8 */
  push32((uint32_t)(0x8u));
  /* 1000974b pop ecx */
  ECX = (pop32());
  /* 1000974c shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_1000974f:;
  /* 1000974f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009751 jl 0x10009762 */
  if ((C.sf!=C.of)) goto L_10009762;
  /* 10009753 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10009756 mov eax, ecx */
  EAX = (ECX);
  /* 10009758 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000975a mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1000975d mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 10009760 jmp 0x10009769 */
  goto L_10009769;
L_10009762:;
  /* 10009762 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10009765 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_10009769:;
  /* 10009769 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1000976a sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000976d jns 0x1000974f */
  if (!C.sf) goto L_1000974f;
  /* 1000976f pop edi */
  EDI = (pop32());
  /* 10009770 pop esi */
  ESI = (pop32());
  /* 10009771 pop ebx */
  EBX = (pop32());
  /* 10009772 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10009773 ret  */
  ESPCHK(0x100096e7u, _esp0);
  ESP += 4; return;
}

/* FUN_10009774 @ 0x10009774 (364 bytes, 138 insns) */
void f_10009774(void) {
  FTRACE(0x10009774u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10009774 push ebp */
  push32((uint32_t)(EBP));
  /* 10009775 mov ebp, esp */
  EBP = (ESP);
  /* 10009777 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000977a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000977d push ebx */
  push32((uint32_t)(EBX));
  /* 1000977e push esi */
  push32((uint32_t)(ESI));
  /* 1000977f push edi */
  push32((uint32_t)(EDI));
  /* 10009780 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 10009784 mov ebx, ecx */
  EBX = (ECX);
  /* 10009786 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1000978c mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1000978f mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 10009792 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10009795 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 10009798 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 1000979b mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1000979e and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 100097a4 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100097aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100097ad shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 100097b0 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100097b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100097b9 jne 0x100097e1 */
  if (!C.zf) goto L_100097e1;
  /* 100097bb lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100097be xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100097c0 push eax */
  push32((uint32_t)(EAX));
  /* 100097c1 call 0x100096cc */
  push32(0x100097c6u); f_100096cc();
  /* 100097c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100097c8 pop ecx */
  ECX = (pop32());
  /* 100097c9 jne 0x100098a0 */
  if (!C.zf) goto L_100098a0;
  /* 100097cf lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100097d2 push eax */
  push32((uint32_t)(EAX));
  /* 100097d3 call 0x100096c0 */
  push32(0x100097d8u); f_100096c0();
  /* 100097d8 pop ecx */
  ECX = (pop32());
L_100097d9:;
  /* 100097d9 push 2 */
  push32((uint32_t)(0x2u));
L_100097db:;
  /* 100097db pop eax */
  EAX = (pop32());
  /* 100097dc jmp 0x100098a2 */
  goto L_100098a2;
L_100097e1:;
  /* 100097e1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100097e4 push eax */
  push32((uint32_t)(EAX));
  /* 100097e5 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 100097e8 push eax */
  push32((uint32_t)(EAX));
  /* 100097e9 call 0x100096a5 */
  push32(0x100097eeu); f_100096a5();
  /* 100097ee push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 100097f1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100097f4 push eax */
  push32((uint32_t)(EAX));
  /* 100097f5 call 0x10009619 */
  push32(0x100097fau); f_10009619();
  /* 100097fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100097fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100097ff je 0x10009802 */
  if (C.zf) goto L_10009802;
  /* 10009801 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10009802:;
  /* 10009802 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 10009805 mov ecx, eax */
  ECX = (EAX);
  /* 10009807 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000980a cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000980c jge 0x1000981a */
  if ((C.sf==C.of)) goto L_1000981a;
  /* 1000980e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10009811 push eax */
  push32((uint32_t)(EAX));
  /* 10009812 call 0x100096c0 */
  push32(0x10009817u); f_100096c0();
  /* 10009817 pop ecx */
  ECX = (pop32());
  /* 10009818 jmp 0x10009856 */
  goto L_10009856;
L_1000981a:;
  /* 1000981a cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000981c jg 0x1000985d */
  if ((!C.zf&&C.sf==C.of)) goto L_1000985d;
  /* 1000981e sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10009820 mov esi, eax */
  ESI = (EAX);
  /* 10009822 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10009825 push eax */
  push32((uint32_t)(EAX));
  /* 10009826 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10009829 push eax */
  push32((uint32_t)(EAX));
  /* 1000982a call 0x100096a5 */
  push32(0x1000982fu); f_100096a5();
  /* 1000982f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10009832 push esi */
  push32((uint32_t)(ESI));
  /* 10009833 push eax */
  push32((uint32_t)(EAX));
  /* 10009834 call 0x100096e7 */
  push32(0x10009839u); f_100096e7();
  /* 10009839 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 1000983c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1000983f push eax */
  push32((uint32_t)(EAX));
  /* 10009840 call 0x10009619 */
  push32(0x10009845u); f_10009619();
  /* 10009845 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 10009848 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10009849 push eax */
  push32((uint32_t)(EAX));
  /* 1000984a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1000984d push eax */
  push32((uint32_t)(EAX));
  /* 1000984e call 0x100096e7 */
  push32(0x10009853u); f_100096e7();
  /* 10009853 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10009856:;
  /* 10009856 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10009858 jmp 0x100097d9 */
  goto L_100097d9;
L_1000985d:;
  /* 1000985d cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000985f jl 0x10009889 */
  if ((C.sf!=C.of)) goto L_10009889;
  /* 10009861 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10009864 push eax */
  push32((uint32_t)(EAX));
  /* 10009865 call 0x100096c0 */
  push32(0x1000986au); f_100096c0();
  /* 1000986a push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 1000986d or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 10009871 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10009874 push eax */
  push32((uint32_t)(EAX));
  /* 10009875 call 0x100096e7 */
  push32(0x1000987au); f_100096e7();
  /* 1000987a mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 1000987d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10009880 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10009882 push 1 */
  push32((uint32_t)(0x1u));
  /* 10009884 jmp 0x100097db */
  goto L_100097db;
L_10009889:;
  /* 10009889 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 1000988c mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 1000988f and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 10009893 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10009896 push eax */
  push32((uint32_t)(EAX));
  /* 10009897 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10009899 call 0x100096e7 */
  push32(0x1000989eu); f_100096e7();
  /* 1000989e pop ecx */
  ECX = (pop32());
  /* 1000989f pop ecx */
  ECX = (pop32());
L_100098a0:;
  /* 100098a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100098a2:;
  /* 100098a2 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100098a4 pop ecx */
  ECX = (pop32());
  /* 100098a5 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100098a8 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 100098ab shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 100098ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100098b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 100098b2 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100098b4 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 100098ba or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 100098bc or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 100098bf cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100098c2 jne 0x100098d1 */
  if (!C.zf) goto L_100098d1;
  /* 100098c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100098c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 100098ca mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 100098cd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 100098cf jmp 0x100098db */
  goto L_100098db;
L_100098d1:;
  /* 100098d1 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100098d4 jne 0x100098db */
  if (!C.zf) goto L_100098db;
  /* 100098d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100098d9 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_100098db:;
  /* 100098db pop edi */
  EDI = (pop32());
  /* 100098dc pop esi */
  ESI = (pop32());
  /* 100098dd pop ebx */
  EBX = (pop32());
  /* 100098de leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100098df ret  */
  ESPCHK(0x10009774u, _esp0);
  ESP += 4; return;
}

/* FUN_100098e0 @ 0x100098e0 (22 bytes, 6 insns) */
void f_100098e0(void) {
  FTRACE(0x100098e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100098e0 push 0x10010c00 */
  push32((uint32_t)(0x10010c00u));
  /* 100098e5 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100098e9 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100098ed call 0x10009774 */
  push32(0x100098f2u); f_10009774();
  /* 100098f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100098f5 ret  */
  ESPCHK(0x100098e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100098f6 @ 0x100098f6 (22 bytes, 6 insns) */
void f_100098f6(void) {
  FTRACE(0x100098f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100098f6 push 0x10010c18 */
  push32((uint32_t)(0x10010c18u));
  /* 100098fb push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100098ff push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10009903 call 0x10009774 */
  push32(0x10009908u); f_10009774();
  /* 10009908 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000990b ret  */
  ESPCHK(0x100098f6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000990c @ 0x1000990c (45 bytes, 21 insns) */
void f_1000990c(void) {
  FTRACE(0x1000990cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000990c push ebp */
  push32((uint32_t)(EBP));
  /* 1000990d mov ebp, esp */
  EBP = (ESP);
  /* 1000990f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10009912 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10009914 push eax */
  push32((uint32_t)(EAX));
  /* 10009915 push eax */
  push32((uint32_t)(EAX));
  /* 10009916 push eax */
  push32((uint32_t)(EAX));
  /* 10009917 push eax */
  push32((uint32_t)(EAX));
  /* 10009918 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1000991b lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1000991e push eax */
  push32((uint32_t)(EAX));
  /* 1000991f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10009922 push eax */
  push32((uint32_t)(EAX));
  /* 10009923 call 0x1000c7b6 */
  push32(0x10009928u); f_1000c7b6();
  /* 10009928 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1000992b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1000992e push eax */
  push32((uint32_t)(EAX));
  /* 1000992f call 0x100098e0 */
  push32(0x10009934u); f_100098e0();
  /* 10009934 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10009937 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10009938 ret  */
  ESPCHK(0x1000990cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009939 @ 0x10009939 (45 bytes, 21 insns) */
void f_10009939(void) {
  FTRACE(0x10009939u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10009939 push ebp */
  push32((uint32_t)(EBP));
  /* 1000993a mov ebp, esp */
  EBP = (ESP);
  /* 1000993c sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000993f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10009941 push eax */
  push32((uint32_t)(EAX));
  /* 10009942 push eax */
  push32((uint32_t)(EAX));
  /* 10009943 push eax */
  push32((uint32_t)(EAX));
  /* 10009944 push eax */
  push32((uint32_t)(EAX));
  /* 10009945 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10009948 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1000994b push eax */
  push32((uint32_t)(EAX));
  /* 1000994c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1000994f push eax */
  push32((uint32_t)(EAX));
  /* 10009950 call 0x1000c7b6 */
  push32(0x10009955u); f_1000c7b6();
  /* 10009955 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10009958 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1000995b push eax */
  push32((uint32_t)(EAX));
  /* 1000995c call 0x100098f6 */
  push32(0x10009961u); f_100098f6();
  /* 10009961 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10009964 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10009965 ret  */
  ESPCHK(0x10009939u, _esp0);
  ESP += 4; return;
}

/* FUN_10009966 @ 0x10009966 (119 bytes, 57 insns) */
void f_10009966(void) {
  FTRACE(0x10009966u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10009966 push ebp */
  push32((uint32_t)(EBP));
  /* 10009967 mov ebp, esp */
  EBP = (ESP);
  /* 10009969 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1000996c push ebx */
  push32((uint32_t)(EBX));
  /* 1000996d mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 10009970 push esi */
  push32((uint32_t)(ESI));
  /* 10009971 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10009974 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 10009977 push edi */
  push32((uint32_t)(EDI));
  /* 10009978 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 1000997b mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 1000997e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10009980 mov eax, edi */
  EAX = (EDI);
  /* 10009982 jle 0x100099a3 */
  if ((C.zf||C.sf!=C.of)) goto L_100099a3;
  /* 10009984 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10009987 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10009989:;
  /* 10009989 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1000998b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1000998d je 0x10009995 */
  if (C.zf) goto L_10009995;
  /* 1000998f movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 10009992 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10009993 jmp 0x10009998 */
  goto L_10009998;
L_10009995:;
  /* 10009995 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10009997 pop edx */
  EDX = (pop32());
L_10009998:;
  /* 10009998 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1000999a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1000999b dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 1000999e jne 0x10009989 */
  if (!C.zf) goto L_10009989;
  /* 100099a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_100099a3:;
  /* 100099a3 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 100099a6 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100099a8 jl 0x100099bc */
  if ((C.sf!=C.of)) goto L_100099bc;
  /* 100099aa cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100099ad jl 0x100099bc */
  if ((C.sf!=C.of)) goto L_100099bc;
L_100099af:;
  /* 100099af dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100099b0 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100099b3 jne 0x100099ba */
  if (!C.zf) goto L_100099ba;
  /* 100099b5 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 100099b8 jmp 0x100099af */
  goto L_100099af;
L_100099ba:;
  /* 100099ba inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_100099bc:;
  /* 100099bc cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100099bf jne 0x100099c6 */
  if (!C.zf) goto L_100099c6;
  /* 100099c1 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 100099c4 jmp 0x100099d8 */
  goto L_100099d8;
L_100099c6:;
  /* 100099c6 push edi */
  push32((uint32_t)(EDI));
  /* 100099c7 call 0x10009040 */
  push32(0x100099ccu); f_10009040();
  /* 100099cc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100099cd push eax */
  push32((uint32_t)(EAX));
  /* 100099ce push edi */
  push32((uint32_t)(EDI));
  /* 100099cf push esi */
  push32((uint32_t)(ESI));
  /* 100099d0 call 0x10009c40 */
  push32(0x100099d5u); f_10009c40();
  /* 100099d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100099d8:;
  /* 100099d8 pop edi */
  EDI = (pop32());
  /* 100099d9 pop esi */
  ESI = (pop32());
  /* 100099da pop ebx */
  EBX = (pop32());
  /* 100099db pop ebp */
  EBP = (pop32());
  /* 100099dc ret  */
  ESPCHK(0x10009966u, _esp0);
  ESP += 4; return;
}

/* FUN_100099dd @ 0x100099dd (92 bytes, 41 insns) */
void f_100099dd(void) {
  FTRACE(0x100099ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100099dd push ebp */
  push32((uint32_t)(EBP));
  /* 100099de mov ebp, esp */
  EBP = (ESP);
  /* 100099e0 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100099e3 push esi */
  push32((uint32_t)(ESI));
  /* 100099e4 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100099e7 push edi */
  push32((uint32_t)(EDI));
  /* 100099e8 push eax */
  push32((uint32_t)(EAX));
  /* 100099e9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100099ec push eax */
  push32((uint32_t)(EAX));
  /* 100099ed call 0x10009a39 */
  push32(0x100099f2u); f_10009a39();
  /* 100099f2 pop ecx */
  ECX = (pop32());
  /* 100099f3 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 100099f6 pop ecx */
  ECX = (pop32());
  /* 100099f7 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 100099fa push eax */
  push32((uint32_t)(EAX));
  /* 100099fb push 0 */
  push32((uint32_t)(0x0u));
  /* 100099fd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 100099ff sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10009a02 mov edi, esp */
  EDI = (ESP);
  /* 10009a04 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10009a05 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10009a06 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 10009a08 call 0x1000cc87 */
  push32(0x10009a0du); f_1000cc87();
  /* 10009a0d mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10009a10 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 10009a13 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 10009a16 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 10009a1a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10009a1c movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 10009a20 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 10009a23 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 10009a26 push eax */
  push32((uint32_t)(EAX));
  /* 10009a27 push edi */
  push32((uint32_t)(EDI));
  /* 10009a28 call 0x10009af0 */
  push32(0x10009a2du); f_10009af0();
  /* 10009a2d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10009a30 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 10009a33 mov eax, esi */
  EAX = (ESI);
  /* 10009a35 pop edi */
  EDI = (pop32());
  /* 10009a36 pop esi */
  ESI = (pop32());
  /* 10009a37 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10009a38 ret  */
  ESPCHK(0x100099ddu, _esp0);
  ESP += 4; return;
}

/* FUN_10009a39 @ 0x10009a39 (182 bytes, 70 insns) */
void f_10009a39(void) {
  FTRACE(0x10009a39u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10009a39 push ebp */
  push32((uint32_t)(EBP));
  /* 10009a3a mov ebp, esp */
  EBP = (ESP);
  /* 10009a3c push ecx */
  push32((uint32_t)(ECX));
  /* 10009a3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10009a40 push ebx */
  push32((uint32_t)(EBX));
  /* 10009a41 push esi */
  push32((uint32_t)(ESI));
  /* 10009a42 push edi */
  push32((uint32_t)(EDI));
  /* 10009a43 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 10009a47 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 10009a4c mov ecx, eax */
  ECX = (EAX);
  /* 10009a4e and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10009a53 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10009a56 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10009a58 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10009a5b mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10009a5e mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 10009a60 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 10009a63 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10009a68 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10009a6d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10009a6f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 10009a72 je 0x10009a87 */
  if (C.zf) goto L_10009a87;
  /* 10009a74 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009a76 je 0x10009a80 */
  if (C.zf) goto L_10009a80;
  /* 10009a78 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 10009a7e jmp 0x10009aa8 */
  goto L_10009aa8;
L_10009a80:;
  /* 10009a80 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 10009a85 jmp 0x10009aa8 */
  goto L_10009aa8;
L_10009a87:;
  /* 10009a87 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10009a89 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009a8b jne 0x10009a9f */
  if (!C.zf) goto L_10009a9f;
  /* 10009a8d cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009a8f jne 0x10009a9f */
  if (!C.zf) goto L_10009a9f;
  /* 10009a91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10009a94 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 10009a97 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 10009a99 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 10009a9d jmp 0x10009aea */
  goto L_10009aea;
L_10009a9f:;
  /* 10009a9f lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 10009aa5 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_10009aa8:;
  /* 10009aa8 mov ecx, edx */
  ECX = (EDX);
  /* 10009aaa shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 10009aad shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 10009ab0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10009ab2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10009ab5 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 10009ab8 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 10009abb mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10009abe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10009ac0:;
  /* 10009ac0 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 10009ac2 jne 0x10009ae1 */
  if (!C.zf) goto L_10009ae1;
  /* 10009ac4 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10009ac6 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10009ac8 mov ebx, edx */
  EBX = (EDX);
  /* 10009aca shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 10009acd or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 10009acf lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 10009ad2 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10009ad4 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 10009ad7 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10009add mov ecx, ebx */
  ECX = (EBX);
  /* 10009adf jmp 0x10009ac0 */
  goto L_10009ac0;
L_10009ae1:;
  /* 10009ae1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10009ae4 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10009ae6 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_10009aea:;
  /* 10009aea pop edi */
  EDI = (pop32());
  /* 10009aeb pop esi */
  ESI = (pop32());
  /* 10009aec pop ebx */
  EBX = (pop32());
  /* 10009aed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10009aee ret  */
  ESPCHK(0x10009a39u, _esp0);
  ESP += 4; return;
}

/* FUN_10009af0 @ 0x10009af0 (7 bytes, 3 insns) */
void f_10009af0(void) {
  FTRACE(0x10009af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10009af0 push edi */
  push32((uint32_t)(EDI));
  /* 10009af1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10009af5 jmp 0x10009b61 */
  jmp_ind(0x10009b61u); return;
}

/* FUN_10009b00 @ 0x10009b00 (224 bytes, 84 insns) */
void f_10009b00(void) {
  FTRACE(0x10009b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10009b00 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10009b04 push edi */
  push32((uint32_t)(EDI));
  /* 10009b05 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10009b0b je 0x10009b1c */
  if (C.zf) goto L_10009b1c;
L_10009b0d:;
  /* 10009b0d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10009b0f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10009b10 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10009b12 je 0x10009b4f */
  if (C.zf) goto L_10009b4f;
  /* 10009b14 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10009b1a jne 0x10009b0d */
  if (!C.zf) goto L_10009b0d;
L_10009b1c:;
  /* 10009b1c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10009b1e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10009b23 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10009b25 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10009b28 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10009b2a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10009b2d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10009b32 je 0x10009b1c */
  if (C.zf) goto L_10009b1c;
  /* 10009b34 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10009b37 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10009b39 je 0x10009b5e */
  if (C.zf) goto L_10009b5e;
  /* 10009b3b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10009b3d je 0x10009b59 */
  if (C.zf) goto L_10009b59;
  /* 10009b3f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10009b44 je 0x10009b54 */
  if (C.zf) goto L_10009b54;
  /* 10009b46 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10009b4b je 0x10009b4f */
  if (C.zf) goto L_10009b4f;
  /* 10009b4d jmp 0x10009b1c */
  goto L_10009b1c;
L_10009b4f:;
  /* 10009b4f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10009b52 jmp 0x10009b61 */
  goto L_10009b61;
L_10009b54:;
  /* 10009b54 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10009b57 jmp 0x10009b61 */
  goto L_10009b61;
L_10009b59:;
  /* 10009b59 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10009b5c jmp 0x10009b61 */
  goto L_10009b61;
L_10009b5e:;
  /* 10009b5e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10009b61:;
  /* 10009b61 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10009b65 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10009b6b je 0x10009b86 */
  if (C.zf) goto L_10009b86;
L_10009b6d:;
  /* 10009b6d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10009b6f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10009b70 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10009b72 je 0x10009bd8 */
  if (C.zf) goto L_10009bd8;
  /* 10009b74 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10009b76 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10009b77 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10009b7d jne 0x10009b6d */
  if (!C.zf) goto L_10009b6d;
  /* 10009b7f jmp 0x10009b86 */
  goto L_10009b86;
L_10009b81:;
  /* 10009b81 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10009b83 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10009b86:;
  /* 10009b86 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10009b8b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10009b8d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10009b8f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10009b92 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10009b94 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10009b96 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10009b99 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10009b9e je 0x10009b81 */
  if (C.zf) goto L_10009b81;
  /* 10009ba0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10009ba2 je 0x10009bd8 */
  if (C.zf) goto L_10009bd8;
  /* 10009ba4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10009ba6 je 0x10009bcf */
  if (C.zf) goto L_10009bcf;
  /* 10009ba8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10009bae je 0x10009bc2 */
  if (C.zf) goto L_10009bc2;
  /* 10009bb0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10009bb6 je 0x10009bba */
  if (C.zf) goto L_10009bba;
  /* 10009bb8 jmp 0x10009b81 */
  goto L_10009b81;
L_10009bba:;
  /* 10009bba mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10009bbc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10009bc0 pop edi */
  EDI = (pop32());
  /* 10009bc1 ret  */
  ESPCHK(0x10009b00u, _esp0);
  ESP += 4; return;
L_10009bc2:;
  /* 10009bc2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10009bc5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10009bc9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10009bcd pop edi */
  EDI = (pop32());
  /* 10009bce ret  */
  ESPCHK(0x10009b00u, _esp0);
  ESP += 4; return;
L_10009bcf:;
  /* 10009bcf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10009bd2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10009bd6 pop edi */
  EDI = (pop32());
  /* 10009bd7 ret  */
  ESPCHK(0x10009b00u, _esp0);
  ESP += 4; return;
L_10009bd8:;
  /* 10009bd8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10009bda mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10009bde pop edi */
  EDI = (pop32());
  /* 10009bdf ret  */
  ESPCHK(0x10009b00u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10009be0 (88 bytes, 40 insns) */
void f_10009be0(void) {
  FTRACE(0x10009be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10009be0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10009be4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10009be8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10009bea je 0x10009c33 */
  if (C.zf) goto L_10009c33;
  /* 10009bec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10009bee mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10009bf2 push edi */
  push32((uint32_t)(EDI));
  /* 10009bf3 mov edi, ecx */
  EDI = (ECX);
  /* 10009bf5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009bf8 jb 0x10009c27 */
  if (C.cf) goto L_10009c27;
  /* 10009bfa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10009bfc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10009bff je 0x10009c09 */
  if (C.zf) goto L_10009c09;
  /* 10009c01 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10009c03:;
  /* 10009c03 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10009c05 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10009c06 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10009c07 jne 0x10009c03 */
  if (!C.zf) goto L_10009c03;
L_10009c09:;
  /* 10009c09 mov ecx, eax */
  ECX = (EAX);
  /* 10009c0b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10009c0e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10009c10 mov ecx, eax */
  ECX = (EAX);
  /* 10009c12 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10009c15 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10009c17 mov ecx, edx */
  ECX = (EDX);
  /* 10009c19 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10009c1c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10009c1f je 0x10009c27 */
  if (C.zf) goto L_10009c27;
  /* 10009c21 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10009c23 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10009c25 je 0x10009c2d */
  if (C.zf) goto L_10009c2d;
L_10009c27:;
  /* 10009c27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10009c29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10009c2a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10009c2b jne 0x10009c27 */
  if (!C.zf) goto L_10009c27;
L_10009c2d:;
  /* 10009c2d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10009c31 pop edi */
  EDI = (pop32());
  /* 10009c32 ret  */
  ESPCHK(0x10009be0u, _esp0);
  ESP += 4; return;
L_10009c33:;
  /* 10009c33 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10009c37 ret  */
  ESPCHK(0x10009be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c40 @ 0x10009c40 (664 bytes, 266 insns) [15 switch table(s)] */
void f_10009c40(void) {
  FTRACE(0x10009c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10009c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10009c41 mov ebp, esp */
  EBP = (ESP);
  /* 10009c43 push edi */
  push32((uint32_t)(EDI));
  /* 10009c44 push esi */
  push32((uint32_t)(ESI));
  /* 10009c45 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10009c48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10009c4b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10009c4e mov eax, ecx */
  EAX = (ECX);
  /* 10009c50 mov edx, ecx */
  EDX = (ECX);
  /* 10009c52 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10009c54 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009c56 jbe 0x10009c60 */
  if ((C.cf||C.zf)) goto L_10009c60;
  /* 10009c58 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009c5a jb 0x10009dd8 */
  if (C.cf) goto L_10009dd8;
L_10009c60:;
  /* 10009c60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10009c66 jne 0x10009c7c */
  if (!C.zf) goto L_10009c7c;
  /* 10009c68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10009c6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10009c6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009c71 jb 0x10009c9c */
  if (C.cf) goto L_10009c9c;
  /* 10009c73 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10009c75 jmp dword ptr [edx*4 + 0x10009d88] */
  switch (EDX) {
    case 0: goto L_10009d98;
    case 1: goto L_10009da0;
    case 2: goto L_10009dac;
    case 3: goto L_10009dc0;
    default: x86_unimpl("switch@0x10009c75 out of table"); return;
  }
L_10009c7c:;
  /* 10009c7c mov eax, edi */
  EAX = (EDI);
  /* 10009c7e mov edx, 3 */
  EDX = (0x3u);
  /* 10009c83 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10009c86 jb 0x10009c94 */
  if (C.cf) goto L_10009c94;
  /* 10009c88 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10009c8b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10009c8d jmp dword ptr [eax*4 + 0x10009ca0] */
  switch (EAX) {
    case 1: goto L_10009cb0;
    case 2: goto L_10009cdc;
    case 3: goto L_10009d00;
    default: x86_unimpl("switch@0x10009c8d out of table"); return;
  }
L_10009c94:;
  /* 10009c94 jmp dword ptr [ecx*4 + 0x10009d98] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10009d98)))); return;
  /* 10009c9b nop  */
  /* nop */
L_10009c9c:;
  /* 10009c9c jmp dword ptr [ecx*4 + 0x10009d1c] */
  switch (ECX) {
    case 0: goto L_10009d7f;
    case 1: goto L_10009d6c;
    case 2: goto L_10009d64;
    case 3: goto L_10009d5c;
    case 4: goto L_10009d54;
    case 5: goto L_10009d4c;
    case 6: goto L_10009d44;
    case 7: goto L_10009d3c;
    default: x86_unimpl("switch@0x10009c9c out of table"); return;
  }
  /* 10009ca3 nop  */
  /* nop */
L_10009cb0:;
  /* 10009cb0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10009cb2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10009cb4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10009cb6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10009cb9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10009cbc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10009cbf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10009cc2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10009cc5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10009cc8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10009ccb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009cce jb 0x10009c9c */
  if (C.cf) goto L_10009c9c;
  /* 10009cd0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10009cd2 jmp dword ptr [edx*4 + 0x10009d88] */
  switch (EDX) {
    case 0: goto L_10009d98;
    case 1: goto L_10009da0;
    case 2: goto L_10009dac;
    case 3: goto L_10009dc0;
    default: x86_unimpl("switch@0x10009cd2 out of table"); return;
  }
  /* 10009cd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10009cdc:;
  /* 10009cdc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10009cde mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10009ce0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10009ce2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10009ce5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10009ce8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10009ceb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10009cee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10009cf1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009cf4 jb 0x10009c9c */
  if (C.cf) goto L_10009c9c;
  /* 10009cf6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10009cf8 jmp dword ptr [edx*4 + 0x10009d88] */
  switch (EDX) {
    case 0: goto L_10009d98;
    case 1: goto L_10009da0;
    case 2: goto L_10009dac;
    case 3: goto L_10009dc0;
    default: x86_unimpl("switch@0x10009cf8 out of table"); return;
  }
  /* 10009cff nop  */
  /* nop */
L_10009d00:;
  /* 10009d00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10009d02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10009d04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10009d06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10009d07 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10009d0a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10009d0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009d0e jb 0x10009c9c */
  if (C.cf) goto L_10009c9c;
  /* 10009d10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10009d12 jmp dword ptr [edx*4 + 0x10009d88] */
  switch (EDX) {
    case 0: goto L_10009d98;
    case 1: goto L_10009da0;
    case 2: goto L_10009dac;
    case 3: goto L_10009dc0;
    default: x86_unimpl("switch@0x10009d12 out of table"); return;
  }
  /* 10009d19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10009d3c:;
  /* 10009d3c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10009d40 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10009d44:;
  /* 10009d44 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10009d48 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10009d4c:;
  /* 10009d4c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10009d50 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10009d54:;
  /* 10009d54 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10009d58 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10009d5c:;
  /* 10009d5c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10009d60 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10009d64:;
  /* 10009d64 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10009d68 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10009d6c:;
  /* 10009d6c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10009d70 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10009d74 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10009d7b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10009d7d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10009d7f:;
  /* 10009d7f jmp dword ptr [edx*4 + 0x10009d88] */
  switch (EDX) {
    case 0: goto L_10009d98;
    case 1: goto L_10009da0;
    case 2: goto L_10009dac;
    case 3: goto L_10009dc0;
    default: x86_unimpl("switch@0x10009d7f out of table"); return;
  }
  /* 10009d86 mov edi, edi */
  EDI = (EDI);
L_10009d98:;
  /* 10009d98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10009d9b pop esi */
  ESI = (pop32());
  /* 10009d9c pop edi */
  EDI = (pop32());
  /* 10009d9d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10009d9e ret  */
  ESPCHK(0x10009c40u, _esp0);
  ESP += 4; return;
  /* 10009d9f nop  */
  /* nop */
L_10009da0:;
  /* 10009da0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10009da2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10009da4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10009da7 pop esi */
  ESI = (pop32());
  /* 10009da8 pop edi */
  EDI = (pop32());
  /* 10009da9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10009daa ret  */
  ESPCHK(0x10009c40u, _esp0);
  ESP += 4; return;
  /* 10009dab nop  */
  /* nop */
L_10009dac:;
  /* 10009dac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10009dae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10009db0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10009db3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10009db6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10009db9 pop esi */
  ESI = (pop32());
  /* 10009dba pop edi */
  EDI = (pop32());
  /* 10009dbb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10009dbc ret  */
  ESPCHK(0x10009c40u, _esp0);
  ESP += 4; return;
  /* 10009dbd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10009dc0:;
  /* 10009dc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10009dc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10009dc4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10009dc7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10009dca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10009dcd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10009dd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10009dd3 pop esi */
  ESI = (pop32());
  /* 10009dd4 pop edi */
  EDI = (pop32());
  /* 10009dd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10009dd6 ret  */
  ESPCHK(0x10009c40u, _esp0);
  ESP += 4; return;
  /* 10009dd7 nop  */
  /* nop */
L_10009dd8:;
  /* 10009dd8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10009ddc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10009de0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10009de6 jne 0x10009e0c */
  if (!C.zf) goto L_10009e0c;
  /* 10009de8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10009deb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10009dee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009df1 jb 0x10009e00 */
  if (C.cf) goto L_10009e00;
  /* 10009df3 std  */
  C.df=1;
  /* 10009df4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10009df6 cld  */
  C.df=0;
  /* 10009df7 jmp dword ptr [edx*4 + 0x10009f20] */
  switch (EDX) {
    case 0: goto L_10009f30;
    case 1: goto L_10009f38;
    case 2: goto L_10009f48;
    case 3: goto L_10009f5c;
    default: x86_unimpl("switch@0x10009df7 out of table"); return;
  }
  /* 10009dfe mov edi, edi */
  EDI = (EDI);
L_10009e00:;
  /* 10009e00 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10009e02 jmp dword ptr [ecx*4 + 0x10009ed0] */
  switch (ECX) {
    case 0: goto L_10009f17;
    default: x86_unimpl("switch@0x10009e02 out of table"); return;
  }
  /* 10009e09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10009e0c:;
  /* 10009e0c mov eax, edi */
  EAX = (EDI);
  /* 10009e0e mov edx, 3 */
  EDX = (0x3u);
  /* 10009e13 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009e16 jb 0x10009e24 */
  if (C.cf) goto L_10009e24;
  /* 10009e18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10009e1b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10009e1d jmp dword ptr [eax*4 + 0x10009e28] */
  switch (EAX) {
    case 1: goto L_10009e38;
    case 2: goto L_10009e58;
    case 3: goto L_10009e80;
    default: x86_unimpl("switch@0x10009e1d out of table"); return;
  }
L_10009e24:;
  /* 10009e24 jmp dword ptr [ecx*4 + 0x10009f20] */
  switch (ECX) {
    case 0: goto L_10009f30;
    case 1: goto L_10009f38;
    case 2: goto L_10009f48;
    case 3: goto L_10009f5c;
    default: x86_unimpl("switch@0x10009e24 out of table"); return;
  }
  /* 10009e2b nop  */
  /* nop */
L_10009e38:;
  /* 10009e38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10009e3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10009e3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10009e40 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10009e41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10009e44 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10009e45 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009e48 jb 0x10009e00 */
  if (C.cf) goto L_10009e00;
  /* 10009e4a std  */
  C.df=1;
  /* 10009e4b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10009e4d cld  */
  C.df=0;
  /* 10009e4e jmp dword ptr [edx*4 + 0x10009f20] */
  switch (EDX) {
    case 0: goto L_10009f30;
    case 1: goto L_10009f38;
    case 2: goto L_10009f48;
    case 3: goto L_10009f5c;
    default: x86_unimpl("switch@0x10009e4e out of table"); return;
  }
  /* 10009e55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10009e58:;
  /* 10009e58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10009e5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10009e5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10009e60 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10009e63 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10009e66 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10009e69 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10009e6c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10009e6f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009e72 jb 0x10009e00 */
  if (C.cf) goto L_10009e00;
  /* 10009e74 std  */
  C.df=1;
  /* 10009e75 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10009e77 cld  */
  C.df=0;
  /* 10009e78 jmp dword ptr [edx*4 + 0x10009f20] */
  switch (EDX) {
    case 0: goto L_10009f30;
    case 1: goto L_10009f38;
    case 2: goto L_10009f48;
    case 3: goto L_10009f5c;
    default: x86_unimpl("switch@0x10009e78 out of table"); return;
  }
  /* 10009e7f nop  */
  /* nop */
L_10009e80:;
  /* 10009e80 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10009e83 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10009e85 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10009e88 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10009e8b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10009e8e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10009e91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10009e94 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10009e97 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10009e9a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10009e9d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009ea0 jb 0x10009e00 */
  if (C.cf) goto L_10009e00;
  /* 10009ea6 std  */
  C.df=1;
  /* 10009ea7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10009ea9 cld  */
  C.df=0;
  /* 10009eaa jmp dword ptr [edx*4 + 0x10009f20] */
  switch (EDX) {
    case 0: goto L_10009f30;
    case 1: goto L_10009f38;
    case 2: goto L_10009f48;
    case 3: goto L_10009f5c;
    default: x86_unimpl("switch@0x10009eaa out of table"); return;
  }
  /* 10009eb1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10009eb4 aam 0x9e */
  x86_unimpl("aam @ 0x10009eb4");
  /* 10009eb6 add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10009eb8 fcomp qword ptr [esi - 0x611bf000] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ESI + -0x611bf000)));
  (void)fpu_pop();
  /* 10009ebe add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10009ec0 in al, dx */
  x86_unimpl("in @ 0x10009ec0");
  /* 10009ec1 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10009ec2 add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10009ec4 hlt  */
  x86_unimpl("hlt @ 0x10009ec4");
  /* 10009ec5 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10009ec6 add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10009ec8 cld  */
  C.df=0;
  /* 10009ec9 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10009eca add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10009ecc add al, 0x9f */
  { uint32_t _a=(AL),_b=(0x9fu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10009ece add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10009ed4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10009ed8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10009edc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10009ee0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10009ee4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10009ee8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10009eec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10009ef0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10009ef4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10009ef8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10009efc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10009f00 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10009f04 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10009f08 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10009f0c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10009f13 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10009f15 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10009f17:;
  /* 10009f17 jmp dword ptr [edx*4 + 0x10009f20] */
  switch (EDX) {
    case 0: goto L_10009f30;
    case 1: goto L_10009f38;
    case 2: goto L_10009f48;
    case 3: goto L_10009f5c;
    default: x86_unimpl("switch@0x10009f17 out of table"); return;
  }
  /* 10009f1e mov edi, edi */
  EDI = (EDI);
L_10009f30:;
  /* 10009f30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10009f33 pop esi */
  ESI = (pop32());
  /* 10009f34 pop edi */
  EDI = (pop32());
  /* 10009f35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10009f36 ret  */
  ESPCHK(0x10009c40u, _esp0);
  ESP += 4; return;
  /* 10009f37 nop  */
  /* nop */
L_10009f38:;
  /* 10009f38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10009f3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10009f3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10009f41 pop esi */
  ESI = (pop32());
  /* 10009f42 pop edi */
  EDI = (pop32());
  /* 10009f43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10009f44 ret  */
  ESPCHK(0x10009c40u, _esp0);
  ESP += 4; return;
  /* 10009f45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10009f48:;
  /* 10009f48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10009f4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10009f4e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10009f51 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10009f54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10009f57 pop esi */
  ESI = (pop32());
  /* 10009f58 pop edi */
  EDI = (pop32());
  /* 10009f59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10009f5a ret  */
  ESPCHK(0x10009c40u, _esp0);
  ESP += 4; return;
  /* 10009f5b nop  */
  /* nop */
L_10009f5c:;
  /* 10009f5c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10009f5f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10009f62 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10009f65 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10009f68 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10009f6b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10009f6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10009f71 pop esi */
  ESI = (pop32());
  /* 10009f72 pop edi */
  EDI = (pop32());
  /* 10009f73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10009f74 ret  */
  ESPCHK(0x10009c40u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10009f75 (9 bytes, 4 insns) */
void f_10009f75(void) {
  FTRACE(0x10009f75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10009f75 push 2 */
  push32((uint32_t)(0x2u));
  /* 10009f77 call 0x100070b1 */
  push32(0x10009f7cu); f_100070b1();
  /* 10009f7c pop ecx */
  ECX = (pop32());
  /* 10009f7d ret  */
  ESPCHK(0x10009f75u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f7e @ 0x10009f7e (41 bytes, 12 insns) */
void f_10009f7e(void) {
  FTRACE(0x10009f7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10009f7e push esi */
  push32((uint32_t)(ESI));
  /* 10009f7f mov esi, dword ptr [0x1000e094] */
  ESI = (r32((uint32_t)(0x1000e094)));
  /* 10009f85 push dword ptr [0x10010c74] */
  push32((uint32_t)(r32((uint32_t)(0x10010c74))));
  /* 10009f8b call esi */
  call_ind((uint32_t)(ESI), 0x10009f8du);
  /* 10009f8d push dword ptr [0x10010c64] */
  push32((uint32_t)(r32((uint32_t)(0x10010c64))));
  /* 10009f93 call esi */
  call_ind((uint32_t)(ESI), 0x10009f95u);
  /* 10009f95 push dword ptr [0x10010c54] */
  push32((uint32_t)(r32((uint32_t)(0x10010c54))));
  /* 10009f9b call esi */
  call_ind((uint32_t)(ESI), 0x10009f9du);
  /* 10009f9d push dword ptr [0x10010c34] */
  push32((uint32_t)(r32((uint32_t)(0x10010c34))));
  /* 10009fa3 call esi */
  call_ind((uint32_t)(ESI), 0x10009fa5u);
  /* 10009fa5 pop esi */
  ESI = (pop32());
  /* 10009fa6 ret  */
  ESPCHK(0x10009f7eu, _esp0);
  ESP += 4; return;
}

/* FUN_10009fa7 @ 0x10009fa7 (108 bytes, 34 insns) */
void f_10009fa7(void) {
  FTRACE(0x10009fa7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10009fa7 push esi */
  push32((uint32_t)(ESI));
  /* 10009fa8 push edi */
  push32((uint32_t)(EDI));
  /* 10009fa9 mov edi, dword ptr [0x1000e050] */
  EDI = (r32((uint32_t)(0x1000e050)));
  /* 10009faf mov esi, 0x10010c30 */
  ESI = (0x10010c30u);
L_10009fb4:;
  /* 10009fb4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10009fb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10009fb8 je 0x10009fe5 */
  if (C.zf) goto L_10009fe5;
  /* 10009fba cmp esi, 0x10010c74 */
  { uint32_t _a=(ESI),_b=(0x10010c74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009fc0 je 0x10009fe5 */
  if (C.zf) goto L_10009fe5;
  /* 10009fc2 cmp esi, 0x10010c64 */
  { uint32_t _a=(ESI),_b=(0x10010c64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009fc8 je 0x10009fe5 */
  if (C.zf) goto L_10009fe5;
  /* 10009fca cmp esi, 0x10010c54 */
  { uint32_t _a=(ESI),_b=(0x10010c54u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009fd0 je 0x10009fe5 */
  if (C.zf) goto L_10009fe5;
  /* 10009fd2 cmp esi, 0x10010c34 */
  { uint32_t _a=(ESI),_b=(0x10010c34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009fd8 je 0x10009fe5 */
  if (C.zf) goto L_10009fe5;
  /* 10009fda push eax */
  push32((uint32_t)(EAX));
  /* 10009fdb call edi */
  call_ind((uint32_t)(EDI), 0x10009fddu);
  /* 10009fdd push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10009fdf call 0x1000a1c6 */
  push32(0x10009fe4u); f_1000a1c6();
  /* 10009fe4 pop ecx */
  ECX = (pop32());
L_10009fe5:;
  /* 10009fe5 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10009fe8 cmp esi, 0x10010cf0 */
  { uint32_t _a=(ESI),_b=(0x10010cf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009fee jl 0x10009fb4 */
  if ((C.sf!=C.of)) goto L_10009fb4;
  /* 10009ff0 push dword ptr [0x10010c54] */
  push32((uint32_t)(r32((uint32_t)(0x10010c54))));
  /* 10009ff6 call edi */
  call_ind((uint32_t)(EDI), 0x10009ff8u);
  /* 10009ff8 push dword ptr [0x10010c64] */
  push32((uint32_t)(r32((uint32_t)(0x10010c64))));
  /* 10009ffe call edi */
  call_ind((uint32_t)(EDI), 0x1000a000u);
  /* 1000a000 push dword ptr [0x10010c74] */
  push32((uint32_t)(r32((uint32_t)(0x10010c74))));
  /* 1000a006 call edi */
  call_ind((uint32_t)(EDI), 0x1000a008u);
  /* 1000a008 push dword ptr [0x10010c34] */
  push32((uint32_t)(r32((uint32_t)(0x10010c34))));
  /* 1000a00e call edi */
  call_ind((uint32_t)(EDI), 0x1000a010u);
  /* 1000a010 pop edi */
  EDI = (pop32());
  /* 1000a011 pop esi */
  ESI = (pop32());
  /* 1000a012 ret  */
  ESPCHK(0x10009fa7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a013 @ 0x1000a013 (97 bytes, 37 insns) */
void f_1000a013(void) {
  FTRACE(0x1000a013u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000a013 push ebp */
  push32((uint32_t)(EBP));
  /* 1000a014 mov ebp, esp */
  EBP = (ESP);
  /* 1000a016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000a019 push esi */
  push32((uint32_t)(ESI));
  /* 1000a01a cmp dword ptr [eax*4 + 0x10010c30], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10010c30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a022 lea esi, [eax*4 + 0x10010c30] */
  ESI = ((uint32_t)(EAX*4 + 0x10010c30));
  /* 1000a029 jne 0x1000a069 */
  if (!C.zf) goto L_1000a069;
  /* 1000a02b push edi */
  push32((uint32_t)(EDI));
  /* 1000a02c push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1000a02e call 0x1000a2af */
  push32(0x1000a033u); f_1000a2af();
  /* 1000a033 mov edi, eax */
  EDI = (EAX);
  /* 1000a035 pop ecx */
  ECX = (pop32());
  /* 1000a036 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1000a038 jne 0x1000a042 */
  if (!C.zf) goto L_1000a042;
  /* 1000a03a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1000a03c call 0x100070b1 */
  push32(0x1000a041u); f_100070b1();
  /* 1000a041 pop ecx */
  ECX = (pop32());
L_1000a042:;
  /* 1000a042 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1000a044 call 0x1000a013 */
  push32(0x1000a049u); f_1000a013();
  /* 1000a049 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a04c pop ecx */
  ECX = (pop32());
  /* 1000a04d push edi */
  push32((uint32_t)(EDI));
  /* 1000a04e jne 0x1000a05a */
  if (!C.zf) goto L_1000a05a;
  /* 1000a050 call dword ptr [0x1000e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e094))), 0x1000a056u);
  /* 1000a056 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1000a058 jmp 0x1000a060 */
  goto L_1000a060;
L_1000a05a:;
  /* 1000a05a call 0x1000a1c6 */
  push32(0x1000a05fu); f_1000a1c6();
  /* 1000a05f pop ecx */
  ECX = (pop32());
L_1000a060:;
  /* 1000a060 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1000a062 call 0x1000a074 */
  push32(0x1000a067u); f_1000a074();
  /* 1000a067 pop ecx */
  ECX = (pop32());
  /* 1000a068 pop edi */
  EDI = (pop32());
L_1000a069:;
  /* 1000a069 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1000a06b call dword ptr [0x1000e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e00c))), 0x1000a071u);
  /* 1000a071 pop esi */
  ESI = (pop32());
  /* 1000a072 pop ebp */
  EBP = (pop32());
  /* 1000a073 ret  */
  ESPCHK(0x1000a013u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a074 @ 0x1000a074 (21 bytes, 7 insns) */
void f_1000a074(void) {
  FTRACE(0x1000a074u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000a074 push ebp */
  push32((uint32_t)(EBP));
  /* 1000a075 mov ebp, esp */
  EBP = (ESP);
  /* 1000a077 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000a07a push dword ptr [eax*4 + 0x10010c30] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10010c30))));
  /* 1000a081 call dword ptr [0x1000e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e008))), 0x1000a087u);
  /* 1000a087 pop ebp */
  EBP = (pop32());
  /* 1000a088 ret  */
  ESPCHK(0x1000a074u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a089 @ 0x1000a089 (289 bytes, 98 insns) */
void f_1000a089(void) {
  FTRACE(0x1000a089u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000a089 push ebp */
  push32((uint32_t)(EBP));
  /* 1000a08a mov ebp, esp */
  EBP = (ESP);
  /* 1000a08c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1000a08e push 0x1000e4d0 */
  push32((uint32_t)(0x1000e4d0u));
  /* 1000a093 push 0x1000d030 */
  push32((uint32_t)(0x1000d030u));
  /* 1000a098 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1000a09e push eax */
  push32((uint32_t)(EAX));
  /* 1000a09f mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1000a0a6 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000a0a9 push ebx */
  push32((uint32_t)(EBX));
  /* 1000a0aa push esi */
  push32((uint32_t)(ESI));
  /* 1000a0ab push edi */
  push32((uint32_t)(EDI));
  /* 1000a0ac mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1000a0af imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1000a0b3 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1000a0b6 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 1000a0b9 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a0bc ja 0x1000a0d2 */
  if ((!C.cf&&!C.zf)) goto L_1000a0d2;
  /* 1000a0be xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1000a0c0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a0c2 jne 0x1000a0c7 */
  if (!C.zf) goto L_1000a0c7;
  /* 1000a0c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000a0c6 pop esi */
  ESI = (pop32());
L_1000a0c7:;
  /* 1000a0c7 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000a0ca and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1000a0cd mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1000a0d0 jmp 0x1000a0d4 */
  goto L_1000a0d4;
L_1000a0d2:;
  /* 1000a0d2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1000a0d4:;
  /* 1000a0d4 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 1000a0d7 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a0da ja 0x1000a188 */
  if ((!C.cf&&!C.zf)) goto L_1000a188;
  /* 1000a0e0 mov eax, dword ptr [0x10017c28] */
  EAX = (r32((uint32_t)(0x10017c28)));
  /* 1000a0e5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a0e8 jne 0x1000a12b */
  if (!C.zf) goto L_1000a12b;
  /* 1000a0ea mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 1000a0ed cmp edi, dword ptr [0x100169e0] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x100169e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a0f3 ja 0x1000a171 */
  if ((!C.cf&&!C.zf)) goto L_1000a171;
  /* 1000a0f5 push 9 */
  push32((uint32_t)(0x9u));
  /* 1000a0f7 call 0x1000a013 */
  push32(0x1000a0fcu); f_1000a013();
  /* 1000a0fc pop ecx */
  ECX = (pop32());
  /* 1000a0fd mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1000a100 push edi */
  push32((uint32_t)(EDI));
  /* 1000a101 call 0x1000b29b */
  push32(0x1000a106u); f_1000b29b();
  /* 1000a106 pop ecx */
  ECX = (pop32());
  /* 1000a107 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1000a10a or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1000a10e call 0x1000a122 */
  push32(0x1000a113u); f_1000a122();
  /* 1000a113 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a116 je 0x1000a176 */
  if (C.zf) goto L_1000a176;
  /* 1000a118 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1000a11b jmp 0x1000a165 */
  goto L_1000a165;
  /* 1000a11d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1000a11f mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1000a122 push 9 */
  push32((uint32_t)(0x9u));
  /* 1000a124 call 0x1000a074 */
  push32(0x1000a129u); f_1000a074();
  /* 1000a129 pop ecx */
  ECX = (pop32());
  /* 1000a12a ret  */
  ESPCHK(0x1000a089u, _esp0);
  ESP += 4; return;
L_1000a12b:;
  /* 1000a12b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a12e jne 0x1000a171 */
  if (!C.zf) goto L_1000a171;
  /* 1000a130 cmp esi, dword ptr [0x10012e94] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10012e94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a136 ja 0x1000a171 */
  if ((!C.cf&&!C.zf)) goto L_1000a171;
  /* 1000a138 push 9 */
  push32((uint32_t)(0x9u));
  /* 1000a13a call 0x1000a013 */
  push32(0x1000a13fu); f_1000a013();
  /* 1000a13f pop ecx */
  ECX = (pop32());
  /* 1000a140 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1000a147 mov eax, esi */
  EAX = (ESI);
  /* 1000a149 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1000a14c push eax */
  push32((uint32_t)(EAX));
  /* 1000a14d call 0x1000ba48 */
  push32(0x1000a152u); f_1000ba48();
  /* 1000a152 pop ecx */
  ECX = (pop32());
  /* 1000a153 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1000a156 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1000a15a call 0x1000a1ab */
  push32(0x1000a15fu); f_1000a1ab();
  /* 1000a15f cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a162 je 0x1000a176 */
  if (C.zf) goto L_1000a176;
  /* 1000a164 push esi */
  push32((uint32_t)(ESI));
L_1000a165:;
  /* 1000a165 push ebx */
  push32((uint32_t)(EBX));
  /* 1000a166 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1000a169 call 0x10009be0 */
  push32(0x1000a16eu); f_10009be0();
  /* 1000a16e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000a171:;
  /* 1000a171 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a174 jne 0x1000a1b4 */
  if (!C.zf) { jmp_ind(0x1000a1b4u); return; }
L_1000a176:;
  /* 1000a176 push esi */
  push32((uint32_t)(ESI));
  /* 1000a177 push 8 */
  push32((uint32_t)(0x8u));
  /* 1000a179 push dword ptr [0x10017c24] */
  push32((uint32_t)(r32((uint32_t)(0x10017c24))));
  /* 1000a17f call dword ptr [0x1000e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e098))), 0x1000a185u);
  /* 1000a185 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1000a188:;
  /* 1000a188 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a18b jne 0x1000a1b4 */
  if (!C.zf) { jmp_ind(0x1000a1b4u); return; }
  /* 1000a18d cmp dword ptr [0x10016880], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10016880))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a193 je 0x1000a1b4 */
  if (C.zf) { jmp_ind(0x1000a1b4u); return; }
  /* 1000a195 push esi */
  push32((uint32_t)(ESI));
  /* 1000a196 call 0x1000cf1a */
  push32(0x1000a19bu); f_1000cf1a();
  /* 1000a19b pop ecx */
  ECX = (pop32());
  /* 1000a19c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000a19e jne 0x1000a0d4 */
  if (!C.zf) goto L_1000a0d4;
  /* 1000a1a4 jmp 0x1000a1b7 */
  jmp_ind(0x1000a1b7u); return;
  /* 1000a1a6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_1000a122 @ 0x1000a122 (9 bytes, 4 insns) */
void f_1000a122(void) {
  FTRACE(0x1000a122u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000a122 push 9 */
  push32((uint32_t)(0x9u));
  /* 1000a124 call 0x1000a074 */
  push32(0x1000a129u); f_1000a074();
  /* 1000a129 pop ecx */
  ECX = (pop32());
  /* 1000a12a ret  */
  ESPCHK(0x1000a122u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1ab @ 0x1000a1ab (9 bytes, 4 insns) */
void f_1000a1ab(void) {
  FTRACE(0x1000a1abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000a1ab push 9 */
  push32((uint32_t)(0x9u));
  /* 1000a1ad call 0x1000a074 */
  push32(0x1000a1b2u); f_1000a074();
  /* 1000a1b2 pop ecx */
  ECX = (pop32());
  /* 1000a1b3 ret  */
  ESPCHK(0x1000a1abu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1c6 @ 0x1000a1c6 (215 bytes, 75 insns) */
void f_1000a1c6(void) {
  FTRACE(0x1000a1c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000a1c6 push ebp */
  push32((uint32_t)(EBP));
  /* 1000a1c7 mov ebp, esp */
  EBP = (ESP);
  /* 1000a1c9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1000a1cb push 0x1000e4e8 */
  push32((uint32_t)(0x1000e4e8u));
  /* 1000a1d0 push 0x1000d030 */
  push32((uint32_t)(0x1000d030u));
  /* 1000a1d5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1000a1db push eax */
  push32((uint32_t)(EAX));
  /* 1000a1dc mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1000a1e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000a1e6 push ebx */
  push32((uint32_t)(EBX));
  /* 1000a1e7 push esi */
  push32((uint32_t)(ESI));
  /* 1000a1e8 push edi */
  push32((uint32_t)(EDI));
  /* 1000a1e9 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1000a1ec test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1000a1ee je 0x1000a2a0 */
  if (C.zf) { jmp_ind(0x1000a2a0u); return; }
  /* 1000a1f4 mov eax, dword ptr [0x10017c28] */
  EAX = (r32((uint32_t)(0x10017c28)));
  /* 1000a1f9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a1fc jne 0x1000a239 */
  if (!C.zf) goto L_1000a239;
  /* 1000a1fe push 9 */
  push32((uint32_t)(0x9u));
  /* 1000a200 call 0x1000a013 */
  push32(0x1000a205u); f_1000a013();
  /* 1000a205 pop ecx */
  ECX = (pop32());
  /* 1000a206 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1000a20a push esi */
  push32((uint32_t)(ESI));
  /* 1000a20b call 0x1000af47 */
  push32(0x1000a210u); f_1000af47();
  /* 1000a210 pop ecx */
  ECX = (pop32());
  /* 1000a211 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1000a214 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000a216 je 0x1000a221 */
  if (C.zf) goto L_1000a221;
  /* 1000a218 push esi */
  push32((uint32_t)(ESI));
  /* 1000a219 push eax */
  push32((uint32_t)(EAX));
  /* 1000a21a call 0x1000af72 */
  push32(0x1000a21fu); f_1000af72();
  /* 1000a21f pop ecx */
  ECX = (pop32());
  /* 1000a220 pop ecx */
  ECX = (pop32());
L_1000a221:;
  /* 1000a221 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1000a225 call 0x1000a230 */
  push32(0x1000a22au); f_1000a230();
  /* 1000a22a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a22e jmp 0x1000a281 */
  goto L_1000a281;
  /* 1000a230 push 9 */
  push32((uint32_t)(0x9u));
  /* 1000a232 call 0x1000a074 */
  push32(0x1000a237u); f_1000a074();
  /* 1000a237 pop ecx */
  ECX = (pop32());
  /* 1000a238 ret  */
  ESPCHK(0x1000a1c6u, _esp0);
  ESP += 4; return;
L_1000a239:;
  /* 1000a239 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a23c jne 0x1000a291 */
  if (!C.zf) goto L_1000a291;
  /* 1000a23e push 9 */
  push32((uint32_t)(0x9u));
  /* 1000a240 call 0x1000a013 */
  push32(0x1000a245u); f_1000a013();
  /* 1000a245 pop ecx */
  ECX = (pop32());
  /* 1000a246 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1000a24d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1000a250 push eax */
  push32((uint32_t)(EAX));
  /* 1000a251 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 1000a254 push eax */
  push32((uint32_t)(EAX));
  /* 1000a255 push esi */
  push32((uint32_t)(ESI));
  /* 1000a256 call 0x1000b9ac */
  push32(0x1000a25bu); f_1000b9ac();
  /* 1000a25b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000a25e mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1000a261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000a263 je 0x1000a274 */
  if (C.zf) goto L_1000a274;
  /* 1000a265 push eax */
  push32((uint32_t)(EAX));
  /* 1000a266 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1000a269 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 1000a26c call 0x1000ba03 */
  push32(0x1000a271u); f_1000ba03();
  /* 1000a271 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000a274:;
  /* 1000a274 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1000a278 call 0x1000a288 */
  push32(0x1000a27du); f_1000a288();
  /* 1000a27d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1000a281:;
  /* 1000a281 jne 0x1000a2a0 */
  if (!C.zf) { jmp_ind(0x1000a2a0u); return; }
  /* 1000a283 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1000a286 jmp 0x1000a292 */
  goto L_1000a292;
  /* 1000a288 push 9 */
  push32((uint32_t)(0x9u));
  /* 1000a28a call 0x1000a074 */
  push32(0x1000a28fu); f_1000a074();
  /* 1000a28f pop ecx */
  ECX = (pop32());
  /* 1000a290 ret  */
  ESPCHK(0x1000a1c6u, _esp0);
  ESP += 4; return;
L_1000a291:;
  /* 1000a291 push esi */
  push32((uint32_t)(ESI));
L_1000a292:;
  /* 1000a292 push 0 */
  push32((uint32_t)(0x0u));
  /* 1000a294 push dword ptr [0x10017c24] */
  push32((uint32_t)(r32((uint32_t)(0x10017c24))));
}

/* FUN_1000a230 @ 0x1000a230 (9 bytes, 4 insns) */
void f_1000a230(void) {
  FTRACE(0x1000a230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000a230 push 9 */
  push32((uint32_t)(0x9u));
  /* 1000a232 call 0x1000a074 */
  push32(0x1000a237u); f_1000a074();
  /* 1000a237 pop ecx */
  ECX = (pop32());
  /* 1000a238 ret  */
  ESPCHK(0x1000a230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a288 @ 0x1000a288 (9 bytes, 4 insns) */
void f_1000a288(void) {
  FTRACE(0x1000a288u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000a288 push 9 */
  push32((uint32_t)(0x9u));
  /* 1000a28a call 0x1000a074 */
  push32(0x1000a28fu); f_1000a074();
  /* 1000a28f pop ecx */
  ECX = (pop32());
  /* 1000a290 ret  */
  ESPCHK(0x1000a288u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x1000a2af (18 bytes, 6 insns) */
void f_1000a2af(void) {
  FTRACE(0x1000a2afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000a2af push dword ptr [0x10016880] */
  push32((uint32_t)(r32((uint32_t)(0x10016880))));
  /* 1000a2b5 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1000a2b9 call 0x1000a2c1 */
  push32(0x1000a2beu); f_1000a2c1();
  /* 1000a2be pop ecx */
  ECX = (pop32());
  /* 1000a2bf pop ecx */
  ECX = (pop32());
  /* 1000a2c0 ret  */
  ESPCHK(0x1000a2afu, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x1000a2c1 (44 bytes, 16 insns) */
void f_1000a2c1(void) {
  FTRACE(0x1000a2c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000a2c1 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a2c6 ja 0x1000a2ea */
  if ((!C.cf&&!C.zf)) goto L_1000a2ea;
L_1000a2c8:;
  /* 1000a2c8 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1000a2cc call 0x1000a2ed */
  push32(0x1000a2d1u); f_1000a2ed();
  /* 1000a2d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000a2d3 pop ecx */
  ECX = (pop32());
  /* 1000a2d4 jne 0x1000a2ec */
  if (!C.zf) goto L_1000a2ec;
  /* 1000a2d6 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a2da je 0x1000a2ec */
  if (C.zf) goto L_1000a2ec;
  /* 1000a2dc push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1000a2e0 call 0x1000cf1a */
  push32(0x1000a2e5u); f_1000cf1a();
  /* 1000a2e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000a2e7 pop ecx */
  ECX = (pop32());
  /* 1000a2e8 jne 0x1000a2c8 */
  if (!C.zf) goto L_1000a2c8;
L_1000a2ea:;
  /* 1000a2ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1000a2ec:;
  /* 1000a2ec ret  */
  ESPCHK(0x1000a2c1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2ed @ 0x1000a2ed (231 bytes, 81 insns) */
void f_1000a2ed(void) {
  FTRACE(0x1000a2edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000a2ed push ebp */
  push32((uint32_t)(EBP));
  /* 1000a2ee mov ebp, esp */
  EBP = (ESP);
  /* 1000a2f0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1000a2f2 push 0x1000e500 */
  push32((uint32_t)(0x1000e500u));
  /* 1000a2f7 push 0x1000d030 */
  push32((uint32_t)(0x1000d030u));
  /* 1000a2fc mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1000a302 push eax */
  push32((uint32_t)(EAX));
  /* 1000a303 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1000a30a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000a30d push ebx */
  push32((uint32_t)(EBX));
  /* 1000a30e push esi */
  push32((uint32_t)(ESI));
  /* 1000a30f push edi */
  push32((uint32_t)(EDI));
  /* 1000a310 mov eax, dword ptr [0x10017c28] */
  EAX = (r32((uint32_t)(0x10017c28)));
  /* 1000a315 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a318 jne 0x1000a35d */
  if (!C.zf) goto L_1000a35d;
  /* 1000a31a mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1000a31d cmp esi, dword ptr [0x100169e0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100169e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a323 ja 0x1000a3bc */
  if ((!C.cf&&!C.zf)) goto L_1000a3bc;
  /* 1000a329 push 9 */
  push32((uint32_t)(0x9u));
  /* 1000a32b call 0x1000a013 */
  push32(0x1000a330u); f_1000a013();
  /* 1000a330 pop ecx */
  ECX = (pop32());
  /* 1000a331 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1000a335 push esi */
  push32((uint32_t)(ESI));
  /* 1000a336 call 0x1000b29b */
  push32(0x1000a33bu); f_1000b29b();
  /* 1000a33b pop ecx */
  ECX = (pop32());
  /* 1000a33c mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1000a33f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1000a343 call 0x1000a354 */
  push32(0x1000a348u); f_1000a354();
  /* 1000a348 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1000a34b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000a34d je 0x1000a3bc */
  if (C.zf) goto L_1000a3bc;
  /* 1000a34f jmp 0x1000a3da */
  jmp_ind(0x1000a3dau); return;
  /* 1000a354 push 9 */
  push32((uint32_t)(0x9u));
  /* 1000a356 call 0x1000a074 */
  push32(0x1000a35bu); f_1000a074();
  /* 1000a35b pop ecx */
  ECX = (pop32());
  /* 1000a35c ret  */
  ESPCHK(0x1000a2edu, _esp0);
  ESP += 4; return;
L_1000a35d:;
  /* 1000a35d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a360 jne 0x1000a3bc */
  if (!C.zf) goto L_1000a3bc;
  /* 1000a362 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000a365 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000a367 je 0x1000a371 */
  if (C.zf) goto L_1000a371;
  /* 1000a369 lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 1000a36c and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1000a36f jmp 0x1000a374 */
  goto L_1000a374;
L_1000a371:;
  /* 1000a371 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1000a373 pop esi */
  ESI = (pop32());
L_1000a374:;
  /* 1000a374 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 1000a377 cmp esi, dword ptr [0x10012e94] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10012e94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a37d ja 0x1000a3ad */
  if ((!C.cf&&!C.zf)) goto L_1000a3ad;
  /* 1000a37f push 9 */
  push32((uint32_t)(0x9u));
  /* 1000a381 call 0x1000a013 */
  push32(0x1000a386u); f_1000a013();
  /* 1000a386 pop ecx */
  ECX = (pop32());
  /* 1000a387 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1000a38e mov eax, esi */
  EAX = (ESI);
  /* 1000a390 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1000a393 push eax */
  push32((uint32_t)(EAX));
  /* 1000a394 call 0x1000ba48 */
  push32(0x1000a399u); f_1000ba48();
  /* 1000a399 pop ecx */
  ECX = (pop32());
  /* 1000a39a mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1000a39d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1000a3a1 call 0x1000a3b3 */
  push32(0x1000a3a6u); f_1000a3b3();
  /* 1000a3a6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1000a3a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000a3ab jne 0x1000a3da */
  if (!C.zf) { jmp_ind(0x1000a3dau); return; }
L_1000a3ad:;
  /* 1000a3ad push esi */
  push32((uint32_t)(ESI));
  /* 1000a3ae jmp 0x1000a3cc */
  goto L_1000a3cc;
  /* 1000a3b0 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1000a3b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1000a3b5 call 0x1000a074 */
  push32(0x1000a3bau); f_1000a074();
  /* 1000a3ba pop ecx */
  ECX = (pop32());
  /* 1000a3bb ret  */
  ESPCHK(0x1000a2edu, _esp0);
  ESP += 4; return;
L_1000a3bc:;
  /* 1000a3bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000a3bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000a3c1 jne 0x1000a3c6 */
  if (!C.zf) goto L_1000a3c6;
  /* 1000a3c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000a3c5 pop eax */
  EAX = (pop32());
L_1000a3c6:;
  /* 1000a3c6 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000a3c9 and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1000a3cb push eax */
  push32((uint32_t)(EAX));
L_1000a3cc:;
  /* 1000a3cc push 0 */
  push32((uint32_t)(0x0u));
  /* 1000a3ce push dword ptr [0x10017c24] */
  push32((uint32_t)(r32((uint32_t)(0x10017c24))));
}

/* FUN_1000a354 @ 0x1000a354 (9 bytes, 4 insns) */
void f_1000a354(void) {
  FTRACE(0x1000a354u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000a354 push 9 */
  push32((uint32_t)(0x9u));
  /* 1000a356 call 0x1000a074 */
  push32(0x1000a35bu); f_1000a074();
  /* 1000a35b pop ecx */
  ECX = (pop32());
  /* 1000a35c ret  */
  ESPCHK(0x1000a354u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3b3 @ 0x1000a3b3 (9 bytes, 4 insns) */
void f_1000a3b3(void) {
  FTRACE(0x1000a3b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000a3b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1000a3b5 call 0x1000a074 */
  push32(0x1000a3bau); f_1000a074();
  /* 1000a3ba pop ecx */
  ECX = (pop32());
  /* 1000a3bb ret  */
  ESPCHK(0x1000a3b3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3e9 @ 0x1000a3e9 (429 bytes, 143 insns) */
void f_1000a3e9(void) {
  FTRACE(0x1000a3e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000a3e9 push ebp */
  push32((uint32_t)(EBP));
  /* 1000a3ea mov ebp, esp */
  EBP = (ESP);
  /* 1000a3ec sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000a3ef push ebx */
  push32((uint32_t)(EBX));
  /* 1000a3f0 push esi */
  push32((uint32_t)(ESI));
  /* 1000a3f1 push edi */
  push32((uint32_t)(EDI));
  /* 1000a3f2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1000a3f4 call 0x1000a013 */
  push32(0x1000a3f9u); f_1000a013();
  /* 1000a3f9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1000a3fc call 0x1000a596 */
  push32(0x1000a401u); f_1000a596();
  /* 1000a401 mov ebx, eax */
  EBX = (EAX);
  /* 1000a403 pop ecx */
  ECX = (pop32());
  /* 1000a404 cmp ebx, dword ptr [0x100169e4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x100169e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a40a pop ecx */
  ECX = (pop32());
  /* 1000a40b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1000a40e jne 0x1000a417 */
  if (!C.zf) goto L_1000a417;
L_1000a410:;
  /* 1000a410 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1000a412 jmp 0x1000a587 */
  goto L_1000a587;
L_1000a417:;
  /* 1000a417 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1000a419 je 0x1000a575 */
  if (C.zf) goto L_1000a575;
  /* 1000a41f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1000a421 mov eax, 0x10010d80 */
  EAX = (0x10010d80u);
L_1000a426:;
  /* 1000a426 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a428 je 0x1000a49e */
  if (C.zf) goto L_1000a49e;
  /* 1000a42a add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000a42d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1000a42e cmp eax, 0x10010e70 */
  { uint32_t _a=(EAX),_b=(0x10010e70u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a433 jl 0x1000a426 */
  if ((C.sf!=C.of)) goto L_1000a426;
  /* 1000a435 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1000a438 push eax */
  push32((uint32_t)(EAX));
  /* 1000a439 push ebx */
  push32((uint32_t)(EBX));
  /* 1000a43a call dword ptr [0x1000e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e09c))), 0x1000a440u);
  /* 1000a440 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000a442 pop esi */
  ESI = (pop32());
  /* 1000a443 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a445 jne 0x1000a56c */
  if (!C.zf) goto L_1000a56c;
  /* 1000a44b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1000a44d and dword ptr [0x10016c04], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10016c04)))&(0x0u); w32((uint32_t)(0x10016c04), (_r)); fl_logic(_r,32); }
  /* 1000a454 pop ecx */
  ECX = (pop32());
  /* 1000a455 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000a457 mov edi, 0x10016b00 */
  EDI = (0x10016b00u);
  /* 1000a45c cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a45f rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1000a461 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1000a462 mov dword ptr [0x100169e4], ebx */
  w32((uint32_t)(0x100169e4), (EBX));
  /* 1000a468 jbe 0x1000a559 */
  if ((C.cf||C.zf)) goto L_1000a559;
  /* 1000a46e cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000a472 je 0x1000a534 */
  if (C.zf) goto L_1000a534;
  /* 1000a478 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_1000a47b:;
  /* 1000a47b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1000a47d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1000a47f je 0x1000a534 */
  if (C.zf) goto L_1000a534;
  /* 1000a485 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 1000a489 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_1000a48c:;
  /* 1000a48c cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a48e ja 0x1000a528 */
  if ((!C.cf&&!C.zf)) goto L_1000a528;
  /* 1000a494 or byte ptr [eax + 0x10016b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10016b01)))|(0x4u); w8((uint32_t)(EAX + 0x10016b01), (_r)); fl_logic(_r,8); }
  /* 1000a49b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1000a49c jmp 0x1000a48c */
  goto L_1000a48c;
L_1000a49e:;
  /* 1000a49e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1000a4a2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1000a4a4 pop ecx */
  ECX = (pop32());
  /* 1000a4a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000a4a7 mov edi, 0x10016b00 */
  EDI = (0x10016b00u);
  /* 1000a4ac lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 1000a4af rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1000a4b1 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1000a4b4 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1000a4b5 lea ebx, [esi + 0x10010d90] */
  EBX = ((uint32_t)(ESI + 0x10010d90));
L_1000a4bb:;
  /* 1000a4bb cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000a4be mov ecx, ebx */
  ECX = (EBX);
  /* 1000a4c0 je 0x1000a4ee */
  if (C.zf) goto L_1000a4ee;
L_1000a4c2:;
  /* 1000a4c2 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1000a4c5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1000a4c7 je 0x1000a4ee */
  if (C.zf) goto L_1000a4ee;
  /* 1000a4c9 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1000a4cc movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 1000a4cf cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a4d1 ja 0x1000a4e7 */
  if ((!C.cf&&!C.zf)) goto L_1000a4e7;
  /* 1000a4d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1000a4d6 mov dl, byte ptr [edx + 0x10010d78] */
  DL = (r8((uint32_t)(EDX + 0x10010d78)));
L_1000a4dc:;
  /* 1000a4dc or byte ptr [eax + 0x10016b01], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10016b01)))|(DL); w8((uint32_t)(EAX + 0x10016b01), (_r)); fl_logic(_r,8); }
  /* 1000a4e2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1000a4e3 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a4e5 jbe 0x1000a4dc */
  if ((C.cf||C.zf)) goto L_1000a4dc;
L_1000a4e7:;
  /* 1000a4e7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1000a4e8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1000a4e9 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000a4ec jne 0x1000a4c2 */
  if (!C.zf) goto L_1000a4c2;
L_1000a4ee:;
  /* 1000a4ee inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1000a4f1 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000a4f4 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a4f8 jb 0x1000a4bb */
  if (C.cf) goto L_1000a4bb;
  /* 1000a4fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000a4fd mov dword ptr [0x100169fc], 1 */
  w32((uint32_t)(0x100169fc), (0x1u));
  /* 1000a507 push eax */
  push32((uint32_t)(EAX));
  /* 1000a508 mov dword ptr [0x100169e4], eax */
  w32((uint32_t)(0x100169e4), (EAX));
  /* 1000a50d call 0x1000a5e0 */
  push32(0x1000a512u); f_1000a5e0();
  /* 1000a512 lea esi, [esi + 0x10010d84] */
  ESI = ((uint32_t)(ESI + 0x10010d84));
  /* 1000a518 mov edi, 0x100169f0 */
  EDI = (0x100169f0u);
  /* 1000a51d movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1000a51e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1000a51f pop ecx */
  ECX = (pop32());
  /* 1000a520 mov dword ptr [0x10016c04], eax */
  w32((uint32_t)(0x10016c04), (EAX));
  /* 1000a525 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1000a526 jmp 0x1000a57a */
  goto L_1000a57a;
L_1000a528:;
  /* 1000a528 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1000a529 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1000a52a cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000a52e jne 0x1000a47b */
  if (!C.zf) goto L_1000a47b;
L_1000a534:;
  /* 1000a534 mov eax, esi */
  EAX = (ESI);
L_1000a536:;
  /* 1000a536 or byte ptr [eax + 0x10016b01], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10016b01)))|(0x8u); w8((uint32_t)(EAX + 0x10016b01), (_r)); fl_logic(_r,8); }
  /* 1000a53d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1000a53e cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a543 jb 0x1000a536 */
  if (C.cf) goto L_1000a536;
  /* 1000a545 push ebx */
  push32((uint32_t)(EBX));
  /* 1000a546 call 0x1000a5e0 */
  push32(0x1000a54bu); f_1000a5e0();
  /* 1000a54b pop ecx */
  ECX = (pop32());
  /* 1000a54c mov dword ptr [0x10016c04], eax */
  w32((uint32_t)(0x10016c04), (EAX));
  /* 1000a551 mov dword ptr [0x100169fc], esi */
  w32((uint32_t)(0x100169fc), (ESI));
  /* 1000a557 jmp 0x1000a560 */
  goto L_1000a560;
L_1000a559:;
  /* 1000a559 and dword ptr [0x100169fc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100169fc)))&(0x0u); w32((uint32_t)(0x100169fc), (_r)); fl_logic(_r,32); }
L_1000a560:;
  /* 1000a560 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000a562 mov edi, 0x100169f0 */
  EDI = (0x100169f0u);
  /* 1000a567 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1000a568 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1000a569 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1000a56a jmp 0x1000a57a */
  goto L_1000a57a;
L_1000a56c:;
  /* 1000a56c cmp dword ptr [0x10016820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10016820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a573 je 0x1000a584 */
  if (C.zf) goto L_1000a584;
L_1000a575:;
  /* 1000a575 call 0x1000a613 */
  push32(0x1000a57au); f_1000a613();
L_1000a57a:;
  /* 1000a57a call 0x1000a63c */
  push32(0x1000a57fu); f_1000a63c();
  /* 1000a57f jmp 0x1000a410 */
  goto L_1000a410;
L_1000a584:;
  /* 1000a584 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_1000a587:;
  /* 1000a587 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1000a589 call 0x1000a074 */
  push32(0x1000a58eu); f_1000a074();
  /* 1000a58e pop ecx */
  ECX = (pop32());
  /* 1000a58f mov eax, esi */
  EAX = (ESI);
  /* 1000a591 pop edi */
  EDI = (pop32());
  /* 1000a592 pop esi */
  ESI = (pop32());
  /* 1000a593 pop ebx */
  EBX = (pop32());
  /* 1000a594 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000a595 ret  */
  ESPCHK(0x1000a3e9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a596 @ 0x1000a596 (74 bytes, 15 insns) */
void f_1000a596(void) {
  FTRACE(0x1000a596u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000a596 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1000a59a and dword ptr [0x10016820], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10016820)))&(0x0u); w32((uint32_t)(0x10016820), (_r)); fl_logic(_r,32); }
  /* 1000a5a1 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a5a4 jne 0x1000a5b6 */
  if (!C.zf) goto L_1000a5b6;
  /* 1000a5a6 mov dword ptr [0x10016820], 1 */
  w32((uint32_t)(0x10016820), (0x1u));
  /* 1000a5b0 jmp dword ptr [0x1000e0a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1000e0a4)))); return;
L_1000a5b6:;
  /* 1000a5b6 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a5b9 jne 0x1000a5cb */
  if (!C.zf) goto L_1000a5cb;
  /* 1000a5bb mov dword ptr [0x10016820], 1 */
  w32((uint32_t)(0x10016820), (0x1u));
  /* 1000a5c5 jmp dword ptr [0x1000e0a0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1000e0a0)))); return;
L_1000a5cb:;
  /* 1000a5cb cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a5ce jne 0x1000a5df */
  if (!C.zf) goto L_1000a5df;
  /* 1000a5d0 mov eax, dword ptr [0x10016858] */
  EAX = (r32((uint32_t)(0x10016858)));
  /* 1000a5d5 mov dword ptr [0x10016820], 1 */
  w32((uint32_t)(0x10016820), (0x1u));
L_1000a5df:;
  /* 1000a5df ret  */
  ESPCHK(0x1000a596u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5e0 @ 0x1000a5e0 (51 bytes, 19 insns) */
void f_1000a5e0(void) {
  FTRACE(0x1000a5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000a5e0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1000a5e4 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000a5e9 je 0x1000a60d */
  if (C.zf) goto L_1000a60d;
  /* 1000a5eb sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000a5ee je 0x1000a607 */
  if (C.zf) goto L_1000a607;
  /* 1000a5f0 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000a5f3 je 0x1000a601 */
  if (C.zf) goto L_1000a601;
  /* 1000a5f5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1000a5f6 je 0x1000a5fb */
  if (C.zf) goto L_1000a5fb;
  /* 1000a5f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000a5fa ret  */
  ESPCHK(0x1000a5e0u, _esp0);
  ESP += 4; return;
L_1000a5fb:;
  /* 1000a5fb mov eax, 0x404 */
  EAX = (0x404u);
  /* 1000a600 ret  */
  ESPCHK(0x1000a5e0u, _esp0);
  ESP += 4; return;
L_1000a601:;
  /* 1000a601 mov eax, 0x412 */
  EAX = (0x412u);
  /* 1000a606 ret  */
  ESPCHK(0x1000a5e0u, _esp0);
  ESP += 4; return;
L_1000a607:;
  /* 1000a607 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1000a60c ret  */
  ESPCHK(0x1000a5e0u, _esp0);
  ESP += 4; return;
L_1000a60d:;
  /* 1000a60d mov eax, 0x411 */
  EAX = (0x411u);
  /* 1000a612 ret  */
  ESPCHK(0x1000a5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a613 @ 0x1000a613 (41 bytes, 17 insns) */
void f_1000a613(void) {
  FTRACE(0x1000a613u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000a613 push edi */
  push32((uint32_t)(EDI));
  /* 1000a614 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1000a616 pop ecx */
  ECX = (pop32());
  /* 1000a617 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000a619 mov edi, 0x10016b00 */
  EDI = (0x10016b00u);
  /* 1000a61e rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1000a620 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1000a621 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000a623 mov edi, 0x100169f0 */
  EDI = (0x100169f0u);
  /* 1000a628 mov dword ptr [0x100169e4], eax */
  w32((uint32_t)(0x100169e4), (EAX));
  /* 1000a62d mov dword ptr [0x100169fc], eax */
  w32((uint32_t)(0x100169fc), (EAX));
  /* 1000a632 mov dword ptr [0x10016c04], eax */
  w32((uint32_t)(0x10016c04), (EAX));
  /* 1000a637 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1000a638 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1000a639 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1000a63a pop edi */
  EDI = (pop32());
  /* 1000a63b ret  */
  ESPCHK(0x1000a613u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a63c @ 0x1000a63c (389 bytes, 124 insns) */
void f_1000a63c(void) {
  FTRACE(0x1000a63cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000a63c push ebp */
  push32((uint32_t)(EBP));
  /* 1000a63d mov ebp, esp */
  EBP = (ESP);
  /* 1000a63f sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000a645 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1000a648 push esi */
  push32((uint32_t)(ESI));
  /* 1000a649 push eax */
  push32((uint32_t)(EAX));
  /* 1000a64a push dword ptr [0x100169e4] */
  push32((uint32_t)(r32((uint32_t)(0x100169e4))));
  /* 1000a650 call dword ptr [0x1000e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e09c))), 0x1000a656u);
  /* 1000a656 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a659 jne 0x1000a775 */
  if (!C.zf) goto L_1000a775;
  /* 1000a65f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000a661 mov esi, 0x100 */
  ESI = (0x100u);
L_1000a666:;
  /* 1000a666 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 1000a66d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1000a66e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a670 jb 0x1000a666 */
  if (C.cf) goto L_1000a666;
  /* 1000a672 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 1000a675 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 1000a67c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000a67e je 0x1000a6b7 */
  if (C.zf) goto L_1000a6b7;
  /* 1000a680 push ebx */
  push32((uint32_t)(EBX));
  /* 1000a681 push edi */
  push32((uint32_t)(EDI));
  /* 1000a682 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_1000a685:;
  /* 1000a685 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 1000a688 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1000a68b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a68d ja 0x1000a6ac */
  if ((!C.cf&&!C.zf)) goto L_1000a6ac;
  /* 1000a68f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000a691 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 1000a698 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1000a699 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 1000a69e mov ebx, ecx */
  EBX = (ECX);
  /* 1000a6a0 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1000a6a3 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1000a6a5 mov ecx, ebx */
  ECX = (EBX);
  /* 1000a6a7 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1000a6aa rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_1000a6ac:;
  /* 1000a6ac inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1000a6ad inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1000a6ae mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 1000a6b1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000a6b3 jne 0x1000a685 */
  if (!C.zf) goto L_1000a685;
  /* 1000a6b5 pop edi */
  EDI = (pop32());
  /* 1000a6b6 pop ebx */
  EBX = (pop32());
L_1000a6b7:;
  /* 1000a6b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1000a6b9 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 1000a6bf push dword ptr [0x10016c04] */
  push32((uint32_t)(r32((uint32_t)(0x10016c04))));
  /* 1000a6c5 push dword ptr [0x100169e4] */
  push32((uint32_t)(r32((uint32_t)(0x100169e4))));
  /* 1000a6cb push eax */
  push32((uint32_t)(EAX));
  /* 1000a6cc lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1000a6d2 push esi */
  push32((uint32_t)(ESI));
  /* 1000a6d3 push eax */
  push32((uint32_t)(EAX));
  /* 1000a6d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000a6d6 call 0x1000c27d */
  push32(0x1000a6dbu); f_1000c27d();
  /* 1000a6db push 0 */
  push32((uint32_t)(0x0u));
  /* 1000a6dd lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 1000a6e3 push dword ptr [0x100169e4] */
  push32((uint32_t)(r32((uint32_t)(0x100169e4))));
  /* 1000a6e9 push esi */
  push32((uint32_t)(ESI));
  /* 1000a6ea push eax */
  push32((uint32_t)(EAX));
  /* 1000a6eb lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1000a6f1 push esi */
  push32((uint32_t)(ESI));
  /* 1000a6f2 push eax */
  push32((uint32_t)(EAX));
  /* 1000a6f3 push esi */
  push32((uint32_t)(ESI));
  /* 1000a6f4 push dword ptr [0x10016c04] */
  push32((uint32_t)(r32((uint32_t)(0x10016c04))));
  /* 1000a6fa call 0x1000c3c6 */
  push32(0x1000a6ffu); f_1000c3c6();
  /* 1000a6ff push 0 */
  push32((uint32_t)(0x0u));
  /* 1000a701 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 1000a707 push dword ptr [0x100169e4] */
  push32((uint32_t)(r32((uint32_t)(0x100169e4))));
  /* 1000a70d push esi */
  push32((uint32_t)(ESI));
  /* 1000a70e push eax */
  push32((uint32_t)(EAX));
  /* 1000a70f lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1000a715 push esi */
  push32((uint32_t)(ESI));
  /* 1000a716 push eax */
  push32((uint32_t)(EAX));
  /* 1000a717 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1000a71c push dword ptr [0x10016c04] */
  push32((uint32_t)(r32((uint32_t)(0x10016c04))));
  /* 1000a722 call 0x1000c3c6 */
  push32(0x1000a727u); f_1000c3c6();
  /* 1000a727 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000a72a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000a72c lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_1000a732:;
  /* 1000a732 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1000a735 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1000a738 je 0x1000a750 */
  if (C.zf) goto L_1000a750;
  /* 1000a73a or byte ptr [eax + 0x10016b01], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10016b01)))|(0x10u); w8((uint32_t)(EAX + 0x10016b01), (_r)); fl_logic(_r,8); }
  /* 1000a741 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_1000a748:;
  /* 1000a748 mov byte ptr [eax + 0x10016a00], dl */
  w8((uint32_t)(EAX + 0x10016a00), (DL));
  /* 1000a74e jmp 0x1000a76c */
  goto L_1000a76c;
L_1000a750:;
  /* 1000a750 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 1000a753 je 0x1000a765 */
  if (C.zf) goto L_1000a765;
  /* 1000a755 or byte ptr [eax + 0x10016b01], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10016b01)))|(0x20u); w8((uint32_t)(EAX + 0x10016b01), (_r)); fl_logic(_r,8); }
  /* 1000a75c mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 1000a763 jmp 0x1000a748 */
  goto L_1000a748;
L_1000a765:;
  /* 1000a765 and byte ptr [eax + 0x10016a00], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10016a00)))&(0x0u); w8((uint32_t)(EAX + 0x10016a00), (_r)); fl_logic(_r,8); }
L_1000a76c:;
  /* 1000a76c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1000a76d inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1000a76e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1000a76f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a771 jb 0x1000a732 */
  if (C.cf) goto L_1000a732;
  /* 1000a773 jmp 0x1000a7be */
  goto L_1000a7be;
L_1000a775:;
  /* 1000a775 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000a777 mov esi, 0x100 */
  ESI = (0x100u);
L_1000a77c:;
  /* 1000a77c cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a77f jb 0x1000a79a */
  if (C.cf) goto L_1000a79a;
  /* 1000a781 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a784 ja 0x1000a79a */
  if ((!C.cf&&!C.zf)) goto L_1000a79a;
  /* 1000a786 or byte ptr [eax + 0x10016b01], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10016b01)))|(0x10u); w8((uint32_t)(EAX + 0x10016b01), (_r)); fl_logic(_r,8); }
  /* 1000a78d mov cl, al */
  CL = (AL);
  /* 1000a78f add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_1000a792:;
  /* 1000a792 mov byte ptr [eax + 0x10016a00], cl */
  w8((uint32_t)(EAX + 0x10016a00), (CL));
  /* 1000a798 jmp 0x1000a7b9 */
  goto L_1000a7b9;
L_1000a79a:;
  /* 1000a79a cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a79d jb 0x1000a7b2 */
  if (C.cf) goto L_1000a7b2;
  /* 1000a79f cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a7a2 ja 0x1000a7b2 */
  if ((!C.cf&&!C.zf)) goto L_1000a7b2;
  /* 1000a7a4 or byte ptr [eax + 0x10016b01], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10016b01)))|(0x20u); w8((uint32_t)(EAX + 0x10016b01), (_r)); fl_logic(_r,8); }
  /* 1000a7ab mov cl, al */
  CL = (AL);
  /* 1000a7ad sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1000a7b0 jmp 0x1000a792 */
  goto L_1000a792;
L_1000a7b2:;
  /* 1000a7b2 and byte ptr [eax + 0x10016a00], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10016a00)))&(0x0u); w8((uint32_t)(EAX + 0x10016a00), (_r)); fl_logic(_r,8); }
L_1000a7b9:;
  /* 1000a7b9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1000a7ba cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a7bc jb 0x1000a77c */
  if (C.cf) goto L_1000a77c;
L_1000a7be:;
  /* 1000a7be pop esi */
  ESI = (pop32());
  /* 1000a7bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000a7c0 ret  */
  ESPCHK(0x1000a63cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7c1 @ 0x1000a7c1 (28 bytes, 7 insns) */
void f_1000a7c1(void) {
  FTRACE(0x1000a7c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000a7c1 cmp dword ptr [0x10017d48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10017d48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a7c8 jne 0x1000a7dc */
  if (!C.zf) goto L_1000a7dc;
  /* 1000a7ca push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1000a7cc call 0x1000a3e9 */
  push32(0x1000a7d1u); f_1000a3e9();
  /* 1000a7d1 pop ecx */
  ECX = (pop32());
  /* 1000a7d2 mov dword ptr [0x10017d48], 1 */
  w32((uint32_t)(0x10017d48), (0x1u));
L_1000a7dc:;
  /* 1000a7dc ret  */
  ESPCHK(0x1000a7c1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7e0 @ 0x1000a7e0 (664 bytes, 266 insns) [15 switch table(s)] */
void f_1000a7e0(void) {
  FTRACE(0x1000a7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000a7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1000a7e1 mov ebp, esp */
  EBP = (ESP);
  /* 1000a7e3 push edi */
  push32((uint32_t)(EDI));
  /* 1000a7e4 push esi */
  push32((uint32_t)(ESI));
  /* 1000a7e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1000a7e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1000a7eb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1000a7ee mov eax, ecx */
  EAX = (ECX);
  /* 1000a7f0 mov edx, ecx */
  EDX = (ECX);
  /* 1000a7f2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000a7f4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a7f6 jbe 0x1000a800 */
  if ((C.cf||C.zf)) goto L_1000a800;
  /* 1000a7f8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a7fa jb 0x1000a978 */
  if (C.cf) goto L_1000a978;
L_1000a800:;
  /* 1000a800 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1000a806 jne 0x1000a81c */
  if (!C.zf) goto L_1000a81c;
  /* 1000a808 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1000a80b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1000a80e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a811 jb 0x1000a83c */
  if (C.cf) goto L_1000a83c;
  /* 1000a813 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1000a815 jmp dword ptr [edx*4 + 0x1000a928] */
  switch (EDX) {
    case 0: goto L_1000a938;
    case 1: goto L_1000a940;
    case 2: goto L_1000a94c;
    case 3: goto L_1000a960;
    default: x86_unimpl("switch@0x1000a815 out of table"); return;
  }
L_1000a81c:;
  /* 1000a81c mov eax, edi */
  EAX = (EDI);
  /* 1000a81e mov edx, 3 */
  EDX = (0x3u);
  /* 1000a823 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000a826 jb 0x1000a834 */
  if (C.cf) goto L_1000a834;
  /* 1000a828 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1000a82b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000a82d jmp dword ptr [eax*4 + 0x1000a840] */
  switch (EAX) {
    case 1: goto L_1000a850;
    case 2: goto L_1000a87c;
    case 3: goto L_1000a8a0;
    default: x86_unimpl("switch@0x1000a82d out of table"); return;
  }
L_1000a834:;
  /* 1000a834 jmp dword ptr [ecx*4 + 0x1000a938] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1000a938)))); return;
  /* 1000a83b nop  */
  /* nop */
L_1000a83c:;
  /* 1000a83c jmp dword ptr [ecx*4 + 0x1000a8bc] */
  switch (ECX) {
    case 0: goto L_1000a91f;
    case 1: goto L_1000a90c;
    case 2: goto L_1000a904;
    case 3: goto L_1000a8fc;
    case 4: goto L_1000a8f4;
    case 5: goto L_1000a8ec;
    case 6: goto L_1000a8e4;
    case 7: goto L_1000a8dc;
    default: x86_unimpl("switch@0x1000a83c out of table"); return;
  }
  /* 1000a843 nop  */
  /* nop */
L_1000a850:;
  /* 1000a850 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1000a852 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1000a854 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1000a856 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1000a859 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1000a85c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1000a85f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1000a862 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1000a865 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000a868 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000a86b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a86e jb 0x1000a83c */
  if (C.cf) goto L_1000a83c;
  /* 1000a870 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1000a872 jmp dword ptr [edx*4 + 0x1000a928] */
  switch (EDX) {
    case 0: goto L_1000a938;
    case 1: goto L_1000a940;
    case 2: goto L_1000a94c;
    case 3: goto L_1000a960;
    default: x86_unimpl("switch@0x1000a872 out of table"); return;
  }
  /* 1000a879 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1000a87c:;
  /* 1000a87c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1000a87e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1000a880 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1000a882 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1000a885 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1000a888 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1000a88b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000a88e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000a891 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a894 jb 0x1000a83c */
  if (C.cf) goto L_1000a83c;
  /* 1000a896 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1000a898 jmp dword ptr [edx*4 + 0x1000a928] */
  switch (EDX) {
    case 0: goto L_1000a938;
    case 1: goto L_1000a940;
    case 2: goto L_1000a94c;
    case 3: goto L_1000a960;
    default: x86_unimpl("switch@0x1000a898 out of table"); return;
  }
  /* 1000a89f nop  */
  /* nop */
L_1000a8a0:;
  /* 1000a8a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1000a8a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1000a8a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1000a8a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1000a8a7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1000a8aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1000a8ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a8ae jb 0x1000a83c */
  if (C.cf) goto L_1000a83c;
  /* 1000a8b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1000a8b2 jmp dword ptr [edx*4 + 0x1000a928] */
  switch (EDX) {
    case 0: goto L_1000a938;
    case 1: goto L_1000a940;
    case 2: goto L_1000a94c;
    case 3: goto L_1000a960;
    default: x86_unimpl("switch@0x1000a8b2 out of table"); return;
  }
  /* 1000a8b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1000a8dc:;
  /* 1000a8dc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1000a8e0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1000a8e4:;
  /* 1000a8e4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1000a8e8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1000a8ec:;
  /* 1000a8ec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1000a8f0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1000a8f4:;
  /* 1000a8f4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1000a8f8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1000a8fc:;
  /* 1000a8fc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1000a900 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1000a904:;
  /* 1000a904 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1000a908 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1000a90c:;
  /* 1000a90c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1000a910 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1000a914 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1000a91b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000a91d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1000a91f:;
  /* 1000a91f jmp dword ptr [edx*4 + 0x1000a928] */
  switch (EDX) {
    case 0: goto L_1000a938;
    case 1: goto L_1000a940;
    case 2: goto L_1000a94c;
    case 3: goto L_1000a960;
    default: x86_unimpl("switch@0x1000a91f out of table"); return;
  }
  /* 1000a926 mov edi, edi */
  EDI = (EDI);
L_1000a938:;
  /* 1000a938 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000a93b pop esi */
  ESI = (pop32());
  /* 1000a93c pop edi */
  EDI = (pop32());
  /* 1000a93d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000a93e ret  */
  ESPCHK(0x1000a7e0u, _esp0);
  ESP += 4; return;
  /* 1000a93f nop  */
  /* nop */
L_1000a940:;
  /* 1000a940 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1000a942 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1000a944 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000a947 pop esi */
  ESI = (pop32());
  /* 1000a948 pop edi */
  EDI = (pop32());
  /* 1000a949 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000a94a ret  */
  ESPCHK(0x1000a7e0u, _esp0);
  ESP += 4; return;
  /* 1000a94b nop  */
  /* nop */
L_1000a94c:;
  /* 1000a94c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1000a94e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1000a950 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1000a953 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1000a956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000a959 pop esi */
  ESI = (pop32());
  /* 1000a95a pop edi */
  EDI = (pop32());
  /* 1000a95b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000a95c ret  */
  ESPCHK(0x1000a7e0u, _esp0);
  ESP += 4; return;
  /* 1000a95d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1000a960:;
  /* 1000a960 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1000a962 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1000a964 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1000a967 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1000a96a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1000a96d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1000a970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000a973 pop esi */
  ESI = (pop32());
  /* 1000a974 pop edi */
  EDI = (pop32());
  /* 1000a975 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000a976 ret  */
  ESPCHK(0x1000a7e0u, _esp0);
  ESP += 4; return;
  /* 1000a977 nop  */
  /* nop */
L_1000a978:;
  /* 1000a978 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1000a97c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1000a980 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1000a986 jne 0x1000a9ac */
  if (!C.zf) goto L_1000a9ac;
  /* 1000a988 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1000a98b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1000a98e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a991 jb 0x1000a9a0 */
  if (C.cf) goto L_1000a9a0;
  /* 1000a993 std  */
  C.df=1;
  /* 1000a994 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1000a996 cld  */
  C.df=0;
  /* 1000a997 jmp dword ptr [edx*4 + 0x1000aac0] */
  switch (EDX) {
    case 0: goto L_1000aad0;
    case 1: goto L_1000aad8;
    case 2: goto L_1000aae8;
    case 3: goto L_1000aafc;
    default: x86_unimpl("switch@0x1000a997 out of table"); return;
  }
  /* 1000a99e mov edi, edi */
  EDI = (EDI);
L_1000a9a0:;
  /* 1000a9a0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1000a9a2 jmp dword ptr [ecx*4 + 0x1000aa70] */
  switch (ECX) {
    case 0: goto L_1000aab7;
    default: x86_unimpl("switch@0x1000a9a2 out of table"); return;
  }
  /* 1000a9a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1000a9ac:;
  /* 1000a9ac mov eax, edi */
  EAX = (EDI);
  /* 1000a9ae mov edx, 3 */
  EDX = (0x3u);
  /* 1000a9b3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a9b6 jb 0x1000a9c4 */
  if (C.cf) goto L_1000a9c4;
  /* 1000a9b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1000a9bb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000a9bd jmp dword ptr [eax*4 + 0x1000a9c8] */
  switch (EAX) {
    case 1: goto L_1000a9d8;
    case 2: goto L_1000a9f8;
    case 3: goto L_1000aa20;
    default: x86_unimpl("switch@0x1000a9bd out of table"); return;
  }
L_1000a9c4:;
  /* 1000a9c4 jmp dword ptr [ecx*4 + 0x1000aac0] */
  switch (ECX) {
    case 0: goto L_1000aad0;
    case 1: goto L_1000aad8;
    case 2: goto L_1000aae8;
    case 3: goto L_1000aafc;
    default: x86_unimpl("switch@0x1000a9c4 out of table"); return;
  }
  /* 1000a9cb nop  */
  /* nop */
L_1000a9d8:;
  /* 1000a9d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1000a9db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1000a9dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1000a9e0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1000a9e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1000a9e4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1000a9e5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000a9e8 jb 0x1000a9a0 */
  if (C.cf) goto L_1000a9a0;
  /* 1000a9ea std  */
  C.df=1;
  /* 1000a9eb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1000a9ed cld  */
  C.df=0;
  /* 1000a9ee jmp dword ptr [edx*4 + 0x1000aac0] */
  switch (EDX) {
    case 0: goto L_1000aad0;
    case 1: goto L_1000aad8;
    case 2: goto L_1000aae8;
    case 3: goto L_1000aafc;
    default: x86_unimpl("switch@0x1000a9ee out of table"); return;
  }
  /* 1000a9f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1000a9f8:;
  /* 1000a9f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1000a9fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1000a9fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
L_1000aa00:;
  /* 1000aa00 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1000aa03 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1000aa06 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1000aa09 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000aa0c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000aa0f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000aa12 jb 0x1000a9a0 */
  if (C.cf) goto L_1000a9a0;
  /* 1000aa14 std  */
  C.df=1;
  /* 1000aa15 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1000aa17 cld  */
  C.df=0;
  /* 1000aa18 jmp dword ptr [edx*4 + 0x1000aac0] */
  switch (EDX) {
    case 0: goto L_1000aad0;
    case 1: goto L_1000aad8;
    case 2: goto L_1000aae8;
    case 3: goto L_1000aafc;
    default: x86_unimpl("switch@0x1000aa18 out of table"); return;
  }
  /* 1000aa1f nop  */
  /* nop */
L_1000aa20:;
  /* 1000aa20 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1000aa23 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1000aa25 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1000aa28 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1000aa2b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1000aa2e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1000aa31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1000aa34 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1000aa37 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000aa3a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000aa3d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000aa40 jb 0x1000a9a0 */
  if (C.cf) goto L_1000a9a0;
  /* 1000aa46 std  */
  C.df=1;
  /* 1000aa47 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1000aa49 cld  */
  C.df=0;
  /* 1000aa4a jmp dword ptr [edx*4 + 0x1000aac0] */
  switch (EDX) {
    case 0: goto L_1000aad0;
    case 1: goto L_1000aad8;
    case 2: goto L_1000aae8;
    case 3: goto L_1000aafc;
    default: x86_unimpl("switch@0x1000aa4a out of table"); return;
  }
  /* 1000aa51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1000aa54 je 0x1000aa00 */
  if (C.zf) goto L_1000aa00;
  /* 1000aa56 add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1000aa58 jl 0x1000aa04 */
  if ((C.sf!=C.of)) goto L_1000aa04;
  /* 1000aa5a add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1000aa5c test byte ptr [edx - 0x5573f000], ch */
  { uint32_t _r=(r8((uint32_t)(EDX + -0x5573f000)))&(C.c.b.h); fl_logic(_r,8); }
  /* 1000aa62 add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1000aa64 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1000aa65 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1000aa66 add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1000aa68 pushfd  */
  x86_unimpl("pushfd @ 0x1000aa68");
  /* 1000aa69 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1000aa6a add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1000aa6c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1000aa6d stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1000aa6e add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1000aa74 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1000aa78 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1000aa7c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1000aa80 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1000aa84 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1000aa88 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1000aa8c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1000aa90 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1000aa94 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1000aa98 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1000aa9c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1000aaa0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1000aaa4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1000aaa8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1000aaac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1000aab3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000aab5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1000aab7:;
  /* 1000aab7 jmp dword ptr [edx*4 + 0x1000aac0] */
  switch (EDX) {
    case 0: goto L_1000aad0;
    case 1: goto L_1000aad8;
    case 2: goto L_1000aae8;
    case 3: goto L_1000aafc;
    default: x86_unimpl("switch@0x1000aab7 out of table"); return;
  }
  /* 1000aabe mov edi, edi */
  EDI = (EDI);
L_1000aad0:;
  /* 1000aad0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000aad3 pop esi */
  ESI = (pop32());
  /* 1000aad4 pop edi */
  EDI = (pop32());
  /* 1000aad5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000aad6 ret  */
  ESPCHK(0x1000a7e0u, _esp0);
  ESP += 4; return;
  /* 1000aad7 nop  */
  /* nop */
L_1000aad8:;
  /* 1000aad8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1000aadb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1000aade mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000aae1 pop esi */
  ESI = (pop32());
  /* 1000aae2 pop edi */
  EDI = (pop32());
  /* 1000aae3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000aae4 ret  */
  ESPCHK(0x1000a7e0u, _esp0);
  ESP += 4; return;
  /* 1000aae5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1000aae8:;
  /* 1000aae8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1000aaeb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1000aaee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1000aaf1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1000aaf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000aaf7 pop esi */
  ESI = (pop32());
  /* 1000aaf8 pop edi */
  EDI = (pop32());
  /* 1000aaf9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000aafa ret  */
  ESPCHK(0x1000a7e0u, _esp0);
  ESP += 4; return;
  /* 1000aafb nop  */
  /* nop */
L_1000aafc:;
  /* 1000aafc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1000aaff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1000ab02 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1000ab05 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1000ab08 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1000ab0b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1000ab0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000ab11 pop esi */
  ESI = (pop32());
  /* 1000ab12 pop edi */
  EDI = (pop32());
  /* 1000ab13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000ab14 ret  */
  ESPCHK(0x1000a7e0u, _esp0);
  ESP += 4; return;
L_1000aa04: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1000aa04 (unresolved jump table)"); return;
}

/* FUN_1000ab15 @ 0x1000ab15 (23 bytes, 7 insns) */
void f_1000ab15(void) {
  FTRACE(0x1000ab15u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000ab15 push 0 */
  push32((uint32_t)(0x0u));
  /* 1000ab17 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1000ab1b push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1000ab1f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1000ab23 call 0x1000ab2c */
  push32(0x1000ab28u); f_1000ab2c();
  /* 1000ab28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000ab2b ret  */
  ESPCHK(0x1000ab15u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab2c @ 0x1000ab2c (517 bytes, 195 insns) */
void f_1000ab2c(void) {
  FTRACE(0x1000ab2cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000ab2c push ebp */
  push32((uint32_t)(EBP));
  /* 1000ab2d mov ebp, esp */
  EBP = (ESP);
  /* 1000ab2f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000ab32 push ebx */
  push32((uint32_t)(EBX));
  /* 1000ab33 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1000ab37 push esi */
  push32((uint32_t)(ESI));
  /* 1000ab38 push edi */
  push32((uint32_t)(EDI));
  /* 1000ab39 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1000ab3c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1000ab3e lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 1000ab41 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1000ab44:;
  /* 1000ab44 cmp dword ptr [0x10010bf0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10010bf0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000ab4b jle 0x1000ab5c */
  if ((C.zf||C.sf!=C.of)) goto L_1000ab5c;
  /* 1000ab4d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1000ab50 push 8 */
  push32((uint32_t)(0x8u));
  /* 1000ab52 push eax */
  push32((uint32_t)(EAX));
  /* 1000ab53 call 0x100093cb */
  push32(0x1000ab58u); f_100093cb();
  /* 1000ab58 pop ecx */
  ECX = (pop32());
  /* 1000ab59 pop ecx */
  ECX = (pop32());
  /* 1000ab5a jmp 0x1000ab6b */
  goto L_1000ab6b;
L_1000ab5c:;
  /* 1000ab5c mov ecx, dword ptr [0x100109e0] */
  ECX = (r32((uint32_t)(0x100109e0)));
  /* 1000ab62 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1000ab65 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1000ab68 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_1000ab6b:;
  /* 1000ab6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000ab6d je 0x1000ab74 */
  if (C.zf) goto L_1000ab74;
  /* 1000ab6f mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 1000ab71 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1000ab72 jmp 0x1000ab44 */
  goto L_1000ab44;
L_1000ab74:;
  /* 1000ab74 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000ab77 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 1000ab7a jne 0x1000ab82 */
  if (!C.zf) goto L_1000ab82;
  /* 1000ab7c or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1000ab80 jmp 0x1000ab87 */
  goto L_1000ab87;
L_1000ab82:;
  /* 1000ab82 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000ab85 jne 0x1000ab8d */
  if (!C.zf) goto L_1000ab8d;
L_1000ab87:;
  /* 1000ab87 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 1000ab89 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1000ab8a mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1000ab8d:;
  /* 1000ab8d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1000ab90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000ab92 jl 0x1000ad21 */
  if ((C.sf!=C.of)) goto L_1000ad21;
  /* 1000ab98 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000ab9b je 0x1000ad21 */
  if (C.zf) goto L_1000ad21;
  /* 1000aba1 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000aba4 jg 0x1000ad21 */
  if ((!C.zf&&C.sf==C.of)) goto L_1000ad21;
  /* 1000abaa push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1000abac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000abae pop ecx */
  ECX = (pop32());
  /* 1000abaf jne 0x1000abd5 */
  if (!C.zf) goto L_1000abd5;
  /* 1000abb1 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000abb4 je 0x1000abbf */
  if (C.zf) goto L_1000abbf;
  /* 1000abb6 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 1000abbd jmp 0x1000abf1 */
  goto L_1000abf1;
L_1000abbf:;
  /* 1000abbf mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1000abc1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000abc3 je 0x1000abd2 */
  if (C.zf) goto L_1000abd2;
  /* 1000abc5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000abc7 je 0x1000abd2 */
  if (C.zf) goto L_1000abd2;
  /* 1000abc9 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 1000abd0 jmp 0x1000abf1 */
  goto L_1000abf1;
L_1000abd2:;
  /* 1000abd2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1000abd5:;
  /* 1000abd5 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000abd8 jne 0x1000abf1 */
  if (!C.zf) goto L_1000abf1;
  /* 1000abda cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000abdd jne 0x1000abf1 */
  if (!C.zf) goto L_1000abf1;
  /* 1000abdf mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1000abe1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000abe3 je 0x1000abe9 */
  if (C.zf) goto L_1000abe9;
  /* 1000abe5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000abe7 jne 0x1000abf1 */
  if (!C.zf) goto L_1000abf1;
L_1000abe9:;
  /* 1000abe9 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 1000abec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1000abed inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1000abee mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1000abf1:;
  /* 1000abf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1000abf4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1000abf6 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1000abf9 mov edi, 0x103 */
  EDI = (0x103u);
  /* 1000abfe mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1000ac01:;
  /* 1000ac01 cmp dword ptr [0x10010bf0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10010bf0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000ac08 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1000ac0b jle 0x1000ac19 */
  if ((C.zf||C.sf!=C.of)) goto L_1000ac19;
  /* 1000ac0d push 4 */
  push32((uint32_t)(0x4u));
  /* 1000ac0f push esi */
  push32((uint32_t)(ESI));
  /* 1000ac10 call 0x100093cb */
  push32(0x1000ac15u); f_100093cb();
  /* 1000ac15 pop ecx */
  ECX = (pop32());
  /* 1000ac16 pop ecx */
  ECX = (pop32());
  /* 1000ac17 jmp 0x1000ac24 */
  goto L_1000ac24;
L_1000ac19:;
  /* 1000ac19 mov eax, dword ptr [0x100109e0] */
  EAX = (r32((uint32_t)(0x100109e0)));
  /* 1000ac1e mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 1000ac21 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1000ac24:;
  /* 1000ac24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000ac26 je 0x1000ac30 */
  if (C.zf) goto L_1000ac30;
  /* 1000ac28 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1000ac2b sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000ac2e jmp 0x1000ac62 */
  goto L_1000ac62;
L_1000ac30:;
  /* 1000ac30 cmp dword ptr [0x10010bf0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10010bf0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000ac37 jle 0x1000ac44 */
  if ((C.zf||C.sf!=C.of)) goto L_1000ac44;
  /* 1000ac39 push edi */
  push32((uint32_t)(EDI));
  /* 1000ac3a push esi */
  push32((uint32_t)(ESI));
  /* 1000ac3b call 0x100093cb */
  push32(0x1000ac40u); f_100093cb();
  /* 1000ac40 pop ecx */
  ECX = (pop32());
  /* 1000ac41 pop ecx */
  ECX = (pop32());
  /* 1000ac42 jmp 0x1000ac4f */
  goto L_1000ac4f;
L_1000ac44:;
  /* 1000ac44 mov eax, dword ptr [0x100109e0] */
  EAX = (r32((uint32_t)(0x100109e0)));
  /* 1000ac49 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 1000ac4d and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_1000ac4f:;
  /* 1000ac4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000ac51 je 0x1000ac9d */
  if (C.zf) goto L_1000ac9d;
  /* 1000ac53 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1000ac56 push eax */
  push32((uint32_t)(EAX));
  /* 1000ac57 call 0x1000d108 */
  push32(0x1000ac5cu); f_1000d108();
  /* 1000ac5c pop ecx */
  ECX = (pop32());
  /* 1000ac5d mov ecx, eax */
  ECX = (EAX);
  /* 1000ac5f sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_1000ac62:;
  /* 1000ac62 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000ac65 jae 0x1000ac9d */
  if (!C.cf) goto L_1000ac9d;
  /* 1000ac67 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 1000ac6a or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1000ac6e cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000ac71 jb 0x1000ac87 */
  if (C.cf) goto L_1000ac87;
  /* 1000ac73 jne 0x1000ac81 */
  if (!C.zf) goto L_1000ac81;
  /* 1000ac75 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1000ac78 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1000ac7a div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1000ac7d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000ac7f jbe 0x1000ac87 */
  if ((C.cf||C.zf)) goto L_1000ac87;
L_1000ac81:;
  /* 1000ac81 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1000ac85 jmp 0x1000ac90 */
  goto L_1000ac90;
L_1000ac87:;
  /* 1000ac87 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1000ac8b add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000ac8d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_1000ac90:;
  /* 1000ac90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1000ac93 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1000ac96 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1000ac98 jmp 0x1000ac01 */
  goto L_1000ac01;
L_1000ac9d:;
  /* 1000ac9d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1000aca0 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1000aca3 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1000aca6 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1000aca8 jne 0x1000acba */
  if (!C.zf) goto L_1000acba;
  /* 1000acaa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1000acac je 0x1000acb4 */
  if (C.zf) goto L_1000acb4;
  /* 1000acae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000acb1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1000acb4:;
  /* 1000acb4 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1000acb8 jmp 0x1000ad05 */
  goto L_1000ad05;
L_1000acba:;
  /* 1000acba test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 1000acbc mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 1000acc1 jne 0x1000acde */
  if (!C.zf) goto L_1000acde;
  /* 1000acc3 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 1000acc5 jne 0x1000ad05 */
  if (!C.zf) goto L_1000ad05;
  /* 1000acc7 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1000acca je 0x1000acd5 */
  if (C.zf) goto L_1000acd5;
  /* 1000accc cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000acd3 ja 0x1000acde */
  if ((!C.cf&&!C.zf)) goto L_1000acde;
L_1000acd5:;
  /* 1000acd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000acd7 jne 0x1000ad05 */
  if (!C.zf) goto L_1000ad05;
  /* 1000acd9 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000acdc jbe 0x1000ad05 */
  if ((C.cf||C.zf)) goto L_1000ad05;
L_1000acde:;
  /* 1000acde call 0x1000bf71 */
  push32(0x1000ace3u); f_1000bf71();
  /* 1000ace3 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 1000ace7 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 1000aced je 0x1000acf5 */
  if (C.zf) goto L_1000acf5;
  /* 1000acef or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1000acf3 jmp 0x1000ad05 */
  goto L_1000ad05;
L_1000acf5:;
  /* 1000acf5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1000acf8 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1000acfa neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 1000acfc sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000acfe neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1000ad00 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000ad02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1000ad05:;
  /* 1000ad05 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1000ad07 je 0x1000ad0e */
  if (C.zf) goto L_1000ad0e;
  /* 1000ad09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1000ad0c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_1000ad0e:;
  /* 1000ad0e test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 1000ad12 je 0x1000ad1c */
  if (C.zf) goto L_1000ad1c;
  /* 1000ad14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1000ad17 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1000ad19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1000ad1c:;
  /* 1000ad1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1000ad1f jmp 0x1000ad2c */
  goto L_1000ad2c;
L_1000ad21:;
  /* 1000ad21 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1000ad24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000ad26 je 0x1000ad2a */
  if (C.zf) goto L_1000ad2a;
  /* 1000ad28 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_1000ad2a:;
  /* 1000ad2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1000ad2c:;
  /* 1000ad2c pop edi */
  EDI = (pop32());
  /* 1000ad2d pop esi */
  ESI = (pop32());
  /* 1000ad2e pop ebx */
  EBX = (pop32());
  /* 1000ad2f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000ad30 ret  */
  ESPCHK(0x1000ab2cu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x1000ad50 (193 bytes, 90 insns) */
void f_1000ad50(void) {
  FTRACE(0x1000ad50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000ad50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000ad52 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1000ad56 push ebx */
  push32((uint32_t)(EBX));
  /* 1000ad57 mov ebx, eax */
  EBX = (EAX);
  /* 1000ad59 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1000ad5c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1000ad60 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1000ad66 je 0x1000ad7b */
  if (C.zf) goto L_1000ad7b;
L_1000ad68:;
  /* 1000ad68 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1000ad6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1000ad6b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000ad6d je 0x1000ad40 */
  if (C.zf) { jmp_ind(0x1000ad40u); return; }
  /* 1000ad6f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 1000ad71 je 0x1000adc4 */
  if (C.zf) goto L_1000adc4;
  /* 1000ad73 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1000ad79 jne 0x1000ad68 */
  if (!C.zf) goto L_1000ad68;
L_1000ad7b:;
  /* 1000ad7b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1000ad7d push edi */
  push32((uint32_t)(EDI));
  /* 1000ad7e mov eax, ebx */
  EAX = (EBX);
  /* 1000ad80 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 1000ad83 push esi */
  push32((uint32_t)(ESI));
  /* 1000ad84 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_1000ad86:;
  /* 1000ad86 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1000ad88 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1000ad8d mov eax, ecx */
  EAX = (ECX);
  /* 1000ad8f mov esi, edi */
  ESI = (EDI);
  /* 1000ad91 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 1000ad93 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000ad95 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000ad97 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1000ad9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1000ad9d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1000ad9f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1000ada1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000ada4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1000adaa jne 0x1000adc8 */
  if (!C.zf) goto L_1000adc8;
  /* 1000adac and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1000adb1 je 0x1000ad86 */
  if (C.zf) goto L_1000ad86;
  /* 1000adb3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1000adb8 jne 0x1000adc2 */
  if (!C.zf) goto L_1000adc2;
  /* 1000adba and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 1000adc0 jne 0x1000ad86 */
  if (!C.zf) goto L_1000ad86;
L_1000adc2:;
  /* 1000adc2 pop esi */
  ESI = (pop32());
  /* 1000adc3 pop edi */
  EDI = (pop32());
L_1000adc4:;
  /* 1000adc4 pop ebx */
  EBX = (pop32());
  /* 1000adc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000adc7 ret  */
  ESPCHK(0x1000ad50u, _esp0);
  ESP += 4; return;
L_1000adc8:;
  /* 1000adc8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1000adcb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000adcd je 0x1000ae05 */
  if (C.zf) goto L_1000ae05;
  /* 1000adcf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000add1 je 0x1000adc2 */
  if (C.zf) goto L_1000adc2;
  /* 1000add3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000add5 je 0x1000adfe */
  if (C.zf) goto L_1000adfe;
  /* 1000add7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1000add9 je 0x1000adc2 */
  if (C.zf) goto L_1000adc2;
  /* 1000addb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1000adde cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000ade0 je 0x1000adf7 */
  if (C.zf) goto L_1000adf7;
  /* 1000ade2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000ade4 je 0x1000adc2 */
  if (C.zf) goto L_1000adc2;
  /* 1000ade6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000ade8 je 0x1000adf0 */
  if (C.zf) goto L_1000adf0;
  /* 1000adea test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1000adec je 0x1000adc2 */
  if (C.zf) goto L_1000adc2;
  /* 1000adee jmp 0x1000ad86 */
  goto L_1000ad86;
L_1000adf0:;
  /* 1000adf0 pop esi */
  ESI = (pop32());
  /* 1000adf1 pop edi */
  EDI = (pop32());
  /* 1000adf2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 1000adf5 pop ebx */
  EBX = (pop32());
  /* 1000adf6 ret  */
  ESPCHK(0x1000ad50u, _esp0);
  ESP += 4; return;
L_1000adf7:;
  /* 1000adf7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1000adfa pop esi */
  ESI = (pop32());
  /* 1000adfb pop edi */
  EDI = (pop32());
  /* 1000adfc pop ebx */
  EBX = (pop32());
  /* 1000adfd ret  */
  ESPCHK(0x1000ad50u, _esp0);
  ESP += 4; return;
L_1000adfe:;
  /* 1000adfe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 1000ae01 pop esi */
  ESI = (pop32());
  /* 1000ae02 pop edi */
  EDI = (pop32());
  /* 1000ae03 pop ebx */
  EBX = (pop32());
  /* 1000ae04 ret  */
  ESPCHK(0x1000ad50u, _esp0);
  ESP += 4; return;
L_1000ae05:;
  /* 1000ae05 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 1000ae08 pop esi */
  ESI = (pop32());
  /* 1000ae09 pop edi */
  EDI = (pop32());
  /* 1000ae0a pop ebx */
  EBX = (pop32());
  /* 1000ae0b ret  */
  ESPCHK(0x1000ad50u, _esp0);
  ESP += 4; return;
  /* 1000ae0c int3  */
  x86_unimpl("int3 @ 0x1000ae0c");
  /* 1000ae0d int3  */
  x86_unimpl("int3 @ 0x1000ae0d");
  /* 1000ae0e int3  */
  x86_unimpl("int3 @ 0x1000ae0e");
  /* 1000ae0f int3  */
  x86_unimpl("int3 @ 0x1000ae0f");
}

/* _strstr @ 0x1000ae10 (128 bytes, 66 insns) */
void f_1000ae10(void) {
  FTRACE(0x1000ae10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000ae10 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1000ae14 push edi */
  push32((uint32_t)(EDI));
  /* 1000ae15 push ebx */
  push32((uint32_t)(EBX));
  /* 1000ae16 push esi */
  push32((uint32_t)(ESI));
  /* 1000ae17 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1000ae19 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1000ae1d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1000ae1f je 0x1000ae8a */
  if (C.zf) goto L_1000ae8a;
  /* 1000ae21 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 1000ae24 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1000ae26 je 0x1000ae77 */
  if (C.zf) goto L_1000ae77;
L_1000ae28:;
  /* 1000ae28 mov esi, edi */
  ESI = (EDI);
  /* 1000ae2a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1000ae2e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1000ae30 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1000ae31 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000ae33 je 0x1000ae4a */
  if (C.zf) goto L_1000ae4a;
  /* 1000ae35 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000ae37 je 0x1000ae44 */
  if (C.zf) goto L_1000ae44;
L_1000ae39:;
  /* 1000ae39 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1000ae3b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1000ae3c:;
  /* 1000ae3c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000ae3e je 0x1000ae4a */
  if (C.zf) goto L_1000ae4a;
  /* 1000ae40 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000ae42 jne 0x1000ae39 */
  if (!C.zf) goto L_1000ae39;
L_1000ae44:;
  /* 1000ae44 pop esi */
  ESI = (pop32());
  /* 1000ae45 pop ebx */
  EBX = (pop32());
  /* 1000ae46 pop edi */
  EDI = (pop32());
  /* 1000ae47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000ae49 ret  */
  ESPCHK(0x1000ae10u, _esp0);
  ESP += 4; return;
L_1000ae4a:;
  /* 1000ae4a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1000ae4c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1000ae4d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000ae4f jne 0x1000ae3c */
  if (!C.zf) goto L_1000ae3c;
  /* 1000ae51 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_1000ae54:;
  /* 1000ae54 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 1000ae57 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1000ae59 je 0x1000ae83 */
  if (C.zf) goto L_1000ae83;
  /* 1000ae5b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1000ae5d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000ae60 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000ae62 jne 0x1000ae28 */
  if (!C.zf) goto L_1000ae28;
  /* 1000ae64 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 1000ae67 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000ae69 je 0x1000ae83 */
  if (C.zf) goto L_1000ae83;
  /* 1000ae6b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 1000ae6e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000ae71 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000ae73 je 0x1000ae54 */
  if (C.zf) goto L_1000ae54;
  /* 1000ae75 jmp 0x1000ae28 */
  goto L_1000ae28;
L_1000ae77:;
  /* 1000ae77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000ae79 pop esi */
  ESI = (pop32());
  /* 1000ae7a pop ebx */
  EBX = (pop32());
  /* 1000ae7b pop edi */
  EDI = (pop32());
  /* 1000ae7c mov al, dl */
  AL = (DL);
  /* 1000ae7e jmp 0x1000ad56 */
  jmp_ind(0x1000ad56u); return;
L_1000ae83:;
  /* 1000ae83 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 1000ae86 pop esi */
  ESI = (pop32());
  /* 1000ae87 pop ebx */
  EBX = (pop32());
  /* 1000ae88 pop edi */
  EDI = (pop32());
  /* 1000ae89 ret  */
  ESPCHK(0x1000ae10u, _esp0);
  ESP += 4; return;
L_1000ae8a:;
  /* 1000ae8a mov eax, edi */
  EAX = (EDI);
  /* 1000ae8c pop esi */
  ESI = (pop32());
  /* 1000ae8d pop ebx */
  EBX = (pop32());
  /* 1000ae8e pop edi */
  EDI = (pop32());
  /* 1000ae8f ret  */
  ESPCHK(0x1000ae10u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1000ae90 (56 bytes, 31 insns) */
void f_1000ae90(void) {
  FTRACE(0x1000ae90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000ae90 push ebp */
  push32((uint32_t)(EBP));
  /* 1000ae91 mov ebp, esp */
  EBP = (ESP);
  /* 1000ae93 push edi */
  push32((uint32_t)(EDI));
  /* 1000ae94 push esi */
  push32((uint32_t)(ESI));
  /* 1000ae95 push ebx */
  push32((uint32_t)(EBX));
  /* 1000ae96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1000ae99 jecxz 0x1000aec1 */
  x86_unimpl("jecxz @ 0x1000ae99");
  /* 1000ae9b mov ebx, ecx */
  EBX = (ECX);
  /* 1000ae9d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1000aea0 mov esi, edi */
  ESI = (EDI);
  /* 1000aea2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000aea4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1000aea6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1000aea8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000aeaa mov edi, esi */
  EDI = (ESI);
  /* 1000aeac mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1000aeaf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1000aeb1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1000aeb4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1000aeb6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000aeb9 ja 0x1000aebf */
  if ((!C.cf&&!C.zf)) goto L_1000aebf;
  /* 1000aebb je 0x1000aec1 */
  if (C.zf) goto L_1000aec1;
  /* 1000aebd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1000aebe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1000aebf:;
  /* 1000aebf not ecx */
  ECX = (~(ECX));
L_1000aec1:;
  /* 1000aec1 mov eax, ecx */
  EAX = (ECX);
  /* 1000aec3 pop ebx */
  EBX = (pop32());
  /* 1000aec4 pop esi */
  ESI = (pop32());
  /* 1000aec5 pop edi */
  EDI = (pop32());
  /* 1000aec6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000aec7 ret  */
  ESPCHK(0x1000ae90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aed0 @ 0x1000aed0 (47 bytes, 17 insns) */
void f_1000aed0(void) {
  FTRACE(0x1000aed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000aed0 push ecx */
  push32((uint32_t)(ECX));
  /* 1000aed1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000aed6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1000aeda jb 0x1000aef0 */
  if (C.cf) goto L_1000aef0;
L_1000aedc:;
  /* 1000aedc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000aee2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000aee7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1000aee9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000aeee jae 0x1000aedc */
  if (!C.cf) goto L_1000aedc;
L_1000aef0:;
  /* 1000aef0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000aef2 mov eax, esp */
  EAX = (ESP);
  /* 1000aef4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1000aef6 mov esp, ecx */
  ESP = (ECX);
  /* 1000aef8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1000aefa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1000aefd push eax */
  push32((uint32_t)(EAX));
  /* 1000aefe ret  */
  ESPCHK(0x1000aed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aeff @ 0x1000aeff (72 bytes, 17 insns) */
void f_1000aeff(void) {
  FTRACE(0x1000aeffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000aeff push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1000af04 push 0 */
  push32((uint32_t)(0x0u));
  /* 1000af06 push dword ptr [0x10017c24] */
  push32((uint32_t)(r32((uint32_t)(0x10017c24))));
  /* 1000af0c call dword ptr [0x1000e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e098))), 0x1000af12u);
  /* 1000af12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000af14 mov dword ptr [0x100169dc], eax */
  w32((uint32_t)(0x100169dc), (EAX));
  /* 1000af19 jne 0x1000af1c */
  if (!C.zf) goto L_1000af1c;
  /* 1000af1b ret  */
  ESPCHK(0x1000aeffu, _esp0);
  ESP += 4; return;
L_1000af1c:;
  /* 1000af1c mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1000af20 and dword ptr [0x100169d4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100169d4)))&(0x0u); w32((uint32_t)(0x100169d4), (_r)); fl_logic(_r,32); }
  /* 1000af27 and dword ptr [0x100169d8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100169d8)))&(0x0u); w32((uint32_t)(0x100169d8), (_r)); fl_logic(_r,32); }
  /* 1000af2e push 1 */
  push32((uint32_t)(0x1u));
  /* 1000af30 mov dword ptr [0x100169d0], eax */
  w32((uint32_t)(0x100169d0), (EAX));
  /* 1000af35 mov dword ptr [0x100169e0], ecx */
  w32((uint32_t)(0x100169e0), (ECX));
  /* 1000af3b mov dword ptr [0x100169c8], 0x10 */
  w32((uint32_t)(0x100169c8), (0x10u));
  /* 1000af45 pop eax */
  EAX = (pop32());
  /* 1000af46 ret  */
  ESPCHK(0x1000aeffu, _esp0);
  ESP += 4; return;
}

/* FUN_1000af47 @ 0x1000af47 (43 bytes, 14 insns) */
void f_1000af47(void) {
  FTRACE(0x1000af47u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000af47 mov eax, dword ptr [0x100169d8] */
  EAX = (r32((uint32_t)(0x100169d8)));
  /* 1000af4c lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1000af4f mov eax, dword ptr [0x100169dc] */
  EAX = (r32((uint32_t)(0x100169dc)));
  /* 1000af54 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_1000af57:;
  /* 1000af57 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000af59 jae 0x1000af6f */
  if (!C.cf) goto L_1000af6f;
  /* 1000af5b mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1000af5f sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000af62 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000af68 jb 0x1000af71 */
  if (C.cf) goto L_1000af71;
  /* 1000af6a add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000af6d jmp 0x1000af57 */
  goto L_1000af57;
L_1000af6f:;
  /* 1000af6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1000af71:;
  /* 1000af71 ret  */
  ESPCHK(0x1000af47u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af72 @ 0x1000af72 (809 bytes, 265 insns) */
void f_1000af72(void) {
  FTRACE(0x1000af72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000af72 push ebp */
  push32((uint32_t)(EBP));
  /* 1000af73 mov ebp, esp */
  EBP = (ESP);
  /* 1000af75 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000af78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000af7b push ebx */
  push32((uint32_t)(EBX));
  /* 1000af7c push esi */
  push32((uint32_t)(ESI));
  /* 1000af7d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1000af80 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 1000af83 push edi */
  push32((uint32_t)(EDI));
  /* 1000af84 mov edi, esi */
  EDI = (ESI);
  /* 1000af86 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000af89 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000af8c shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 1000af8f mov ecx, edi */
  ECX = (EDI);
  /* 1000af91 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1000af97 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1000af9e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1000afa1 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1000afa3 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1000afa4 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 1000afa7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1000afaa jne 0x1000b296 */
  if (!C.zf) goto L_1000b296;
  /* 1000afb0 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 1000afb3 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 1000afb6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1000afb9 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 1000afbc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1000afbf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1000afc2 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1000afc5 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 1000afc8 jne 0x1000b048 */
  if (!C.zf) goto L_1000b048;
  /* 1000afca sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1000afcd dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1000afce cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000afd1 jbe 0x1000afd6 */
  if ((C.cf||C.zf)) goto L_1000afd6;
  /* 1000afd3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1000afd5 pop edx */
  EDX = (pop32());
L_1000afd6:;
  /* 1000afd6 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1000afd9 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000afdc jne 0x1000b02a */
  if (!C.zf) goto L_1000b02a;
  /* 1000afde cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000afe1 jae 0x1000b001 */
  if (!C.cf) goto L_1000b001;
  /* 1000afe3 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1000afe8 mov ecx, edx */
  ECX = (EDX);
  /* 1000afea shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1000afec lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1000aff0 not ebx */
  EBX = (~(EBX));
  /* 1000aff2 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1000aff6 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1000aff8 jne 0x1000b022 */
  if (!C.zf) goto L_1000b022;
  /* 1000affa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000affd and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1000afff jmp 0x1000b022 */
  goto L_1000b022;
L_1000b001:;
  /* 1000b001 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1000b004 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1000b009 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1000b00b lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1000b00f not ebx */
  EBX = (~(EBX));
  /* 1000b011 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1000b018 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1000b01a jne 0x1000b022 */
  if (!C.zf) goto L_1000b022;
  /* 1000b01c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000b01f and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1000b022:;
  /* 1000b022 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1000b025 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1000b028 jmp 0x1000b02d */
  goto L_1000b02d;
L_1000b02a:;
  /* 1000b02a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_1000b02d:;
  /* 1000b02d mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 1000b030 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 1000b033 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000b036 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 1000b039 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1000b03c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1000b03f mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 1000b042 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 1000b045 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_1000b048:;
  /* 1000b048 mov edx, ecx */
  EDX = (ECX);
  /* 1000b04a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1000b04d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1000b04e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b051 jbe 0x1000b056 */
  if ((C.cf||C.zf)) goto L_1000b056;
  /* 1000b053 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1000b055 pop edx */
  EDX = (pop32());
L_1000b056:;
  /* 1000b056 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1000b059 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 1000b05c mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 1000b05f jne 0x1000b0f9 */
  if (!C.zf) goto L_1000b0f9;
  /* 1000b065 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000b068 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1000b06b sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 1000b06e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1000b070 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1000b073 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1000b074 pop esi */
  ESI = (pop32());
  /* 1000b075 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b077 jbe 0x1000b07b */
  if ((C.cf||C.zf)) goto L_1000b07b;
  /* 1000b079 mov ebx, esi */
  EBX = (ESI);
L_1000b07b:;
  /* 1000b07b add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000b07e mov edx, ecx */
  EDX = (ECX);
  /* 1000b080 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1000b083 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1000b086 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1000b087 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b089 jbe 0x1000b08d */
  if ((C.cf||C.zf)) goto L_1000b08d;
  /* 1000b08b mov edx, esi */
  EDX = (ESI);
L_1000b08d:;
  /* 1000b08d cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b08f je 0x1000b0f4 */
  if (C.zf) goto L_1000b0f4;
  /* 1000b091 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1000b094 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1000b097 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b09a jne 0x1000b0dc */
  if (!C.zf) goto L_1000b0dc;
  /* 1000b09c cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b09f jae 0x1000b0bd */
  if (!C.cf) goto L_1000b0bd;
  /* 1000b0a1 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1000b0a6 mov ecx, ebx */
  ECX = (EBX);
  /* 1000b0a8 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1000b0aa not esi */
  ESI = (~(ESI));
  /* 1000b0ac and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1000b0b0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 1000b0b4 jne 0x1000b0dc */
  if (!C.zf) goto L_1000b0dc;
  /* 1000b0b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000b0b9 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1000b0bb jmp 0x1000b0dc */
  goto L_1000b0dc;
L_1000b0bd:;
  /* 1000b0bd lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 1000b0c0 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1000b0c5 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1000b0c7 not esi */
  ESI = (~(ESI));
  /* 1000b0c9 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1000b0d0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 1000b0d4 jne 0x1000b0dc */
  if (!C.zf) goto L_1000b0dc;
  /* 1000b0d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000b0d9 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1000b0dc:;
  /* 1000b0dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1000b0df mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 1000b0e2 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 1000b0e5 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 1000b0e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1000b0eb mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1000b0ee mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 1000b0f1 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_1000b0f4:;
  /* 1000b0f4 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1000b0f7 jmp 0x1000b0fc */
  goto L_1000b0fc;
L_1000b0f9:;
  /* 1000b0f9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1000b0fc:;
  /* 1000b0fc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b100 jne 0x1000b10a */
  if (!C.zf) goto L_1000b10a;
  /* 1000b102 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b104 je 0x1000b18b */
  if (C.zf) goto L_1000b18b;
L_1000b10a:;
  /* 1000b10a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1000b10d mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 1000b111 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 1000b114 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 1000b117 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 1000b11a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1000b11d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1000b120 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 1000b123 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1000b126 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b129 jne 0x1000b18b */
  if (!C.zf) goto L_1000b18b;
  /* 1000b12b mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 1000b12f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b132 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 1000b135 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1000b137 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 1000b13b jae 0x1000b162 */
  if (!C.cf) goto L_1000b162;
  /* 1000b13d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000b141 jne 0x1000b151 */
  if (!C.zf) goto L_1000b151;
  /* 1000b143 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1000b148 mov ecx, edx */
  ECX = (EDX);
  /* 1000b14a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1000b14c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000b14f or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1000b151:;
  /* 1000b151 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1000b156 mov ecx, edx */
  ECX = (EDX);
  /* 1000b158 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1000b15a lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 1000b15e or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1000b160 jmp 0x1000b18b */
  goto L_1000b18b;
L_1000b162:;
  /* 1000b162 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000b166 jne 0x1000b178 */
  if (!C.zf) goto L_1000b178;
  /* 1000b168 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1000b16b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1000b170 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1000b172 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000b175 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1000b178:;
  /* 1000b178 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1000b17b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1000b180 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1000b182 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 1000b189 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_1000b18b:;
  /* 1000b18b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1000b18e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1000b190 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 1000b194 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1000b197 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 1000b199 jne 0x1000b296 */
  if (!C.zf) goto L_1000b296;
  /* 1000b19f mov eax, dword ptr [0x100169d4] */
  EAX = (r32((uint32_t)(0x100169d4)));
  /* 1000b1a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000b1a6 je 0x1000b288 */
  if (C.zf) goto L_1000b288;
  /* 1000b1ac mov ecx, dword ptr [0x100169cc] */
  ECX = (r32((uint32_t)(0x100169cc)));
  /* 1000b1b2 mov esi, dword ptr [0x1000e07c] */
  ESI = (r32((uint32_t)(0x1000e07c)));
  /* 1000b1b8 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1000b1bb add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000b1be mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 1000b1c3 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1000b1c8 push ebx */
  push32((uint32_t)(EBX));
  /* 1000b1c9 push ecx */
  push32((uint32_t)(ECX));
  /* 1000b1ca call esi */
  call_ind((uint32_t)(ESI), 0x1000b1ccu);
  /* 1000b1cc mov ecx, dword ptr [0x100169cc] */
  ECX = (r32((uint32_t)(0x100169cc)));
  /* 1000b1d2 mov eax, dword ptr [0x100169d4] */
  EAX = (r32((uint32_t)(0x100169d4)));
  /* 1000b1d7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1000b1dc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1000b1de or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1000b1e1 mov eax, dword ptr [0x100169d4] */
  EAX = (r32((uint32_t)(0x100169d4)));
  /* 1000b1e6 mov ecx, dword ptr [0x100169cc] */
  ECX = (r32((uint32_t)(0x100169cc)));
  /* 1000b1ec mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1000b1ef and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1000b1f7 mov eax, dword ptr [0x100169d4] */
  EAX = (r32((uint32_t)(0x100169d4)));
  /* 1000b1fc mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1000b1ff dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1000b202 mov eax, dword ptr [0x100169d4] */
  EAX = (r32((uint32_t)(0x100169d4)));
  /* 1000b207 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1000b20a cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000b20e jne 0x1000b219 */
  if (!C.zf) goto L_1000b219;
  /* 1000b210 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1000b214 mov eax, dword ptr [0x100169d4] */
  EAX = (r32((uint32_t)(0x100169d4)));
L_1000b219:;
  /* 1000b219 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b21d jne 0x1000b288 */
  if (!C.zf) goto L_1000b288;
  /* 1000b21f push ebx */
  push32((uint32_t)(EBX));
  /* 1000b220 push 0 */
  push32((uint32_t)(0x0u));
  /* 1000b222 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 1000b225 call esi */
  call_ind((uint32_t)(ESI), 0x1000b227u);
  /* 1000b227 mov eax, dword ptr [0x100169d4] */
  EAX = (r32((uint32_t)(0x100169d4)));
  /* 1000b22c push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 1000b22f push 0 */
  push32((uint32_t)(0x0u));
  /* 1000b231 push dword ptr [0x10017c24] */
  push32((uint32_t)(r32((uint32_t)(0x10017c24))));
  /* 1000b237 call dword ptr [0x1000e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e080))), 0x1000b23du);
  /* 1000b23d mov eax, dword ptr [0x100169d8] */
  EAX = (r32((uint32_t)(0x100169d8)));
  /* 1000b242 mov edx, dword ptr [0x100169dc] */
  EDX = (r32((uint32_t)(0x100169dc)));
  /* 1000b248 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1000b24b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1000b24e mov ecx, eax */
  ECX = (EAX);
  /* 1000b250 mov eax, dword ptr [0x100169d4] */
  EAX = (r32((uint32_t)(0x100169d4)));
  /* 1000b255 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000b257 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 1000b25b push ecx */
  push32((uint32_t)(ECX));
  /* 1000b25c lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1000b25f push ecx */
  push32((uint32_t)(ECX));
  /* 1000b260 push eax */
  push32((uint32_t)(EAX));
  /* 1000b261 call 0x10009c40 */
  push32(0x1000b266u); f_10009c40();
  /* 1000b266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000b269 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000b26c dec dword ptr [0x100169d8] */
  { uint32_t _r=(r32((uint32_t)(0x100169d8)))-1; w32((uint32_t)(0x100169d8), (_r)); fl_dec(_r,32); }
  /* 1000b272 cmp eax, dword ptr [0x100169d4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x100169d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b278 jbe 0x1000b27e */
  if ((C.cf||C.zf)) goto L_1000b27e;
  /* 1000b27a sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_1000b27e:;
  /* 1000b27e mov eax, dword ptr [0x100169dc] */
  EAX = (r32((uint32_t)(0x100169dc)));
  /* 1000b283 mov dword ptr [0x100169d0], eax */
  w32((uint32_t)(0x100169d0), (EAX));
L_1000b288:;
  /* 1000b288 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000b28b mov dword ptr [0x100169cc], edi */
  w32((uint32_t)(0x100169cc), (EDI));
  /* 1000b291 mov dword ptr [0x100169d4], eax */
  w32((uint32_t)(0x100169d4), (EAX));
L_1000b296:;
  /* 1000b296 pop edi */
  EDI = (pop32());
  /* 1000b297 pop esi */
  ESI = (pop32());
  /* 1000b298 pop ebx */
  EBX = (pop32());
  /* 1000b299 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000b29a ret  */
  ESPCHK(0x1000af72u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b29b @ 0x1000b29b (777 bytes, 275 insns) */
void f_1000b29b(void) {
  FTRACE(0x1000b29bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000b29b push ebp */
  push32((uint32_t)(EBP));
  /* 1000b29c mov ebp, esp */
  EBP = (ESP);
  /* 1000b29e sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000b2a1 mov eax, dword ptr [0x100169d8] */
  EAX = (r32((uint32_t)(0x100169d8)));
  /* 1000b2a6 mov edx, dword ptr [0x100169dc] */
  EDX = (r32((uint32_t)(0x100169dc)));
  /* 1000b2ac push ebx */
  push32((uint32_t)(EBX));
  /* 1000b2ad push esi */
  push32((uint32_t)(ESI));
  /* 1000b2ae lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1000b2b1 push edi */
  push32((uint32_t)(EDI));
  /* 1000b2b2 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 1000b2b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000b2b8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1000b2bb lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 1000b2be and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1000b2c1 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1000b2c4 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1000b2c7 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1000b2c8 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b2cb jge 0x1000b2db */
  if ((C.sf==C.of)) goto L_1000b2db;
  /* 1000b2cd or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1000b2d0 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1000b2d2 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1000b2d6 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 1000b2d9 jmp 0x1000b2eb */
  goto L_1000b2eb;
L_1000b2db:;
  /* 1000b2db add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000b2de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1000b2e1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1000b2e3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1000b2e5 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 1000b2e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1000b2eb:;
  /* 1000b2eb mov eax, dword ptr [0x100169d0] */
  EAX = (r32((uint32_t)(0x100169d0)));
  /* 1000b2f0 mov ebx, eax */
  EBX = (EAX);
  /* 1000b2f2 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b2f4 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1000b2f7 jae 0x1000b312 */
  if (!C.cf) goto L_1000b312;
L_1000b2f9:;
  /* 1000b2f9 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1000b2fc mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1000b2fe and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1000b301 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1000b303 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1000b305 jne 0x1000b312 */
  if (!C.zf) goto L_1000b312;
  /* 1000b307 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000b30a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b30d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1000b310 jb 0x1000b2f9 */
  if (C.cf) goto L_1000b2f9;
L_1000b312:;
  /* 1000b312 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b315 jne 0x1000b390 */
  if (!C.zf) goto L_1000b390;
  /* 1000b317 mov ebx, edx */
  EBX = (EDX);
L_1000b319:;
  /* 1000b319 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b31b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1000b31e jae 0x1000b335 */
  if (!C.cf) goto L_1000b335;
  /* 1000b320 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1000b323 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1000b325 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1000b328 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1000b32a or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1000b32c jne 0x1000b333 */
  if (!C.zf) goto L_1000b333;
  /* 1000b32e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000b331 jmp 0x1000b319 */
  goto L_1000b319;
L_1000b333:;
  /* 1000b333 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1000b335:;
  /* 1000b335 jne 0x1000b390 */
  if (!C.zf) goto L_1000b390;
L_1000b337:;
  /* 1000b337 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b33a jae 0x1000b34d */
  if (!C.cf) goto L_1000b34d;
  /* 1000b33c cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b340 jne 0x1000b34a */
  if (!C.zf) goto L_1000b34a;
  /* 1000b342 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000b345 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1000b348 jmp 0x1000b337 */
  goto L_1000b337;
L_1000b34a:;
  /* 1000b34a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1000b34d:;
  /* 1000b34d jne 0x1000b375 */
  if (!C.zf) goto L_1000b375;
  /* 1000b34f mov ebx, edx */
  EBX = (EDX);
L_1000b351:;
  /* 1000b351 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b353 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1000b356 jae 0x1000b365 */
  if (!C.cf) goto L_1000b365;
  /* 1000b358 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b35c jne 0x1000b363 */
  if (!C.zf) goto L_1000b363;
  /* 1000b35e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000b361 jmp 0x1000b351 */
  goto L_1000b351;
L_1000b363:;
  /* 1000b363 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1000b365:;
  /* 1000b365 jne 0x1000b375 */
  if (!C.zf) goto L_1000b375;
  /* 1000b367 call 0x1000b5a4 */
  push32(0x1000b36cu); f_1000b5a4();
  /* 1000b36c mov ebx, eax */
  EBX = (EAX);
  /* 1000b36e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1000b370 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1000b373 je 0x1000b389 */
  if (C.zf) goto L_1000b389;
L_1000b375:;
  /* 1000b375 push ebx */
  push32((uint32_t)(EBX));
  /* 1000b376 call 0x1000b655 */
  push32(0x1000b37bu); f_1000b655();
  /* 1000b37b pop ecx */
  ECX = (pop32());
  /* 1000b37c mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1000b37f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1000b381 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 1000b384 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b387 jne 0x1000b390 */
  if (!C.zf) goto L_1000b390;
L_1000b389:;
  /* 1000b389 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000b38b jmp 0x1000b59f */
  goto L_1000b59f;
L_1000b390:;
  /* 1000b390 mov dword ptr [0x100169d0], ebx */
  w32((uint32_t)(0x100169d0), (EBX));
  /* 1000b396 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 1000b399 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1000b39b cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b39e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1000b3a1 je 0x1000b3b7 */
  if (C.zf) goto L_1000b3b7;
  /* 1000b3a3 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1000b3aa mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1000b3ae and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1000b3b1 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1000b3b3 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1000b3b5 jne 0x1000b3ee */
  if (!C.zf) goto L_1000b3ee;
L_1000b3b7:;
  /* 1000b3b7 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 1000b3bd mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 1000b3c0 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1000b3c3 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 1000b3c6 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1000b3ca lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 1000b3cd or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1000b3cf mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1000b3d2 jne 0x1000b3eb */
  if (!C.zf) goto L_1000b3eb;
L_1000b3d4:;
  /* 1000b3d4 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 1000b3da inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1000b3dd and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1000b3e0 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000b3e3 mov edi, esi */
  EDI = (ESI);
  /* 1000b3e5 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 1000b3e7 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 1000b3e9 je 0x1000b3d4 */
  if (C.zf) goto L_1000b3d4;
L_1000b3eb:;
  /* 1000b3eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1000b3ee:;
  /* 1000b3ee mov ecx, edx */
  ECX = (EDX);
  /* 1000b3f0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1000b3f2 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1000b3f8 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1000b3ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1000b402 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1000b406 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 1000b408 jne 0x1000b417 */
  if (!C.zf) goto L_1000b417;
  /* 1000b40a mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1000b411 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1000b413 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1000b416 pop edi */
  EDI = (pop32());
L_1000b417:;
  /* 1000b417 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1000b419 jl 0x1000b420 */
  if ((C.sf!=C.of)) goto L_1000b420;
  /* 1000b41b shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1000b41d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1000b41e jmp 0x1000b417 */
  goto L_1000b417;
L_1000b420:;
  /* 1000b420 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1000b423 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 1000b427 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1000b429 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000b42c mov esi, ecx */
  ESI = (ECX);
  /* 1000b42e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1000b431 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1000b434 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1000b435 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b438 jle 0x1000b43d */
  if ((C.zf||C.sf!=C.of)) goto L_1000b43d;
  /* 1000b43a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1000b43c pop esi */
  ESI = (pop32());
L_1000b43d:;
  /* 1000b43d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b43f je 0x1000b552 */
  if (C.zf) goto L_1000b552;
  /* 1000b445 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1000b448 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b44b jne 0x1000b4ae */
  if (!C.zf) goto L_1000b4ae;
  /* 1000b44d cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b450 jge 0x1000b47d */
  if ((C.sf==C.of)) goto L_1000b47d;
  /* 1000b452 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1000b457 mov ecx, edi */
  ECX = (EDI);
  /* 1000b459 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1000b45b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1000b45e lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1000b462 not ebx */
  EBX = (~(EBX));
  /* 1000b464 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1000b467 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 1000b46b mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1000b46f dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1000b471 jne 0x1000b4ab */
  if (!C.zf) goto L_1000b4ab;
  /* 1000b473 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000b476 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1000b479 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 1000b47b jmp 0x1000b4ae */
  goto L_1000b4ae;
L_1000b47d:;
  /* 1000b47d lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 1000b480 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1000b485 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1000b487 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1000b48a lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1000b48e lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1000b495 not ebx */
  EBX = (~(EBX));
  /* 1000b497 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1000b499 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1000b49b mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1000b49e jne 0x1000b4ab */
  if (!C.zf) goto L_1000b4ab;
  /* 1000b4a0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000b4a3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1000b4a6 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1000b4a9 jmp 0x1000b4ae */
  goto L_1000b4ae;
L_1000b4ab:;
  /* 1000b4ab mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1000b4ae:;
  /* 1000b4ae mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 1000b4b1 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 1000b4b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b4b8 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 1000b4bb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1000b4be mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 1000b4c1 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 1000b4c4 je 0x1000b55e */
  if (C.zf) goto L_1000b55e;
  /* 1000b4ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1000b4cd mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 1000b4d1 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 1000b4d4 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 1000b4d7 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1000b4da mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1000b4dd mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1000b4e0 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1000b4e3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1000b4e6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b4e9 jne 0x1000b54f */
  if (!C.zf) goto L_1000b54f;
  /* 1000b4eb mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1000b4ef cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b4f2 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 1000b4f5 jge 0x1000b520 */
  if ((C.sf==C.of)) goto L_1000b520;
  /* 1000b4f7 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1000b4f9 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000b4fd mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1000b501 jne 0x1000b50e */
  if (!C.zf) goto L_1000b50e;
  /* 1000b503 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1000b508 mov ecx, esi */
  ECX = (ESI);
  /* 1000b50a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1000b50c or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1000b50e:;
  /* 1000b50e mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1000b513 mov ecx, esi */
  ECX = (ESI);
  /* 1000b515 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1000b517 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1000b51a or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1000b51e jmp 0x1000b54f */
  goto L_1000b54f;
L_1000b520:;
  /* 1000b520 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1000b522 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000b526 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1000b52a jne 0x1000b539 */
  if (!C.zf) goto L_1000b539;
  /* 1000b52c lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1000b52f mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1000b534 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1000b536 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_1000b539:;
  /* 1000b539 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1000b53c lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1000b543 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1000b546 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1000b54b shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1000b54d or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1000b54f:;
  /* 1000b54f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1000b552:;
  /* 1000b552 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1000b554 je 0x1000b561 */
  if (C.zf) goto L_1000b561;
  /* 1000b556 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1000b558 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1000b55c jmp 0x1000b561 */
  goto L_1000b561;
L_1000b55e:;
  /* 1000b55e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1000b561:;
  /* 1000b561 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 1000b564 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000b566 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 1000b569 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1000b56b mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1000b56f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1000b572 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1000b574 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1000b576 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 1000b579 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1000b57b jne 0x1000b597 */
  if (!C.zf) goto L_1000b597;
  /* 1000b57d cmp ebx, dword ptr [0x100169d4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x100169d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b583 jne 0x1000b597 */
  if (!C.zf) goto L_1000b597;
  /* 1000b585 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1000b588 cmp ecx, dword ptr [0x100169cc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x100169cc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b58e jne 0x1000b597 */
  if (!C.zf) goto L_1000b597;
  /* 1000b590 and dword ptr [0x100169d4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100169d4)))&(0x0u); w32((uint32_t)(0x100169d4), (_r)); fl_logic(_r,32); }
L_1000b597:;
  /* 1000b597 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1000b59a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1000b59c lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_1000b59f:;
  /* 1000b59f pop edi */
  EDI = (pop32());
  /* 1000b5a0 pop esi */
  ESI = (pop32());
  /* 1000b5a1 pop ebx */
  EBX = (pop32());
  /* 1000b5a2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000b5a3 ret  */
  ESPCHK(0x1000b29bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5a4 @ 0x1000b5a4 (177 bytes, 53 insns) */
void f_1000b5a4(void) {
  FTRACE(0x1000b5a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000b5a4 mov eax, dword ptr [0x100169d8] */
  EAX = (r32((uint32_t)(0x100169d8)));
  /* 1000b5a9 mov ecx, dword ptr [0x100169c8] */
  ECX = (r32((uint32_t)(0x100169c8)));
  /* 1000b5af push esi */
  push32((uint32_t)(ESI));
  /* 1000b5b0 push edi */
  push32((uint32_t)(EDI));
  /* 1000b5b1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1000b5b3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b5b5 jne 0x1000b5e7 */
  if (!C.zf) goto L_1000b5e7;
  /* 1000b5b7 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 1000b5bb shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1000b5be push eax */
  push32((uint32_t)(EAX));
  /* 1000b5bf push dword ptr [0x100169dc] */
  push32((uint32_t)(r32((uint32_t)(0x100169dc))));
  /* 1000b5c5 push edi */
  push32((uint32_t)(EDI));
  /* 1000b5c6 push dword ptr [0x10017c24] */
  push32((uint32_t)(r32((uint32_t)(0x10017c24))));
  /* 1000b5cc call dword ptr [0x1000e0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e0ac))), 0x1000b5d2u);
  /* 1000b5d2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b5d4 je 0x1000b637 */
  if (C.zf) goto L_1000b637;
  /* 1000b5d6 add dword ptr [0x100169c8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x100169c8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x100169c8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1000b5dd mov dword ptr [0x100169dc], eax */
  w32((uint32_t)(0x100169dc), (EAX));
  /* 1000b5e2 mov eax, dword ptr [0x100169d8] */
  EAX = (r32((uint32_t)(0x100169d8)));
L_1000b5e7:;
  /* 1000b5e7 mov ecx, dword ptr [0x100169dc] */
  ECX = (r32((uint32_t)(0x100169dc)));
  /* 1000b5ed push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1000b5f2 push 8 */
  push32((uint32_t)(0x8u));
  /* 1000b5f4 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1000b5f7 push dword ptr [0x10017c24] */
  push32((uint32_t)(r32((uint32_t)(0x10017c24))));
  /* 1000b5fd lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1000b600 call dword ptr [0x1000e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e098))), 0x1000b606u);
  /* 1000b606 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b608 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 1000b60b je 0x1000b637 */
  if (C.zf) goto L_1000b637;
  /* 1000b60d push 4 */
  push32((uint32_t)(0x4u));
  /* 1000b60f push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1000b614 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1000b619 push edi */
  push32((uint32_t)(EDI));
  /* 1000b61a call dword ptr [0x1000e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e0a8))), 0x1000b620u);
  /* 1000b620 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b622 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1000b625 jne 0x1000b63b */
  if (!C.zf) goto L_1000b63b;
  /* 1000b627 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1000b62a push edi */
  push32((uint32_t)(EDI));
  /* 1000b62b push dword ptr [0x10017c24] */
  push32((uint32_t)(r32((uint32_t)(0x10017c24))));
  /* 1000b631 call dword ptr [0x1000e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e080))), 0x1000b637u);
L_1000b637:;
  /* 1000b637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000b639 jmp 0x1000b652 */
  goto L_1000b652;
L_1000b63b:;
  /* 1000b63b or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1000b63f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1000b641 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 1000b644 inc dword ptr [0x100169d8] */
  { uint32_t _r=(r32((uint32_t)(0x100169d8)))+1; w32((uint32_t)(0x100169d8), (_r)); fl_inc(_r,32); }
  /* 1000b64a mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1000b64d or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1000b650 mov eax, esi */
  EAX = (ESI);
L_1000b652:;
  /* 1000b652 pop edi */
  EDI = (pop32());
  /* 1000b653 pop esi */
  ESI = (pop32());
  /* 1000b654 ret  */
  ESPCHK(0x1000b5a4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b655 @ 0x1000b655 (251 bytes, 85 insns) */
void f_1000b655(void) {
  FTRACE(0x1000b655u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000b655 push ebp */
  push32((uint32_t)(EBP));
  /* 1000b656 mov ebp, esp */
  EBP = (ESP);
  /* 1000b658 push ecx */
  push32((uint32_t)(ECX));
  /* 1000b659 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000b65c push ebx */
  push32((uint32_t)(EBX));
  /* 1000b65d push esi */
  push32((uint32_t)(ESI));
  /* 1000b65e push edi */
  push32((uint32_t)(EDI));
  /* 1000b65f mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 1000b662 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 1000b665 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1000b667:;
  /* 1000b667 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000b669 jl 0x1000b670 */
  if ((C.sf!=C.of)) goto L_1000b670;
  /* 1000b66b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1000b66d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1000b66e jmp 0x1000b667 */
  goto L_1000b667;
L_1000b670:;
  /* 1000b670 mov eax, ebx */
  EAX = (EBX);
  /* 1000b672 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1000b674 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1000b67a pop edx */
  EDX = (pop32());
  /* 1000b67b lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 1000b682 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1000b685:;
  /* 1000b685 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 1000b688 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 1000b68b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000b68e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1000b68f jne 0x1000b685 */
  if (!C.zf) goto L_1000b685;
  /* 1000b691 mov edi, ebx */
  EDI = (EBX);
  /* 1000b693 push 4 */
  push32((uint32_t)(0x4u));
  /* 1000b695 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 1000b698 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000b69b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1000b6a0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1000b6a5 push edi */
  push32((uint32_t)(EDI));
  /* 1000b6a6 call dword ptr [0x1000e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e0a8))), 0x1000b6acu);
  /* 1000b6ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000b6ae jne 0x1000b6b8 */
  if (!C.zf) goto L_1000b6b8;
  /* 1000b6b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1000b6b3 jmp 0x1000b74b */
  goto L_1000b74b;
L_1000b6b8:;
  /* 1000b6b8 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 1000b6be cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b6c0 ja 0x1000b6fe */
  if ((!C.cf&&!C.zf)) goto L_1000b6fe;
  /* 1000b6c2 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_1000b6c5:;
  /* 1000b6c5 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 1000b6c9 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 1000b6d0 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 1000b6d6 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1000b6dd mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1000b6df lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 1000b6e5 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1000b6e8 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 1000b6f2 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000b6f7 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 1000b6fa cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b6fc jbe 0x1000b6c5 */
  if ((C.cf||C.zf)) goto L_1000b6c5;
L_1000b6fe:;
  /* 1000b6fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1000b701 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 1000b704 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000b709 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000b70b pop edi */
  EDI = (pop32());
  /* 1000b70c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1000b70f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1000b712 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 1000b715 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1000b718 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1000b71b and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1000b720 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 1000b727 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 1000b72a mov cl, al */
  CL = (AL);
  /* 1000b72c inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1000b72e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000b730 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000b733 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 1000b736 jne 0x1000b73b */
  if (!C.zf) goto L_1000b73b;
  /* 1000b738 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_1000b73b:;
  /* 1000b73b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1000b740 mov ecx, ebx */
  ECX = (EBX);
  /* 1000b742 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1000b744 not edx */
  EDX = (~(EDX));
  /* 1000b746 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1000b749 mov eax, ebx */
  EAX = (EBX);
L_1000b74b:;
  /* 1000b74b pop edi */
  EDI = (pop32());
  /* 1000b74c pop esi */
  ESI = (pop32());
  /* 1000b74d pop ebx */
  EBX = (pop32());
  /* 1000b74e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000b74f ret  */
  ESPCHK(0x1000b655u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b750 @ 0x1000b750 (324 bytes, 102 insns) */
void f_1000b750(void) {
  FTRACE(0x1000b750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000b750 cmp dword ptr [0x10010e80], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10010e80))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b757 push ebx */
  push32((uint32_t)(EBX));
  /* 1000b758 push ebp */
  push32((uint32_t)(EBP));
  /* 1000b759 push esi */
  push32((uint32_t)(ESI));
  /* 1000b75a push edi */
  push32((uint32_t)(EDI));
  /* 1000b75b jne 0x1000b764 */
  if (!C.zf) goto L_1000b764;
  /* 1000b75d mov esi, 0x10010e70 */
  ESI = (0x10010e70u);
  /* 1000b762 jmp 0x1000b781 */
  goto L_1000b781;
L_1000b764:;
  /* 1000b764 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 1000b769 push 0 */
  push32((uint32_t)(0x0u));
  /* 1000b76b push dword ptr [0x10017c24] */
  push32((uint32_t)(r32((uint32_t)(0x10017c24))));
  /* 1000b771 call dword ptr [0x1000e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e098))), 0x1000b777u);
  /* 1000b777 mov esi, eax */
  ESI = (EAX);
  /* 1000b779 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1000b77b je 0x1000b88d */
  if (C.zf) goto L_1000b88d;
L_1000b781:;
  /* 1000b781 mov ebp, dword ptr [0x1000e0a8] */
  EBP = (r32((uint32_t)(0x1000e0a8)));
  /* 1000b787 push 4 */
  push32((uint32_t)(0x4u));
  /* 1000b789 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1000b78e push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 1000b793 push 0 */
  push32((uint32_t)(0x0u));
  /* 1000b795 call ebp */
  call_ind((uint32_t)(EBP), 0x1000b797u);
  /* 1000b797 mov edi, eax */
  EDI = (EAX);
  /* 1000b799 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1000b79b je 0x1000b876 */
  if (C.zf) goto L_1000b876;
  /* 1000b7a1 push 4 */
  push32((uint32_t)(0x4u));
  /* 1000b7a3 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 1000b7a8 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1000b7ad push ebx */
  push32((uint32_t)(EBX));
  /* 1000b7ae push edi */
  push32((uint32_t)(EDI));
  /* 1000b7af call ebp */
  call_ind((uint32_t)(EBP), 0x1000b7b1u);
  /* 1000b7b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000b7b3 je 0x1000b868 */
  if (C.zf) goto L_1000b868;
  /* 1000b7b9 mov eax, 0x10010e70 */
  EAX = (0x10010e70u);
  /* 1000b7be cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b7c0 jne 0x1000b7e0 */
  if (!C.zf) goto L_1000b7e0;
  /* 1000b7c2 cmp dword ptr [0x10010e70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10010e70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b7c9 jne 0x1000b7d0 */
  if (!C.zf) goto L_1000b7d0;
  /* 1000b7cb mov dword ptr [0x10010e70], eax */
  w32((uint32_t)(0x10010e70), (EAX));
L_1000b7d0:;
  /* 1000b7d0 cmp dword ptr [0x10010e74], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10010e74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b7d7 jne 0x1000b7f5 */
  if (!C.zf) goto L_1000b7f5;
  /* 1000b7d9 mov dword ptr [0x10010e74], eax */
  w32((uint32_t)(0x10010e74), (EAX));
  /* 1000b7de jmp 0x1000b7f5 */
  goto L_1000b7f5;
L_1000b7e0:;
  /* 1000b7e0 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1000b7e2 mov eax, dword ptr [0x10010e74] */
  EAX = (r32((uint32_t)(0x10010e74)));
  /* 1000b7e7 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1000b7ea mov dword ptr [0x10010e74], esi */
  w32((uint32_t)(0x10010e74), (ESI));
  /* 1000b7f0 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1000b7f3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1000b7f5:;
  /* 1000b7f5 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 1000b7fb lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 1000b801 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 1000b804 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 1000b807 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 1000b80a mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 1000b80d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1000b810 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 1000b812 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_1000b817:;
  /* 1000b817 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1000b819 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b81c setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 1000b81f dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1000b820 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1000b822 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1000b823 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1000b824 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1000b826 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1000b829 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000b82c cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b832 jl 0x1000b817 */
  if ((C.sf!=C.of)) goto L_1000b817;
  /* 1000b834 push ebx */
  push32((uint32_t)(EBX));
  /* 1000b835 push 0 */
  push32((uint32_t)(0x0u));
  /* 1000b837 push edi */
  push32((uint32_t)(EDI));
  /* 1000b838 call 0x10009be0 */
  push32(0x1000b83du); f_10009be0();
  /* 1000b83d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000b840:;
  /* 1000b840 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1000b843 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000b845 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b847 jae 0x1000b864 */
  if (!C.cf) goto L_1000b864;
  /* 1000b849 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 1000b850 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 1000b853 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1000b855 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 1000b85c add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000b862 jmp 0x1000b840 */
  goto L_1000b840;
L_1000b864:;
  /* 1000b864 mov eax, esi */
  EAX = (ESI);
  /* 1000b866 jmp 0x1000b88f */
  goto L_1000b88f;
L_1000b868:;
  /* 1000b868 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1000b86d push 0 */
  push32((uint32_t)(0x0u));
  /* 1000b86f push edi */
  push32((uint32_t)(EDI));
  /* 1000b870 call dword ptr [0x1000e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e07c))), 0x1000b876u);
L_1000b876:;
  /* 1000b876 cmp esi, 0x10010e70 */
  { uint32_t _a=(ESI),_b=(0x10010e70u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b87c je 0x1000b88d */
  if (C.zf) goto L_1000b88d;
  /* 1000b87e push esi */
  push32((uint32_t)(ESI));
  /* 1000b87f push 0 */
  push32((uint32_t)(0x0u));
  /* 1000b881 push dword ptr [0x10017c24] */
  push32((uint32_t)(r32((uint32_t)(0x10017c24))));
  /* 1000b887 call dword ptr [0x1000e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e080))), 0x1000b88du);
L_1000b88d:;
  /* 1000b88d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1000b88f:;
  /* 1000b88f pop edi */
  EDI = (pop32());
  /* 1000b890 pop esi */
  ESI = (pop32());
  /* 1000b891 pop ebp */
  EBP = (pop32());
  /* 1000b892 pop ebx */
  EBX = (pop32());
  /* 1000b893 ret  */
  ESPCHK(0x1000b750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b894 @ 0x1000b894 (86 bytes, 27 insns) */
void f_1000b894(void) {
  FTRACE(0x1000b894u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000b894 push esi */
  push32((uint32_t)(ESI));
  /* 1000b895 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1000b899 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1000b89e push 0 */
  push32((uint32_t)(0x0u));
  /* 1000b8a0 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1000b8a3 call dword ptr [0x1000e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e07c))), 0x1000b8a9u);
  /* 1000b8a9 cmp dword ptr [0x10012e90], esi */
  { uint32_t _a=(r32((uint32_t)(0x10012e90))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b8af jne 0x1000b8b9 */
  if (!C.zf) goto L_1000b8b9;
  /* 1000b8b1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1000b8b4 mov dword ptr [0x10012e90], eax */
  w32((uint32_t)(0x10012e90), (EAX));
L_1000b8b9:;
  /* 1000b8b9 cmp esi, 0x10010e70 */
  { uint32_t _a=(ESI),_b=(0x10010e70u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b8bf je 0x1000b8e1 */
  if (C.zf) goto L_1000b8e1;
  /* 1000b8c1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1000b8c4 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1000b8c6 push esi */
  push32((uint32_t)(ESI));
  /* 1000b8c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1000b8c9 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1000b8cb mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1000b8cd mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1000b8d0 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1000b8d3 push dword ptr [0x10017c24] */
  push32((uint32_t)(r32((uint32_t)(0x10017c24))));
  /* 1000b8d9 call dword ptr [0x1000e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e080))), 0x1000b8dfu);
  /* 1000b8df pop esi */
  ESI = (pop32());
  /* 1000b8e0 ret  */
  ESPCHK(0x1000b894u, _esp0);
  ESP += 4; return;
L_1000b8e1:;
  /* 1000b8e1 or dword ptr [0x10010e80], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10010e80)))|(0xffffffffu); w32((uint32_t)(0x10010e80), (_r)); fl_logic(_r,32); }
  /* 1000b8e8 pop esi */
  ESI = (pop32());
  /* 1000b8e9 ret  */
  ESPCHK(0x1000b894u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8ea @ 0x1000b8ea (194 bytes, 66 insns) */
void f_1000b8ea(void) {
  FTRACE(0x1000b8eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000b8ea push ebp */
  push32((uint32_t)(EBP));
  /* 1000b8eb mov ebp, esp */
  EBP = (ESP);
  /* 1000b8ed push ecx */
  push32((uint32_t)(ECX));
  /* 1000b8ee push ebx */
  push32((uint32_t)(EBX));
  /* 1000b8ef push esi */
  push32((uint32_t)(ESI));
  /* 1000b8f0 mov esi, dword ptr [0x10010e74] */
  ESI = (r32((uint32_t)(0x10010e74)));
  /* 1000b8f6 push edi */
  push32((uint32_t)(EDI));
L_1000b8f7:;
  /* 1000b8f7 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b8fb je 0x1000b995 */
  if (C.zf) goto L_1000b995;
  /* 1000b901 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1000b905 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 1000b90b mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_1000b910:;
  /* 1000b910 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b916 jne 0x1000b951 */
  if (!C.zf) goto L_1000b951;
  /* 1000b918 mov eax, ebx */
  EAX = (EBX);
  /* 1000b91a push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1000b91f add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000b922 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1000b927 push eax */
  push32((uint32_t)(EAX));
  /* 1000b928 call dword ptr [0x1000e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e07c))), 0x1000b92eu);
  /* 1000b92e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000b930 je 0x1000b951 */
  if (C.zf) goto L_1000b951;
  /* 1000b932 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 1000b935 dec dword ptr [0x10016824] */
  { uint32_t _r=(r32((uint32_t)(0x10016824)))-1; w32((uint32_t)(0x10016824), (_r)); fl_dec(_r,32); }
  /* 1000b93b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1000b93e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000b940 je 0x1000b946 */
  if (C.zf) goto L_1000b946;
  /* 1000b942 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b944 jbe 0x1000b949 */
  if ((C.cf||C.zf)) goto L_1000b949;
L_1000b946:;
  /* 1000b946 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_1000b949:;
  /* 1000b949 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1000b94c dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 1000b94f je 0x1000b95e */
  if (C.zf) goto L_1000b95e;
L_1000b951:;
  /* 1000b951 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000b957 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000b95a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1000b95c jge 0x1000b910 */
  if ((C.sf==C.of)) goto L_1000b910;
L_1000b95e:;
  /* 1000b95e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b962 mov ecx, esi */
  ECX = (ESI);
  /* 1000b964 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 1000b967 je 0x1000b995 */
  if (C.zf) goto L_1000b995;
  /* 1000b969 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b96d jne 0x1000b995 */
  if (!C.zf) goto L_1000b995;
  /* 1000b96f push 1 */
  push32((uint32_t)(0x1u));
  /* 1000b971 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 1000b974 pop edx */
  EDX = (pop32());
L_1000b975:;
  /* 1000b975 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b978 jne 0x1000b986 */
  if (!C.zf) goto L_1000b986;
  /* 1000b97a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1000b97b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000b97e cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b984 jl 0x1000b975 */
  if ((C.sf!=C.of)) goto L_1000b975;
L_1000b986:;
  /* 1000b986 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b98c jne 0x1000b995 */
  if (!C.zf) goto L_1000b995;
  /* 1000b98e push ecx */
  push32((uint32_t)(ECX));
  /* 1000b98f call 0x1000b894 */
  push32(0x1000b994u); f_1000b894();
  /* 1000b994 pop ecx */
  ECX = (pop32());
L_1000b995:;
  /* 1000b995 cmp esi, dword ptr [0x10010e74] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10010e74))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b99b je 0x1000b9a7 */
  if (C.zf) goto L_1000b9a7;
  /* 1000b99d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b9a1 jg 0x1000b8f7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1000b8f7;
L_1000b9a7:;
  /* 1000b9a7 pop edi */
  EDI = (pop32());
  /* 1000b9a8 pop esi */
  ESI = (pop32());
  /* 1000b9a9 pop ebx */
  EBX = (pop32());
  /* 1000b9aa leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000b9ab ret  */
  ESPCHK(0x1000b8eau, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9ac @ 0x1000b9ac (87 bytes, 34 insns) */
void f_1000b9ac(void) {
  FTRACE(0x1000b9acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000b9ac mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1000b9b0 mov edx, 0x10010e70 */
  EDX = (0x10010e70u);
  /* 1000b9b5 push esi */
  push32((uint32_t)(ESI));
  /* 1000b9b6 mov ecx, edx */
  ECX = (EDX);
L_1000b9b8:;
  /* 1000b9b8 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b9bb jbe 0x1000b9c2 */
  if ((C.cf||C.zf)) goto L_1000b9c2;
  /* 1000b9bd cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b9c0 jb 0x1000b9ca */
  if (C.cf) goto L_1000b9ca;
L_1000b9c2:;
  /* 1000b9c2 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1000b9c4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b9c6 je 0x1000b9ff */
  if (C.zf) goto L_1000b9ff;
  /* 1000b9c8 jmp 0x1000b9b8 */
  goto L_1000b9b8;
L_1000b9ca:;
  /* 1000b9ca test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 1000b9cc jne 0x1000b9ff */
  if (!C.zf) goto L_1000b9ff;
  /* 1000b9ce mov esi, eax */
  ESI = (EAX);
  /* 1000b9d0 mov edx, 0x100 */
  EDX = (0x100u);
  /* 1000b9d5 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 1000b9db cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000b9dd jb 0x1000b9ff */
  if (C.cf) goto L_1000b9ff;
  /* 1000b9df mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1000b9e3 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1000b9e5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 1000b9e9 mov ecx, eax */
  ECX = (EAX);
  /* 1000b9eb and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 1000b9f0 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000b9f2 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1000b9f4 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000b9f6 pop esi */
  ESI = (pop32());
  /* 1000b9f7 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1000b9fa lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 1000b9fe ret  */
  ESPCHK(0x1000b9acu, _esp0);
  ESP += 4; return;
L_1000b9ff:;
  /* 1000b9ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000ba01 pop esi */
  ESI = (pop32());
  /* 1000ba02 ret  */
  ESPCHK(0x1000b9acu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba03 @ 0x1000ba03 (69 bytes, 19 insns) */
void f_1000ba03(void) {
  FTRACE(0x1000ba03u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000ba03 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1000ba07 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1000ba0b sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000ba0e sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 1000ba11 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 1000ba15 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1000ba19 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1000ba1c add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1000ba1e and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1000ba21 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000ba27 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 1000ba2e jne 0x1000ba47 */
  if (!C.zf) goto L_1000ba47;
  /* 1000ba30 inc dword ptr [0x10016824] */
  { uint32_t _r=(r32((uint32_t)(0x10016824)))+1; w32((uint32_t)(0x10016824), (_r)); fl_inc(_r,32); }
  /* 1000ba36 cmp dword ptr [0x10016824], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10016824))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000ba3d jne 0x1000ba47 */
  if (!C.zf) goto L_1000ba47;
  /* 1000ba3f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1000ba41 call 0x1000b8ea */
  push32(0x1000ba46u); f_1000b8ea();
  /* 1000ba46 pop ecx */
  ECX = (pop32());
L_1000ba47:;
  /* 1000ba47 ret  */
  ESPCHK(0x1000ba03u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba48 @ 0x1000ba48 (520 bytes, 180 insns) */
void f_1000ba48(void) {
  FTRACE(0x1000ba48u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000ba48 push ebp */
  push32((uint32_t)(EBP));
  /* 1000ba49 mov ebp, esp */
  EBP = (ESP);
  /* 1000ba4b push ecx */
  push32((uint32_t)(ECX));
  /* 1000ba4c push ecx */
  push32((uint32_t)(ECX));
  /* 1000ba4d push ebx */
  push32((uint32_t)(EBX));
  /* 1000ba4e push esi */
  push32((uint32_t)(ESI));
  /* 1000ba4f mov esi, dword ptr [0x10012e90] */
  ESI = (r32((uint32_t)(0x10012e90)));
  /* 1000ba55 push edi */
  push32((uint32_t)(EDI));
L_1000ba56:;
  /* 1000ba56 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 1000ba59 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000ba5c je 0x1000bb01 */
  if (C.zf) goto L_1000bb01;
  /* 1000ba62 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 1000ba65 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 1000ba6b mov eax, edi */
  EAX = (EDI);
  /* 1000ba6d sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000ba6f sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000ba72 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 1000ba75 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 1000ba78 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000ba7a cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000ba7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1000ba7f jae 0x1000babb */
  if (!C.cf) goto L_1000babb;
L_1000ba81:;
  /* 1000ba81 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 1000ba83 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000ba86 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000ba88 jl 0x1000baa4 */
  if ((C.sf!=C.of)) goto L_1000baa4;
  /* 1000ba8a cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000ba8d jbe 0x1000baa4 */
  if ((C.cf||C.zf)) goto L_1000baa4;
  /* 1000ba8f push ebx */
  push32((uint32_t)(EBX));
  /* 1000ba90 push ecx */
  push32((uint32_t)(ECX));
  /* 1000ba91 push eax */
  push32((uint32_t)(EAX));
  /* 1000ba92 call 0x1000bc50 */
  push32(0x1000ba97u); f_1000bc50();
  /* 1000ba97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000ba9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000ba9c jne 0x1000bb13 */
  if (!C.zf) goto L_1000bb13;
  /* 1000ba9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1000baa1 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_1000baa4:;
  /* 1000baa4 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000baa7 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 1000baad add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000bab2 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bab4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1000bab7 jb 0x1000ba81 */
  if (C.cf) goto L_1000ba81;
  /* 1000bab9 jmp 0x1000babe */
  goto L_1000babe;
L_1000babb:;
  /* 1000babb mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1000babe:;
  /* 1000babe mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1000bac1 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 1000bac4 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 1000bac7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1000baca cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bacc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1000bacf jae 0x1000bb04 */
  if (!C.cf) goto L_1000bb04;
L_1000bad1:;
  /* 1000bad1 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1000bad3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bad5 jl 0x1000baf0 */
  if ((C.sf!=C.of)) goto L_1000baf0;
  /* 1000bad7 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bada jbe 0x1000baf0 */
  if ((C.cf||C.zf)) goto L_1000baf0;
  /* 1000badc push ebx */
  push32((uint32_t)(EBX));
  /* 1000badd push eax */
  push32((uint32_t)(EAX));
  /* 1000bade push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 1000bae1 call 0x1000bc50 */
  push32(0x1000bae6u); f_1000bc50();
  /* 1000bae6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000bae9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000baeb jne 0x1000bb13 */
  if (!C.zf) goto L_1000bb13;
  /* 1000baed mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_1000baf0:;
  /* 1000baf0 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1000baf7 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000bafa cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bafd jb 0x1000bad1 */
  if (C.cf) goto L_1000bad1;
  /* 1000baff jmp 0x1000bb04 */
  goto L_1000bb04;
L_1000bb01:;
  /* 1000bb01 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1000bb04:;
  /* 1000bb04 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 1000bb06 cmp esi, dword ptr [0x10012e90] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10012e90))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bb0c je 0x1000bb23 */
  if (C.zf) goto L_1000bb23;
  /* 1000bb0e jmp 0x1000ba56 */
  goto L_1000ba56;
L_1000bb13:;
  /* 1000bb13 mov dword ptr [0x10012e90], esi */
  w32((uint32_t)(0x10012e90), (ESI));
  /* 1000bb19 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1000bb1b mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 1000bb1e jmp 0x1000bc4b */
  goto L_1000bc4b;
L_1000bb23:;
  /* 1000bb23 mov eax, 0x10010e70 */
  EAX = (0x10010e70u);
  /* 1000bb28 mov edi, eax */
  EDI = (EAX);
L_1000bb2a:;
  /* 1000bb2a cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bb2e je 0x1000bb36 */
  if (C.zf) goto L_1000bb36;
  /* 1000bb30 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bb34 jne 0x1000bb42 */
  if (!C.zf) goto L_1000bb42;
L_1000bb36:;
  /* 1000bb36 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 1000bb38 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bb3a je 0x1000bc17 */
  if (C.zf) goto L_1000bc17;
  /* 1000bb40 jmp 0x1000bb2a */
  goto L_1000bb2a;
L_1000bb42:;
  /* 1000bb42 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 1000bb45 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1000bb49 mov esi, ebx */
  ESI = (EBX);
  /* 1000bb4b mov eax, ebx */
  EAX = (EBX);
  /* 1000bb4d sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000bb4f sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000bb52 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 1000bb55 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 1000bb58 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000bb5b cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bb5e jne 0x1000bb71 */
  if (!C.zf) goto L_1000bb71;
L_1000bb60:;
  /* 1000bb60 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bb64 jge 0x1000bb71 */
  if ((C.sf==C.of)) goto L_1000bb71;
  /* 1000bb66 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000bb69 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1000bb6c cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bb6f je 0x1000bb60 */
  if (C.zf) goto L_1000bb60;
L_1000bb71:;
  /* 1000bb71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1000bb74 push 4 */
  push32((uint32_t)(0x4u));
  /* 1000bb76 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 1000bb79 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1000bb7e push eax */
  push32((uint32_t)(EAX));
  /* 1000bb7f push esi */
  push32((uint32_t)(ESI));
  /* 1000bb80 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1000bb83 call dword ptr [0x1000e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e0a8))), 0x1000bb89u);
  /* 1000bb89 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bb8b jne 0x1000bc49 */
  if (!C.zf) goto L_1000bc49;
  /* 1000bb91 push 0 */
  push32((uint32_t)(0x0u));
  /* 1000bb93 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 1000bb96 push esi */
  push32((uint32_t)(ESI));
  /* 1000bb97 call 0x10009be0 */
  push32(0x1000bb9cu); f_10009be0();
  /* 1000bb9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1000bb9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000bba2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1000bba4 mov ecx, ebx */
  ECX = (EBX);
  /* 1000bba6 jle 0x1000bbd8 */
  if ((C.zf||C.sf!=C.of)) goto L_1000bbd8;
  /* 1000bba8 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1000bbab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1000bbae:;
  /* 1000bbae or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 1000bbb5 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 1000bbb8 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 1000bbbb mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1000bbc0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1000bbc2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1000bbc4 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 1000bbcb add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000bbd0 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000bbd3 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1000bbd6 jne 0x1000bbae */
  if (!C.zf) goto L_1000bbae;
L_1000bbd8:;
  /* 1000bbd8 mov dword ptr [0x10012e90], edi */
  w32((uint32_t)(0x10012e90), (EDI));
  /* 1000bbde lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_1000bbe4:;
  /* 1000bbe4 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bbe6 jae 0x1000bbf4 */
  if (!C.cf) goto L_1000bbf4;
  /* 1000bbe8 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bbeb je 0x1000bbf2 */
  if (C.zf) goto L_1000bbf2;
  /* 1000bbed add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000bbf0 jmp 0x1000bbe4 */
  goto L_1000bbe4;
L_1000bbf2:;
  /* 1000bbf2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1000bbf4:;
  /* 1000bbf4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000bbf6 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 1000bbf8 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 1000bbfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000bbfe mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 1000bc01 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 1000bc04 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1000bc06 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1000bc09 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 1000bc0d lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 1000bc13 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1000bc15 jmp 0x1000bc4b */
  goto L_1000bc4b;
L_1000bc17:;
  /* 1000bc17 call 0x1000b750 */
  push32(0x1000bc1cu); f_1000b750();
  /* 1000bc1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000bc1e je 0x1000bc49 */
  if (C.zf) goto L_1000bc49;
  /* 1000bc20 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1000bc23 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 1000bc26 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 1000bc2a mov dword ptr [0x10012e90], eax */
  w32((uint32_t)(0x10012e90), (EAX));
  /* 1000bc2f mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1000bc31 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1000bc36 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000bc38 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1000bc3b movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 1000bc3e sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1000bc41 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 1000bc47 jmp 0x1000bc4b */
  goto L_1000bc4b;
L_1000bc49:;
  /* 1000bc49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1000bc4b:;
  /* 1000bc4b pop edi */
  EDI = (pop32());
  /* 1000bc4c pop esi */
  ESI = (pop32());
  /* 1000bc4d pop ebx */
  EBX = (pop32());
  /* 1000bc4e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000bc4f ret  */
  ESPCHK(0x1000ba48u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc50 @ 0x1000bc50 (292 bytes, 125 insns) */
void f_1000bc50(void) {
  FTRACE(0x1000bc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000bc50 push ebp */
  push32((uint32_t)(EBP));
  /* 1000bc51 mov ebp, esp */
  EBP = (ESP);
  /* 1000bc53 push ecx */
  push32((uint32_t)(ECX));
  /* 1000bc54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000bc57 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1000bc5a push ebx */
  push32((uint32_t)(EBX));
  /* 1000bc5b push esi */
  push32((uint32_t)(ESI));
  /* 1000bc5c mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1000bc5f push edi */
  push32((uint32_t)(EDI));
  /* 1000bc60 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 1000bc62 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 1000bc68 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bc6a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1000bc6d mov eax, edi */
  EAX = (EDI);
  /* 1000bc6f mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1000bc72 jb 0x1000bc95 */
  if (C.cf) goto L_1000bc95;
  /* 1000bc74 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 1000bc77 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1000bc79 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bc7b jae 0x1000bc84 */
  if (!C.cf) goto L_1000bc84;
  /* 1000bc7d add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1000bc7f sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1000bc82 jmp 0x1000bc8d */
  goto L_1000bc8d;
L_1000bc84:;
  /* 1000bc84 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1000bc88 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 1000bc8b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1000bc8d:;
  /* 1000bc8d lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 1000bc90 jmp 0x1000bd63 */
  goto L_1000bd63;
L_1000bc95:;
  /* 1000bc95 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000bc97 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000bc9a je 0x1000bc9e */
  if (C.zf) goto L_1000bc9e;
  /* 1000bc9c mov eax, esi */
  EAX = (ESI);
L_1000bc9e:;
  /* 1000bc9e lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 1000bca1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bca3 jae 0x1000bce8 */
  if (!C.cf) goto L_1000bce8;
L_1000bca5:;
  /* 1000bca5 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1000bca7 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 1000bca9 jne 0x1000bcdb */
  if (!C.zf) goto L_1000bcdb;
  /* 1000bcab push 1 */
  push32((uint32_t)(0x1u));
  /* 1000bcad lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 1000bcb0 pop esi */
  ESI = (pop32());
L_1000bcb1:;
  /* 1000bcb1 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000bcb4 jne 0x1000bcba */
  if (!C.zf) goto L_1000bcba;
  /* 1000bcb6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1000bcb7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1000bcb8 jmp 0x1000bcb1 */
  goto L_1000bcb1;
L_1000bcba:;
  /* 1000bcba cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bcbc jae 0x1000bd0c */
  if (!C.cf) goto L_1000bd0c;
  /* 1000bcbe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bcc1 jne 0x1000bcc8 */
  if (!C.zf) goto L_1000bcc8;
  /* 1000bcc3 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1000bcc6 jmp 0x1000bcd4 */
  goto L_1000bcd4;
L_1000bcc8:;
  /* 1000bcc8 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1000bccb cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bcce jb 0x1000bd6d */
  if (C.cf) goto L_1000bd6d;
L_1000bcd4:;
  /* 1000bcd4 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 1000bcd7 mov eax, ebx */
  EAX = (EBX);
  /* 1000bcd9 jmp 0x1000bce0 */
  goto L_1000bce0;
L_1000bcdb:;
  /* 1000bcdb movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1000bcde add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1000bce0:;
  /* 1000bce0 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 1000bce3 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bce6 jb 0x1000bca5 */
  if (C.cf) goto L_1000bca5;
L_1000bce8:;
  /* 1000bce8 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_1000bceb:;
  /* 1000bceb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bced jae 0x1000bd6d */
  if (!C.cf) goto L_1000bd6d;
  /* 1000bcef lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 1000bcf2 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bcf5 jae 0x1000bd6d */
  if (!C.cf) goto L_1000bd6d;
  /* 1000bcf7 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1000bcf9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000bcfb jne 0x1000bd3d */
  if (!C.zf) goto L_1000bd3d;
  /* 1000bcfd push 1 */
  push32((uint32_t)(0x1u));
  /* 1000bcff lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 1000bd02 pop eax */
  EAX = (pop32());
L_1000bd03:;
  /* 1000bd03 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000bd06 jne 0x1000bd2d */
  if (!C.zf) goto L_1000bd2d;
  /* 1000bd08 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1000bd09 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1000bd0a jmp 0x1000bd03 */
  goto L_1000bd03;
L_1000bd0c:;
  /* 1000bd0c lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 1000bd0f cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bd12 jae 0x1000bd1d */
  if (!C.cf) goto L_1000bd1d;
  /* 1000bd14 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000bd16 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1000bd18 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1000bd1b jmp 0x1000bd26 */
  goto L_1000bd26;
L_1000bd1d:;
  /* 1000bd1d and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1000bd21 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 1000bd24 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_1000bd26:;
  /* 1000bd26 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1000bd28 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000bd2b jmp 0x1000bd63 */
  goto L_1000bd63;
L_1000bd2d:;
  /* 1000bd2d cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bd2f jae 0x1000bd44 */
  if (!C.cf) goto L_1000bd44;
  /* 1000bd31 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1000bd34 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bd37 jb 0x1000bd6d */
  if (C.cf) goto L_1000bd6d;
  /* 1000bd39 mov esi, ebx */
  ESI = (EBX);
  /* 1000bd3b jmp 0x1000bceb */
  goto L_1000bceb;
L_1000bd3d:;
  /* 1000bd3d movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1000bd40 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000bd42 jmp 0x1000bceb */
  goto L_1000bceb;
L_1000bd44:;
  /* 1000bd44 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 1000bd47 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bd4a jae 0x1000bd55 */
  if (!C.cf) goto L_1000bd55;
  /* 1000bd4c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000bd4e mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1000bd50 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1000bd53 jmp 0x1000bd5e */
  goto L_1000bd5e;
L_1000bd55:;
  /* 1000bd55 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1000bd59 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 1000bd5c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1000bd5e:;
  /* 1000bd5e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1000bd60 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_1000bd63:;
  /* 1000bd63 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1000bd66 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1000bd69 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000bd6b jmp 0x1000bd6f */
  goto L_1000bd6f;
L_1000bd6d:;
  /* 1000bd6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1000bd6f:;
  /* 1000bd6f pop edi */
  EDI = (pop32());
  /* 1000bd70 pop esi */
  ESI = (pop32());
  /* 1000bd71 pop ebx */
  EBX = (pop32());
  /* 1000bd72 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000bd73 ret  */
  ESPCHK(0x1000bc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd74 @ 0x1000bd74 (137 bytes, 50 insns) */
void f_1000bd74(void) {
  FTRACE(0x1000bd74u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000bd74 push ebx */
  push32((uint32_t)(EBX));
  /* 1000bd75 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1000bd77 cmp dword ptr [0x10016828], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10016828))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bd7d push esi */
  push32((uint32_t)(ESI));
  /* 1000bd7e push edi */
  push32((uint32_t)(EDI));
  /* 1000bd7f jne 0x1000bdc3 */
  if (!C.zf) goto L_1000bdc3;
  /* 1000bd81 push 0x1000e548 */
  push32((uint32_t)(0x1000e548u));
  /* 1000bd86 call dword ptr [0x1000e0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e0b0))), 0x1000bd8cu);
  /* 1000bd8c mov edi, eax */
  EDI = (EAX);
  /* 1000bd8e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bd90 je 0x1000bdf9 */
  if (C.zf) goto L_1000bdf9;
  /* 1000bd92 mov esi, dword ptr [0x1000e088] */
  ESI = (r32((uint32_t)(0x1000e088)));
  /* 1000bd98 push 0x1000e53c */
  push32((uint32_t)(0x1000e53cu));
  /* 1000bd9d push edi */
  push32((uint32_t)(EDI));
  /* 1000bd9e call esi */
  call_ind((uint32_t)(ESI), 0x1000bda0u);
  /* 1000bda0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000bda2 mov dword ptr [0x10016828], eax */
  w32((uint32_t)(0x10016828), (EAX));
  /* 1000bda7 je 0x1000bdf9 */
  if (C.zf) goto L_1000bdf9;
  /* 1000bda9 push 0x1000e52c */
  push32((uint32_t)(0x1000e52cu));
  /* 1000bdae push edi */
  push32((uint32_t)(EDI));
  /* 1000bdaf call esi */
  call_ind((uint32_t)(ESI), 0x1000bdb1u);
  /* 1000bdb1 push 0x1000e518 */
  push32((uint32_t)(0x1000e518u));
  /* 1000bdb6 push edi */
  push32((uint32_t)(EDI));
  /* 1000bdb7 mov dword ptr [0x1001682c], eax */
  w32((uint32_t)(0x1001682c), (EAX));
  /* 1000bdbc call esi */
  call_ind((uint32_t)(ESI), 0x1000bdbeu);
  /* 1000bdbe mov dword ptr [0x10016830], eax */
  w32((uint32_t)(0x10016830), (EAX));
L_1000bdc3:;
  /* 1000bdc3 mov eax, dword ptr [0x1001682c] */
  EAX = (r32((uint32_t)(0x1001682c)));
  /* 1000bdc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000bdca je 0x1000bde2 */
  if (C.zf) goto L_1000bde2;
  /* 1000bdcc call eax */
  call_ind((uint32_t)(EAX), 0x1000bdceu);
  /* 1000bdce mov ebx, eax */
  EBX = (EAX);
  /* 1000bdd0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1000bdd2 je 0x1000bde2 */
  if (C.zf) goto L_1000bde2;
  /* 1000bdd4 mov eax, dword ptr [0x10016830] */
  EAX = (r32((uint32_t)(0x10016830)));
  /* 1000bdd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000bddb je 0x1000bde2 */
  if (C.zf) goto L_1000bde2;
  /* 1000bddd push ebx */
  push32((uint32_t)(EBX));
  /* 1000bdde call eax */
  call_ind((uint32_t)(EAX), 0x1000bde0u);
  /* 1000bde0 mov ebx, eax */
  EBX = (EAX);
L_1000bde2:;
  /* 1000bde2 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1000bde6 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1000bdea push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1000bdee push ebx */
  push32((uint32_t)(EBX));
  /* 1000bdef call dword ptr [0x10016828] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016828))), 0x1000bdf5u);
L_1000bdf5:;
  /* 1000bdf5 pop edi */
  EDI = (pop32());
  /* 1000bdf6 pop esi */
  ESI = (pop32());
  /* 1000bdf7 pop ebx */
  EBX = (pop32());
  /* 1000bdf8 ret  */
  ESPCHK(0x1000bd74u, _esp0);
  ESP += 4; return;
L_1000bdf9:;
  /* 1000bdf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000bdfb jmp 0x1000bdf5 */
  goto L_1000bdf5;
}

/* _strncpy @ 0x1000be00 (254 bytes, 109 insns) */
void f_1000be00(void) {
  FTRACE(0x1000be00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000be00 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1000be04 push edi */
  push32((uint32_t)(EDI));
  /* 1000be05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1000be07 je 0x1000be83 */
  if (C.zf) goto L_1000be83;
  /* 1000be09 push esi */
  push32((uint32_t)(ESI));
  /* 1000be0a push ebx */
  push32((uint32_t)(EBX));
  /* 1000be0b mov ebx, ecx */
  EBX = (ECX);
  /* 1000be0d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1000be11 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1000be17 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1000be1b jne 0x1000be24 */
  if (!C.zf) goto L_1000be24;
  /* 1000be1d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1000be20 jne 0x1000be91 */
  if (!C.zf) goto L_1000be91;
  /* 1000be22 jmp 0x1000be45 */
  goto L_1000be45;
L_1000be24:;
  /* 1000be24 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1000be26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1000be27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1000be29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1000be2a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1000be2b je 0x1000be52 */
  if (C.zf) goto L_1000be52;
  /* 1000be2d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000be2f je 0x1000be5a */
  if (C.zf) goto L_1000be5a;
  /* 1000be31 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1000be37 jne 0x1000be24 */
  if (!C.zf) goto L_1000be24;
  /* 1000be39 mov ebx, ecx */
  EBX = (ECX);
  /* 1000be3b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1000be3e jne 0x1000be91 */
  if (!C.zf) goto L_1000be91;
L_1000be40:;
  /* 1000be40 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1000be43 je 0x1000be52 */
  if (C.zf) goto L_1000be52;
L_1000be45:;
  /* 1000be45 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1000be47 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1000be48 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1000be4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1000be4b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000be4d je 0x1000be7e */
  if (C.zf) goto L_1000be7e;
  /* 1000be4f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1000be50 jne 0x1000be45 */
  if (!C.zf) goto L_1000be45;
L_1000be52:;
  /* 1000be52 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1000be56 pop ebx */
  EBX = (pop32());
  /* 1000be57 pop esi */
  ESI = (pop32());
  /* 1000be58 pop edi */
  EDI = (pop32());
  /* 1000be59 ret  */
  ESPCHK(0x1000be00u, _esp0);
  ESP += 4; return;
L_1000be5a:;
  /* 1000be5a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1000be60 je 0x1000be74 */
  if (C.zf) goto L_1000be74;
L_1000be62:;
  /* 1000be62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1000be64 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1000be65 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1000be66 je 0x1000bef6 */
  if (C.zf) goto L_1000bef6;
  /* 1000be6c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1000be72 jne 0x1000be62 */
  if (!C.zf) goto L_1000be62;
L_1000be74:;
  /* 1000be74 mov ebx, ecx */
  EBX = (ECX);
  /* 1000be76 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1000be79 jne 0x1000bee7 */
  if (!C.zf) goto L_1000bee7;
L_1000be7b:;
  /* 1000be7b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1000be7d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1000be7e:;
  /* 1000be7e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1000be7f jne 0x1000be7b */
  if (!C.zf) goto L_1000be7b;
  /* 1000be81 pop ebx */
  EBX = (pop32());
  /* 1000be82 pop esi */
  ESI = (pop32());
L_1000be83:;
  /* 1000be83 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1000be87 pop edi */
  EDI = (pop32());
  /* 1000be88 ret  */
  ESPCHK(0x1000be00u, _esp0);
  ESP += 4; return;
L_1000be89:;
  /* 1000be89 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1000be8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000be8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1000be8f je 0x1000be40 */
  if (C.zf) goto L_1000be40;
L_1000be91:;
  /* 1000be91 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1000be96 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1000be98 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000be9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1000be9d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1000be9f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1000bea1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000bea4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1000bea9 je 0x1000be89 */
  if (C.zf) goto L_1000be89;
  /* 1000beab test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1000bead je 0x1000bedb */
  if (C.zf) goto L_1000bedb;
  /* 1000beaf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1000beb1 je 0x1000bed1 */
  if (C.zf) goto L_1000bed1;
  /* 1000beb3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1000beb9 je 0x1000bec7 */
  if (C.zf) goto L_1000bec7;
  /* 1000bebb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1000bec1 jne 0x1000be89 */
  if (!C.zf) goto L_1000be89;
  /* 1000bec3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1000bec5 jmp 0x1000bedf */
  goto L_1000bedf;
L_1000bec7:;
  /* 1000bec7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1000becd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1000becf jmp 0x1000bedf */
  goto L_1000bedf;
L_1000bed1:;
  /* 1000bed1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1000bed7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1000bed9 jmp 0x1000bedf */
  goto L_1000bedf;
L_1000bedb:;
  /* 1000bedb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1000bedd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1000bedf:;
  /* 1000bedf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000bee2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000bee4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1000bee5 je 0x1000bef1 */
  if (C.zf) goto L_1000bef1;
L_1000bee7:;
  /* 1000bee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1000bee9:;
  /* 1000bee9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1000beeb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000beee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1000beef jne 0x1000bee9 */
  if (!C.zf) goto L_1000bee9;
L_1000bef1:;
  /* 1000bef1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1000bef4 jne 0x1000be7b */
  if (!C.zf) goto L_1000be7b;
L_1000bef6:;
  /* 1000bef6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1000befa pop ebx */
  EBX = (pop32());
  /* 1000befb pop esi */
  ESI = (pop32());
  /* 1000befc pop edi */
  EDI = (pop32());
  /* 1000befd ret  */
  ESPCHK(0x1000be00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000befe @ 0x1000befe (115 bytes, 37 insns) */
void f_1000befe(void) {
  FTRACE(0x1000befeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000befe push esi */
  push32((uint32_t)(ESI));
  /* 1000beff call 0x1000bf7a */
  push32(0x1000bf04u); f_1000bf7a();
  /* 1000bf04 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1000bf08 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1000bf0a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1000bf0c mov eax, 0x10012ea0 */
  EAX = (0x10012ea0u);
L_1000bf11:;
  /* 1000bf11 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bf13 je 0x1000bf37 */
  if (C.zf) goto L_1000bf37;
  /* 1000bf15 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000bf18 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1000bf19 cmp eax, 0x10013008 */
  { uint32_t _a=(EAX),_b=(0x10013008u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bf1e jl 0x1000bf11 */
  if ((C.sf!=C.of)) goto L_1000bf11;
  /* 1000bf20 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bf23 jb 0x1000bf47 */
  if (C.cf) goto L_1000bf47;
  /* 1000bf25 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bf28 ja 0x1000bf47 */
  if ((!C.cf&&!C.zf)) goto L_1000bf47;
  /* 1000bf2a call 0x1000bf71 */
  push32(0x1000bf2fu); f_1000bf71();
  /* 1000bf2f mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1000bf35 pop esi */
  ESI = (pop32());
  /* 1000bf36 ret  */
  ESPCHK(0x1000befeu, _esp0);
  ESP += 4; return;
L_1000bf37:;
  /* 1000bf37 call 0x1000bf71 */
  push32(0x1000bf3cu); f_1000bf71();
  /* 1000bf3c mov ecx, dword ptr [esi*8 + 0x10012ea4] */
  ECX = (r32((uint32_t)(ESI*8 + 0x10012ea4)));
  /* 1000bf43 pop esi */
  ESI = (pop32());
  /* 1000bf44 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1000bf46 ret  */
  ESPCHK(0x1000befeu, _esp0);
  ESP += 4; return;
L_1000bf47:;
  /* 1000bf47 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bf4d jb 0x1000bf64 */
  if (C.cf) goto L_1000bf64;
  /* 1000bf4f cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bf55 ja 0x1000bf64 */
  if ((!C.cf&&!C.zf)) goto L_1000bf64;
  /* 1000bf57 call 0x1000bf71 */
  push32(0x1000bf5cu); f_1000bf71();
  /* 1000bf5c mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1000bf62 pop esi */
  ESI = (pop32());
  /* 1000bf63 ret  */
  ESPCHK(0x1000befeu, _esp0);
  ESP += 4; return;
L_1000bf64:;
  /* 1000bf64 call 0x1000bf71 */
  push32(0x1000bf69u); f_1000bf71();
  /* 1000bf69 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1000bf6f pop esi */
  ESI = (pop32());
  /* 1000bf70 ret  */
  ESPCHK(0x1000befeu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf71 @ 0x1000bf71 (9 bytes, 3 insns) */
void f_1000bf71(void) {
  FTRACE(0x1000bf71u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000bf71 call 0x10008048 */
  push32(0x1000bf76u); f_10008048();
  /* 1000bf76 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000bf79 ret  */
  ESPCHK(0x1000bf71u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf7a @ 0x1000bf7a (9 bytes, 3 insns) */
void f_1000bf7a(void) {
  FTRACE(0x1000bf7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000bf7a call 0x10008048 */
  push32(0x1000bf7fu); f_10008048();
  /* 1000bf7f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000bf82 ret  */
  ESPCHK(0x1000bf7au, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf83 @ 0x1000bf83 (127 bytes, 48 insns) */
void f_1000bf83(void) {
  FTRACE(0x1000bf83u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000bf83 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1000bf87 push esi */
  push32((uint32_t)(ESI));
  /* 1000bf88 cmp ecx, dword ptr [0x10017d40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10017d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bf8e push edi */
  push32((uint32_t)(EDI));
  /* 1000bf8f jae 0x1000bfe9 */
  if (!C.cf) goto L_1000bfe9;
  /* 1000bf91 mov eax, ecx */
  EAX = (ECX);
  /* 1000bf93 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1000bf96 lea edi, [eax*4 + 0x10017c40] */
  EDI = ((uint32_t)(EAX*4 + 0x10017c40));
  /* 1000bf9d mov eax, ecx */
  EAX = (ECX);
  /* 1000bf9f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1000bfa2 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1000bfa5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1000bfa7 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1000bfaa add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000bfac test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1000bfb0 je 0x1000bfe9 */
  if (C.zf) goto L_1000bfe9;
  /* 1000bfb2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bfb5 je 0x1000bfe9 */
  if (C.zf) goto L_1000bfe9;
  /* 1000bfb7 cmp dword ptr [0x10016664], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10016664))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000bfbe jne 0x1000bfdf */
  if (!C.zf) goto L_1000bfdf;
  /* 1000bfc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000bfc2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000bfc4 je 0x1000bfd6 */
  if (C.zf) goto L_1000bfd6;
  /* 1000bfc6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1000bfc7 je 0x1000bfd1 */
  if (C.zf) goto L_1000bfd1;
  /* 1000bfc9 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1000bfca jne 0x1000bfdf */
  if (!C.zf) goto L_1000bfdf;
  /* 1000bfcc push eax */
  push32((uint32_t)(EAX));
  /* 1000bfcd push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1000bfcf jmp 0x1000bfd9 */
  goto L_1000bfd9;
L_1000bfd1:;
  /* 1000bfd1 push eax */
  push32((uint32_t)(EAX));
  /* 1000bfd2 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1000bfd4 jmp 0x1000bfd9 */
  goto L_1000bfd9;
L_1000bfd6:;
  /* 1000bfd6 push eax */
  push32((uint32_t)(EAX));
  /* 1000bfd7 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_1000bfd9:;
  /* 1000bfd9 call dword ptr [0x1000e0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e0b4))), 0x1000bfdfu);
L_1000bfdf:;
  /* 1000bfdf mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1000bfe1 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 1000bfe5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000bfe7 jmp 0x1000bfff */
  goto L_1000bfff;
L_1000bfe9:;
  /* 1000bfe9 call 0x1000bf71 */
  push32(0x1000bfeeu); f_1000bf71();
  /* 1000bfee mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1000bff4 call 0x1000bf7a */
  push32(0x1000bff9u); f_1000bf7a();
  /* 1000bff9 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1000bffc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1000bfff:;
  /* 1000bfff pop edi */
  EDI = (pop32());
  /* 1000c000 pop esi */
  ESI = (pop32());
  /* 1000c001 ret  */
  ESPCHK(0x1000bf83u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c002 @ 0x1000c002 (66 bytes, 19 insns) */
void f_1000c002(void) {
  FTRACE(0x1000c002u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000c002 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1000c006 cmp eax, dword ptr [0x10017d40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10017d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c00c jae 0x1000c02d */
  if (!C.cf) goto L_1000c02d;
  /* 1000c00e mov ecx, eax */
  ECX = (EAX);
  /* 1000c010 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1000c013 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1000c016 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1000c019 mov ecx, dword ptr [ecx*4 + 0x10017c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10017c40)));
  /* 1000c020 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1000c025 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 1000c028 je 0x1000c02d */
  if (C.zf) goto L_1000c02d;
  /* 1000c02a mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 1000c02c ret  */
  ESPCHK(0x1000c002u, _esp0);
  ESP += 4; return;
L_1000c02d:;
  /* 1000c02d call 0x1000bf71 */
  push32(0x1000c032u); f_1000bf71();
  /* 1000c032 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1000c038 call 0x1000bf7a */
  push32(0x1000c03du); f_1000bf7a();
  /* 1000c03d and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1000c040 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1000c043 ret  */
  ESPCHK(0x1000c002u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c044 @ 0x1000c044 (95 bytes, 34 insns) */
void f_1000c044(void) {
  FTRACE(0x1000c044u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000c044 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1000c048 push ebx */
  push32((uint32_t)(EBX));
  /* 1000c049 mov ecx, eax */
  ECX = (EAX);
  /* 1000c04b and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1000c04e sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1000c051 push esi */
  push32((uint32_t)(ESI));
  /* 1000c052 push edi */
  push32((uint32_t)(EDI));
  /* 1000c053 mov esi, dword ptr [ecx*4 + 0x10017c40] */
  ESI = (r32((uint32_t)(ECX*4 + 0x10017c40)));
  /* 1000c05a lea ebx, [ecx*4 + 0x10017c40] */
  EBX = ((uint32_t)(ECX*4 + 0x10017c40));
  /* 1000c061 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 1000c064 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 1000c067 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000c069 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c06d jne 0x1000c092 */
  if (!C.zf) goto L_1000c092;
  /* 1000c06f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1000c071 call 0x1000a013 */
  push32(0x1000c076u); f_1000a013();
  /* 1000c076 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c07a pop ecx */
  ECX = (pop32());
  /* 1000c07b jne 0x1000c08a */
  if (!C.zf) goto L_1000c08a;
  /* 1000c07d lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 1000c080 push eax */
  push32((uint32_t)(EAX));
  /* 1000c081 call dword ptr [0x1000e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e094))), 0x1000c087u);
  /* 1000c087 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1000c08a:;
  /* 1000c08a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1000c08c call 0x1000a074 */
  push32(0x1000c091u); f_1000a074();
  /* 1000c091 pop ecx */
  ECX = (pop32());
L_1000c092:;
  /* 1000c092 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1000c094 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 1000c098 push eax */
  push32((uint32_t)(EAX));
  /* 1000c099 call dword ptr [0x1000e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e00c))), 0x1000c09fu);
  /* 1000c09f pop edi */
  EDI = (pop32());
  /* 1000c0a0 pop esi */
  ESI = (pop32());
  /* 1000c0a1 pop ebx */
  EBX = (pop32());
  /* 1000c0a2 ret  */
  ESPCHK(0x1000c044u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0a3 @ 0x1000c0a3 (34 bytes, 10 insns) */
void f_1000c0a3(void) {
  FTRACE(0x1000c0a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000c0a3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1000c0a7 mov ecx, eax */
  ECX = (EAX);
  /* 1000c0a9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1000c0ac sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1000c0af lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1000c0b2 mov ecx, dword ptr [ecx*4 + 0x10017c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10017c40)));
  /* 1000c0b9 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 1000c0bd push eax */
  push32((uint32_t)(EAX));
  /* 1000c0be call dword ptr [0x1000e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e008))), 0x1000c0c4u);
  /* 1000c0c4 ret  */
  ESPCHK(0x1000c0a3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c146 @ 0x1000c146 (46 bytes, 22 insns) */
void f_1000c146(void) {
  FTRACE(0x1000c146u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000c146 push esi */
  push32((uint32_t)(ESI));
  /* 1000c147 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1000c14b push esi */
  push32((uint32_t)(ESI));
  /* 1000c14c call 0x1000c174 */
  push32(0x1000c151u); f_1000c174();
  /* 1000c151 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000c153 pop ecx */
  ECX = (pop32());
  /* 1000c154 je 0x1000c15b */
  if (C.zf) goto L_1000c15b;
  /* 1000c156 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1000c159 pop esi */
  ESI = (pop32());
  /* 1000c15a ret  */
  ESPCHK(0x1000c146u, _esp0);
  ESP += 4; return;
L_1000c15b:;
  /* 1000c15b test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 1000c15f je 0x1000c170 */
  if (C.zf) goto L_1000c170;
  /* 1000c161 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1000c164 call 0x1000d2c0 */
  push32(0x1000c169u); f_1000d2c0();
  /* 1000c169 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1000c16b pop ecx */
  ECX = (pop32());
  /* 1000c16c pop esi */
  ESI = (pop32());
  /* 1000c16d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000c16f ret  */
  ESPCHK(0x1000c146u, _esp0);
  ESP += 4; return;
L_1000c170:;
  /* 1000c170 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000c172 pop esi */
  ESI = (pop32());
  /* 1000c173 ret  */
  ESPCHK(0x1000c146u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c174 @ 0x1000c174 (92 bytes, 40 insns) */
void f_1000c174(void) {
  FTRACE(0x1000c174u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000c174 push ebx */
  push32((uint32_t)(EBX));
  /* 1000c175 push esi */
  push32((uint32_t)(ESI));
  /* 1000c176 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1000c17a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1000c17c push edi */
  push32((uint32_t)(EDI));
  /* 1000c17d mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1000c180 mov ecx, eax */
  ECX = (EAX);
  /* 1000c182 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1000c185 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c188 jne 0x1000c1c1 */
  if (!C.zf) goto L_1000c1c1;
  /* 1000c18a test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 1000c18e je 0x1000c1c1 */
  if (C.zf) goto L_1000c1c1;
  /* 1000c190 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1000c193 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 1000c195 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000c197 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1000c199 jle 0x1000c1c1 */
  if ((C.zf||C.sf!=C.of)) goto L_1000c1c1;
  /* 1000c19b push edi */
  push32((uint32_t)(EDI));
  /* 1000c19c push eax */
  push32((uint32_t)(EAX));
  /* 1000c19d push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1000c1a0 call 0x10008c75 */
  push32(0x1000c1a5u); f_10008c75();
  /* 1000c1a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000c1a8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c1aa jne 0x1000c1ba */
  if (!C.zf) goto L_1000c1ba;
  /* 1000c1ac mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1000c1af test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 1000c1b1 je 0x1000c1c1 */
  if (C.zf) goto L_1000c1c1;
  /* 1000c1b3 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 1000c1b5 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1000c1b8 jmp 0x1000c1c1 */
  goto L_1000c1c1;
L_1000c1ba:;
  /* 1000c1ba or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1000c1be or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_1000c1c1:;
  /* 1000c1c1 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1000c1c4 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1000c1c8 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1000c1ca pop edi */
  EDI = (pop32());
  /* 1000c1cb mov eax, ebx */
  EAX = (EBX);
  /* 1000c1cd pop esi */
  ESI = (pop32());
  /* 1000c1ce pop ebx */
  EBX = (pop32());
  /* 1000c1cf ret  */
  ESPCHK(0x1000c174u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1d9 @ 0x1000c1d9 (164 bytes, 66 insns) */
void f_1000c1d9(void) {
  FTRACE(0x1000c1d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000c1d9 push ebx */
  push32((uint32_t)(EBX));
  /* 1000c1da push esi */
  push32((uint32_t)(ESI));
  /* 1000c1db push edi */
  push32((uint32_t)(EDI));
  /* 1000c1dc push 2 */
  push32((uint32_t)(0x2u));
  /* 1000c1de xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1000c1e0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1000c1e2 call 0x1000a013 */
  push32(0x1000c1e7u); f_1000a013();
  /* 1000c1e7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1000c1e9 pop ecx */
  ECX = (pop32());
  /* 1000c1ea cmp dword ptr [0x10017c20], esi */
  { uint32_t _a=(r32((uint32_t)(0x10017c20))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c1f0 jle 0x1000c266 */
  if ((C.zf||C.sf!=C.of)) goto L_1000c266;
L_1000c1f2:;
  /* 1000c1f2 mov eax, dword ptr [0x10016c08] */
  EAX = (r32((uint32_t)(0x10016c08)));
  /* 1000c1f7 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1000c1fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000c1fc je 0x1000c25d */
  if (C.zf) goto L_1000c25d;
  /* 1000c1fe test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1000c202 je 0x1000c25d */
  if (C.zf) goto L_1000c25d;
  /* 1000c204 push eax */
  push32((uint32_t)(EAX));
  /* 1000c205 push esi */
  push32((uint32_t)(ESI));
  /* 1000c206 call 0x10008fbd */
  push32(0x1000c20bu); f_10008fbd();
  /* 1000c20b mov eax, dword ptr [0x10016c08] */
  EAX = (r32((uint32_t)(0x10016c08)));
  /* 1000c210 pop ecx */
  ECX = (pop32());
  /* 1000c211 pop ecx */
  ECX = (pop32());
  /* 1000c212 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1000c215 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1000c218 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 1000c21b je 0x1000c24d */
  if (C.zf) goto L_1000c24d;
  /* 1000c21d cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c222 jne 0x1000c233 */
  if (!C.zf) goto L_1000c233;
  /* 1000c224 push eax */
  push32((uint32_t)(EAX));
  /* 1000c225 call 0x1000c146 */
  push32(0x1000c22au); f_1000c146();
  /* 1000c22a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c22d pop ecx */
  ECX = (pop32());
  /* 1000c22e je 0x1000c24d */
  if (C.zf) goto L_1000c24d;
  /* 1000c230 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1000c231 jmp 0x1000c24d */
  goto L_1000c24d;
L_1000c233:;
  /* 1000c233 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c238 jne 0x1000c24d */
  if (!C.zf) goto L_1000c24d;
  /* 1000c23a test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 1000c23d je 0x1000c24d */
  if (C.zf) goto L_1000c24d;
  /* 1000c23f push eax */
  push32((uint32_t)(EAX));
  /* 1000c240 call 0x1000c146 */
  push32(0x1000c245u); f_1000c146();
  /* 1000c245 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c248 pop ecx */
  ECX = (pop32());
  /* 1000c249 jne 0x1000c24d */
  if (!C.zf) goto L_1000c24d;
  /* 1000c24b or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_1000c24d:;
  /* 1000c24d mov eax, dword ptr [0x10016c08] */
  EAX = (r32((uint32_t)(0x10016c08)));
  /* 1000c252 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 1000c255 push esi */
  push32((uint32_t)(ESI));
  /* 1000c256 call 0x1000900f */
  push32(0x1000c25bu); f_1000900f();
  /* 1000c25b pop ecx */
  ECX = (pop32());
  /* 1000c25c pop ecx */
  ECX = (pop32());
L_1000c25d:;
  /* 1000c25d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1000c25e cmp esi, dword ptr [0x10017c20] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10017c20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c264 jl 0x1000c1f2 */
  if ((C.sf!=C.of)) goto L_1000c1f2;
L_1000c266:;
  /* 1000c266 push 2 */
  push32((uint32_t)(0x2u));
  /* 1000c268 call 0x1000a074 */
  push32(0x1000c26du); f_1000a074();
  /* 1000c26d cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c272 pop ecx */
  ECX = (pop32());
  /* 1000c273 mov eax, ebx */
  EAX = (EBX);
  /* 1000c275 je 0x1000c279 */
  if (C.zf) goto L_1000c279;
  /* 1000c277 mov eax, edi */
  EAX = (EDI);
L_1000c279:;
  /* 1000c279 pop edi */
  EDI = (pop32());
  /* 1000c27a pop esi */
  ESI = (pop32());
  /* 1000c27b pop ebx */
  EBX = (pop32());
  /* 1000c27c ret  */
  ESPCHK(0x1000c1d9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c27d @ 0x1000c27d (318 bytes, 123 insns) */
void f_1000c27d(void) {
  FTRACE(0x1000c27du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000c27d push ebp */
  push32((uint32_t)(EBP));
  /* 1000c27e mov ebp, esp */
  EBP = (ESP);
  /* 1000c280 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1000c282 push 0x1000e560 */
  push32((uint32_t)(0x1000e560u));
  /* 1000c287 push 0x1000d030 */
  push32((uint32_t)(0x1000d030u));
  /* 1000c28c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1000c292 push eax */
  push32((uint32_t)(EAX));
  /* 1000c293 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1000c29a sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000c29d push ebx */
  push32((uint32_t)(EBX));
  /* 1000c29e push esi */
  push32((uint32_t)(ESI));
  /* 1000c29f push edi */
  push32((uint32_t)(EDI));
  /* 1000c2a0 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1000c2a3 mov eax, dword ptr [0x10016874] */
  EAX = (r32((uint32_t)(0x10016874)));
  /* 1000c2a8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1000c2aa cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c2ac jne 0x1000c2ec */
  if (!C.zf) goto L_1000c2ec;
  /* 1000c2ae lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1000c2b1 push eax */
  push32((uint32_t)(EAX));
  /* 1000c2b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000c2b4 pop esi */
  ESI = (pop32());
  /* 1000c2b5 push esi */
  push32((uint32_t)(ESI));
  /* 1000c2b6 push 0x1000e558 */
  push32((uint32_t)(0x1000e558u));
  /* 1000c2bb push esi */
  push32((uint32_t)(ESI));
  /* 1000c2bc call dword ptr [0x1000e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e0c0))), 0x1000c2c2u);
  /* 1000c2c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000c2c4 je 0x1000c2ca */
  if (C.zf) goto L_1000c2ca;
  /* 1000c2c6 mov eax, esi */
  EAX = (ESI);
  /* 1000c2c8 jmp 0x1000c2e7 */
  goto L_1000c2e7;
L_1000c2ca:;
  /* 1000c2ca lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1000c2cd push eax */
  push32((uint32_t)(EAX));
  /* 1000c2ce push esi */
  push32((uint32_t)(ESI));
  /* 1000c2cf push 0x1000e554 */
  push32((uint32_t)(0x1000e554u));
  /* 1000c2d4 push esi */
  push32((uint32_t)(ESI));
  /* 1000c2d5 push ebx */
  push32((uint32_t)(EBX));
  /* 1000c2d6 call dword ptr [0x1000e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e0bc))), 0x1000c2dcu);
  /* 1000c2dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000c2de je 0x1000c3b2 */
  if (C.zf) goto L_1000c3b2;
  /* 1000c2e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1000c2e6 pop eax */
  EAX = (pop32());
L_1000c2e7:;
  /* 1000c2e7 mov dword ptr [0x10016874], eax */
  w32((uint32_t)(0x10016874), (EAX));
L_1000c2ec:;
  /* 1000c2ec cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c2ef jne 0x1000c315 */
  if (!C.zf) goto L_1000c315;
  /* 1000c2f1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1000c2f4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c2f6 jne 0x1000c2fd */
  if (!C.zf) goto L_1000c2fd;
  /* 1000c2f8 mov eax, dword ptr [0x10016848] */
  EAX = (r32((uint32_t)(0x10016848)));
L_1000c2fd:;
  /* 1000c2fd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1000c300 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1000c303 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1000c306 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1000c309 push eax */
  push32((uint32_t)(EAX));
  /* 1000c30a call dword ptr [0x1000e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e0bc))), 0x1000c310u);
  /* 1000c310 jmp 0x1000c3b4 */
  goto L_1000c3b4;
L_1000c315:;
  /* 1000c315 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c318 jne 0x1000c3b2 */
  if (!C.zf) goto L_1000c3b2;
  /* 1000c31e cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c321 jne 0x1000c32b */
  if (!C.zf) goto L_1000c32b;
  /* 1000c323 mov eax, dword ptr [0x10016858] */
  EAX = (r32((uint32_t)(0x10016858)));
  /* 1000c328 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1000c32b:;
  /* 1000c32b push ebx */
  push32((uint32_t)(EBX));
  /* 1000c32c push ebx */
  push32((uint32_t)(EBX));
  /* 1000c32d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1000c330 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1000c333 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1000c336 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1000c338 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000c33a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1000c33d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1000c33e push eax */
  push32((uint32_t)(EAX));
  /* 1000c33f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1000c342 call dword ptr [0x1000e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e0b8))), 0x1000c348u);
  /* 1000c348 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1000c34b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c34d je 0x1000c3b2 */
  if (C.zf) goto L_1000c3b2;
  /* 1000c34f mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1000c352 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 1000c355 mov eax, edi */
  EAX = (EDI);
  /* 1000c357 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000c35a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1000c35c call 0x1000aed0 */
  push32(0x1000c361u); f_1000aed0();
  /* 1000c361 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1000c364 mov esi, esp */
  ESI = (ESP);
  /* 1000c366 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 1000c369 push edi */
  push32((uint32_t)(EDI));
  /* 1000c36a push ebx */
  push32((uint32_t)(EBX));
  /* 1000c36b push esi */
  push32((uint32_t)(ESI));
  /* 1000c36c call 0x10009be0 */
  push32(0x1000c371u); f_10009be0();
  /* 1000c371 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000c374 jmp 0x1000c381 */
  goto L_1000c381;
  /* 1000c376 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000c378 pop eax */
  EAX = (pop32());
  /* 1000c379 ret  */
  ESPCHK(0x1000c27du, _esp0);
  ESP += 4; return;
  /* 1000c37a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1000c37d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1000c37f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1000c381:;
  /* 1000c381 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1000c385 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c387 je 0x1000c3b2 */
  if (C.zf) goto L_1000c3b2;
  /* 1000c389 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1000c38c push esi */
  push32((uint32_t)(ESI));
  /* 1000c38d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1000c390 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1000c393 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000c395 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1000c398 call dword ptr [0x1000e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e0b8))), 0x1000c39eu);
  /* 1000c39e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c3a0 je 0x1000c3b2 */
  if (C.zf) goto L_1000c3b2;
  /* 1000c3a2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1000c3a5 push eax */
  push32((uint32_t)(EAX));
  /* 1000c3a6 push esi */
  push32((uint32_t)(ESI));
  /* 1000c3a7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1000c3aa call dword ptr [0x1000e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e0c0))), 0x1000c3b0u);
  /* 1000c3b0 jmp 0x1000c3b4 */
  goto L_1000c3b4;
L_1000c3b2:;
  /* 1000c3b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1000c3b4:;
  /* 1000c3b4 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 1000c3b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1000c3ba mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1000c3c1 pop edi */
  EDI = (pop32());
  /* 1000c3c2 pop esi */
  ESI = (pop32());
  /* 1000c3c3 pop ebx */
  EBX = (pop32());
  /* 1000c3c4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000c3c5 ret  */
  ESPCHK(0x1000c27du, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3c6 @ 0x1000c3c6 (511 bytes, 193 insns) */
void f_1000c3c6(void) {
  FTRACE(0x1000c3c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000c3c6 push ebp */
  push32((uint32_t)(EBP));
  /* 1000c3c7 mov ebp, esp */
  EBP = (ESP);
  /* 1000c3c9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1000c3cb push 0x1000e570 */
  push32((uint32_t)(0x1000e570u));
  /* 1000c3d0 push 0x1000d030 */
  push32((uint32_t)(0x1000d030u));
  /* 1000c3d5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1000c3db push eax */
  push32((uint32_t)(EAX));
  /* 1000c3dc mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1000c3e3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000c3e6 push ebx */
  push32((uint32_t)(EBX));
  /* 1000c3e7 push esi */
  push32((uint32_t)(ESI));
  /* 1000c3e8 push edi */
  push32((uint32_t)(EDI));
  /* 1000c3e9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1000c3ec xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1000c3ee cmp dword ptr [0x10016878], edi */
  { uint32_t _a=(r32((uint32_t)(0x10016878))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c3f4 jne 0x1000c43c */
  if (!C.zf) goto L_1000c43c;
  /* 1000c3f6 push edi */
  push32((uint32_t)(EDI));
  /* 1000c3f7 push edi */
  push32((uint32_t)(EDI));
  /* 1000c3f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000c3fa pop ebx */
  EBX = (pop32());
  /* 1000c3fb push ebx */
  push32((uint32_t)(EBX));
  /* 1000c3fc push 0x1000e558 */
  push32((uint32_t)(0x1000e558u));
  /* 1000c401 mov esi, 0x100 */
  ESI = (0x100u);
  /* 1000c406 push esi */
  push32((uint32_t)(ESI));
  /* 1000c407 push edi */
  push32((uint32_t)(EDI));
  /* 1000c408 call dword ptr [0x1000e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e0c8))), 0x1000c40eu);
  /* 1000c40e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000c410 je 0x1000c41a */
  if (C.zf) goto L_1000c41a;
  /* 1000c412 mov dword ptr [0x10016878], ebx */
  w32((uint32_t)(0x10016878), (EBX));
  /* 1000c418 jmp 0x1000c43c */
  goto L_1000c43c;
L_1000c41a:;
  /* 1000c41a push edi */
  push32((uint32_t)(EDI));
  /* 1000c41b push edi */
  push32((uint32_t)(EDI));
  /* 1000c41c push ebx */
  push32((uint32_t)(EBX));
  /* 1000c41d push 0x1000e554 */
  push32((uint32_t)(0x1000e554u));
  /* 1000c422 push esi */
  push32((uint32_t)(ESI));
  /* 1000c423 push edi */
  push32((uint32_t)(EDI));
  /* 1000c424 call dword ptr [0x1000e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e0c4))), 0x1000c42au);
  /* 1000c42a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000c42c je 0x1000c554 */
  if (C.zf) goto L_1000c554;
  /* 1000c432 mov dword ptr [0x10016878], 2 */
  w32((uint32_t)(0x10016878), (0x2u));
L_1000c43c:;
  /* 1000c43c cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c43f jle 0x1000c451 */
  if ((C.zf||C.sf!=C.of)) goto L_1000c451;
  /* 1000c441 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1000c444 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1000c447 call 0x1000c5ea */
  push32(0x1000c44cu); f_1000c5ea();
  /* 1000c44c pop ecx */
  ECX = (pop32());
  /* 1000c44d pop ecx */
  ECX = (pop32());
  /* 1000c44e mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1000c451:;
  /* 1000c451 mov eax, dword ptr [0x10016878] */
  EAX = (r32((uint32_t)(0x10016878)));
  /* 1000c456 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c459 jne 0x1000c478 */
  if (!C.zf) goto L_1000c478;
  /* 1000c45b push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1000c45e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1000c461 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1000c464 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1000c467 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1000c46a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1000c46d call dword ptr [0x1000e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e0c4))), 0x1000c473u);
  /* 1000c473 jmp 0x1000c556 */
  goto L_1000c556;
L_1000c478:;
  /* 1000c478 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c47b jne 0x1000c554 */
  if (!C.zf) goto L_1000c554;
  /* 1000c481 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c484 jne 0x1000c48e */
  if (!C.zf) goto L_1000c48e;
  /* 1000c486 mov eax, dword ptr [0x10016858] */
  EAX = (r32((uint32_t)(0x10016858)));
  /* 1000c48b mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_1000c48e:;
  /* 1000c48e push edi */
  push32((uint32_t)(EDI));
  /* 1000c48f push edi */
  push32((uint32_t)(EDI));
  /* 1000c490 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1000c493 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1000c496 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 1000c499 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1000c49b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000c49d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1000c4a0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1000c4a1 push eax */
  push32((uint32_t)(EAX));
  /* 1000c4a2 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1000c4a5 call dword ptr [0x1000e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e0b8))), 0x1000c4abu);
  /* 1000c4ab mov ebx, eax */
  EBX = (EAX);
  /* 1000c4ad mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 1000c4b0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c4b2 je 0x1000c554 */
  if (C.zf) goto L_1000c554;
  /* 1000c4b8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1000c4bb lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 1000c4be add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000c4c1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1000c4c3 call 0x1000aed0 */
  push32(0x1000c4c8u); f_1000aed0();
  /* 1000c4c8 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1000c4cb mov eax, esp */
  EAX = (ESP);
  /* 1000c4cd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1000c4d0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1000c4d4 jmp 0x1000c4e9 */
  goto L_1000c4e9;
  /* 1000c4d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000c4d8 pop eax */
  EAX = (pop32());
  /* 1000c4d9 ret  */
  ESPCHK(0x1000c3c6u, _esp0);
  ESP += 4; return;
  /* 1000c4da mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1000c4dd xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1000c4df mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 1000c4e2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1000c4e6 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_1000c4e9:;
  /* 1000c4e9 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c4ec je 0x1000c554 */
  if (C.zf) goto L_1000c554;
  /* 1000c4ee push ebx */
  push32((uint32_t)(EBX));
  /* 1000c4ef push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1000c4f2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1000c4f5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1000c4f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000c4fa push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1000c4fd call dword ptr [0x1000e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e0b8))), 0x1000c503u);
  /* 1000c503 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000c505 je 0x1000c554 */
  if (C.zf) goto L_1000c554;
  /* 1000c507 push edi */
  push32((uint32_t)(EDI));
  /* 1000c508 push edi */
  push32((uint32_t)(EDI));
  /* 1000c509 push ebx */
  push32((uint32_t)(EBX));
  /* 1000c50a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1000c50d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1000c510 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1000c513 call dword ptr [0x1000e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e0c8))), 0x1000c519u);
  /* 1000c519 mov esi, eax */
  ESI = (EAX);
  /* 1000c51b mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 1000c51e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c520 je 0x1000c554 */
  if (C.zf) goto L_1000c554;
  /* 1000c522 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 1000c526 je 0x1000c568 */
  if (C.zf) goto L_1000c568;
  /* 1000c528 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c52b je 0x1000c5e3 */
  if (C.zf) goto L_1000c5e3;
  /* 1000c531 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c534 jg 0x1000c554 */
  if ((!C.zf&&C.sf==C.of)) goto L_1000c554;
  /* 1000c536 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1000c539 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1000c53c push ebx */
  push32((uint32_t)(EBX));
  /* 1000c53d push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1000c540 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1000c543 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1000c546 call dword ptr [0x1000e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e0c8))), 0x1000c54cu);
  /* 1000c54c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000c54e jne 0x1000c5e3 */
  if (!C.zf) goto L_1000c5e3;
L_1000c554:;
  /* 1000c554 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1000c556:;
  /* 1000c556 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1000c559 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1000c55c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1000c563 pop edi */
  EDI = (pop32());
  /* 1000c564 pop esi */
  ESI = (pop32());
  /* 1000c565 pop ebx */
  EBX = (pop32());
  /* 1000c566 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000c567 ret  */
  ESPCHK(0x1000c3c6u, _esp0);
  ESP += 4; return;
L_1000c568:;
  /* 1000c568 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1000c56f lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 1000c572 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000c575 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1000c577 call 0x1000aed0 */
  push32(0x1000c57cu); f_1000aed0();
  /* 1000c57c mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1000c57f mov ebx, esp */
  EBX = (ESP);
  /* 1000c581 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 1000c584 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1000c588 jmp 0x1000c59c */
  goto L_1000c59c;
  /* 1000c58a push 1 */
  push32((uint32_t)(0x1u));
  /* 1000c58c pop eax */
  EAX = (pop32());
  /* 1000c58d ret  */
  ESPCHK(0x1000c3c6u, _esp0);
  ESP += 4; return;
  /* 1000c58e mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1000c591 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1000c593 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1000c595 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1000c599 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_1000c59c:;
  /* 1000c59c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c59e je 0x1000c554 */
  if (C.zf) goto L_1000c554;
  /* 1000c5a0 push esi */
  push32((uint32_t)(ESI));
  /* 1000c5a1 push ebx */
  push32((uint32_t)(EBX));
  /* 1000c5a2 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1000c5a5 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1000c5a8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1000c5ab push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1000c5ae call dword ptr [0x1000e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e0c8))), 0x1000c5b4u);
  /* 1000c5b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000c5b6 je 0x1000c554 */
  if (C.zf) goto L_1000c554;
  /* 1000c5b8 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c5bb push edi */
  push32((uint32_t)(EDI));
  /* 1000c5bc push edi */
  push32((uint32_t)(EDI));
  /* 1000c5bd jne 0x1000c5c3 */
  if (!C.zf) goto L_1000c5c3;
  /* 1000c5bf push edi */
  push32((uint32_t)(EDI));
  /* 1000c5c0 push edi */
  push32((uint32_t)(EDI));
  /* 1000c5c1 jmp 0x1000c5c9 */
  goto L_1000c5c9;
L_1000c5c3:;
  /* 1000c5c3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1000c5c6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_1000c5c9:;
  /* 1000c5c9 push esi */
  push32((uint32_t)(ESI));
  /* 1000c5ca push ebx */
  push32((uint32_t)(EBX));
  /* 1000c5cb push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1000c5d0 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1000c5d3 call dword ptr [0x1000e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e060))), 0x1000c5d9u);
  /* 1000c5d9 mov esi, eax */
  ESI = (EAX);
  /* 1000c5db cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c5dd je 0x1000c554 */
  if (C.zf) goto L_1000c554;
L_1000c5e3:;
  /* 1000c5e3 mov eax, esi */
  EAX = (ESI);
  /* 1000c5e5 jmp 0x1000c556 */
  goto L_1000c556;
}

/* FUN_1000c5ea @ 0x1000c5ea (43 bytes, 20 insns) */
void f_1000c5ea(void) {
  FTRACE(0x1000c5eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000c5ea mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1000c5ee mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1000c5f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1000c5f4 push esi */
  push32((uint32_t)(ESI));
  /* 1000c5f5 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 1000c5f8 je 0x1000c607 */
  if (C.zf) goto L_1000c607;
L_1000c5fa:;
  /* 1000c5fa cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c5fd je 0x1000c607 */
  if (C.zf) goto L_1000c607;
  /* 1000c5ff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1000c600 mov esi, ecx */
  ESI = (ECX);
  /* 1000c602 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1000c603 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1000c605 jne 0x1000c5fa */
  if (!C.zf) goto L_1000c5fa;
L_1000c607:;
  /* 1000c607 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c60a pop esi */
  ESI = (pop32());
  /* 1000c60b jne 0x1000c612 */
  if (!C.zf) goto L_1000c612;
  /* 1000c60d sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000c611 ret  */
  ESPCHK(0x1000c5eau, _esp0);
  ESP += 4; return;
L_1000c612:;
  /* 1000c612 mov eax, edx */
  EAX = (EDX);
  /* 1000c614 ret  */
  ESPCHK(0x1000c5eau, _esp0);
  ESP += 4; return;
}

/* FUN_1000c615 @ 0x1000c615 (33 bytes, 15 insns) */
void f_1000c615(void) {
  FTRACE(0x1000c615u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000c615 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1000c619 push esi */
  push32((uint32_t)(ESI));
  /* 1000c61a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1000c61e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000c620 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 1000c623 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c625 jb 0x1000c62b */
  if (C.cf) goto L_1000c62b;
  /* 1000c627 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c629 jae 0x1000c62e */
  if (!C.cf) goto L_1000c62e;
L_1000c62b:;
  /* 1000c62b push 1 */
  push32((uint32_t)(0x1u));
  /* 1000c62d pop eax */
  EAX = (pop32());
L_1000c62e:;
  /* 1000c62e mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1000c632 pop esi */
  ESI = (pop32());
  /* 1000c633 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1000c635 ret  */
  ESPCHK(0x1000c615u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x1000c636 (94 bytes, 38 insns) */
void f_1000c636(void) {
  FTRACE(0x1000c636u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000c636 push esi */
  push32((uint32_t)(ESI));
  /* 1000c637 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1000c63b push edi */
  push32((uint32_t)(EDI));
  /* 1000c63c mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1000c640 push esi */
  push32((uint32_t)(ESI));
  /* 1000c641 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 1000c643 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1000c645 call 0x1000c615 */
  push32(0x1000c64au); f_1000c615();
  /* 1000c64a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000c64d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000c64f je 0x1000c668 */
  if (C.zf) goto L_1000c668;
  /* 1000c651 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1000c654 push eax */
  push32((uint32_t)(EAX));
  /* 1000c655 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000c657 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1000c659 call 0x1000c615 */
  push32(0x1000c65eu); f_1000c615();
  /* 1000c65e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000c661 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000c663 je 0x1000c668 */
  if (C.zf) goto L_1000c668;
  /* 1000c665 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1000c668:;
  /* 1000c668 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1000c66b push eax */
  push32((uint32_t)(EAX));
  /* 1000c66c push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 1000c66f push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1000c671 call 0x1000c615 */
  push32(0x1000c676u); f_1000c615();
  /* 1000c676 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000c679 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000c67b je 0x1000c680 */
  if (C.zf) goto L_1000c680;
  /* 1000c67d inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1000c680:;
  /* 1000c680 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 1000c683 push eax */
  push32((uint32_t)(EAX));
  /* 1000c684 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 1000c687 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1000c689 call 0x1000c615 */
  push32(0x1000c68eu); f_1000c615();
  /* 1000c68e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000c691 pop edi */
  EDI = (pop32());
  /* 1000c692 pop esi */
  ESI = (pop32());
  /* 1000c693 ret  */
  ESPCHK(0x1000c636u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c694 @ 0x1000c694 (46 bytes, 21 insns) */
void f_1000c694(void) {
  FTRACE(0x1000c694u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000c694 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1000c698 push esi */
  push32((uint32_t)(ESI));
  /* 1000c699 push edi */
  push32((uint32_t)(EDI));
  /* 1000c69a mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 1000c69c mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 1000c69f mov ecx, esi */
  ECX = (ESI);
  /* 1000c6a1 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000c6a3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1000c6a5 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 1000c6a8 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1000c6ab or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1000c6ad mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1000c6b0 mov edx, edi */
  EDX = (EDI);
  /* 1000c6b2 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 1000c6b5 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 1000c6b8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1000c6ba or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1000c6bc pop edi */
  EDI = (pop32());
  /* 1000c6bd mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1000c6c0 pop esi */
  ESI = (pop32());
  /* 1000c6c1 ret  */
  ESPCHK(0x1000c694u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6c2 @ 0x1000c6c2 (45 bytes, 21 insns) */
void f_1000c6c2(void) {
  FTRACE(0x1000c6c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000c6c2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1000c6c6 push esi */
  push32((uint32_t)(ESI));
  /* 1000c6c7 push edi */
  push32((uint32_t)(EDI));
  /* 1000c6c8 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 1000c6cb mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1000c6ce mov esi, edx */
  ESI = (EDX);
  /* 1000c6d0 mov edi, ecx */
  EDI = (ECX);
  /* 1000c6d2 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 1000c6d5 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1000c6d7 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 1000c6d9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1000c6dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1000c6de shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 1000c6e1 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1000c6e3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1000c6e5 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1000c6e7 pop edi */
  EDI = (pop32());
  /* 1000c6e8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1000c6eb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1000c6ed pop esi */
  ESI = (pop32());
  /* 1000c6ee ret  */
  ESPCHK(0x1000c6c2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6ef @ 0x1000c6ef (199 bytes, 76 insns) */
void f_1000c6ef(void) {
  FTRACE(0x1000c6efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000c6ef push ebp */
  push32((uint32_t)(EBP));
  /* 1000c6f0 mov ebp, esp */
  EBP = (ESP);
  /* 1000c6f2 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000c6f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1000c6f8 push ebx */
  push32((uint32_t)(EBX));
  /* 1000c6f9 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1000c6fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1000c6fe cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c700 push esi */
  push32((uint32_t)(ESI));
  /* 1000c701 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 1000c708 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 1000c70a mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 1000c70d mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 1000c710 jbe 0x1000c763 */
  if ((C.cf||C.zf)) goto L_1000c763;
  /* 1000c712 push edi */
  push32((uint32_t)(EDI));
  /* 1000c713 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1000c716:;
  /* 1000c716 mov esi, ebx */
  ESI = (EBX);
  /* 1000c718 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 1000c71b movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1000c71c movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1000c71d push ebx */
  push32((uint32_t)(EBX));
  /* 1000c71e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1000c71f call 0x1000c694 */
  push32(0x1000c724u); f_1000c694();
  /* 1000c724 push ebx */
  push32((uint32_t)(EBX));
  /* 1000c725 call 0x1000c694 */
  push32(0x1000c72au); f_1000c694();
  /* 1000c72a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1000c72d push eax */
  push32((uint32_t)(EAX));
  /* 1000c72e push ebx */
  push32((uint32_t)(EBX));
  /* 1000c72f call 0x1000c636 */
  push32(0x1000c734u); f_1000c636();
  /* 1000c734 push ebx */
  push32((uint32_t)(EBX));
  /* 1000c735 call 0x1000c694 */
  push32(0x1000c73au); f_1000c694();
  /* 1000c73a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000c73d and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 1000c741 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1000c745 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1000c748 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1000c74b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1000c74e push eax */
  push32((uint32_t)(EAX));
  /* 1000c74f push ebx */
  push32((uint32_t)(EBX));
  /* 1000c750 call 0x1000c636 */
  push32(0x1000c755u); f_1000c636();
  /* 1000c755 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000c758 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1000c75b dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 1000c75e jne 0x1000c716 */
  if (!C.zf) goto L_1000c716;
  /* 1000c760 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1000c762 pop edi */
  EDI = (pop32());
L_1000c763:;
  /* 1000c763 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c766 jne 0x1000c790 */
  if (!C.zf) goto L_1000c790;
  /* 1000c768 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1000c76b mov eax, ecx */
  EAX = (ECX);
  /* 1000c76d shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1000c770 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 1000c773 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1000c775 mov esi, eax */
  ESI = (EAX);
  /* 1000c777 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1000c77a shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 1000c77d or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1000c77f shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1000c782 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1000c789 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 1000c78c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 1000c78e jmp 0x1000c763 */
  goto L_1000c763;
L_1000c790:;
  /* 1000c790 mov esi, 0x8000 */
  ESI = (0x8000u);
L_1000c795:;
  /* 1000c795 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 1000c798 jne 0x1000c7aa */
  if (!C.zf) goto L_1000c7aa;
  /* 1000c79a push ebx */
  push32((uint32_t)(EBX));
  /* 1000c79b call 0x1000c694 */
  push32(0x1000c7a0u); f_1000c694();
  /* 1000c7a0 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1000c7a7 pop ecx */
  ECX = (pop32());
  /* 1000c7a8 jmp 0x1000c795 */
  goto L_1000c795;
L_1000c7aa:;
  /* 1000c7aa mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1000c7ae pop esi */
  ESI = (pop32());
  /* 1000c7af mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 1000c7b3 pop ebx */
  EBX = (pop32());
  /* 1000c7b4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000c7b5 ret  */
  ESPCHK(0x1000c6efu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7b6 @ 0x1000c7b6 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_1000c7b6(void) {
  FTRACE(0x1000c7b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000c7b6 push ebp */
  push32((uint32_t)(EBP));
  /* 1000c7b7 mov ebp, esp */
  EBP = (ESP);
  /* 1000c7b9 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000c7bc push ebx */
  push32((uint32_t)(EBX));
  /* 1000c7bd push esi */
  push32((uint32_t)(ESI));
  /* 1000c7be push edi */
  push32((uint32_t)(EDI));
  /* 1000c7bf mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1000c7c2 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1000c7c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000c7c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1000c7ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000c7cc pop edx */
  EDX = (pop32());
  /* 1000c7cd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1000c7d0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1000c7d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1000c7d6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1000c7d9 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1000c7dc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1000c7df mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1000c7e2 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1000c7e5 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1000c7e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1000c7eb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1000c7ee mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_1000c7f1:;
  /* 1000c7f1 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 1000c7f3 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c7f6 je 0x1000c807 */
  if (C.zf) goto L_1000c807;
  /* 1000c7f8 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c7fb je 0x1000c807 */
  if (C.zf) goto L_1000c807;
  /* 1000c7fd cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c800 je 0x1000c807 */
  if (C.zf) goto L_1000c807;
  /* 1000c802 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c805 jne 0x1000c80a */
  if (!C.zf) goto L_1000c80a;
L_1000c807:;
  /* 1000c807 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1000c808 jmp 0x1000c7f1 */
  goto L_1000c7f1;
L_1000c80a:;
  /* 1000c80a push 4 */
  push32((uint32_t)(0x4u));
  /* 1000c80c pop esi */
  ESI = (pop32());
L_1000c80d:;
  /* 1000c80d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1000c80f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1000c810 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c813 ja 0x1000ca90 */
  if ((!C.cf&&!C.zf)) goto L_1000ca90;
  /* 1000c819 jmp dword ptr [eax*4 + 0x1000cc57] */
  switch (EAX) {
    case 0: goto L_1000c820;
    case 1: goto L_1000c86f;
    case 2: goto L_1000c8c6;
    case 3: goto L_1000c8f0;
    case 4: goto L_1000c94b;
    case 5: goto L_1000c9c2;
    case 6: goto L_1000c9f8;
    case 7: goto L_1000ca42;
    case 8: goto L_1000ca21;
    case 9: goto L_1000caa6;
    case 10: goto L_1000ca90;
    case 11: goto L_1000ca5c;
    default: x86_unimpl("switch@0x1000c819 out of table"); return;
  }
L_1000c820:;
  /* 1000c820 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c823 jl 0x1000c831 */
  if ((C.sf!=C.of)) goto L_1000c831;
  /* 1000c825 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c828 jg 0x1000c831 */
  if ((!C.zf&&C.sf==C.of)) goto L_1000c831;
L_1000c82a:;
  /* 1000c82a push 3 */
  push32((uint32_t)(0x3u));
  /* 1000c82c jmp 0x1000ca4e */
  goto L_1000ca4e;
L_1000c831:;
  /* 1000c831 cmp bl, byte ptr [0x10010bf4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10010bf4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c837 jne 0x1000c840 */
  if (!C.zf) goto L_1000c840;
L_1000c839:;
  /* 1000c839 push 5 */
  push32((uint32_t)(0x5u));
  /* 1000c83b jmp 0x1000ca86 */
  goto L_1000ca86;
L_1000c840:;
  /* 1000c840 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1000c843 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000c846 je 0x1000c866 */
  if (C.zf) goto L_1000c866;
  /* 1000c848 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1000c849 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1000c84a je 0x1000c85a */
  if (C.zf) goto L_1000c85a;
  /* 1000c84c sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000c84f jne 0x1000cb29 */
  if (!C.zf) goto L_1000cb29;
  /* 1000c855 jmp 0x1000c8e9 */
  goto L_1000c8e9;
L_1000c85a:;
  /* 1000c85a push 2 */
  push32((uint32_t)(0x2u));
  /* 1000c85c mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 1000c863 pop eax */
  EAX = (pop32());
  /* 1000c864 jmp 0x1000c80d */
  goto L_1000c80d;
L_1000c866:;
  /* 1000c866 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 1000c86a push 2 */
  push32((uint32_t)(0x2u));
  /* 1000c86c pop eax */
  EAX = (pop32());
  /* 1000c86d jmp 0x1000c80d */
  goto L_1000c80d;
L_1000c86f:;
  /* 1000c86f cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c872 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1000c875 jl 0x1000c87c */
  if ((C.sf!=C.of)) goto L_1000c87c;
  /* 1000c877 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c87a jle 0x1000c82a */
  if ((C.zf||C.sf!=C.of)) goto L_1000c82a;
L_1000c87c:;
  /* 1000c87c cmp bl, byte ptr [0x10010bf4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10010bf4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c882 je 0x1000c944 */
  if (C.zf) goto L_1000c944;
  /* 1000c888 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c88b je 0x1000c8be */
  if (C.zf) goto L_1000c8be;
  /* 1000c88d cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c890 je 0x1000c8be */
  if (C.zf) goto L_1000c8be;
  /* 1000c892 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c895 je 0x1000c8e9 */
  if (C.zf) goto L_1000c8e9;
L_1000c897:;
  /* 1000c897 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c89a jle 0x1000cb29 */
  if ((C.zf||C.sf!=C.of)) goto L_1000cb29;
  /* 1000c8a0 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c8a3 jle 0x1000c8b7 */
  if ((C.zf||C.sf!=C.of)) goto L_1000c8b7;
  /* 1000c8a5 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c8a8 jle 0x1000cb29 */
  if ((C.zf||C.sf!=C.of)) goto L_1000cb29;
  /* 1000c8ae cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c8b1 jg 0x1000cb29 */
  if ((!C.zf&&C.sf==C.of)) goto L_1000cb29;
L_1000c8b7:;
  /* 1000c8b7 push 6 */
  push32((uint32_t)(0x6u));
  /* 1000c8b9 jmp 0x1000ca86 */
  goto L_1000ca86;
L_1000c8be:;
  /* 1000c8be dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1000c8bf push 0xb */
  push32((uint32_t)(0xbu));
  /* 1000c8c1 jmp 0x1000ca86 */
  goto L_1000ca86;
L_1000c8c6:;
  /* 1000c8c6 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c8c9 jl 0x1000c8d4 */
  if ((C.sf!=C.of)) goto L_1000c8d4;
  /* 1000c8cb cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c8ce jle 0x1000c82a */
  if ((C.zf||C.sf!=C.of)) goto L_1000c82a;
L_1000c8d4:;
  /* 1000c8d4 cmp bl, byte ptr [0x10010bf4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10010bf4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c8da je 0x1000c839 */
  if (C.zf) goto L_1000c839;
  /* 1000c8e0 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c8e3 jne 0x1000ca9e */
  if (!C.zf) goto L_1000ca9e;
L_1000c8e9:;
  /* 1000c8e9 mov eax, edx */
  EAX = (EDX);
  /* 1000c8eb jmp 0x1000c80d */
  goto L_1000c80d;
L_1000c8f0:;
  /* 1000c8f0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1000c8f3:;
  /* 1000c8f3 cmp dword ptr [0x10010bf0], edx */
  { uint32_t _a=(r32((uint32_t)(0x10010bf0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c8f9 jle 0x1000c90c */
  if ((C.zf||C.sf!=C.of)) goto L_1000c90c;
  /* 1000c8fb movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1000c8fe push esi */
  push32((uint32_t)(ESI));
  /* 1000c8ff push eax */
  push32((uint32_t)(EAX));
  /* 1000c900 call 0x100093cb */
  push32(0x1000c905u); f_100093cb();
  /* 1000c905 pop ecx */
  ECX = (pop32());
  /* 1000c906 pop ecx */
  ECX = (pop32());
  /* 1000c907 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000c909 pop edx */
  EDX = (pop32());
  /* 1000c90a jmp 0x1000c91a */
  goto L_1000c91a;
L_1000c90c:;
  /* 1000c90c mov ecx, dword ptr [0x100109e0] */
  ECX = (r32((uint32_t)(0x100109e0)));
  /* 1000c912 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1000c915 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1000c918 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1000c91a:;
  /* 1000c91a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000c91c je 0x1000c93c */
  if (C.zf) goto L_1000c93c;
  /* 1000c91e cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c922 jae 0x1000c934 */
  if (!C.cf) goto L_1000c934;
  /* 1000c924 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1000c927 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1000c92a sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1000c92d inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 1000c930 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 1000c932 jmp 0x1000c937 */
  goto L_1000c937;
L_1000c934:;
  /* 1000c934 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_1000c937:;
  /* 1000c937 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1000c939 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1000c93a jmp 0x1000c8f3 */
  goto L_1000c8f3;
L_1000c93c:;
  /* 1000c93c cmp bl, byte ptr [0x10010bf4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10010bf4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c942 jne 0x1000c9ab */
  if (!C.zf) goto L_1000c9ab;
L_1000c944:;
  /* 1000c944 mov eax, esi */
  EAX = (ESI);
  /* 1000c946 jmp 0x1000c80d */
  goto L_1000c80d;
L_1000c94b:;
  /* 1000c94b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c94f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1000c952 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1000c955 jne 0x1000c964 */
  if (!C.zf) goto L_1000c964;
L_1000c957:;
  /* 1000c957 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c95a jne 0x1000c964 */
  if (!C.zf) goto L_1000c964;
  /* 1000c95c dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1000c95f mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1000c961 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1000c962 jmp 0x1000c957 */
  goto L_1000c957;
L_1000c964:;
  /* 1000c964 cmp dword ptr [0x10010bf0], edx */
  { uint32_t _a=(r32((uint32_t)(0x10010bf0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c96a jle 0x1000c97d */
  if ((C.zf||C.sf!=C.of)) goto L_1000c97d;
  /* 1000c96c movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1000c96f push esi */
  push32((uint32_t)(ESI));
  /* 1000c970 push eax */
  push32((uint32_t)(EAX));
  /* 1000c971 call 0x100093cb */
  push32(0x1000c976u); f_100093cb();
  /* 1000c976 pop ecx */
  ECX = (pop32());
  /* 1000c977 pop ecx */
  ECX = (pop32());
  /* 1000c978 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000c97a pop edx */
  EDX = (pop32());
  /* 1000c97b jmp 0x1000c98b */
  goto L_1000c98b;
L_1000c97d:;
  /* 1000c97d mov ecx, dword ptr [0x100109e0] */
  ECX = (r32((uint32_t)(0x100109e0)));
  /* 1000c983 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1000c986 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1000c989 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1000c98b:;
  /* 1000c98b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000c98d je 0x1000c9ab */
  if (C.zf) goto L_1000c9ab;
  /* 1000c98f cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c993 jae 0x1000c9a6 */
  if (!C.cf) goto L_1000c9a6;
  /* 1000c995 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1000c998 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1000c99b sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1000c99e inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 1000c9a1 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1000c9a4 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_1000c9a6:;
  /* 1000c9a6 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1000c9a8 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1000c9a9 jmp 0x1000c964 */
  goto L_1000c964;
L_1000c9ab:;
  /* 1000c9ab cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c9ae je 0x1000c8be */
  if (C.zf) goto L_1000c8be;
  /* 1000c9b4 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c9b7 je 0x1000c8be */
  if (C.zf) goto L_1000c8be;
  /* 1000c9bd jmp 0x1000c897 */
  goto L_1000c897;
L_1000c9c2:;
  /* 1000c9c2 cmp dword ptr [0x10010bf0], edx */
  { uint32_t _a=(r32((uint32_t)(0x10010bf0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000c9c8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1000c9cb jle 0x1000c9de */
  if ((C.zf||C.sf!=C.of)) goto L_1000c9de;
  /* 1000c9cd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1000c9d0 push esi */
  push32((uint32_t)(ESI));
  /* 1000c9d1 push eax */
  push32((uint32_t)(EAX));
  /* 1000c9d2 call 0x100093cb */
  push32(0x1000c9d7u); f_100093cb();
  /* 1000c9d7 pop ecx */
  ECX = (pop32());
  /* 1000c9d8 pop ecx */
  ECX = (pop32());
  /* 1000c9d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000c9db pop edx */
  EDX = (pop32());
  /* 1000c9dc jmp 0x1000c9ec */
  goto L_1000c9ec;
L_1000c9de:;
  /* 1000c9de mov ecx, dword ptr [0x100109e0] */
  ECX = (r32((uint32_t)(0x100109e0)));
  /* 1000c9e4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1000c9e7 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1000c9ea and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1000c9ec:;
  /* 1000c9ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000c9ee je 0x1000ca9e */
  if (C.zf) goto L_1000ca9e;
  /* 1000c9f4 mov eax, esi */
  EAX = (ESI);
  /* 1000c9f6 jmp 0x1000ca4f */
  goto L_1000ca4f;
L_1000c9f8:;
  /* 1000c9f8 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 1000c9fb cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000c9fe mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1000ca01 jl 0x1000ca08 */
  if ((C.sf!=C.of)) goto L_1000ca08;
  /* 1000ca03 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000ca06 jle 0x1000ca4c */
  if ((C.zf||C.sf!=C.of)) goto L_1000ca4c;
L_1000ca08:;
  /* 1000ca08 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1000ca0b sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000ca0e je 0x1000ca84 */
  if (C.zf) goto L_1000ca84;
  /* 1000ca10 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1000ca11 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1000ca12 je 0x1000ca78 */
  if (C.zf) goto L_1000ca78;
  /* 1000ca14 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000ca17 jne 0x1000cb2c */
  if (!C.zf) goto L_1000cb2c;
L_1000ca1d:;
  /* 1000ca1d push 8 */
  push32((uint32_t)(0x8u));
  /* 1000ca1f jmp 0x1000ca86 */
  goto L_1000ca86;
L_1000ca21:;
  /* 1000ca21 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1000ca24:;
  /* 1000ca24 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000ca27 jne 0x1000ca2e */
  if (!C.zf) goto L_1000ca2e;
  /* 1000ca29 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1000ca2b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1000ca2c jmp 0x1000ca24 */
  goto L_1000ca24;
L_1000ca2e:;
  /* 1000ca2e cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000ca31 jl 0x1000cb29 */
  if ((C.sf!=C.of)) goto L_1000cb29;
  /* 1000ca37 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000ca3a jg 0x1000cb29 */
  if ((!C.zf&&C.sf==C.of)) goto L_1000cb29;
  /* 1000ca40 jmp 0x1000ca4c */
  goto L_1000ca4c;
L_1000ca42:;
  /* 1000ca42 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000ca45 jl 0x1000ca55 */
  if ((C.sf!=C.of)) goto L_1000ca55;
  /* 1000ca47 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000ca4a jg 0x1000ca55 */
  if ((!C.zf&&C.sf==C.of)) goto L_1000ca55;
L_1000ca4c:;
  /* 1000ca4c push 9 */
  push32((uint32_t)(0x9u));
L_1000ca4e:;
  /* 1000ca4e pop eax */
  EAX = (pop32());
L_1000ca4f:;
  /* 1000ca4f dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1000ca50 jmp 0x1000c80d */
  goto L_1000c80d;
L_1000ca55:;
  /* 1000ca55 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000ca58 jne 0x1000ca9e */
  if (!C.zf) goto L_1000ca9e;
  /* 1000ca5a jmp 0x1000ca1d */
  goto L_1000ca1d;
L_1000ca5c:;
  /* 1000ca5c cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000ca60 je 0x1000ca8c */
  if (C.zf) goto L_1000ca8c;
  /* 1000ca62 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1000ca65 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 1000ca68 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000ca6b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1000ca6e je 0x1000ca84 */
  if (C.zf) goto L_1000ca84;
  /* 1000ca70 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1000ca71 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1000ca72 jne 0x1000cb2c */
  if (!C.zf) goto L_1000cb2c;
L_1000ca78:;
  /* 1000ca78 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 1000ca7c push 7 */
  push32((uint32_t)(0x7u));
  /* 1000ca7e pop eax */
  EAX = (pop32());
  /* 1000ca7f jmp 0x1000c80d */
  goto L_1000c80d;
L_1000ca84:;
  /* 1000ca84 push 7 */
  push32((uint32_t)(0x7u));
L_1000ca86:;
  /* 1000ca86 pop eax */
  EAX = (pop32());
  /* 1000ca87 jmp 0x1000c80d */
  goto L_1000c80d;
L_1000ca8c:;
  /* 1000ca8c push 0xa */
  push32((uint32_t)(0xau));
  /* 1000ca8e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1000ca8f pop eax */
  EAX = (pop32());
L_1000ca90:;
  /* 1000ca90 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000ca93 je 0x1000cb2e */
  if (C.zf) goto L_1000cb2e;
  /* 1000ca99 jmp 0x1000c80d */
  goto L_1000c80d;
L_1000ca9e:;
  /* 1000ca9e mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1000caa1 jmp 0x1000cb2e */
  goto L_1000cb2e;
L_1000caa6:;
  /* 1000caa6 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 1000caad xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1000caaf:;
  /* 1000caaf cmp dword ptr [0x10010bf0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10010bf0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000cab6 jle 0x1000cac7 */
  if ((C.zf||C.sf!=C.of)) goto L_1000cac7;
  /* 1000cab8 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1000cabb push 4 */
  push32((uint32_t)(0x4u));
  /* 1000cabd push eax */
  push32((uint32_t)(EAX));
  /* 1000cabe call 0x100093cb */
  push32(0x1000cac3u); f_100093cb();
  /* 1000cac3 pop ecx */
  ECX = (pop32());
  /* 1000cac4 pop ecx */
  ECX = (pop32());
  /* 1000cac5 jmp 0x1000cad6 */
  goto L_1000cad6;
L_1000cac7:;
  /* 1000cac7 mov ecx, dword ptr [0x100109e0] */
  ECX = (r32((uint32_t)(0x100109e0)));
  /* 1000cacd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1000cad0 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1000cad3 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1000cad6:;
  /* 1000cad6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000cad8 je 0x1000caf6 */
  if (C.zf) goto L_1000caf6;
  /* 1000cada movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1000cadd lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 1000cae0 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 1000cae4 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000caea jg 0x1000caf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_1000caf1;
  /* 1000caec mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1000caee inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1000caef jmp 0x1000caaf */
  goto L_1000caaf;
L_1000caf1:;
  /* 1000caf1 mov esi, 0x1451 */
  ESI = (0x1451u);
L_1000caf6:;
  /* 1000caf6 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_1000caf9:;
  /* 1000caf9 cmp dword ptr [0x10010bf0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10010bf0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000cb00 jle 0x1000cb11 */
  if ((C.zf||C.sf!=C.of)) goto L_1000cb11;
  /* 1000cb02 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1000cb05 push 4 */
  push32((uint32_t)(0x4u));
  /* 1000cb07 push eax */
  push32((uint32_t)(EAX));
  /* 1000cb08 call 0x100093cb */
  push32(0x1000cb0du); f_100093cb();
  /* 1000cb0d pop ecx */
  ECX = (pop32());
  /* 1000cb0e pop ecx */
  ECX = (pop32());
  /* 1000cb0f jmp 0x1000cb20 */
  goto L_1000cb20;
L_1000cb11:;
  /* 1000cb11 mov ecx, dword ptr [0x100109e0] */
  ECX = (r32((uint32_t)(0x100109e0)));
  /* 1000cb17 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1000cb1a mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1000cb1d and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1000cb20:;
  /* 1000cb20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000cb22 je 0x1000cb29 */
  if (C.zf) goto L_1000cb29;
  /* 1000cb24 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1000cb26 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1000cb27 jmp 0x1000caf9 */
  goto L_1000caf9;
L_1000cb29:;
  /* 1000cb29 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1000cb2a jmp 0x1000cb2e */
  goto L_1000cb2e;
L_1000cb2c:;
  /* 1000cb2c mov edi, ecx */
  EDI = (ECX);
L_1000cb2e:;
  /* 1000cb2e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1000cb31 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000cb35 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 1000cb37 je 0x1000cc16 */
  if (C.zf) goto L_1000cc16;
  /* 1000cb3d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1000cb3f pop eax */
  EAX = (pop32());
  /* 1000cb40 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000cb43 jbe 0x1000cb5a */
  if ((C.cf||C.zf)) goto L_1000cb5a;
  /* 1000cb45 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000cb49 jl 0x1000cb4e */
  if ((C.sf!=C.of)) goto L_1000cb4e;
  /* 1000cb4b inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_1000cb4e:;
  /* 1000cb4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1000cb51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1000cb54 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1000cb55 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 1000cb58 jmp 0x1000cb5d */
  goto L_1000cb5d;
L_1000cb5a:;
  /* 1000cb5a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1000cb5d:;
  /* 1000cb5d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000cb61 jbe 0x1000cc0c */
  if ((C.cf||C.zf)) goto L_1000cc0c;
L_1000cb67:;
  /* 1000cb67 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1000cb68 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000cb6b jne 0x1000cb75 */
  if (!C.zf) goto L_1000cb75;
  /* 1000cb6d dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1000cb70 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 1000cb73 jmp 0x1000cb67 */
  goto L_1000cb67;
L_1000cb75:;
  /* 1000cb75 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1000cb78 push eax */
  push32((uint32_t)(EAX));
  /* 1000cb79 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1000cb7c push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 1000cb7f push eax */
  push32((uint32_t)(EAX));
  /* 1000cb80 call 0x1000c6ef */
  push32(0x1000cb85u); f_1000c6ef();
  /* 1000cb85 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1000cb88 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1000cb8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000cb8d cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000cb90 jge 0x1000cb94 */
  if ((C.sf==C.of)) goto L_1000cb94;
  /* 1000cb92 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_1000cb94:;
  /* 1000cb94 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000cb97 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000cb9a jne 0x1000cb9f */
  if (!C.zf) goto L_1000cb9f;
  /* 1000cb9c add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1000cb9f:;
  /* 1000cb9f cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000cba2 jne 0x1000cba7 */
  if (!C.zf) goto L_1000cba7;
  /* 1000cba4 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1000cba7:;
  /* 1000cba7 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000cbac jle 0x1000cbde */
  if ((C.zf||C.sf!=C.of)) goto L_1000cbde;
  /* 1000cbae mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_1000cbb5:;
  /* 1000cbb5 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1000cbb8 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 1000cbbb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1000cbbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_1000cbc1:;
  /* 1000cbc1 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000cbc5 je 0x1000cc27 */
  if (C.zf) goto L_1000cc27;
  /* 1000cbc7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1000cbc9 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 1000cbce mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1000cbd3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1000cbd5 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 1000cbdc jmp 0x1000cc3c */
  goto L_1000cc3c;
L_1000cbde:;
  /* 1000cbde cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000cbe3 jge 0x1000cbee */
  if ((C.sf==C.of)) goto L_1000cbee;
  /* 1000cbe5 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 1000cbec jmp 0x1000cbb5 */
  goto L_1000cbb5;
L_1000cbee:;
  /* 1000cbee push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1000cbf1 push eax */
  push32((uint32_t)(EAX));
  /* 1000cbf2 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1000cbf5 push eax */
  push32((uint32_t)(EAX));
  /* 1000cbf6 call 0x1000d68a */
  push32(0x1000cbfbu); f_1000d68a();
  /* 1000cbfb mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1000cbfe mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 1000cc01 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 1000cc04 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 1000cc07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000cc0a jmp 0x1000cbc1 */
  goto L_1000cbc1;
L_1000cc0c:;
  /* 1000cc0c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1000cc0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000cc10 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1000cc12 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1000cc14 jmp 0x1000cbc1 */
  goto L_1000cbc1;
L_1000cc16:;
  /* 1000cc16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1000cc18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000cc1a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1000cc1c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1000cc1e mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 1000cc25 jmp 0x1000cc3c */
  goto L_1000cc3c;
L_1000cc27:;
  /* 1000cc27 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000cc2b je 0x1000cc3c */
  if (C.zf) goto L_1000cc3c;
  /* 1000cc2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1000cc2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000cc31 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1000cc33 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1000cc35 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_1000cc3c:;
  /* 1000cc3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000cc3f or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 1000cc42 pop edi */
  EDI = (pop32());
  /* 1000cc43 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 1000cc46 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 1000cc49 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 1000cc4d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1000cc50 pop esi */
  ESI = (pop32());
  /* 1000cc51 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1000cc54 pop ebx */
  EBX = (pop32());
  /* 1000cc55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000cc56 ret  */
  ESPCHK(0x1000c7b6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc87 @ 0x1000cc87 (659 bytes, 232 insns) */
void f_1000cc87(void) {
  FTRACE(0x1000cc87u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000cc87 push ebp */
  push32((uint32_t)(EBP));
  /* 1000cc88 mov ebp, esp */
  EBP = (ESP);
  /* 1000cc8a sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000cc8d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1000cc90 push ebx */
  push32((uint32_t)(EBX));
  /* 1000cc91 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1000cc94 push esi */
  push32((uint32_t)(ESI));
  /* 1000cc95 mov ecx, eax */
  ECX = (EAX);
  /* 1000cc97 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 1000cc9c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1000cca2 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1000cca4 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1000cca7 push edi */
  push32((uint32_t)(EDI));
  /* 1000cca8 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 1000ccac mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 1000ccb0 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 1000ccb4 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 1000ccb8 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 1000ccbc mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 1000ccc0 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 1000ccc4 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 1000ccc8 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 1000cccc mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 1000ccd0 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 1000ccd4 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 1000ccd8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1000ccdf mov edx, eax */
  EDX = (EAX);
  /* 1000cce1 je 0x1000cce9 */
  if (C.zf) goto L_1000cce9;
  /* 1000cce3 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 1000cce7 jmp 0x1000cced */
  goto L_1000cced;
L_1000cce9:;
  /* 1000cce9 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_1000cced:;
  /* 1000cced mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1000ccf0 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 1000ccf3 jne 0x1000cd13 */
  if (!C.zf) goto L_1000cd13;
  /* 1000ccf5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1000ccf7 jne 0x1000cd13 */
  if (!C.zf) goto L_1000cd13;
  /* 1000ccf9 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000ccfc jne 0x1000cd13 */
  if (!C.zf) goto L_1000cd13;
L_1000ccfe:;
  /* 1000ccfe and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1000cd02 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1000cd06 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 1000cd0a mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 1000cd0e jmp 0x1000cf11 */
  goto L_1000cf11;
L_1000cd13:;
  /* 1000cd13 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1000cd16 jne 0x1000cd92 */
  if (!C.zf) goto L_1000cd92;
  /* 1000cd18 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1000cd1d mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 1000cd22 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000cd24 jne 0x1000cd2c */
  if (!C.zf) goto L_1000cd2c;
  /* 1000cd26 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000cd2a je 0x1000cd3b */
  if (C.zf) goto L_1000cd3b;
L_1000cd2c:;
  /* 1000cd2c test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 1000cd32 jne 0x1000cd3b */
  if (!C.zf) goto L_1000cd3b;
  /* 1000cd34 push 0x1000e5a0 */
  push32((uint32_t)(0x1000e5a0u));
  /* 1000cd39 jmp 0x1000cd81 */
  goto L_1000cd81;
L_1000cd3b:;
  /* 1000cd3b test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1000cd3e je 0x1000cd55 */
  if (C.zf) goto L_1000cd55;
  /* 1000cd40 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000cd46 jne 0x1000cd55 */
  if (!C.zf) goto L_1000cd55;
  /* 1000cd48 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000cd4c jne 0x1000cd7c */
  if (!C.zf) goto L_1000cd7c;
  /* 1000cd4e push 0x1000e598 */
  push32((uint32_t)(0x1000e598u));
  /* 1000cd53 jmp 0x1000cd64 */
  goto L_1000cd64;
L_1000cd55:;
  /* 1000cd55 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000cd57 jne 0x1000cd7c */
  if (!C.zf) goto L_1000cd7c;
  /* 1000cd59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000cd5d jne 0x1000cd7c */
  if (!C.zf) goto L_1000cd7c;
  /* 1000cd5f push 0x1000e590 */
  push32((uint32_t)(0x1000e590u));
L_1000cd64:;
  /* 1000cd64 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1000cd67 push eax */
  push32((uint32_t)(EAX));
  /* 1000cd68 call 0x10009af0 */
  push32(0x1000cd6du); f_10009af0();
  /* 1000cd6d pop ecx */
  ECX = (pop32());
  /* 1000cd6e mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 1000cd72 pop ecx */
  ECX = (pop32());
L_1000cd73:;
  /* 1000cd73 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1000cd77 jmp 0x1000ceea */
  goto L_1000ceea;
L_1000cd7c:;
  /* 1000cd7c push 0x1000e588 */
  push32((uint32_t)(0x1000e588u));
L_1000cd81:;
  /* 1000cd81 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1000cd84 push eax */
  push32((uint32_t)(EAX));
  /* 1000cd85 call 0x10009af0 */
  push32(0x1000cd8au); f_10009af0();
  /* 1000cd8a pop ecx */
  ECX = (pop32());
  /* 1000cd8b mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 1000cd8f pop ecx */
  ECX = (pop32());
  /* 1000cd90 jmp 0x1000cd73 */
  goto L_1000cd73;
L_1000cd92:;
  /* 1000cd92 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 1000cd95 mov ecx, edi */
  ECX = (EDI);
  /* 1000cd97 mov esi, eax */
  ESI = (EAX);
  /* 1000cd99 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 1000cd9c imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1000cda2 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 1000cda5 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 1000cdaa push 1 */
  push32((uint32_t)(0x1u));
  /* 1000cdac lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 1000cdaf mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 1000cdb3 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1000cdb6 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 1000cdb9 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 1000cdc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000cdc3 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1000cdc6 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 1000cdc9 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 1000cdcc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1000cdce push eax */
  push32((uint32_t)(EAX));
  /* 1000cdcf lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1000cdd2 push eax */
  push32((uint32_t)(EAX));
  /* 1000cdd3 call 0x1000d68a */
  push32(0x1000cdd8u); f_1000d68a();
  /* 1000cdd8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000cddb cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1000cde1 jb 0x1000cdf3 */
  if (C.cf) goto L_1000cdf3;
  /* 1000cde3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1000cde6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1000cde7 push eax */
  push32((uint32_t)(EAX));
  /* 1000cde8 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1000cdeb push eax */
  push32((uint32_t)(EAX));
  /* 1000cdec call 0x1000d46a */
  push32(0x1000cdf1u); f_1000d46a();
  /* 1000cdf1 pop ecx */
  ECX = (pop32());
  /* 1000cdf2 pop ecx */
  ECX = (pop32());
L_1000cdf3:;
  /* 1000cdf3 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 1000cdf7 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 1000cdfa je 0x1000ce0d */
  if (C.zf) goto L_1000ce0d;
  /* 1000cdfc mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 1000cdff movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 1000ce02 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000ce04 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1000ce06 jg 0x1000ce10 */
  if ((!C.zf&&C.sf==C.of)) goto L_1000ce10;
  /* 1000ce08 jmp 0x1000ccfe */
  goto L_1000ccfe;
L_1000ce0d:;
  /* 1000ce0d mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_1000ce10:;
  /* 1000ce10 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000ce13 jle 0x1000ce18 */
  if ((C.zf||C.sf!=C.of)) goto L_1000ce18;
  /* 1000ce15 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1000ce17 pop edi */
  EDI = (pop32());
L_1000ce18:;
  /* 1000ce18 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 1000ce1c sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000ce22 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 1000ce27 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_1000ce2e:;
  /* 1000ce2e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1000ce31 push eax */
  push32((uint32_t)(EAX));
  /* 1000ce32 call 0x1000c694 */
  push32(0x1000ce37u); f_1000c694();
  /* 1000ce37 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 1000ce3a pop ecx */
  ECX = (pop32());
  /* 1000ce3b jne 0x1000ce2e */
  if (!C.zf) goto L_1000ce2e;
  /* 1000ce3d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1000ce3f jge 0x1000ce58 */
  if ((C.sf==C.of)) goto L_1000ce58;
  /* 1000ce41 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 1000ce43 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 1000ce49 jle 0x1000ce58 */
  if ((C.zf||C.sf!=C.of)) goto L_1000ce58;
L_1000ce4b:;
  /* 1000ce4b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1000ce4e push eax */
  push32((uint32_t)(EAX));
  /* 1000ce4f call 0x1000c6c2 */
  push32(0x1000ce54u); f_1000c6c2();
  /* 1000ce54 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1000ce55 pop ecx */
  ECX = (pop32());
  /* 1000ce56 jne 0x1000ce4b */
  if (!C.zf) goto L_1000ce4b;
L_1000ce58:;
  /* 1000ce58 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 1000ce5b lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1000ce5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1000ce60 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 1000ce63 jle 0x1000ceb5 */
  if ((C.zf||C.sf!=C.of)) goto L_1000ceb5;
  /* 1000ce65 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_1000ce68:;
  /* 1000ce68 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 1000ce6b lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 1000ce6e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1000ce6f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1000ce70 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1000ce73 push eax */
  push32((uint32_t)(EAX));
  /* 1000ce74 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1000ce75 call 0x1000c694 */
  push32(0x1000ce7au); f_1000c694();
  /* 1000ce7a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1000ce7d push eax */
  push32((uint32_t)(EAX));
  /* 1000ce7e call 0x1000c694 */
  push32(0x1000ce83u); f_1000c694();
  /* 1000ce83 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1000ce86 push eax */
  push32((uint32_t)(EAX));
  /* 1000ce87 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1000ce8a push eax */
  push32((uint32_t)(EAX));
  /* 1000ce8b call 0x1000c636 */
  push32(0x1000ce90u); f_1000c636();
  /* 1000ce90 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1000ce93 push eax */
  push32((uint32_t)(EAX));
  /* 1000ce94 call 0x1000c694 */
  push32(0x1000ce99u); f_1000c694();
  /* 1000ce99 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 1000ce9c mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1000ce9f and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 1000cea3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000cea6 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1000cea8 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 1000ceab dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 1000ceae mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1000ceb0 jne 0x1000ce68 */
  if (!C.zf) goto L_1000ce68;
  /* 1000ceb2 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_1000ceb5:;
  /* 1000ceb5 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 1000ceb8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1000ceb9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1000ceba cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000cebd lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 1000cec0 jl 0x1000cef2 */
  if ((C.sf!=C.of)) goto L_1000cef2;
L_1000cec2:;
  /* 1000cec2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000cec4 jb 0x1000ced5 */
  if (C.cf) goto L_1000ced5;
  /* 1000cec6 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000cec9 jne 0x1000ced1 */
  if (!C.zf) goto L_1000ced1;
  /* 1000cecb mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 1000cece dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1000cecf jmp 0x1000cec2 */
  goto L_1000cec2;
L_1000ced1:;
  /* 1000ced1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000ced3 jae 0x1000ced9 */
  if (!C.cf) goto L_1000ced9;
L_1000ced5:;
  /* 1000ced5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1000ced6 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_1000ced9:;
  /* 1000ced9 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_1000cedb:;
  /* 1000cedb sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1000cedd sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1000cedf mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 1000cee2 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1000cee5 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_1000ceea:;
  /* 1000ceea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1000ceed:;
  /* 1000ceed pop edi */
  EDI = (pop32());
  /* 1000ceee pop esi */
  ESI = (pop32());
  /* 1000ceef pop ebx */
  EBX = (pop32());
  /* 1000cef0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000cef1 ret  */
  ESPCHK(0x1000cc87u, _esp0);
  ESP += 4; return;
L_1000cef2:;
  /* 1000cef2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000cef4 jb 0x1000cf02 */
  if (C.cf) goto L_1000cf02;
  /* 1000cef6 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000cef9 jne 0x1000cefe */
  if (!C.zf) goto L_1000cefe;
  /* 1000cefb dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1000cefc jmp 0x1000cef2 */
  goto L_1000cef2;
L_1000cefe:;
  /* 1000cefe cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000cf00 jae 0x1000cedb */
  if (!C.cf) goto L_1000cedb;
L_1000cf02:;
  /* 1000cf02 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1000cf06 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1000cf0a mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 1000cf0e mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_1000cf11:;
  /* 1000cf11 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 1000cf15 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000cf17 pop eax */
  EAX = (pop32());
  /* 1000cf18 jmp 0x1000ceed */
  goto L_1000ceed;
}

/* FUN_1000cf1a @ 0x1000cf1a (27 bytes, 13 insns) */
void f_1000cf1a(void) {
  FTRACE(0x1000cf1au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000cf1a mov eax, dword ptr [0x1001687c] */
  EAX = (r32((uint32_t)(0x1001687c)));
  /* 1000cf1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000cf21 je 0x1000cf32 */
  if (C.zf) goto L_1000cf32;
  /* 1000cf23 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1000cf27 call eax */
  call_ind((uint32_t)(EAX), 0x1000cf29u);
  /* 1000cf29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000cf2b pop ecx */
  ECX = (pop32());
  /* 1000cf2c je 0x1000cf32 */
  if (C.zf) goto L_1000cf32;
  /* 1000cf2e push 1 */
  push32((uint32_t)(0x1u));
  /* 1000cf30 pop eax */
  EAX = (pop32());
  /* 1000cf31 ret  */
  ESPCHK(0x1000cf1au, _esp0);
  ESP += 4; return;
L_1000cf32:;
  /* 1000cf32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000cf34 ret  */
  ESPCHK(0x1000cf1au, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1000cf38 (32 bytes, 18 insns) */
void f_1000cf38(void) {
  FTRACE(0x1000cf38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000cf38 push ebp */
  push32((uint32_t)(EBP));
  /* 1000cf39 mov ebp, esp */
  EBP = (ESP);
  /* 1000cf3b push ebx */
  push32((uint32_t)(EBX));
  /* 1000cf3c push esi */
  push32((uint32_t)(ESI));
  /* 1000cf3d push edi */
  push32((uint32_t)(EDI));
  /* 1000cf3e push ebp */
  push32((uint32_t)(EBP));
  /* 1000cf3f push 0 */
  push32((uint32_t)(0x0u));
  /* 1000cf41 push 0 */
  push32((uint32_t)(0x0u));
  /* 1000cf43 push 0x1000cf50 */
  push32((uint32_t)(0x1000cf50u));
  /* 1000cf48 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1000cf4b call 0x1000da34 */
  push32(0x1000cf50u); f_1000da34();
  /* 1000cf50 pop ebp */
  EBP = (pop32());
  /* 1000cf51 pop edi */
  EDI = (pop32());
  /* 1000cf52 pop esi */
  ESI = (pop32());
  /* 1000cf53 pop ebx */
  EBX = (pop32());
  /* 1000cf54 mov esp, ebp */
  ESP = (EBP);
  /* 1000cf56 pop ebp */
  EBP = (pop32());
  /* 1000cf57 ret  */
  ESPCHK(0x1000cf38u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1000cf7a (104 bytes, 33 insns) */
void f_1000cf7a(void) {
  FTRACE(0x1000cf7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000cf7a push ebx */
  push32((uint32_t)(EBX));
  /* 1000cf7b push esi */
  push32((uint32_t)(ESI));
  /* 1000cf7c push edi */
  push32((uint32_t)(EDI));
  /* 1000cf7d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1000cf81 push eax */
  push32((uint32_t)(EAX));
  /* 1000cf82 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1000cf84 push 0x1000cf58 */
  push32((uint32_t)(0x1000cf58u));
  /* 1000cf89 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1000cf90 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1000cf97:;
  /* 1000cf97 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1000cf9b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1000cf9e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1000cfa1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000cfa4 je 0x1000cfd4 */
  if (C.zf) goto L_1000cfd4;
  /* 1000cfa6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000cfaa je 0x1000cfd4 */
  if (C.zf) goto L_1000cfd4;
  /* 1000cfac lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1000cfaf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1000cfb2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1000cfb6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1000cfb9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000cfbe jne 0x1000cfd2 */
  if (!C.zf) goto L_1000cfd2;
  /* 1000cfc0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1000cfc5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1000cfc9 call 0x1000d00e */
  push32(0x1000cfceu); f_1000d00e();
  /* 1000cfce call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1000cfd2u);
L_1000cfd2:;
  /* 1000cfd2 jmp 0x1000cf97 */
  goto L_1000cf97;
L_1000cfd4:;
  /* 1000cfd4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1000cfdb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000cfde pop edi */
  EDI = (pop32());
  /* 1000cfdf pop esi */
  ESI = (pop32());
  /* 1000cfe0 pop ebx */
  EBX = (pop32());
  /* 1000cfe1 ret  */
  ESPCHK(0x1000cf7au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d00e @ 0x1000d00e (24 bytes, 10 insns) */
void f_1000d00e(void) {
  FTRACE(0x1000d00eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000d00e push ebx */
  push32((uint32_t)(EBX));
  /* 1000d00f push ecx */
  push32((uint32_t)(ECX));
  /* 1000d010 mov ebx, 0x10013114 */
  EBX = (0x10013114u);
  /* 1000d015 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000d018 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1000d01b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1000d01e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1000d021 pop ecx */
  ECX = (pop32());
  /* 1000d022 pop ebx */
  EBX = (pop32());
  /* 1000d023 ret 4 */
  ESPCHK(0x1000d00eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d0ed @ 0x1000d0ed (27 bytes, 11 insns) */
void f_1000d0ed(void) {
  FTRACE(0x1000d0edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000d0ed push ebp */
  push32((uint32_t)(EBP));
  /* 1000d0ee mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1000d0f2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1000d0f4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1000d0f7 push eax */
  push32((uint32_t)(EAX));
  /* 1000d0f8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1000d0fb push eax */
  push32((uint32_t)(EAX));
  /* 1000d0fc call 0x1000cf7a */
  push32(0x1000d101u); f_1000cf7a();
  /* 1000d101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000d104 pop ebp */
  EBP = (pop32());
  /* 1000d105 ret 4 */
  ESPCHK(0x1000d0edu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d108 @ 0x1000d108 (111 bytes, 44 insns) */
void f_1000d108(void) {
  FTRACE(0x1000d108u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000d108 push ebx */
  push32((uint32_t)(EBX));
  /* 1000d109 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1000d10b cmp dword ptr [0x10016848], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10016848))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d111 jne 0x1000d126 */
  if (!C.zf) goto L_1000d126;
  /* 1000d113 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1000d117 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d11a jl 0x1000d175 */
  if ((C.sf!=C.of)) goto L_1000d175;
  /* 1000d11c cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d11f jg 0x1000d175 */
  if ((!C.zf&&C.sf==C.of)) goto L_1000d175;
  /* 1000d121 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000d124 pop ebx */
  EBX = (pop32());
  /* 1000d125 ret  */
  ESPCHK(0x1000d108u, _esp0);
  ESP += 4; return;
L_1000d126:;
  /* 1000d126 push esi */
  push32((uint32_t)(ESI));
  /* 1000d127 mov esi, 0x100169c4 */
  ESI = (0x100169c4u);
  /* 1000d12c push edi */
  push32((uint32_t)(EDI));
  /* 1000d12d push esi */
  push32((uint32_t)(ESI));
  /* 1000d12e call dword ptr [0x1000e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e090))), 0x1000d134u);
  /* 1000d134 cmp dword ptr [0x100169c0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100169c0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d13a mov edi, dword ptr [0x1000e08c] */
  EDI = (r32((uint32_t)(0x1000e08c)));
  /* 1000d140 je 0x1000d150 */
  if (C.zf) goto L_1000d150;
  /* 1000d142 push esi */
  push32((uint32_t)(ESI));
  /* 1000d143 call edi */
  call_ind((uint32_t)(EDI), 0x1000d145u);
  /* 1000d145 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1000d147 call 0x1000a013 */
  push32(0x1000d14cu); f_1000a013();
  /* 1000d14c pop ecx */
  ECX = (pop32());
  /* 1000d14d push 1 */
  push32((uint32_t)(0x1u));
  /* 1000d14f pop ebx */
  EBX = (pop32());
L_1000d150:;
  /* 1000d150 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1000d154 call 0x1000d177 */
  push32(0x1000d159u); f_1000d177();
  /* 1000d159 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1000d15b pop ecx */
  ECX = (pop32());
  /* 1000d15c mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1000d160 je 0x1000d16c */
  if (C.zf) goto L_1000d16c;
  /* 1000d162 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1000d164 call 0x1000a074 */
  push32(0x1000d169u); f_1000a074();
  /* 1000d169 pop ecx */
  ECX = (pop32());
  /* 1000d16a jmp 0x1000d16f */
  goto L_1000d16f;
L_1000d16c:;
  /* 1000d16c push esi */
  push32((uint32_t)(ESI));
  /* 1000d16d call edi */
  call_ind((uint32_t)(EDI), 0x1000d16fu);
L_1000d16f:;
  /* 1000d16f mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1000d173 pop edi */
  EDI = (pop32());
  /* 1000d174 pop esi */
  ESI = (pop32());
L_1000d175:;
  /* 1000d175 pop ebx */
  EBX = (pop32());
  /* 1000d176 ret  */
  ESPCHK(0x1000d108u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d177 @ 0x1000d177 (204 bytes, 71 insns) */
void f_1000d177(void) {
  FTRACE(0x1000d177u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000d177 push ebp */
  push32((uint32_t)(EBP));
  /* 1000d178 mov ebp, esp */
  EBP = (ESP);
  /* 1000d17a push ecx */
  push32((uint32_t)(ECX));
  /* 1000d17b cmp dword ptr [0x10016848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10016848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d182 push ebx */
  push32((uint32_t)(EBX));
  /* 1000d183 jne 0x1000d1a2 */
  if (!C.zf) goto L_1000d1a2;
  /* 1000d185 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000d188 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d18b jl 0x1000d240 */
  if ((C.sf!=C.of)) goto L_1000d240;
  /* 1000d191 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d194 jg 0x1000d240 */
  if ((!C.zf&&C.sf==C.of)) goto L_1000d240;
  /* 1000d19a sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000d19d jmp 0x1000d240 */
  goto L_1000d240;
L_1000d1a2:;
  /* 1000d1a2 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000d1a5 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d1ab jge 0x1000d1d5 */
  if ((C.sf==C.of)) goto L_1000d1d5;
  /* 1000d1ad cmp dword ptr [0x10010bf0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10010bf0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d1b4 jle 0x1000d1c2 */
  if ((C.zf||C.sf!=C.of)) goto L_1000d1c2;
  /* 1000d1b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1000d1b8 push ebx */
  push32((uint32_t)(EBX));
  /* 1000d1b9 call 0x100093cb */
  push32(0x1000d1beu); f_100093cb();
  /* 1000d1be pop ecx */
  ECX = (pop32());
  /* 1000d1bf pop ecx */
  ECX = (pop32());
  /* 1000d1c0 jmp 0x1000d1cd */
  goto L_1000d1cd;
L_1000d1c2:;
  /* 1000d1c2 mov eax, dword ptr [0x100109e0] */
  EAX = (r32((uint32_t)(0x100109e0)));
  /* 1000d1c7 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 1000d1ca and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_1000d1cd:;
  /* 1000d1cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000d1cf jne 0x1000d1d5 */
  if (!C.zf) goto L_1000d1d5;
L_1000d1d1:;
  /* 1000d1d1 mov eax, ebx */
  EAX = (EBX);
  /* 1000d1d3 jmp 0x1000d240 */
  goto L_1000d240;
L_1000d1d5:;
  /* 1000d1d5 mov edx, dword ptr [0x100109e0] */
  EDX = (r32((uint32_t)(0x100109e0)));
  /* 1000d1db mov eax, ebx */
  EAX = (EBX);
  /* 1000d1dd sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1000d1e0 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 1000d1e3 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1000d1e8 je 0x1000d1f8 */
  if (C.zf) goto L_1000d1f8;
  /* 1000d1ea and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 1000d1ee mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 1000d1f1 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 1000d1f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1000d1f6 jmp 0x1000d201 */
  goto L_1000d201;
L_1000d1f8:;
  /* 1000d1f8 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 1000d1fc mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 1000d1ff push 1 */
  push32((uint32_t)(0x1u));
L_1000d201:;
  /* 1000d201 pop eax */
  EAX = (pop32());
  /* 1000d202 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1000d205 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000d207 push 0 */
  push32((uint32_t)(0x0u));
  /* 1000d209 push 3 */
  push32((uint32_t)(0x3u));
  /* 1000d20b push ecx */
  push32((uint32_t)(ECX));
  /* 1000d20c push eax */
  push32((uint32_t)(EAX));
  /* 1000d20d lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1000d210 push eax */
  push32((uint32_t)(EAX));
  /* 1000d211 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1000d216 push dword ptr [0x10016848] */
  push32((uint32_t)(r32((uint32_t)(0x10016848))));
  /* 1000d21c call 0x1000c3c6 */
  push32(0x1000d221u); f_1000c3c6();
  /* 1000d221 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000d224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000d226 je 0x1000d1d1 */
  if (C.zf) goto L_1000d1d1;
  /* 1000d228 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d22b jne 0x1000d233 */
  if (!C.zf) goto L_1000d233;
  /* 1000d22d movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1000d231 jmp 0x1000d240 */
  goto L_1000d240;
L_1000d233:;
  /* 1000d233 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 1000d237 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1000d23b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1000d23e or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_1000d240:;
  /* 1000d240 pop ebx */
  EBX = (pop32());
  /* 1000d241 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000d242 ret  */
  ESPCHK(0x1000d177u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d243 @ 0x1000d243 (49 bytes, 20 insns) */
void f_1000d243(void) {
  FTRACE(0x1000d243u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000d243 push esi */
  push32((uint32_t)(ESI));
  /* 1000d244 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1000d248 push edi */
  push32((uint32_t)(EDI));
  /* 1000d249 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1000d24c test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 1000d250 je 0x1000d258 */
  if (C.zf) goto L_1000d258;
  /* 1000d252 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1000d256 jmp 0x1000d26f */
  goto L_1000d26f;
L_1000d258:;
  /* 1000d258 push esi */
  push32((uint32_t)(ESI));
  /* 1000d259 call 0x10008f8e */
  push32(0x1000d25eu); f_10008f8e();
  /* 1000d25e push esi */
  push32((uint32_t)(ESI));
  /* 1000d25f call 0x1000d274 */
  push32(0x1000d264u); f_1000d274();
  /* 1000d264 push esi */
  push32((uint32_t)(ESI));
  /* 1000d265 mov edi, eax */
  EDI = (EAX);
  /* 1000d267 call 0x10008fe0 */
  push32(0x1000d26cu); f_10008fe0();
  /* 1000d26c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000d26f:;
  /* 1000d26f mov eax, edi */
  EAX = (EDI);
  /* 1000d271 pop edi */
  EDI = (pop32());
  /* 1000d272 pop esi */
  ESI = (pop32());
  /* 1000d273 ret  */
  ESPCHK(0x1000d243u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x1000d274 (76 bytes, 30 insns) */
void f_1000d274(void) {
  FTRACE(0x1000d274u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000d274 push esi */
  push32((uint32_t)(ESI));
  /* 1000d275 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1000d279 push edi */
  push32((uint32_t)(EDI));
  /* 1000d27a or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1000d27d test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1000d281 je 0x1000d2b7 */
  if (C.zf) goto L_1000d2b7;
  /* 1000d283 push esi */
  push32((uint32_t)(ESI));
  /* 1000d284 call 0x1000c174 */
  push32(0x1000d289u); f_1000c174();
  /* 1000d289 push esi */
  push32((uint32_t)(ESI));
  /* 1000d28a mov edi, eax */
  EDI = (EAX);
  /* 1000d28c call 0x1000d7e6 */
  push32(0x1000d291u); f_1000d7e6();
  /* 1000d291 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1000d294 call 0x1000d706 */
  push32(0x1000d299u); f_1000d706();
  /* 1000d299 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000d29c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000d29e jge 0x1000d2a5 */
  if ((C.sf==C.of)) goto L_1000d2a5;
  /* 1000d2a0 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1000d2a3 jmp 0x1000d2b7 */
  goto L_1000d2b7;
L_1000d2a5:;
  /* 1000d2a5 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 1000d2a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000d2aa je 0x1000d2b7 */
  if (C.zf) goto L_1000d2b7;
  /* 1000d2ac push eax */
  push32((uint32_t)(EAX));
  /* 1000d2ad call 0x1000a1c6 */
  push32(0x1000d2b2u); f_1000a1c6();
  /* 1000d2b2 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 1000d2b6 pop ecx */
  ECX = (pop32());
L_1000d2b7:;
  /* 1000d2b7 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1000d2bb mov eax, edi */
  EAX = (EDI);
  /* 1000d2bd pop edi */
  EDI = (pop32());
  /* 1000d2be pop esi */
  ESI = (pop32());
  /* 1000d2bf ret  */
  ESPCHK(0x1000d274u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2c0 @ 0x1000d2c0 (147 bytes, 52 insns) */
void f_1000d2c0(void) {
  FTRACE(0x1000d2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000d2c0 push ebx */
  push32((uint32_t)(EBX));
  /* 1000d2c1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 1000d2c5 cmp ebx, dword ptr [0x10017d40] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10017d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d2cb push esi */
  push32((uint32_t)(ESI));
  /* 1000d2cc push edi */
  push32((uint32_t)(EDI));
  /* 1000d2cd jae 0x1000d341 */
  if (!C.cf) goto L_1000d341;
  /* 1000d2cf mov eax, ebx */
  EAX = (EBX);
  /* 1000d2d1 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1000d2d4 lea edi, [eax*4 + 0x10017c40] */
  EDI = ((uint32_t)(EAX*4 + 0x10017c40));
  /* 1000d2db mov eax, ebx */
  EAX = (EBX);
  /* 1000d2dd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1000d2e0 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1000d2e3 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1000d2e5 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1000d2e8 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1000d2ed je 0x1000d341 */
  if (C.zf) goto L_1000d341;
  /* 1000d2ef push ebx */
  push32((uint32_t)(EBX));
  /* 1000d2f0 call 0x1000c044 */
  push32(0x1000d2f5u); f_1000c044();
  /* 1000d2f5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1000d2f7 pop ecx */
  ECX = (pop32());
  /* 1000d2f8 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1000d2fd je 0x1000d328 */
  if (C.zf) goto L_1000d328;
  /* 1000d2ff push ebx */
  push32((uint32_t)(EBX));
  /* 1000d300 call 0x1000c002 */
  push32(0x1000d305u); f_1000c002();
  /* 1000d305 pop ecx */
  ECX = (pop32());
  /* 1000d306 push eax */
  push32((uint32_t)(EAX));
  /* 1000d307 call dword ptr [0x1000e0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e0d0))), 0x1000d30du);
  /* 1000d30d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000d30f jne 0x1000d31b */
  if (!C.zf) goto L_1000d31b;
  /* 1000d311 call dword ptr [0x1000e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e03c))), 0x1000d317u);
  /* 1000d317 mov esi, eax */
  ESI = (EAX);
  /* 1000d319 jmp 0x1000d31d */
  goto L_1000d31d;
L_1000d31b:;
  /* 1000d31b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1000d31d:;
  /* 1000d31d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1000d31f je 0x1000d336 */
  if (C.zf) goto L_1000d336;
  /* 1000d321 call 0x1000bf7a */
  push32(0x1000d326u); f_1000bf7a();
  /* 1000d326 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1000d328:;
  /* 1000d328 call 0x1000bf71 */
  push32(0x1000d32du); f_1000bf71();
  /* 1000d32d mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1000d333 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_1000d336:;
  /* 1000d336 push ebx */
  push32((uint32_t)(EBX));
  /* 1000d337 call 0x1000c0a3 */
  push32(0x1000d33cu); f_1000c0a3();
  /* 1000d33c pop ecx */
  ECX = (pop32());
  /* 1000d33d mov eax, esi */
  EAX = (ESI);
  /* 1000d33f jmp 0x1000d34f */
  goto L_1000d34f;
L_1000d341:;
  /* 1000d341 call 0x1000bf71 */
  push32(0x1000d346u); f_1000bf71();
  /* 1000d346 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1000d34c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1000d34f:;
  /* 1000d34f pop edi */
  EDI = (pop32());
  /* 1000d350 pop esi */
  ESI = (pop32());
  /* 1000d351 pop ebx */
  EBX = (pop32());
  /* 1000d352 ret  */
  ESPCHK(0x1000d2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3f0 @ 0x1000d3f0 (62 bytes, 35 insns) */
void f_1000d3f0(void) {
  FTRACE(0x1000d3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000d3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1000d3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1000d3f3 push esi */
  push32((uint32_t)(ESI));
  /* 1000d3f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000d3f6 push eax */
  push32((uint32_t)(EAX));
  /* 1000d3f7 push eax */
  push32((uint32_t)(EAX));
  /* 1000d3f8 push eax */
  push32((uint32_t)(EAX));
  /* 1000d3f9 push eax */
  push32((uint32_t)(EAX));
  /* 1000d3fa push eax */
  push32((uint32_t)(EAX));
  /* 1000d3fb push eax */
  push32((uint32_t)(EAX));
  /* 1000d3fc push eax */
  push32((uint32_t)(EAX));
  /* 1000d3fd push eax */
  push32((uint32_t)(EAX));
  /* 1000d3fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1000d401 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1000d404:;
  /* 1000d404 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1000d406 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1000d408 je 0x1000d411 */
  if (C.zf) goto L_1000d411;
  /* 1000d40a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1000d40b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1000d40b");
  /* 1000d40f jmp 0x1000d404 */
  goto L_1000d404;
L_1000d411:;
  /* 1000d411 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1000d414 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1000d417 nop  */
  /* nop */
L_1000d418:;
  /* 1000d418 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1000d419 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1000d41b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1000d41d je 0x1000d426 */
  if (C.zf) goto L_1000d426;
  /* 1000d41f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1000d420 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1000d420");
  /* 1000d424 jae 0x1000d418 */
  if (!C.cf) goto L_1000d418;
L_1000d426:;
  /* 1000d426 mov eax, ecx */
  EAX = (ECX);
  /* 1000d428 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000d42b pop esi */
  ESI = (pop32());
  /* 1000d42c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000d42d ret  */
  ESPCHK(0x1000d3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d430 @ 0x1000d430 (58 bytes, 32 insns) */
void f_1000d430(void) {
  FTRACE(0x1000d430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000d430 push ebp */
  push32((uint32_t)(EBP));
  /* 1000d431 mov ebp, esp */
  EBP = (ESP);
  /* 1000d433 push esi */
  push32((uint32_t)(ESI));
  /* 1000d434 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000d436 push eax */
  push32((uint32_t)(EAX));
  /* 1000d437 push eax */
  push32((uint32_t)(EAX));
  /* 1000d438 push eax */
  push32((uint32_t)(EAX));
  /* 1000d439 push eax */
  push32((uint32_t)(EAX));
  /* 1000d43a push eax */
  push32((uint32_t)(EAX));
  /* 1000d43b push eax */
  push32((uint32_t)(EAX));
  /* 1000d43c push eax */
  push32((uint32_t)(EAX));
  /* 1000d43d push eax */
  push32((uint32_t)(EAX));
  /* 1000d43e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1000d441 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1000d444:;
  /* 1000d444 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1000d446 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1000d448 je 0x1000d451 */
  if (C.zf) goto L_1000d451;
  /* 1000d44a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1000d44b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1000d44b");
  /* 1000d44f jmp 0x1000d444 */
  goto L_1000d444;
L_1000d451:;
  /* 1000d451 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1000d454:;
  /* 1000d454 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1000d456 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1000d458 je 0x1000d464 */
  if (C.zf) goto L_1000d464;
  /* 1000d45a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1000d45b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1000d45b");
  /* 1000d45f jae 0x1000d454 */
  if (!C.cf) goto L_1000d454;
  /* 1000d461 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1000d464:;
  /* 1000d464 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000d467 pop esi */
  ESI = (pop32());
  /* 1000d468 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000d469 ret  */
  ESPCHK(0x1000d430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d46a @ 0x1000d46a (544 bytes, 177 insns) */
void f_1000d46a(void) {
  FTRACE(0x1000d46au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000d46a push ebp */
  push32((uint32_t)(EBP));
  /* 1000d46b mov ebp, esp */
  EBP = (ESP);
  /* 1000d46d sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000d470 push ebx */
  push32((uint32_t)(EBX));
  /* 1000d471 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1000d474 push esi */
  push32((uint32_t)(ESI));
  /* 1000d475 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1000d478 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 1000d47c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000d47e push edi */
  push32((uint32_t)(EDI));
  /* 1000d47f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1000d482 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1000d485 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1000d488 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1000d48b mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 1000d48f mov edi, ecx */
  EDI = (ECX);
  /* 1000d491 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 1000d496 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 1000d498 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1000d49a and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1000d49c and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 1000d4a2 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1000d4a6 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 1000d4a9 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1000d4ac jae 0x1000d66a */
  if (!C.cf) goto L_1000d66a;
  /* 1000d4b2 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1000d4b7 jae 0x1000d66a */
  if (!C.cf) goto L_1000d66a;
  /* 1000d4bd cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1000d4c2 ja 0x1000d66a */
  if ((!C.cf&&!C.zf)) goto L_1000d66a;
  /* 1000d4c8 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1000d4cd ja 0x1000d4d3 */
  if ((!C.cf&&!C.zf)) goto L_1000d4d3;
  /* 1000d4cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000d4d1 jmp 0x1000d50d */
  goto L_1000d50d;
L_1000d4d3:;
  /* 1000d4d3 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 1000d4d6 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 1000d4db jne 0x1000d4f5 */
  if (!C.zf) goto L_1000d4f5;
  /* 1000d4dd inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1000d4e0 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 1000d4e3 jne 0x1000d4f5 */
  if (!C.zf) goto L_1000d4f5;
  /* 1000d4e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000d4e7 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d4ea jne 0x1000d4f7 */
  if (!C.zf) goto L_1000d4f7;
  /* 1000d4ec cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d4ee jne 0x1000d4f7 */
  if (!C.zf) goto L_1000d4f7;
  /* 1000d4f0 jmp 0x1000d664 */
  goto L_1000d664;
L_1000d4f5:;
  /* 1000d4f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1000d4f7:;
  /* 1000d4f7 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1000d4fa jne 0x1000d51a */
  if (!C.zf) goto L_1000d51a;
  /* 1000d4fc inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1000d4ff test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 1000d502 jne 0x1000d51a */
  if (!C.zf) goto L_1000d51a;
  /* 1000d504 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d507 jne 0x1000d51a */
  if (!C.zf) goto L_1000d51a;
  /* 1000d509 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d50b jne 0x1000d51a */
  if (!C.zf) goto L_1000d51a;
L_1000d50d:;
  /* 1000d50d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1000d510 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1000d513 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1000d515 jmp 0x1000d685 */
  goto L_1000d685;
L_1000d51a:;
  /* 1000d51a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1000d51d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1000d520 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1000d523 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_1000d52a:;
  /* 1000d52a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1000d52d add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000d52f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d533 jle 0x1000d57e */
  if ((C.zf||C.sf!=C.of)) goto L_1000d57e;
  /* 1000d535 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000d537 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 1000d53a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1000d53d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1000d540 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1000d543 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1000d546:;
  /* 1000d546 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1000d549 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1000d54c movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 1000d54f movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 1000d552 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1000d555 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1000d558 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000d55b push ecx */
  push32((uint32_t)(ECX));
  /* 1000d55c push eax */
  push32((uint32_t)(EAX));
  /* 1000d55d push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 1000d55f call 0x1000c615 */
  push32(0x1000d564u); f_1000c615();
  /* 1000d564 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000d567 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000d569 je 0x1000d571 */
  if (C.zf) goto L_1000d571;
  /* 1000d56b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1000d56e inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_1000d571:;
  /* 1000d571 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1000d575 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1000d579 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 1000d57c jne 0x1000d546 */
  if (!C.zf) goto L_1000d546;
L_1000d57e:;
  /* 1000d57e add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1000d582 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 1000d585 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 1000d588 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d58c jg 0x1000d52a */
  if ((!C.zf&&C.sf==C.of)) goto L_1000d52a;
  /* 1000d58e add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1000d595 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1000d59a jle 0x1000d5c1 */
  if ((C.zf||C.sf!=C.of)) goto L_1000d5c1;
L_1000d59c:;
  /* 1000d59c test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 1000d5a0 jne 0x1000d5ba */
  if (!C.zf) goto L_1000d5ba;
  /* 1000d5a2 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1000d5a5 push eax */
  push32((uint32_t)(EAX));
  /* 1000d5a6 call 0x1000c694 */
  push32(0x1000d5abu); f_1000c694();
  /* 1000d5ab add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1000d5b2 pop ecx */
  ECX = (pop32());
  /* 1000d5b3 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1000d5b8 jg 0x1000d59c */
  if ((!C.zf&&C.sf==C.of)) goto L_1000d59c;
L_1000d5ba:;
  /* 1000d5ba cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1000d5bf jg 0x1000d5fa */
  if ((!C.zf&&C.sf==C.of)) goto L_1000d5fa;
L_1000d5c1:;
  /* 1000d5c1 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1000d5c8 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1000d5cd jge 0x1000d5fa */
  if ((C.sf==C.of)) goto L_1000d5fa;
  /* 1000d5cf movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 1000d5d3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1000d5d5 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1000d5d8 mov ebx, eax */
  EBX = (EAX);
L_1000d5da:;
  /* 1000d5da test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 1000d5de je 0x1000d5e3 */
  if (C.zf) goto L_1000d5e3;
  /* 1000d5e0 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_1000d5e3:;
  /* 1000d5e3 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1000d5e6 push eax */
  push32((uint32_t)(EAX));
  /* 1000d5e7 call 0x1000c6c2 */
  push32(0x1000d5ecu); f_1000c6c2();
  /* 1000d5ec dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1000d5ed pop ecx */
  ECX = (pop32());
  /* 1000d5ee jne 0x1000d5da */
  if (!C.zf) goto L_1000d5da;
  /* 1000d5f0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d5f4 je 0x1000d5fa */
  if (C.zf) goto L_1000d5fa;
  /* 1000d5f6 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_1000d5fa:;
  /* 1000d5fa cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1000d600 ja 0x1000d611 */
  if ((!C.cf&&!C.zf)) goto L_1000d611;
  /* 1000d602 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1000d605 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1000d60a cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d60f jne 0x1000d646 */
  if (!C.zf) goto L_1000d646;
L_1000d611:;
  /* 1000d611 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d615 jne 0x1000d643 */
  if (!C.zf) goto L_1000d643;
  /* 1000d617 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 1000d61b cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d61f jne 0x1000d63e */
  if (!C.zf) goto L_1000d63e;
  /* 1000d621 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 1000d625 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1000d62b jne 0x1000d638 */
  if (!C.zf) goto L_1000d638;
  /* 1000d62d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1000d630 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 1000d636 jmp 0x1000d646 */
  goto L_1000d646;
L_1000d638:;
  /* 1000d638 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 1000d63c jmp 0x1000d646 */
  goto L_1000d646;
L_1000d63e:;
  /* 1000d63e inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 1000d641 jmp 0x1000d646 */
  goto L_1000d646;
L_1000d643:;
  /* 1000d643 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_1000d646:;
  /* 1000d646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000d649 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1000d64d jae 0x1000d66a */
  if (!C.cf) goto L_1000d66a;
  /* 1000d64f mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 1000d653 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 1000d655 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 1000d658 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1000d65b mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 1000d65e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1000d661 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_1000d664:;
  /* 1000d664 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 1000d668 jmp 0x1000d685 */
  goto L_1000d685;
L_1000d66a:;
  /* 1000d66a neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 1000d66d sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000d66f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1000d673 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 1000d679 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000d67f and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1000d682 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_1000d685:;
  /* 1000d685 pop edi */
  EDI = (pop32());
  /* 1000d686 pop esi */
  ESI = (pop32());
  /* 1000d687 pop ebx */
  EBX = (pop32());
  /* 1000d688 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000d689 ret  */
  ESPCHK(0x1000d46au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d68a @ 0x1000d68a (124 bytes, 52 insns) */
void f_1000d68a(void) {
  FTRACE(0x1000d68au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000d68a push ebp */
  push32((uint32_t)(EBP));
  /* 1000d68b mov ebp, esp */
  EBP = (ESP);
  /* 1000d68d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000d690 push ebx */
  push32((uint32_t)(EBX));
  /* 1000d691 mov ebx, 0x10013230 */
  EBX = (0x10013230u);
  /* 1000d696 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1000d698 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000d69b cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d69e je 0x1000d703 */
  if (C.zf) goto L_1000d703;
  /* 1000d6a0 jge 0x1000d6b2 */
  if ((C.sf==C.of)) goto L_1000d6b2;
  /* 1000d6a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1000d6a5 mov ebx, 0x10013390 */
  EBX = (0x10013390u);
  /* 1000d6aa neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1000d6ac mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1000d6af sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_1000d6b2:;
  /* 1000d6b2 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d6b5 jne 0x1000d6bd */
  if (!C.zf) goto L_1000d6bd;
  /* 1000d6b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000d6ba mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_1000d6bd:;
  /* 1000d6bd cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d6c0 je 0x1000d703 */
  if (C.zf) goto L_1000d703;
  /* 1000d6c2 push esi */
  push32((uint32_t)(ESI));
  /* 1000d6c3 push edi */
  push32((uint32_t)(EDI));
L_1000d6c4:;
  /* 1000d6c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1000d6c7 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000d6ca sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 1000d6ce and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1000d6d1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d6d3 je 0x1000d6fc */
  if (C.zf) goto L_1000d6fc;
  /* 1000d6d5 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 1000d6d8 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1000d6de lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 1000d6e1 jb 0x1000d6ef */
  if (C.cf) goto L_1000d6ef;
  /* 1000d6e3 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 1000d6e6 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1000d6e7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1000d6e8 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1000d6e9 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 1000d6ec lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_1000d6ef:;
  /* 1000d6ef push esi */
  push32((uint32_t)(ESI));
  /* 1000d6f0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1000d6f3 call 0x1000d46a */
  push32(0x1000d6f8u); f_1000d46a();
  /* 1000d6f8 pop ecx */
  ECX = (pop32());
  /* 1000d6f9 pop ecx */
  ECX = (pop32());
  /* 1000d6fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_1000d6fc:;
  /* 1000d6fc cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d6ff jne 0x1000d6c4 */
  if (!C.zf) goto L_1000d6c4;
  /* 1000d701 pop edi */
  EDI = (pop32());
  /* 1000d702 pop esi */
  ESI = (pop32());
L_1000d703:;
  /* 1000d703 pop ebx */
  EBX = (pop32());
  /* 1000d704 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000d705 ret  */
  ESPCHK(0x1000d68au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d706 @ 0x1000d706 (93 bytes, 32 insns) */
void f_1000d706(void) {
  FTRACE(0x1000d706u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000d706 push esi */
  push32((uint32_t)(ESI));
  /* 1000d707 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1000d70b cmp esi, dword ptr [0x10017d40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10017d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d711 jae 0x1000d74b */
  if (!C.cf) goto L_1000d74b;
  /* 1000d713 mov ecx, esi */
  ECX = (ESI);
  /* 1000d715 mov eax, esi */
  EAX = (ESI);
  /* 1000d717 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1000d71a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1000d71d mov ecx, dword ptr [ecx*4 + 0x10017c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10017c40)));
  /* 1000d724 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1000d727 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1000d72c je 0x1000d74b */
  if (C.zf) goto L_1000d74b;
  /* 1000d72e push edi */
  push32((uint32_t)(EDI));
  /* 1000d72f push esi */
  push32((uint32_t)(ESI));
  /* 1000d730 call 0x1000c044 */
  push32(0x1000d735u); f_1000c044();
  /* 1000d735 push esi */
  push32((uint32_t)(ESI));
  /* 1000d736 call 0x1000d763 */
  push32(0x1000d73bu); f_1000d763();
  /* 1000d73b push esi */
  push32((uint32_t)(ESI));
  /* 1000d73c mov edi, eax */
  EDI = (EAX);
  /* 1000d73e call 0x1000c0a3 */
  push32(0x1000d743u); f_1000c0a3();
  /* 1000d743 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000d746 mov eax, edi */
  EAX = (EDI);
  /* 1000d748 pop edi */
  EDI = (pop32());
  /* 1000d749 pop esi */
  ESI = (pop32());
  /* 1000d74a ret  */
  ESPCHK(0x1000d706u, _esp0);
  ESP += 4; return;
L_1000d74b:;
  /* 1000d74b call 0x1000bf71 */
  push32(0x1000d750u); f_1000bf71();
  /* 1000d750 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1000d756 call 0x1000bf7a */
  push32(0x1000d75bu); f_1000bf7a();
  /* 1000d75b and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1000d75e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1000d761 pop esi */
  ESI = (pop32());
  /* 1000d762 ret  */
  ESPCHK(0x1000d706u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d763 @ 0x1000d763 (131 bytes, 52 insns) */
void f_1000d763(void) {
  FTRACE(0x1000d763u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000d763 push esi */
  push32((uint32_t)(ESI));
  /* 1000d764 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1000d768 push edi */
  push32((uint32_t)(EDI));
  /* 1000d769 push esi */
  push32((uint32_t)(ESI));
  /* 1000d76a call 0x1000c002 */
  push32(0x1000d76fu); f_1000c002();
  /* 1000d76f cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d772 pop ecx */
  ECX = (pop32());
  /* 1000d773 je 0x1000d7b1 */
  if (C.zf) goto L_1000d7b1;
  /* 1000d775 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d778 je 0x1000d77f */
  if (C.zf) goto L_1000d77f;
  /* 1000d77a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d77d jne 0x1000d795 */
  if (!C.zf) goto L_1000d795;
L_1000d77f:;
  /* 1000d77f push 2 */
  push32((uint32_t)(0x2u));
  /* 1000d781 call 0x1000c002 */
  push32(0x1000d786u); f_1000c002();
  /* 1000d786 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000d788 mov edi, eax */
  EDI = (EAX);
  /* 1000d78a call 0x1000c002 */
  push32(0x1000d78fu); f_1000c002();
  /* 1000d78f pop ecx */
  ECX = (pop32());
  /* 1000d790 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d792 pop ecx */
  ECX = (pop32());
  /* 1000d793 je 0x1000d7b1 */
  if (C.zf) goto L_1000d7b1;
L_1000d795:;
  /* 1000d795 push esi */
  push32((uint32_t)(ESI));
  /* 1000d796 call 0x1000c002 */
  push32(0x1000d79bu); f_1000c002();
  /* 1000d79b pop ecx */
  ECX = (pop32());
  /* 1000d79c push eax */
  push32((uint32_t)(EAX));
  /* 1000d79d call dword ptr [0x1000e0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e0d4))), 0x1000d7a3u);
  /* 1000d7a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000d7a5 jne 0x1000d7b1 */
  if (!C.zf) goto L_1000d7b1;
  /* 1000d7a7 call dword ptr [0x1000e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e03c))), 0x1000d7adu);
  /* 1000d7ad mov edi, eax */
  EDI = (EAX);
  /* 1000d7af jmp 0x1000d7b3 */
  goto L_1000d7b3;
L_1000d7b1:;
  /* 1000d7b1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_1000d7b3:;
  /* 1000d7b3 push esi */
  push32((uint32_t)(ESI));
  /* 1000d7b4 call 0x1000bf83 */
  push32(0x1000d7b9u); f_1000bf83();
  /* 1000d7b9 mov eax, esi */
  EAX = (ESI);
  /* 1000d7bb and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 1000d7be sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1000d7c1 pop ecx */
  ECX = (pop32());
  /* 1000d7c2 mov eax, dword ptr [eax*4 + 0x10017c40] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10017c40)));
  /* 1000d7c9 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 1000d7cc and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 1000d7d1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1000d7d3 je 0x1000d7e1 */
  if (C.zf) goto L_1000d7e1;
  /* 1000d7d5 push edi */
  push32((uint32_t)(EDI));
  /* 1000d7d6 call 0x1000befe */
  push32(0x1000d7dbu); f_1000befe();
  /* 1000d7db pop ecx */
  ECX = (pop32());
  /* 1000d7dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1000d7df jmp 0x1000d7e3 */
  goto L_1000d7e3;
L_1000d7e1:;
  /* 1000d7e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1000d7e3:;
  /* 1000d7e3 pop edi */
  EDI = (pop32());
  /* 1000d7e4 pop esi */
  ESI = (pop32());
  /* 1000d7e5 ret  */
  ESPCHK(0x1000d763u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x1000d7e6 (43 bytes, 17 insns) */
void f_1000d7e6(void) {
  FTRACE(0x1000d7e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000d7e6 push esi */
  push32((uint32_t)(ESI));
  /* 1000d7e7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1000d7eb mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1000d7ee test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 1000d7f0 je 0x1000d80f */
  if (C.zf) goto L_1000d80f;
  /* 1000d7f2 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1000d7f4 je 0x1000d80f */
  if (C.zf) goto L_1000d80f;
  /* 1000d7f6 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 1000d7f9 call 0x1000a1c6 */
  push32(0x1000d7feu); f_1000a1c6();
  /* 1000d7fe and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 1000d804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000d806 pop ecx */
  ECX = (pop32());
  /* 1000d807 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1000d809 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1000d80c mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_1000d80f:;
  /* 1000d80f pop esi */
  ESI = (pop32());
  /* 1000d810 ret  */
  ESPCHK(0x1000d7e6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d820 @ 0x1000d820 (208 bytes, 85 insns) */
void f_1000d820(void) {
  FTRACE(0x1000d820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000d820 push ebp */
  push32((uint32_t)(EBP));
  /* 1000d821 mov ebp, esp */
  EBP = (ESP);
  /* 1000d823 push edi */
  push32((uint32_t)(EDI));
  /* 1000d824 push esi */
  push32((uint32_t)(ESI));
  /* 1000d825 push ebx */
  push32((uint32_t)(EBX));
  /* 1000d826 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1000d829 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1000d82c lea eax, [0x10016840] */
  EAX = ((uint32_t)(0x10016840));
  /* 1000d832 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d836 jne 0x1000d873 */
  if (!C.zf) goto L_1000d873;
  /* 1000d838 mov al, 0xff */
  AL = (0xffu);
  /* 1000d83a mov edi, edi */
  EDI = (EDI);
L_1000d83c:;
  /* 1000d83c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1000d83e je 0x1000d86e */
  if (C.zf) goto L_1000d86e;
  /* 1000d840 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1000d842 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1000d843 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 1000d845 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1000d846 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000d848 je 0x1000d83c */
  if (C.zf) goto L_1000d83c;
  /* 1000d84a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1000d84c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000d84e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1000d850 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1000d853 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1000d855 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1000d857 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 1000d859 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1000d85b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000d85d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1000d85f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1000d862 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1000d864 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1000d866 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000d868 je 0x1000d83c */
  if (C.zf) goto L_1000d83c;
  /* 1000d86a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1000d86c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1000d86e:;
  /* 1000d86e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1000d871 jmp 0x1000d8eb */
  goto L_1000d8eb;
L_1000d873:;
  /* 1000d873 lock inc dword ptr [0x100169c4] */
  x86_unimpl("lock inc @ 0x1000d873");
  /* 1000d87a cmp dword ptr [0x100169c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100169c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d881 jg 0x1000d887 */
  if ((!C.zf&&C.sf==C.of)) goto L_1000d887;
  /* 1000d883 push 0 */
  push32((uint32_t)(0x0u));
  /* 1000d885 jmp 0x1000d89c */
  goto L_1000d89c;
L_1000d887:;
  /* 1000d887 lock dec dword ptr [0x100169c4] */
  x86_unimpl("lock dec @ 0x1000d887");
  /* 1000d88e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1000d890 call 0x1000a013 */
  push32(0x1000d895u); f_1000a013();
  /* 1000d895 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1000d89c:;
  /* 1000d89c mov eax, 0xff */
  EAX = (0xffu);
  /* 1000d8a1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1000d8a3 nop  */
  /* nop */
L_1000d8a4:;
  /* 1000d8a4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1000d8a6 je 0x1000d8cf */
  if (C.zf) goto L_1000d8cf;
  /* 1000d8a8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1000d8aa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1000d8ab mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1000d8ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1000d8ae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000d8b0 je 0x1000d8a4 */
  if (C.zf) goto L_1000d8a4;
  /* 1000d8b2 push eax */
  push32((uint32_t)(EAX));
  /* 1000d8b3 push ebx */
  push32((uint32_t)(EBX));
  /* 1000d8b4 call 0x100094af */
  push32(0x1000d8b9u); f_100094af();
  /* 1000d8b9 mov ebx, eax */
  EBX = (EAX);
  /* 1000d8bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000d8be call 0x100094af */
  push32(0x1000d8c3u); f_100094af();
  /* 1000d8c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000d8c6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000d8c8 je 0x1000d8a4 */
  if (C.zf) goto L_1000d8a4;
  /* 1000d8ca sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000d8cc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1000d8cf:;
  /* 1000d8cf mov ebx, eax */
  EBX = (EAX);
  /* 1000d8d1 pop eax */
  EAX = (pop32());
  /* 1000d8d2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000d8d4 jne 0x1000d8df */
  if (!C.zf) goto L_1000d8df;
  /* 1000d8d6 lock dec dword ptr [0x100169c4] */
  x86_unimpl("lock dec @ 0x1000d8d6");
  /* 1000d8dd jmp 0x1000d8e9 */
  goto L_1000d8e9;
L_1000d8df:;
  /* 1000d8df push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1000d8e1 call 0x1000a074 */
  push32(0x1000d8e6u); f_1000a074();
  /* 1000d8e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000d8e9:;
  /* 1000d8e9 mov eax, ebx */
  EAX = (EBX);
L_1000d8eb:;
  /* 1000d8eb pop ebx */
  EBX = (pop32());
  /* 1000d8ec pop esi */
  ESI = (pop32());
  /* 1000d8ed pop edi */
  EDI = (pop32());
  /* 1000d8ee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000d8ef ret  */
  ESPCHK(0x1000d820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8f0 @ 0x1000d8f0 (257 bytes, 103 insns) */
void f_1000d8f0(void) {
  FTRACE(0x1000d8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000d8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1000d8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1000d8f3 push edi */
  push32((uint32_t)(EDI));
  /* 1000d8f4 push esi */
  push32((uint32_t)(ESI));
  /* 1000d8f5 push ebx */
  push32((uint32_t)(EBX));
  /* 1000d8f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1000d8f9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1000d8fb je 0x1000d9ea */
  if (C.zf) goto L_1000d9ea;
  /* 1000d901 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1000d904 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1000d907 lea eax, [0x10016840] */
  EAX = ((uint32_t)(0x10016840));
  /* 1000d90d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d911 jne 0x1000d961 */
  if (!C.zf) goto L_1000d961;
  /* 1000d913 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 1000d915 mov bl, 0x5a */
  BL = (0x5au);
  /* 1000d917 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 1000d919 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1000d91c:;
  /* 1000d91c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1000d91e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1000d920 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1000d922 je 0x1000d945 */
  if (C.zf) goto L_1000d945;
  /* 1000d924 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1000d926 je 0x1000d945 */
  if (C.zf) goto L_1000d945;
  /* 1000d928 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1000d929 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1000d92a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000d92c jb 0x1000d934 */
  if (C.cf) goto L_1000d934;
  /* 1000d92e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000d930 ja 0x1000d934 */
  if ((!C.cf&&!C.zf)) goto L_1000d934;
  /* 1000d932 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_1000d934:;
  /* 1000d934 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000d936 jb 0x1000d93e */
  if (C.cf) goto L_1000d93e;
  /* 1000d938 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000d93a ja 0x1000d93e */
  if ((!C.cf&&!C.zf)) goto L_1000d93e;
  /* 1000d93c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1000d93e:;
  /* 1000d93e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000d940 jne 0x1000d94f */
  if (!C.zf) goto L_1000d94f;
  /* 1000d942 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1000d943 jne 0x1000d91c */
  if (!C.zf) goto L_1000d91c;
L_1000d945:;
  /* 1000d945 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1000d947 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000d949 je 0x1000d9ea */
  if (C.zf) goto L_1000d9ea;
L_1000d94f:;
  /* 1000d94f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1000d954 jb 0x1000d9ea */
  if (C.cf) goto L_1000d9ea;
  /* 1000d95a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1000d95c jmp 0x1000d9ea */
  goto L_1000d9ea;
L_1000d961:;
  /* 1000d961 lock inc dword ptr [0x100169c4] */
  x86_unimpl("lock inc @ 0x1000d961");
  /* 1000d968 cmp dword ptr [0x100169c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100169c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d96f jg 0x1000d975 */
  if ((!C.zf&&C.sf==C.of)) goto L_1000d975;
  /* 1000d971 push 0 */
  push32((uint32_t)(0x0u));
  /* 1000d973 jmp 0x1000d98e */
  goto L_1000d98e;
L_1000d975:;
  /* 1000d975 lock dec dword ptr [0x100169c4] */
  x86_unimpl("lock dec @ 0x1000d975");
  /* 1000d97c mov ebx, ecx */
  EBX = (ECX);
  /* 1000d97e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1000d980 call 0x1000a013 */
  push32(0x1000d985u); f_1000a013();
  /* 1000d985 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1000d98c mov ecx, ebx */
  ECX = (EBX);
L_1000d98e:;
  /* 1000d98e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000d990 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1000d992 mov edi, edi */
  EDI = (EDI);
L_1000d994:;
  /* 1000d994 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1000d996 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000d998 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1000d99a je 0x1000d9bf */
  if (C.zf) goto L_1000d9bf;
  /* 1000d99c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1000d99e je 0x1000d9bf */
  if (C.zf) goto L_1000d9bf;
  /* 1000d9a0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1000d9a1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1000d9a2 push ecx */
  push32((uint32_t)(ECX));
  /* 1000d9a3 push eax */
  push32((uint32_t)(EAX));
  /* 1000d9a4 push ebx */
  push32((uint32_t)(EBX));
  /* 1000d9a5 call 0x100094af */
  push32(0x1000d9aau); f_100094af();
  /* 1000d9aa mov ebx, eax */
  EBX = (EAX);
  /* 1000d9ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000d9af call 0x100094af */
  push32(0x1000d9b4u); f_100094af();
  /* 1000d9b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000d9b7 pop ecx */
  ECX = (pop32());
  /* 1000d9b8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d9ba jne 0x1000d9c5 */
  if (!C.zf) goto L_1000d9c5;
  /* 1000d9bc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1000d9bd jne 0x1000d994 */
  if (!C.zf) goto L_1000d994;
L_1000d9bf:;
  /* 1000d9bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1000d9c1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000d9c3 je 0x1000d9ce */
  if (C.zf) goto L_1000d9ce;
L_1000d9c5:;
  /* 1000d9c5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1000d9ca jb 0x1000d9ce */
  if (C.cf) goto L_1000d9ce;
  /* 1000d9cc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1000d9ce:;
  /* 1000d9ce pop eax */
  EAX = (pop32());
  /* 1000d9cf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000d9d1 jne 0x1000d9dc */
  if (!C.zf) goto L_1000d9dc;
  /* 1000d9d3 lock dec dword ptr [0x100169c4] */
  x86_unimpl("lock dec @ 0x1000d9d3");
  /* 1000d9da jmp 0x1000d9ea */
  goto L_1000d9ea;
L_1000d9dc:;
  /* 1000d9dc mov ebx, ecx */
  EBX = (ECX);
  /* 1000d9de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1000d9e0 call 0x1000a074 */
  push32(0x1000d9e5u); f_1000a074();
  /* 1000d9e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000d9e8 mov ecx, ebx */
  ECX = (EBX);
L_1000d9ea:;
  /* 1000d9ea mov eax, ecx */
  EAX = (ECX);
  /* 1000d9ec pop ebx */
  EBX = (pop32());
  /* 1000d9ed pop esi */
  ESI = (pop32());
  /* 1000d9ee pop edi */
  EDI = (pop32());
  /* 1000d9ef leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000d9f0 ret  */
  ESPCHK(0x1000d8f0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x1000da34 (6 bytes, 1 insns) */
void f_1000da34(void) {
  FTRACE(0x1000da34u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000da34 jmp dword ptr [0x1000e0cc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1000e0cc)))); return;
}

